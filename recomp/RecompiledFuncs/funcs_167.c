#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023666C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023666C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236670: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236674: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023667C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236680: beq         $v1, $zero, L_80236698
    if (ctx->r3 == 0) {
        // 0x80236684: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236698;
    }
    // 0x80236684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236688: beq         $v1, $v0, L_802366D4
    if (ctx->r3 == ctx->r2) {
        // 0x8023668C: nop
    
            goto L_802366D4;
    }
    // 0x8023668C: nop

    // 0x80236690: j           L_802366DC
    // 0x80236694: nop

        goto L_802366DC;
    // 0x80236694: nop

L_80236698:
    // 0x80236698: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023669C: addiu       $v0, $zero, -0x1E
    ctx->r2 = ADD32(0, -0X1E);
    // 0x802366A0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802366A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802366A8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802366AC: addiu       $v0, $zero, 0x122
    ctx->r2 = ADD32(0, 0X122);
    // 0x802366B0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802366B4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802366B8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802366BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802366C0: jal         0x80050294
    // 0x802366C4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802366C4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x802366C8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802366CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802366D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802366D4:
    // 0x802366D4: jal         0x8005044C
    // 0x802366D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802366D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802366DC:
    // 0x802366DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802366E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802366E4: jr          $ra
    // 0x802366E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802366E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253C8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253C8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802253CC: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x802253D0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802253D4: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802253D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802253E0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802253E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802253E8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802253EC: lw          $v1, -0x74C0($at)
    ctx->r3 = MEM_W(ctx->r1, -0X74C0);
    // 0x802253F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802253F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802253F8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802253FC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225400: jalr        $v0
    // 0x80225404: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225404: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x80225408: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022540C: jr          $ra
    // 0x80225410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802298EC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802298EC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802298F0: bne         $v0, $zero, L_80229918
    if (ctx->r2 != 0) {
        // 0x802298F4: addiu       $v0, $zero, -0x6A4
        ctx->r2 = ADD32(0, -0X6A4);
            goto L_80229918;
    }
    // 0x802298F4: addiu       $v0, $zero, -0x6A4
    ctx->r2 = ADD32(0, -0X6A4);
    // 0x802298F8: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x802298FC: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x80229900: addiu       $v0, $zero, -0x14
    ctx->r2 = ADD32(0, -0X14);
    // 0x80229904: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80229908: addiu       $v0, $zero, -0x9F6
    ctx->r2 = ADD32(0, -0X9F6);
    // 0x8022990C: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80229910: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229914: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
L_80229918:
    // 0x80229918: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022991C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80229920: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80229924: beql        $v1, $v0, L_8022992C
    if (ctx->r3 == ctx->r2) {
        // 0x80229928: sb          $zero, 0xD($a0)
        MEM_B(0XD, ctx->r4) = 0;
            goto L_8022992C;
    }
    goto skip_0;
    // 0x80229928: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    skip_0:
L_8022992C:
    // 0x8022992C: jr          $ra
    // 0x80229930: nop

    TRACE_RETURN()
    return;
    // 0x80229930: nop

;}
RECOMP_FUNC void func_802310D8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802310D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802310DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802310E0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802310E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802310E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802310EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802310F0: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x802310F4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802310F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802310FC: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x80231100: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80231104: bne         $v0, $v1, L_802311F8
    if (ctx->r2 != ctx->r3) {
        // 0x80231108: nop
    
            goto L_802311F8;
    }
    // 0x80231108: nop

    // 0x8023110C: jal         0x8004F144
    // 0x80231110: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80231110: nop

    after_0:
    // 0x80231114: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80231118: beq         $s1, $zero, L_802311F8
    if (ctx->r17 == 0) {
        // 0x8023111C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802311F8;
    }
    // 0x8023111C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231120: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80231124: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80231128: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x8023112C: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80231130: jal         0x800A3450
    // 0x80231134: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80231134: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_1:
    // 0x80231138: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8023113C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80231140: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x80231144: jal         0x800A3450
    // 0x80231148: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80231148: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    after_2:
    // 0x8023114C: lhu         $v1, 0x1C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1C);
    // 0x80231150: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80231154: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231158: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x8023115C: lhu         $v0, 0x1E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1E);
    // 0x80231160: jal         0x800A3450
    // 0x80231164: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80231164: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    after_3:
    // 0x80231168: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x8023116C: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80231170: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x80231174: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80231178: sw          $a0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r4;
    // 0x8023117C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231180: jal         0x800A3450
    // 0x80231184: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80231184: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    after_4:
    // 0x80231188: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023118C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80231190: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80231194: sb          $v0, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r2;
    // 0x80231198: sb          $zero, 0x23($s1)
    MEM_B(0X23, ctx->r17) = 0;
    // 0x8023119C: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x802311A0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802311A4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802311A8: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
    // 0x802311AC: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x802311B0: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x802311B4: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x802311B8: sw          $s2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r18;
    // 0x802311BC: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x802311C0: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x802311C4: blez        $v0, L_802311E8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802311C8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_802311E8;
    }
    // 0x802311C8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_802311CC:
    // 0x802311CC: jal         0x80231000
    // 0x802311D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80231000_ovl27(rdram, ctx);
        goto after_5;
    // 0x802311D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x802311D4: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x802311D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802311DC: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802311E0: bne         $v0, $zero, L_802311CC
    if (ctx->r2 != 0) {
        // 0x802311E4: nop
    
            goto L_802311CC;
    }
    // 0x802311E4: nop

L_802311E8:
    // 0x802311E8: jal         0x800A3450
    // 0x802311EC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x802311EC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_6:
    // 0x802311F0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802311F4: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_802311F8:
    // 0x802311F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802311FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80231200: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80231204: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231208: jr          $ra
    // 0x8023120C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023120C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80236E8C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236E8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236E90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236E94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236E98: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236E9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236EA0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236EA4: bne         $v0, $zero, L_80236F24
    if (ctx->r2 != 0) {
        // 0x80236EA8: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80236F24;
    }
    // 0x80236EA8: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80236EAC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80236EB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236EB4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80236EB8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80236EBC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80236EC0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80236EC4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80236EC8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80236ECC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80236ED0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80236ED4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80236ED8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80236EDC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80236EE0: jal         0x8004D5D4
    // 0x80236EE4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80236EE4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80236EE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236EEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236EF0: jal         0x80050294
    // 0x80236EF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80236EF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80236EF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236EFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236F00: jal         0x80237098
    // 0x80236F04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80237098_ovl27(rdram, ctx);
        goto after_2;
    // 0x80236F04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80236F08: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80236F0C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236F10: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80236F14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236F18: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80236F1C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80236F20: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80236F24:
    // 0x80236F24: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236F28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236F2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236F30: jr          $ra
    // 0x80236F34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236F34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023591C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023591C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235920: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235924: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235928: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023592C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235930: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80235934: bne         $v0, $zero, L_80235968
    if (ctx->r2 != 0) {
        // 0x80235938: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80235968;
    }
    // 0x80235938: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8023593C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80235940: jal         0x80050294
    // 0x80235944: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80235944: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80235948: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023594C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235950: jal         0x80235CD8
    // 0x80235954: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_80235CD8_ovl27(rdram, ctx);
        goto after_1;
    // 0x80235954: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_1:
    // 0x80235958: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023595C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80235960: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235964: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80235968:
    // 0x80235968: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023596C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80235970: addiu       $v0, $zero, 0x87
    ctx->r2 = ADD32(0, 0X87);
    // 0x80235974: beq         $v1, $v0, L_802359BC
    if (ctx->r3 == ctx->r2) {
        // 0x80235978: slti        $v0, $v1, 0x88
        ctx->r2 = SIGNED(ctx->r3) < 0X88 ? 1 : 0;
            goto L_802359BC;
    }
    // 0x80235978: slti        $v0, $v1, 0x88
    ctx->r2 = SIGNED(ctx->r3) < 0X88 ? 1 : 0;
    // 0x8023597C: beq         $v0, $zero, L_80235994
    if (ctx->r2 == 0) {
        // 0x80235980: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80235994;
    }
    // 0x80235980: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80235984: beq         $v1, $v0, L_802359B0
    if (ctx->r3 == ctx->r2) {
        // 0x80235988: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802359B0;
    }
    // 0x80235988: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023598C: j           L_802359E0
    // 0x80235990: nop

        goto L_802359E0;
    // 0x80235990: nop

L_80235994:
    // 0x80235994: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x80235998: beq         $v1, $v0, L_802359CC
    if (ctx->r3 == ctx->r2) {
        // 0x8023599C: addiu       $v0, $zero, 0x96
        ctx->r2 = ADD32(0, 0X96);
            goto L_802359CC;
    }
    // 0x8023599C: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x802359A0: beq         $v1, $v0, L_802359D0
    if (ctx->r3 == ctx->r2) {
        // 0x802359A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802359D0;
    }
    // 0x802359A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802359A8: j           L_802359E0
    // 0x802359AC: nop

        goto L_802359E0;
    // 0x802359AC: nop

L_802359B0:
    // 0x802359B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802359B4: j           L_802359D8
    // 0x802359B8: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
        goto L_802359D8;
    // 0x802359B8: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
L_802359BC:
    // 0x802359BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802359C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802359C4: j           L_802359D8
    // 0x802359C8: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
        goto L_802359D8;
    // 0x802359C8: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
L_802359CC:
    // 0x802359CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802359D0:
    // 0x802359D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802359D4: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
L_802359D8:
    // 0x802359D8: jal         0x80235CD8
    // 0x802359DC: nop

    func_80235CD8_ovl27(rdram, ctx);
        goto after_2;
    // 0x802359DC: nop

    after_2:
L_802359E0:
    // 0x802359E0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802359E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802359E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802359EC: jr          $ra
    // 0x802359F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802359F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DA4C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DA4C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022DA50: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022DA54: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8022DA58: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022DA5C: lui         $s5, 0x2E80
    ctx->r21 = S32(0X2E80 << 16);
    // 0x8022DA60: ori         $s5, $s5, 0x8080
    ctx->r21 = ctx->r21 | 0X8080;
    // 0x8022DA64: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x8022DA68: lui         $fp, 0x3D48
    ctx->r30 = S32(0X3D48 << 16);
    // 0x8022DA6C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8022DA70: lui         $s7, 0x2E
    ctx->r23 = S32(0X2E << 16);
    // 0x8022DA74: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022DA78: addiu       $s6, $zero, 0x14
    ctx->r22 = ADD32(0, 0X14);
    // 0x8022DA7C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022DA80: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022DA84: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022DA88: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022DA8C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022DA90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DA94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_8022DA98:
    // 0x8022DA98: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022DA9C: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x8022DAA0: lbu         $s1, -0x6064($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X6064);
    // 0x8022DAA4: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022DAA8: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x8022DAAC: lbu         $s0, -0x6063($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X6063);
    // 0x8022DAB0: jal         0x8003B878
    // 0x8022DAB4: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022DAB4: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    after_0:
    // 0x8022DAB8: sw          $s5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r21;
    // 0x8022DABC: lw          $v1, 0xD8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD8);
    // 0x8022DAC0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8022DAC4: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022DAC8: lw          $a2, 0xDC($s3)
    ctx->r6 = MEM_W(ctx->r19, 0XDC);
    // 0x8022DACC: sll         $a0, $s0, 8
    ctx->r4 = S32(ctx->r16 << 8);
    // 0x8022DAD0: or          $v1, $s1, $fp
    ctx->r3 = ctx->r17 | ctx->r30;
    // 0x8022DAD4: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x8022DAD8: addiu       $a1, $s1, 0x1F
    ctx->r5 = ADD32(ctx->r17, 0X1F);
    // 0x8022DADC: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8022DAE0: or          $v1, $a1, $s7
    ctx->r3 = ctx->r5 | ctx->r23;
    // 0x8022DAE4: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8022DAE8: addiu       $s0, $s0, 0x1F
    ctx->r16 = ADD32(ctx->r16, 0X1F);
    // 0x8022DAEC: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x8022DAF0: or          $s1, $s0, $s1
    ctx->r17 = ctx->r16 | ctx->r17;
    // 0x8022DAF4: or          $s0, $s0, $a1
    ctx->r16 = ctx->r16 | ctx->r5;
    // 0x8022DAF8: sw          $a0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r4;
    // 0x8022DAFC: sw          $s1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r17;
    // 0x8022DB00: sw          $s0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r16;
    // 0x8022DB04: sw          $s6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r22;
    // 0x8022DB08: sw          $a2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r6;
    // 0x8022DB0C: slti        $v0, $s4, 0x4
    ctx->r2 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x8022DB10: bne         $v0, $zero, L_8022DA98
    if (ctx->r2 != 0) {
        // 0x8022DB14: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_8022DA98;
    }
    // 0x8022DB14: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x8022DB18: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022DB1C: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x8022DB20: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DB24: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022DB28: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022DB2C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022DB30: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DB34: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022DB38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DB3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DB40: jr          $ra
    // 0x8022DB44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022DB44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022DB48: nop

    // 0x8022DB4C: nop

;}
RECOMP_FUNC void func_80231000_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231004: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80231008: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023100C: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x80231010: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231014: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231018: addu        $at, $at, $v0
    gpr jr_addend_80231020 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023101C: lw          $v0, -0x5E30($at)
    ctx->r2 = ADD32(ctx->r1, -0X5E30);
    // 0x80231020: jr          $v0
    // 0x80231024: nop

    switch (jr_addend_80231020 >> 2) {
        case 0: goto L_80231028; break;
        case 1: goto L_80231040; break;
        case 2: goto L_802310C4; break;
        default: switch_error(__func__, 0x80231020, 0x8023A1D0);
    }
    // 0x80231024: nop

L_80231028:
    // 0x80231028: lbu         $v1, 0x8($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8);
    // 0x8023102C: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x80231030: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231034: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231038: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x8023103C: sb          $v1, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r3;
L_80231040:
    // 0x80231040: lbu         $v0, 0xD($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XD);
    // 0x80231044: lw          $v1, 0x2C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X2C);
    // 0x80231048: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023104C: sb          $v0, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r2;
    // 0x80231050: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80231054: beq         $v0, $zero, L_80231068
    if (ctx->r2 == 0) {
        // 0x80231058: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231068;
    }
    // 0x80231058: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023105C: lbu         $v1, 0x8($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X8);
    // 0x80231060: bne         $v1, $v0, L_80231078
    if (ctx->r3 != ctx->r2) {
        // 0x80231064: nop
    
            goto L_80231078;
    }
    // 0x80231064: nop

L_80231068:
    // 0x80231068: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x8023106C: sb          $zero, 0xD($t0)
    MEM_B(0XD, ctx->r8) = 0;
    // 0x80231070: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231074: sb          $v0, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r2;
L_80231078:
    // 0x80231078: lbu         $a2, 0xF($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0XF);
    // 0x8023107C: lb          $v1, 0xD($t0)
    ctx->r3 = MEM_B(ctx->r8, 0XD);
    // 0x80231080: lhu         $a0, 0x24($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X24);
    // 0x80231084: lw          $a3, 0x28($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X28);
    // 0x80231088: lhu         $a1, 0x1E($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X1E);
    // 0x8023108C: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x80231090: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80231094: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x80231098: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8023109C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802310A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802310A4: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x802310A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802310AC: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x802310B0: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x802310B4: sw          $v0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r2;
    // 0x802310B8: sh          $a0, 0x24($t0)
    MEM_H(0X24, ctx->r8) = ctx->r4;
    // 0x802310BC: j           L_802310CC
    // 0x802310C0: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
        goto L_802310CC;
    // 0x802310C0: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
L_802310C4:
    // 0x802310C4: jal         0x8004F5C4
    // 0x802310C8: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x802310C8: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    after_0:
L_802310CC:
    // 0x802310CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802310D0: jr          $ra
    // 0x802310D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802310D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802314E4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802314E4: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x802314E8: beq         $v1, $zero, L_80231500
    if (ctx->r3 == 0) {
        // 0x802314EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231500;
    }
    // 0x802314EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802314F0: beq         $v1, $v0, L_80231524
    if (ctx->r3 == ctx->r2) {
        // 0x802314F4: nop
    
            goto L_80231524;
    }
    // 0x802314F4: nop

    // 0x802314F8: j           L_80231540
    // 0x802314FC: nop

        goto L_80231540;
    // 0x802314FC: nop

L_80231500:
    // 0x80231500: lbu         $v1, 0xB($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XB);
    // 0x80231504: sltiu       $v0, $v1, 0x3F
    ctx->r2 = ctx->r3 < 0X3F ? 1 : 0;
    // 0x80231508: beq         $v0, $zero, L_80231534
    if (ctx->r2 == 0) {
        // 0x8023150C: sltiu       $v0, $v1, 0x21
        ctx->r2 = ctx->r3 < 0X21 ? 1 : 0;
            goto L_80231534;
    }
    // 0x8023150C: sltiu       $v0, $v1, 0x21
    ctx->r2 = ctx->r3 < 0X21 ? 1 : 0;
    // 0x80231510: beq         $v0, $zero, L_80231540
    if (ctx->r2 == 0) {
        // 0x80231514: nop
    
            goto L_80231540;
    }
    // 0x80231514: nop

    // 0x80231518: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x8023151C: j           L_8023153C
    // 0x80231520: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_8023153C;
    // 0x80231520: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_80231524:
    // 0x80231524: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80231528: sltiu       $v0, $v0, 0xE1
    ctx->r2 = ctx->r2 < 0XE1 ? 1 : 0;
    // 0x8023152C: bne         $v0, $zero, L_80231540
    if (ctx->r2 != 0) {
        // 0x80231530: nop
    
            goto L_80231540;
    }
    // 0x80231530: nop

