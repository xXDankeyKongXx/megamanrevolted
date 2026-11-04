#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80226CC0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226CC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226CC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226CCC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226CD0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226CD4: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80226CD8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80226CDC: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80226CE0: beq         $v1, $zero, L_80226CF8
    if (ctx->r3 == 0) {
        // 0x80226CE4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226CF8;
    }
    // 0x80226CE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226CE8: beq         $v1, $v0, L_80226D48
    if (ctx->r3 == ctx->r2) {
        // 0x80226CEC: nop
    
            goto L_80226D48;
    }
    // 0x80226CEC: nop

    // 0x80226CF0: j           L_80226D88
    // 0x80226CF4: nop

        goto L_80226D88;
    // 0x80226CF4: nop

L_80226CF8:
    // 0x80226CF8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226CFC: jal         0x8005FA7C
    // 0x80226D00: addiu       $a0, $a0, 0x5D00
    ctx->r4 = ADD32(ctx->r4, 0X5D00);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80226D00: addiu       $a0, $a0, 0x5D00
    ctx->r4 = ADD32(ctx->r4, 0X5D00);
    after_0:
    // 0x80226D04: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x80226D08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226D0C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226D10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226D14: andi        $v1, $v1, 0xDF
    ctx->r3 = ctx->r3 & 0XDF;
    // 0x80226D18: jal         0x8005F6B4
    // 0x80226D1C: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x80226D1C: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    after_1:
    // 0x80226D20: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226D24: addiu       $v0, $v0, 0x5D14
    ctx->r2 = ADD32(ctx->r2, 0X5D14);
    // 0x80226D28: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226D2C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226D30: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226D34: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80226D38: addiu       $v1, $v1, 0x5DB4
    ctx->r3 = ADD32(ctx->r3, 0X5DB4);
    // 0x80226D3C: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
    // 0x80226D40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226D44: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80226D48:
    // 0x80226D48: jal         0x8006FF84
    // 0x80226D4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_2;
    // 0x80226D4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80226D50: beq         $v0, $zero, L_80226D88
    if (ctx->r2 == 0) {
        // 0x80226D54: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80226D88;
    }
    // 0x80226D54: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80226D58: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80226D5C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x80226D60: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80226D64: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80226D68: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80226D6C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226D70: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226D74: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80226D78: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x80226D7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226D80: jal         0x800600F8
    // 0x80226D84: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_3;
    // 0x80226D84: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_3:
L_80226D88:
    // 0x80226D88: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226D8C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226D90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226D94: jr          $ra
    // 0x80226D98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226D98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234040_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234044: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234048: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023404C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234050: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80234054: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234058: lw          $v0, 0x7188($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7188);
    // 0x8023405C: jalr        $v0
    // 0x80234060: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80234060: nop

    after_0:
    // 0x80234064: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234068: jr          $ra
    // 0x8023406C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023406C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A3B4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A3B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A3B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A3BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A3C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A3C4: lbu         $t0, 0x0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A3C8: addiu       $v0, $zero, 0x1F4
    ctx->r2 = ADD32(0, 0X1F4);
    // 0x8022A3CC: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022A3D0: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022A3D4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022A3D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A3DC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A3E0: addiu       $v0, $zero, -0xA0
    ctx->r2 = ADD32(0, -0XA0);
    // 0x8022A3E4: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022A3E8: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x8022A3EC: lh          $t1, 0x16($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X16);
    // 0x8022A3F0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A3F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A3F8: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022A3FC: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8022A400: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022A404: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x8022A408: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x8022A40C: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022A410: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022A414: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022A418: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022A41C: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022A420: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022A424: ori         $t0, $t0, 0x2
    ctx->r8 = ctx->r8 | 0X2;
    // 0x8022A428: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A42C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022A430: sll         $t1, $t1, 16
    ctx->r9 = S32(ctx->r9 << 16);
    // 0x8022A434: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
    // 0x8022A438: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x8022A43C: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8022A440: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    // 0x8022A444: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x8022A448: sw          $t1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r9;
    // 0x8022A44C: jal         0x8009A3B4
    // 0x8022A450: sw          $t1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r9;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022A450: sw          $t1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r9;
    after_0:
    // 0x8022A454: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022A458: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022A45C: jal         0x8009A3B4
    // 0x8022A460: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A460: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022A464: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A468: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022A46C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022A470: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022A474: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022A478: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022A47C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022A480: jal         0x8004D5D4
    // 0x8022A484: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x8022A484: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022A488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A48C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A490: jal         0x80050294
    // 0x8022A494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022A494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022A498: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A49C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022A4A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A4A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A4A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A4AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A4B0: jr          $ra
    // 0x8022A4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023027C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023027C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230280: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230284: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80230288: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023028C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80230290: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230294: lw          $v0, 0x6BCC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6BCC);
    // 0x80230298: jalr        $v0
    // 0x8023029C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023029C: nop

    after_0:
    // 0x802302A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802302A4: jr          $ra
    // 0x802302A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802302A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228894_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228898: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022889C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802288A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802288A4: jal         0x80229D98
    // 0x802288A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80229D98_ovl12(rdram, ctx);
        goto after_0;
    // 0x802288A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802288AC: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x802288B0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802288B4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802288B8: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x802288BC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802288C0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802288C4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802288C8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802288CC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x802288D0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x802288D4: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x802288D8: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x802288DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802288E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802288E4: jr          $ra
    // 0x802288E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802288E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227594_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227594: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227598: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022759C: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802275A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802275A4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802275A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802275AC: lw          $v0, 0x5DF0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5DF0);
    // 0x802275B0: jalr        $v0
    // 0x802275B4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802275B4: nop

    after_0:
    // 0x802275B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802275BC: jr          $ra
    // 0x802275C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802275C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B394_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B394: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B398: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B39C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B3A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B3A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B3A8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B3AC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022B3B0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022B3B4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022B3B8: beq         $v0, $zero, L_8022B574
    if (ctx->r2 == 0) {
        // 0x8022B3BC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022B574;
    }
    // 0x8022B3BC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022B3C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B3C4: addu        $at, $at, $v0
    gpr jr_addend_8022B3CC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B3C8: lw          $v0, 0x7408($at)
    ctx->r2 = ADD32(ctx->r1, 0X7408);
    // 0x8022B3CC: jr          $v0
    // 0x8022B3D0: nop

    switch (jr_addend_8022B3CC >> 2) {
        case 0: goto L_8022B3D4; break;
        case 1: goto L_8022B494; break;
        case 2: goto L_8022B4B0; break;
        case 3: goto L_8022B518; break;
        case 4: goto L_8022B544; break;
        default: switch_error(__func__, 0x8022B3CC, 0x80237408);
    }
    // 0x8022B3D0: nop

L_8022B3D4:
    // 0x8022B3D4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B3D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B3DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B3E0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022B3E4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022B3E8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022B3EC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022B3F0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B3F4: jal         0x8004D5D4
    // 0x8022B3F8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022B3F8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022B3FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B400: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B404: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022B408: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022B40C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022B410: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B414: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B418: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022B41C: addiu       $v0, $v0, 0x65D0
    ctx->r2 = ADD32(ctx->r2, 0X65D0);
    // 0x8022B420: jal         0x8003E934
    // 0x8022B424: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022B424: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022B428: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B42C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B430: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B434: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022B438: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022B43C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022B440: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B444: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B448: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B44C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022B450: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022B454: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022B458: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022B45C: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022B460: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022B464: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022B468: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022B46C: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022B470: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022B474: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022B478: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022B47C: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022B480: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B484: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022B488: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B48C: j           L_8022B574
    // 0x8022B490: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_8022B574;
    // 0x8022B490: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022B494:
    // 0x8022B494: jal         0x8022B720
    // 0x8022B498: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B720_ovl12(rdram, ctx);
        goto after_2;
    // 0x8022B498: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022B49C: beq         $v0, $zero, L_8022B578
    if (ctx->r2 == 0) {
        // 0x8022B4A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B578;
    }
    // 0x8022B4A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B4A4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B4A8: j           L_8022B570
    // 0x8022B4AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B570;
    // 0x8022B4AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B4B0:
    // 0x8022B4B0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B4B4: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022B4B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B4BC: jal         0x8004F820
    // 0x8022B4C0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022B4C0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022B4C4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B4C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B4CC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B4D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B4D4: bne         $v0, $zero, L_8022B574
    if (ctx->r2 != 0) {
        // 0x8022B4D8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022B574;
    }
    // 0x8022B4D8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B4DC: jal         0x8003516C
    // 0x8022B4E0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_4;
    // 0x8022B4E0: nop

    after_4:
    // 0x8022B4E4: bne         $v0, $zero, L_8022B578
    if (ctx->r2 != 0) {
        // 0x8022B4E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B578;
    }
    // 0x8022B4E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B4EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B4F0: jal         0x800616FC
    // 0x8022B4F4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8022B4F4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_5:
    // 0x8022B4F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B4FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022B500: jal         0x80050294
    // 0x8022B504: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8022B504: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022B508: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B50C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B510: j           L_8022B570
    // 0x8022B514: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B570;
    // 0x8022B514: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B518:
    // 0x8022B518: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B51C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022B520: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022B524: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022B528: bne         $v0, $zero, L_8022B578
    if (ctx->r2 != 0) {
        // 0x8022B52C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B578;
    }
    // 0x8022B52C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B530: jal         0x80034E3C
    // 0x8022B534: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_7;
    // 0x8022B534: nop

    after_7:
    // 0x8022B538: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B53C: j           L_8022B570
    // 0x8022B540: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B570;
    // 0x8022B540: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B544:
    // 0x8022B544: jal         0x8003516C
    // 0x8022B548: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_8;
    // 0x8022B548: nop

    after_8:
    // 0x8022B54C: bne         $v0, $zero, L_8022B578
    if (ctx->r2 != 0) {
        // 0x8022B550: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B578;
    }
    // 0x8022B550: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B554: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022B558: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022B55C: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022B560: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B564: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8022B568: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B56C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_8022B570:
    // 0x8022B570: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B574:
    // 0x8022B574: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022B578:
    // 0x8022B578: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022B57C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022B580: jal         0x80047284
    // 0x8022B584: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x8022B584: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x8022B588: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B58C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B590: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B594: jr          $ra
    // 0x8022B598: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B598: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230C8C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230C90: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230C94: jal         0x8006033C
    // 0x80230C98: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80230C98: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_0:
    // 0x80230C9C: beq         $v0, $zero, L_80230CD4
    if (ctx->r2 == 0) {
        // 0x80230CA0: nop
    
            goto L_80230CD4;
    }
    // 0x80230CA0: nop

    // 0x80230CA4: jal         0x8006033C
    // 0x80230CA8: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80230CA8: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_1:
    // 0x80230CAC: beq         $v0, $zero, L_80230CD4
    if (ctx->r2 == 0) {
        // 0x80230CB0: nop
    
            goto L_80230CD4;
    }
    // 0x80230CB0: nop

    // 0x80230CB4: jal         0x80060590
    // 0x80230CB8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x80230CB8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_2:
    // 0x80230CBC: jal         0x80060590
    // 0x80230CC0: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80230CC0: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_3:
    // 0x80230CC4: jal         0x80060C1C
    // 0x80230CC8: addiu       $a0, $zero, 0x2E0
    ctx->r4 = ADD32(0, 0X2E0);
    func_80060C1C_3C01C(rdram, ctx);
        goto after_4;
    // 0x80230CC8: addiu       $a0, $zero, 0x2E0
    ctx->r4 = ADD32(0, 0X2E0);
    after_4:
    // 0x80230CCC: j           L_80230D28
    // 0x80230CD0: nop

        goto L_80230D28;
    // 0x80230CD0: nop

L_80230CD4:
    // 0x80230CD4: jal         0x8006033C
    // 0x80230CD8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80230CD8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_5:
    // 0x80230CDC: bne         $v0, $zero, L_80230CF4
    if (ctx->r2 != 0) {
        // 0x80230CE0: nop
    
            goto L_80230CF4;
    }
    // 0x80230CE0: nop

    // 0x80230CE4: jal         0x8006033C
    // 0x80230CE8: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80230CE8: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_6:
    // 0x80230CEC: bne         $v0, $zero, L_80230D20
    if (ctx->r2 != 0) {
        // 0x80230CF0: addiu       $a0, $zero, 0x220
        ctx->r4 = ADD32(0, 0X220);
            goto L_80230D20;
    }
    // 0x80230CF0: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
L_80230CF4:
    // 0x80230CF4: jal         0x8006033C
    // 0x80230CF8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80230CF8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_7:
    // 0x80230CFC: beq         $v0, $zero, L_80230D20
    if (ctx->r2 == 0) {
        // 0x80230D00: addiu       $a0, $zero, 0x220
        ctx->r4 = ADD32(0, 0X220);
            goto L_80230D20;
    }
    // 0x80230D00: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    // 0x80230D04: jal         0x8006033C
    // 0x80230D08: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x80230D08: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_8:
    // 0x80230D0C: bne         $v0, $zero, L_80230D20
    if (ctx->r2 != 0) {
        // 0x80230D10: addiu       $a0, $zero, 0x220
        ctx->r4 = ADD32(0, 0X220);
            goto L_80230D20;
    }
    // 0x80230D10: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    // 0x80230D14: jal         0x80060590
    // 0x80230D18: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_80060590_3B990(rdram, ctx);
        goto after_9;
    // 0x80230D18: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_9:
    // 0x80230D1C: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
L_80230D20:
    // 0x80230D20: jal         0x8006036C
    // 0x80230D24: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x80230D24: nop

    after_10:
L_80230D28:
    // 0x80230D28: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230D2C: jr          $ra
    // 0x80230D30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230D30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229D48_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D48: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x80229D4C: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x80229D50: jr          $ra
    // 0x80229D54: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x80229D54: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_80225EF0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225EF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225EF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225EF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225EFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225F00: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225F04: beq         $v1, $zero, L_80225F1C
    if (ctx->r3 == 0) {
        // 0x80225F08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225F1C;
    }
    // 0x80225F08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225F0C: beq         $v1, $v0, L_80225F5C
    if (ctx->r3 == ctx->r2) {
        // 0x80225F10: nop
    
            goto L_80225F5C;
    }
    // 0x80225F10: nop

    // 0x80225F14: j           L_80225F90
    // 0x80225F18: nop

        goto L_80225F90;
    // 0x80225F18: nop

