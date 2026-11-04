#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802262E8_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802262EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802262F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802262F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802262F8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802262FC: bne         $v0, $zero, L_80226314
    if (ctx->r2 != 0) {
        // 0x80226300: nop
    
            goto L_80226314;
    }
    // 0x80226300: nop

    // 0x80226304: jal         0x80226AEC
    // 0x80226308: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226308: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_0:
    // 0x8022630C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226310: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226314:
    // 0x80226314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226318: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022631C: jr          $ra
    // 0x80226320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B260_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B260: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B264: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B268: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B26C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B270: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B274: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B278: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B27C: beq         $v1, $zero, L_8022B298
    if (ctx->r3 == 0) {
        // 0x8022B280: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022B298;
    }
    // 0x8022B280: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022B284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B288: beq         $v1, $v0, L_8022B318
    if (ctx->r3 == ctx->r2) {
        // 0x8022B28C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B318;
    }
    // 0x8022B28C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B290: j           L_8022B458
    // 0x8022B294: nop

        goto L_8022B458;
    // 0x8022B294: nop

L_8022B298:
    // 0x8022B298: lhu         $v1, 0x384($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X384);
    // 0x8022B29C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B2A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B2A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B2A8: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
    // 0x8022B2AC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B2B0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022B2B4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022B2B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B2BC: lhu         $v0, 0x7AC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7AC);
    // 0x8022B2C0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022B2C4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022B2C8: lhu         $a0, 0x7A8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7A8);
    // 0x8022B2CC: lhu         $v1, 0x384($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X384);
    // 0x8022B2D0: sh          $zero, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = 0;
    // 0x8022B2D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B2D8: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8022B2DC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022B2E0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022B2E4: sh          $a0, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = ctx->r4;
    // 0x8022B2E8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022B2EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B2F0: lhu         $v0, 0x7AE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7AE);
    // 0x8022B2F4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B2F8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022B2FC: lhu         $v1, 0x7AA($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X7AA);
    // 0x8022B300: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x8022B304: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B308: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8022B30C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B310: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
    // 0x8022B314: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022B318:
    // 0x8022B318: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B31C: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022B320: jal         0x8004F820
    // 0x8022B324: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B324: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_0:
    // 0x8022B328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B32C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022B330: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B334: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B338: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022B33C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B340: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B344: jal         0x8004DA90
    // 0x8022B348: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022B348: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022B34C: jal         0x80040F30
    // 0x8022B350: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022B350: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022B354: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B358: jal         0x8003E934
    // 0x8022B35C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022B35C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_3:
    // 0x8022B360: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B364: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022B368: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022B36C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B370: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022B374: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022B378: bltz        $v0, L_8022B390
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B37C: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022B390;
    }
    // 0x8022B37C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022B380: beq         $v0, $zero, L_8022B3A0
    if (ctx->r2 == 0) {
        // 0x8022B384: andi        $v0, $s2, 0xF00
        ctx->r2 = ctx->r18 & 0XF00;
            goto L_8022B3A0;
    }
    // 0x8022B384: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
    // 0x8022B388: j           L_8022B3C4
    // 0x8022B38C: nop

        goto L_8022B3C4;
    // 0x8022B38C: nop

L_8022B390:
    // 0x8022B390: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022B394: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022B398: bne         $v0, $zero, L_8022B3C4
    if (ctx->r2 != 0) {
        // 0x8022B39C: andi        $v0, $s2, 0xF00
        ctx->r2 = ctx->r18 & 0XF00;
            goto L_8022B3C4;
    }
    // 0x8022B39C: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
L_8022B3A0:
    // 0x8022B3A0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B3A4: lhu         $v1, 0x2E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2E);
    // 0x8022B3A8: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x8022B3AC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022B3B0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B3B4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022B3B8: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022B3BC: j           L_8022B458
    // 0x8022B3C0: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
        goto L_8022B458;
    // 0x8022B3C0: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_8022B3C4:
    // 0x8022B3C4: beq         $v0, $zero, L_8022B3DC
    if (ctx->r2 == 0) {
        // 0x8022B3C8: nop
    
            goto L_8022B3DC;
    }
    // 0x8022B3C8: nop

    // 0x8022B3CC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B3D0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022B3D4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B3D8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022B3DC:
    // 0x8022B3DC: lhu         $t0, 0x3C($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022B3E0: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022B3E4: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x8022B3E8: sll         $a3, $t0, 3
    ctx->r7 = S32(ctx->r8 << 3);
    // 0x8022B3EC: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022B3F0: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x8022B3F4: lh          $a1, 0x7A8($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X7A8);
    // 0x8022B3F8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022B3FC: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x8022B400: lh          $v1, 0x7AA($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X7AA);
    // 0x8022B404: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022B408: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x8022B40C: lh          $a0, 0x7AC($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7AC);
    // 0x8022B410: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022B414: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8022B418: beq         $v0, $zero, L_8022B458
    if (ctx->r2 == 0) {
        // 0x8022B41C: subu        $a2, $a2, $v1
        ctx->r6 = SUB32(ctx->r6, ctx->r3);
            goto L_8022B458;
    }
    // 0x8022B41C: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8022B420: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022B424: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8022B428: lh          $v0, 0x7AE($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7AE);
    // 0x8022B42C: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x8022B430: beq         $v0, $zero, L_8022B458
    if (ctx->r2 == 0) {
        // 0x8022B434: addiu       $v0, $t0, 0x1
        ctx->r2 = ADD32(ctx->r8, 0X1);
            goto L_8022B458;
    }
    // 0x8022B434: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
    // 0x8022B438: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    // 0x8022B43C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022B440: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8022B444: beql        $v0, $zero, L_8022B44C
    if (ctx->r2 == 0) {
        // 0x8022B448: sh          $zero, 0x3C($s1)
        MEM_H(0X3C, ctx->r17) = 0;
            goto L_8022B44C;
    }
    goto skip_0;
    // 0x8022B448: sh          $zero, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = 0;
    skip_0:
L_8022B44C:
    // 0x8022B44C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B450: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B454: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022B458:
    // 0x8022B458: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B45C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022B460: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B464: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B468: jr          $ra
    // 0x8022B46C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B46C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228F7C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228F80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228F84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228F88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228F8C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228F90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228F94: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80228F98: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80228F9C: jal         0x8004FA7C
    // 0x80228FA0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80228FA0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x80228FA4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228FA8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80228FAC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80228FB0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80228FB4: beq         $v0, $zero, L_80228FCC
    if (ctx->r2 == 0) {
        // 0x80228FB8: nop
    
            goto L_80228FCC;
    }
    // 0x80228FB8: nop

    // 0x80228FBC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228FC0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80228FC4: beq         $v0, $zero, L_80229018
    if (ctx->r2 == 0) {
        // 0x80228FC8: nop
    
            goto L_80229018;
    }
    // 0x80228FC8: nop

L_80228FCC:
    // 0x80228FCC: jal         0x8003516C
    // 0x80228FD0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80228FD0: nop

    after_1:
    // 0x80228FD4: bne         $v0, $zero, L_80229018
    if (ctx->r2 != 0) {
        // 0x80228FD8: nop
    
            goto L_80229018;
    }
    // 0x80228FD8: nop

    // 0x80228FDC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80228FE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FE4: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80228FE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FEC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80228FF0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228FF4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80228FF8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80228FFC: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80229000: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x80229004: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229008: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022900C: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x80229010: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80229014: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80229018:
    // 0x80229018: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022901C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80229020: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229024: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229028: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022902C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229030: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229034: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229038: jr          $ra
    // 0x8022903C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022903C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BE4C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BE4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BE50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BE54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BE58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BE5C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022BE60: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022BE64: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BE68: jal         0x8006033C
    // 0x8022BE6C: addiu       $a0, $zero, 0x618
    ctx->r4 = ADD32(0, 0X618);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022BE6C: addiu       $a0, $zero, 0x618
    ctx->r4 = ADD32(0, 0X618);
    after_0:
    // 0x8022BE70: beq         $v0, $zero, L_8022BE7C
    if (ctx->r2 == 0) {
        // 0x8022BE74: addiu       $v0, $zero, 0x1A
        ctx->r2 = ADD32(0, 0X1A);
            goto L_8022BE7C;
    }
    // 0x8022BE74: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x8022BE78: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022BE7C:
    // 0x8022BE7C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BE80: sltiu       $v0, $v1, 0x1B
    ctx->r2 = ctx->r3 < 0X1B ? 1 : 0;
    // 0x8022BE84: beq         $v0, $zero, L_8022C0B8
    if (ctx->r2 == 0) {
        // 0x8022BE88: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022C0B8;
    }
    // 0x8022BE88: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022BE8C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BE90: addu        $at, $at, $v0
    gpr jr_addend_8022BE98 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BE94: lw          $v0, 0xB40($at)
    ctx->r2 = ADD32(ctx->r1, 0XB40);
    // 0x8022BE98: jr          $v0
    // 0x8022BE9C: nop

    switch (jr_addend_8022BE98 >> 2) {
        case 0: goto L_8022BEA0; break;
        case 1: goto L_8022BEB0; break;
        case 2: goto L_8022C0B8; break;
        case 3: goto L_8022C0B8; break;
        case 4: goto L_8022C0B8; break;
        case 5: goto L_8022C0B8; break;
        case 6: goto L_8022C0B8; break;
        case 7: goto L_8022C0B8; break;
        case 8: goto L_8022C0B8; break;
        case 9: goto L_8022C0B8; break;
        case 10: goto L_8022C0B8; break;
        case 11: goto L_8022C0B8; break;
        case 12: goto L_8022C0B8; break;
        case 13: goto L_8022C0B8; break;
        case 14: goto L_8022C0B8; break;
        case 15: goto L_8022C0B8; break;
        case 16: goto L_8022C0B8; break;
        case 17: goto L_8022C0B8; break;
        case 18: goto L_8022C0B8; break;
        case 19: goto L_8022C0B8; break;
        case 20: goto L_8022BF18; break;
        case 21: goto L_8022BF58; break;
        case 22: goto L_8022BF78; break;
        case 23: goto L_8022BFB8; break;
        case 24: goto L_8022BFD8; break;
        case 25: goto L_8022C048; break;
        case 26: goto L_8022C0B0; break;
        default: switch_error(__func__, 0x8022BE98, 0x80230B40);
    }
    // 0x8022BE9C: nop

L_8022BEA0:
    // 0x8022BEA0: jal         0x8022C0CC
    // 0x8022BEA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C0CC_ovl9(rdram, ctx);
        goto after_1;
    // 0x8022BEA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022BEA8: j           L_8022C060
    // 0x8022BEAC: nop

        goto L_8022C060;
    // 0x8022BEAC: nop