L_80231534:
    // 0x80231534: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80231538: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_8023153C:
    // 0x8023153C: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
L_80231540:
    // 0x80231540: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80231544: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231548: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x8023154C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80231550: bne         $v0, $zero, L_80231564
    if (ctx->r2 != 0) {
        // 0x80231554: nop
    
            goto L_80231564;
    }
    // 0x80231554: nop

    // 0x80231558: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023155C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231560: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80231564:
    // 0x80231564: jr          $ra
    // 0x80231568: nop

    TRACE_RETURN()
    return;
    // 0x80231568: nop

;}
RECOMP_FUNC void func_8022F6BC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F6BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F6C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F6C4: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022F6C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F6CC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F6D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F6D4: lw          $v0, -0x5EC4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5EC4);
    // 0x8022F6D8: jalr        $v0
    // 0x8022F6DC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F6DC: nop

    after_0:
    // 0x8022F6E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F6E4: jr          $ra
    // 0x8022F6E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F6E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233478_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023347C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233480: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80233484: bne         $v0, $zero, L_802334A8
    if (ctx->r2 != 0) {
        // 0x80233488: addiu       $v0, $zero, -0xB4
        ctx->r2 = ADD32(0, -0XB4);
            goto L_802334A8;
    }
    // 0x80233488: addiu       $v0, $zero, -0xB4
    ctx->r2 = ADD32(0, -0XB4);
    // 0x8023348C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233490: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80233494: lui         $v0, 0xFF4C
    ctx->r2 = S32(0XFF4C << 16);
    // 0x80233498: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023349C: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x802334A0: jal         0x802340E8
    // 0x802334A4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_802340E8_ovl27(rdram, ctx);
        goto after_0;
    // 0x802334A4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_0:
L_802334A8:
    // 0x802334A8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802334AC: jal         0x80234148
    // 0x802334B0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80234148_ovl27(rdram, ctx);
        goto after_1;
    // 0x802334B0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_1:
    // 0x802334B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802334B8: jr          $ra
    // 0x802334BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802334BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802279D4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802279D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802279DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802279E0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802279E4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802279E8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802279EC: jal         0x8003516C
    // 0x802279F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x802279F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802279F4: bne         $v0, $zero, L_80227A18
    if (ctx->r2 != 0) {
        // 0x802279F8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80227A18;
    }
    // 0x802279F8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802279FC: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80227A00: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80227A04: jal         0x800610AC
    // 0x80227A08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x80227A08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80227A0C: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227A10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227A14: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_80227A18:
    // 0x80227A18: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227A1C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80227A20: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227A24: jal         0x8004F820
    // 0x80227A28: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227A28: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80227A2C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227A30: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80227A34: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x80227A38: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227A3C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227A40: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80227A44: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227A48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227A4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227A50: jr          $ra
    // 0x80227A54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227A54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235D1C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235D1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235D20: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80235D24: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80235D28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80235D2C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80235D30: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80235D34: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80235D38: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80235D3C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80235D40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235D44: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80235D48: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80235D4C: beq         $v1, $v0, L_80235D68
    if (ctx->r3 == ctx->r2) {
        // 0x80235D50: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80235D68;
    }
    // 0x80235D50: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80235D54: bne         $v1, $v0, L_80235D64
    if (ctx->r3 != ctx->r2) {
        // 0x80235D58: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80235D64;
    }
    // 0x80235D58: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80235D5C: j           L_80235D68
    // 0x80235D60: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
        goto L_80235D68;
    // 0x80235D60: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_80235D64:
    // 0x80235D64: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80235D68:
    // 0x80235D68: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80235D6C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80235D70: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80235D74: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235D78: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80235D7C: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x80235D80: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80235D84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235D88: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80235D8C: beq         $a0, $v1, L_80235DB4
    if (ctx->r4 == ctx->r3) {
        // 0x80235D90: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80235DB4;
    }
    // 0x80235D90: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80235D94: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80235D98: jal         0x8003B85C
    // 0x80235D9C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80235D9C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80235DA0: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80235DA4: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x80235DA8: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x80235DAC: jal         0x8003B840
    // 0x80235DB0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80235DB0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80235DB4:
    // 0x80235DB4: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80235DB8: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x80235DBC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80235DC0: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x80235DC4: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80235DC8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235DCC: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80235DD0: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80235DD4: beq         $v1, $v0, L_80235DF0
    if (ctx->r3 == ctx->r2) {
        // 0x80235DD8: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80235DF0;
    }
    // 0x80235DD8: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80235DDC: bne         $v1, $v0, L_80235DEC
    if (ctx->r3 != ctx->r2) {
        // 0x80235DE0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80235DEC;
    }
    // 0x80235DE0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80235DE4: j           L_80235DF0
    // 0x80235DE8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80235DF0;
    // 0x80235DE8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80235DEC:
    // 0x80235DEC: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_80235DF0:
    // 0x80235DF0: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x80235DF4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80235DF8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80235DFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235E00: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80235E04: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x80235E08: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80235E0C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235E10: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80235E14: beq         $a0, $v1, L_80235E3C
    if (ctx->r4 == ctx->r3) {
        // 0x80235E18: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80235E3C;
    }
    // 0x80235E18: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80235E1C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80235E20: jal         0x8003B85C
    // 0x80235E24: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80235E24: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x80235E28: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80235E2C: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x80235E30: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x80235E34: jal         0x8003B840
    // 0x80235E38: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80235E38: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80235E3C:
    // 0x80235E3C: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80235E40: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80235E44: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80235E48: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80235E4C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235E50: jr          $ra
    // 0x80235E54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80235E54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80235E58: nop

    // 0x80235E5C: nop

;}
RECOMP_FUNC void func_8022CF44_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CF44: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022CF48: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022CF4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CF50: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022CF54: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022CF58: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022CF5C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022CF60: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022CF64: lhu         $v0, 0x30($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X30);
    // 0x8022CF68: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022CF6C: addiu       $a1, $a1, -0x61BC
    ctx->r5 = ADD32(ctx->r5, -0X61BC);
    // 0x8022CF70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CF74: jal         0x8009A3B4
    // 0x8022CF78: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022CF78: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x8022CF7C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8022CF80: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022CF84: jal         0x8009A3B4
    // 0x8022CF88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022CF88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022CF8C: lhu         $v0, 0x18($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X18);
    // 0x8022CF90: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x8022CF94: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CF98: addiu       $v0, $v0, 0xAA
    ctx->r2 = ADD32(ctx->r2, 0XAA);
    // 0x8022CF9C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022CFA0: slti        $v0, $v0, 0x154
    ctx->r2 = SIGNED(ctx->r2) < 0X154 ? 1 : 0;
    // 0x8022CFA4: beq         $v0, $zero, L_8022CFCC
    if (ctx->r2 == 0) {
        // 0x8022CFA8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8022CFCC;
    }
    // 0x8022CFA8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022CFAC: lhu         $v0, 0x1C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1C);
    // 0x8022CFB0: lhu         $v1, 0x24($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X24);
    // 0x8022CFB4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CFB8: addiu       $v0, $v0, 0xFA
    ctx->r2 = ADD32(ctx->r2, 0XFA);
    // 0x8022CFBC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022CFC0: slti        $v0, $v0, 0x1F4
    ctx->r2 = SIGNED(ctx->r2) < 0X1F4 ? 1 : 0;
    // 0x8022CFC4: bne         $v0, $zero, L_8022CFD0
    if (ctx->r2 != 0) {
        // 0x8022CFC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CFD0;
    }
    // 0x8022CFC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022CFCC:
    // 0x8022CFCC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022CFD0:
    // 0x8022CFD0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CFD4: beq         $v0, $zero, L_8022CFF0
    if (ctx->r2 == 0) {
        // 0x8022CFD8: nop
    
            goto L_8022CFF0;
    }
    // 0x8022CFD8: nop

    // 0x8022CFDC: lhu         $v0, 0x2C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2C);
    // 0x8022CFE0: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8022CFE4: ori         $s1, $s1, 0x1
    ctx->r17 = ctx->r17 | 0X1;
    // 0x8022CFE8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022CFEC: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
L_8022CFF0:
    // 0x8022CFF0: lhu         $v0, 0x2C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2C);
    // 0x8022CFF4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022CFF8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022CFFC: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022D000: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022D004: addiu       $a1, $a1, -0x61BC
    ctx->r5 = ADD32(ctx->r5, -0X61BC);
    // 0x8022D008: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D00C: jal         0x8009A3B4
    // 0x8022D010: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D010: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022D014: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8022D018: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022D01C: jal         0x8009A3B4
    // 0x8022D020: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022D020: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022D024: lhu         $v0, 0x18($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X18);
    // 0x8022D028: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x8022D02C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D030: addiu       $v0, $v0, 0xAA
    ctx->r2 = ADD32(ctx->r2, 0XAA);
    // 0x8022D034: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022D038: slti        $v0, $v0, 0x154
    ctx->r2 = SIGNED(ctx->r2) < 0X154 ? 1 : 0;
    // 0x8022D03C: beq         $v0, $zero, L_8022D068
    if (ctx->r2 == 0) {
        // 0x8022D040: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022D068;
    }
    // 0x8022D040: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022D044: lhu         $v0, 0x1C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1C);
    // 0x8022D048: lhu         $v1, 0x24($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X24);
    // 0x8022D04C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D050: addiu       $v0, $v0, 0xFA
    ctx->r2 = ADD32(ctx->r2, 0XFA);
    // 0x8022D054: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022D058: slti        $v0, $v0, 0x1F4
    ctx->r2 = SIGNED(ctx->r2) < 0X1F4 ? 1 : 0;
    // 0x8022D05C: bne         $v0, $zero, L_8022D068
    if (ctx->r2 != 0) {
        // 0x8022D060: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D068;
    }
    // 0x8022D060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D064: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022D068:
    // 0x8022D068: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022D06C: beq         $v0, $zero, L_8022D08C
    if (ctx->r2 == 0) {
        // 0x8022D070: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_8022D08C;
    }
    // 0x8022D070: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022D074: lhu         $v0, 0x30($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X30);
    // 0x8022D078: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x8022D07C: ori         $s1, $s1, 0x2
    ctx->r17 = ctx->r17 | 0X2;
    // 0x8022D080: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022D084: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x8022D088: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_8022D08C:
    // 0x8022D08C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022D090: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022D094: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022D098: jr          $ra
    // 0x8022D09C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022D09C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80231E00_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231E04: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80231E08: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80231E0C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80231E10: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80231E14: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80231E18: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80231E1C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80231E20: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231E24: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80231E28: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80231E2C: beq         $v0, $zero, L_8023207C
    if (ctx->r2 == 0) {
        // 0x80231E30: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023207C;
    }
    // 0x80231E30: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80231E34: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231E38: addu        $at, $at, $v0
    gpr jr_addend_80231E40 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231E3C: lw          $v0, -0x38F0($at)
    ctx->r2 = ADD32(ctx->r1, -0X38F0);
    // 0x80231E40: jr          $v0
    // 0x80231E44: nop

    switch (jr_addend_80231E40 >> 2) {
        case 0: goto L_80231E48; break;
        case 1: goto L_80231E8C; break;
        case 2: goto L_80231F3C; break;
        case 3: goto L_80231F8C; break;
        case 4: goto L_8023202C; break;
        default: switch_error(__func__, 0x80231E40, 0x8023C710);
    }
    // 0x80231E44: nop

L_80231E48:
    // 0x80231E48: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80231E4C: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80231E50: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80231E54: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80231E58: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80231E5C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80231E60: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80231E64: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231E68: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80231E6C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80231E70: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80231E74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231E78: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80231E7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231E80: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x80231E84: j           L_8023207C
    // 0x80231E88: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_8023207C;
    // 0x80231E88: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_80231E8C:
    // 0x80231E8C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80231E90: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x80231E94: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x80231E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231E9C: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80231EA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231EA4: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80231EA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231EAC: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80231EB0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80231EB4: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80231EB8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231EBC: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80231EC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231EC4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80231EC8: beq         $a0, $v0, L_80231F10
    if (ctx->r4 == ctx->r2) {
        // 0x80231ECC: sw          $v1, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r3;
            goto L_80231F10;
    }
    // 0x80231ECC: sw          $v1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r3;
    // 0x80231ED0: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80231ED4: beql        $v0, $zero, L_80231EEC
    if (ctx->r2 == 0) {
        // 0x80231ED8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231EEC;
    }
    goto skip_0;
    // 0x80231ED8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80231EDC: beq         $a0, $zero, L_80231EFC
    if (ctx->r4 == 0) {
        // 0x80231EE0: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80231EFC;
    }
    // 0x80231EE0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80231EE4: j           L_8023207C
    // 0x80231EE8: nop

        goto L_8023207C;
    // 0x80231EE8: nop

L_80231EEC:
    // 0x80231EEC: beq         $a0, $v0, L_80231F28
    if (ctx->r4 == ctx->r2) {
        // 0x80231EF0: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80231F28;
    }
    // 0x80231EF0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80231EF4: j           L_8023207C
    // 0x80231EF8: nop

        goto L_8023207C;
    // 0x80231EF8: nop

L_80231EFC:
    // 0x80231EFC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80231F00: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80231F04: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231F08: j           L_8023207C
    // 0x80231F0C: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8023207C;
    // 0x80231F0C: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80231F10:
    // 0x80231F10: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80231F14: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80231F18: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80231F1C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80231F20: j           L_8023207C
    // 0x80231F24: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8023207C;
    // 0x80231F24: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80231F28:
    // 0x80231F28: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80231F2C: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80231F30: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
    // 0x80231F34: j           L_8023207C
    // 0x80231F38: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8023207C;
    // 0x80231F38: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80231F3C:
    // 0x80231F3C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80231F40: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80231F44: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x80231F48: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80231F4C: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x80231F50: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80231F54: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80231F58: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80231F5C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231F60: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80231F64: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231F68: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80231F6C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80231F70: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x80231F74: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80231F78: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80231F7C: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x80231F80: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80231F84: j           L_8023207C
    // 0x80231F88: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
        goto L_8023207C;
    // 0x80231F88: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
L_80231F8C:
    // 0x80231F8C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80231F90: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
    // 0x80231F94: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80231F98: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80231F9C: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x80231FA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231FA4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80231FA8: addiu       $a1, $a1, -0x38F8
    ctx->r5 = ADD32(ctx->r5, -0X38F8);
    // 0x80231FAC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80231FB0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80231FB4: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80231FB8: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80231FBC: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80231FC0: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80231FC4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80231FC8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80231FCC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80231FD0: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80231FD4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80231FD8: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x80231FDC: jal         0x8009A3B4
    // 0x80231FE0: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80231FE0: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_0:
    // 0x80231FE4: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80231FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231FEC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80231FF0: addiu       $a1, $a1, -0x38F4
    ctx->r5 = ADD32(ctx->r5, -0X38F4);
    // 0x80231FF4: jal         0x8009A3B4
    // 0x80231FF8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231FF8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80231FFC: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x80232000: lb          $v1, 0xC($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XC);
    // 0x80232004: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80232008: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023200C: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x80232010: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80232014: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80232018: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8023201C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80232020: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80232024: j           L_8023207C
    // 0x80232028: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
        goto L_8023207C;
    // 0x80232028: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
L_8023202C:
    // 0x8023202C: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x80232030: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80232034: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x80232038: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x8023203C: ori         $a0, $a0, 0x80
    ctx->r4 = ctx->r4 | 0X80;
    // 0x80232040: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80232044: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80232048: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8023204C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80232050: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80232054: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232058: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8023205C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80232060: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x80232064: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80232068: sw          $a0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r4;
    // 0x8023206C: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    // 0x80232070: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80232074: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80232078: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