L_80225F1C:
    // 0x80225F1C: jal         0x80226178
    // 0x80225F20: nop

    func_80226178_ovl12(rdram, ctx);
        goto after_0;
    // 0x80225F20: nop

    after_0:
    // 0x80225F24: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225F28: jal         0x800607C4
    // 0x80225F2C: addiu       $a0, $a0, 0x5A7C
    ctx->r4 = ADD32(ctx->r4, 0X5A7C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_1;
    // 0x80225F2C: addiu       $a0, $a0, 0x5A7C
    ctx->r4 = ADD32(ctx->r4, 0X5A7C);
    after_1:
    // 0x80225F30: jal         0x8006033C
    // 0x80225F34: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225F34: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_2:
    // 0x80225F38: beq         $v0, $zero, L_80225F50
    if (ctx->r2 == 0) {
        // 0x80225F3C: nop
    
            goto L_80225F50;
    }
    // 0x80225F3C: nop

    // 0x80225F40: jal         0x80060AAC
    // 0x80225F44: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_3;
    // 0x80225F44: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x80225F48: jal         0x80060AAC
    // 0x80225F4C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_4;
    // 0x80225F4C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_4:
L_80225F50:
    // 0x80225F50: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225F54: j           L_80225F8C
    // 0x80225F58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225F8C;
    // 0x80225F58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225F5C:
    // 0x80225F5C: jal         0x8006033C
    // 0x80225F60: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80225F60: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    after_5:
    // 0x80225F64: bne         $v0, $zero, L_80225F7C
    if (ctx->r2 != 0) {
        // 0x80225F68: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225F7C;
    }
    // 0x80225F68: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80225F6C: jal         0x8006033C
    // 0x80225F70: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80225F70: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_6:
    // 0x80225F74: beq         $v0, $zero, L_80225F90
    if (ctx->r2 == 0) {
        // 0x80225F78: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225F90;
    }
    // 0x80225F78: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_80225F7C:
    // 0x80225F7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225F80: jal         0x80060DA0
    // 0x80225F84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_7;
    // 0x80225F84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80225F88: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225F8C:
    // 0x80225F8C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225F90:
    // 0x80225F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225F94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F98: jr          $ra
    // 0x80225F9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225F9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023104C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023104C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231050: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80231054: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231058: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023105C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80231060: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80231064: lbu         $s1, 0xA($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0XA);
    // 0x80231068: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8023106C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80231070: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231074: beq         $s1, $v0, L_802310DC
    if (ctx->r17 == ctx->r2) {
        // 0x80231078: slti        $v0, $s1, 0x2
        ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
            goto L_802310DC;
    }
    // 0x80231078: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x8023107C: beql        $v0, $zero, L_80231094
    if (ctx->r2 == 0) {
        // 0x80231080: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231094;
    }
    goto skip_0;
    // 0x80231080: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80231084: beq         $s1, $zero, L_802310A4
    if (ctx->r17 == 0) {
        // 0x80231088: nop
    
            goto L_802310A4;
    }
    // 0x80231088: nop

    // 0x8023108C: j           L_80231204
    // 0x80231090: nop

        goto L_80231204;
    // 0x80231090: nop

L_80231094:
    // 0x80231094: beq         $s1, $v0, L_802311CC
    if (ctx->r17 == ctx->r2) {
        // 0x80231098: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_802311CC;
    }
    // 0x80231098: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8023109C: j           L_80231204
    // 0x802310A0: nop

        goto L_80231204;
    // 0x802310A0: nop

L_802310A4:
    // 0x802310A4: jal         0x8006FF84
    // 0x802310A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802310A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x802310AC: beq         $v0, $zero, L_80231204
    if (ctx->r2 == 0) {
        // 0x802310B0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80231204;
    }
    // 0x802310B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802310B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802310B8: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x802310BC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802310C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802310C4: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x802310C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802310CC: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x802310D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802310D4: j           L_802311BC
    // 0x802310D8: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
        goto L_802311BC;
    // 0x802310D8: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
L_802310DC:
    // 0x802310DC: jal         0x80231654
    // 0x802310E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231654_ovl12(rdram, ctx);
        goto after_1;
    // 0x802310E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802310E4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802310E8: beql        $v0, $zero, L_802311AC
    if (ctx->r2 == 0) {
        // 0x802310EC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802311AC;
    }
    goto skip_1;
    // 0x802310EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_1:
    // 0x802310F0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802310F4: bne         $v0, $zero, L_80231118
    if (ctx->r2 != 0) {
        // 0x802310F8: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80231118;
    }
    // 0x802310F8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802310FC: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80231100: lb          $a3, 0xE($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XE);
    // 0x80231104: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80231108: jal         0x800610AC
    // 0x8023110C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x8023110C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80231110: j           L_802311BC
    // 0x80231114: nop

        goto L_802311BC;
    // 0x80231114: nop

L_80231118:
    // 0x80231118: beq         $v0, $s1, L_802311BC
    if (ctx->r2 == ctx->r17) {
        // 0x8023111C: andi        $v0, $v0, 0x80
        ctx->r2 = ctx->r2 & 0X80;
            goto L_802311BC;
    }
    // 0x8023111C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80231120: beq         $v0, $zero, L_8023116C
    if (ctx->r2 == 0) {
        // 0x80231124: andi        $v0, $a0, 0x7F
        ctx->r2 = ctx->r4 & 0X7F;
            goto L_8023116C;
    }
    // 0x80231124: andi        $v0, $a0, 0x7F
    ctx->r2 = ctx->r4 & 0X7F;
    // 0x80231128: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8023112C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80231130: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80231134: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80231138: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023113C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80231140: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x80231144: ori         $v0, $v0, 0xCCCD
    ctx->r2 = ctx->r2 | 0XCCCD;
    // 0x80231148: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023114C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80231150: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231154: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80231158: mfhi        $t0
    ctx->r8 = hi;
    // 0x8023115C: nop

    // 0x80231160: nop

    // 0x80231164: j           L_8023118C
    // 0x80231168: srl         $a2, $t0, 3
    ctx->r6 = S32(U32(ctx->r8) >> 3);
        goto L_8023118C;
    // 0x80231168: srl         $a2, $t0, 3
    ctx->r6 = S32(U32(ctx->r8) >> 3);
L_8023116C:
    // 0x8023116C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80231170: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80231174: beq         $v1, $v0, L_802311A8
    if (ctx->r3 == ctx->r2) {
        // 0x80231178: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_802311A8;
    }
    // 0x80231178: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8023117C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80231180: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231184: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x80231188: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_8023118C:
    // 0x8023118C: jal         0x80069754
    // 0x80231190: nop

    func_80069754_44B54(rdram, ctx);
        goto after_3;
    // 0x80231190: nop

    after_3:
    // 0x80231194: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80231198: jal         0x8006036C
    // 0x8023119C: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8023119C: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_4:
    // 0x802311A0: j           L_802311BC
    // 0x802311A4: nop

        goto L_802311BC;
    // 0x802311A4: nop

L_802311A8:
    // 0x802311A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_802311AC:
    // 0x802311AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802311B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802311B4: jal         0x80069754
    // 0x802311B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_5;
    // 0x802311B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_802311BC:
    // 0x802311BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802311C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802311C4: j           L_80231204
    // 0x802311C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80231204;
    // 0x802311C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802311CC:
    // 0x802311CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802311D0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802311D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802311D8: bne         $v0, $zero, L_80231204
    if (ctx->r2 != 0) {
        // 0x802311DC: nop
    
            goto L_80231204;
    }
    // 0x802311DC: nop

    // 0x802311E0: jal         0x80070050
    // 0x802311E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x802311E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x802311E8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x802311EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802311F0: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x802311F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802311F8: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x802311FC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80231200: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80231204:
    // 0x80231204: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80231208: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023120C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80231210: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80231214: jr          $ra
    // 0x80231218: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80231218: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023415C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023415C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80234160: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80234164: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80234168: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8023416C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80234170: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80234174: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80234178: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8023417C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80234180: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80234184: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x80234188: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8023418C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80234190: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234194: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234198: lui         $s5, 0x8023
    ctx->r21 = S32(0X8023 << 16);
    // 0x8023419C: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x802341A0: lhu         $s5, 0x70C4($s5)
    ctx->r21 = MEM_HU(ctx->r21, 0X70C4);
    // 0x802341A4: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x802341A8: lui         $s6, 0x8023
    ctx->r22 = S32(0X8023 << 16);
    // 0x802341AC: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x802341B0: lhu         $s6, 0x70C6($s6)
    ctx->r22 = MEM_HU(ctx->r22, 0X70C6);
    // 0x802341B4: jal         0x800874D0
    // 0x802341B8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x802341B8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x802341BC: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x802341C0: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x802341C4: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x802341C8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802341CC: addiu       $a0, $a0, 0x7710
    ctx->r4 = ADD32(ctx->r4, 0X7710);
    // 0x802341D0: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x802341D4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802341D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802341DC: lbu         $v1, 0x7168($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7168);
    // 0x802341E0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x802341E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802341E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802341EC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x802341F0: jal         0x80086F94
    // 0x802341F4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x802341F4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x802341F8: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x802341FC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80234200: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234204: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234208: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8023420C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234210: lhu         $v0, 0x70C8($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X70C8);
    // 0x80234214: beq         $v0, $zero, L_80234430
    if (ctx->r2 == 0) {
        // 0x80234218: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_80234430;
    }
    // 0x80234218: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_8023421C:
    // 0x8023421C: bgez        $s6, L_80234228
    if (SIGNED(ctx->r22) >= 0) {
        // 0x80234220: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_80234228;
    }
    // 0x80234220: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x80234224: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_80234228:
    // 0x80234228: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023422C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80234230: beq         $v0, $zero, L_802344EC
    if (ctx->r2 == 0) {
        // 0x80234234: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_802344EC;
    }
    // 0x80234234: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80234238: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023423C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x80234240: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x80234244: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x80234248: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023424C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80234250: jal         0x800874D0
    // 0x80234254: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x80234254: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x80234258: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023425C: jal         0x80087248
    // 0x80234260: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x80234260: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x80234264: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80234268: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023426C: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x80234270: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x80234274: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x80234278: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023427C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80234280: jal         0x800874D0
    // 0x80234284: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x80234284: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x80234288: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023428C: jal         0x80087248
    // 0x80234290: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x80234290: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x80234294: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x80234298: bgez        $s5, L_802342A4
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8023429C: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_802342A4;
    }
    // 0x8023429C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x802342A0: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_802342A4:
    // 0x802342A4: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x802342A8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802342AC: jal         0x800874D0
    // 0x802342B0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x802342B0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x802342B4: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x802342B8: jal         0x80087248
    // 0x802342BC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x802342BC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x802342C0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802342C4: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x802342C8: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x802342CC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802342D0: bnel        $v0, $zero, L_8023421C
    if (ctx->r2 != 0) {
        // 0x802342D4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8023421C;
    }
    goto skip_0;
    // 0x802342D4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x802342D8: beq         $a1, $zero, L_80234428
    if (ctx->r5 == 0) {
        // 0x802342DC: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_80234428;
    }
    // 0x802342DC: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x802342E0: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x802342E4: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x802342E8: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_802342EC:
    // 0x802342EC: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x802342F0: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x802342F4: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x802342F8: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x802342FC: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x80234300: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x80234304: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x80234308: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023430C: mflo        $a3
    ctx->r7 = lo;
    // 0x80234310: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x80234314: nop

    // 0x80234318: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x8023431C: bne         $a1, $zero, L_80234328
    if (ctx->r5 != 0) {
        // 0x80234320: nop
    
            goto L_80234328;
    }
    // 0x80234320: nop

    // 0x80234324: break       7
    do_break(2149794596);
L_80234328:
    // 0x80234328: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023432C: bne         $a1, $at, L_80234340
    if (ctx->r5 != ctx->r1) {
        // 0x80234330: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80234340;
    }
    // 0x80234330: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80234334: bne         $a3, $at, L_80234340
    if (ctx->r7 != ctx->r1) {
        // 0x80234338: nop
    
            goto L_80234340;
    }
    // 0x80234338: nop

    // 0x8023433C: break       6
    do_break(2149794620);
L_80234340:
    // 0x80234340: mflo        $a3
    ctx->r7 = lo;
    // 0x80234344: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x80234348: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x8023434C: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x80234350: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80234354: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x80234358: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023435C: mflo        $v0
    ctx->r2 = lo;
    // 0x80234360: nop

    // 0x80234364: nop

    // 0x80234368: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8023436C: bne         $a1, $zero, L_80234378
    if (ctx->r5 != 0) {
        // 0x80234370: nop
    
            goto L_80234378;
    }
    // 0x80234370: nop

    // 0x80234374: break       7
    do_break(2149794676);
L_80234378:
    // 0x80234378: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023437C: bne         $a1, $at, L_80234390
    if (ctx->r5 != ctx->r1) {
        // 0x80234380: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80234390;
    }
    // 0x80234380: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80234384: bne         $v0, $at, L_80234390
    if (ctx->r2 != ctx->r1) {
        // 0x80234388: nop
    
            goto L_80234390;
    }
    // 0x80234388: nop

    // 0x8023438C: break       6
    do_break(2149794700);
L_80234390:
    // 0x80234390: mflo        $v0
    ctx->r2 = lo;
    // 0x80234394: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80234398: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x8023439C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x802343A0: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x802343A4: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x802343A8: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802343AC: mflo        $v1
    ctx->r3 = lo;
    // 0x802343B0: nop

    // 0x802343B4: nop

    // 0x802343B8: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x802343BC: bne         $a1, $zero, L_802343C8
    if (ctx->r5 != 0) {
        // 0x802343C0: nop
    
            goto L_802343C8;
    }
    // 0x802343C0: nop

    // 0x802343C4: break       7
    do_break(2149794756);
L_802343C8:
    // 0x802343C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802343CC: bne         $a1, $at, L_802343E0
    if (ctx->r5 != ctx->r1) {
        // 0x802343D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802343E0;
    }
    // 0x802343D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802343D4: bne         $v1, $at, L_802343E0
    if (ctx->r3 != ctx->r1) {
        // 0x802343D8: nop
    
            goto L_802343E0;
    }
    // 0x802343D8: nop

    // 0x802343DC: break       6
    do_break(2149794780);
L_802343E0:
    // 0x802343E0: mflo        $v1
    ctx->r3 = lo;
    // 0x802343E4: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x802343E8: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x802343EC: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x802343F0: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x802343F4: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x802343F8: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x802343FC: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x80234400: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80234404: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x80234408: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x8023440C: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x80234410: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80234414: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80234418: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x8023441C: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x80234420: bne         $v0, $zero, L_802342EC
    if (ctx->r2 != 0) {
        // 0x80234424: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_802342EC;
    }
    // 0x80234424: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_80234428:
    // 0x80234428: j           L_8023421C
    // 0x8023442C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8023421C;
    // 0x8023442C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80234430:
    // 0x80234430: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x80234434: bne         $v0, $zero, L_802344EC
    if (ctx->r2 != 0) {
        // 0x80234438: nop
    
            goto L_802344EC;
    }
    // 0x80234438: nop

L_8023443C:
    // 0x8023443C: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x80234440: bltzl       $v0, L_80234448
    if (SIGNED(ctx->r2) < 0) {
        // 0x80234444: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_80234448;
    }
    goto skip_1;
    // 0x80234444: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_80234448:
    // 0x80234448: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023444C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80234450: beq         $v0, $zero, L_802344EC
    if (ctx->r2 == 0) {
        // 0x80234454: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_802344EC;
    }
    // 0x80234454: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80234458: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023445C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x80234460: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x80234464: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x80234468: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023446C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80234470: jal         0x800874D0
    // 0x80234474: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x80234474: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x80234478: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023447C: jal         0x80087248
    // 0x80234480: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x80234480: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x80234484: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80234488: bgez        $s5, L_80234494
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8023448C: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80234494;
    }
    // 0x8023448C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80234490: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_80234494:
    // 0x80234494: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80234498: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023449C: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x802344A0: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x802344A4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802344A8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802344AC: jal         0x800874D0
    // 0x802344B0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x802344B0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x802344B4: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x802344B8: jal         0x80087248
    // 0x802344BC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x802344BC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x802344C0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802344C4: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x802344C8: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x802344CC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802344D0: bnel        $v0, $zero, L_8023443C
    if (ctx->r2 != 0) {
        // 0x802344D4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8023443C;
    }
    goto skip_2;
    // 0x802344D4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x802344D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802344DC: jal         0x80099F90
    // 0x802344E0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x802344E0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x802344E4: j           L_8023443C
    // 0x802344E8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8023443C;
    // 0x802344E8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_802344EC:
    // 0x802344EC: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x802344F0: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x802344F4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x802344F8: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x802344FC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80234500: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80234504: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80234508: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8023450C: jr          $ra
    // 0x80234510: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80234510: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80228C90_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C90: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80228C94: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228C98: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80228C9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228CA0: bne         $v0, $zero, L_80228CAC
    if (ctx->r2 != 0) {
        // 0x80228CA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228CAC;
    }
    // 0x80228CA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228CA8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80228CAC:
    // 0x80228CAC: jr          $ra
    // 0x80228CB0: nop

    TRACE_RETURN()
    return;
    // 0x80228CB0: nop

;}
RECOMP_FUNC void func_80229348_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229348: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022934C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229350: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229354: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229358: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022935C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80229360: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80229364: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80229368: jal         0x8004FA7C
    // 0x8022936C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022936C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x80229370: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80229374: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80229378: beq         $v0, $zero, L_8022940C
    if (ctx->r2 == 0) {
        // 0x8022937C: nop
    
            goto L_8022940C;
    }
    // 0x8022937C: nop

    // 0x80229380: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80229384: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80229388: bne         $v0, $zero, L_8022940C
    if (ctx->r2 != 0) {
        // 0x8022938C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022940C;
    }
    // 0x8022938C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229390: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80229394: beq         $v1, $v0, L_802293AC
    if (ctx->r3 == ctx->r2) {
        // 0x80229398: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802293AC;
    }
    // 0x80229398: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022939C: beq         $v1, $v0, L_802293DC
    if (ctx->r3 == ctx->r2) {
        // 0x802293A0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802293DC;
    }
    // 0x802293A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802293A4: j           L_80229400
    // 0x802293A8: nop

        goto L_80229400;
    // 0x802293A8: nop