L_8022BEB0:
    // 0x8022BEB0: jal         0x8006033C
    // 0x8022BEB4: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022BEB4: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    after_2:
    // 0x8022BEB8: beq         $v0, $zero, L_8022C0B8
    if (ctx->r2 == 0) {
        // 0x8022BEBC: addiu       $v0, $zero, -0xE10
        ctx->r2 = ADD32(0, -0XE10);
            goto L_8022C0B8;
    }
    // 0x8022BEBC: addiu       $v0, $zero, -0xE10
    ctx->r2 = ADD32(0, -0XE10);
    // 0x8022BEC0: sh          $v0, 0x438($s1)
    MEM_H(0X438, ctx->r17) = ctx->r2;
    // 0x8022BEC4: addiu       $v0, $zero, 0xE10
    ctx->r2 = ADD32(0, 0XE10);
    // 0x8022BEC8: sh          $v0, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = ctx->r2;
    // 0x8022BECC: lh          $v0, 0x438($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X438);
    // 0x8022BED0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8022BED4: sh          $a1, 0x43A($s1)
    MEM_H(0X43A, ctx->r17) = ctx->r5;
    // 0x8022BED8: lh          $v1, 0x43A($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X43A);
    // 0x8022BEDC: lh          $a0, 0x43C($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X43C);
    // 0x8022BEE0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BEE4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022BEE8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022BEEC: sw          $v0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r2;
    // 0x8022BEF0: addiu       $v0, $zero, -0xD80
    ctx->r2 = ADD32(0, -0XD80);
    // 0x8022BEF4: sw          $v1, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r3;
    // 0x8022BEF8: sw          $a0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r4;
    // 0x8022BEFC: sh          $v0, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r2;
    // 0x8022BF00: addiu       $v0, $zero, 0x111D
    ctx->r2 = ADD32(0, 0X111D);
    // 0x8022BF04: sh          $v0, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r2;
    // 0x8022BF08: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022BF0C: sh          $a1, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r5;
    // 0x8022BF10: j           L_8022C0B8
    // 0x8022BF14: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022C0B8;
    // 0x8022BF14: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022BF18:
    // 0x8022BF18: jal         0x8006033C
    // 0x8022BF1C: addiu       $a0, $zero, 0x611
    ctx->r4 = ADD32(0, 0X611);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8022BF1C: addiu       $a0, $zero, 0x611
    ctx->r4 = ADD32(0, 0X611);
    after_3:
    // 0x8022BF20: beq         $v0, $zero, L_8022C0B8
    if (ctx->r2 == 0) {
        // 0x8022BF24: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C0B8;
    }
    // 0x8022BF24: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BF28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022BF2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BF30: jal         0x800610AC
    // 0x8022BF34: addiu       $a3, $zero, 0x49
    ctx->r7 = ADD32(0, 0X49);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022BF34: addiu       $a3, $zero, 0x49
    ctx->r7 = ADD32(0, 0X49);
    after_4:
    // 0x8022BF38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BF3C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022BF40: jal         0x80050294
    // 0x8022BF44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022BF44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022BF48: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BF4C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022BF50: j           L_8022C064
    // 0x8022BF54: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8022C064;
    // 0x8022BF54: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022BF58:
    // 0x8022BF58: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022BF5C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022BF60: bne         $v0, $zero, L_8022C0B8
    if (ctx->r2 != 0) {
        // 0x8022BF64: nop
    
            goto L_8022C0B8;
    }
    // 0x8022BF64: nop

    // 0x8022BF68: jal         0x8006036C
    // 0x8022BF6C: addiu       $a0, $zero, 0x612
    ctx->r4 = ADD32(0, 0X612);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x8022BF6C: addiu       $a0, $zero, 0x612
    ctx->r4 = ADD32(0, 0X612);
    after_6:
    // 0x8022BF70: j           L_8022C060
    // 0x8022BF74: nop

        goto L_8022C060;
    // 0x8022BF74: nop

L_8022BF78:
    // 0x8022BF78: jal         0x8006033C
    // 0x8022BF7C: addiu       $a0, $zero, 0x613
    ctx->r4 = ADD32(0, 0X613);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x8022BF7C: addiu       $a0, $zero, 0x613
    ctx->r4 = ADD32(0, 0X613);
    after_7:
    // 0x8022BF80: beq         $v0, $zero, L_8022C0B8
    if (ctx->r2 == 0) {
        // 0x8022BF84: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C0B8;
    }
    // 0x8022BF84: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BF88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022BF8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BF90: jal         0x800610AC
    // 0x8022BF94: addiu       $a3, $zero, 0x4B
    ctx->r7 = ADD32(0, 0X4B);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_8;
    // 0x8022BF94: addiu       $a3, $zero, 0x4B
    ctx->r7 = ADD32(0, 0X4B);
    after_8:
    // 0x8022BF98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BF9C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022BFA0: jal         0x80050294
    // 0x8022BFA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_9;
    // 0x8022BFA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8022BFA8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BFAC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022BFB0: j           L_8022C064
    // 0x8022BFB4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8022C064;
    // 0x8022BFB4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022BFB8:
    // 0x8022BFB8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022BFBC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022BFC0: bne         $v0, $zero, L_8022C0B8
    if (ctx->r2 != 0) {
        // 0x8022BFC4: nop
    
            goto L_8022C0B8;
    }
    // 0x8022BFC4: nop

    // 0x8022BFC8: jal         0x8006036C
    // 0x8022BFCC: addiu       $a0, $zero, 0x614
    ctx->r4 = ADD32(0, 0X614);
    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x8022BFCC: addiu       $a0, $zero, 0x614
    ctx->r4 = ADD32(0, 0X614);
    after_10:
    // 0x8022BFD0: j           L_8022C060
    // 0x8022BFD4: nop

        goto L_8022C060;
    // 0x8022BFD4: nop

L_8022BFD8:
    // 0x8022BFD8: jal         0x8006033C
    // 0x8022BFDC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_8006033C_3B73C(rdram, ctx);
        goto after_11;
    // 0x8022BFDC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_11:
    // 0x8022BFE0: beq         $v0, $zero, L_8022C0B8
    if (ctx->r2 == 0) {
        // 0x8022BFE4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C0B8;
    }
    // 0x8022BFE4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BFE8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022BFEC: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022BFF0: jal         0x8004F820
    // 0x8022BFF4: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    func_8004F820_2AC20(rdram, ctx);
        goto after_12;
    // 0x8022BFF4: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    after_12:
    // 0x8022BFF8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BFFC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C000: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C004: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C008: bne         $v0, $zero, L_8022C0B8
    if (ctx->r2 != 0) {
        // 0x8022C00C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022C0B8;
    }
    // 0x8022C00C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022C010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C014: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022C018: jal         0x80050294
    // 0x8022C01C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_13;
    // 0x8022C01C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_13:
    // 0x8022C020: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C024: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8022C028: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C02C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C030: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C034: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022C038: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C03C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C040: j           L_8022C0B8
    // 0x8022C044: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_8022C0B8;
    // 0x8022C044: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022C048:
    // 0x8022C048: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C04C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C050: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C054: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C058: bne         $v0, $zero, L_8022C070
    if (ctx->r2 != 0) {
        // 0x8022C05C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C070;
    }
    // 0x8022C05C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C060:
    // 0x8022C060: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
L_8022C064:
    // 0x8022C064: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C068: j           L_8022C0B8
    // 0x8022C06C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022C0B8;
    // 0x8022C06C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C070:
    // 0x8022C070: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022C074: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C078: jal         0x8004DA90
    // 0x8022C07C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_14;
    // 0x8022C07C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_14:
    // 0x8022C080: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022C084: xori        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 ^ 0X3;
    // 0x8022C088: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022C08C: xori        $v0, $v0, 0xA
    ctx->r2 = ctx->r2 ^ 0XA;
    // 0x8022C090: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022C094: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022C098: beq         $v1, $zero, L_8022C0B8
    if (ctx->r3 == 0) {
        // 0x8022C09C: addiu       $a0, $zero, 0x10C
        ctx->r4 = ADD32(0, 0X10C);
            goto L_8022C0B8;
    }
    // 0x8022C09C: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    // 0x8022C0A0: jal         0x8002A33C
    // 0x8022C0A4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_15;
    // 0x8022C0A4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_15:
    // 0x8022C0A8: j           L_8022C0B8
    // 0x8022C0AC: nop

        goto L_8022C0B8;
    // 0x8022C0AC: nop

L_8022C0B0:
    // 0x8022C0B0: jal         0x8004F418
    // 0x8022C0B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_16;
    // 0x8022C0B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
L_8022C0B8:
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
RECOMP_FUNC void func_802287B0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802287B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802287B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802287B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802287BC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802287C0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802287C4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802287C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802287CC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802287D0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x802287D4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802287D8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802287DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802287E0: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x802287E4: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x802287E8: jal         0x80229358
    // 0x802287EC: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80229358_ovl9(rdram, ctx);
        goto after_0;
    // 0x802287EC: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x802287F0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802287F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802287F8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802287FC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228800: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80228804: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228808: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022880C: jal         0x8004F820
    // 0x80228810: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80228810: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80228814: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228818: bgez        $v0, L_80228848
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022881C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80228848;
    }
    // 0x8022881C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80228820: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228824: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228828: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022882C: jal         0x8004F820
    // 0x80228830: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80228830: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80228834: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228838: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022883C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228840: j           L_80228864
    // 0x80228844: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80228864;
    // 0x80228844: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80228848:
    // 0x80228848: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022884C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228850: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228854: jal         0x8004F820
    // 0x80228858: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80228858: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022885C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228860: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80228864:
    // 0x80228864: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228868: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022886C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80228870: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228874: jal         0x800610AC
    // 0x80228878: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80228878: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022887C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228880: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228884: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228888: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022888C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228890: jr          $ra
    // 0x80228894: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228894: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225F4C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225F50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225F54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225F5C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225F60: bne         $v0, $zero, L_80225F78
    if (ctx->r2 != 0) {
        // 0x80225F64: nop
    
            goto L_80225F78;
    }
    // 0x80225F64: nop

    // 0x80225F68: jal         0x80226AEC
    // 0x80225F6C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225F6C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x80225F70: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225F74: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225F78:
    // 0x80225F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225F7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F80: jr          $ra
    // 0x80225F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226360_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226364: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226368: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022636C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226370: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226374: bne         $v0, $zero, L_8022638C
    if (ctx->r2 != 0) {
        // 0x80226378: nop
    
            goto L_8022638C;
    }
    // 0x80226378: nop

    // 0x8022637C: jal         0x80226AEC
    // 0x80226380: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226380: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_0:
    // 0x80226384: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226388: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022638C:
    // 0x8022638C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226390: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226394: jr          $ra
    // 0x80226398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C864_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C864: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022C868: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C86C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C870: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022C874: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022C878: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C87C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C880: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022C884: jal         0x8004D5D4
    // 0x8022C888: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022C888: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C88C: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8022C890: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8022C894: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C898: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022C89C: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8022C8A0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022C8A4: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022C8A8: jal         0x8002C654
    // 0x8022C8AC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8022C8AC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022C8B0: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022C8B4: jal         0x80031600
    // 0x8022C8B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x8022C8B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022C8BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C8C0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022C8C4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C8C8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022C8CC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C8D0: jal         0x80031DA8
    // 0x8022C8D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x8022C8D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022C8D8: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022C8DC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022C8E0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022C8E4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C8E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022C8EC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C8F0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022C8F4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C8F8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022C8FC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022C900: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022C904: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8022C908: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8022C90C: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8022C910: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022C914: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x8022C918: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x8022C91C: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x8022C920: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8022C924: jal         0x8009A3B4
    // 0x8022C928: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022C928: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    after_4:
    // 0x8022C92C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022C930: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C934: jal         0x8009A3B4
    // 0x8022C938: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022C938: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022C93C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C940: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022C944: addiu       $v0, $v0, 0x8F0
    ctx->r2 = ADD32(ctx->r2, 0X8F0);
    // 0x8022C948: jal         0x80040F30
    // 0x8022C94C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_6;
    // 0x8022C94C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_6:
    // 0x8022C950: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C954: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022C958: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C95C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C960: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022C964: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022C968: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022C96C: jr          $ra
    // 0x8022C970: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022C970: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802259D4_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802259D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802259DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802259E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802259E4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802259E8: bne         $v0, $zero, L_80225A00
    if (ctx->r2 != 0) {
        // 0x802259EC: nop
    
            goto L_80225A00;
    }
    // 0x802259EC: nop

    // 0x802259F0: jal         0x80226AEC
    // 0x802259F4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x802259F4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x802259F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802259FC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225A00:
    // 0x80225A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A08: jr          $ra
    // 0x80225A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226714_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226718: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022671C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226724: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226728: bne         $v0, $zero, L_80226740
    if (ctx->r2 != 0) {
        // 0x8022672C: nop
    
            goto L_80226740;
    }
    // 0x8022672C: nop

    // 0x80226730: jal         0x80226AEC
    // 0x80226734: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226734: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    after_0:
    // 0x80226738: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022673C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226740:
    // 0x80226740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226744: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226748: jr          $ra
    // 0x8022674C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022674C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802296E4_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802296E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802296E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802296EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802296F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802296F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802296F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802296FC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80229700: beq         $v1, $zero, L_8022971C
    if (ctx->r3 == 0) {
        // 0x80229704: addiu       $s1, $s0, 0x368
        ctx->r17 = ADD32(ctx->r16, 0X368);
            goto L_8022971C;
    }
    // 0x80229704: addiu       $s1, $s0, 0x368
    ctx->r17 = ADD32(ctx->r16, 0X368);
    // 0x80229708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022970C: beq         $v1, $v0, L_80229744
    if (ctx->r3 == ctx->r2) {
        // 0x80229710: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229744;
    }
    // 0x80229710: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229714: j           L_802297BC
    // 0x80229718: nop

        goto L_802297BC;
    // 0x80229718: nop