L_8023207C:
    // 0x8023207C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80232080: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80232084: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80232088: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023208C: jr          $ra
    // 0x80232090: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80232090: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022FB0C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FB0C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022FB10: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022FB14: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FB18: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022FB1C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022FB20: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022FB24: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022FB28: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022FB2C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022FB30: sltiu       $v0, $v1, 0x2A
    ctx->r2 = ctx->r3 < 0X2A ? 1 : 0;
    // 0x8022FB34: beq         $v0, $zero, L_8022FFBC
    if (ctx->r2 == 0) {
        // 0x8022FB38: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022FFBC;
    }
    // 0x8022FB38: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022FB3C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FB40: addu        $at, $at, $v0
    gpr jr_addend_8022FB48 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FB44: lw          $v0, -0x39B8($at)
    ctx->r2 = ADD32(ctx->r1, -0X39B8);
    // 0x8022FB48: jr          $v0
    // 0x8022FB4C: nop

    switch (jr_addend_8022FB48 >> 2) {
        case 0: goto L_8022FB50; break;
        case 1: goto L_8022FB78; break;
        case 2: goto L_8022FFBC; break;
        case 3: goto L_8022FFBC; break;
        case 4: goto L_8022FFBC; break;
        case 5: goto L_8022FFBC; break;
        case 6: goto L_8022FFBC; break;
        case 7: goto L_8022FFBC; break;
        case 8: goto L_8022FFBC; break;
        case 9: goto L_8022FFBC; break;
        case 10: goto L_8022FBD8; break;
        case 11: goto L_8022FC00; break;
        case 12: goto L_8022FC28; break;
        case 13: goto L_8022FC7C; break;
        case 14: goto L_8022FC90; break;
        case 15: goto L_8022FCB8; break;
        case 16: goto L_8022FCEC; break;
        case 17: goto L_8022FD18; break;
        case 18: goto L_8022FFBC; break;
        case 19: goto L_8022FFBC; break;
        case 20: goto L_8022FD44; break;
        case 21: goto L_8022FDA0; break;
        case 22: goto L_8022FE30; break;
        case 23: goto L_8022FE80; break;
        case 24: goto L_8022FE90; break;
        case 25: goto L_8022FFBC; break;
        case 26: goto L_8022FFBC; break;
        case 27: goto L_8022FFBC; break;
        case 28: goto L_8022FFBC; break;
        case 29: goto L_8022FFBC; break;
        case 30: goto L_8022FEA4; break;
        case 31: goto L_8022FF34; break;
        case 32: goto L_8022FFBC; break;
        case 33: goto L_8022FFBC; break;
        case 34: goto L_8022FFBC; break;
        case 35: goto L_8022FFBC; break;
        case 36: goto L_8022FFBC; break;
        case 37: goto L_8022FFBC; break;
        case 38: goto L_8022FFBC; break;
        case 39: goto L_8022FFBC; break;
        case 40: goto L_8022FF4C; break;
        case 41: goto L_8022FF98; break;
        default: switch_error(__func__, 0x8022FB48, 0x8023C648);
    }
    // 0x8022FB4C: nop

L_8022FB50:
    // 0x8022FB50: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x8022FB54: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022FB58: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022FB5C: jal         0x80070E54
    // 0x8022FB60: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    func_80070E54_4C254(rdram, ctx);
        goto after_0;
    // 0x8022FB60: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    after_0:
    // 0x8022FB64: bne         $v0, $zero, L_8022FFBC
    if (ctx->r2 != 0) {
        // 0x8022FB68: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022FFBC;
    }
    // 0x8022FB68: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022FB6C:
    // 0x8022FB6C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022FB70: j           L_8022FF88
    // 0x8022FB74: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
        goto L_8022FF88;
    // 0x8022FB74: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
L_8022FB78:
    // 0x8022FB78: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8022FB7C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022FB80: beq         $v0, $zero, L_8022FB90
    if (ctx->r2 == 0) {
        // 0x8022FB84: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8022FB90;
    }
    // 0x8022FB84: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022FB88: j           L_8022FFBC
    // 0x8022FB8C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022FFBC;
    // 0x8022FB8C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022FB90:
    // 0x8022FB90: jal         0x800A3450
    // 0x8022FB94: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022FB94: nop

    after_1:
    // 0x8022FB98: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022FB9C: beq         $v0, $zero, L_8022FBC8
    if (ctx->r2 == 0) {
        // 0x8022FBA0: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022FBC8;
    }
    // 0x8022FBA0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022FBA4: lbu         $a0, 0xD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XD);
    // 0x8022FBA8: jal         0x80230174
    // 0x8022FBAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80230174_ovl27(rdram, ctx);
        goto after_2;
    // 0x8022FBAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8022FBB0: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8022FBB4: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022FBB8: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8022FBBC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022FBC0: j           L_8022FFBC
    // 0x8022FBC4: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
        goto L_8022FFBC;
    // 0x8022FBC4: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_8022FBC8:
    // 0x8022FBC8: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x8022FBCC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022FBD0: j           L_8022FFBC
    // 0x8022FBD4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022FFBC;
    // 0x8022FBD4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022FBD8:
    // 0x8022FBD8: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x8022FBDC: bne         $v0, $zero, L_8022FE3C
    if (ctx->r2 != 0) {
        // 0x8022FBE0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022FE3C;
    }
    // 0x8022FBE0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022FBE4: addiu       $a0, $zero, 0x13E
    ctx->r4 = ADD32(0, 0X13E);
    // 0x8022FBE8: jal         0x8002A33C
    // 0x8022FBEC: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022FBEC: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_3:
    // 0x8022FBF0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022FBF4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8022FBF8: j           L_8022FF8C
    // 0x8022FBFC: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
        goto L_8022FF8C;
    // 0x8022FBFC: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
L_8022FC00:
    // 0x8022FC00: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x8022FC04: bne         $v0, $zero, L_8022FE3C
    if (ctx->r2 != 0) {
        // 0x8022FC08: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022FE3C;
    }
    // 0x8022FC08: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022FC0C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022FC10: lw          $a1, 0x2B20($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B20);
    // 0x8022FC14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8022FC18:
    // 0x8022FC18: jal         0x80061510
    // 0x8022FC1C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x8022FC1C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x8022FC20: j           L_8022FF88
    // 0x8022FC24: nop

        goto L_8022FF88;
    // 0x8022FC24: nop

L_8022FC28:
    // 0x8022FC28: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FC2C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022FC30: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022FC34: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022FC38: bne         $v0, $zero, L_8022FFBC
    if (ctx->r2 != 0) {
        // 0x8022FC3C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_8022FFBC;
    }
    // 0x8022FC3C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8022FC40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022FC44: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022FC48: lw          $a1, 0x2B24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B24);
    // 0x8022FC4C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022FC50: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022FC54: jal         0x80061510
    // 0x8022FC58: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x8022FC58: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
    after_5:
    // 0x8022FC5C: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
    // 0x8022FC60: jal         0x8002A33C
    // 0x8022FC64: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022FC64: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_6:
    // 0x8022FC68: lh          $a0, 0xB0($s2)
    ctx->r4 = MEM_H(ctx->r18, 0XB0);
    // 0x8022FC6C: jal         0x80070F38
    // 0x8022FC70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80070F38_4C338(rdram, ctx);
        goto after_7;
    // 0x8022FC70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x8022FC74: j           L_8022FF88
    // 0x8022FC78: nop

        goto L_8022FF88;
    // 0x8022FC78: nop

L_8022FC7C:
    // 0x8022FC7C: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x8022FC80: bltz        $v0, L_8022FF88
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022FC84: nop
    
            goto L_8022FF88;
    }
    // 0x8022FC84: nop

    // 0x8022FC88: j           L_8022FFBC
    // 0x8022FC8C: nop

        goto L_8022FFBC;
    // 0x8022FC8C: nop

L_8022FC90:
    // 0x8022FC90: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FC94: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022FC98: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022FC9C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022FCA0: bne         $v0, $zero, L_8022FFBC
    if (ctx->r2 != 0) {
        // 0x8022FCA4: nop
    
            goto L_8022FFBC;
    }
    // 0x8022FCA4: nop

    // 0x8022FCA8: jal         0x80060D38
    // 0x8022FCAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060D38_3C138(rdram, ctx);
        goto after_8;
    // 0x8022FCAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x8022FCB0: j           L_8022FF88
    // 0x8022FCB4: nop

        goto L_8022FF88;
    // 0x8022FCB4: nop

L_8022FCB8:
    // 0x8022FCB8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FCBC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022FCC0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022FCC4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022FCC8: bne         $v0, $zero, L_8022FFBC
    if (ctx->r2 != 0) {
        // 0x8022FCCC: nop
    
            goto L_8022FFBC;
    }
    // 0x8022FCCC: nop

    // 0x8022FCD0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022FCD4: lw          $a1, 0x2B5C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B5C);
    // 0x8022FCD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022FCDC: jal         0x80061510
    // 0x8022FCE0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_9;
    // 0x8022FCE0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_9:
    // 0x8022FCE4: j           L_8022FB6C
    // 0x8022FCE8: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
        goto L_8022FB6C;
    // 0x8022FCE8: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_8022FCEC:
    // 0x8022FCEC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FCF0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022FCF4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022FCF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022FCFC: bne         $v0, $zero, L_8022FFBC
    if (ctx->r2 != 0) {
        // 0x8022FD00: nop
    
            goto L_8022FFBC;
    }
    // 0x8022FD00: nop

    // 0x8022FD04: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x8022FD08: bgez        $v0, L_8022FFBC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022FD0C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022FFBC;
    }
    // 0x8022FD0C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022FD10: j           L_8022FB6C
    // 0x8022FD14: nop

        goto L_8022FB6C;
    // 0x8022FD14: nop

L_8022FD18:
    // 0x8022FD18: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FD1C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022FD20: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022FD24: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022FD28: bne         $v0, $zero, L_8022FFBC
    if (ctx->r2 != 0) {
        // 0x8022FD2C: nop
    
            goto L_8022FFBC;
    }
    // 0x8022FD2C: nop

    // 0x8022FD30: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x8022FD34: bgez        $v0, L_8022FFBC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022FD38: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_8022FFBC;
    }
    // 0x8022FD38: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022FD3C: j           L_8022FF44
    // 0x8022FD40: nop

        goto L_8022FF44;
    // 0x8022FD40: nop

L_8022FD44:
    // 0x8022FD44: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022FD48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022FD4C: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8022FD50: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022FD54: jal         0x8004D5D4
    // 0x8022FD58: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_10;
    // 0x8022FD58: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_10:
    // 0x8022FD5C: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022FD60: jal         0x8002C654
    // 0x8022FD64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_11;
    // 0x8022FD64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8022FD68: lbu         $a0, 0x3($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X3);
    // 0x8022FD6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022FD70: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x8022FD74: jal         0x800319B4
    // 0x8022FD78: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_12;
    // 0x8022FD78: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_12:
    // 0x8022FD7C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022FD80: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x8022FD84: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x8022FD88: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8022FD8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FD90: jal         0x8002A33C
    // 0x8022FD94: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_13;
    // 0x8022FD94: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    after_13:
    // 0x8022FD98: j           L_8022FFBC
    // 0x8022FD9C: nop

        goto L_8022FFBC;
    // 0x8022FD9C: nop

L_8022FDA0:
    // 0x8022FDA0: jal         0x8004F144
    // 0x8022FDA4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_14;
    // 0x8022FDA4: nop

    after_14:
    // 0x8022FDA8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022FDAC: beq         $s0, $zero, L_8022FFBC
    if (ctx->r16 == 0) {
        // 0x8022FDB0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FFBC;
    }
    // 0x8022FDB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FDB4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022FDB8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022FDBC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022FDC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FDC4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022FDC8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022FDCC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022FDD0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022FDD4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022FDD8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022FDDC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8022FDE0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022FDE4: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x8022FDE8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022FDEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FDF0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FDF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FDF8: lhu         $v0, -0x5EA8($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X5EA8);
    // 0x8022FDFC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FE00: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x8022FE04: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x8022FE08: addiu       $v0, $v0, -0xC8
    ctx->r2 = ADD32(ctx->r2, -0XC8);
    // 0x8022FE0C: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x8022FE10: lhu         $v1, 0x3C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022FE14: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022FE18: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022FE1C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8022FE20: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022FE24: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022FE28: j           L_8022FF8C
    // 0x8022FE2C: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
        goto L_8022FF8C;
    // 0x8022FE2C: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
L_8022FE30:
    // 0x8022FE30: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x8022FE34: beq         $v0, $zero, L_8022FE48
    if (ctx->r2 == 0) {
        // 0x8022FE38: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022FE48;
    }
    // 0x8022FE38: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_8022FE3C:
    // 0x8022FE3C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022FE40: j           L_8022FFBC
    // 0x8022FE44: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
        goto L_8022FFBC;
    // 0x8022FE44: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
L_8022FE48:
    // 0x8022FE48: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022FE4C: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022FE50: beq         $v0, $zero, L_8022FE74
    if (ctx->r2 == 0) {
        // 0x8022FE54: nop
    
            goto L_8022FE74;
    }
    // 0x8022FE54: nop

    // 0x8022FE58: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022FE5C: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8022FE60: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FE64: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022FE68: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022FE6C: j           L_8022FFBC
    // 0x8022FE70: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
        goto L_8022FFBC;
    // 0x8022FE70: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
L_8022FE74:
    // 0x8022FE74: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022FE78: j           L_8022FF8C
    // 0x8022FE7C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_8022FF8C;
    // 0x8022FE7C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_8022FE80:
    // 0x8022FE80: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022FE84: lw          $a1, 0x2B2C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B2C);
    // 0x8022FE88: j           L_8022FC18
    // 0x8022FE8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_8022FC18;
    // 0x8022FE8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8022FE90:
    // 0x8022FE90: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FE94: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022FE98: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022FE9C: j           L_8022FF3C
    // 0x8022FEA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
        goto L_8022FF3C;
    // 0x8022FEA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_8022FEA4:
    // 0x8022FEA4: jal         0x8004F144
    // 0x8022FEA8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_15;
    // 0x8022FEA8: nop

    after_15:
    // 0x8022FEAC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022FEB0: beq         $s0, $zero, L_8022FFBC
    if (ctx->r16 == 0) {
        // 0x8022FEB4: addiu       $a1, $s1, 0x38
        ctx->r5 = ADD32(ctx->r17, 0X38);
            goto L_8022FFBC;
    }
    // 0x8022FEB4: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x8022FEB8: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022FEBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022FEC0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022FEC4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022FEC8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022FECC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022FED0: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022FED4: jal         0x8009A3B4
    // 0x8022FED8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x8022FED8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_16:
    // 0x8022FEDC: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x8022FEE0: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x8022FEE4: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x8022FEE8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022FEEC: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8022FEF0: sw          $s0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r16;
    // 0x8022FEF4: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022FEF8: andi        $v1, $v1, 0x8
    ctx->r3 = ctx->r3 & 0X8;
    // 0x8022FEFC: bne         $v1, $zero, L_8022FF0C
    if (ctx->r3 != 0) {
        // 0x8022FF00: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_8022FF0C;
    }
    // 0x8022FF00: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022FF04: jal         0x802300CC
    // 0x8022FF08: nop

    func_802300CC_ovl27(rdram, ctx);
        goto after_17;
    // 0x8022FF08: nop

    after_17:
L_8022FF0C:
    // 0x8022FF0C: jal         0x80060D38
    // 0x8022FF10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80060D38_3C138(rdram, ctx);
        goto after_18;
    // 0x8022FF10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_18:
    // 0x8022FF14: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8022FF18: lbu         $a0, 0xD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XD);
    // 0x8022FF1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FF20: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022FF24: jal         0x80230174
    // 0x8022FF28: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    func_80230174_ovl27(rdram, ctx);
        goto after_19;
    // 0x8022FF28: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    after_19:
    // 0x8022FF2C: j           L_8022FF88
    // 0x8022FF30: nop

        goto L_8022FF88;
    // 0x8022FF30: nop

L_8022FF34:
    // 0x8022FF34: lw          $s0, 0x44($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X44);
    // 0x8022FF38: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
L_8022FF3C:
    // 0x8022FF3C: bne         $v0, $zero, L_8022FFBC
    if (ctx->r2 != 0) {
        // 0x8022FF40: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_8022FFBC;
    }
    // 0x8022FF40: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_8022FF44:
    // 0x8022FF44: j           L_8022FFBC
    // 0x8022FF48: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022FFBC;
    // 0x8022FF48: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022FF4C:
    // 0x8022FF4C: jal         0x8003516C
    // 0x8022FF50: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_20;
    // 0x8022FF50: nop

    after_20:
    // 0x8022FF54: bne         $v0, $zero, L_8022FFBC
    if (ctx->r2 != 0) {
        // 0x8022FF58: nop
    
            goto L_8022FFBC;
    }
    // 0x8022FF58: nop

    // 0x8022FF5C: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8022FF60: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022FF64: bne         $v0, $zero, L_8022FF88
    if (ctx->r2 != 0) {
        // 0x8022FF68: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022FF88;
    }
    // 0x8022FF68: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8022FF6C: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x8022FF70: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
    // 0x8022FF74: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022FF78: sb          $v1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r3;
    // 0x8022FF7C: sw          $zero, 0x184($s2)
    MEM_W(0X184, ctx->r18) = 0;
    // 0x8022FF80: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022FF84: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
L_8022FF88:
    // 0x8022FF88: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
L_8022FF8C:
    // 0x8022FF8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FF90: j           L_8022FFBC
    // 0x8022FF94: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022FFBC;
    // 0x8022FF94: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022FF98:
    // 0x8022FF98: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8022FF9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FFA0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022FFA4: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022FFA8: andi        $v1, $v1, 0x4
    ctx->r3 = ctx->r3 & 0X4;
    // 0x8022FFAC: beq         $v1, $zero, L_8022FFBC
    if (ctx->r3 == 0) {
        // 0x8022FFB0: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_8022FFBC;
    }
    // 0x8022FFB0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022FFB4: jal         0x8004F684
    // 0x8022FFB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_21;
    // 0x8022FFB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_21:
L_8022FFBC:
    // 0x8022FFBC: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8022FFC0: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x8022FFC4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022FFC8: beq         $v0, $zero, L_8023000C
    if (ctx->r2 == 0) {
        // 0x8022FFCC: nop
    
            goto L_8023000C;
    }
    // 0x8022FFCC: nop

    // 0x8022FFD0: jal         0x80061724
    // 0x8022FFD4: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_22;
    // 0x8022FFD4: nop

    after_22:
    // 0x8022FFD8: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x8022FFDC: sw          $zero, 0x184($s2)
    MEM_W(0X184, ctx->r18) = 0;
    // 0x8022FFE0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022FFE4: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    // 0x8022FFE8: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8022FFEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FFF0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022FFF4: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022FFF8: andi        $v1, $v1, 0x4
    ctx->r3 = ctx->r3 & 0X4;
    // 0x8022FFFC: beq         $v1, $zero, L_8023000C
    if (ctx->r3 == 0) {
        // 0x80230000: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_8023000C;
    }
    // 0x80230000: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80230004: jal         0x8004F684
    // 0x80230008: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_23;
    // 0x80230008: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_23:
L_8023000C:
    // 0x8023000C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80230010: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80230014: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80230018: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023001C: jr          $ra
    // 0x80230020: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80230020: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80227A58_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227A5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227A60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227A64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227A68: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227A6C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80227A70: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227A74: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80227A78: jal         0x8004F820
    // 0x80227A7C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80227A7C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80227A80: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227A84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227A88: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227A8C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80227A90: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80227A94: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80227A98: bne         $v0, $zero, L_80227AD0
    if (ctx->r2 != 0) {
        // 0x80227A9C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80227AD0;
    }
    // 0x80227A9C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227AA0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80227AA4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227AA8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227AAC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80227AB0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80227AB4: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80227AB8: jal         0x80227F28
    // 0x80227ABC: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_80227F28_ovl27(rdram, ctx);
        goto after_1;
    // 0x80227ABC: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x80227AC0: jal         0x80034E3C
    // 0x80227AC4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x80227AC4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80227AC8: j           L_80227AEC
    // 0x80227ACC: nop

        goto L_80227AEC;
    // 0x80227ACC: nop

L_80227AD0:
    // 0x80227AD0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227AD4: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80227AD8: bne         $v1, $v0, L_80227AEC
    if (ctx->r3 != ctx->r2) {
        // 0x80227ADC: nop
    
            goto L_80227AEC;
    }
    // 0x80227ADC: nop

    // 0x80227AE0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227AE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227AE8: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_80227AEC:
    // 0x80227AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227AF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227AF4: jr          $ra
    // 0x80227AF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227AF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023683C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023683C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236840: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236844: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023684C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236850: beq         $v1, $zero, L_80236868
    if (ctx->r3 == 0) {
        // 0x80236854: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236868;
    }
    // 0x80236854: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236858: beq         $v1, $v0, L_80236884
    if (ctx->r3 == ctx->r2) {
        // 0x8023685C: nop
    
            goto L_80236884;
    }
    // 0x8023685C: nop

    // 0x80236860: j           L_8023688C
    // 0x80236864: nop

        goto L_8023688C;
    // 0x80236864: nop

L_80236868:
    // 0x80236868: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023686C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80236870: jal         0x80050294
    // 0x80236874: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80236874: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80236878: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023687C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236880: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80236884:
    // 0x80236884: jal         0x8005044C
    // 0x80236888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80236888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023688C:
    // 0x8023688C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236890: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236894: jr          $ra
    // 0x80236898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225150_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x7B5C
    ctx->r2 = ADD32(ctx->r2, -0X7B5C);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x79CC
    ctx->r2 = ADD32(ctx->r2, -0X79CC);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x799C
    ctx->r2 = ADD32(ctx->r2, -0X799C);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x7954
    ctx->r2 = ADD32(ctx->r2, -0X7954);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x78D4
    ctx->r2 = ADD32(ctx->r2, -0X78D4);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x78D0
    ctx->r2 = ADD32(ctx->r2, -0X78D0);
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
RECOMP_FUNC void func_80236474_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236478: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023647C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236484: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236488: bne         $v0, $zero, L_802364A4
    if (ctx->r2 != 0) {
        // 0x8023648C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802364A4;
    }
    // 0x8023648C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236490: jal         0x80050294
    // 0x80236494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80236494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80236498: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023649C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802364A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802364A4:
    // 0x802364A4: jal         0x8005044C
    // 0x802364A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802364A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802364AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802364B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802364B4: jr          $ra
    // 0x802364B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802364B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225414_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225418: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022541C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225424: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022542C: beq         $v1, $v0, L_80225484
    if (ctx->r3 == ctx->r2) {
        // 0x80225430: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225484;
    }
    // 0x80225430: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225434: beql        $v0, $zero, L_8022544C
    if (ctx->r2 == 0) {
        // 0x80225438: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022544C;
    }
    goto skip_0;
    // 0x80225438: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022543C: beq         $v1, $zero, L_8022545C
    if (ctx->r3 == 0) {
        // 0x80225440: nop
    
            goto L_8022545C;
    }
    // 0x80225440: nop

    // 0x80225444: j           L_802254C0
    // 0x80225448: nop

        goto L_802254C0;
    // 0x80225448: nop

L_8022544C:
    // 0x8022544C: beq         $v1, $v0, L_8022549C
    if (ctx->r3 == ctx->r2) {
        // 0x80225450: nop
    
            goto L_8022549C;
    }
    // 0x80225450: nop

    // 0x80225454: j           L_802254C0
    // 0x80225458: nop

        goto L_802254C0;
    // 0x80225458: nop

L_8022545C:
    // 0x8022545C: jal         0x8006033C
    // 0x80225460: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225460: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    after_0:
    // 0x80225464: beq         $v0, $zero, L_802254C0
    if (ctx->r2 == 0) {
        // 0x80225468: nop
    
            goto L_802254C0;
    }
    // 0x80225468: nop

    // 0x8022546C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225470: addiu       $v0, $v0, 0x4A6D
    ctx->r2 = ADD32(ctx->r2, 0X4A6D);
    // 0x80225474: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80225478: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8022547C: j           L_802254B4
    // 0x80225480: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
        goto L_802254B4;
    // 0x80225480: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_80225484:
    // 0x80225484: jal         0x80036B58
    // 0x80225488: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x80225488: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x8022548C: jal         0x80036E48
    // 0x80225490: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80225490: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_2:
    // 0x80225494: j           L_802254B4
    // 0x80225498: nop

        goto L_802254B4;
    // 0x80225498: nop

L_8022549C:
    // 0x8022549C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802254A0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802254A4: bne         $v0, $zero, L_802254C0
    if (ctx->r2 != 0) {
        // 0x802254A8: nop
    
            goto L_802254C0;
    }
    // 0x802254A8: nop

    // 0x802254AC: jal         0x80060690
    // 0x802254B0: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    func_80060690_3BA90(rdram, ctx);
        goto after_3;
    // 0x802254B0: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_3:
L_802254B4:
    // 0x802254B4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802254B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802254BC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802254C0:
    // 0x802254C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802254C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802254C8: jr          $ra
    // 0x802254CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802254CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802379AC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802379AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802379B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802379B4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802379B8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802379BC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802379C0: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x802379C4: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x802379C8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802379CC: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x802379D0: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x802379D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802379D8: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x802379DC: beq         $a0, $v0, L_802379F8
    if (ctx->r4 == ctx->r2) {
        // 0x802379E0: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_802379F8;
    }
    // 0x802379E0: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x802379E4: bne         $a0, $v0, L_802379F4
    if (ctx->r4 != ctx->r2) {
        // 0x802379E8: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802379F4;
    }
    // 0x802379E8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802379EC: j           L_802379F8
    // 0x802379F0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_802379F8;
    // 0x802379F0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_802379F4:
    // 0x802379F4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_802379F8:
    // 0x802379F8: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x802379FC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80237A00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237A04: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80237A08: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80237A0C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80237A10: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237A14: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237A18: beq         $a0, $v1, L_80237A40
    if (ctx->r4 == ctx->r3) {
        // 0x80237A1C: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80237A40;
    }
    // 0x80237A1C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80237A20: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80237A24: jal         0x8003B85C
    // 0x80237A28: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80237A28: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80237A2C: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80237A30: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80237A34: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80237A38: jal         0x8003B840
    // 0x80237A3C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80237A3C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80237A40:
    // 0x80237A40: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x80237A44: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80237A48: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80237A4C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80237A50: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80237A54: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x80237A58: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80237A5C: beq         $v1, $v0, L_80237A78
    if (ctx->r3 == ctx->r2) {
        // 0x80237A60: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80237A78;
    }
    // 0x80237A60: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80237A64: bne         $v1, $v0, L_80237A74
    if (ctx->r3 != ctx->r2) {
        // 0x80237A68: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80237A74;
    }
    // 0x80237A68: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80237A6C: j           L_80237A78
    // 0x80237A70: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_80237A78;
    // 0x80237A70: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_80237A74:
    // 0x80237A74: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_80237A78:
    // 0x80237A78: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x80237A7C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80237A80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237A84: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80237A88: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x80237A8C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80237A90: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237A94: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237A98: beq         $a0, $v1, L_80237AC0
    if (ctx->r4 == ctx->r3) {
        // 0x80237A9C: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80237AC0;
    }
    // 0x80237A9C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80237AA0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80237AA4: jal         0x8003B85C
    // 0x80237AA8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80237AA8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80237AAC: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80237AB0: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80237AB4: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80237AB8: jal         0x8003B840
    // 0x80237ABC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80237ABC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80237AC0:
    // 0x80237AC0: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80237AC4: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x80237AC8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80237ACC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80237AD0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80237AD4: jr          $ra
    // 0x80237AD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80237AD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80229838_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022983C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229840: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229848: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022984C: bne         $v0, $zero, L_80229870
    if (ctx->r2 != 0) {
        // 0x80229850: addiu       $v0, $zero, -0x82
        ctx->r2 = ADD32(0, -0X82);
            goto L_80229870;
    }
    // 0x80229850: addiu       $v0, $zero, -0x82
    ctx->r2 = ADD32(0, -0X82);
    // 0x80229854: jal         0x800504EC
    // 0x80229858: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_800504EC_2B8EC(rdram, ctx);
        goto after_0;
    // 0x80229858: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022985C: jal         0x8005129C
    // 0x80229860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_1;
    // 0x80229860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229864: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229868: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022986C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229870:
    // 0x80229870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229874: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229878: jr          $ra
    // 0x8022987C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022987C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225CFC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225D00: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225D04: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80225D08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225D0C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225D10: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225D14: lw          $v0, -0x6914($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6914);
    // 0x80225D18: jalr        $v0
    // 0x80225D1C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225D1C: nop

    after_0:
    // 0x80225D20: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225D24: jr          $ra
    // 0x80225D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236D34_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236D34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236D38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236D3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236D40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236D44: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236D48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236D4C: beq         $v1, $v0, L_80236DAC
    if (ctx->r3 == ctx->r2) {
        // 0x80236D50: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80236DAC;
    }
    // 0x80236D50: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80236D54: beql        $v0, $zero, L_80236D6C
    if (ctx->r2 == 0) {
        // 0x80236D58: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236D6C;
    }
    goto skip_0;
    // 0x80236D58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80236D5C: beq         $v1, $zero, L_80236D7C
    if (ctx->r3 == 0) {
        // 0x80236D60: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236D7C;
    }
    // 0x80236D60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236D64: j           L_80236DCC
    // 0x80236D68: nop

        goto L_80236DCC;
    // 0x80236D68: nop

L_80236D6C:
    // 0x80236D6C: beq         $v1, $v0, L_80236DC4
    if (ctx->r3 == ctx->r2) {
        // 0x80236D70: nop
    
            goto L_80236DC4;
    }
    // 0x80236D70: nop

    // 0x80236D74: j           L_80236DCC
    // 0x80236D78: nop

        goto L_80236DCC;
    // 0x80236D78: nop

L_80236D7C:
    // 0x80236D7C: addiu       $v0, $zero, -0x9F6
    ctx->r2 = ADD32(0, -0X9F6);
    // 0x80236D80: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80236D84: addiu       $v0, $zero, 0x186
    ctx->r2 = ADD32(0, 0X186);
    // 0x80236D88: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80236D8C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80236D90: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80236D94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236D98: jal         0x80050294
    // 0x80236D9C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80236D9C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80236DA0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236DA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236DA8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80236DAC:
    // 0x80236DAC: jal         0x80051770
    // 0x80236DB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_1;
    // 0x80236DB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80236DB4: jal         0x80051248
    // 0x80236DB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_2;
    // 0x80236DB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80236DBC: j           L_80236DCC
    // 0x80236DC0: nop

        goto L_80236DCC;
    // 0x80236DC0: nop

L_80236DC4:
    // 0x80236DC4: jal         0x8005044C
    // 0x80236DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80236DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80236DCC:
    // 0x80236DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236DD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236DD4: jr          $ra
    // 0x80236DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80236DDC: nop

;}
RECOMP_FUNC void func_8022B3EC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B3EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B3F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B3F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B3F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022B3FC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B400: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B408: jal         0x800502EC
    // 0x8022B40C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_0;
    // 0x8022B40C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022B410: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B414: addiu       $a0, $zero, 0x1B4
    ctx->r4 = ADD32(0, 0X1B4);
    // 0x8022B418: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B41C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B420: jal         0x8002A33C
    // 0x8022B424: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022B424: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022B428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B42C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B430: jr          $ra
    // 0x8022B434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BA88_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BA88: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022BA8C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022BA90: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022BA94: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022BA98: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    // 0x8022BA9C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022BAA0: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022BAA4: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022BAA8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022BAAC: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x8022BAB0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022BAB4: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8022BAB8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022BABC: lui         $s4, 0xFFFF
    ctx->r20 = S32(0XFFFF << 16);
    // 0x8022BAC0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022BAC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
L_8022BAC8:
    // 0x8022BAC8: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022BACC: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x8022BAD0: sw          $v1, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r3;
    // 0x8022BAD4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022BAD8: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x8022BADC: beql        $v0, $zero, L_8022BAE4
    if (ctx->r2 == 0) {
        // 0x8022BAE0: sb          $v1, 0x9($s2)
        MEM_B(0X9, ctx->r18) = ctx->r3;
            goto L_8022BAE4;
    }
    goto skip_0;
    // 0x8022BAE0: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
    skip_0:
L_8022BAE4:
    // 0x8022BAE4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022BAE8: sltiu       $v0, $v1, 0x95
    ctx->r2 = ctx->r3 < 0X95 ? 1 : 0;
    // 0x8022BAEC: beq         $v0, $zero, L_8022BEF4
    if (ctx->r2 == 0) {
        // 0x8022BAF0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022BEF4;
    }
    // 0x8022BAF0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022BAF4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BAF8: addu        $at, $at, $v0
    gpr jr_addend_8022BB00 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BAFC: lw          $v0, -0x3CD8($at)
    ctx->r2 = ADD32(ctx->r1, -0X3CD8);
    // 0x8022BB00: jr          $v0
    // 0x8022BB04: nop

    switch (jr_addend_8022BB00 >> 2) {
        case 0: goto L_8022BB08; break;
        case 1: goto L_8022BB3C; break;
        case 2: goto L_8022BB90; break;
        case 3: goto L_8022BD24; break;
        case 4: goto L_8022BD78; break;
        case 5: goto L_8022BD9C; break;
        case 6: goto L_8022BDA4; break;
        case 7: goto L_8022BDD8; break;
        case 8: goto L_8022BCA4; break;
        case 9: goto L_8022BEF4; break;
        case 10: goto L_8022BEF4; break;
        case 11: goto L_8022BEF4; break;
        case 12: goto L_8022BEF4; break;
        case 13: goto L_8022BEF4; break;
        case 14: goto L_8022BEF4; break;
        case 15: goto L_8022BEF4; break;
        case 16: goto L_8022BEF4; break;
        case 17: goto L_8022BEF4; break;
        case 18: goto L_8022BEF4; break;
        case 19: goto L_8022BEF4; break;
        case 20: goto L_8022BEF4; break;
        case 21: goto L_8022BEF4; break;
        case 22: goto L_8022BEF4; break;
        case 23: goto L_8022BEF4; break;
        case 24: goto L_8022BEF4; break;
        case 25: goto L_8022BEF4; break;
        case 26: goto L_8022BEF4; break;
        case 27: goto L_8022BEF4; break;
        case 28: goto L_8022BEF4; break;
        case 29: goto L_8022BEF4; break;
        case 30: goto L_8022BEF4; break;
        case 31: goto L_8022BEF4; break;
        case 32: goto L_8022BEF4; break;
        case 33: goto L_8022BEF4; break;
        case 34: goto L_8022BEF4; break;
        case 35: goto L_8022BEF4; break;
        case 36: goto L_8022BEF4; break;
        case 37: goto L_8022BEF4; break;
        case 38: goto L_8022BEF4; break;
        case 39: goto L_8022BEF4; break;
        case 40: goto L_8022BEF4; break;
        case 41: goto L_8022BEF4; break;
        case 42: goto L_8022BEF4; break;
        case 43: goto L_8022BEF4; break;
        case 44: goto L_8022BEF4; break;
        case 45: goto L_8022BEF4; break;
        case 46: goto L_8022BEF4; break;
        case 47: goto L_8022BEF4; break;
        case 48: goto L_8022BEF4; break;
        case 49: goto L_8022BEF4; break;
        case 50: goto L_8022BEF4; break;
        case 51: goto L_8022BEF4; break;
        case 52: goto L_8022BEF4; break;
        case 53: goto L_8022BEF4; break;
        case 54: goto L_8022BEF4; break;
        case 55: goto L_8022BEF4; break;
        case 56: goto L_8022BEF4; break;
        case 57: goto L_8022BEF4; break;
        case 58: goto L_8022BEF4; break;
        case 59: goto L_8022BEF4; break;
        case 60: goto L_8022BEF4; break;
        case 61: goto L_8022BEF4; break;
        case 62: goto L_8022BEF4; break;
        case 63: goto L_8022BEF4; break;
        case 64: goto L_8022BEF4; break;
        case 65: goto L_8022BEF4; break;
        case 66: goto L_8022BEF4; break;
        case 67: goto L_8022BEF4; break;
        case 68: goto L_8022BEF4; break;
        case 69: goto L_8022BEF4; break;
        case 70: goto L_8022BEF4; break;
        case 71: goto L_8022BEF4; break;
        case 72: goto L_8022BEF4; break;
        case 73: goto L_8022BEF4; break;
        case 74: goto L_8022BEF4; break;
        case 75: goto L_8022BEF4; break;
        case 76: goto L_8022BEF4; break;
        case 77: goto L_8022BEF4; break;
        case 78: goto L_8022BEF4; break;
        case 79: goto L_8022BEF4; break;
        case 80: goto L_8022BEF4; break;
        case 81: goto L_8022BEF4; break;
        case 82: goto L_8022BEF4; break;
        case 83: goto L_8022BEF4; break;
        case 84: goto L_8022BEF4; break;
        case 85: goto L_8022BEF4; break;
        case 86: goto L_8022BEF4; break;
        case 87: goto L_8022BEF4; break;
        case 88: goto L_8022BEF4; break;
        case 89: goto L_8022BEF4; break;
        case 90: goto L_8022BEF4; break;
        case 91: goto L_8022BEF4; break;
        case 92: goto L_8022BEF4; break;
        case 93: goto L_8022BEF4; break;
        case 94: goto L_8022BEF4; break;
        case 95: goto L_8022BEF4; break;
        case 96: goto L_8022BEF4; break;
        case 97: goto L_8022BEF4; break;
        case 98: goto L_8022BEF4; break;
        case 99: goto L_8022BEF4; break;
        case 100: goto L_8022BEF4; break;
        case 101: goto L_8022BEF4; break;
        case 102: goto L_8022BEF4; break;
        case 103: goto L_8022BEF4; break;
        case 104: goto L_8022BEF4; break;
        case 105: goto L_8022BEF4; break;
        case 106: goto L_8022BEF4; break;
        case 107: goto L_8022BEF4; break;
        case 108: goto L_8022BEF4; break;
        case 109: goto L_8022BEF4; break;
        case 110: goto L_8022BEF4; break;
        case 111: goto L_8022BEF4; break;
        case 112: goto L_8022BEF4; break;
        case 113: goto L_8022BEF4; break;
        case 114: goto L_8022BEF4; break;
        case 115: goto L_8022BEF4; break;
        case 116: goto L_8022BEF4; break;
        case 117: goto L_8022BEF4; break;
        case 118: goto L_8022BEF4; break;
        case 119: goto L_8022BEF4; break;
        case 120: goto L_8022BEF4; break;
        case 121: goto L_8022BEF4; break;
        case 122: goto L_8022BEF4; break;
        case 123: goto L_8022BEF4; break;
        case 124: goto L_8022BEF4; break;
        case 125: goto L_8022BEF4; break;
        case 126: goto L_8022BEF4; break;
        case 127: goto L_8022BEF4; break;
        case 128: goto L_8022BEF4; break;
        case 129: goto L_8022BEF4; break;
        case 130: goto L_8022BEF4; break;
        case 131: goto L_8022BEF4; break;
        case 132: goto L_8022BEF4; break;
        case 133: goto L_8022BEF4; break;
        case 134: goto L_8022BEF4; break;
        case 135: goto L_8022BEF4; break;
        case 136: goto L_8022BEF4; break;
        case 137: goto L_8022BEF4; break;
        case 138: goto L_8022BEF4; break;
        case 139: goto L_8022BEF4; break;
        case 140: goto L_8022BEF4; break;
        case 141: goto L_8022BEF4; break;
        case 142: goto L_8022BEF4; break;
        case 143: goto L_8022BE70; break;
        case 144: goto L_8022BED4; break;
        case 145: goto L_8022BE80; break;
        case 146: goto L_8022BE8C; break;
        case 147: goto L_8022BEA8; break;
        case 148: goto L_8022BEC0; break;
        default: switch_error(__func__, 0x8022BB00, 0x8023C328);
    }
    // 0x8022BB04: nop

L_8022BB08:
    // 0x8022BB08: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BB0C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BB10: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BB14: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BB18: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    // 0x8022BB1C: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BB20: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BB24: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BB28: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BB2C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022BB30: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022BB34: j           L_8022BEF4
    // 0x8022BB38: sb          $s5, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r21;
        goto L_8022BEF4;
    // 0x8022BB38: sb          $s5, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r21;
L_8022BB3C:
    // 0x8022BB3C: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022BB40: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022BB44: bnel        $v1, $s6, L_8022BB58
    if (ctx->r3 != ctx->r22) {
        // 0x8022BB48: sb          $v1, 0xAC($s2)
        MEM_B(0XAC, ctx->r18) = ctx->r3;
            goto L_8022BB58;
    }
    goto skip_1;
    // 0x8022BB48: sb          $v1, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r3;
    skip_1:
    // 0x8022BB4C: lbu         $v0, 0xAC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022BB50: beql        $v0, $zero, L_8022BB58
    if (ctx->r2 == 0) {
        // 0x8022BB54: sb          $v1, 0xAC($s2)
        MEM_B(0XAC, ctx->r18) = ctx->r3;
            goto L_8022BB58;
    }
    goto skip_2;
    // 0x8022BB54: sb          $v1, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r3;
    skip_2:
L_8022BB58:
    // 0x8022BB58: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BB5C: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x8022BB60: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BB64: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x8022BB68: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BB6C: addiu       $v0, $v0, -0x6220
    ctx->r2 = ADD32(ctx->r2, -0X6220);
    // 0x8022BB70: sh          $s5, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r21;
    // 0x8022BB74: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022BB78: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BB7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BB80: sw          $v1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r3;
    // 0x8022BB84: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022BB88: j           L_8022BEF4
    // 0x8022BB8C: sh          $zero, 0x16($s1)
    MEM_H(0X16, ctx->r17) = 0;
        goto L_8022BEF4;
    // 0x8022BB8C: sh          $zero, 0x16($s1)
    MEM_H(0X16, ctx->r17) = 0;
L_8022BB90:
    // 0x8022BB90: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8022BB94: andi        $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 & 0XFFFF;
    // 0x8022BB98: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x8022BB9C: lhu         $a1, 0x14($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X14);
    // 0x8022BBA0: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x8022BBA4: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022BBA8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022BBAC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022BBB0: lhu         $v1, 0x18($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X18);
    // 0x8022BBB4: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x8022BBB8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022BBBC: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x8022BBC0: and         $a0, $a0, $s4
    ctx->r4 = ctx->r4 & ctx->r20;
    // 0x8022BBC4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022BBC8: or          $t0, $t0, $v1
    ctx->r8 = ctx->r8 | ctx->r3;
    // 0x8022BBCC: and         $t0, $t0, $s4
    ctx->r8 = ctx->r8 & ctx->r20;
    // 0x8022BBD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BBD4: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x8022BBD8: lhu         $v0, 0x18($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18);
    // 0x8022BBDC: and         $a2, $a2, $s4
    ctx->r6 = ctx->r6 & ctx->r20;
    // 0x8022BBE0: lhu         $v1, 0x16($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X16);
    // 0x8022BBE4: lhu         $a1, 0x1A($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X1A);
    // 0x8022BBE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BBEC: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x8022BBF0: and         $a3, $a3, $s4
    ctx->r7 = ctx->r7 & ctx->r20;
    // 0x8022BBF4: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8022BBF8: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x8022BBFC: lhu         $v1, 0x1A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1A);
    // 0x8022BC00: or          $a1, $t0, $a1
    ctx->r5 = ctx->r8 | ctx->r5;
    // 0x8022BC04: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x8022BC08: jal         0x8022CE54
    // 0x8022BC0C: or          $a3, $a3, $v1
    ctx->r7 = ctx->r7 | ctx->r3;
    func_8022CE54_ovl27(rdram, ctx);
        goto after_0;
    // 0x8022BC0C: or          $a3, $a3, $v1
    ctx->r7 = ctx->r7 | ctx->r3;
    after_0:
    // 0x8022BC10: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022BC14: beq         $v0, $zero, L_8022BC34
    if (ctx->r2 == 0) {
        // 0x8022BC18: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022BC34;
    }
    // 0x8022BC18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022BC1C: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022BC20: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x8022BC24: jal         0x8022BA88
    // 0x8022BC28: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    func_8022BA88_ovl27(rdram, ctx);
        goto after_1;
    // 0x8022BC28: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022BC2C: j           L_8022BF20
    // 0x8022BC30: nop

        goto L_8022BF20;
    // 0x8022BC30: nop

L_8022BC34:
    // 0x8022BC34: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BC38: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BC3C: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BC40: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BC44: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    // 0x8022BC48: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BC4C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BC50: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BC54: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BC58: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022BC5C: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022BC60: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022BC64: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BC68: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BC6C: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BC70: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BC74: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022BC78: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x8022BC7C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022BC80: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022BC84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BC88: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022BC8C: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x8022BC90: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BC94: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022BC98: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022BC9C: j           L_8022BD10
    // 0x8022BCA0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
        goto L_8022BD10;
    // 0x8022BCA0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
L_8022BCA4:
    // 0x8022BCA4: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BCA8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BCAC: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BCB0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BCB4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    // 0x8022BCB8: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BCBC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BCC0: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BCC4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BCC8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022BCCC: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022BCD0: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022BCD4: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BCD8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BCDC: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BCE0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BCE4: lhu         $v1, 0x14($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X14);
    // 0x8022BCE8: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x8022BCEC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022BCF0: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022BCF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BCF8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022BCFC: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x8022BD00: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BD04: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022BD08: lhu         $v1, 0x18($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X18);
    // 0x8022BD0C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
L_8022BD10:
    // 0x8022BD10: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022BD14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BD18: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x8022BD1C: j           L_8022BEF4
    // 0x8022BD20: sb          $s6, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r22;
        goto L_8022BEF4;
    // 0x8022BD20: sb          $s6, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r22;
L_8022BD24:
    // 0x8022BD24: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BD28: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BD2C: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BD30: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BD34: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    // 0x8022BD38: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BD3C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BD40: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BD44: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BD48: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022BD4C: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022BD50: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022BD54: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BD58: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BD5C: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BD60: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BD64: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022BD68: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022BD6C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022BD70: j           L_8022BEF4
    // 0x8022BD74: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
        goto L_8022BEF4;
    // 0x8022BD74: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022BD78:
    // 0x8022BD78: addiu       $a0, $zero, 0x1AD
    ctx->r4 = ADD32(0, 0X1AD);
    // 0x8022BD7C: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8022BD80: jal         0x8002A33C
    // 0x8022BD84: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022BD84: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022BD88: addiu       $a0, $zero, 0x1AE
    ctx->r4 = ADD32(0, 0X1AE);
    // 0x8022BD8C: jal         0x8002A33C
    // 0x8022BD90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022BD90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BD94: j           L_8022BE64
    // 0x8022BD98: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022BE64;
    // 0x8022BD98: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022BD9C:
    // 0x8022BD9C: j           L_8022BE64
    // 0x8022BDA0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8022BE64;
    // 0x8022BDA0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022BDA4:
    // 0x8022BDA4: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BDA8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BDAC: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BDB0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BDB4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    // 0x8022BDB8: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BDBC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BDC0: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BDC4: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BDC8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022BDCC: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022BDD0: j           L_8022BEF4
    // 0x8022BDD4: sh          $v1, 0x64($s2)
    MEM_H(0X64, ctx->r18) = ctx->r3;
        goto L_8022BEF4;
    // 0x8022BDD4: sh          $v1, 0x64($s2)
    MEM_H(0X64, ctx->r18) = ctx->r3;
L_8022BDD8:
    // 0x8022BDD8: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BDDC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BDE0: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BDE4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BDE8: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    // 0x8022BDEC: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BDF0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BDF4: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BDF8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BDFC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022BE00: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022BE04: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022BE08: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BE0C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BE10: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BE14: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BE18: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022BE1C: jal         0x800A3450
    // 0x8022BE20: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022BE20: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022BE24: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022BE28: jal         0x800A3450
    // 0x8022BE2C: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8022BE2C: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    after_5:
    // 0x8022BE30: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BE34: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022BE38: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x8022BE3C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BE40: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BE44: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BE48: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BE4C: addiu       $v0, $v0, -0x6220
    ctx->r2 = ADD32(ctx->r2, -0X6220);
    // 0x8022BE50: sh          $s5, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r21;
    // 0x8022BE54: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022BE58: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BE5C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022BE60: sw          $v1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r3;
L_8022BE64:
    // 0x8022BE64: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022BE68: j           L_8022BEF4
    // 0x8022BE6C: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
        goto L_8022BEF4;
    // 0x8022BE6C: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
L_8022BE70:
    // 0x8022BE70: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022BE74: lb          $v1, 0x0($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X0);
    // 0x8022BE78: j           L_8022BEF0
    // 0x8022BE7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_8022BEF0;
    // 0x8022BE7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8022BE80:
    // 0x8022BE80: lbu         $v0, 0x14($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X14);
    // 0x8022BE84: j           L_8022BE94
    // 0x8022BE88: lui         $v1, 0x480
    ctx->r3 = S32(0X480 << 16);
        goto L_8022BE94;
    // 0x8022BE88: lui         $v1, 0x480
    ctx->r3 = S32(0X480 << 16);
L_8022BE8C:
    // 0x8022BE8C: lbu         $v0, 0x14($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X14);
    // 0x8022BE90: lui         $v1, 0x580
    ctx->r3 = S32(0X580 << 16);
L_8022BE94:
    // 0x8022BE94: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x8022BE98: sw          $v1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r3;
    // 0x8022BE9C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022BEA0: j           L_8022BEF4
    // 0x8022BEA4: sb          $v0, 0x14($s1)
    MEM_B(0X14, ctx->r17) = ctx->r2;
        goto L_8022BEF4;
    // 0x8022BEA4: sb          $v0, 0x14($s1)
    MEM_B(0X14, ctx->r17) = ctx->r2;
L_8022BEA8:
    // 0x8022BEA8: lbu         $v1, 0x14($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X14);
    // 0x8022BEAC: lui         $v0, 0x480
    ctx->r2 = S32(0X480 << 16);
    // 0x8022BEB0: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x8022BEB4: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022BEB8: j           L_8022BEF4
    // 0x8022BEBC: sb          $v1, 0x14($s1)
    MEM_B(0X14, ctx->r17) = ctx->r3;
        goto L_8022BEF4;
    // 0x8022BEBC: sb          $v1, 0x14($s1)
    MEM_B(0X14, ctx->r17) = ctx->r3;
L_8022BEC0:
    // 0x8022BEC0: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022BEC4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022BEC8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BECC: j           L_8022BEF4
    // 0x8022BED0: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
        goto L_8022BEF4;
    // 0x8022BED0: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
L_8022BED4:
    // 0x8022BED4: jal         0x800A3450
    // 0x8022BED8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022BED8: nop

    after_6:
    // 0x8022BEDC: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x8022BEE0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022BEE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BEE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BEEC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_8022BEF0:
    // 0x8022BEF0: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
L_8022BEF4:
    // 0x8022BEF4: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022BEF8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BEFC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022BF00: beq         $v0, $zero, L_8022BAC8
    if (ctx->r2 == 0) {
        // 0x8022BF04: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022BAC8;
    }
    // 0x8022BF04: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022BF08: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022BF0C: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8022BF10: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022BF14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BF18: jal         0x8022BF48
    // 0x8022BF1C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    func_8022BF48_ovl27(rdram, ctx);
        goto after_7;
    // 0x8022BF1C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    after_7:
L_8022BF20:
    // 0x8022BF20: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022BF24: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022BF28: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022BF2C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022BF30: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022BF34: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022BF38: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BF3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BF40: jr          $ra
    // 0x8022BF44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022BF44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023656C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023656C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236570: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236574: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236578: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023657C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236580: beq         $v1, $zero, L_80236598
    if (ctx->r3 == 0) {
        // 0x80236584: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236598;
    }
    // 0x80236584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236588: beq         $v1, $v0, L_802365D4
    if (ctx->r3 == ctx->r2) {
        // 0x8023658C: nop
    
            goto L_802365D4;
    }
    // 0x8023658C: nop

    // 0x80236590: j           L_802365DC
    // 0x80236594: nop

        goto L_802365DC;
    // 0x80236594: nop

L_80236598:
    // 0x80236598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023659C: addiu       $v0, $zero, -0x1E
    ctx->r2 = ADD32(0, -0X1E);
    // 0x802365A0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802365A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802365A8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802365AC: addiu       $v0, $zero, 0x122
    ctx->r2 = ADD32(0, 0X122);
    // 0x802365B0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802365B4: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x802365B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802365BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802365C0: jal         0x80050294
    // 0x802365C4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802365C4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x802365C8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802365CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802365D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802365D4:
    // 0x802365D4: jal         0x8005044C
    // 0x802365D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802365D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802365DC:
    // 0x802365DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802365E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802365E4: jr          $ra
    // 0x802365E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802365E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235270_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235270: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80235274: bne         $v0, $zero, L_80235288
    if (ctx->r2 != 0) {
        // 0x80235278: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80235288;
    }
    // 0x80235278: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023527C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80235280: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80235284: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80235288:
    // 0x80235288: jr          $ra
    // 0x8023528C: nop

    TRACE_RETURN()
    return;
    // 0x8023528C: nop

;}
RECOMP_FUNC void func_8022C1F0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C1F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022C1F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C1F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C1FC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8022C200: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022C204: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022C208: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022C20C: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C210: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022C214: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022C218: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C21C: bne         $v1, $v0, L_8022C228
    if (ctx->r3 != ctx->r2) {
        // 0x8022C220: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022C228;
    }
    // 0x8022C220: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022C224: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
L_8022C228:
    // 0x8022C228: lhu         $v0, 0x364($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X364);
    // 0x8022C22C: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8022C230: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x8022C234: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C238: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x8022C23C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C240: jal         0x8004F820
    // 0x8022C244: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022C244: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x8022C248: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C24C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C250: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C254: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C258: jal         0x8003E934
    // 0x8022C25C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022C25C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022C260: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022C264: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C268: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C26C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C270: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022C274: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022C278: lh          $t0, 0x18($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X18);
    // 0x8022C27C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C280: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C284: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C288: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x8022C28C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022C290: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022C294: jal         0x8004DA90
    // 0x8022C298: sw          $t0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r8;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022C298: sw          $t0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r8;
    after_2:
    // 0x8022C29C: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    // 0x8022C2A0: lh          $v1, 0x364($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X364);
    // 0x8022C2A4: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022C2A8: bltz        $v0, L_8022C2C0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C2AC: slti        $v0, $v0, 0x29
        ctx->r2 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
            goto L_8022C2C0;
    }
    // 0x8022C2AC: slti        $v0, $v0, 0x29
    ctx->r2 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x8022C2B0: beq         $v0, $zero, L_8022C308
    if (ctx->r2 == 0) {
        // 0x8022C2B4: nop
    
            goto L_8022C308;
    }
    // 0x8022C2B4: nop

    // 0x8022C2B8: j           L_8022C2D0
    // 0x8022C2BC: nop

        goto L_8022C2D0;
    // 0x8022C2BC: nop

L_8022C2C0:
    // 0x8022C2C0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022C2C4: slti        $v0, $v0, 0x29
    ctx->r2 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x8022C2C8: beq         $v0, $zero, L_8022C308
    if (ctx->r2 == 0) {
        // 0x8022C2CC: nop
    
            goto L_8022C308;
    }
    // 0x8022C2CC: nop

L_8022C2D0:
    // 0x8022C2D0: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022C2D4: lh          $v1, 0x1E($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X1E);
    // 0x8022C2D8: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022C2DC: bltz        $v0, L_8022C2F4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C2E0: slti        $v0, $v0, 0x29
        ctx->r2 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
            goto L_8022C2F4;
    }
    // 0x8022C2E0: slti        $v0, $v0, 0x29
    ctx->r2 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x8022C2E4: bne         $v0, $zero, L_8022C304
    if (ctx->r2 != 0) {
        // 0x8022C2E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C304;
    }
    // 0x8022C2E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C2EC: j           L_8022C308
    // 0x8022C2F0: nop

        goto L_8022C308;
    // 0x8022C2F0: nop

L_8022C2F4:
    // 0x8022C2F4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022C2F8: slti        $v0, $v0, 0x29
    ctx->r2 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x8022C2FC: beq         $v0, $zero, L_8022C308
    if (ctx->r2 == 0) {
        // 0x8022C300: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C308;
    }
    // 0x8022C300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C304:
    // 0x8022C304: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C308:
    // 0x8022C308: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x8022C30C: bne         $v0, $zero, L_8022C398
    if (ctx->r2 != 0) {
        // 0x8022C310: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C398;
    }
    // 0x8022C310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C314: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8022C318: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x8022C31C: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x8022C320: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022C324: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x8022C328: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022C32C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C330: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C334: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022C338: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x8022C33C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C340: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x8022C344: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022C348: and         $a1, $a1, $v1
    ctx->r5 = ctx->r5 & ctx->r3;
    // 0x8022C34C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C350: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x8022C354: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022C358: and         $a2, $a2, $v1
    ctx->r6 = ctx->r6 & ctx->r3;
    // 0x8022C35C: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x8022C360: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C364: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x8022C368: and         $a3, $a3, $v1
    ctx->r7 = ctx->r7 & ctx->r3;
    // 0x8022C36C: or          $a0, $t0, $a0
    ctx->r4 = ctx->r8 | ctx->r4;
    // 0x8022C370: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022C374: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022C378: lhu         $t0, 0x1A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X1A);
    // 0x8022C37C: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8022C380: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x8022C384: jal         0x8022CE54
    // 0x8022C388: or          $a3, $a3, $t0
    ctx->r7 = ctx->r7 | ctx->r8;
    func_8022CE54_ovl27(rdram, ctx);
        goto after_3;
    // 0x8022C388: or          $a3, $a3, $t0
    ctx->r7 = ctx->r7 | ctx->r8;
    after_3:
    // 0x8022C38C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C390: beq         $v0, $zero, L_8022C39C
    if (ctx->r2 == 0) {
        // 0x8022C394: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C39C;
    }
    // 0x8022C394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C398:
    // 0x8022C398: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C39C:
    // 0x8022C39C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C3A0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022C3A4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022C3A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022C3AC: jr          $ra
    // 0x8022C3B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022C3B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80231BFC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231BFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231C00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231C04: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231C08: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231C0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231C10: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80231C14: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80231C18: beq         $v0, $zero, L_80231CFC
    if (ctx->r2 == 0) {
        // 0x80231C1C: andi        $v0, $v1, 0x3
        ctx->r2 = ctx->r3 & 0X3;
            goto L_80231CFC;
    }
    // 0x80231C1C: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x80231C20: bne         $v0, $zero, L_80231CE0
    if (ctx->r2 != 0) {
        // 0x80231C24: nop
    
            goto L_80231CE0;
    }
    // 0x80231C24: nop

    // 0x80231C28: jal         0x8004F144
    // 0x80231C2C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80231C2C: nop

    after_0:
    // 0x80231C30: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231C34: beq         $s0, $zero, L_80231CE0
    if (ctx->r16 == 0) {
        // 0x80231C38: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80231CE0;
    }
    // 0x80231C38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231C3C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231C40: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80231C44: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231C48: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80231C4C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80231C50: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80231C54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231C58: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80231C5C: jal         0x800A3450
    // 0x80231C60: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80231C60: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x80231C64: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x80231C68: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80231C6C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231C70: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80231C74: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80231C78: jal         0x800A3450
    // 0x80231C7C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80231C7C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_2:
    // 0x80231C80: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80231C84: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231C88: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231C8C: jal         0x800A3450
    // 0x80231C90: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80231C90: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x80231C94: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80231C98: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80231C9C: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x80231CA0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231CA4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231CA8: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80231CAC: lhu         $v1, 0x1E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1E);
    // 0x80231CB0: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80231CB4: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80231CB8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80231CBC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231CC0: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x80231CC4: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80231CC8: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80231CCC: jal         0x800A3450
    // 0x80231CD0: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80231CD0: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_4:
    // 0x80231CD4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80231CD8: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80231CDC: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80231CE0:
    // 0x80231CE0: jal         0x800A3450
    // 0x80231CE4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80231CE4: nop

    after_5:
    // 0x80231CE8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80231CEC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231CF0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231CF4: j           L_80231D04
    // 0x80231CF8: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_80231D04;
    // 0x80231CF8: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_80231CFC:
    // 0x80231CFC: jal         0x8004F5C4
    // 0x80231D00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_6;
    // 0x80231D00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80231D04:
    // 0x80231D04: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231D08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231D0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231D10: jr          $ra
    // 0x80231D14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231D14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233868_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023386C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233870: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233878: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023387C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80233880: beq         $v1, $v0, L_80233964
    if (ctx->r3 == ctx->r2) {
        // 0x80233884: slti        $v0, $v1, 0x3D
        ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
            goto L_80233964;
    }
    // 0x80233884: slti        $v0, $v1, 0x3D
    ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
    // 0x80233888: beq         $v0, $zero, L_80233970
    if (ctx->r2 == 0) {
        // 0x8023388C: nop
    
            goto L_80233970;
    }
    // 0x8023388C: nop

    // 0x80233890: beq         $v1, $zero, L_802338A8
    if (ctx->r3 == 0) {
        // 0x80233894: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802338A8;
    }
    // 0x80233894: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80233898: beq         $v1, $v0, L_802338D0
    if (ctx->r3 == ctx->r2) {
        // 0x8023389C: nop
    
            goto L_802338D0;
    }
    // 0x8023389C: nop

    // 0x802338A0: j           L_80233970
    // 0x802338A4: nop

        goto L_80233970;
    // 0x802338A4: nop

L_802338A8:
    // 0x802338A8: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x802338AC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802338B0: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802338B4: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x802338B8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x802338BC: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x802338C0: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802338C4: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x802338C8: j           L_80233970
    // 0x802338CC: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
        goto L_80233970;
    // 0x802338CC: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_802338D0:
    // 0x802338D0: jal         0x8004F144
    // 0x802338D4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802338D4: nop

    after_0:
    // 0x802338D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802338DC: beq         $v1, $zero, L_80233918
    if (ctx->r3 == 0) {
        // 0x802338E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233918;
    }
    // 0x802338E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802338E4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802338E8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802338EC: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802338F0: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x802338F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802338F8: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x802338FC: addiu       $v0, $zero, 0x1C2
    ctx->r2 = ADD32(0, 0X1C2);
    // 0x80233900: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80233904: addiu       $v0, $zero, -0x26E
    ctx->r2 = ADD32(0, -0X26E);
    // 0x80233908: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8023390C: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x80233910: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x80233914: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_80233918:
    // 0x80233918: jal         0x8004F144
    // 0x8023391C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x8023391C: nop

    after_1:
    // 0x80233920: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233924: beq         $v1, $zero, L_80233970
    if (ctx->r3 == 0) {
        // 0x80233928: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233970;
    }
    // 0x80233928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023392C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80233930: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233934: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80233938: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8023393C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233940: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80233944: addiu       $v0, $zero, 0x1C2
    ctx->r2 = ADD32(0, 0X1C2);
    // 0x80233948: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8023394C: addiu       $v0, $zero, -0x26E
    ctx->r2 = ADD32(0, -0X26E);
    // 0x80233950: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80233954: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x80233958: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x8023395C: j           L_80233970
    // 0x80233960: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
        goto L_80233970;
    // 0x80233960: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_80233964:
    // 0x80233964: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80233968: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023396C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80233970:
    // 0x80233970: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80233974: beq         $v0, $zero, L_802339A4
    if (ctx->r2 == 0) {
        // 0x80233978: nop
    
            goto L_802339A4;
    }
    // 0x80233978: nop

    // 0x8023397C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80233980: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80233984: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233988: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023398C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233990: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233994: lh          $v0, -0x5270($at)
    ctx->r2 = MEM_H(ctx->r1, -0X5270);
    // 0x80233998: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023399C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802339A0: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
L_802339A4:
    // 0x802339A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802339A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802339AC: jr          $ra
    // 0x802339B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802339B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D940_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D940: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022D944: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022D948: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D94C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022D950: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022D954: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022D958: lh          $s2, 0x44($s1)
    ctx->r18 = MEM_H(ctx->r17, 0X44);
    // 0x8022D95C: mult        $s2, $s2
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D960: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D964: lh          $s0, 0x48($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X48);
    // 0x8022D968: nop

    // 0x8022D96C: mult        $s0, $s0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D970: mflo        $a0
    ctx->r4 = lo;
    // 0x8022D974: nop

    // 0x8022D978: nop

    // 0x8022D97C: jal         0x80032424
    // 0x8022D980: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x8022D980: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x8022D984: lh          $a0, 0x46($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X46);
    // 0x8022D988: jal         0x80032664
    // 0x8022D98C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80032664_DA64(rdram, ctx);
        goto after_1;
    // 0x8022D98C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022D990: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022D994: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D998: jal         0x80032664
    // 0x8022D99C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032664_DA64(rdram, ctx);
        goto after_2;
    // 0x8022D99C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022D9A0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022D9A4: addiu       $s1, $s1, 0x8C
    ctx->r17 = ADD32(ctx->r17, 0X8C);
    // 0x8022D9A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D9AC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022D9B0: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022D9B4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022D9B8: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x8022D9BC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022D9C0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022D9C4: jal         0x80031600
    // 0x8022D9C8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x8022D9C8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022D9CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D9D0: jal         0x80031DA8
    // 0x8022D9D4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x8022D9D4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x8022D9D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022D9DC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022D9E0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D9E4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022D9E8: jr          $ra
    // 0x8022D9EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022D9EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80225B74_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225B78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225B84: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225B88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225B8C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80225B90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225B94: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x80225B98: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80225B9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225BA0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225BA4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80225BA8: addiu       $v1, $v1, -0x6EA0
    ctx->r3 = ADD32(ctx->r3, -0X6EA0);
    // 0x80225BAC: jal         0x80227FC4
    // 0x80225BB0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_80227FC4_ovl27(rdram, ctx);
        goto after_0;
    // 0x80225BB0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x80225BB4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80225BB8: beq         $v0, $zero, L_80225CC8
    if (ctx->r2 == 0) {
        // 0x80225BBC: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80225CC8;
    }
    // 0x80225BBC: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80225BC0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80225BC4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80225BC8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225BCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80225BD0: jal         0x8009A3B4
    // 0x80225BD4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80225BD4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x80225BD8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80225BDC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80225BE0: jal         0x8009A3B4
    // 0x80225BE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80225BE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80225BE8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80225BEC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80225BF0: jal         0x8009A3B4
    // 0x80225BF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80225BF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80225BF8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80225BFC: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80225C00: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80225C04: beq         $v0, $zero, L_80225C14
    if (ctx->r2 == 0) {
        // 0x80225C08: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80225C14;
    }
    // 0x80225C08: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80225C0C: jal         0x80227E2C
    // 0x80225C10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227E2C_ovl27(rdram, ctx);
        goto after_4;
    // 0x80225C10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80225C14:
    // 0x80225C14: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80225C18: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225C1C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225C20: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225C24: lw          $v0, -0x6938($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6938);
    // 0x80225C28: jalr        $v0
    // 0x80225C2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80225C2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80225C30: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80225C34: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80225C38: bne         $v0, $zero, L_80225C54
    if (ctx->r2 != 0) {
        // 0x80225C3C: nop
    
            goto L_80225C54;
    }
    // 0x80225C3C: nop

    // 0x80225C40: jal         0x8003E934
    // 0x80225C44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80225C44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80225C48: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80225C4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225C50: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80225C54:
    // 0x80225C54: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80225C58: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80225C5C: beq         $v0, $a1, L_80225C74
    if (ctx->r2 == ctx->r5) {
        // 0x80225C60: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225C74;
    }
    // 0x80225C60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225C64: jal         0x80050294
    // 0x80225C68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80225C68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80225C6C: j           L_80225C7C
    // 0x80225C70: nop

        goto L_80225C7C;
    // 0x80225C70: nop