L_802293AC:
    // 0x802293AC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802293B0: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802293B4: bne         $v0, $zero, L_80229400
    if (ctx->r2 != 0) {
        // 0x802293B8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80229400;
    }
    // 0x802293B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802293BC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802293C0: bne         $v0, $zero, L_80229400
    if (ctx->r2 != 0) {
        // 0x802293C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229400;
    }
    // 0x802293C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802293C8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802293CC: bne         $v1, $v0, L_80229400
    if (ctx->r3 != ctx->r2) {
        // 0x802293D0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80229400;
    }
    // 0x802293D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802293D4: j           L_80229400
    // 0x802293D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80229400;
    // 0x802293D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802293DC:
    // 0x802293DC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802293E0: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802293E4: beq         $v0, $zero, L_802293FC
    if (ctx->r2 == 0) {
        // 0x802293E8: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_802293FC;
    }
    // 0x802293E8: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802293EC: bne         $v0, $zero, L_80229400
    if (ctx->r2 != 0) {
        // 0x802293F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80229400;
    }
    // 0x802293F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802293F4: j           L_80229400
    // 0x802293F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80229400;
    // 0x802293F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802293FC:
    // 0x802293FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80229400:
    // 0x80229400: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229404: beq         $v0, $zero, L_80229430
    if (ctx->r2 == 0) {
        // 0x80229408: nop
    
            goto L_80229430;
    }
    // 0x80229408: nop

L_8022940C:
    // 0x8022940C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80229410: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229414: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229418: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022941C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80229420: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80229424: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80229428: j           L_80229440
    // 0x8022942C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80229440;
    // 0x8022942C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229430:
    // 0x80229430: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229434: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229438: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022943C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80229440:
    // 0x80229440: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229444: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229448: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022944C: jr          $ra
    // 0x80229450: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229450: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227994_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227994: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227998: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022799C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802279A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802279A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802279A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802279AC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802279B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802279B4: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x802279B8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802279BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802279C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802279C4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802279C8: addiu       $v1, $v1, 0x5E00
    ctx->r3 = ADD32(ctx->r3, 0X5E00);
    // 0x802279CC: jal         0x80229DE4
    // 0x802279D0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_80229DE4_ovl12(rdram, ctx);
        goto after_0;
    // 0x802279D0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x802279D4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802279D8: beq         $v0, $zero, L_80227AE8
    if (ctx->r2 == 0) {
        // 0x802279DC: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80227AE8;
    }
    // 0x802279DC: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x802279E0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802279E4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802279E8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802279EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802279F0: jal         0x8009A3B4
    // 0x802279F4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802279F4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x802279F8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802279FC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80227A00: jal         0x8009A3B4
    // 0x80227A04: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80227A04: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80227A08: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80227A0C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80227A10: jal         0x8009A3B4
    // 0x80227A14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80227A14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80227A18: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80227A1C: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80227A20: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227A24: beq         $v0, $zero, L_80227A34
    if (ctx->r2 == 0) {
        // 0x80227A28: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80227A34;
    }
    // 0x80227A28: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80227A2C: jal         0x80229C4C
    // 0x80227A30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229C4C_ovl12(rdram, ctx);
        goto after_4;
    // 0x80227A30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80227A34:
    // 0x80227A34: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227A38: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227A3C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227A40: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227A44: lw          $v0, 0x6368($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6368);
    // 0x80227A48: jalr        $v0
    // 0x80227A4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80227A4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80227A50: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227A54: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80227A58: bne         $v0, $zero, L_80227A74
    if (ctx->r2 != 0) {
        // 0x80227A5C: nop
    
            goto L_80227A74;
    }
    // 0x80227A5C: nop

    // 0x80227A60: jal         0x8003E934
    // 0x80227A64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80227A64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80227A68: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227A6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227A70: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80227A74:
    // 0x80227A74: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80227A78: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227A7C: beq         $v0, $a1, L_80227A94
    if (ctx->r2 == ctx->r5) {
        // 0x80227A80: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227A94;
    }
    // 0x80227A80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A84: jal         0x80050294
    // 0x80227A88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80227A88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80227A8C: j           L_80227A9C
    // 0x80227A90: nop

        goto L_80227A9C;
    // 0x80227A90: nop

L_80227A94:
    // 0x80227A94: jal         0x8005044C
    // 0x80227A98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80227A98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_80227A9C:
    // 0x80227A9C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227AA0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227AA4: beq         $v0, $zero, L_80227AC0
    if (ctx->r2 == 0) {
        // 0x80227AA8: nop
    
            goto L_80227AC0;
    }
    // 0x80227AA8: nop

    // 0x80227AAC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x80227AB0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x80227AB4: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x80227AB8: jal         0x8003B564
    // 0x80227ABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x80227ABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_80227AC0:
    // 0x80227AC0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80227AC4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227AC8: beq         $v0, $zero, L_80227AD8
    if (ctx->r2 == 0) {
        // 0x80227ACC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227AD8;
    }
    // 0x80227ACC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227AD0: j           L_80227ADC
    // 0x80227AD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80227ADC;
    // 0x80227AD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80227AD8:
    // 0x80227AD8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80227ADC:
    // 0x80227ADC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80227AE0: jal         0x80047284
    // 0x80227AE4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x80227AE4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_80227AE8:
    // 0x80227AE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227AEC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227AF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227AF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227AF8: jr          $ra
    // 0x80227AFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227AFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D974_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D974: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022D978: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022D97C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D980: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022D984: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022D988: lw          $v0, 0x350($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X350);
    // 0x8022D98C: sltiu       $v0, $v0, 0x64
    ctx->r2 = ctx->r2 < 0X64 ? 1 : 0;
    // 0x8022D990: beq         $v0, $zero, L_8022DA80
    if (ctx->r2 == 0) {
        // 0x8022D994: addiu       $a0, $s1, 0xC4
        ctx->r4 = ADD32(ctx->r17, 0XC4);
            goto L_8022DA80;
    }
    // 0x8022D994: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x8022D998: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8022D99C: jal         0x8009A3B4
    // 0x8022D9A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022D9A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022D9A4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022D9A8: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022D9AC: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022D9B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D9B4: jal         0x8009A3B4
    // 0x8022D9B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D9B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022D9BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D9C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D9C4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8022D9C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D9CC: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8022D9D0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022D9D4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8022D9D8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D9DC: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x8022D9E0: jal         0x8004DF78
    // 0x8022D9E4: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x8022D9E4: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022D9E8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022D9EC: bne         $v0, $zero, L_8022DA84
    if (ctx->r2 != 0) {
        // 0x8022D9F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DA84;
    }
    // 0x8022D9F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D9F4: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022D9F8: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022D9FC: jal         0x8009A3B4
    // 0x8022DA00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022DA00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022DA04: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022DA08: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022DA0C: jal         0x8009A3B4
    // 0x8022DA10: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022DA10: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022DA14: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022DA18: beq         $v0, $zero, L_8022DA34
    if (ctx->r2 == 0) {
        // 0x8022DA1C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022DA34;
    }
    // 0x8022DA1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DA20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DA24: jal         0x80050294
    // 0x8022DA28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022DA28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022DA2C: j           L_8022DA78
    // 0x8022DA30: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_8022DA78;
    // 0x8022DA30: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_8022DA34:
    // 0x8022DA34: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022DA38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DA3C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8022DA40: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022DA44: sltiu       $v0, $v0, 0x3D
    ctx->r2 = ctx->r2 < 0X3D ? 1 : 0;
    // 0x8022DA48: bnel        $v0, $zero, L_8022DA84
    if (ctx->r2 != 0) {
        // 0x8022DA4C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022DA84;
    }
    goto skip_0;
    // 0x8022DA4C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x8022DA50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DA54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022DA58: jal         0x80050294
    // 0x8022DA5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8022DA5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022DA60: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022DA64: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022DA68: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x8022DA6C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022DA70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DA74: sh          $v0, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r2;
L_8022DA78:
    // 0x8022DA78: j           L_8022DA84
    // 0x8022DA7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022DA84;
    // 0x8022DA7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022DA80:
    // 0x8022DA80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022DA84:
    // 0x8022DA84: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022DA88: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DA8C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022DA90: jr          $ra
    // 0x8022DA94: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022DA94: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022DA98: nop

    // 0x8022DA9C: nop

;}
RECOMP_FUNC void func_8023241C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023241C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232420: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80232424: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80232428: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023242C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80232430: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x80232434: addiu       $t0, $a0, 0xD0
    ctx->r8 = ADD32(ctx->r4, 0XD0);
    // 0x80232438: lbu         $s1, 0xDD($a0)
    ctx->r17 = MEM_BU(ctx->r4, 0XDD);
    // 0x8023243C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232440: sra         $a2, $v0, 25
    ctx->r6 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80232444: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x80232448: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023244C: bne         $v1, $v0, L_80232460
    if (ctx->r3 != ctx->r2) {
        // 0x80232450: addiu       $a3, $a2, 0x40
        ctx->r7 = ADD32(ctx->r6, 0X40);
            goto L_80232460;
    }
    // 0x80232450: addiu       $a3, $a2, 0x40
    ctx->r7 = ADD32(ctx->r6, 0X40);
    // 0x80232454: addiu       $v0, $a2, 0x41
    ctx->r2 = ADD32(ctx->r6, 0X41);
    // 0x80232458: j           L_80232464
    // 0x8023245C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
        goto L_80232464;
    // 0x8023245C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_80232460:
    // 0x80232460: sh          $a3, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r7;
L_80232464:
    // 0x80232464: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80232468: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
    // 0x8023246C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232470: sra         $a0, $v0, 25
    ctx->r4 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80232474: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232478: bne         $v1, $v0, L_8023248C
    if (ctx->r3 != ctx->r2) {
        // 0x8023247C: addiu       $a2, $a0, 0x40
        ctx->r6 = ADD32(ctx->r4, 0X40);
            goto L_8023248C;
    }
    // 0x8023247C: addiu       $a2, $a0, 0x40
    ctx->r6 = ADD32(ctx->r4, 0X40);
    // 0x80232480: addiu       $v0, $a0, 0x41
    ctx->r2 = ADD32(ctx->r4, 0X41);
    // 0x80232484: j           L_80232490
    // 0x80232488: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
        goto L_80232490;
    // 0x80232488: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
L_8023248C:
    // 0x8023248C: sh          $a2, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r6;
L_80232490:
    // 0x80232490: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x80232494: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232498: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023249C: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x802324A0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x802324A4: lhu         $v0, 0x18($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X18);
    // 0x802324A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802324AC: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x802324B0: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x802324B4: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x802324B8: lbu         $v0, 0xE($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XE);
    // 0x802324BC: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x802324C0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802324C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802324C8: lbu         $s0, 0x3($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X3);
    // 0x802324CC: andi        $v0, $s0, 0x1
    ctx->r2 = ctx->r16 & 0X1;
    // 0x802324D0: beq         $v0, $zero, L_802324F8
    if (ctx->r2 == 0) {
        // 0x802324D4: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_802324F8;
    }
    // 0x802324D4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x802324D8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802324DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802324E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802324E4: jal         0x80232640
    // 0x802324E8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_80232640_ovl12(rdram, ctx);
        goto after_0;
    // 0x802324E8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_0:
    // 0x802324EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802324F0: beql        $v0, $zero, L_80232624
    if (ctx->r2 == 0) {
        // 0x802324F4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80232624;
    }
    goto skip_0;
    // 0x802324F4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_0:
L_802324F8:
    // 0x802324F8: andi        $v0, $s0, 0x10
    ctx->r2 = ctx->r16 & 0X10;
    // 0x802324FC: beq         $v0, $zero, L_80232524
    if (ctx->r2 == 0) {
        // 0x80232500: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80232524;
    }
    // 0x80232500: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80232504: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
    // 0x80232508: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x8023250C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80232510: jal         0x80232640
    // 0x80232514: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_80232640_ovl12(rdram, ctx);
        goto after_1;
    // 0x80232514: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_1:
    // 0x80232518: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023251C: beql        $v0, $zero, L_80232624
    if (ctx->r2 == 0) {
        // 0x80232520: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80232624;
    }
    goto skip_1;
    // 0x80232520: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_1:
L_80232524:
    // 0x80232524: andi        $v0, $s0, 0x2
    ctx->r2 = ctx->r16 & 0X2;
    // 0x80232528: beq         $v0, $zero, L_8023254C
    if (ctx->r2 == 0) {
        // 0x8023252C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023254C;
    }
    // 0x8023252C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80232530: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80232534: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80232538: jal         0x80232640
    // 0x8023253C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_80232640_ovl12(rdram, ctx);
        goto after_2;
    // 0x8023253C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_2:
    // 0x80232540: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232544: beql        $v0, $zero, L_80232624
    if (ctx->r2 == 0) {
        // 0x80232548: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80232624;
    }
    goto skip_2;
    // 0x80232548: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_2:
L_8023254C:
    // 0x8023254C: andi        $v0, $s0, 0x20
    ctx->r2 = ctx->r16 & 0X20;
    // 0x80232550: beq         $v0, $zero, L_80232578
    if (ctx->r2 == 0) {
        // 0x80232554: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80232578;
    }
    // 0x80232554: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80232558: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
    // 0x8023255C: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x80232560: addiu       $a2, $zero, -0x2
    ctx->r6 = ADD32(0, -0X2);
    // 0x80232564: jal         0x80232640
    // 0x80232568: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_80232640_ovl12(rdram, ctx);
        goto after_3;
    // 0x80232568: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_3:
    // 0x8023256C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232570: beql        $v0, $zero, L_80232624
    if (ctx->r2 == 0) {
        // 0x80232574: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80232624;
    }
    goto skip_3;
    // 0x80232574: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_3:
L_80232578:
    // 0x80232578: andi        $v0, $s0, 0x4
    ctx->r2 = ctx->r16 & 0X4;
    // 0x8023257C: beq         $v0, $zero, L_802325A0
    if (ctx->r2 == 0) {
        // 0x80232580: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_802325A0;
    }
    // 0x80232580: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80232584: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80232588: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8023258C: jal         0x80232640
    // 0x80232590: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_80232640_ovl12(rdram, ctx);
        goto after_4;
    // 0x80232590: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_4:
    // 0x80232594: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232598: beql        $v0, $zero, L_80232624
    if (ctx->r2 == 0) {
        // 0x8023259C: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80232624;
    }
    goto skip_4;
    // 0x8023259C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_4:
L_802325A0:
    // 0x802325A0: andi        $v0, $s0, 0x40
    ctx->r2 = ctx->r16 & 0X40;
    // 0x802325A4: beq         $v0, $zero, L_802325CC
    if (ctx->r2 == 0) {
        // 0x802325A8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_802325CC;
    }
    // 0x802325A8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802325AC: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
    // 0x802325B0: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x802325B4: addiu       $a2, $zero, -0x3
    ctx->r6 = ADD32(0, -0X3);
    // 0x802325B8: jal         0x80232640
    // 0x802325BC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_80232640_ovl12(rdram, ctx);
        goto after_5;
    // 0x802325BC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_5:
    // 0x802325C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802325C4: beql        $v0, $zero, L_80232624
    if (ctx->r2 == 0) {
        // 0x802325C8: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80232624;
    }
    goto skip_5;
    // 0x802325C8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_5:
L_802325CC:
    // 0x802325CC: andi        $v0, $s0, 0x8
    ctx->r2 = ctx->r16 & 0X8;
    // 0x802325D0: beq         $v0, $zero, L_802325F8
    if (ctx->r2 == 0) {
        // 0x802325D4: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_802325F8;
    }
    // 0x802325D4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802325D8: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x802325DC: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x802325E0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802325E4: jal         0x80232640
    // 0x802325E8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_80232640_ovl12(rdram, ctx);
        goto after_6;
    // 0x802325E8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_6:
    // 0x802325EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802325F0: beql        $v0, $zero, L_80232624
    if (ctx->r2 == 0) {
        // 0x802325F4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80232624;
    }
    goto skip_6;
    // 0x802325F4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_6:
L_802325F8:
    // 0x802325F8: andi        $v0, $s0, 0x80
    ctx->r2 = ctx->r16 & 0X80;
    // 0x802325FC: beq         $v0, $zero, L_80232624
    if (ctx->r2 == 0) {
        // 0x80232600: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80232624;
    }
    // 0x80232600: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80232604: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x80232608: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    // 0x8023260C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232610: jal         0x80232640
    // 0x80232614: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_80232640_ovl12(rdram, ctx);
        goto after_7;
    // 0x80232614: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_7:
    // 0x80232618: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023261C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80232620: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_80232624:
    // 0x80232624: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80232628: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023262C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80232630: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80232634: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232638: jr          $ra
    // 0x8023263C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023263C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802258A8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802258B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802258B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802258B8: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802258BC: beq         $v1, $zero, L_802258D4
    if (ctx->r3 == 0) {
        // 0x802258C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802258D4;
    }
    // 0x802258C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802258C4: beq         $v1, $v0, L_8022590C
    if (ctx->r3 == ctx->r2) {
        // 0x802258C8: nop
    
            goto L_8022590C;
    }
    // 0x802258C8: nop

    // 0x802258CC: j           L_80225940
    // 0x802258D0: nop

        goto L_80225940;
    // 0x802258D0: nop