L_8022971C:
    // 0x8022971C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229720: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229724: lb          $a3, 0xC($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XC);
    // 0x80229728: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022972C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229730: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229734: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x80229738: jal         0x800610AC
    // 0x8022973C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x8022973C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229740: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80229744:
    // 0x80229744: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229748: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x8022974C: jal         0x8004F820
    // 0x80229750: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80229750: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x80229754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229758: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022975C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229760: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229764: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80229768: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022976C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229770: jal         0x8004DA90
    // 0x80229774: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80229774: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x80229778: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022977C: lh          $v0, 0xC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XC);
    // 0x80229780: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80229784: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229788: mflo        $v1
    ctx->r3 = lo;
    // 0x8022978C: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    // 0x80229790: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80229794: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80229798: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022979C: mflo        $v0
    ctx->r2 = lo;
    // 0x802297A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802297A4: slti        $v1, $v1, 0x800
    ctx->r3 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x802297A8: beq         $v1, $zero, L_802297BC
    if (ctx->r3 == 0) {
        // 0x802297AC: nop
    
            goto L_802297BC;
    }
    // 0x802297AC: nop

    // 0x802297B0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802297B4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802297B8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802297BC:
    // 0x802297BC: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x802297C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802297C4: bne         $v1, $v0, L_802297D8
    if (ctx->r3 != ctx->r2) {
        // 0x802297C8: addiu       $a0, $zero, 0x112
        ctx->r4 = ADD32(0, 0X112);
            goto L_802297D8;
    }
    // 0x802297C8: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    // 0x802297CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802297D0: jal         0x8002A2F8
    // 0x802297D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x802297D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
L_802297D8:
    // 0x802297D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802297DC: lb          $v0, 0x4A21($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4A21);
    // 0x802297E0: bgez        $v0, L_80229808
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802297E4: nop
    
            goto L_80229808;
    }
    // 0x802297E4: nop

    // 0x802297E8: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x802297EC: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x802297F0: bne         $v0, $zero, L_80229808
    if (ctx->r2 != 0) {
        // 0x802297F4: ori         $v0, $v1, 0x2
        ctx->r2 = ctx->r3 | 0X2;
            goto L_80229808;
    }
    // 0x802297F4: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x802297F8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802297FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229800: jal         0x800616FC
    // 0x80229804: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80229804: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
L_80229808:
    // 0x80229808: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022980C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229810: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229814: jr          $ra
    // 0x80229818: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229818: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022981C: nop

;}
RECOMP_FUNC void func_80225BB8_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225BBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225BC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225BC8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225BCC: bne         $v0, $zero, L_80225BE4
    if (ctx->r2 != 0) {
        // 0x80225BD0: nop
    
            goto L_80225BE4;
    }
    // 0x80225BD0: nop

    // 0x80225BD4: jal         0x80226AEC
    // 0x80225BD8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225BD8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_0:
    // 0x80225BDC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225BE0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225BE4:
    // 0x80225BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225BE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225BEC: jr          $ra
    // 0x80225BF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225BF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225CA8_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225CAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225CB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225CB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225CB8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225CBC: bne         $v0, $zero, L_80225CD4
    if (ctx->r2 != 0) {
        // 0x80225CC0: nop
    
            goto L_80225CD4;
    }
    // 0x80225CC0: nop

    // 0x80225CC4: jal         0x80226AEC
    // 0x80225CC8: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225CC8: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_0:
    // 0x80225CCC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225CD0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225CD4:
    // 0x80225CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225CD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225CDC: jr          $ra
    // 0x80225CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802268CC_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802268CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802268D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802268D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802268D8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802268DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802268E0: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x802268E4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802268E8: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802268EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802268F0: beq         $v1, $v0, L_80226A0C
    if (ctx->r3 == ctx->r2) {
        // 0x802268F4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226A0C;
    }
    // 0x802268F4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802268F8: beql        $v0, $zero, L_80226910
    if (ctx->r2 == 0) {
        // 0x802268FC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226910;
    }
    goto skip_0;
    // 0x802268FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226900: beq         $v1, $zero, L_80226920
    if (ctx->r3 == 0) {
        // 0x80226904: nop
    
            goto L_80226920;
    }
    // 0x80226904: nop

    // 0x80226908: j           L_80226A8C
    // 0x8022690C: nop

        goto L_80226A8C;
    // 0x8022690C: nop

L_80226910:
    // 0x80226910: beq         $v1, $v0, L_80226A38
    if (ctx->r3 == ctx->r2) {
        // 0x80226914: nop
    
            goto L_80226A38;
    }
    // 0x80226914: nop

    // 0x80226918: j           L_80226A8C
    // 0x8022691C: nop

        goto L_80226A8C;
    // 0x8022691C: nop

L_80226920:
    // 0x80226920: jal         0x8006FF84
    // 0x80226924: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80226924: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80226928: beq         $v0, $zero, L_80226A8C
    if (ctx->r2 == 0) {
        // 0x8022692C: nop
    
            goto L_80226A8C;
    }
    // 0x8022692C: nop

    // 0x80226930: jal         0x80060170
    // 0x80226934: nop

    func_80060170_3B570(rdram, ctx);
        goto after_1;
    // 0x80226934: nop

    after_1:
    // 0x80226938: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022693C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226940: jal         0x8005F6B4
    // 0x80226944: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_2;
    // 0x80226944: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80226948: addiu       $a0, $s1, 0x428
    ctx->r4 = ADD32(ctx->r17, 0X428);
    // 0x8022694C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226950: addiu       $v0, $v0, -0x314
    ctx->r2 = ADD32(ctx->r2, -0X314);
    // 0x80226954: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226958: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8022695C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226960: addiu       $v0, $v0, -0x324
    ctx->r2 = ADD32(ctx->r2, -0X324);
    // 0x80226964: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x80226968: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022696C: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80226970: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226974: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226978: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022697C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226980: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226984: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80226988: lui         $v0, 0xFFE0
    ctx->r2 = S32(0XFFE0 << 16);
    // 0x8022698C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226990: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80226994: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80226998: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022699C: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x802269A0: lui         $v0, 0x130
    ctx->r2 = S32(0X130 << 16);
    // 0x802269A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269A8: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x802269AC: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x802269B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269B4: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x802269B8: jal         0x8004DD04
    // 0x802269BC: addiu       $a1, $s1, 0x438
    ctx->r5 = ADD32(ctx->r17, 0X438);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x802269BC: addiu       $a1, $s1, 0x438
    ctx->r5 = ADD32(ctx->r17, 0X438);
    after_3:
    // 0x802269C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802269C4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802269C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269CC: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x802269D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269D4: sh          $zero, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = 0;
    // 0x802269D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269DC: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x802269E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269E4: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x802269E8: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x802269EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802269F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802269F4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x802269F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802269FC: jal         0x800616FC
    // 0x80226A00: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80226A00: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    after_4:
    // 0x80226A04: j           L_80226A8C
    // 0x80226A08: nop

        goto L_80226A8C;
    // 0x80226A08: nop

L_80226A0C:
    // 0x80226A0C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80226A10: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226A14: bgez        $v0, L_80226A68
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226A18: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_80226A68;
    }
    // 0x80226A18: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80226A1C: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80226A20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A24: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80226A28: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80226A2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226A30: j           L_80226A68
    // 0x80226A34: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80226A68;
    // 0x80226A34: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80226A38:
    // 0x80226A38: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226A3C: lb          $v0, 0x4A57($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4A57);
    // 0x80226A40: bgez        $v0, L_80226A68
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226A44: nop
    
            goto L_80226A68;
    }
    // 0x80226A44: nop

    // 0x80226A48: jal         0x800A3450
    // 0x80226A4C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80226A4C: nop

    after_5:
    // 0x80226A50: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80226A54: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80226A58: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80226A5C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80226A60: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80226A64: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
L_80226A68:
    // 0x80226A68: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226A6C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226A70: bltz        $v0, L_80226A8C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80226A74: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80226A8C;
    }
    // 0x80226A74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226A78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226A7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A80: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    // 0x80226A84: jal         0x80070050
    // 0x80226A88: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x80226A88: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    after_6:
L_80226A8C:
    // 0x80226A8C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80226A90: beq         $v0, $zero, L_80226AB4
    if (ctx->r2 == 0) {
        // 0x80226A94: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80226AB4;
    }
    // 0x80226A94: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226A98: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x80226A9C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80226AA0: beq         $v1, $v0, L_80226AB4
    if (ctx->r3 == ctx->r2) {
        // 0x80226AA4: nop
    
            goto L_80226AB4;
    }
    // 0x80226AA4: nop

    // 0x80226AA8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80226AAC: jalr        $v0
    // 0x80226AB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x80226AB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80226AB4:
    // 0x80226AB4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226AB8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226ABC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226AC0: jr          $ra
    // 0x80226AC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226AC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802258CC_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802258D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802258D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802258DC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802258E0: bne         $v0, $zero, L_802258F8
    if (ctx->r2 != 0) {
        // 0x802258E4: nop
    
            goto L_802258F8;
    }
    // 0x802258E4: nop

    // 0x802258E8: jal         0x80226AEC
    // 0x802258EC: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x802258EC: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    after_0:
    // 0x802258F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802258F4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802258F8:
    // 0x802258F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802258FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225900: jr          $ra
    // 0x80225904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A36C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A36C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022A370: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022A374: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A378: addiu       $a0, $zero, 0x618
    ctx->r4 = ADD32(0, 0X618);
    // 0x8022A37C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022A380: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022A384: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022A388: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022A38C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022A390: jal         0x8006033C
    // 0x8022A394: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022A394: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    after_0:
    // 0x8022A398: beq         $v0, $zero, L_8022A3A4
    if (ctx->r2 == 0) {
        // 0x8022A39C: addiu       $v0, $zero, 0x1A
        ctx->r2 = ADD32(0, 0X1A);
            goto L_8022A3A4;
    }
    // 0x8022A39C: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x8022A3A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022A3A4:
    // 0x8022A3A4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A3A8: sltiu       $v0, $v1, 0x1B
    ctx->r2 = ctx->r3 < 0X1B ? 1 : 0;
    // 0x8022A3AC: beq         $v0, $zero, L_8022A768
    if (ctx->r2 == 0) {
        // 0x8022A3B0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022A768;
    }
    // 0x8022A3B0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022A3B4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A3B8: addu        $at, $at, $v0
    gpr jr_addend_8022A3C0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A3BC: lw          $v0, 0xA40($at)
    ctx->r2 = ADD32(ctx->r1, 0XA40);
    // 0x8022A3C0: jr          $v0
    // 0x8022A3C4: nop

    switch (jr_addend_8022A3C0 >> 2) {
        case 0: goto L_8022A3C8; break;
        case 1: goto L_8022A3D8; break;
        case 2: goto L_8022A768; break;
        case 3: goto L_8022A768; break;
        case 4: goto L_8022A768; break;
        case 5: goto L_8022A768; break;
        case 6: goto L_8022A768; break;
        case 7: goto L_8022A768; break;
        case 8: goto L_8022A768; break;
        case 9: goto L_8022A768; break;
        case 10: goto L_8022A484; break;
        case 11: goto L_8022A538; break;
        case 12: goto L_8022A568; break;
        case 13: goto L_8022A768; break;
        case 14: goto L_8022A768; break;
        case 15: goto L_8022A768; break;
        case 16: goto L_8022A768; break;
        case 17: goto L_8022A768; break;
        case 18: goto L_8022A768; break;
        case 19: goto L_8022A768; break;
        case 20: goto L_8022A5C8; break;
        case 21: goto L_8022A608; break;
        case 22: goto L_8022A628; break;
        case 23: goto L_8022A668; break;
        case 24: goto L_8022A688; break;
        case 25: goto L_8022A6F8; break;
        case 26: goto L_8022A760; break;
        default: switch_error(__func__, 0x8022A3C0, 0x80230A40);
    }
    // 0x8022A3C4: nop

L_8022A3C8:
    // 0x8022A3C8: jal         0x8022A784
    // 0x8022A3CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A784_ovl9(rdram, ctx);
        goto after_1;
    // 0x8022A3CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022A3D0: j           L_8022A710
    // 0x8022A3D4: nop

        goto L_8022A710;
    // 0x8022A3D4: nop

L_8022A3D8:
    // 0x8022A3D8: jal         0x8006033C
    // 0x8022A3DC: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022A3DC: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    after_2:
    // 0x8022A3E0: beq         $v0, $zero, L_8022A454
    if (ctx->r2 == 0) {
        // 0x8022A3E4: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8022A454;
    }
    // 0x8022A3E4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022A3E8: lh          $v0, 0x180($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X180);
    // 0x8022A3EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022A3F0: lh          $v0, 0x182($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X182);
    // 0x8022A3F4: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022A3F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022A3FC: lh          $v1, 0x184($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X184);
    // 0x8022A400: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A404: addiu       $v0, $zero, -0xE10
    ctx->r2 = ADD32(0, -0XE10);
    // 0x8022A408: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022A40C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A410: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022A414: addiu       $v0, $zero, 0xE10
    ctx->r2 = ADD32(0, 0XE10);
    // 0x8022A418: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8022A41C: jal         0x8004EC38
    // 0x8022A420: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8022A420: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022A424: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022A428: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022A42C: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022A430: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022A434: jal         0x80034FCC
    // 0x8022A438: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x8022A438: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x8022A43C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022A440: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022A444: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022A448: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A44C: j           L_8022A768
    // 0x8022A450: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022A768;
    // 0x8022A450: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022A454:
    // 0x8022A454: jal         0x8006033C
    // 0x8022A458: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8022A458: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    after_5:
    // 0x8022A45C: beq         $v0, $zero, L_8022A768
    if (ctx->r2 == 0) {
        // 0x8022A460: addiu       $v0, $zero, -0xE80
        ctx->r2 = ADD32(0, -0XE80);
            goto L_8022A768;
    }
    // 0x8022A460: addiu       $v0, $zero, -0xE80
    ctx->r2 = ADD32(0, -0XE80);
    // 0x8022A464: sh          $v0, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r2;
    // 0x8022A468: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A46C: sh          $v0, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r2;
    // 0x8022A470: addiu       $v0, $zero, 0x111D
    ctx->r2 = ADD32(0, 0X111D);
    // 0x8022A474: sh          $v0, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r2;
    // 0x8022A478: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022A47C: j           L_8022A768
    // 0x8022A480: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022A768;
    // 0x8022A480: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022A484:
    // 0x8022A484: addiu       $s3, $zero, -0xE10
    ctx->r19 = ADD32(0, -0XE10);
    // 0x8022A488: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x8022A48C: addiu       $v0, $zero, 0x10CC
    ctx->r2 = ADD32(0, 0X10CC);
    // 0x8022A490: sh          $s3, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r19;
    // 0x8022A494: sh          $s2, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r18;
    // 0x8022A498: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8022A49C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A4A0: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022A4A4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A4A8: jal         0x8004F820
    // 0x8022A4AC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022A4AC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_6:
    // 0x8022A4B0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A4B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A4B8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A4BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A4C0: bne         $v0, $zero, L_8022A768
    if (ctx->r2 != 0) {
        // 0x8022A4C4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022A768;
    }
    // 0x8022A4C4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022A4C8: jal         0x8003516C
    // 0x8022A4CC: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_7;
    // 0x8022A4CC: nop

    after_7:
    // 0x8022A4D0: bne         $v0, $zero, L_8022A768
    if (ctx->r2 != 0) {
        // 0x8022A4D4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022A768;
    }
    // 0x8022A4D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A4D8: jal         0x800616FC
    // 0x8022A4DC: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_8;
    // 0x8022A4DC: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    after_8:
    // 0x8022A4E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A4E4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022A4E8: jal         0x80050294
    // 0x8022A4EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_9;
    // 0x8022A4EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8022A4F0: addiu       $v0, $zero, 0xE10
    ctx->r2 = ADD32(0, 0XE10);
    // 0x8022A4F4: sh          $s3, 0x438($s1)
    MEM_H(0X438, ctx->r17) = ctx->r19;
    // 0x8022A4F8: sh          $v0, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = ctx->r2;
    // 0x8022A4FC: lh          $v0, 0x438($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X438);
    // 0x8022A500: sh          $s2, 0x43A($s1)
    MEM_H(0X43A, ctx->r17) = ctx->r18;
    // 0x8022A504: lh          $v1, 0x43A($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X43A);
    // 0x8022A508: lh          $a0, 0x43C($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X43C);
    // 0x8022A50C: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022A510: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A514: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A518: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022A51C: sw          $v0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r2;
    // 0x8022A520: sw          $v1, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r3;
    // 0x8022A524: sw          $a0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r4;
    // 0x8022A528: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A52C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022A530: j           L_8022A714
    // 0x8022A534: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8022A714;
    // 0x8022A534: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022A538:
    // 0x8022A538: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A53C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A540: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A544: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A548: bne         $v0, $zero, L_8022A768
    if (ctx->r2 != 0) {
        // 0x8022A54C: nop
    
            goto L_8022A768;
    }
    // 0x8022A54C: nop

    // 0x8022A550: jal         0x80034E3C
    // 0x8022A554: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_10;
    // 0x8022A554: nop

    after_10:
    // 0x8022A558: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022A55C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A560: j           L_8022A710
    // 0x8022A564: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
        goto L_8022A710;
    // 0x8022A564: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_8022A568:
    // 0x8022A568: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A56C: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022A570: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A574: jal         0x8004F820
    // 0x8022A578: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    func_8004F820_2AC20(rdram, ctx);
        goto after_11;
    // 0x8022A578: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    after_11:
    // 0x8022A57C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A580: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A584: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A588: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A58C: bne         $v0, $zero, L_8022A768
    if (ctx->r2 != 0) {
        // 0x8022A590: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022A768;
    }
    // 0x8022A590: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022A594: jal         0x8003516C
    // 0x8022A598: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_12;
    // 0x8022A598: nop

    after_12:
    // 0x8022A59C: bne         $v0, $zero, L_8022A768
    if (ctx->r2 != 0) {
        // 0x8022A5A0: nop
    
            goto L_8022A768;
    }
    // 0x8022A5A0: nop

    // 0x8022A5A4: jal         0x80070050
    // 0x8022A5A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_13;
    // 0x8022A5A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_13:
    // 0x8022A5AC: jal         0x80060590
    // 0x8022A5B0: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    func_80060590_3B990(rdram, ctx);
        goto after_14;
    // 0x8022A5B0: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    after_14:
    // 0x8022A5B4: jal         0x8006036C
    // 0x8022A5B8: addiu       $a0, $zero, 0x60E
    ctx->r4 = ADD32(0, 0X60E);
    func_8006036C_3B76C(rdram, ctx);
        goto after_15;
    // 0x8022A5B8: addiu       $a0, $zero, 0x60E
    ctx->r4 = ADD32(0, 0X60E);
    after_15:
    // 0x8022A5BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A5C0: j           L_8022A768
    // 0x8022A5C4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022A768;
    // 0x8022A5C4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022A5C8:
    // 0x8022A5C8: jal         0x8006033C
    // 0x8022A5CC: addiu       $a0, $zero, 0x612
    ctx->r4 = ADD32(0, 0X612);
    func_8006033C_3B73C(rdram, ctx);
        goto after_16;
    // 0x8022A5CC: addiu       $a0, $zero, 0x612
    ctx->r4 = ADD32(0, 0X612);
    after_16:
    // 0x8022A5D0: beq         $v0, $zero, L_8022A768
    if (ctx->r2 == 0) {
        // 0x8022A5D4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022A768;
    }
    // 0x8022A5D4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A5D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022A5DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A5E0: jal         0x800610AC
    // 0x8022A5E4: addiu       $a3, $zero, 0x4A
    ctx->r7 = ADD32(0, 0X4A);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_17;
    // 0x8022A5E4: addiu       $a3, $zero, 0x4A
    ctx->r7 = ADD32(0, 0X4A);
    after_17:
    // 0x8022A5E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A5EC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022A5F0: jal         0x80050294
    // 0x8022A5F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_18;
    // 0x8022A5F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_18:
    // 0x8022A5F8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A5FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022A600: j           L_8022A714
    // 0x8022A604: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8022A714;
    // 0x8022A604: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022A608:
    // 0x8022A608: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022A60C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022A610: bne         $v0, $zero, L_8022A768
    if (ctx->r2 != 0) {
        // 0x8022A614: nop
    
            goto L_8022A768;
    }
    // 0x8022A614: nop

    // 0x8022A618: jal         0x8006036C
    // 0x8022A61C: addiu       $a0, $zero, 0x613
    ctx->r4 = ADD32(0, 0X613);
    func_8006036C_3B76C(rdram, ctx);
        goto after_19;
    // 0x8022A61C: addiu       $a0, $zero, 0x613
    ctx->r4 = ADD32(0, 0X613);
    after_19:
    // 0x8022A620: j           L_8022A710
    // 0x8022A624: nop

        goto L_8022A710;
    // 0x8022A624: nop