L_80225C74:
    // 0x80225C74: jal         0x8005044C
    // 0x80225C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80225C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_80225C7C:
    // 0x80225C7C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225C80: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80225C84: beq         $v0, $zero, L_80225CA0
    if (ctx->r2 == 0) {
        // 0x80225C88: nop
    
            goto L_80225CA0;
    }
    // 0x80225C88: nop

    // 0x80225C8C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x80225C90: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x80225C94: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x80225C98: jal         0x8003B564
    // 0x80225C9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x80225C9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_80225CA0:
    // 0x80225CA0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80225CA4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80225CA8: beq         $v0, $zero, L_80225CB8
    if (ctx->r2 == 0) {
        // 0x80225CAC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225CB8;
    }
    // 0x80225CAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225CB0: j           L_80225CBC
    // 0x80225CB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80225CBC;
    // 0x80225CB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80225CB8:
    // 0x80225CB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80225CBC:
    // 0x80225CBC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80225CC0: jal         0x80047284
    // 0x80225CC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x80225CC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_80225CC8:
    // 0x80225CC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225CCC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225CD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225CD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225CD8: jr          $ra
    // 0x80225CDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225CDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227244_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227244: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227248: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022724C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227250: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227254: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227258: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022725C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227260: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80227264: jal         0x8004FA7C
    // 0x80227268: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227268: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022726C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80227270: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80227274: beq         $v0, $zero, L_80227308
    if (ctx->r2 == 0) {
        // 0x80227278: nop
    
            goto L_80227308;
    }
    // 0x80227278: nop

    // 0x8022727C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227280: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80227284: bne         $v0, $zero, L_80227308
    if (ctx->r2 != 0) {
        // 0x80227288: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227308;
    }
    // 0x80227288: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022728C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80227290: beq         $v1, $v0, L_802272A8
    if (ctx->r3 == ctx->r2) {
        // 0x80227294: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802272A8;
    }
    // 0x80227294: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227298: beq         $v1, $v0, L_802272D8
    if (ctx->r3 == ctx->r2) {
        // 0x8022729C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802272D8;
    }
    // 0x8022729C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802272A0: j           L_802272FC
    // 0x802272A4: nop

        goto L_802272FC;
    // 0x802272A4: nop

L_802272A8:
    // 0x802272A8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802272AC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802272B0: bne         $v0, $zero, L_802272FC
    if (ctx->r2 != 0) {
        // 0x802272B4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802272FC;
    }
    // 0x802272B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802272B8: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802272BC: bne         $v0, $zero, L_802272FC
    if (ctx->r2 != 0) {
        // 0x802272C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802272FC;
    }
    // 0x802272C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802272C4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802272C8: bne         $v1, $v0, L_802272FC
    if (ctx->r3 != ctx->r2) {
        // 0x802272CC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802272FC;
    }
    // 0x802272CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802272D0: j           L_802272FC
    // 0x802272D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802272FC;
    // 0x802272D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802272D8:
    // 0x802272D8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802272DC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802272E0: beq         $v0, $zero, L_802272F8
    if (ctx->r2 == 0) {
        // 0x802272E4: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_802272F8;
    }
    // 0x802272E4: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802272E8: bne         $v0, $zero, L_802272FC
    if (ctx->r2 != 0) {
        // 0x802272EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802272FC;
    }
    // 0x802272EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802272F0: j           L_802272FC
    // 0x802272F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802272FC;
    // 0x802272F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802272F8:
    // 0x802272F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802272FC:
    // 0x802272FC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227300: beq         $v0, $zero, L_8022732C
    if (ctx->r2 == 0) {
        // 0x80227304: nop
    
            goto L_8022732C;
    }
    // 0x80227304: nop

L_80227308:
    // 0x80227308: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022730C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227310: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227314: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227318: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022731C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227320: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80227324: j           L_8022733C
    // 0x80227328: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022733C;
    // 0x80227328: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022732C:
    // 0x8022732C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227330: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227334: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227338: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022733C:
    // 0x8022733C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227340: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227344: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227348: jr          $ra
    // 0x8022734C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022734C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802330B0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802330B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802330B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802330B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802330BC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802330C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802330C4: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x802330C8: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802330CC: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x802330D0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802330D4: beq         $v1, $v0, L_8023313C
    if (ctx->r3 == ctx->r2) {
        // 0x802330D8: slti        $v0, $v1, 0x3D
        ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
            goto L_8023313C;
    }
    // 0x802330D8: slti        $v0, $v1, 0x3D
    ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
    // 0x802330DC: beql        $v0, $zero, L_802330FC
    if (ctx->r2 == 0) {
        // 0x802330E0: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_802330FC;
    }
    goto skip_0;
    // 0x802330E0: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    skip_0:
    // 0x802330E4: beq         $v1, $zero, L_80233114
    if (ctx->r3 == 0) {
        // 0x802330E8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80233114;
    }
    // 0x802330E8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802330EC: beq         $v1, $v0, L_80233140
    if (ctx->r3 == ctx->r2) {
        // 0x802330F0: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80233140;
    }
    // 0x802330F0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802330F4: j           L_80233148
    // 0x802330F8: nop

        goto L_80233148;
    // 0x802330F8: nop

L_802330FC:
    // 0x802330FC: beq         $v1, $v0, L_80233134
    if (ctx->r3 == ctx->r2) {
        // 0x80233100: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_80233134;
    }
    // 0x80233100: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80233104: beq         $v1, $v0, L_80233140
    if (ctx->r3 == ctx->r2) {
        // 0x80233108: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80233140;
    }
    // 0x80233108: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8023310C: j           L_80233148
    // 0x80233110: nop

        goto L_80233148;
    // 0x80233110: nop

L_80233114:
    // 0x80233114: addiu       $v0, $zero, -0x352
    ctx->r2 = ADD32(0, -0X352);
    // 0x80233118: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023311C: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80233120: lui         $v0, 0xFCAE
    ctx->r2 = S32(0XFCAE << 16);
    // 0x80233124: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233128: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8023312C: j           L_80233140
    // 0x80233130: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80233140;
    // 0x80233130: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80233134:
    // 0x80233134: j           L_80233140
    // 0x80233138: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_80233140;
    // 0x80233138: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_8023313C:
    // 0x8023313C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_80233140:
    // 0x80233140: jal         0x802340E8
    // 0x80233144: nop

    func_802340E8_ovl27(rdram, ctx);
        goto after_0;
    // 0x80233144: nop

    after_0:
L_80233148:
    // 0x80233148: lhu         $v0, 0x438($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X438);
    // 0x8023314C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80233150: sh          $v0, 0x438($s0)
    MEM_H(0X438, ctx->r16) = ctx->r2;
    // 0x80233154: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233158: sw          $v0, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->r2;
    // 0x8023315C: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x80233160: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80233164: bne         $v0, $zero, L_8023317C
    if (ctx->r2 != 0) {
        // 0x80233168: nop
    
            goto L_8023317C;
    }
    // 0x80233168: nop

    // 0x8023316C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80233170: addiu       $a1, $a1, 0x4DE8
    ctx->r5 = ADD32(ctx->r5, 0X4DE8);
    // 0x80233174: jal         0x8002A33C
    // 0x80233178: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80233178: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_1:
L_8023317C:
    // 0x8023317C: jal         0x80234148
    // 0x80233180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80234148_ovl27(rdram, ctx);
        goto after_2;
    // 0x80233180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80233184: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233188: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023318C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233190: jr          $ra
    // 0x80233194: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233194: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802332A4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802332A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802332A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802332AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802332B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802332B4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802332B8: beq         $v1, $zero, L_802332D0
    if (ctx->r3 == 0) {
        // 0x802332BC: addiu       $v0, $zero, 0x3A
        ctx->r2 = ADD32(0, 0X3A);
            goto L_802332D0;
    }
    // 0x802332BC: addiu       $v0, $zero, 0x3A
    ctx->r2 = ADD32(0, 0X3A);
    // 0x802332C0: beq         $v1, $v0, L_80233304
    if (ctx->r3 == ctx->r2) {
        // 0x802332C4: nop
    
            goto L_80233304;
    }
    // 0x802332C4: nop

    // 0x802332C8: j           L_80233320
    // 0x802332CC: nop

        goto L_80233320;
    // 0x802332CC: nop

L_802332D0:
    // 0x802332D0: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x802332D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802332D8: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802332DC: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x802332E0: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x802332E4: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x802332E8: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802332EC: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x802332F0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x802332F4: jal         0x802340E8
    // 0x802332F8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    func_802340E8_ovl27(rdram, ctx);
        goto after_0;
    // 0x802332F8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    after_0:
    // 0x802332FC: j           L_80233320
    // 0x80233300: nop

        goto L_80233320;
    // 0x80233300: nop

L_80233304:
    // 0x80233304: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80233308: jal         0x8005FA7C
    // 0x8023330C: addiu       $a0, $a0, -0x5BE4
    ctx->r4 = ADD32(ctx->r4, -0X5BE4);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x8023330C: addiu       $a0, $a0, -0x5BE4
    ctx->r4 = ADD32(ctx->r4, -0X5BE4);
    after_1:
    // 0x80233310: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80233314: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80233318: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8023331C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80233320:
    // 0x80233320: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80233324: jal         0x80234148
    // 0x80233328: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80234148_ovl27(rdram, ctx);
        goto after_2;
    // 0x80233328: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_2:
    // 0x8023332C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233330: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233334: jr          $ra
    // 0x80233338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233F14_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233F14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233F18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233F1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233F24: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80233F28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233F2C: bne         $v1, $v0, L_80233F60
    if (ctx->r3 != ctx->r2) {
        // 0x80233F30: nop
    
            goto L_80233F60;
    }
    // 0x80233F30: nop

    // 0x80233F34: jal         0x802342A4
    // 0x80233F38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802342A4_ovl27(rdram, ctx);
        goto after_0;
    // 0x80233F38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80233F3C: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x80233F40: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80233F44: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80233F48: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x80233F4C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80233F50: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x80233F54: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80233F58: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x80233F5C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80233F60:
    // 0x80233F60: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80233F64: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80233F68: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233F6C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233F70: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233F74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233F78: lh          $v0, -0x5270($at)
    ctx->r2 = MEM_H(ctx->r1, -0X5270);
    // 0x80233F7C: sll         $v0, $v0, 17
    ctx->r2 = S32(ctx->r2 << 17);
    // 0x80233F80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80233F84: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
    // 0x80233F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233F8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233F90: jr          $ra
    // 0x80233F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802263D4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802263D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802263DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802263E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802263E4: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802263E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802263EC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802263F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802263F4: bne         $v0, $zero, L_80226460
    if (ctx->r2 != 0) {
        // 0x802263F8: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80226460;
    }
    // 0x802263F8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802263FC: jal         0x80227FC4
    // 0x80226400: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80227FC4_ovl27(rdram, ctx);
        goto after_0;
    // 0x80226400: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80226404: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226408: beq         $v0, $zero, L_8022645C
    if (ctx->r2 == 0) {
        // 0x8022640C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022645C;
    }
    // 0x8022640C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226410: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80226414: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x80226418: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8022641C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80226420: bne         $v1, $zero, L_80226430
    if (ctx->r3 != 0) {
        // 0x80226424: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80226430;
    }
    // 0x80226424: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226428: j           L_80226460
    // 0x8022642C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_80226460;
    // 0x8022642C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_80226430:
    // 0x80226430: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226434: jal         0x80227F38
    // 0x80226438: nop

    func_80227F38_ovl27(rdram, ctx);
        goto after_1;
    // 0x80226438: nop

    after_1:
    // 0x8022643C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226440: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226444: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226448: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022644C: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80226450: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226454: j           L_80226460
    // 0x80226458: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_80226460;
    // 0x80226458: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_8022645C:
    // 0x8022645C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226460:
    // 0x80226460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226464: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226468: jr          $ra
    // 0x8022646C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022646C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226664_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226664: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226668: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022666C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226670: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226674: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226678: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x8022667C: bne         $v0, $zero, L_802266BC
    if (ctx->r2 != 0) {
        // 0x80226680: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802266BC;
    }
    // 0x80226680: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80226684: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x80226688: bne         $v0, $zero, L_802266B0
    if (ctx->r2 != 0) {
        // 0x8022668C: nop
    
            goto L_802266B0;
    }
    // 0x8022668C: nop

    // 0x80226690: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x80226694: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80226698: bne         $v1, $v0, L_802266B0
    if (ctx->r3 != ctx->r2) {
        // 0x8022669C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802266B0;
    }
    // 0x8022669C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802266A0: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x802266A4: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x802266A8: j           L_802266EC
    // 0x802266AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_802266EC;
    // 0x802266AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_802266B0:
    // 0x802266B0: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x802266B4: beq         $v0, $zero, L_8022671C
    if (ctx->r2 == 0) {
        // 0x802266B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022671C;
    }
    // 0x802266B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802266BC:
    // 0x802266BC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x802266C0: bne         $v0, $zero, L_8022671C
    if (ctx->r2 != 0) {
        // 0x802266C4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022671C;
    }
    // 0x802266C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802266C8: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x802266CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802266D0: bne         $v1, $v0, L_8022671C
    if (ctx->r3 != ctx->r2) {
        // 0x802266D4: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_8022671C;
    }
    // 0x802266D4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x802266D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802266DC: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x802266E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802266E4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802266E8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_802266EC:
    // 0x802266EC: jal         0x8009A3B4
    // 0x802266F0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802266F0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x802266F4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802266F8: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802266FC: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80226700: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226704: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226708: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022670C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80226710: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80226714: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80226718: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022671C:
    // 0x8022671C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226720: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226724: jal         0x8004DA90
    // 0x80226728: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80226728: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022672C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80226730: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226734: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80226738: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022673C: bne         $v0, $zero, L_8022676C
    if (ctx->r2 != 0) {
        // 0x80226740: nop
    
            goto L_8022676C;
    }
    // 0x80226740: nop

    // 0x80226744: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226748: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022674C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226750: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80226754: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80226758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022675C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226760: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80226764: j           L_802267BC
    // 0x80226768: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802267BC;
    // 0x80226768: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022676C:
    // 0x8022676C: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80226770: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226774: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80226778: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022677C: bne         $v0, $zero, L_8022678C
    if (ctx->r2 != 0) {
        // 0x80226780: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022678C;
    }
    // 0x80226780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226784: j           L_802267BC
    // 0x80226788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802267BC;
    // 0x80226788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022678C:
    // 0x8022678C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80226790: jal         0x80227FC4
    // 0x80226794: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80227FC4_ovl27(rdram, ctx);
        goto after_2;
    // 0x80226794: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x80226798: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022679C: beq         $v0, $zero, L_802267C0
    if (ctx->r2 == 0) {
        // 0x802267A0: nop
    
            goto L_802267C0;
    }
    // 0x802267A0: nop

    // 0x802267A4: jal         0x80227F28
    // 0x802267A8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80227F28_ovl27(rdram, ctx);
        goto after_3;
    // 0x802267A8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x802267AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802267B0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802267B4: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x802267B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802267BC:
    // 0x802267BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802267C0:
    // 0x802267C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802267C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802267C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802267CC: jr          $ra
    // 0x802267D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802267D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238024_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238024: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238028: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023802C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238030: jal         0x80051770
    // 0x80238034: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_0;
    // 0x80238034: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80238038: jal         0x80051248
    // 0x8023803C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_1;
    // 0x8023803C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80238040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238044: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238048: jr          $ra
    // 0x8023804C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023804C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229788_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022978C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229790: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229798: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022979C: bne         $v0, $zero, L_80229828
    if (ctx->r2 != 0) {
        // 0x802297A0: addiu       $a1, $s0, 0x3
        ctx->r5 = ADD32(ctx->r16, 0X3);
            goto L_80229828;
    }
    // 0x802297A0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x802297A4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802297A8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802297AC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802297B0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802297B4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802297B8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802297BC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802297C0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802297C4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802297C8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802297CC: jal         0x8004D5D4
    // 0x802297D0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802297D0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802297D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802297D8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802297DC: jal         0x80050294
    // 0x802297E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802297E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802297E4: jal         0x800504EC
    // 0x802297E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_2;
    // 0x802297E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802297EC: jal         0x8005129C
    // 0x802297F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_3;
    // 0x802297F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802297F4: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802297F8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802297FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229800: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229804: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80229808: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022980C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80229810: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80229814: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229818: bne         $v1, $v0, L_80229828
    if (ctx->r3 != ctx->r2) {
        // 0x8022981C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80229828;
    }
    // 0x8022981C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229820: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229824: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80229828:
    // 0x80229828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022982C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229830: jr          $ra
    // 0x80229834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023517C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023517C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80235180: bne         $v0, $zero, L_802351B0
    if (ctx->r2 != 0) {
        // 0x80235184: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_802351B0;
    }
    // 0x80235184: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80235188: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x8023518C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80235190: sb          $v1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r3;
    // 0x80235194: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80235198: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023519C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802351A0: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x802351A4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802351A8: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802351AC: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_802351B0:
    // 0x802351B0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802351B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802351B8: bne         $v1, $v0, L_802351D0
    if (ctx->r3 != ctx->r2) {
        // 0x802351BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802351D0;
    }
    // 0x802351BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802351C0: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x802351C4: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x802351C8: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x802351CC: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
L_802351D0:
    // 0x802351D0: jr          $ra
    // 0x802351D4: nop

    TRACE_RETURN()
    return;
    // 0x802351D4: nop