L_802258D4:
    // 0x802258D4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802258D8: jal         0x800607C4
    // 0x802258DC: addiu       $a0, $a0, 0x5A54
    ctx->r4 = ADD32(ctx->r4, 0X5A54);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802258DC: addiu       $a0, $a0, 0x5A54
    ctx->r4 = ADD32(ctx->r4, 0X5A54);
    after_0:
    // 0x802258E0: jal         0x8006033C
    // 0x802258E4: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802258E4: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_1:
    // 0x802258E8: beq         $v0, $zero, L_80225900
    if (ctx->r2 == 0) {
        // 0x802258EC: nop
    
            goto L_80225900;
    }
    // 0x802258EC: nop

    // 0x802258F0: jal         0x80060AAC
    // 0x802258F4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_2;
    // 0x802258F4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x802258F8: jal         0x80060AAC
    // 0x802258FC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_3;
    // 0x802258FC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
L_80225900:
    // 0x80225900: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225904: j           L_8022593C
    // 0x80225908: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022593C;
    // 0x80225908: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022590C:
    // 0x8022590C: jal         0x8006033C
    // 0x80225910: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225910: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    after_4:
    // 0x80225914: bne         $v0, $zero, L_8022592C
    if (ctx->r2 != 0) {
        // 0x80225918: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_8022592C;
    }
    // 0x80225918: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022591C: jal         0x8006033C
    // 0x80225920: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80225920: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_5:
    // 0x80225924: beq         $v0, $zero, L_80225940
    if (ctx->r2 == 0) {
        // 0x80225928: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225940;
    }
    // 0x80225928: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8022592C:
    // 0x8022592C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225930: jal         0x80060DA0
    // 0x80225934: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_6;
    // 0x80225934: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80225938: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022593C:
    // 0x8022593C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225940:
    // 0x80225940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225944: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225948: jr          $ra
    // 0x8022594C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022594C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225868_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022586C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225870: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225878: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022587C: bne         $v0, $zero, L_80225898
    if (ctx->r2 != 0) {
        // 0x80225880: nop
    
            goto L_80225898;
    }
    // 0x80225880: nop

    // 0x80225884: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225888: jal         0x800607C4
    // 0x8022588C: addiu       $a0, $a0, 0x5A64
    ctx->r4 = ADD32(ctx->r4, 0X5A64);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022588C: addiu       $a0, $a0, 0x5A64
    ctx->r4 = ADD32(ctx->r4, 0X5A64);
    after_0:
    // 0x80225890: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225894: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225898:
    // 0x80225898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022589C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802258A0: jr          $ra
    // 0x802258A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802258A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251B4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251B4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802251B8: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802251BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251C4: bne         $v0, $zero, L_802251E0
    if (ctx->r2 != 0) {
        // 0x802251C8: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251E0;
    }
    // 0x802251C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251CC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251D0: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251D4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802251D8: j           L_802251E8
    // 0x802251DC: addiu       $a1, $a1, 0x5438
    ctx->r5 = ADD32(ctx->r5, 0X5438);
        goto L_802251E8;
    // 0x802251DC: addiu       $a1, $a1, 0x5438
    ctx->r5 = ADD32(ctx->r5, 0X5438);
L_802251E0:
    // 0x802251E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251E8:
    // 0x802251E8: jal         0x80037D80
    // 0x802251EC: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251EC: nop

    after_0:
    // 0x802251F0: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x802251F4: lb          $t1, -0x3BC7($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X3BC7);
    // 0x802251F8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251FC: addiu       $a0, $a0, 0xCB4
    ctx->r4 = ADD32(ctx->r4, 0XCB4);
    // 0x80225200: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x80225204: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225208: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x8022520C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225210: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x80225214: lbu         $a1, 0x3($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3);
    // 0x80225218: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8022521C: sh          $a1, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r5;
    // 0x80225220: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x80225224: lui         $a3, 0x7FE9
    ctx->r7 = S32(0X7FE9 << 16);
    // 0x80225228: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x8022522C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225230: sb          $a2, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r6;
    // 0x80225234: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x80225238: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8022523C: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80225240: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80225244: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225248: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x8022524C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225250: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x80225254: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225258: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8022525C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225260: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225264: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225268: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x8022526C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225270: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225274: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80225278: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022527C: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x80225280: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225284: sb          $t0, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r8;
    // 0x80225288: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8022528C: sb          $a1, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r5;
    // 0x80225290: beq         $t1, $zero, L_802252A8
    if (ctx->r9 == 0) {
        // 0x80225294: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802252A8;
    }
    // 0x80225294: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225298: beq         $t1, $v0, L_802252F0
    if (ctx->r9 == ctx->r2) {
        // 0x8022529C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802252F0;
    }
    // 0x8022529C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802252A0: j           L_8022530C
    // 0x802252A4: sb          $zero, 0x44E($v1)
    MEM_B(0X44E, ctx->r3) = 0;
        goto L_8022530C;
    // 0x802252A4: sb          $zero, 0x44E($v1)
    MEM_B(0X44E, ctx->r3) = 0;
L_802252A8:
    // 0x802252A8: jal         0x8006036C
    // 0x802252AC: addiu       $a0, $zero, 0x31B
    ctx->r4 = ADD32(0, 0X31B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x802252AC: addiu       $a0, $zero, 0x31B
    ctx->r4 = ADD32(0, 0X31B);
    after_1:
    // 0x802252B0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802252B4: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x802252B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252BC: sb          $zero, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = 0;
    // 0x802252C0: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x802252C4: bne         $v0, $zero, L_8022530C
    if (ctx->r2 != 0) {
        // 0x802252C8: nop
    
            goto L_8022530C;
    }
    // 0x802252C8: nop

    // 0x802252CC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252D0: jal         0x8003E6BC
    // 0x802252D4: addiu       $a0, $a0, 0x543C
    ctx->r4 = ADD32(ctx->r4, 0X543C);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_2;
    // 0x802252D4: addiu       $a0, $a0, 0x543C
    ctx->r4 = ADD32(ctx->r4, 0X543C);
    after_2:
    // 0x802252D8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802252DC: lui         $a1, 0x9
    ctx->r5 = S32(0X9 << 16);
    // 0x802252E0: jal         0x80071ACC
    // 0x802252E4: ori         $a1, $a1, 0x3300
    ctx->r5 = ctx->r5 | 0X3300;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_3;
    // 0x802252E4: ori         $a1, $a1, 0x3300
    ctx->r5 = ctx->r5 | 0X3300;
    after_3:
    // 0x802252E8: j           L_8022530C
    // 0x802252EC: nop

        goto L_8022530C;
    // 0x802252EC: nop

L_802252F0:
    // 0x802252F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252F4: sb          $v0, 0x4B21($at)
    MEM_B(0X4B21, ctx->r1) = ctx->r2;
    // 0x802252F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802252FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225300: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
    // 0x80225304: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225308: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
L_8022530C:
    // 0x8022530C: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80225310: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x80225314: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225318: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022531C: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x80225320: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225324: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225328: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022532C: lw          $a0, 0x5198($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5198);
    // 0x80225330: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225334: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225338: lw          $v0, 0x5348($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5348);
    // 0x8022533C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225340: jal         0x8004C790
    // 0x80225344: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_4;
    // 0x80225344: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_4:
    // 0x80225348: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8022534C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225350: addiu       $a0, $a0, 0x53A8
    ctx->r4 = ADD32(ctx->r4, 0X53A8);
    // 0x80225354: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80225358: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022535C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225360: lw          $v1, 0x5420($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5420);
    // 0x80225364: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x80225368: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022536C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80225370: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225374: addiu       $v0, $v0, 0x5360
    ctx->r2 = ADD32(ctx->r2, 0X5360);
    // 0x80225378: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022537C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225380: jal         0x80054FB8
    // 0x80225384: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_5;
    // 0x80225384: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_5:
    // 0x80225388: jal         0x8004A614
    // 0x8022538C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_6;
    // 0x8022538C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x80225390: jal         0x802253B0
    // 0x80225394: nop

    func_802253B0_ovl12(rdram, ctx);
        goto after_7;
    // 0x80225394: nop

    after_7:
    // 0x80225398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022539C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802253A0: jr          $ra
    // 0x802253A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802253A8: nop

    // 0x802253AC: nop

;}
RECOMP_FUNC void func_8022FED4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FED4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FED8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FEDC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FEE0: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022FEE4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022FEE8: jal         0x8003E6BC
    // 0x8022FEEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8022FEEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022FEF0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022FEF4: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8022FEF8: jal         0x8003E6BC
    // 0x8022FEFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8022FEFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022FF00: bne         $s0, $v0, L_8022FF28
    if (ctx->r16 != ctx->r2) {
        // 0x8022FF04: nop
    
            goto L_8022FF28;
    }
    // 0x8022FF04: nop

    // 0x8022FF08: jal         0x8006033C
    // 0x8022FF0C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022FF0C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x8022FF10: bne         $v0, $zero, L_8022FF28
    if (ctx->r2 != 0) {
        // 0x8022FF14: nop
    
            goto L_8022FF28;
    }
    // 0x8022FF14: nop

    // 0x8022FF18: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022FF1C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8022FF20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FF24: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022FF28:
    // 0x8022FF28: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022FF2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FF30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FF34: jr          $ra
    // 0x8022FF38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FF38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233550_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233554: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233558: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023355C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233560: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80233564: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233568: lw          $v0, 0x6E48($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6E48);
    // 0x8023356C: jalr        $v0
    // 0x80233570: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80233570: nop

    after_0:
    // 0x80233574: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233578: jr          $ra
    // 0x8023357C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023357C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226178_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226178: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022617C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226180: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x80226184: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226188: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022618C: addiu       $a1, $a1, 0x7360
    ctx->r5 = ADD32(ctx->r5, 0X7360);
    // 0x80226190: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226194: jal         0x8009A3B4
    // 0x80226198: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80226198: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022619C: jal         0x8003E6BC
    // 0x802261A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x802261A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802261A4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802261A8: jal         0x80071ACC
    // 0x802261AC: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    func_80071ACC_4CECC(rdram, ctx);
        goto after_2;
    // 0x802261AC: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    after_2:
    // 0x802261B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802261B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802261B8: jr          $ra
    // 0x802261BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802261BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AE50_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AE54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AE58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AE5C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022AE60: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022AE64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AE68: jal         0x8009A3B4
    // 0x8022AE6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022AE6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022AE70: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022AE74: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022AE78: jal         0x8009A3B4
    // 0x8022AE7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AE7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022AE80: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022AE84: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022AE88: jal         0x8009A3B4
    // 0x8022AE8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022AE8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022AE90: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022AE94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AE98: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AE9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AEA0: lw          $v0, 0x65DC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X65DC);
    // 0x8022AEA4: jalr        $v0
    // 0x8022AEA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022AEA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022AEAC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AEB0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022AEB4: beq         $v0, $zero, L_8022AECC
    if (ctx->r2 == 0) {
        // 0x8022AEB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AECC;
    }
    // 0x8022AEB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AEBC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022AEC0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022AEC4: jal         0x8003B564
    // 0x8022AEC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022AEC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022AECC:
    // 0x8022AECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AED0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AED4: jr          $ra
    // 0x8022AED8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AED8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233784_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233784: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80233788: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023378C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233790: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80233794: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233798: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023379C: jal         0x80047284
    // 0x802337A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_0;
    // 0x802337A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802337A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802337A8: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x802337AC: bne         $v0, $s0, L_802337BC
    if (ctx->r2 != ctx->r16) {
        // 0x802337B0: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_802337BC;
    }
    // 0x802337B0: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x802337B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802337B8: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
L_802337BC:
    // 0x802337BC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x802337C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802337C4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802337C8: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802337CC: addiu       $v0, $s0, 0x4C
    ctx->r2 = ADD32(ctx->r16, 0X4C);
    // 0x802337D0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802337D4: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x802337D8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802337DC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802337E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802337E4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802337E8: jal         0x80051E18
    // 0x802337EC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x802337EC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x802337F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802337F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802337F8: jr          $ra
    // 0x802337FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802337FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80227C88_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227C8C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227C90: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227C94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227C98: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227C9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227CA0: lw          $v0, 0x63DC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X63DC);
    // 0x80227CA4: jalr        $v0
    // 0x80227CA8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227CA8: nop

    after_0:
    // 0x80227CAC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227CB0: jr          $ra
    // 0x80227CB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227CB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CDFC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CDFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022CE00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022CE04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CE08: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022CE0C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022CE10: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022CE14: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022CE18: lw          $v0, 0x354($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X354);
    // 0x8022CE1C: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022CE20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022CE24: beq         $v0, $zero, L_8022CE3C
    if (ctx->r2 == 0) {
        // 0x8022CE28: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022CE3C;
    }
    // 0x8022CE28: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022CE2C: jal         0x80060D38
    // 0x8022CE30: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80060D38_3C138(rdram, ctx);
        goto after_0;
    // 0x8022CE30: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8022CE34: j           L_8022CE4C
    // 0x8022CE38: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8022CE4C;
    // 0x8022CE38: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022CE3C:
    // 0x8022CE3C: jal         0x8022D7D0
    // 0x8022CE40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D7D0_ovl12(rdram, ctx);
        goto after_1;
    // 0x8022CE40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022CE44: beq         $v0, $zero, L_8022CE58
    if (ctx->r2 == 0) {
        // 0x8022CE48: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022CE58;
    }
    // 0x8022CE48: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022CE4C:
    // 0x8022CE4C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022CE50: j           L_8022D0FC
    // 0x8022CE54: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022D0FC;
    // 0x8022CE54: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022CE58:
    // 0x8022CE58: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022CE5C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022CE60: jal         0x8004DDE8
    // 0x8022CE64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_2;
    // 0x8022CE64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022CE68: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CE6C: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x8022CE70: sltiu       $v0, $v1, 0x15
    ctx->r2 = ctx->r3 < 0X15 ? 1 : 0;
    // 0x8022CE74: beq         $v0, $zero, L_8022D0FC
    if (ctx->r2 == 0) {
        // 0x8022CE78: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022D0FC;
    }
    // 0x8022CE78: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022CE7C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CE80: addu        $at, $at, $v0
    gpr jr_addend_8022CE88 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CE84: lw          $v0, 0x7440($at)
    ctx->r2 = ADD32(ctx->r1, 0X7440);
    // 0x8022CE88: jr          $v0
    // 0x8022CE8C: nop

    switch (jr_addend_8022CE88 >> 2) {
        case 0: goto L_8022CE90; break;
        case 1: goto L_8022CEAC; break;
        case 2: goto L_8022D008; break;
        case 3: goto L_8022D0AC; break;
        case 4: goto L_8022D0FC; break;
        case 5: goto L_8022D0FC; break;
        case 6: goto L_8022D0FC; break;
        case 7: goto L_8022D0FC; break;
        case 8: goto L_8022D0FC; break;
        case 9: goto L_8022D0FC; break;
        case 10: goto L_8022D038; break;
        case 11: goto L_8022D070; break;
        case 12: goto L_8022D0FC; break;
        case 13: goto L_8022D0FC; break;
        case 14: goto L_8022D0FC; break;
        case 15: goto L_8022D084; break;
        case 16: goto L_8022D0FC; break;
        case 17: goto L_8022D0FC; break;
        case 18: goto L_8022D0FC; break;
        case 19: goto L_8022D0FC; break;
        case 20: goto L_8022D0CC; break;
        default: switch_error(__func__, 0x8022CE88, 0x80237440);
    }
    // 0x8022CE8C: nop