L_8022A628:
    // 0x8022A628: jal         0x8006033C
    // 0x8022A62C: addiu       $a0, $zero, 0x614
    ctx->r4 = ADD32(0, 0X614);
    func_8006033C_3B73C(rdram, ctx);
        goto after_20;
    // 0x8022A62C: addiu       $a0, $zero, 0x614
    ctx->r4 = ADD32(0, 0X614);
    after_20:
    // 0x8022A630: beq         $v0, $zero, L_8022A768
    if (ctx->r2 == 0) {
        // 0x8022A634: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022A768;
    }
    // 0x8022A634: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A638: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022A63C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A640: jal         0x800610AC
    // 0x8022A644: addiu       $a3, $zero, 0x4C
    ctx->r7 = ADD32(0, 0X4C);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_21;
    // 0x8022A644: addiu       $a3, $zero, 0x4C
    ctx->r7 = ADD32(0, 0X4C);
    after_21:
    // 0x8022A648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A64C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022A650: jal         0x80050294
    // 0x8022A654: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_22;
    // 0x8022A654: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_22:
    // 0x8022A658: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A65C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022A660: j           L_8022A714
    // 0x8022A664: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8022A714;
    // 0x8022A664: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022A668:
    // 0x8022A668: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022A66C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022A670: bne         $v0, $zero, L_8022A768
    if (ctx->r2 != 0) {
        // 0x8022A674: nop
    
            goto L_8022A768;
    }
    // 0x8022A674: nop

    // 0x8022A678: jal         0x8006036C
    // 0x8022A67C: addiu       $a0, $zero, 0x615
    ctx->r4 = ADD32(0, 0X615);
    func_8006036C_3B76C(rdram, ctx);
        goto after_23;
    // 0x8022A67C: addiu       $a0, $zero, 0x615
    ctx->r4 = ADD32(0, 0X615);
    after_23:
    // 0x8022A680: j           L_8022A710
    // 0x8022A684: nop

        goto L_8022A710;
    // 0x8022A684: nop

L_8022A688:
    // 0x8022A688: jal         0x8006033C
    // 0x8022A68C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_8006033C_3B73C(rdram, ctx);
        goto after_24;
    // 0x8022A68C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_24:
    // 0x8022A690: beq         $v0, $zero, L_8022A768
    if (ctx->r2 == 0) {
        // 0x8022A694: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022A768;
    }
    // 0x8022A694: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A698: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A69C: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022A6A0: jal         0x8004F820
    // 0x8022A6A4: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    func_8004F820_2AC20(rdram, ctx);
        goto after_25;
    // 0x8022A6A4: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    after_25:
    // 0x8022A6A8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A6AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A6B0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A6B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A6B8: bne         $v0, $zero, L_8022A768
    if (ctx->r2 != 0) {
        // 0x8022A6BC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022A768;
    }
    // 0x8022A6BC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022A6C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A6C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022A6C8: jal         0x80050294
    // 0x8022A6CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_26;
    // 0x8022A6CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_26:
    // 0x8022A6D0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A6D4: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8022A6D8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A6DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A6E0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A6E4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022A6E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A6EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A6F0: j           L_8022A768
    // 0x8022A6F4: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_8022A768;
    // 0x8022A6F4: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022A6F8:
    // 0x8022A6F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A6FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A700: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A704: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A708: bne         $v0, $zero, L_8022A720
    if (ctx->r2 != 0) {
        // 0x8022A70C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A720;
    }
    // 0x8022A70C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022A710:
    // 0x8022A710: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
L_8022A714:
    // 0x8022A714: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A718: j           L_8022A768
    // 0x8022A71C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022A768;
    // 0x8022A71C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022A720:
    // 0x8022A720: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022A724: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A728: jal         0x8004DA90
    // 0x8022A72C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_27;
    // 0x8022A72C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_27:
    // 0x8022A730: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022A734: xori        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 ^ 0X3;
    // 0x8022A738: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022A73C: xori        $v0, $v0, 0xA
    ctx->r2 = ctx->r2 ^ 0XA;
    // 0x8022A740: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022A744: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022A748: beq         $v1, $zero, L_8022A768
    if (ctx->r3 == 0) {
        // 0x8022A74C: addiu       $a0, $zero, 0x10C
        ctx->r4 = ADD32(0, 0X10C);
            goto L_8022A768;
    }
    // 0x8022A74C: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    // 0x8022A750: jal         0x8002A33C
    // 0x8022A754: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_28;
    // 0x8022A754: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_28:
    // 0x8022A758: j           L_8022A768
    // 0x8022A75C: nop

        goto L_8022A768;
    // 0x8022A75C: nop

L_8022A760:
    // 0x8022A760: jal         0x8004F418
    // 0x8022A764: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_29;
    // 0x8022A764: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_29:
L_8022A768:
    // 0x8022A768: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022A76C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022A770: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022A774: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A778: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022A77C: jr          $ra
    // 0x8022A780: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022A780: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80229F44_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229F44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229F48: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229F4C: jal         0x8004F418
    // 0x80229F50: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80229F50: nop

    after_0:
    // 0x80229F54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229F58: jr          $ra
    // 0x80229F5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229F5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225944_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225948: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022594C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225954: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225958: bne         $v0, $zero, L_80225970
    if (ctx->r2 != 0) {
        // 0x8022595C: nop
    
            goto L_80225970;
    }
    // 0x8022595C: nop

    // 0x80225960: jal         0x80226AEC
    // 0x80225964: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225964: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_0:
    // 0x80225968: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022596C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225970:
    // 0x80225970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225974: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225978: jr          $ra
    // 0x8022597C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022597C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C7C0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C7C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022C7C4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022C7C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C7CC: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022C7D0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022C7D4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C7D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C7DC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C7E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C7E4: lw          $v0, 0x8FC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X8FC);
    // 0x8022C7E8: jalr        $v0
    // 0x8022C7EC: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022C7EC: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022C7F0: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022C7F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C7F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C7FC: jal         0x8009A3B4
    // 0x8022C800: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C800: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    after_1:
    // 0x8022C804: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C808: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8022C80C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C810: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022C814: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022C818: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x8022C81C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C820: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022C824: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022C828: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C82C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022C830: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022C834: jal         0x80051E18
    // 0x8022C838: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_2;
    // 0x8022C838: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x8022C83C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C840: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8022C844: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022C848: jal         0x8003B564
    // 0x8022C84C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x8022C84C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8022C850: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022C854: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022C858: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022C85C: jr          $ra
    // 0x8022C860: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022C860: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802291C8_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802291C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802291CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802291D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802291D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802291D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802291DC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x802291E0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802291E4: jal         0x8004FA7C
    // 0x802291E8: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802291E8: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x802291EC: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802291F0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802291F4: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x802291F8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802291FC: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x80229200: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80229204: beq         $v1, $zero, L_80229238
    if (ctx->r3 == 0) {
        // 0x80229208: nop
    
            goto L_80229238;
    }
    // 0x80229208: nop

    // 0x8022920C: jal         0x80229358
    // 0x80229210: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229358_ovl9(rdram, ctx);
        goto after_1;
    // 0x80229210: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x80229214: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80229218: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022921C: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80229220: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229224: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80229228: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022922C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80229230: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80229234: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80229238:
    // 0x80229238: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022923C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80229240: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229244: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229248: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022924C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229250: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229254: jr          $ra
    // 0x80229258: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229258: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225F88_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225F8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225F90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225F98: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225F9C: bne         $v0, $zero, L_80225FB4
    if (ctx->r2 != 0) {
        // 0x80225FA0: nop
    
            goto L_80225FB4;
    }
    // 0x80225FA0: nop

    // 0x80225FA4: jal         0x80226AEC
    // 0x80225FA8: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225FA8: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_0:
    // 0x80225FAC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225FB0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225FB4:
    // 0x80225FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225FB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225FBC: jr          $ra
    // 0x80225FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225DA0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225DA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225DA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225DAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225DB0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225DB4: bne         $v0, $zero, L_80225DCC
    if (ctx->r2 != 0) {
        // 0x80225DB8: nop
    
            goto L_80225DCC;
    }
    // 0x80225DB8: nop

    // 0x80225DBC: jal         0x80226AEC
    // 0x80225DC0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225DC0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_0:
    // 0x80225DC4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225DC8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225DCC:
    // 0x80225DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225DD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225DD4: jr          $ra
    // 0x80225DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225410_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225414: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225418: jal         0x8006033C
    // 0x8022541C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022541C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x80225420: bne         $v0, $zero, L_8022544C
    if (ctx->r2 != 0) {
        // 0x80225424: nop
    
            goto L_8022544C;
    }
    // 0x80225424: nop

    // 0x80225428: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022542C: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225430: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225434: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225438: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022543C: lw          $v0, -0x13D8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X13D8);
    // 0x80225440: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225444: jalr        $v0
    // 0x80225448: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80225448: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_1:
L_8022544C:
    // 0x8022544C: jal         0x8006033C
    // 0x80225450: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225450: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_2:
    // 0x80225454: beq         $v0, $zero, L_80225494
    if (ctx->r2 == 0) {
        // 0x80225458: nop
    
            goto L_80225494;
    }
    // 0x80225458: nop

    // 0x8022545C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225460: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225464: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225468: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022546C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225470: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225474: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225478: lw          $v1, -0x1418($at)
    ctx->r3 = MEM_W(ctx->r1, -0X1418);
    // 0x8022547C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225480: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225484: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80225488: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8022548C: jalr        $v0
    // 0x80225490: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80225490: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_3:
L_80225494:
    // 0x80225494: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225498: jr          $ra
    // 0x8022549C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022549C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225998_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225998: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022599C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802259A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802259A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802259A8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802259AC: bne         $v0, $zero, L_802259C4
    if (ctx->r2 != 0) {
        // 0x802259B0: nop
    
            goto L_802259C4;
    }
    // 0x802259B0: nop

    // 0x802259B4: jal         0x80226AEC
    // 0x802259B8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x802259B8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_0:
    // 0x802259BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802259C0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802259C4:
    // 0x802259C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802259C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802259CC: jr          $ra
    // 0x802259D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802259D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226078_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022607C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226080: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226088: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022608C: bne         $v0, $zero, L_802260A4
    if (ctx->r2 != 0) {
        // 0x80226090: nop
    
            goto L_802260A4;
    }
    // 0x80226090: nop

    // 0x80226094: jal         0x80226AEC
    // 0x80226098: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226098: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_0:
    // 0x8022609C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802260A0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802260A4:
    // 0x802260A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802260A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802260AC: jr          $ra
    // 0x802260B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802260B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228C28_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228C2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228C30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228C34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228C38: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80228C3C: bgez        $v0, L_80228C70
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228C40: nop
    
            goto L_80228C70;
    }
    // 0x80228C40: nop

    // 0x80228C44: jal         0x80229358
    // 0x80228C48: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229358_ovl9(rdram, ctx);
        goto after_0;
    // 0x80228C48: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x80228C4C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80228C50: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x80228C54: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80228C58: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228C5C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80228C60: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x80228C64: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80228C68: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80228C6C: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80228C70:
    // 0x80228C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228C74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228C78: jr          $ra
    // 0x80228C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802293A8_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802293A8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x802293AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802293B0: beq         $a1, $v0, L_802293DC
    if (ctx->r5 == ctx->r2) {
        // 0x802293B4: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_802293DC;
    }
    // 0x802293B4: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x802293B8: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x802293BC: bne         $a0, $v0, L_802293CC
    if (ctx->r4 != ctx->r2) {
        // 0x802293C0: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_802293CC;
    }
    // 0x802293C0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x802293C4: j           L_802293EC
    // 0x802293C8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_802293EC;
    // 0x802293C8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_802293CC:
    // 0x802293CC: bne         $a0, $v1, L_802293EC
    if (ctx->r4 != ctx->r3) {
        // 0x802293D0: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_802293EC;
    }
    // 0x802293D0: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x802293D4: j           L_802293EC
    // 0x802293D8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_802293EC;
    // 0x802293D8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_802293DC:
    // 0x802293DC: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x802293E0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802293E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802293E8: lbu         $v0, 0x3D0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X3D0);