;}
RECOMP_FUNC void func_80236A8C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236A8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236A90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236A94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236A98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236A9C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236AA0: bne         $v0, $zero, L_80236AC4
    if (ctx->r2 != 0) {
        // 0x80236AA4: addiu       $v0, $zero, -0x600
        ctx->r2 = ADD32(0, -0X600);
            goto L_80236AC4;
    }
    // 0x80236AA4: addiu       $v0, $zero, -0x600
    ctx->r2 = ADD32(0, -0X600);
    // 0x80236AA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236AAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236AB0: jal         0x80050294
    // 0x80236AB4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80236AB4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80236AB8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236ABC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236AC0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80236AC4:
    // 0x80236AC4: jal         0x80051770
    // 0x80236AC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_1;
    // 0x80236AC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80236ACC: jal         0x80051248
    // 0x80236AD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_2;
    // 0x80236AD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80236AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236AD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236ADC: jr          $ra
    // 0x80236AE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236AE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225628_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022562C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225630: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225638: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022563C: bne         $v0, $zero, L_80225658
    if (ctx->r2 != 0) {
        // 0x80225640: nop
    
            goto L_80225658;
    }
    // 0x80225640: nop

    // 0x80225644: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225648: jal         0x800607C4
    // 0x8022564C: addiu       $a0, $a0, -0x6F28
    ctx->r4 = ADD32(ctx->r4, -0X6F28);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022564C: addiu       $a0, $a0, -0x6F28
    ctx->r4 = ADD32(ctx->r4, -0X6F28);
    after_0:
    // 0x80225650: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225654: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225658:
    // 0x80225658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022565C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225660: jr          $ra
    // 0x80225664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F828_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F828: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022F82C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022F830: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F834: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022F838: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022F83C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F840: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022F844: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022F848: sltiu       $v0, $v1, 0x16
    ctx->r2 = ctx->r3 < 0X16 ? 1 : 0;
    // 0x8022F84C: beq         $v0, $zero, L_8022FAC8
    if (ctx->r2 == 0) {
        // 0x8022F850: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022FAC8;
    }
    // 0x8022F850: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022F854: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F858: addu        $at, $at, $v0
    gpr jr_addend_8022F860 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F85C: lw          $v0, -0x3A10($at)
    ctx->r2 = ADD32(ctx->r1, -0X3A10);
    // 0x8022F860: jr          $v0
    // 0x8022F864: nop

    switch (jr_addend_8022F860 >> 2) {
        case 0: goto L_8022F868; break;
        case 1: goto L_8022F878; break;
        case 2: goto L_8022F8A0; break;
        case 3: goto L_8022F8C8; break;
        case 4: goto L_8022F910; break;
        case 5: goto L_8022F920; break;
        case 6: goto L_8022F938; break;
        case 7: goto L_8022F960; break;
        case 8: goto L_8022F994; break;
        case 9: goto L_8022FA00; break;
        case 10: goto L_8022FA14; break;
        case 11: goto L_8022FA4C; break;
        case 12: goto L_8022FAC8; break;
        case 13: goto L_8022FAC8; break;
        case 14: goto L_8022FAC8; break;
        case 15: goto L_8022FAC8; break;
        case 16: goto L_8022FAC8; break;
        case 17: goto L_8022FAC8; break;
        case 18: goto L_8022FAC8; break;
        case 19: goto L_8022FAC8; break;
        case 20: goto L_8022FA78; break;
        case 21: goto L_8022FAA0; break;
        default: switch_error(__func__, 0x8022F860, 0x8023C5F0);
    }
    // 0x8022F864: nop

L_8022F868:
    // 0x8022F868: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F86C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022F870: j           L_8022FA90
    // 0x8022F874: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_8022FA90;
    // 0x8022F874: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_8022F878:
    // 0x8022F878: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022F87C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F880: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022F884: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022F888: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
    // 0x8022F88C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F890: jal         0x80061510
    // 0x8022F894: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x8022F894: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
    // 0x8022F898: j           L_8022FA90
    // 0x8022F89C: nop

        goto L_8022FA90;
    // 0x8022F89C: nop

L_8022F8A0:
    // 0x8022F8A0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022F8A4: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8022F8A8: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022F8AC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022F8B0: bne         $v0, $zero, L_8022FAC8
    if (ctx->r2 != 0) {
        // 0x8022F8B4: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8022FAC8;
    }
    // 0x8022F8B4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8022F8B8: beq         $v0, $zero, L_8022FA90
    if (ctx->r2 == 0) {
        // 0x8022F8BC: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022FA90;
    }
    // 0x8022F8BC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022F8C0: j           L_8022FA70
    // 0x8022F8C4: nop

        goto L_8022FA70;
    // 0x8022F8C4: nop

L_8022F8C8:
    // 0x8022F8C8: jal         0x80070E80
    // 0x8022F8CC: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    func_80070E80_4C280(rdram, ctx);
        goto after_1;
    // 0x8022F8CC: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_1:
    // 0x8022F8D0: bgez        $v0, L_8022F8F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F8D4: addiu       $a0, $zero, -0xA
        ctx->r4 = ADD32(0, -0XA);
            goto L_8022F8F4;
    }
    // 0x8022F8D4: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    // 0x8022F8D8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022F8DC: lw          $a1, 0x2B28($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B28);
    // 0x8022F8E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F8E4: jal         0x80061510
    // 0x8022F8E8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_2;
    // 0x8022F8E8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_2:
    // 0x8022F8EC: j           L_8022FA70
    // 0x8022F8F0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
        goto L_8022FA70;
    // 0x8022F8F0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_8022F8F4:
    // 0x8022F8F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F8F8: jal         0x80070E98
    // 0x8022F8FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80070E98_4C298(rdram, ctx);
        goto after_3;
    // 0x8022F8FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022F900: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F904: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8022F908: j           L_8022FA94
    // 0x8022F90C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_8022FA94;
    // 0x8022F90C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_8022F910:
    // 0x8022F910: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022F914: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022F918: j           L_8022FA90
    // 0x8022F91C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_8022FA90;
    // 0x8022F91C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_8022F920:
    // 0x8022F920: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x8022F924: bgez        $v0, L_8022FAC8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F928: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022FAC8;
    }
    // 0x8022F928: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8022F92C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F930: j           L_8022FA94
    // 0x8022F934: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_8022FA94;
    // 0x8022F934: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_8022F938:
    // 0x8022F938: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022F93C: bne         $v0, $zero, L_8022F96C
    if (ctx->r2 != 0) {
        // 0x8022F940: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022F96C;
    }
    // 0x8022F940: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F944: addiu       $a0, $zero, 0x13E
    ctx->r4 = ADD32(0, 0X13E);
    // 0x8022F948: jal         0x8002A33C
    // 0x8022F94C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022F94C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_4:
    // 0x8022F950: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F954: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8022F958: j           L_8022FA94
    // 0x8022F95C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_8022FA94;
    // 0x8022F95C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_8022F960:
    // 0x8022F960: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022F964: beq         $v0, $zero, L_8022F978
    if (ctx->r2 == 0) {
        // 0x8022F968: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022F978;
    }
    // 0x8022F968: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_8022F96C:
    // 0x8022F96C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022F970: j           L_8022FAC8
    // 0x8022F974: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_8022FAC8;
    // 0x8022F974: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022F978:
    // 0x8022F978: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022F97C: lw          $a1, 0x2B20($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B20);
    // 0x8022F980: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F984: jal         0x80061510
    // 0x8022F988: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x8022F988: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_5:
    // 0x8022F98C: j           L_8022FA90
    // 0x8022F990: nop

        goto L_8022FA90;
    // 0x8022F990: nop

L_8022F994:
    // 0x8022F994: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F998: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022F99C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022F9A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022F9A4: bne         $v0, $zero, L_8022FAC8
    if (ctx->r2 != 0) {
        // 0x8022F9A8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022FAC8;
    }
    // 0x8022F9A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F9AC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022F9B0: lw          $a1, 0x2B24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B24);
    // 0x8022F9B4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8022F9B8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022F9BC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022F9C0: jal         0x80061510
    // 0x8022F9C4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    func_80061510_3C910(rdram, ctx);
        goto after_6;
    // 0x8022F9C4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    after_6:
    // 0x8022F9C8: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
    // 0x8022F9CC: jal         0x8002A33C
    // 0x8022F9D0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022F9D0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_7:
    // 0x8022F9D4: lh          $a0, 0xB0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XB0);
    // 0x8022F9D8: jal         0x80070F38
    // 0x8022F9DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80070F38_4C338(rdram, ctx);
        goto after_8;
    // 0x8022F9DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_8:
    // 0x8022F9E0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F9E4: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F9E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022F9EC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022F9F0: jal         0x80230174
    // 0x8022F9F4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    func_80230174_ovl27(rdram, ctx);
        goto after_9;
    // 0x8022F9F4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_9:
    // 0x8022F9F8: j           L_8022FA90
    // 0x8022F9FC: nop

        goto L_8022FA90;
    // 0x8022F9FC: nop

L_8022FA00:
    // 0x8022FA00: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x8022FA04: bltz        $v0, L_8022FA90
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022FA08: nop
    
            goto L_8022FA90;
    }
    // 0x8022FA08: nop

    // 0x8022FA0C: j           L_8022FAC8
    // 0x8022FA10: nop

        goto L_8022FAC8;
    // 0x8022FA10: nop

L_8022FA14:
    // 0x8022FA14: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FA18: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022FA1C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022FA20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022FA24: bne         $v0, $zero, L_8022FAC8
    if (ctx->r2 != 0) {
        // 0x8022FA28: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022FAC8;
    }
    // 0x8022FA28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022FA2C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022FA30: lw          $a1, 0x2B5C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B5C);
    // 0x8022FA34: jal         0x80061510
    // 0x8022FA38: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_10;
    // 0x8022FA38: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_10:
    // 0x8022FA3C: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022FA40: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022FA44: j           L_8022FA90
    // 0x8022FA48: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_8022FA90;
    // 0x8022FA48: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_8022FA4C:
    // 0x8022FA4C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FA50: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022FA54: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022FA58: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022FA5C: bne         $v0, $zero, L_8022FAC8
    if (ctx->r2 != 0) {
        // 0x8022FA60: nop
    
            goto L_8022FAC8;
    }
    // 0x8022FA60: nop

    // 0x8022FA64: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x8022FA68: bgez        $v0, L_8022FAC8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022FA6C: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022FAC8;
    }
    // 0x8022FA6C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_8022FA70:
    // 0x8022FA70: j           L_8022FAC8
    // 0x8022FA74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022FAC8;
    // 0x8022FA74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022FA78:
    // 0x8022FA78: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FA7C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022FA80: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022FA84: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022FA88: bne         $v0, $zero, L_8022FAC8
    if (ctx->r2 != 0) {
        // 0x8022FA8C: nop
    
            goto L_8022FAC8;
    }
    // 0x8022FA8C: nop

L_8022FA90:
    // 0x8022FA90: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_8022FA94:
    // 0x8022FA94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FA98: j           L_8022FAC8
    // 0x8022FA9C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022FAC8;
    // 0x8022FA9C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022FAA0:
    // 0x8022FAA0: jal         0x8003516C
    // 0x8022FAA4: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_11;
    // 0x8022FAA4: nop

    after_11:
    // 0x8022FAA8: bne         $v0, $zero, L_8022FAC8
    if (ctx->r2 != 0) {
        // 0x8022FAAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FAC8;
    }
    // 0x8022FAAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FAB0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022FAB4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022FAB8: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022FABC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022FAC0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FAC4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022FAC8:
    // 0x8022FAC8: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022FACC: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x8022FAD0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022FAD4: beq         $v0, $zero, L_8022FAF8
    if (ctx->r2 == 0) {
        // 0x8022FAD8: nop
    
            goto L_8022FAF8;
    }
    // 0x8022FAD8: nop

    // 0x8022FADC: jal         0x80061724
    // 0x8022FAE0: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_12;
    // 0x8022FAE0: nop

    after_12:
    // 0x8022FAE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FAE8: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022FAEC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022FAF0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FAF4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022FAF8:
    // 0x8022FAF8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022FAFC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022FB00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022FB04: jr          $ra
    // 0x8022FB08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022FB08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80237D14_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237D14: jr          $ra
    // 0x80237D18: nop

    TRACE_RETURN()
    return;
    // 0x80237D18: nop

;}
RECOMP_FUNC void func_8022B7F0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B7F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B7F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B7F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B7FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B800: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B804: bne         $v0, $zero, L_8022B828
    if (ctx->r2 != 0) {
        // 0x8022B808: nop
    
            goto L_8022B828;
    }
    // 0x8022B808: nop

    // 0x8022B80C: jal         0x800504EC
    // 0x8022B810: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    func_800504EC_2B8EC(rdram, ctx);
        goto after_0;
    // 0x8022B810: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    after_0:
    // 0x8022B814: jal         0x8005129C
    // 0x8022B818: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_1;
    // 0x8022B818: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B81C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B820: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B824: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
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
RECOMP_FUNC void func_802380B0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802380B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802380B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802380B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802380BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802380C0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802380C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802380C8: beq         $v1, $v0, L_8023811C
    if (ctx->r3 == ctx->r2) {
        // 0x802380CC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023811C;
    }
    // 0x802380CC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802380D0: beql        $v0, $zero, L_802380E8
    if (ctx->r2 == 0) {
        // 0x802380D4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802380E8;
    }
    goto skip_0;
    // 0x802380D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802380D8: beq         $v1, $zero, L_80238100
    if (ctx->r3 == 0) {
        // 0x802380DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238100;
    }
    // 0x802380DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802380E0: j           L_80238150
    // 0x802380E4: nop

        goto L_80238150;
    // 0x802380E4: nop

L_802380E8:
    // 0x802380E8: beq         $v1, $v0, L_80238128
    if (ctx->r3 == ctx->r2) {
        // 0x802380EC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80238128;
    }
    // 0x802380EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802380F0: beq         $v1, $v0, L_80238148
    if (ctx->r3 == ctx->r2) {
        // 0x802380F4: nop
    
            goto L_80238148;
    }
    // 0x802380F4: nop

    // 0x802380F8: j           L_80238150
    // 0x802380FC: nop

        goto L_80238150;
    // 0x802380FC: nop

L_80238100:
    // 0x80238100: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x80238104: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238108: addiu       $v0, $zero, -0xAF0
    ctx->r2 = ADD32(0, -0XAF0);
    // 0x8023810C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80238110: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x80238114: j           L_80238134
    // 0x80238118: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80238134;
    // 0x80238118: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8023811C:
    // 0x8023811C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238120: j           L_80238130
    // 0x80238124: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
        goto L_80238130;
    // 0x80238124: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
L_80238128:
    // 0x80238128: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023812C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
L_80238130:
    // 0x80238130: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80238134:
    // 0x80238134: jal         0x80050294
    // 0x80238138: nop

    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80238138: nop

    after_0:
    // 0x8023813C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238140: j           L_80238150
    // 0x80238144: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80238150;
    // 0x80238144: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80238148:
    // 0x80238148: jal         0x8005044C
    // 0x8023814C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023814C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80238150:
    // 0x80238150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238154: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238158: jr          $ra
    // 0x8023815C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023815C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225890_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225894: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225898: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022589C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802258A0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802258A4: bne         $v0, $zero, L_8022591C
    if (ctx->r2 != 0) {
        // 0x802258A8: nop
    
            goto L_8022591C;
    }
    // 0x802258A8: nop

    // 0x802258AC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802258B0: jal         0x800607C4
    // 0x802258B4: addiu       $a0, $a0, -0x6F48
    ctx->r4 = ADD32(ctx->r4, -0X6F48);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802258B4: addiu       $a0, $a0, -0x6F48
    ctx->r4 = ADD32(ctx->r4, -0X6F48);
    after_0:
    // 0x802258B8: jal         0x8006033C
    // 0x802258BC: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802258BC: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    after_1:
    // 0x802258C0: beq         $v0, $zero, L_802258F8
    if (ctx->r2 == 0) {
        // 0x802258C4: nop
    
            goto L_802258F8;
    }
    // 0x802258C4: nop

    // 0x802258C8: jal         0x80060AAC
    // 0x802258CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_2;
    // 0x802258CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x802258D0: jal         0x80060AAC
    // 0x802258D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_3;
    // 0x802258D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x802258D8: jal         0x80060AAC
    // 0x802258DC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_4;
    // 0x802258DC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_4:
    // 0x802258E0: jal         0x80060AAC
    // 0x802258E4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_5;
    // 0x802258E4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_5:
    // 0x802258E8: jal         0x80060AAC
    // 0x802258EC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_6;
    // 0x802258EC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_6:
    // 0x802258F0: j           L_8022590C
    // 0x802258F4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
        goto L_8022590C;
    // 0x802258F4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
L_802258F8:
    // 0x802258F8: jal         0x80060AAC
    // 0x802258FC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_7;
    // 0x802258FC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_7:
    // 0x80225900: jal         0x80060AAC
    // 0x80225904: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_8;
    // 0x80225904: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_8:
    // 0x80225908: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_8022590C:
    // 0x8022590C: jal         0x80060AAC
    // 0x80225910: nop

    func_80060AAC_3BEAC(rdram, ctx);
        goto after_9;
    // 0x80225910: nop

    after_9:
    // 0x80225914: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225918: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022591C:
    // 0x8022591C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225920: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225924: jr          $ra
    // 0x80225928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