L_8022CE90:
    // 0x8022CE90: jal         0x800A3450
    // 0x8022CE94: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022CE94: nop

    after_3:
    // 0x8022CE98: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CE9C: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022CEA0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CEA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CEA8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022CEAC:
    // 0x8022CEAC: jal         0x8022D974
    // 0x8022CEB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D974_ovl12(rdram, ctx);
        goto after_4;
    // 0x8022CEB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022CEB4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CEB8: beq         $v0, $zero, L_8022D0FC
    if (ctx->r2 == 0) {
        // 0x8022CEBC: nop
    
            goto L_8022D0FC;
    }
    // 0x8022CEBC: nop

    // 0x8022CEC0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x8022CEC4: sltiu       $v0, $v0, 0x12C
    ctx->r2 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x8022CEC8: beq         $v0, $zero, L_8022CEEC
    if (ctx->r2 == 0) {
        // 0x8022CECC: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_8022CEEC;
    }
    // 0x8022CECC: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8022CED0: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022CED4: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022CED8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022CEDC: beq         $v0, $v1, L_8022CF14
    if (ctx->r2 == ctx->r3) {
        // 0x8022CEE0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CF14;
    }
    // 0x8022CEE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CEE4: j           L_8022CF08
    // 0x8022CEE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8022CF08;
    // 0x8022CEE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8022CEEC:
    // 0x8022CEEC: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022CEF0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8022CEF4: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022CEF8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022CEFC: beq         $v0, $v1, L_8022CF14
    if (ctx->r2 == ctx->r3) {
        // 0x8022CF00: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CF14;
    }
    // 0x8022CF00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022CF08:
    // 0x8022CF08: jal         0x80050294
    // 0x8022CF0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022CF0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022CF10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022CF14:
    // 0x8022CF14: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022CF18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CF1C: jal         0x8004DA90
    // 0x8022CF20: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x8022CF20: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x8022CF24: jal         0x80040F30
    // 0x8022CF28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_7;
    // 0x8022CF28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022CF2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF30: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022CF34: jal         0x8022D884
    // 0x8022CF38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8022D884_ovl12(rdram, ctx);
        goto after_8;
    // 0x8022CF38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
    // 0x8022CF3C: lb          $s2, 0xD($s0)
    ctx->r18 = MEM_B(ctx->r16, 0XD);
    // 0x8022CF40: beq         $s2, $zero, L_8022CF98
    if (ctx->r18 == 0) {
        // 0x8022CF44: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022CF98;
    }
    // 0x8022CF44: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CF48: jal         0x8004DE68
    // 0x8022CF4C: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    func_8004DE68_29268(rdram, ctx);
        goto after_9;
    // 0x8022CF4C: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    after_9:
    // 0x8022CF50: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8022CF54: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x8022CF58: beq         $v0, $zero, L_8022CF98
    if (ctx->r2 == 0) {
        // 0x8022CF5C: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_8022CF98;
    }
    // 0x8022CF5C: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8022CF60: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022CF64: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022CF68: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022CF6C: beq         $v0, $v1, L_8022CF80
    if (ctx->r2 == ctx->r3) {
        // 0x8022CF70: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CF80;
    }
    // 0x8022CF70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022CF78: jal         0x80050294
    // 0x8022CF7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x8022CF7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
L_8022CF80:
    // 0x8022CF80: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022CF84: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022CF88: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x8022CF8C: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022CF90: j           L_8022D0F8
    // 0x8022CF94: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8022D0F8;
    // 0x8022CF94: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8022CF98:
    // 0x8022CF98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CF9C: jal         0x8022D75C
    // 0x8022CFA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8022D75C_ovl12(rdram, ctx);
        goto after_11;
    // 0x8022CFA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_11:
    // 0x8022CFA4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CFA8: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022CFAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CFB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CFB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CFB8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CFBC: jal         0x8022D90C
    // 0x8022CFC0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8022D90C_ovl12(rdram, ctx);
        goto after_12;
    // 0x8022CFC0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_12:
    // 0x8022CFC4: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8022CFC8: bne         $v0, $zero, L_8022D0FC
    if (ctx->r2 != 0) {
        // 0x8022CFCC: nop
    
            goto L_8022D0FC;
    }
    // 0x8022CFCC: nop

    // 0x8022CFD0: lh          $v0, 0x4($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X4);
    // 0x8022CFD4: bne         $v0, $zero, L_8022CFFC
    if (ctx->r2 != 0) {
        // 0x8022CFD8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022CFFC;
    }
    // 0x8022CFD8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022CFDC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CFE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CFE4: jal         0x800A3450
    // 0x8022CFE8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_13;
    // 0x8022CFE8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_13:
    // 0x8022CFEC: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022CFF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CFF4: j           L_8022D0FC
    // 0x8022CFF8: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
        goto L_8022D0FC;
    // 0x8022CFF8: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_8022CFFC:
    // 0x8022CFFC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022D000: j           L_8022D0FC
    // 0x8022D004: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
        goto L_8022D0FC;
    // 0x8022D004: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_8022D008:
    // 0x8022D008: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022D00C: bgez        $v0, L_8022D0AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D010: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D0AC;
    }
    // 0x8022D010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D014: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D018: jal         0x80050294
    // 0x8022D01C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_14;
    // 0x8022D01C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
    // 0x8022D020: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D024: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022D028: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022D02C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D030: j           L_8022D0AC
    // 0x8022D034: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022D0AC;
    // 0x8022D034: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D038:
    // 0x8022D038: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D03C: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022D040: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D044: jal         0x8004F820
    // 0x8022D048: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    func_8004F820_2AC20(rdram, ctx);
        goto after_15;
    // 0x8022D048: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    after_15:
    // 0x8022D04C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D050: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D054: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D058: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D05C: bne         $v0, $zero, L_8022D0FC
    if (ctx->r2 != 0) {
        // 0x8022D060: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022D0FC;
    }
    // 0x8022D060: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022D064: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D068: j           L_8022D0F8
    // 0x8022D06C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022D0F8;
    // 0x8022D06C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022D070:
    // 0x8022D070: jal         0x8022D974
    // 0x8022D074: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D974_ovl12(rdram, ctx);
        goto after_16;
    // 0x8022D074: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x8022D078: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022D07C: beq         $v0, $zero, L_8022D0FC
    if (ctx->r2 == 0) {
        // 0x8022D080: nop
    
            goto L_8022D0FC;
    }
    // 0x8022D080: nop

L_8022D084:
    // 0x8022D084: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D088: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022D08C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D090: jal         0x8004DA90
    // 0x8022D094: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_17;
    // 0x8022D094: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_17:
    // 0x8022D098: jal         0x80040F30
    // 0x8022D09C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_18;
    // 0x8022D09C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_18:
    // 0x8022D0A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D0A4: jal         0x8022D884
    // 0x8022D0A8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8022D884_ovl12(rdram, ctx);
        goto after_19;
    // 0x8022D0A8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_19:
L_8022D0AC:
    // 0x8022D0AC: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8022D0B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D0B4: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022D0B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D0BC: beql        $v0, $zero, L_8022D0FC
    if (ctx->r2 == 0) {
        // 0x8022D0C0: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8022D0FC;
    }
    goto skip_0;
    // 0x8022D0C0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
    // 0x8022D0C4: j           L_8022D0FC
    // 0x8022D0C8: nop

        goto L_8022D0FC;
    // 0x8022D0C8: nop

L_8022D0CC:
    // 0x8022D0CC: lh          $a0, 0x2($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X2);
    // 0x8022D0D0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022D0D4: jal         0x8004FA7C
    // 0x8022D0D8: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_20;
    // 0x8022D0D8: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_20:
    // 0x8022D0DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D0E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D0E4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D0E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D0EC: bne         $v0, $zero, L_8022D0FC
    if (ctx->r2 != 0) {
        // 0x8022D0F0: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022D0FC;
    }
    // 0x8022D0F0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022D0F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022D0F8:
    // 0x8022D0F8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D0FC:
    // 0x8022D0FC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022D100: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022D104: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022D108: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D10C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022D110: jr          $ra
    // 0x8022D114: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022D114: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225424_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225428: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022542C: jal         0x8006033C
    // 0x80225430: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225430: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x80225434: bne         $v0, $zero, L_80225460
    if (ctx->r2 != 0) {
        // 0x80225438: nop
    
            goto L_80225460;
    }
    // 0x80225438: nop

    // 0x8022543C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225440: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225444: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225448: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022544C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225450: lw          $v0, 0x5BE4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5BE4);
    // 0x80225454: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225458: jalr        $v0
    // 0x8022545C: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022545C: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_1:
L_80225460:
    // 0x80225460: jal         0x8006033C
    // 0x80225464: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225464: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_2:
    // 0x80225468: beq         $v0, $zero, L_802254A8
    if (ctx->r2 == 0) {
        // 0x8022546C: nop
    
            goto L_802254A8;
    }
    // 0x8022546C: nop

    // 0x80225470: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225474: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225478: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022547C: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225480: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225484: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225488: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022548C: lw          $v1, 0x5BA4($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5BA4);
    // 0x80225490: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225494: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225498: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022549C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802254A0: jalr        $v0
    // 0x802254A4: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802254A4: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_3:
L_802254A8:
    // 0x802254A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802254AC: jr          $ra
    // 0x802254B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802254B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802257B4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802257B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802257BC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802257C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802257C4: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x802257C8: addiu       $s0, $s0, 0x5450
    ctx->r16 = ADD32(ctx->r16, 0X5450);
    // 0x802257CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802257D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802257D4: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x802257D8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x802257DC: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x802257E0: beq         $v1, $v0, L_8022581C
    if (ctx->r3 == ctx->r2) {
        // 0x802257E4: nop
    
            goto L_8022581C;
    }
    // 0x802257E4: nop

    // 0x802257E8: ori         $s1, $zero, 0xFFFF
    ctx->r17 = 0 | 0XFFFF;
L_802257EC:
    // 0x802257EC: jal         0x8006033C
    // 0x802257F0: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802257F0: nop

    after_0:
    // 0x802257F4: beql        $v0, $zero, L_80225810
    if (ctx->r2 == 0) {
        // 0x802257F8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80225810;
    }
    goto skip_0;
    // 0x802257F8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x802257FC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80225800: jal         0x80060690
    // 0x80225804: nop

    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x80225804: nop

    after_1:
    // 0x80225808: j           L_80225850
    // 0x8022580C: nop

        goto L_80225850;
    // 0x8022580C: nop

L_80225810:
    // 0x80225810: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x80225814: bne         $a0, $s1, L_802257EC
    if (ctx->r4 != ctx->r17) {
        // 0x80225818: nop
    
            goto L_802257EC;
    }
    // 0x80225818: nop

L_8022581C:
    // 0x8022581C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225820: bne         $v0, $zero, L_80225850
    if (ctx->r2 != 0) {
        // 0x80225824: nop
    
            goto L_80225850;
    }
    // 0x80225824: nop

    // 0x80225828: jal         0x8004F2C4
    // 0x8022582C: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_2;
    // 0x8022582C: nop

    after_2:
    // 0x80225830: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225834: beq         $v1, $zero, L_80225848
    if (ctx->r3 == 0) {
        // 0x80225838: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225848;
    }
    // 0x80225838: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022583C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225840: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
    // 0x80225844: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
L_80225848:
    // 0x80225848: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022584C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80225850:
    // 0x80225850: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225854: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225858: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022585C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225860: jr          $ra
    // 0x80225864: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225864: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802295D0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802295D0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802295D4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802295D8: bne         $v0, $zero, L_80229610
    if (ctx->r2 != 0) {
        // 0x802295DC: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_80229610;
    }
    // 0x802295DC: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x802295E0: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x802295E4: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x802295E8: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802295EC: beq         $v1, $zero, L_802295FC
    if (ctx->r3 == 0) {
        // 0x802295F0: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_802295FC;
    }
    // 0x802295F0: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x802295F4: j           L_80229600
    // 0x802295F8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80229600;
    // 0x802295F8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802295FC:
    // 0x802295FC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80229600:
    // 0x80229600: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80229604: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x80229608: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022960C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_80229610:
    // 0x80229610: jr          $ra
    // 0x80229614: nop

    TRACE_RETURN()
    return;
    // 0x80229614: nop

;}
RECOMP_FUNC void func_80225524_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225524: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80225528: bne         $v0, $zero, L_80225534
    if (ctx->r2 != 0) {
        // 0x8022552C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225534;
    }
    // 0x8022552C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225530: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_80225534:
    // 0x80225534: jr          $ra
    // 0x80225538: nop

    TRACE_RETURN()
    return;
    // 0x80225538: nop

;}
RECOMP_FUNC void func_8022B84C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B84C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B850: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B854: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B858: beq         $a1, $zero, L_8022B8A8
    if (ctx->r5 == 0) {
        // 0x8022B85C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022B8A8;
    }
    // 0x8022B85C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B860: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022B864: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B868: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022B86C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022B870: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022B874: slti        $v0, $v0, 0x3D
    ctx->r2 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x8022B878: bne         $v0, $zero, L_8022B8A8
    if (ctx->r2 != 0) {
        // 0x8022B87C: nop
    
            goto L_8022B8A8;
    }
    // 0x8022B87C: nop

    // 0x8022B880: jal         0x800A3450
    // 0x8022B884: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022B884: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_0:
    // 0x8022B888: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022B88C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022B890: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B894: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022B898: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x8022B89C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B8A0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B8A4: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_8022B8A8:
    // 0x8022B8A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B8AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B8B0: jr          $ra
    // 0x8022B8B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B8B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D388_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D388: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022D38C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022D390: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D394: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022D398: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8022D39C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022D3A0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022D3A4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D3A8: beq         $v1, $zero, L_8022D3C4
    if (ctx->r3 == 0) {
        // 0x8022D3AC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022D3C4;
    }
    // 0x8022D3AC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022D3B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D3B4: beq         $v1, $v0, L_8022D40C
    if (ctx->r3 == ctx->r2) {
        // 0x8022D3B8: nop
    
            goto L_8022D40C;
    }
    // 0x8022D3B8: nop

    // 0x8022D3BC: j           L_8022D550
    // 0x8022D3C0: nop

        goto L_8022D550;
    // 0x8022D3C0: nop

L_8022D3C4:
    // 0x8022D3C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D3C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022D3CC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022D3D0: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x8022D3D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D3D8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022D3DC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022D3E0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022D3E4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022D3E8: sh          $v0, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r2;
    // 0x8022D3EC: sh          $zero, 0x368($s0)
    MEM_H(0X368, ctx->r16) = 0;
    // 0x8022D3F0: sh          $zero, 0x366($s0)
    MEM_H(0X366, ctx->r16) = 0;
    // 0x8022D3F4: jal         0x80050294
    // 0x8022D3F8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022D3F8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022D3FC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D400: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022D404: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D408: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D40C:
    // 0x8022D40C: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x8022D410: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022D414: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022D418: beq         $v0, $zero, L_8022D45C
    if (ctx->r2 == 0) {
        // 0x8022D41C: addiu       $a1, $s0, 0x2C
        ctx->r5 = ADD32(ctx->r16, 0X2C);
            goto L_8022D45C;
    }
    // 0x8022D41C: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022D420: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D424: jal         0x8009A3B4
    // 0x8022D428: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D428: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022D42C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022D430: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022D434: jal         0x8009A3B4
    // 0x8022D438: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D438: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022D43C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D440: beq         $v0, $zero, L_8022D550
    if (ctx->r2 == 0) {
        // 0x8022D444: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D550;
    }
    // 0x8022D444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D448: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D44C: jal         0x80050294
    // 0x8022D450: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022D450: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022D454: j           L_8022D550
    // 0x8022D458: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_8022D550;
    // 0x8022D458: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8022D45C:
    // 0x8022D45C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D460: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022D464: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D468: jal         0x8004DA90
    // 0x8022D46C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8022D46C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x8022D470: jal         0x80040F30
    // 0x8022D474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x8022D474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022D478: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022D47C: beq         $s2, $zero, L_8022D48C
    if (ctx->r18 == 0) {
        // 0x8022D480: addiu       $a0, $s0, 0x44
        ctx->r4 = ADD32(ctx->r16, 0X44);
            goto L_8022D48C;
    }
    // 0x8022D480: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    // 0x8022D484: jal         0x80040834
    // 0x8022D488: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_6;
    // 0x8022D488: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
L_8022D48C:
    // 0x8022D48C: lh          $a2, 0x44($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X44);
    // 0x8022D490: lh          $v0, 0x1C($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X1C);
    // 0x8022D494: bgez        $a2, L_8022D4A0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8022D498: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8022D4A0;
    }
    // 0x8022D498: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8022D49C: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_8022D4A0:
    // 0x8022D4A0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022D4A4: bltzl       $v0, L_8022D4AC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022D4A8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022D4AC;
    }
    goto skip_0;
    // 0x8022D4A8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022D4AC:
    // 0x8022D4AC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022D4B0: bne         $v0, $zero, L_8022D4C4
    if (ctx->r2 != 0) {
        // 0x8022D4B4: addu        $a1, $a2, $zero
        ctx->r5 = ADD32(ctx->r6, 0);
            goto L_8022D4C4;
    }
    // 0x8022D4B4: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8022D4B8: sh          $zero, 0x1C($s3)
    MEM_H(0X1C, ctx->r19) = 0;
    // 0x8022D4BC: j           L_8022D4D4
    // 0x8022D4C0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
        goto L_8022D4D4;
    // 0x8022D4C0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