L_802293EC:
    // 0x802293EC: jr          $ra
    // 0x802293F0: nop

    TRACE_RETURN()
    return;
    // 0x802293F0: nop

;}
RECOMP_FUNC void func_80226468_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226468: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022646C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226470: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226478: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022647C: bne         $v0, $zero, L_80226494
    if (ctx->r2 != 0) {
        // 0x80226480: nop
    
            goto L_80226494;
    }
    // 0x80226480: nop

    // 0x80226484: jal         0x80226AEC
    // 0x80226488: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226488: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_0:
    // 0x8022648C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226490: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226494:
    // 0x80226494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226498: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022649C: jr          $ra
    // 0x802264A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802264A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228BE0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228BE0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80228BE4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228BE8: bne         $v0, $zero, L_80228C20
    if (ctx->r2 != 0) {
        // 0x80228BEC: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_80228C20;
    }
    // 0x80228BEC: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x80228BF0: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x80228BF4: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x80228BF8: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228BFC: beq         $v1, $zero, L_80228C0C
    if (ctx->r3 == 0) {
        // 0x80228C00: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_80228C0C;
    }
    // 0x80228C00: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x80228C04: j           L_80228C10
    // 0x80228C08: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80228C10;
    // 0x80228C08: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80228C0C:
    // 0x80228C0C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80228C10:
    // 0x80228C10: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80228C14: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x80228C18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228C1C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_80228C20:
    // 0x80228C20: jr          $ra
    // 0x80228C24: nop

    TRACE_RETURN()
    return;
    // 0x80228C24: nop

;}
RECOMP_FUNC void func_80225F10_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225F14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225F18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225F20: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225F24: bne         $v0, $zero, L_80225F3C
    if (ctx->r2 != 0) {
        // 0x80225F28: nop
    
            goto L_80225F3C;
    }
    // 0x80225F28: nop

    // 0x80225F2C: jal         0x80226AEC
    // 0x80225F30: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225F30: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_0:
    // 0x80225F34: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225F38: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225F3C:
    // 0x80225F3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225F40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F44: jr          $ra
    // 0x80225F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227284_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227284: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80227288: bltzl       $v0, L_80227290
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022728C: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_80227290;
    }
    goto skip_0;
    // 0x8022728C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_80227290:
    // 0x80227290: jr          $ra
    // 0x80227294: nop

    TRACE_RETURN()
    return;
    // 0x80227294: nop

;}
RECOMP_FUNC void func_8022D8F8_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D8F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022D8FC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022D900: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022D904: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D908: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022D90C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D910: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8022D914: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022D918: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x8022D91C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022D920: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_8022D924:
    // 0x8022D924: jal         0x8004EEAC
    // 0x8022D928: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8022D928: nop

    after_0:
    // 0x8022D92C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022D930: beq         $s0, $zero, L_8022D988
    if (ctx->r16 == 0) {
        // 0x8022D934: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D988;
    }
    // 0x8022D934: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D938: addiu       $a1, $s3, 0x38
    ctx->r5 = ADD32(ctx->r19, 0X38);
    // 0x8022D93C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D940: sb          $s2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r18;
    // 0x8022D944: sb          $s4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r20;
    // 0x8022D948: jal         0x8009A3B4
    // 0x8022D94C: sb          $s2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D94C: sb          $s2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r18;
    after_1:
    // 0x8022D950: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    // 0x8022D954: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x8022D958: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x8022D95C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x8022D960: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D964: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D968: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8022D96C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022D970: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022D974: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022D978: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022D97C: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x8022D980: sw          $a1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r5;
    // 0x8022D984: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
L_8022D988:
    // 0x8022D988: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022D98C: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022D990: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x8022D994: bne         $v0, $zero, L_8022D924
    if (ctx->r2 != 0) {
        // 0x8022D998: nop
    
            goto L_8022D924;
    }
    // 0x8022D998: nop

    // 0x8022D99C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022D9A0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022D9A4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D9A8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D9AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D9B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D9B4: jr          $ra
    // 0x8022D9B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022D9B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022D9BC: nop

;}
RECOMP_FUNC void func_802275C8_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802275C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802275CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802275D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802275D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802275D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802275DC: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x802275E0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802275E4: jal         0x8004FA7C
    // 0x802275E8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802275E8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x802275EC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802275F0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x802275F4: bne         $v0, $zero, L_80227618
    if (ctx->r2 != 0) {
        // 0x802275F8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80227618;
    }
    // 0x802275F8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802275FC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227600: jal         0x80229358
    // 0x80227604: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_80229358_ovl9(rdram, ctx);
        goto after_1;
    // 0x80227604: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227608: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022760C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227610: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227614: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80227618:
    // 0x80227618: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022761C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80227620: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227624: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227628: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022762C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227630: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227634: jr          $ra
    // 0x80227638: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227638: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225ED4_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225ED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225ED8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225EDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225EE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225EE4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225EE8: bne         $v0, $zero, L_80225F00
    if (ctx->r2 != 0) {
        // 0x80225EEC: nop
    
            goto L_80225F00;
    }
    // 0x80225EEC: nop

    // 0x80225EF0: jal         0x80226AEC
    // 0x80225EF4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225EF4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_0:
    // 0x80225EF8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225EFC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225F00:
    // 0x80225F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225F04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F08: jr          $ra
    // 0x80225F0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225F0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C974_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C974: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022C978: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022C97C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022C980: addiu       $a0, $s3, 0x34
    ctx->r4 = ADD32(ctx->r19, 0X34);
    // 0x8022C984: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x8022C988: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022C98C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022C990: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022C994: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022C998: jal         0x8009A3B4
    // 0x8022C99C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C99C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022C9A0: addiu       $a0, $s3, 0x2C
    ctx->r4 = ADD32(ctx->r19, 0X2C);
    // 0x8022C9A4: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x8022C9A8: jal         0x8009A3B4
    // 0x8022C9AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C9AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022C9B0: jal         0x8022CC04
    // 0x8022C9B4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8022CC04_ovl9(rdram, ctx);
        goto after_2;
    // 0x8022C9B4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x8022C9B8: lbu         $v0, 0xA($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XA);
    // 0x8022C9BC: beq         $v0, $zero, L_8022C9F8
    if (ctx->r2 == 0) {
        // 0x8022C9C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C9F8;
    }
    // 0x8022C9C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C9C4: sb          $v0, 0x74($s3)
    MEM_B(0X74, ctx->r19) = ctx->r2;
    // 0x8022C9C8: lhu         $v0, 0x54($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X54);
    // 0x8022C9CC: lhu         $a0, 0x64($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X64);
    // 0x8022C9D0: lhu         $v1, 0x56($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X56);
    // 0x8022C9D4: lhu         $a1, 0x66($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X66);
    // 0x8022C9D8: sh          $zero, 0x58($s3)
    MEM_H(0X58, ctx->r19) = 0;
    // 0x8022C9DC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022C9E0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C9E4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022C9E8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C9EC: sh          $v0, 0x54($s3)
    MEM_H(0X54, ctx->r19) = ctx->r2;
    // 0x8022C9F0: j           L_8022C9FC
    // 0x8022C9F4: sh          $v1, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r3;
        goto L_8022C9FC;
    // 0x8022C9F4: sh          $v1, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r3;
L_8022C9F8:
    // 0x8022C9F8: sb          $zero, 0x74($s3)
    MEM_B(0X74, ctx->r19) = 0;
L_8022C9FC:
    // 0x8022C9FC: addiu       $a0, $s3, 0x54
    ctx->r4 = ADD32(ctx->r19, 0X54);
    // 0x8022CA00: addiu       $s0, $s3, 0x8C
    ctx->r16 = ADD32(ctx->r19, 0X8C);
    // 0x8022CA04: jal         0x80031600
    // 0x8022CA08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x8022CA08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022CA0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CA10: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022CA14: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022CA18: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022CA1C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022CA20: jal         0x80031DA8
    // 0x8022CA24: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x8022CA24: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x8022CA28: jal         0x8022CAF0
    // 0x8022CA2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8022CAF0_ovl9(rdram, ctx);
        goto after_5;
    // 0x8022CA2C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_5:
    // 0x8022CA30: lw          $v0, 0xC0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC0);
    // 0x8022CA34: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022CA38: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022CA3C: beq         $v0, $zero, L_8022CACC
    if (ctx->r2 == 0) {
        // 0x8022CA40: addiu       $a0, $s3, 0x1C
        ctx->r4 = ADD32(ctx->r19, 0X1C);
            goto L_8022CACC;
    }
    // 0x8022CA40: addiu       $a0, $s3, 0x1C
    ctx->r4 = ADD32(ctx->r19, 0X1C);
    // 0x8022CA44: jal         0x800A3450
    // 0x8022CA48: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022CA48: nop

    after_6:
    // 0x8022CA4C: andi        $s1, $v0, 0xF
    ctx->r17 = ctx->r2 & 0XF;
    // 0x8022CA50: jal         0x800A3450
    // 0x8022CA54: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x8022CA54: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_7:
    // 0x8022CA58: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022CA5C: addiu       $s2, $s2, 0x4A06
    ctx->r18 = ADD32(ctx->r18, 0X4A06);
    // 0x8022CA60: lh          $a0, 0x0($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X0);
    // 0x8022CA64: andi        $s0, $v0, 0xF
    ctx->r16 = ctx->r2 & 0XF;
    // 0x8022CA68: jal         0x800324B4
    // 0x8022CA6C: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    func_800324B4_D8B4(rdram, ctx);
        goto after_8;
    // 0x8022CA6C: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    after_8:
    // 0x8022CA70: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022CA74: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022CA78: mflo        $v0
    ctx->r2 = lo;
    // 0x8022CA7C: negu        $s0, $s0
    ctx->r16 = SUB32(0, ctx->r16);
    // 0x8022CA80: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x8022CA84: sh          $s0, 0x46($s3)
    MEM_H(0X46, ctx->r19) = ctx->r16;
    // 0x8022CA88: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022CA8C: sh          $v0, 0x44($s3)
    MEM_H(0X44, ctx->r19) = ctx->r2;
    // 0x8022CA90: jal         0x80032498
    // 0x8022CA94: lh          $a0, 0x0($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_9;
    // 0x8022CA94: lh          $a0, 0x0($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X0);
    after_9:
    // 0x8022CA98: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022CA9C: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022CAA0: mflo        $v0
    ctx->r2 = lo;
    // 0x8022CAA4: addiu       $a0, $zero, 0x138
    ctx->r4 = ADD32(0, 0X138);
    // 0x8022CAA8: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x8022CAAC: addiu       $v1, $zero, 0x300
    ctx->r3 = ADD32(0, 0X300);
    // 0x8022CAB0: sh          $v1, 0x4E($s3)
    MEM_H(0X4E, ctx->r19) = ctx->r3;
    // 0x8022CAB4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022CAB8: sb          $v1, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r3;
    // 0x8022CABC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022CAC0: jal         0x8002A33C
    // 0x8022CAC4: sh          $v0, 0x48($s3)
    MEM_H(0X48, ctx->r19) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8022CAC4: sh          $v0, 0x48($s3)
    MEM_H(0X48, ctx->r19) = ctx->r2;
    after_10:
    // 0x8022CAC8: addiu       $a0, $s3, 0x1C
    ctx->r4 = ADD32(ctx->r19, 0X1C);
L_8022CACC:
    // 0x8022CACC: jal         0x8004DD04
    // 0x8022CAD0: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_11;
    // 0x8022CAD0: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_11:
    // 0x8022CAD4: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022CAD8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022CADC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022CAE0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022CAE4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022CAE8: jr          $ra
    // 0x8022CAEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022CAEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80226FA4_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226FA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226FAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226FB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226FB4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226FB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226FBC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80226FC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226FC4: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x80226FC8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80226FCC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226FD0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226FD4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80226FD8: addiu       $v1, $v1, -0x110
    ctx->r3 = ADD32(ctx->r3, -0X110);
    // 0x80226FDC: jal         0x802293F4
    // 0x80226FE0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_802293F4_ovl9(rdram, ctx);
        goto after_0;
    // 0x80226FE0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x80226FE4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226FE8: beq         $v0, $zero, L_802270F8
    if (ctx->r2 == 0) {
        // 0x80226FEC: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_802270F8;
    }
    // 0x80226FEC: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80226FF0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80226FF4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226FF8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226FFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227000: jal         0x8009A3B4
    // 0x80227004: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80227004: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227008: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022700C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80227010: jal         0x8009A3B4
    // 0x80227014: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80227014: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80227018: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022701C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80227020: jal         0x8009A3B4
    // 0x80227024: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80227024: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80227028: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022702C: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80227030: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227034: beq         $v0, $zero, L_80227044
    if (ctx->r2 == 0) {
        // 0x80227038: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80227044;
    }
    // 0x80227038: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022703C: jal         0x8022925C
    // 0x80227040: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022925C_ovl9(rdram, ctx);
        goto after_4;
    // 0x80227040: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80227044:
    // 0x80227044: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227048: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022704C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227050: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227054: lw          $v0, 0x458($at)
    ctx->r2 = MEM_W(ctx->r1, 0X458);
    // 0x80227058: jalr        $v0
    // 0x8022705C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022705C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80227060: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227064: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80227068: bne         $v0, $zero, L_80227084
    if (ctx->r2 != 0) {
        // 0x8022706C: nop
    
            goto L_80227084;
    }
    // 0x8022706C: nop

    // 0x80227070: jal         0x8003E934
    // 0x80227074: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80227074: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80227078: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022707C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227080: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80227084:
    // 0x80227084: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80227088: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022708C: beq         $v0, $a1, L_802270A4
    if (ctx->r2 == ctx->r5) {
        // 0x80227090: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802270A4;
    }
    // 0x80227090: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227094: jal         0x80050294
    // 0x80227098: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80227098: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022709C: j           L_802270AC
    // 0x802270A0: nop

        goto L_802270AC;
    // 0x802270A0: nop

L_802270A4:
    // 0x802270A4: jal         0x8005044C
    // 0x802270A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x802270A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_802270AC:
    // 0x802270AC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802270B0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802270B4: beq         $v0, $zero, L_802270D0
    if (ctx->r2 == 0) {
        // 0x802270B8: nop
    
            goto L_802270D0;
    }
    // 0x802270B8: nop

    // 0x802270BC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x802270C0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x802270C4: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x802270C8: jal         0x8003B564
    // 0x802270CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x802270CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_802270D0:
    // 0x802270D0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802270D4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802270D8: beq         $v0, $zero, L_802270E8
    if (ctx->r2 == 0) {
        // 0x802270DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802270E8;
    }
    // 0x802270DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802270E0: j           L_802270EC
    // 0x802270E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_802270EC;
    // 0x802270E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802270E8:
    // 0x802270E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_802270EC:
    // 0x802270EC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802270F0: jal         0x80047284
    // 0x802270F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x802270F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_802270F8:
    // 0x802270F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802270FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227100: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227104: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227108: jr          $ra
    // 0x8022710C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022710C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229368_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229368: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022936C: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x80229370: beq         $a0, $v0, L_80229394
    if (ctx->r4 == ctx->r2) {
        // 0x80229374: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_80229394;
    }
    // 0x80229374: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x80229378: bne         $v0, $zero, L_802293A0
    if (ctx->r2 != 0) {
        // 0x8022937C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802293A0;
    }
    // 0x8022937C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229380: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x80229384: beq         $v0, $zero, L_8022939C
    if (ctx->r2 == 0) {
        // 0x80229388: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_8022939C;
    }
    // 0x80229388: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x8022938C: bne         $v0, $zero, L_802293A0
    if (ctx->r2 != 0) {
        // 0x80229390: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802293A0;
    }
    // 0x80229390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229394:
    // 0x80229394: j           L_802293A0
    // 0x80229398: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_802293A0;
    // 0x80229398: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022939C:
    // 0x8022939C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802293A0:
    // 0x802293A0: jr          $ra
    // 0x802293A4: nop

    TRACE_RETURN()
    return;
    // 0x802293A4: nop

;}
RECOMP_FUNC void func_80226D0C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226D10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226D14: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226D18: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80226D1C: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80226D20: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80226D24: lw          $v1, -0x1340($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1340);
    // 0x80226D28: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x80226D2C: srlv        $v0, $v0, $a0
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r4 & 31));
    // 0x80226D30: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226D34: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80226D38: beq         $v1, $zero, L_80226DC8
    if (ctx->r3 == 0) {
        // 0x80226D3C: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80226DC8;
    }
    // 0x80226D3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226D40: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80226D44: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80226D48: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80226D4C: lw          $s0, 0xC80($s0)
    ctx->r16 = MEM_W(ctx->r16, 0XC80);
    // 0x80226D50: jal         0x8004DA68
    // 0x80226D54: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x80226D54: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    after_0:
    // 0x80226D58: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226D5C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80226D60: beq         $v1, $v0, L_80226D70
    if (ctx->r3 == ctx->r2) {
        // 0x80226D64: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_80226D70;
    }
    // 0x80226D64: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80226D68: bne         $v1, $v0, L_80226DAC
    if (ctx->r3 != ctx->r2) {
        // 0x80226D6C: lui         $v0, 0x8000
        ctx->r2 = S32(0X8000 << 16);
            goto L_80226DAC;
    }
    // 0x80226D6C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_80226D70:
    // 0x80226D70: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80226D74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226D78: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226D7C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226D80: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x80226D84: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80226D88: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226D8C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226D90: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80226D94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226D98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226D9C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80226DA0: jalr        $v0
    // 0x80226DA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80226DA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226DA8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_80226DAC:
    // 0x80226DAC: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80226DB0: lw          $v1, -0x1340($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1340);
    // 0x80226DB4: srlv        $v0, $v0, $s1
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r17 & 31));
    // 0x80226DB8: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80226DBC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80226DC0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226DC4: sw          $v1, -0x1340($at)
    MEM_W(-0X1340, ctx->r1) = ctx->r3;
L_80226DC8:
    // 0x80226DC8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226DCC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226DD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226DD4: jr          $ra
    // 0x80226DD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226DD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80226DDC: nop

;}
RECOMP_FUNC void func_80227464_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227468: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022746C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227474: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227478: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022747C: jal         0x8004DA90
    // 0x80227480: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80227480: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80227484: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x80227488: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022748C: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x80227490: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227494: bne         $v0, $zero, L_802274CC
    if (ctx->r2 != 0) {
        // 0x80227498: nop
    
            goto L_802274CC;
    }
    // 0x80227498: nop

    // 0x8022749C: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x802274A0: beq         $v0, $zero, L_802274B4
    if (ctx->r2 == 0) {
        // 0x802274A4: nop
    
            goto L_802274B4;
    }
    // 0x802274A4: nop

    // 0x802274A8: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802274AC: j           L_802274BC
    // 0x802274B0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_802274BC;
    // 0x802274B0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_802274B4:
    // 0x802274B4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802274B8: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_802274BC:
    // 0x802274BC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802274C0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802274C4: j           L_8022751C
    // 0x802274C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022751C;
    // 0x802274C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802274CC:
    // 0x802274CC: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802274D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802274D4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802274D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802274DC: bne         $v0, $zero, L_802274EC
    if (ctx->r2 != 0) {
        // 0x802274E0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802274EC;
    }
    // 0x802274E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802274E4: j           L_8022751C
    // 0x802274E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022751C;
    // 0x802274E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802274EC:
    // 0x802274EC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802274F0: jal         0x802293F4
    // 0x802274F4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_802293F4_ovl9(rdram, ctx);
        goto after_1;
    // 0x802274F4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x802274F8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802274FC: beq         $v0, $zero, L_80227520
    if (ctx->r2 == 0) {
        // 0x80227500: nop
    
            goto L_80227520;
    }
    // 0x80227500: nop

    // 0x80227504: jal         0x80229358
    // 0x80227508: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229358_ovl9(rdram, ctx);
        goto after_2;
    // 0x80227508: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022750C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227510: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227514: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227518: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022751C:
    // 0x8022751C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227520:
    // 0x80227520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227524: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227528: jr          $ra
    // 0x8022752C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022752C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226294_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226298: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022629C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802262A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802262A4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802262A8: bne         $v0, $zero, L_802262D8
    if (ctx->r2 != 0) {
        // 0x802262AC: nop
    
            goto L_802262D8;
    }
    // 0x802262AC: nop

    // 0x802262B0: jal         0x80226AEC
    // 0x802262B4: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x802262B4: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_0:
    // 0x802262B8: jal         0x8006033C
    // 0x802262BC: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802262BC: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    after_1:
    // 0x802262C0: beq         $v0, $zero, L_802262D4
    if (ctx->r2 == 0) {
        // 0x802262C4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802262D4;
    }
    // 0x802262C4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802262C8: jal         0x80226D0C
    // 0x802262CC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80226D0C_ovl9(rdram, ctx);
        goto after_2;
    // 0x802262CC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x802262D0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802262D4:
    // 0x802262D4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802262D8:
    // 0x802262D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802262DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802262E0: jr          $ra
    // 0x802262E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802262E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225D20_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225D24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225D28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225D2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225D30: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225D34: bne         $v0, $zero, L_80225D54
    if (ctx->r2 != 0) {
        // 0x80225D38: nop
    
            goto L_80225D54;
    }
    // 0x80225D38: nop

    // 0x80225D3C: jal         0x80226AEC
    // 0x80225D40: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_0;
    // 0x80225D40: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x80225D44: jal         0x80226AEC
    // 0x80225D48: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    func_80226AEC_ovl9(rdram, ctx);
        goto after_1;
    // 0x80225D48: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_1:
    // 0x80225D4C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225D50: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225D54:
    // 0x80225D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225D58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225D5C: jr          $ra
    // 0x80225D60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225D60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E080_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E084: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E088: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E08C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022E090: addiu       $a0, $a0, 0x9EC
    ctx->r4 = ADD32(ctx->r4, 0X9EC);
    // 0x8022E094: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E098: jal         0x8005FA7C
    // 0x8022E09C: nop

    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8022E09C: nop

    after_0:
    // 0x8022E0A0: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x8022E0A4: andi        $v1, $v1, 0xDF
    ctx->r3 = ctx->r3 & 0XDF;
    // 0x8022E0A8: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    // 0x8022E0AC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022E0B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E0B4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E0B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E0BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E0C0: jr          $ra
    // 0x8022E0C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E0C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227DF0_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227DF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227DF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227DF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227DFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227E00: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80227E04: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227E08: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227E0C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227E10: bne         $v0, $zero, L_80227E64
    if (ctx->r2 != 0) {
        // 0x80227E14: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80227E64;
    }
    // 0x80227E14: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80227E18: jal         0x802293F4
    // 0x80227E1C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_802293F4_ovl9(rdram, ctx);
        goto after_0;
    // 0x80227E1C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80227E20: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227E24: beq         $v0, $zero, L_80227E60
    if (ctx->r2 == 0) {
        // 0x80227E28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227E60;
    }
    // 0x80227E28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E2C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227E30: jal         0x80229368
    // 0x80227E34: nop

    func_80229368_ovl9(rdram, ctx);
        goto after_1;
    // 0x80227E34: nop

    after_1:
    // 0x80227E38: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227E3C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227E40: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80227E44: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227E48: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227E4C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227E50: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80227E54: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227E58: j           L_80227E64
    // 0x80227E5C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_80227E64;
    // 0x80227E5C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_80227E60:
    // 0x80227E60: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227E64:
    // 0x80227E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227E68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227E6C: jr          $ra
    // 0x80227E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802282C4_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802282C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802282CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802282D0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802282D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802282D8: jal         0x802293F4
    // 0x802282DC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_802293F4_ovl9(rdram, ctx);
        goto after_0;
    // 0x802282DC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x802282E0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802282E4: beq         $v0, $zero, L_80228310
    if (ctx->r2 == 0) {
        // 0x802282E8: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80228310;
    }
    // 0x802282E8: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x802282EC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802282F0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802282F4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802282F8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802282FC: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80228300: jal         0x80229358
    // 0x80228304: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_80229358_ovl9(rdram, ctx);
        goto after_1;
    // 0x80228304: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x80228308: j           L_80228350
    // 0x8022830C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80228350;
    // 0x8022830C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228310:
    // 0x80228310: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80228314: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228318: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022831C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228320: bne         $v0, $zero, L_80228330
    if (ctx->r2 != 0) {
        // 0x80228324: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228330;
    }
    // 0x80228324: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228328: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022832C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228330:
    // 0x80228330: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228334: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228338: jal         0x8004DA90
    // 0x8022833C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022833C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80228340: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228344: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80228348: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022834C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228350:
    // 0x80228350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228354: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228358: jr          $ra
    // 0x8022835C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022835C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CE08_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE08: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022CE0C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022CE10: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CE14: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022CE18: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022CE1C: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022CE20: beq         $v0, $zero, L_8022CE74
    if (ctx->r2 == 0) {
        // 0x8022CE24: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022CE74;
    }
    // 0x8022CE24: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CE28: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022CE2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE30: jal         0x8002C678
    // 0x8022CE34: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8022CE34: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022CE38: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022CE3C: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x8022CE40: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8022CE44: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8022CE48: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022CE4C: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8022CE50: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022CE54: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022CE58: mfhi        $a2
    ctx->r6 = hi;
    // 0x8022CE5C: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8022CE60: nop

    // 0x8022CE64: jal         0x800319B4
    // 0x8022CE68: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8022CE68: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022CE6C: j           L_8022CE80
    // 0x8022CE70: nop

        goto L_8022CE80;
    // 0x8022CE70: nop