L_8022D4C4:
    // 0x8022D4C4: bgez        $a2, L_8022D4D0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8022D4C8: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022D4D0;
    }
    // 0x8022D4C8: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x8022D4CC: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_8022D4D0:
    // 0x8022D4D0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022D4D4:
    // 0x8022D4D4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022D4D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D4DC: jal         0x8004DE68
    // 0x8022D4E0: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    func_8004DE68_29268(rdram, ctx);
        goto after_7;
    // 0x8022D4E0: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    after_7:
    // 0x8022D4E4: sltiu       $v0, $v0, 0x1001
    ctx->r2 = ctx->r2 < 0X1001 ? 1 : 0;
    // 0x8022D4E8: bne         $v0, $zero, L_8022D514
    if (ctx->r2 != 0) {
        // 0x8022D4EC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D514;
    }
    // 0x8022D4EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D4F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D4F4: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022D4F8: jal         0x8009A3B4
    // 0x8022D4FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022D4FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022D500: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022D504: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022D508: jal         0x8009A3B4
    // 0x8022D50C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022D50C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
    // 0x8022D510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022D514:
    // 0x8022D514: jal         0x8022D884
    // 0x8022D518: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8022D884_ovl12(rdram, ctx);
        goto after_10;
    // 0x8022D518: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_10:
    // 0x8022D51C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022D520: bgez        $v0, L_8022D550
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D524: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D550;
    }
    // 0x8022D524: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D528: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D52C: jal         0x80050294
    // 0x8022D530: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_11;
    // 0x8022D530: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x8022D534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D538: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022D53C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022D540: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022D544: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D548: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022D54C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8022D550:
    // 0x8022D550: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022D554: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D558: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022D55C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022D560: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022D564: jr          $ra
    // 0x8022D568: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022D568: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80225D98_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225D9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225DA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225DA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225DA8: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225DAC: beq         $v1, $zero, L_80225DC4
    if (ctx->r3 == 0) {
        // 0x80225DB0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225DC4;
    }
    // 0x80225DB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225DB4: beq         $v1, $v0, L_80225DFC
    if (ctx->r3 == ctx->r2) {
        // 0x80225DB8: nop
    
            goto L_80225DFC;
    }
    // 0x80225DB8: nop

    // 0x80225DBC: j           L_80225E30
    // 0x80225DC0: nop

        goto L_80225E30;
    // 0x80225DC0: nop

L_80225DC4:
    // 0x80225DC4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225DC8: jal         0x800607C4
    // 0x80225DCC: addiu       $a0, $a0, 0x5A6C
    ctx->r4 = ADD32(ctx->r4, 0X5A6C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225DCC: addiu       $a0, $a0, 0x5A6C
    ctx->r4 = ADD32(ctx->r4, 0X5A6C);
    after_0:
    // 0x80225DD0: jal         0x8006033C
    // 0x80225DD4: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225DD4: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_1:
    // 0x80225DD8: beq         $v0, $zero, L_80225DF0
    if (ctx->r2 == 0) {
        // 0x80225DDC: nop
    
            goto L_80225DF0;
    }
    // 0x80225DDC: nop

    // 0x80225DE0: jal         0x80060AAC
    // 0x80225DE4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_2;
    // 0x80225DE4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x80225DE8: jal         0x80060AAC
    // 0x80225DEC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_3;
    // 0x80225DEC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_3:
L_80225DF0:
    // 0x80225DF0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225DF4: j           L_80225E2C
    // 0x80225DF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225E2C;
    // 0x80225DF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225DFC:
    // 0x80225DFC: jal         0x8006033C
    // 0x80225E00: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225E00: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    after_4:
    // 0x80225E04: bne         $v0, $zero, L_80225E1C
    if (ctx->r2 != 0) {
        // 0x80225E08: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225E1C;
    }
    // 0x80225E08: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80225E0C: jal         0x8006033C
    // 0x80225E10: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80225E10: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_5:
    // 0x80225E14: beq         $v0, $zero, L_80225E30
    if (ctx->r2 == 0) {
        // 0x80225E18: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225E30;
    }
    // 0x80225E18: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_80225E1C:
    // 0x80225E1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225E20: jal         0x80060DA0
    // 0x80225E24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_6;
    // 0x80225E24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80225E28: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225E2C:
    // 0x80225E2C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225E30:
    // 0x80225E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225E34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225E38: jr          $ra
    // 0x80225E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229670_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229674: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229678: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022967C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229680: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229684: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229688: lw          $v0, 0x6574($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6574);
    // 0x8022968C: jalr        $v0
    // 0x80229690: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229690: nop

    after_0:
    // 0x80229694: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229698: jr          $ra
    // 0x8022969C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022969C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225E40_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225E48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225E50: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225E54: beq         $v1, $zero, L_80225E6C
    if (ctx->r3 == 0) {
        // 0x80225E58: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225E6C;
    }
    // 0x80225E58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225E5C: beq         $v1, $v0, L_80225EAC
    if (ctx->r3 == ctx->r2) {
        // 0x80225E60: nop
    
            goto L_80225EAC;
    }
    // 0x80225E60: nop

    // 0x80225E64: j           L_80225EE0
    // 0x80225E68: nop

        goto L_80225EE0;
    // 0x80225E68: nop

L_80225E6C:
    // 0x80225E6C: jal         0x80226178
    // 0x80225E70: nop

    func_80226178_ovl12(rdram, ctx);
        goto after_0;
    // 0x80225E70: nop

    after_0:
    // 0x80225E74: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225E78: jal         0x800607C4
    // 0x80225E7C: addiu       $a0, $a0, 0x5A74
    ctx->r4 = ADD32(ctx->r4, 0X5A74);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_1;
    // 0x80225E7C: addiu       $a0, $a0, 0x5A74
    ctx->r4 = ADD32(ctx->r4, 0X5A74);
    after_1:
    // 0x80225E80: jal         0x8006033C
    // 0x80225E84: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225E84: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_2:
    // 0x80225E88: beq         $v0, $zero, L_80225EA0
    if (ctx->r2 == 0) {
        // 0x80225E8C: nop
    
            goto L_80225EA0;
    }
    // 0x80225E8C: nop

    // 0x80225E90: jal         0x80060AAC
    // 0x80225E94: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_3;
    // 0x80225E94: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x80225E98: jal         0x80060AAC
    // 0x80225E9C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_4;
    // 0x80225E9C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_4:
L_80225EA0:
    // 0x80225EA0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225EA4: j           L_80225EDC
    // 0x80225EA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225EDC;
    // 0x80225EA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225EAC:
    // 0x80225EAC: jal         0x8006033C
    // 0x80225EB0: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80225EB0: addiu       $a0, $zero, 0x225
    ctx->r4 = ADD32(0, 0X225);
    after_5:
    // 0x80225EB4: bne         $v0, $zero, L_80225ECC
    if (ctx->r2 != 0) {
        // 0x80225EB8: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225ECC;
    }
    // 0x80225EB8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80225EBC: jal         0x8006033C
    // 0x80225EC0: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80225EC0: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_6:
    // 0x80225EC4: beq         $v0, $zero, L_80225EE0
    if (ctx->r2 == 0) {
        // 0x80225EC8: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80225EE0;
    }
    // 0x80225EC8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_80225ECC:
    // 0x80225ECC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225ED0: jal         0x80060DA0
    // 0x80225ED4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_7;
    // 0x80225ED4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80225ED8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225EDC:
    // 0x80225EDC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225EE0:
    // 0x80225EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225EE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225EE8: jr          $ra
    // 0x80225EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C3B8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C3B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C3BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C3C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C3C4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C3C8: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022C3CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022C3D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C3D4: addiu       $s1, $s0, 0x364
    ctx->r17 = ADD32(ctx->r16, 0X364);
    // 0x8022C3D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C3DC: jal         0x8004DE68
    // 0x8022C3E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DE68_29268(rdram, ctx);
        goto after_0;
    // 0x8022C3E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022C3E4: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C3E8: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8022C3EC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022C3F0: beq         $v1, $zero, L_8022C40C
    if (ctx->r3 == 0) {
        // 0x8022C3F4: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_8022C40C;
    }
    // 0x8022C3F4: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x8022C3F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C3FC: beq         $v1, $v0, L_8022C42C
    if (ctx->r3 == ctx->r2) {
        // 0x8022C400: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022C42C;
    }
    // 0x8022C400: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022C404: j           L_8022C46C
    // 0x8022C408: nop

        goto L_8022C46C;
    // 0x8022C408: nop

L_8022C40C:
    // 0x8022C40C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022C410: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022C414: bne         $v0, $zero, L_8022C458
    if (ctx->r2 != 0) {
        // 0x8022C418: nop
    
            goto L_8022C458;
    }
    // 0x8022C418: nop

    // 0x8022C41C: beq         $v1, $zero, L_8022C458
    if (ctx->r3 == 0) {
        // 0x8022C420: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022C458;
    }
    // 0x8022C420: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022C424: j           L_8022C46C
    // 0x8022C428: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C46C;
    // 0x8022C428: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C42C:
    // 0x8022C42C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C430: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022C434: jal         0x8004F820
    // 0x8022C438: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022C438: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022C43C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C440: lw          $a0, 0x350($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X350);
    // 0x8022C444: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C448: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C44C: sltiu       $a0, $a0, 0x2
    ctx->r4 = ctx->r4 < 0X2 ? 1 : 0;
    // 0x8022C450: beq         $a0, $zero, L_8022C46C
    if (ctx->r4 == 0) {
        // 0x8022C454: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022C46C;
    }
    // 0x8022C454: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022C458:
    // 0x8022C458: jal         0x8022C580
    // 0x8022C45C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C580_ovl12(rdram, ctx);
        goto after_2;
    // 0x8022C45C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022C460: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C464: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C468: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022C46C:
    // 0x8022C46C: jal         0x8022C4A8
    // 0x8022C470: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C4A8_ovl12(rdram, ctx);
        goto after_3;
    // 0x8022C470: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C474: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C478: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C47C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C480: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C484: jr          $ra
    // 0x8022C488: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C488: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802277D0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802277D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802277D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802277D8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802277DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802277E0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802277E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802277E8: lw          $v0, 0x635C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X635C);
    // 0x802277EC: jalr        $v0
    // 0x802277F0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802277F0: nop

    after_0:
    // 0x802277F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802277F8: jr          $ra
    // 0x802277FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802277FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228484_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228484: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228488: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022848C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228490: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228494: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228498: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x8022849C: bne         $v0, $zero, L_802284DC
    if (ctx->r2 != 0) {
        // 0x802284A0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802284DC;
    }
    // 0x802284A0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802284A4: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x802284A8: bne         $v0, $zero, L_802284D0
    if (ctx->r2 != 0) {
        // 0x802284AC: nop
    
            goto L_802284D0;
    }
    // 0x802284AC: nop

    // 0x802284B0: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x802284B4: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x802284B8: bne         $v1, $v0, L_802284D0
    if (ctx->r3 != ctx->r2) {
        // 0x802284BC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802284D0;
    }
    // 0x802284BC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802284C0: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x802284C4: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x802284C8: j           L_8022850C
    // 0x802284CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_8022850C;
    // 0x802284CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_802284D0:
    // 0x802284D0: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x802284D4: beq         $v0, $zero, L_8022853C
    if (ctx->r2 == 0) {
        // 0x802284D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022853C;
    }
    // 0x802284D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802284DC:
    // 0x802284DC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x802284E0: bne         $v0, $zero, L_8022853C
    if (ctx->r2 != 0) {
        // 0x802284E4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022853C;
    }
    // 0x802284E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802284E8: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x802284EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802284F0: bne         $v1, $v0, L_8022853C
    if (ctx->r3 != ctx->r2) {
        // 0x802284F4: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_8022853C;
    }
    // 0x802284F4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x802284F8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802284FC: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80228500: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80228504: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80228508: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_8022850C:
    // 0x8022850C: jal         0x8009A3B4
    // 0x80228510: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80228510: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228514: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80228518: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022851C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80228520: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228524: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228528: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022852C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80228530: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80228534: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80228538: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022853C:
    // 0x8022853C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228540: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228544: jal         0x8004DA90
    // 0x80228548: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80228548: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022854C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80228550: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228554: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80228558: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022855C: bne         $v0, $zero, L_8022858C
    if (ctx->r2 != 0) {
        // 0x80228560: nop
    
            goto L_8022858C;
    }
    // 0x80228560: nop

    // 0x80228564: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228568: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022856C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228570: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80228574: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80228578: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022857C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80228580: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80228584: j           L_802285DC
    // 0x80228588: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802285DC;
    // 0x80228588: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022858C:
    // 0x8022858C: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80228590: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228594: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80228598: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022859C: bne         $v0, $zero, L_802285AC
    if (ctx->r2 != 0) {
        // 0x802285A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802285AC;
    }
    // 0x802285A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802285A4: j           L_802285DC
    // 0x802285A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802285DC;
    // 0x802285A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802285AC:
    // 0x802285AC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802285B0: jal         0x80229DE4
    // 0x802285B4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80229DE4_ovl12(rdram, ctx);
        goto after_2;
    // 0x802285B4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x802285B8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802285BC: beq         $v0, $zero, L_802285E0
    if (ctx->r2 == 0) {
        // 0x802285C0: nop
    
            goto L_802285E0;
    }
    // 0x802285C0: nop

    // 0x802285C4: jal         0x80229D48
    // 0x802285C8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229D48_ovl12(rdram, ctx);
        goto after_3;
    // 0x802285C8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x802285CC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802285D0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802285D4: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x802285D8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802285DC:
    // 0x802285DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802285E0:
    // 0x802285E0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802285E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802285E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802285EC: jr          $ra
    // 0x802285F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802285F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D7D0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D7D0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D7D4: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x8022D7D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D7DC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8022D7E0: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x8022D7E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D7E8: beq         $a1, $a0, L_8022D7F8
    if (ctx->r5 == ctx->r4) {
        // 0x8022D7EC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8022D7F8;
    }
    // 0x8022D7EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D7F0: j           L_8022D874
    // 0x8022D7F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022D874;
    // 0x8022D7F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022D7F8:
    // 0x8022D7F8: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8022D7FC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022D800: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x8022D804: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D808: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022D80C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022D810: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8022D814: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x8022D818: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D81C: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x8022D820: lh          $v0, 0x180($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X180);
    // 0x8022D824: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022D828: addiu       $s0, $s0, 0x7690
    ctx->r16 = ADD32(ctx->r16, 0X7690);
    // 0x8022D82C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8022D830: lh          $v0, 0x182($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X182);
    // 0x8022D834: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022D838: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D83C: sw          $v0, 0x7694($at)
    MEM_W(0X7694, ctx->r1) = ctx->r2;
    // 0x8022D840: lh          $v0, 0x184($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X184);
    // 0x8022D844: addiu       $a0, $a2, 0x14
    ctx->r4 = ADD32(ctx->r6, 0X14);
    // 0x8022D848: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D84C: sw          $v0, 0x7698($at)
    MEM_W(0X7698, ctx->r1) = ctx->r2;
    // 0x8022D850: jal         0x8004EC38
    // 0x8022D854: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x8022D854: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022D858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D85C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022D860: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022D864: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022D868: jal         0x80034FCC
    // 0x8022D86C: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_1;
    // 0x8022D86C: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_1:
    // 0x8022D870: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022D874:
    // 0x8022D874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D878: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D87C: jr          $ra
    // 0x8022D880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230D34_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230D34: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80230D38: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x80230D3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230D40: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80230D44: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230D48: lui         $v1, 0x501
    ctx->r3 = S32(0X501 << 16);
    // 0x80230D4C: bne         $v0, $v1, L_80230D6C
    if (ctx->r2 != ctx->r3) {
        // 0x80230D50: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80230D6C;
    }
    // 0x80230D50: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230D54: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80230D58: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80230D5C: addiu       $a0, $a0, 0x681
    ctx->r4 = ADD32(ctx->r4, 0X681);
    // 0x80230D60: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x80230D64: jal         0x8006036C
    // 0x80230D68: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80230D68: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_0:
L_80230D6C:
    // 0x80230D6C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230D70: jr          $ra
    // 0x80230D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80230D78: nop

    // 0x80230D7C: nop

;}
RECOMP_FUNC void func_802327CC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802327CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802327D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802327D4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802327D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802327DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802327E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802327E4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802327E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802327EC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802327F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802327F4: lh          $v0, 0x6C60($at)
    ctx->r2 = MEM_H(ctx->r1, 0X6C60);
    // 0x802327F8: blez        $v0, L_80232868
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802327FC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80232868;
    }
    // 0x802327FC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80232800: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x80232804: addiu       $s2, $s2, -0x2100
    ctx->r18 = ADD32(ctx->r18, -0X2100);
    // 0x80232808: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023280C:
    // 0x8023280C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232810: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232814: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232818: lbu         $v0, 0x76F0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X76F0);
    // 0x8023281C: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    // 0x80232820: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80232824: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80232828: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8023282C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80232830: jal         0x80232880
    // 0x80232834: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    func_80232880_ovl12(rdram, ctx);
        goto after_0;
    // 0x80232834: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    after_0:
    // 0x80232838: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8023283C: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x80232840: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80232844: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80232848: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8023284C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80232850: lh          $v1, 0x6C60($at)
    ctx->r3 = MEM_H(ctx->r1, 0X6C60);
    // 0x80232854: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232858: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023285C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80232860: bne         $v0, $zero, L_8023280C
    if (ctx->r2 != 0) {
        // 0x80232864: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8023280C;
    }
    // 0x80232864: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_80232868:
    // 0x80232868: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023286C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232870: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232874: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232878: jr          $ra
    // 0x8023287C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023287C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802321FC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802321FC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80232200: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80232204: addiu       $t1, $t0, 0xD0
    ctx->r9 = ADD32(ctx->r8, 0XD0);
    // 0x80232208: lbu         $v1, 0xDC($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0XDC);
    // 0x8023220C: addiu       $t5, $a1, 0xD0
    ctx->r13 = ADD32(ctx->r5, 0XD0);
    // 0x80232210: lbu         $a0, 0xDD($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0XDD);
    // 0x80232214: lbu         $v0, 0xDD($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XDD);
    // 0x80232218: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023221C: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80232220: lbu         $v1, 0xDC($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XDC);
    // 0x80232224: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80232228: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8023222C: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x80232230: or          $a2, $a0, $v1
    ctx->r6 = ctx->r4 | ctx->r3;
    // 0x80232234: andi        $v0, $a2, 0x1
    ctx->r2 = ctx->r6 & 0X1;
    // 0x80232238: beq         $v0, $zero, L_802322A8
    if (ctx->r2 == 0) {
        // 0x8023223C: addu        $t2, $a2, $zero
        ctx->r10 = ADD32(ctx->r6, 0);
            goto L_802322A8;
    }
    // 0x8023223C: addu        $t2, $a2, $zero
    ctx->r10 = ADD32(ctx->r6, 0);
    // 0x80232240: lhu         $v0, 0x18($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X18);
    // 0x80232244: lhu         $v1, 0x18($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X18);
    // 0x80232248: lbu         $a0, 0x9($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X9);
    // 0x8023224C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232250: sra         $t3, $v0, 25
    ctx->r11 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80232254: addiu       $t4, $t3, 0x40
    ctx->r12 = ADD32(ctx->r11, 0X40);
    // 0x80232258: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023225C: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x80232260: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232264: bne         $a0, $v0, L_8023227C
    if (ctx->r4 != ctx->r2) {
        // 0x80232268: addiu       $a3, $v1, 0x40
        ctx->r7 = ADD32(ctx->r3, 0X40);
            goto L_8023227C;
    }
    // 0x80232268: addiu       $a3, $v1, 0x40
    ctx->r7 = ADD32(ctx->r3, 0X40);
    // 0x8023226C: andi        $v1, $a2, 0xC
    ctx->r3 = ctx->r6 & 0XC;
    // 0x80232270: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80232274: beql        $v1, $v0, L_8023227C
    if (ctx->r3 == ctx->r2) {
        // 0x80232278: addiu       $t4, $t3, 0x41
        ctx->r12 = ADD32(ctx->r11, 0X41);
            goto L_8023227C;
    }
    goto skip_0;
    // 0x80232278: addiu       $t4, $t3, 0x41
    ctx->r12 = ADD32(ctx->r11, 0X41);
    skip_0:
L_8023227C:
    // 0x8023227C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80232280: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232284: bnel        $v1, $v0, L_80232328
    if (ctx->r3 != ctx->r2) {
        // 0x80232288: sll         $v1, $t4, 16
        ctx->r3 = S32(ctx->r12 << 16);
            goto L_80232328;
    }
    goto skip_1;
    // 0x80232288: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
    skip_1:
    // 0x8023228C: andi        $v0, $t2, 0x30
    ctx->r2 = ctx->r10 & 0X30;
    // 0x80232290: beq         $v0, $zero, L_80232320
    if (ctx->r2 == 0) {
        // 0x80232294: andi        $v0, $t2, 0xF3
        ctx->r2 = ctx->r10 & 0XF3;
            goto L_80232320;
    }
    // 0x80232294: andi        $v0, $t2, 0xF3
    ctx->r2 = ctx->r10 & 0XF3;
    // 0x80232298: xori        $v1, $v0, 0xB3
    ctx->r3 = ctx->r2 ^ 0XB3;
    // 0x8023229C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802322A0: j           L_80232310
    // 0x802322A4: xori        $v0, $v0, 0x91
    ctx->r2 = ctx->r2 ^ 0X91;
        goto L_80232310;
    // 0x802322A4: xori        $v0, $v0, 0x91
    ctx->r2 = ctx->r2 ^ 0X91;
L_802322A8:
    // 0x802322A8: lhu         $v0, 0x14($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X14);
    // 0x802322AC: lhu         $v1, 0x14($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X14);
    // 0x802322B0: lbu         $a0, 0x9($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X9);
    // 0x802322B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802322B8: sra         $t3, $v0, 25
    ctx->r11 = S32(SIGNED(ctx->r2) >> 25);
    // 0x802322BC: addiu       $t4, $t3, 0x40
    ctx->r12 = ADD32(ctx->r11, 0X40);
    // 0x802322C0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802322C4: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x802322C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802322CC: bne         $a0, $v0, L_802322E4
    if (ctx->r4 != ctx->r2) {
        // 0x802322D0: addiu       $a3, $v1, 0x40
        ctx->r7 = ADD32(ctx->r3, 0X40);
            goto L_802322E4;
    }
    // 0x802322D0: addiu       $a3, $v1, 0x40
    ctx->r7 = ADD32(ctx->r3, 0X40);
    // 0x802322D4: andi        $v1, $a2, 0xC
    ctx->r3 = ctx->r6 & 0XC;
    // 0x802322D8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802322DC: beql        $v1, $v0, L_802322E4
    if (ctx->r3 == ctx->r2) {
        // 0x802322E0: addiu       $t4, $t3, 0x41
        ctx->r12 = ADD32(ctx->r11, 0X41);
            goto L_802322E4;
    }
    goto skip_2;
    // 0x802322E0: addiu       $t4, $t3, 0x41
    ctx->r12 = ADD32(ctx->r11, 0X41);
    skip_2:
L_802322E4:
    // 0x802322E4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802322E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802322EC: bne         $v1, $v0, L_80232328
    if (ctx->r3 != ctx->r2) {
        // 0x802322F0: sll         $v1, $t4, 16
        ctx->r3 = S32(ctx->r12 << 16);
            goto L_80232328;
    }
    // 0x802322F0: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
    // 0x802322F4: andi        $v1, $t2, 0x30
    ctx->r3 = ctx->r10 & 0X30;
    // 0x802322F8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802322FC: beq         $v1, $v0, L_80232320
    if (ctx->r3 == ctx->r2) {
        // 0x80232300: andi        $v0, $t2, 0xF3
        ctx->r2 = ctx->r10 & 0XF3;
            goto L_80232320;
    }
    // 0x80232300: andi        $v0, $t2, 0xF3
    ctx->r2 = ctx->r10 & 0XF3;
    // 0x80232304: xori        $v1, $v0, 0xE2
    ctx->r3 = ctx->r2 ^ 0XE2;
    // 0x80232308: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8023230C: xori        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 ^ 0XC0;
L_80232310:
    // 0x80232310: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80232314: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80232318: beq         $v1, $zero, L_80232328
    if (ctx->r3 == 0) {
        // 0x8023231C: sll         $v1, $t4, 16
        ctx->r3 = S32(ctx->r12 << 16);
            goto L_80232328;
    }
    // 0x8023231C: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
L_80232320:
    // 0x80232320: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80232324: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
L_80232328:
    // 0x80232328: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023232C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x80232330: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232334: bne         $v1, $v0, L_80232414
    if (ctx->r3 != ctx->r2) {
        // 0x80232338: nop
    
            goto L_80232414;
    }
    // 0x80232338: nop

    // 0x8023233C: lh          $a0, 0x44($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X44);
    // 0x80232340: lh          $v1, 0x44($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X44);
    // 0x80232344: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x80232348: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8023234C: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80232350: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232354: mflo        $v1
    ctx->r3 = lo;
    // 0x80232358: slti        $v0, $a0, 0x101
    ctx->r2 = SIGNED(ctx->r4) < 0X101 ? 1 : 0;
    // 0x8023235C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80232360: sltiu       $a0, $a0, 0x1
    ctx->r4 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x80232364: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80232368: beq         $v0, $zero, L_80232378
    if (ctx->r2 == 0) {
        // 0x8023236C: sra         $a2, $v1, 4
        ctx->r6 = S32(SIGNED(ctx->r3) >> 4);
            goto L_80232378;
    }
    // 0x8023236C: sra         $a2, $v1, 4
    ctx->r6 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80232370: j           L_8023237C
    // 0x80232374: addiu       $a2, $a2, 0x600
    ctx->r6 = ADD32(ctx->r6, 0X600);
        goto L_8023237C;
    // 0x80232374: addiu       $a2, $a2, 0x600
    ctx->r6 = ADD32(ctx->r6, 0X600);
L_80232378:
    // 0x80232378: addiu       $a2, $a2, 0x400
    ctx->r6 = ADD32(ctx->r6, 0X400);
L_8023237C:
    // 0x8023237C: andi        $v0, $t2, 0x1
    ctx->r2 = ctx->r10 & 0X1;
    // 0x80232380: beq         $v0, $zero, L_80232398
    if (ctx->r2 == 0) {
        // 0x80232384: andi        $v0, $t2, 0x3
        ctx->r2 = ctx->r10 & 0X3;
            goto L_80232398;
    }
    // 0x80232384: andi        $v0, $t2, 0x3
    ctx->r2 = ctx->r10 & 0X3;
    // 0x80232388: lh          $v1, 0x14($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X14);
    // 0x8023238C: lh          $a0, 0x14($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X14);
    // 0x80232390: j           L_802323A4
    // 0x80232394: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
        goto L_802323A4;
    // 0x80232394: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_80232398:
    // 0x80232398: lh          $v1, 0x18($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X18);
    // 0x8023239C: lh          $a0, 0x18($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X18);
    // 0x802323A0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_802323A4:
    // 0x802323A4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x802323A8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802323AC: mflo        $a3
    ctx->r7 = lo;
    // 0x802323B0: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x802323B4: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802323B8: bltz        $a1, L_80232414
    if (SIGNED(ctx->r5) < 0) {
        // 0x802323BC: slt         $v0, $a1, $a2
        ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_80232414;
    }
    // 0x802323BC: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x802323C0: beq         $v0, $zero, L_80232414
    if (ctx->r2 == 0) {
        // 0x802323C4: nop
    
            goto L_80232414;
    }
    // 0x802323C4: nop

    // 0x802323C8: lh          $v0, 0x14($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X14);
    // 0x802323CC: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802323D0: beq         $v0, $zero, L_80232414
    if (ctx->r2 == 0) {
        // 0x802323D4: nop
    
            goto L_80232414;
    }
    // 0x802323D4: nop

    // 0x802323D8: lh          $v1, 0x44($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X44);
    // 0x802323DC: lh          $v0, 0x10($t5)
    ctx->r2 = MEM_H(ctx->r13, 0X10);
    // 0x802323E0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802323E4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802323E8: bnel        $v0, $zero, L_802323F0
    if (ctx->r2 != 0) {
        // 0x802323EC: sh          $a0, 0x10($t1)
        MEM_H(0X10, ctx->r9) = ctx->r4;
            goto L_802323F0;
    }
    goto skip_3;
    // 0x802323EC: sh          $a0, 0x10($t1)
    MEM_H(0X10, ctx->r9) = ctx->r4;
    skip_3:
L_802323F0:
    // 0x802323F0: lbu         $v1, 0xF($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0XF);
    // 0x802323F4: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x802323F8: sb          $v0, 0xF($t1)
    MEM_B(0XF, ctx->r9) = ctx->r2;
    // 0x802323FC: slti        $v0, $a1, 0x3C0
    ctx->r2 = SIGNED(ctx->r5) < 0X3C0 ? 1 : 0;
    // 0x80232400: beq         $v0, $zero, L_80232410
    if (ctx->r2 == 0) {
        // 0x80232404: ori         $v0, $v1, 0x6
        ctx->r2 = ctx->r3 | 0X6;
            goto L_80232410;
    }
    // 0x80232404: ori         $v0, $v1, 0x6
    ctx->r2 = ctx->r3 | 0X6;
    // 0x80232408: sb          $v0, 0xF($t1)
    MEM_B(0XF, ctx->r9) = ctx->r2;
    // 0x8023240C: sh          $zero, 0x10($t1)
    MEM_H(0X10, ctx->r9) = 0;
L_80232410:
    // 0x80232410: sh          $a3, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r7;
L_80232414:
    // 0x80232414: jr          $ra
    // 0x80232418: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80232418: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_802303E8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802303E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802303EC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802303F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802303F4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802303F8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802303FC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80230400: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80230404: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80230408: sltiu       $v0, $v1, 0x16
    ctx->r2 = ctx->r3 < 0X16 ? 1 : 0;
    // 0x8023040C: beq         $v0, $zero, L_80230688
    if (ctx->r2 == 0) {
        // 0x80230410: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80230688;
    }
    // 0x80230410: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80230414: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80230418: addu        $at, $at, $v0
    gpr jr_addend_80230420 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023041C: lw          $v0, 0x7518($at)
    ctx->r2 = ADD32(ctx->r1, 0X7518);
    // 0x80230420: jr          $v0
    // 0x80230424: nop

    switch (jr_addend_80230420 >> 2) {
        case 0: goto L_80230428; break;
        case 1: goto L_80230438; break;
        case 2: goto L_80230460; break;
        case 3: goto L_80230488; break;
        case 4: goto L_802304D0; break;
        case 5: goto L_802304E0; break;
        case 6: goto L_802304F8; break;
        case 7: goto L_80230520; break;
        case 8: goto L_80230554; break;
        case 9: goto L_802305C0; break;
        case 10: goto L_802305D4; break;
        case 11: goto L_8023060C; break;
        case 12: goto L_80230688; break;
        case 13: goto L_80230688; break;
        case 14: goto L_80230688; break;
        case 15: goto L_80230688; break;
        case 16: goto L_80230688; break;
        case 17: goto L_80230688; break;
        case 18: goto L_80230688; break;
        case 19: goto L_80230688; break;
        case 20: goto L_80230638; break;
        case 21: goto L_80230660; break;
        default: switch_error(__func__, 0x80230420, 0x80237518);
    }
    // 0x80230424: nop

L_80230428:
    // 0x80230428: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023042C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80230430: j           L_80230650
    // 0x80230434: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_80230650;
    // 0x80230434: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_80230438:
    // 0x80230438: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023043C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230440: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80230444: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80230448: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
    // 0x8023044C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230450: jal         0x80061510
    // 0x80230454: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x80230454: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
    // 0x80230458: j           L_80230650
    // 0x8023045C: nop

        goto L_80230650;
    // 0x8023045C: nop

L_80230460:
    // 0x80230460: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80230464: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80230468: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8023046C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80230470: bne         $v0, $zero, L_80230688
    if (ctx->r2 != 0) {
        // 0x80230474: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_80230688;
    }
    // 0x80230474: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80230478: beq         $v0, $zero, L_80230650
    if (ctx->r2 == 0) {
        // 0x8023047C: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80230650;
    }
    // 0x8023047C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80230480: j           L_80230630
    // 0x80230484: nop

        goto L_80230630;
    // 0x80230484: nop

L_80230488:
    // 0x80230488: jal         0x80070E80
    // 0x8023048C: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    func_80070E80_4C280(rdram, ctx);
        goto after_1;
    // 0x8023048C: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_1:
    // 0x80230490: bgez        $v0, L_802304B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80230494: addiu       $a0, $zero, -0xA
        ctx->r4 = ADD32(0, -0XA);
            goto L_802304B4;
    }
    // 0x80230494: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    // 0x80230498: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8023049C: lw          $a1, 0x2B28($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B28);
    // 0x802304A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802304A4: jal         0x80061510
    // 0x802304A8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_2;
    // 0x802304A8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_2:
    // 0x802304AC: j           L_80230630
    // 0x802304B0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
        goto L_80230630;
    // 0x802304B0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_802304B4:
    // 0x802304B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802304B8: jal         0x80070E98
    // 0x802304BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80070E98_4C298(rdram, ctx);
        goto after_3;
    // 0x802304BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x802304C0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802304C4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x802304C8: j           L_80230654
    // 0x802304CC: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_80230654;
    // 0x802304CC: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_802304D0:
    // 0x802304D0: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802304D4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802304D8: j           L_80230650
    // 0x802304DC: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_80230650;
    // 0x802304DC: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_802304E0:
    // 0x802304E0: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x802304E4: bgez        $v0, L_80230688
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802304E8: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_80230688;
    }
    // 0x802304E8: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x802304EC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802304F0: j           L_80230654
    // 0x802304F4: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_80230654;
    // 0x802304F4: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_802304F8:
    // 0x802304F8: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x802304FC: bne         $v0, $zero, L_8023052C
    if (ctx->r2 != 0) {
        // 0x80230500: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023052C;
    }
    // 0x80230500: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230504: addiu       $a0, $zero, 0x13E
    ctx->r4 = ADD32(0, 0X13E);
    // 0x80230508: jal         0x8002A33C
    // 0x8023050C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8023050C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_4:
    // 0x80230510: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230514: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80230518: j           L_80230654
    // 0x8023051C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_80230654;
    // 0x8023051C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_80230520:
    // 0x80230520: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80230524: beq         $v0, $zero, L_80230538
    if (ctx->r2 == 0) {
        // 0x80230528: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80230538;
    }
    // 0x80230528: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_8023052C:
    // 0x8023052C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80230530: j           L_80230688
    // 0x80230534: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80230688;
    // 0x80230534: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80230538:
    // 0x80230538: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8023053C: lw          $a1, 0x2B20($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B20);
    // 0x80230540: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230544: jal         0x80061510
    // 0x80230548: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x80230548: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_5:
    // 0x8023054C: j           L_80230650
    // 0x80230550: nop

        goto L_80230650;
    // 0x80230550: nop

L_80230554:
    // 0x80230554: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230558: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023055C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230560: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230564: bne         $v0, $zero, L_80230688
    if (ctx->r2 != 0) {
        // 0x80230568: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80230688;
    }
    // 0x80230568: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023056C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80230570: lw          $a1, 0x2B24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B24);
    // 0x80230574: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80230578: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023057C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80230580: jal         0x80061510
    // 0x80230584: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    func_80061510_3C910(rdram, ctx);
        goto after_6;
    // 0x80230584: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    after_6:
    // 0x80230588: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
    // 0x8023058C: jal         0x8002A33C
    // 0x80230590: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80230590: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_7:
    // 0x80230594: lh          $a0, 0xB0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XB0);
    // 0x80230598: jal         0x80070F38
    // 0x8023059C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80070F38_4C338(rdram, ctx);
        goto after_8;
    // 0x8023059C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_8:
    // 0x802305A0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802305A4: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    // 0x802305A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802305AC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802305B0: jal         0x80230D34
    // 0x802305B4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    func_80230D34_ovl12(rdram, ctx);
        goto after_9;
    // 0x802305B4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_9:
    // 0x802305B8: j           L_80230650
    // 0x802305BC: nop

        goto L_80230650;
    // 0x802305BC: nop

L_802305C0:
    // 0x802305C0: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x802305C4: bltz        $v0, L_80230650
    if (SIGNED(ctx->r2) < 0) {
        // 0x802305C8: nop
    
            goto L_80230650;
    }
    // 0x802305C8: nop

    // 0x802305CC: j           L_80230688
    // 0x802305D0: nop

        goto L_80230688;
    // 0x802305D0: nop

L_802305D4:
    // 0x802305D4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802305D8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802305DC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802305E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802305E4: bne         $v0, $zero, L_80230688
    if (ctx->r2 != 0) {
        // 0x802305E8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80230688;
    }
    // 0x802305E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802305EC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x802305F0: lw          $a1, 0x2B5C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B5C);
    // 0x802305F4: jal         0x80061510
    // 0x802305F8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_10;
    // 0x802305F8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_10:
    // 0x802305FC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80230600: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80230604: j           L_80230650
    // 0x80230608: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_80230650;
    // 0x80230608: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_8023060C:
    // 0x8023060C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230610: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230614: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230618: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023061C: bne         $v0, $zero, L_80230688
    if (ctx->r2 != 0) {
        // 0x80230620: nop
    
            goto L_80230688;
    }
    // 0x80230620: nop

    // 0x80230624: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x80230628: bgez        $v0, L_80230688
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023062C: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80230688;
    }
    // 0x8023062C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_80230630:
    // 0x80230630: j           L_80230688
    // 0x80230634: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80230688;
    // 0x80230634: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230638:
    // 0x80230638: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023063C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230640: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230644: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230648: bne         $v0, $zero, L_80230688
    if (ctx->r2 != 0) {
        // 0x8023064C: nop
    
            goto L_80230688;
    }
    // 0x8023064C: nop

L_80230650:
    // 0x80230650: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_80230654:
    // 0x80230654: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230658: j           L_80230688
    // 0x8023065C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80230688;
    // 0x8023065C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230660:
    // 0x80230660: jal         0x8003516C
    // 0x80230664: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_11;
    // 0x80230664: nop

    after_11:
    // 0x80230668: bne         $v0, $zero, L_80230688
    if (ctx->r2 != 0) {
        // 0x8023066C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230688;
    }
    // 0x8023066C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230670: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80230674: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80230678: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8023067C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80230680: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230684: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80230688:
    // 0x80230688: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8023068C: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x80230690: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80230694: beq         $v0, $zero, L_802306B8
    if (ctx->r2 == 0) {
        // 0x80230698: nop
    
            goto L_802306B8;
    }
    // 0x80230698: nop

    // 0x8023069C: jal         0x80061724
    // 0x802306A0: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_12;
    // 0x802306A0: nop

    after_12:
    // 0x802306A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802306A8: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x802306AC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802306B0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802306B4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802306B8:
    // 0x802306B8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802306BC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802306C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802306C4: jr          $ra
    // 0x802306C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802306C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80228DF4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228DF8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228DFC: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80228E00: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228E04: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228E08: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228E0C: lw          $v0, 0x6540($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6540);
    // 0x80228E10: jalr        $v0
    // 0x80228E14: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228E14: nop

    after_0:
    // 0x80228E18: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228E1C: jr          $ra
    // 0x80228E20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228E20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230D80_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230D84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230D88: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80230D8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230D90: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80230D94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230D98: lw          $v0, 0x6C00($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6C00);
    // 0x80230D9C: jalr        $v0
    // 0x80230DA0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230DA0: nop

    after_0:
    // 0x80230DA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230DA8: jr          $ra
    // 0x80230DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022ED18_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ED18: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022ED1C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022ED20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ED24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ED28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ED2C: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x8022ED30: bne         $v1, $v0, L_8022EDFC
    if (ctx->r3 != ctx->r2) {
        // 0x8022ED34: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022EDFC;
    }
    // 0x8022ED34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ED38: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ED3C: bne         $v0, $zero, L_8022EDBC
    if (ctx->r2 != 0) {
        // 0x8022ED40: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_8022EDBC;
    }
    // 0x8022ED40: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022ED44: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022ED48: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022ED4C: bne         $v0, $s0, L_8022EE48
    if (ctx->r2 != ctx->r16) {
        // 0x8022ED50: nop
    
            goto L_8022EE48;
    }
    // 0x8022ED50: nop

    // 0x8022ED54: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022ED58: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x8022ED5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ED60: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022ED64: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ED68: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022ED6C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022ED70: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022ED74: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x8022ED78: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022ED7C: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x8022ED80: beq         $v0, $zero, L_8022EE48
    if (ctx->r2 == 0) {
        // 0x8022ED84: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022EE48;
    }
    // 0x8022ED84: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022ED88: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022ED8C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022ED90: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022ED94: bne         $v0, $zero, L_8022EE48
    if (ctx->r2 != 0) {
        // 0x8022ED98: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022EE48;
    }
    // 0x8022ED98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022ED9C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022EDA0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022EDA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EDA8: jal         0x800610AC
    // 0x8022EDAC: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x8022EDAC: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    after_0:
    // 0x8022EDB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EDB4: j           L_8022EE48
    // 0x8022EDB8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022EE48;
    // 0x8022EDB8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EDBC:
    // 0x8022EDBC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022EDC0: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8022EDC4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022EDC8: bne         $v0, $zero, L_8022EE48
    if (ctx->r2 != 0) {
        // 0x8022EDCC: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_8022EE48;
    }
    // 0x8022EDCC: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8022EDD0: bne         $v1, $zero, L_8022EDEC
    if (ctx->r3 != 0) {
        // 0x8022EDD4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EDEC;
    }
    // 0x8022EDD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EDD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EDDC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022EDE0: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
    // 0x8022EDE4: j           L_8022EE48
    // 0x8022EDE8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8022EE48;
    // 0x8022EDE8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022EDEC:
    // 0x8022EDEC: beql        $v1, $v0, L_8022EE48
    if (ctx->r3 == ctx->r2) {
        // 0x8022EDF0: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_8022EE48;
    }
    goto skip_0;
    // 0x8022EDF0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
    // 0x8022EDF4: j           L_8022EE48
    // 0x8022EDF8: nop

        goto L_8022EE48;
    // 0x8022EDF8: nop

L_8022EDFC:
    // 0x8022EDFC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EE00: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022EE04: bne         $v0, $s0, L_8022EE48
    if (ctx->r2 != ctx->r16) {
        // 0x8022EE08: nop
    
            goto L_8022EE48;
    }
    // 0x8022EE08: nop

    // 0x8022EE0C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EE10: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x8022EE14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EE18: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022EE1C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EE20: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EE24: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022EE28: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022EE2C: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x8022EE30: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EE34: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x8022EE38: beq         $v0, $zero, L_8022EE48
    if (ctx->r2 == 0) {
        // 0x8022EE3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EE48;
    }
    // 0x8022EE3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EE40: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022EE44: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
L_8022EE48:
    // 0x8022EE48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EE4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EE50: jr          $ra
    // 0x8022EE54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EE54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B720_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B720: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B724: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022B728: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B72C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B730: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022B734: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022B738: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022B73C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022B740: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022B744: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B748: bne         $v0, $s1, L_8022B82C
    if (ctx->r2 != ctx->r17) {
        // 0x8022B74C: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8022B82C;
    }
    // 0x8022B74C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B750: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022B754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B758: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022B75C: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x8022B760: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B764: jal         0x8004F820
    // 0x8022B768: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B768: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x8022B76C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B770: bgez        $v0, L_8022B79C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B774: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B79C;
    }
    // 0x8022B774: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B778: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022B77C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B780: jal         0x8004F820
    // 0x8022B784: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022B784: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022B788: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B78C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B790: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022B794: j           L_8022B7B4
    // 0x8022B798: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022B7B4;
    // 0x8022B798: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022B79C:
    // 0x8022B79C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022B7A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B7A4: jal         0x8004F820
    // 0x8022B7A8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022B7A8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022B7AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B7B0: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022B7B4:
    // 0x8022B7B4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x8022B7B8: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8022B7BC: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x8022B7C0: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x8022B7C4: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022B7C8: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8022B7CC: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8022B7D0: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x8022B7D4: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x8022B7D8: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022B7DC: addiu       $s0, $s0, 0x7680
    ctx->r16 = ADD32(ctx->r16, 0X7680);
    // 0x8022B7E0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8022B7E4: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x8022B7E8: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022B7EC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B7F0: sw          $v0, 0x7684($at)
    MEM_W(0X7684, ctx->r1) = ctx->r2;
    // 0x8022B7F4: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x8022B7F8: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x8022B7FC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B800: sw          $v0, 0x7688($at)
    MEM_W(0X7688, ctx->r1) = ctx->r2;
    // 0x8022B804: jal         0x8004EC38
    // 0x8022B808: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8022B808: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022B80C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B810: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022B814: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022B818: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022B81C: jal         0x80034FCC
    // 0x8022B820: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x8022B820: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x8022B824: j           L_8022B830
    // 0x8022B828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022B830;
    // 0x8022B828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B82C:
    // 0x8022B82C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022B830:
    // 0x8022B830: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022B834: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B838: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022B83C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B840: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B844: jr          $ra
    // 0x8022B848: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B848: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022A850_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A854: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A858: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A85C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022A860: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A868: jal         0x8009A3B4
    // 0x8022A86C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022A86C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022A870: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022A874: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022A878: jal         0x8009A3B4
    // 0x8022A87C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A87C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022A880: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022A884: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022A888: jal         0x8009A3B4
    // 0x8022A88C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022A88C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022A890: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022A894: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022A898: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022A89C: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022A8A0: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x8022A8A4: lhu         $a3, 0x48($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X48);
    // 0x8022A8A8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022A8AC: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022A8B0: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022A8B4: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022A8B8: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022A8BC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022A8C0: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x8022A8C4: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x8022A8C8: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022A8CC: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x8022A8D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A8D4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A8D8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022A8DC: slti        $a1, $a1, -0x257
    ctx->r5 = SIGNED(ctx->r5) < -0X257 ? 1 : 0;
    // 0x8022A8E0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022A8E4: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022A8E8: beq         $a1, $zero, L_8022A900
    if (ctx->r5 == 0) {
        // 0x8022A8EC: sw          $a0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r4;
            goto L_8022A900;
    }
    // 0x8022A8EC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022A8F0: jal         0x8004F418
    // 0x8022A8F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8022A8F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A8F8: j           L_8022A95C
    // 0x8022A8FC: nop

        goto L_8022A95C;
    // 0x8022A8FC: nop

L_8022A900:
    // 0x8022A900: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8022A904: blez        $v0, L_8022A918
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022A908: nop
    
            goto L_8022A918;
    }
    // 0x8022A908: nop

    // 0x8022A90C: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8022A910: j           L_8022A920
    // 0x8022A914: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
        goto L_8022A920;
    // 0x8022A914: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_8022A918:
    // 0x8022A918: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8022A91C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
L_8022A920:
    // 0x8022A920: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8022A924: jal         0x800504EC
    // 0x8022A928: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_4;
    // 0x8022A928: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022A92C: jal         0x80051770
    // 0x8022A930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_5;
    // 0x8022A930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022A934: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8022A938: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022A93C: sh          $v0, -0x3D90($at)
    MEM_H(-0X3D90, ctx->r1) = ctx->r2;
    // 0x8022A940: jal         0x80051248
    // 0x8022A944: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_6;
    // 0x8022A944: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022A948: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A94C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022A950: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022A954: jal         0x8003B564
    // 0x8022A958: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8022A958: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_8022A95C:
    // 0x8022A95C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A960: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A964: jr          $ra
    // 0x8022A968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234070_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234074: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234078: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023407C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234080: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80234084: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234088: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8023408C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234090: lw          $v0, 0x7058($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7058);
    // 0x80234094: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80234098: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8023409C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802340A0: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x802340A4: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x802340A8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802340AC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802340B0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802340B4: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x802340B8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802340BC: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x802340C0: jal         0x80234514
    // 0x802340C4: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_80234514_ovl12(rdram, ctx);
        goto after_0;
    // 0x802340C4: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x802340C8: beq         $v0, $zero, L_802340DC
    if (ctx->r2 == 0) {
        // 0x802340CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802340DC;
    }
    // 0x802340CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802340D0: jal         0x8004F62C
    // 0x802340D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x802340D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802340D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802340DC:
    // 0x802340DC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802340E0: jal         0x8023415C
    // 0x802340E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023415C_ovl12(rdram, ctx);
        goto after_2;
    // 0x802340E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802340E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802340EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802340F0: jr          $ra
    // 0x802340F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802340F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