L_8022CE74:
    // 0x8022CE74: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022CE78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CE7C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022CE80:
    // 0x8022CE80: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022CE84: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022CE88: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022CE8C: jr          $ra
    // 0x8022CE90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022CE90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80227694_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227694: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227698: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022769C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802276A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802276A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802276A8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802276AC: bgez        $v0, L_802276D0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802276B0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802276D0;
    }
    // 0x802276B0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802276B4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802276B8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802276BC: beq         $a0, $v0, L_802276D0
    if (ctx->r4 == ctx->r2) {
        // 0x802276C0: nop
    
            goto L_802276D0;
    }
    // 0x802276C0: nop

    // 0x802276C4: jal         0x80229358
    // 0x802276C8: nop

    func_80229358_ovl9(rdram, ctx);
        goto after_0;
    // 0x802276C8: nop

    after_0:
    // 0x802276CC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802276D0:
    // 0x802276D0: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802276D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802276D8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x802276DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802276E0: bne         $v0, $zero, L_8022774C
    if (ctx->r2 != 0) {
        // 0x802276E4: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022774C;
    }
    // 0x802276E4: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802276E8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802276EC: bne         $a0, $v0, L_80227704
    if (ctx->r4 != ctx->r2) {
        // 0x802276F0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80227704;
    }
    // 0x802276F0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802276F4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802276F8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802276FC: j           L_8022771C
    // 0x80227700: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022771C;
    // 0x80227700: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227704:
    // 0x80227704: jal         0x80229368
    // 0x80227708: nop

    func_80229368_ovl9(rdram, ctx);
        goto after_1;
    // 0x80227708: nop

    after_1:
    // 0x8022770C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227710: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227714: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227718: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022771C:
    // 0x8022771C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80227720: beq         $v0, $zero, L_80227734
    if (ctx->r2 == 0) {
        // 0x80227724: nop
    
            goto L_80227734;
    }
    // 0x80227724: nop

    // 0x80227728: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022772C: j           L_80227744
    // 0x80227730: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_80227744;
    // 0x80227730: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80227734:
    // 0x80227734: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80227738: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022773C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227740: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80227744:
    // 0x80227744: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x80227748: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_8022774C:
    // 0x8022774C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227750: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227754: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227758: jr          $ra
    // 0x8022775C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022775C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CE94_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CE98: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CE9C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CEA0: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022CEA4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CEA8: jal         0x8003E6BC
    // 0x8022CEAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8022CEAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022CEB0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022CEB4: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8022CEB8: jal         0x8003E6BC
    // 0x8022CEBC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8022CEBC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022CEC0: bne         $s0, $v0, L_8022CEE8
    if (ctx->r16 != ctx->r2) {
        // 0x8022CEC4: nop
    
            goto L_8022CEE8;
    }
    // 0x8022CEC4: nop

    // 0x8022CEC8: jal         0x8006033C
    // 0x8022CECC: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022CECC: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x8022CED0: bne         $v0, $zero, L_8022CEE8
    if (ctx->r2 != 0) {
        // 0x8022CED4: nop
    
            goto L_8022CEE8;
    }
    // 0x8022CED4: nop

    // 0x8022CED8: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022CEDC: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8022CEE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CEE4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022CEE8:
    // 0x8022CEE8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CEEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CEF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CEF4: jr          $ra
    // 0x8022CEF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CEF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022731C_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022731C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227320: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227324: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227328: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022732C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227330: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227334: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227338: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x8022733C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227340: addiu       $v0, $v0, 0x4F8
    ctx->r2 = ADD32(ctx->r2, 0X4F8);
    // 0x80227344: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x80227348: jal         0x800A3450
    // 0x8022734C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022734C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80227350: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227354: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80227358: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x8022735C: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80227360: addiu       $s0, $s0, 0x538
    ctx->r16 = ADD32(ctx->r16, 0X538);
    // 0x80227364: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80227368: beq         $v1, $zero, L_80227384
    if (ctx->r3 == 0) {
        // 0x8022736C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80227384;
    }
    // 0x8022736C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80227370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227374: beq         $v1, $v0, L_802273A4
    if (ctx->r3 == ctx->r2) {
        // 0x80227378: nop
    
            goto L_802273A4;
    }
    // 0x80227378: nop

    // 0x8022737C: j           L_802273B8
    // 0x80227380: nop

        goto L_802273B8;
    // 0x80227380: nop

L_80227384:
    // 0x80227384: jal         0x80229368
    // 0x80227388: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_80229368_ovl9(rdram, ctx);
        goto after_1;
    // 0x80227388: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x8022738C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227390: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227394: jal         0x802293A8
    // 0x80227398: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_802293A8_ovl9(rdram, ctx);
        goto after_2;
    // 0x80227398: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022739C: j           L_80227410
    // 0x802273A0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_80227410;
    // 0x802273A0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_802273A4:
    // 0x802273A4: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x802273A8: jal         0x80229358
    // 0x802273AC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_80229358_ovl9(rdram, ctx);
        goto after_3;
    // 0x802273AC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x802273B0: j           L_80227410
    // 0x802273B4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_80227410;
    // 0x802273B4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_802273B8:
    // 0x802273B8: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x802273BC: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x802273C0: bne         $v1, $v0, L_802273D0
    if (ctx->r3 != ctx->r2) {
        // 0x802273C4: nop
    
            goto L_802273D0;
    }
    // 0x802273C4: nop

    // 0x802273C8: j           L_80227410
    // 0x802273CC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_80227410;
    // 0x802273CC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_802273D0:
    // 0x802273D0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x802273D4: jal         0x80229368
    // 0x802273D8: nop

    func_80229368_ovl9(rdram, ctx);
        goto after_4;
    // 0x802273D8: nop

    after_4:
    // 0x802273DC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802273E0: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x802273E4: beq         $v0, $zero, L_802273F8
    if (ctx->r2 == 0) {
        // 0x802273E8: nop
    
            goto L_802273F8;
    }
    // 0x802273E8: nop

    // 0x802273EC: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x802273F0: j           L_80227408
    // 0x802273F4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_80227408;
    // 0x802273F4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_802273F8:
    // 0x802273F8: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x802273FC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227400: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227404: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80227408:
    // 0x80227408: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022740C: addiu       $s0, $s0, 0x558
    ctx->r16 = ADD32(ctx->r16, 0X558);
L_80227410:
    // 0x80227410: jal         0x800A3450
    // 0x80227414: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80227414: nop

    after_5:
    // 0x80227418: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022741C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80227420: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227424: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80227428: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022742C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227430: beq         $v1, $v0, L_80227448
    if (ctx->r3 == ctx->r2) {
        // 0x80227434: nop
    
            goto L_80227448;
    }
    // 0x80227434: nop

    // 0x80227438: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022743C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227440: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80227444: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80227448:
    // 0x80227448: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022744C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227450: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227454: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227458: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022745C: jr          $ra
    // 0x80227460: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227460: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227760_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227764: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227768: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022776C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227770: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80227774: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227778: jal         0x8004FA7C
    // 0x8022777C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022777C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80227780: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227784: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227788: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022778C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227790: bne         $v0, $zero, L_802277F4
    if (ctx->r2 != 0) {
        // 0x80227794: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802277F4;
    }
    // 0x80227794: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80227798: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x8022779C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802277A0: beq         $v1, $zero, L_802277E4
    if (ctx->r3 == 0) {
        // 0x802277A4: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_802277E4;
    }
    // 0x802277A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802277A8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802277AC: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x802277B0: jal         0x8009A3B4
    // 0x802277B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802277B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802277B8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802277BC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802277C0: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x802277C4: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x802277C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802277CC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802277D0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802277D4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802277D8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802277DC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x802277E0: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_802277E4:
    // 0x802277E4: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x802277E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802277EC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802277F0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_802277F4:
    // 0x802277F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802277F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802277FC: jr          $ra
    // 0x80227800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227298_ovl9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022729C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802272A0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802272A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802272A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802272AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802272B0: lw          $v0, 0x4CC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4CC);
    // 0x802272B4: jalr        $v0
    // 0x802272B8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802272B8: nop

    after_0:
    // 0x802272BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802272C0: jr          $ra
    // 0x802272C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802272C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
