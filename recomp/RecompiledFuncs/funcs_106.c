#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802266E4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266E4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x802266E8: bne         $a0, $zero, L_80226780
    if (ctx->r4 != 0) {
        // 0x802266EC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80226780;
    }
    // 0x802266EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802266F0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802266F4: lh          $v1, -0x6220($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X6220);
    // 0x802266F8: slti        $v0, $v1, -0x1
    ctx->r2 = SIGNED(ctx->r3) < -0X1 ? 1 : 0;
    // 0x802266FC: bne         $v0, $zero, L_80226710
    if (ctx->r2 != 0) {
        // 0x80226700: slti        $v0, $v1, -0x3C
        ctx->r2 = SIGNED(ctx->r3) < -0X3C ? 1 : 0;
            goto L_80226710;
    }
    // 0x80226700: slti        $v0, $v1, -0x3C
    ctx->r2 = SIGNED(ctx->r3) < -0X3C ? 1 : 0;
    // 0x80226704: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226708: j           L_80226740
    // 0x8022670C: sh          $zero, -0x621E($at)
    MEM_H(-0X621E, ctx->r1) = 0;
        goto L_80226740;
    // 0x8022670C: sh          $zero, -0x621E($at)
    MEM_H(-0X621E, ctx->r1) = 0;
L_80226710:
    // 0x80226710: bne         $v0, $zero, L_80226720
    if (ctx->r2 != 0) {
        // 0x80226714: slti        $v0, $v1, -0xB4
        ctx->r2 = SIGNED(ctx->r3) < -0XB4 ? 1 : 0;
            goto L_80226720;
    }
    // 0x80226714: slti        $v0, $v1, -0xB4
    ctx->r2 = SIGNED(ctx->r3) < -0XB4 ? 1 : 0;
    // 0x80226718: j           L_80226738
    // 0x8022671C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80226738;
    // 0x8022671C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80226720:
    // 0x80226720: bne         $v0, $zero, L_80226730
    if (ctx->r2 != 0) {
        // 0x80226724: slti        $v0, $v1, -0x168
        ctx->r2 = SIGNED(ctx->r3) < -0X168 ? 1 : 0;
            goto L_80226730;
    }
    // 0x80226724: slti        $v0, $v1, -0x168
    ctx->r2 = SIGNED(ctx->r3) < -0X168 ? 1 : 0;
    // 0x80226728: j           L_80226738
    // 0x8022672C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80226738;
    // 0x8022672C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80226730:
    // 0x80226730: bne         $v0, $zero, L_80226740
    if (ctx->r2 != 0) {
        // 0x80226734: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80226740;
    }
    // 0x80226734: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80226738:
    // 0x80226738: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022673C: sh          $v0, -0x621E($at)
    MEM_H(-0X621E, ctx->r1) = ctx->r2;
L_80226740:
    // 0x80226740: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226744: lh          $v0, -0x621E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X621E);
    // 0x80226748: blez        $v0, L_8022676C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022674C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022676C;
    }
    // 0x8022674C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226750: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226754: lhu         $v0, -0x6220($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X6220);
    // 0x80226758: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022675C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226760: sh          $v0, -0x6220($at)
    MEM_H(-0X6220, ctx->r1) = ctx->r2;
    // 0x80226764: j           L_802267F4
    // 0x80226768: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
        goto L_802267F4;
    // 0x80226768: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_8022676C:
    // 0x8022676C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226770: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226774: sh          $v0, -0x6220($at)
    MEM_H(-0X6220, ctx->r1) = ctx->r2;
    // 0x80226778: j           L_802267F0
    // 0x8022677C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_802267F0;
    // 0x8022677C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80226780:
    // 0x80226780: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226784: lh          $v1, -0x6220($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X6220);
    // 0x80226788: slti        $v0, $v1, -0x169
    ctx->r2 = SIGNED(ctx->r3) < -0X169 ? 1 : 0;
    // 0x8022678C: bne         $v0, $zero, L_802267B4
    if (ctx->r2 != 0) {
        // 0x80226790: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802267B4;
    }
    // 0x80226790: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226794: slti        $v0, $v1, -0xB5
    ctx->r2 = SIGNED(ctx->r3) < -0XB5 ? 1 : 0;
    // 0x80226798: bne         $v0, $zero, L_802267B4
    if (ctx->r2 != 0) {
        // 0x8022679C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802267B4;
    }
    // 0x8022679C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802267A0: slti        $v0, $v1, -0x3D
    ctx->r2 = SIGNED(ctx->r3) < -0X3D ? 1 : 0;
    // 0x802267A4: bne         $v0, $zero, L_802267B4
    if (ctx->r2 != 0) {
        // 0x802267A8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802267B4;
    }
    // 0x802267A8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802267AC: bgez        $v1, L_802267BC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802267B0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802267BC;
    }
    // 0x802267B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802267B4:
    // 0x802267B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802267B8: sh          $v0, -0x621E($at)
    MEM_H(-0X621E, ctx->r1) = ctx->r2;
L_802267BC:
    // 0x802267BC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802267C0: lh          $v0, -0x6220($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X6220);
    // 0x802267C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802267C8: slti        $v0, $v0, -0x258
    ctx->r2 = SIGNED(ctx->r2) < -0X258 ? 1 : 0;
    // 0x802267CC: bnel        $v0, $zero, L_802267F0
    if (ctx->r2 != 0) {
        // 0x802267D0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802267F0;
    }
    goto skip_0;
    // 0x802267D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_0:
    // 0x802267D4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802267D8: lhu         $v0, -0x621E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X621E);
    // 0x802267DC: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802267E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802267E4: sh          $v0, -0x6220($at)
    MEM_H(-0X6220, ctx->r1) = ctx->r2;
    // 0x802267E8: j           L_802267F4
    // 0x802267EC: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
        goto L_802267F4;
    // 0x802267EC: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_802267F0:
    // 0x802267F0: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_802267F4:
    // 0x802267F4: jr          $ra
    // 0x802267F8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x802267F8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_802319A8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802319A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802319AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802319B0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802319B4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802319B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802319BC: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x802319C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802319C4: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802319C8: beq         $v1, $v0, L_80231A10
    if (ctx->r3 == ctx->r2) {
        // 0x802319CC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80231A10;
    }
    // 0x802319CC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802319D0: beql        $v0, $zero, L_802319E8
    if (ctx->r2 == 0) {
        // 0x802319D4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802319E8;
    }
    goto skip_0;
    // 0x802319D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802319D8: beq         $v1, $zero, L_80231A00
    if (ctx->r3 == 0) {
        // 0x802319DC: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80231A00;
    }
    // 0x802319DC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802319E0: j           L_80231A90
    // 0x802319E4: nop

        goto L_80231A90;
    // 0x802319E4: nop

L_802319E8:
    // 0x802319E8: beq         $v1, $v0, L_80231A2C
    if (ctx->r3 == ctx->r2) {
        // 0x802319EC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80231A2C;
    }
    // 0x802319EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802319F0: beq         $v1, $v0, L_80231A78
    if (ctx->r3 == ctx->r2) {
        // 0x802319F4: nop
    
            goto L_80231A78;
    }
    // 0x802319F4: nop

    // 0x802319F8: j           L_80231A90
    // 0x802319FC: nop

        goto L_80231A90;
    // 0x802319FC: nop

L_80231A00:
    // 0x80231A00: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80231A04: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80231A08: j           L_80231A90
    // 0x80231A0C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_80231A90;
    // 0x80231A0C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_80231A10:
    // 0x80231A10: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x80231A14: bgez        $v0, L_80231A90
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231A18: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80231A90;
    }
    // 0x80231A18: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80231A1C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80231A20: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231A24: j           L_80231A90
    // 0x80231A28: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_80231A90;
    // 0x80231A28: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_80231A2C:
    // 0x80231A2C: lb          $v0, 0xA6($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA6);
    // 0x80231A30: beq         $v0, $zero, L_80231A58
    if (ctx->r2 == 0) {
        // 0x80231A34: addiu       $a0, $zero, 0x151
        ctx->r4 = ADD32(0, 0X151);
            goto L_80231A58;
    }
    // 0x80231A34: addiu       $a0, $zero, 0x151
    ctx->r4 = ADD32(0, 0X151);
    // 0x80231A38: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80231A3C: jal         0x8002A33C
    // 0x80231A40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80231A40: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80231A44: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80231A48: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x80231A4C: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x80231A50: jal         0x8003491C
    // 0x80231A54: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_1;
    // 0x80231A54: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
L_80231A58:
    // 0x80231A58: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x80231A5C: bgez        $v0, L_80231A90
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231A60: addiu       $v1, $zero, 0xB
        ctx->r3 = ADD32(0, 0XB);
            goto L_80231A90;
    }
    // 0x80231A60: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x80231A64: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80231A68: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    // 0x80231A6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231A70: j           L_80231A90
    // 0x80231A74: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80231A90;
    // 0x80231A74: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80231A78:
    // 0x80231A78: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x80231A7C: bgez        $v0, L_80231A90
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231A80: nop
    
            goto L_80231A90;
    }
    // 0x80231A80: nop

    // 0x80231A84: lhu         $v0, 0x440($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X440);
    // 0x80231A88: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80231A8C: sh          $v0, 0x440($s1)
    MEM_H(0X440, ctx->r17) = ctx->r2;
L_80231A90:
    // 0x80231A90: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231A94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231A98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231A9C: jr          $ra
    // 0x80231AA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231AA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B6B0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B6B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B6B4: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022B6B8: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022B6BC: beq         $a0, $v0, L_8022B724
    if (ctx->r4 == ctx->r2) {
        // 0x8022B6C0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022B724;
    }
    // 0x8022B6C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B6C4: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x8022B6C8: beql        $v0, $zero, L_8022B6E8
    if (ctx->r2 == 0) {
        // 0x8022B6CC: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8022B6E8;
    }
    goto skip_0;
    // 0x8022B6CC: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x8022B6D0: beq         $a0, $zero, L_8022B71C
    if (ctx->r4 == 0) {
        // 0x8022B6D4: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022B71C;
    }
    // 0x8022B6D4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022B6D8: beq         $a0, $v0, L_8022B73C
    if (ctx->r4 == ctx->r2) {
        // 0x8022B6DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B73C;
    }
    // 0x8022B6DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B6E0: j           L_8022B73C
    // 0x8022B6E4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022B73C;
    // 0x8022B6E4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022B6E8:
    // 0x8022B6E8: beq         $a0, $v0, L_8022B71C
    if (ctx->r4 == ctx->r2) {
        // 0x8022B6EC: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_8022B71C;
    }
    // 0x8022B6EC: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x8022B6F0: beq         $v0, $zero, L_8022B708
    if (ctx->r2 == 0) {
        // 0x8022B6F4: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_8022B708;
    }
    // 0x8022B6F4: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x8022B6F8: beq         $a0, $v0, L_8022B73C
    if (ctx->r4 == ctx->r2) {
        // 0x8022B6FC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022B73C;
    }
    // 0x8022B6FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022B700: j           L_8022B73C
    // 0x8022B704: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022B73C;
    // 0x8022B704: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022B708:
    // 0x8022B708: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x8022B70C: beq         $a0, $v0, L_8022B72C
    if (ctx->r4 == ctx->r2) {
        // 0x8022B710: nop
    
            goto L_8022B72C;
    }
    // 0x8022B710: nop

    // 0x8022B714: j           L_8022B73C
    // 0x8022B718: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022B73C;
    // 0x8022B718: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022B71C:
    // 0x8022B71C: j           L_8022B73C
    // 0x8022B720: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022B73C;
    // 0x8022B720: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022B724:
    // 0x8022B724: j           L_8022B73C
    // 0x8022B728: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8022B73C;
    // 0x8022B728: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022B72C:
    // 0x8022B72C: jal         0x800A3450
    // 0x8022B730: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022B730: nop

    after_0:
    // 0x8022B734: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022B738: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_8022B73C:
    // 0x8022B73C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B740: jr          $ra
    // 0x8022B744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CA6C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CA6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CA70: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CA74: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022CA78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CA7C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022CA80: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CA84: lw          $v0, -0x6A30($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6A30);
    // 0x8022CA88: jalr        $v0
    // 0x8022CA8C: addiu       $a1, $a0, 0x88
    ctx->r5 = ADD32(ctx->r4, 0X88);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022CA8C: addiu       $a1, $a0, 0x88
    ctx->r5 = ADD32(ctx->r4, 0X88);
    after_0:
    // 0x8022CA90: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CA94: jr          $ra
    // 0x8022CA98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CA98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802279E0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802279E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802279E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802279EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802279F0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802279F4: beq         $v1, $zero, L_80227A0C
    if (ctx->r3 == 0) {
        // 0x802279F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227A0C;
    }
    // 0x802279F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802279FC: beq         $v1, $v0, L_80227A60
    if (ctx->r3 == ctx->r2) {
        // 0x80227A00: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80227A60;
    }
    // 0x80227A00: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227A04: j           L_80227A80
    // 0x80227A08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80227A80;
    // 0x80227A08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227A0C:
    // 0x80227A0C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227A10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227A18: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227A1C: jal         0x8004D5D4
    // 0x80227A20: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227A20: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227A24: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80227A28: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227A2C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227A30: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227A34: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227A38: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227A3C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227A40: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80227A44: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227A48: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227A4C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80227A50: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80227A54: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227A58: j           L_80227A7C
    // 0x80227A5C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_80227A7C;
    // 0x80227A5C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80227A60:
    // 0x80227A60: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80227A64: bne         $v1, $v0, L_80227A80
    if (ctx->r3 != ctx->r2) {
        // 0x80227A68: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227A80;
    }
    // 0x80227A68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A6C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80227A70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227A74: jal         0x8004DA90
    // 0x80227A78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80227A78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_80227A7C:
    // 0x80227A7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227A80:
    // 0x80227A80: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80227A84: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80227A88: jal         0x8003B564
    // 0x80227A8C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_2;
    // 0x80227A8C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80227A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227A94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227A98: jr          $ra
    // 0x80227A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802260C0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802260C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802260C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802260CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802260D0: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x802260D4: beq         $v1, $zero, L_802260EC
    if (ctx->r3 == 0) {
        // 0x802260D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802260EC;
    }
    // 0x802260D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802260DC: beq         $v1, $v0, L_80226140
    if (ctx->r3 == ctx->r2) {
        // 0x802260E0: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80226140;
    }
    // 0x802260E0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802260E4: j           L_802261AC
    // 0x802260E8: nop

        goto L_802261AC;
    // 0x802260E8: nop

L_802260EC:
    // 0x802260EC: jal         0x8005FB90
    // 0x802260F0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x802260F0: nop

    after_0:
    // 0x802260F4: jal         0x80036B7C
    // 0x802260F8: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_1;
    // 0x802260F8: nop

    after_1:
    // 0x802260FC: beq         $v0, $zero, L_802261AC
    if (ctx->r2 == 0) {
        // 0x80226100: nop
    
            goto L_802261AC;
    }
    // 0x80226100: nop

    // 0x80226104: jal         0x8004A1AC
    // 0x80226108: nop

    func_8004A1AC_255AC(rdram, ctx);
        goto after_2;
    // 0x80226108: nop

    after_2:
    // 0x8022610C: jal         0x80060170
    // 0x80226110: nop

    func_80060170_3B570(rdram, ctx);
        goto after_3;
    // 0x80226110: nop

    after_3:
    // 0x80226114: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226118: addiu       $v0, $v0, -0x75FC
    ctx->r2 = ADD32(ctx->r2, -0X75FC);
    // 0x8022611C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226120: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226124: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226128: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022612C: addiu       $v1, $v1, -0x72F4
    ctx->r3 = ADD32(ctx->r3, -0X72F4);
    // 0x80226130: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
    // 0x80226134: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226138: j           L_802261AC
    // 0x8022613C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_802261AC;
    // 0x8022613C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80226140:
    // 0x80226140: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80226144: beq         $v1, $v0, L_80226194
    if (ctx->r3 == ctx->r2) {
        // 0x80226148: nop
    
            goto L_80226194;
    }
    // 0x80226148: nop

    // 0x8022614C: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80226150: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226154: jalr        $v0
    // 0x80226158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80226158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022615C: jal         0x8006072C
    // 0x80226160: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_5;
    // 0x80226160: nop

    after_5:
    // 0x80226164: beq         $v0, $zero, L_802261A4
    if (ctx->r2 == 0) {
        // 0x80226168: nop
    
            goto L_802261A4;
    }
    // 0x80226168: nop

    // 0x8022616C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80226170: andi        $v0, $a0, 0x80
    ctx->r2 = ctx->r4 & 0X80;
    // 0x80226174: bne         $v0, $zero, L_802261A4
    if (ctx->r2 != 0) {
        // 0x80226178: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_802261A4;
    }
    // 0x80226178: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
    // 0x8022617C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80226180: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226184: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226188: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022618C: j           L_802261A4
    // 0x80226190: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
        goto L_802261A4;
    // 0x80226190: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
L_80226194:
    // 0x80226194: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226198: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022619C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802261A0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802261A4:
    // 0x802261A4: jal         0x8005FB90
    // 0x802261A8: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_6;
    // 0x802261A8: nop

    after_6:
L_802261AC:
    // 0x802261AC: jal         0x80060018
    // 0x802261B0: nop

    func_80060018_3B418(rdram, ctx);
        goto after_7;
    // 0x802261B0: nop

    after_7:
    // 0x802261B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802261B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802261BC: jr          $ra
    // 0x802261C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802261C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F9CC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F9CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F9D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F9D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F9D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F9DC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F9E0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F9E4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022F9E8: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x8022F9EC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022F9F0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022F9F4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022F9F8: jal         0x800A3450
    // 0x8022F9FC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022F9FC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022FA00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FA04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FA08: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022FA0C: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022FA10: jal         0x8004D5D4
    // 0x8022FA14: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022FA14: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022FA18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FA1C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022FA20: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022FA24: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022FA28: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022FA2C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022FA30: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022FA34: jal         0x8003E934
    // 0x8022FA38: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022FA38: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_2:
    // 0x8022FA3C: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x8022FA40: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022FA44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022FA48: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x8022FA4C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022FA50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FA54: jal         0x8009A3B4
    // 0x8022FA58: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022FA58: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022FA5C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022FA60: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022FA64: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022FA68: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022FA6C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022FA70: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022FA74: jal         0x800A3450
    // 0x8022FA78: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022FA78: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    after_4:
    // 0x8022FA7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FA80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FA84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FA88: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022FA8C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022FA90: jal         0x80050294
    // 0x8022FA94: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022FA94: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022FA98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FA9C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022FAA0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022FAA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FAA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FAAC: jr          $ra
    // 0x8022FAB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FAB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225510_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225510: jr          $ra
    // 0x80225514: nop

    TRACE_RETURN()
    return;
    // 0x80225514: nop

;}
RECOMP_FUNC void func_80225378_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225378: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022537C: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225380: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225384: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022538C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225390: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225394: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225398: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022539C: lw          $v1, 0x7F4C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X7F4C);
    // 0x802253A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802253A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802253A8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802253AC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802253B0: jalr        $v0
    // 0x802253B4: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802253B4: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x802253B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802253BC: jr          $ra
    // 0x802253C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232C18_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232C18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232C1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232C20: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232C24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80232C28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80232C2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232C30: addiu       $s0, $s1, 0x440
    ctx->r16 = ADD32(ctx->r17, 0X440);
    // 0x80232C34: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x80232C38: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
L_80232C3C:
    // 0x80232C3C: lw          $v0, 0xE8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XE8);
    // 0x80232C40: bnel        $v0, $zero, L_80232C48
    if (ctx->r2 != 0) {
        // 0x80232C44: sb          $a1, 0xA($v0)
        MEM_B(0XA, ctx->r2) = ctx->r5;
            goto L_80232C48;
    }
    goto skip_0;
    // 0x80232C44: sb          $a1, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r5;
    skip_0:
L_80232C48:
    // 0x80232C48: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80232C4C: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80232C50: bne         $v0, $zero, L_80232C3C
    if (ctx->r2 != 0) {
        // 0x80232C54: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80232C3C;
    }
    // 0x80232C54: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80232C58: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x80232C5C: beq         $a0, $zero, L_80232C6C
    if (ctx->r4 == 0) {
        // 0x80232C60: nop
    
            goto L_80232C6C;
    }
    // 0x80232C60: nop

    // 0x80232C64: jal         0x8004F4F8
    // 0x80232C68: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80232C68: nop

    after_0:
L_80232C6C:
    // 0x80232C6C: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    // 0x80232C70: beq         $a0, $zero, L_80232C80
    if (ctx->r4 == 0) {
        // 0x80232C74: nop
    
            goto L_80232C80;
    }
    // 0x80232C74: nop

    // 0x80232C78: jal         0x8004F4F8
    // 0x80232C7C: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x80232C7C: nop

    after_1:
L_80232C80:
    // 0x80232C80: jal         0x8004F488
    // 0x80232C84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_2;
    // 0x80232C84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80232C88: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232C8C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232C90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232C94: jr          $ra
    // 0x80232C98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232C98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80232C9C: nop

;}
RECOMP_FUNC void func_8023788C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023788C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237890: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237894: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237898: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023789C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802378A0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802378A4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802378A8: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802378AC: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x802378B0: beq         $v0, $zero, L_802379E8
    if (ctx->r2 == 0) {
        // 0x802378B4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802379E8;
    }
    // 0x802378B4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802378B8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802378BC: addu        $at, $at, $v0
    gpr jr_addend_802378C4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802378C0: lw          $v0, -0x6250($at)
    ctx->r2 = ADD32(ctx->r1, -0X6250);
    // 0x802378C4: jr          $v0
    // 0x802378C8: nop

    switch (jr_addend_802378C4 >> 2) {
        case 0: goto L_802378CC; break;
        case 1: goto L_802378FC; break;
        case 2: goto L_80237918; break;
        case 3: goto L_8023792C; break;
        case 4: goto L_80237954; break;
        case 5: goto L_80237974; break;
        default: switch_error(__func__, 0x802378C4, 0x80239DB0);
    }
    // 0x802378C8: nop

L_802378CC:
    // 0x802378CC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x802378D0: slti        $v0, $v0, -0x7CF
    ctx->r2 = SIGNED(ctx->r2) < -0X7CF ? 1 : 0;
    // 0x802378D4: bne         $v0, $zero, L_802379E8
    if (ctx->r2 != 0) {
        // 0x802378D8: nop
    
            goto L_802379E8;
    }
    // 0x802378D8: nop

    // 0x802378DC: jal         0x8006FF58
    // 0x802378E0: nop

    func_8006FF58_4B358(rdram, ctx);
        goto after_0;
    // 0x802378E0: nop

    after_0:
    // 0x802378E4: beq         $v0, $zero, L_802379E0
    if (ctx->r2 == 0) {
        // 0x802378E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802379E0;
    }
    // 0x802378E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802378EC: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x802378F0: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x802378F4: j           L_80237964
    // 0x802378F8: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
        goto L_80237964;
    // 0x802378F8: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
L_802378FC:
    // 0x802378FC: jal         0x8006FF84
    // 0x80237900: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_1;
    // 0x80237900: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80237904: beq         $v0, $zero, L_802379E8
    if (ctx->r2 == 0) {
        // 0x80237908: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802379E8;
    }
    // 0x80237908: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023790C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80237910: j           L_80237964
    // 0x80237914: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
        goto L_80237964;
    // 0x80237914: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80237918:
    // 0x80237918: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023791C: jal         0x800616FC
    // 0x80237920: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x80237920: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_2:
    // 0x80237924: j           L_80237964
    // 0x80237928: nop

        goto L_80237964;
    // 0x80237928: nop

L_8023792C:
    // 0x8023792C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237930: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80237934: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80237938: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023793C: bne         $v0, $zero, L_802379E8
    if (ctx->r2 != 0) {
        // 0x80237940: nop
    
            goto L_802379E8;
    }
    // 0x80237940: nop

    // 0x80237944: jal         0x80036E48
    // 0x80237948: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x80237948: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x8023794C: j           L_80237964
    // 0x80237950: nop

        goto L_80237964;
    // 0x80237950: nop

L_80237954:
    // 0x80237954: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237958: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023795C: bne         $v0, $zero, L_802379E8
    if (ctx->r2 != 0) {
        // 0x80237960: nop
    
            goto L_802379E8;
    }
    // 0x80237960: nop

L_80237964:
    // 0x80237964: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237968: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023796C: j           L_802379E8
    // 0x80237970: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802379E8;
    // 0x80237970: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80237974:
    // 0x80237974: jal         0x80070050
    // 0x80237978: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_4;
    // 0x80237978: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8023797C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237980: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237984: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237988: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023798C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80237990: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237994: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80237998: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023799C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802379A0: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802379A4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802379A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802379AC: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802379B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802379B4: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802379B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802379BC: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802379C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802379C4: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802379C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802379CC: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802379D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802379D4: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802379D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802379DC: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
L_802379E0:
    // 0x802379E0: jal         0x8004F62C
    // 0x802379E4: nop

    func_8004F62C_2AA2C(rdram, ctx);
        goto after_5;
    // 0x802379E4: nop

    after_5:
L_802379E8:
    // 0x802379E8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802379EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802379F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802379F4: jr          $ra
    // 0x802379F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802379F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802379FC: nop

;}
RECOMP_FUNC void func_80233CC0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233CC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233CC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233CC8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80233CCC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233CD0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233CD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233CD8: lw          $v0, -0x6718($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6718);
    // 0x80233CDC: jalr        $v0
    // 0x80233CE0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80233CE0: nop

    after_0:
    // 0x80233CE4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233CE8: jr          $ra
    // 0x80233CEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233CEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228C04_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228C08: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228C0C: jal         0x8004F418
    // 0x80228C10: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80228C10: nop

    after_0:
    // 0x80228C14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228C18: jr          $ra
    // 0x80228C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F0A8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F0A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022F0AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022F0B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F0B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022F0B8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022F0BC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022F0C0: lb          $v0, 0x36C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X36C);
    // 0x8022F0C4: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022F0C8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022F0CC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022F0D0: beq         $v0, $zero, L_8022F0E0
    if (ctx->r2 == 0) {
        // 0x8022F0D4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022F0E0;
    }
    // 0x8022F0D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F0D8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022F0DC: sb          $v0, 0x36C($s0)
    MEM_B(0X36C, ctx->r16) = ctx->r2;
L_8022F0E0:
    // 0x8022F0E0: lbu         $a0, 0x36A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022F0E4: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x8022F0E8: bne         $v0, $zero, L_8022F11C
    if (ctx->r2 != 0) {
        // 0x8022F0EC: lui         $a1, 0xFFFF
        ctx->r5 = S32(0XFFFF << 16);
            goto L_8022F11C;
    }
    // 0x8022F0EC: lui         $a1, 0xFFFF
    ctx->r5 = S32(0XFFFF << 16);
    // 0x8022F0F0: lbu         $v1, 0x36B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X36B);
    // 0x8022F0F4: bne         $v1, $zero, L_8022F108
    if (ctx->r3 != 0) {
        // 0x8022F0F8: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_8022F108;
    }
    // 0x8022F0F8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022F0FC: andi        $v0, $a0, 0xEF
    ctx->r2 = ctx->r4 & 0XEF;
    // 0x8022F100: j           L_8022F1B4
    // 0x8022F104: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
        goto L_8022F1B4;
    // 0x8022F104: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
L_8022F108:
    // 0x8022F108: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022F10C: sb          $v1, 0x36B($s0)
    MEM_B(0X36B, ctx->r16) = ctx->r3;
    // 0x8022F110: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022F114: j           L_8022F1B4
    // 0x8022F118: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
        goto L_8022F1B4;
    // 0x8022F118: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
L_8022F11C:
    // 0x8022F11C: ori         $a1, $a1, 0x7FFF
    ctx->r5 = ctx->r5 | 0X7FFF;
    // 0x8022F120: lui         $a0, 0xA1
    ctx->r4 = S32(0XA1 << 16);
    // 0x8022F124: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022F128: ori         $a0, $a0, 0x7FFE
    ctx->r4 = ctx->r4 | 0X7FFE;
    // 0x8022F12C: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8022F130: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022F134: sltu        $a0, $a0, $v1
    ctx->r4 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8022F138: bne         $a0, $zero, L_8022F1B4
    if (ctx->r4 != 0) {
        // 0x8022F13C: sb          $v0, 0x36B($s0)
        MEM_B(0X36B, ctx->r16) = ctx->r2;
            goto L_8022F1B4;
    }
    // 0x8022F13C: sb          $v0, 0x36B($s0)
    MEM_B(0X36B, ctx->r16) = ctx->r2;
    // 0x8022F140: addiu       $a0, $s2, 0xC4
    ctx->r4 = ADD32(ctx->r18, 0XC4);
    // 0x8022F144: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022F148: jal         0x8009A3B4
    // 0x8022F14C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F14C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022F150: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022F154: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022F158: jal         0x8009A3B4
    // 0x8022F15C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F15C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022F160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F164: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F168: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F16C: lhu         $v1, 0x322($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X322);
    // 0x8022F170: addiu       $a2, $s0, 0x34C
    ctx->r6 = ADD32(ctx->r16, 0X34C);
    // 0x8022F174: addiu       $a3, $s0, 0x354
    ctx->r7 = ADD32(ctx->r16, 0X354);
    // 0x8022F178: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F17C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F180: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022F184: jal         0x8004E150
    // 0x8022F188: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_2;
    // 0x8022F188: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022F18C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022F190: beq         $v0, $zero, L_8022F1B4
    if (ctx->r2 == 0) {
        // 0x8022F194: nop
    
            goto L_8022F1B4;
    }
    // 0x8022F194: nop

    // 0x8022F198: lb          $v0, 0x36C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X36C);
    // 0x8022F19C: bne         $v0, $zero, L_8022F1B4
    if (ctx->r2 != 0) {
        // 0x8022F1A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F1B4;
    }
    // 0x8022F1A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F1A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022F1A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F1AC: sb          $zero, 0x36E($s0)
    MEM_B(0X36E, ctx->r16) = 0;
    // 0x8022F1B0: sb          $v0, 0x36D($s0)
    MEM_B(0X36D, ctx->r16) = ctx->r2;
L_8022F1B4:
    // 0x8022F1B4: lbu         $v0, 0x62($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X62);
    // 0x8022F1B8: andi        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 & 0X14;
    // 0x8022F1BC: beq         $v0, $zero, L_8022F1F8
    if (ctx->r2 == 0) {
        // 0x8022F1C0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022F1F8;
    }
    // 0x8022F1C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F1C4: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F1C8: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022F1CC: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022F1D0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8022F1D4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022F1D8: jal         0x8004F820
    // 0x8022F1DC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022F1DC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_3:
    // 0x8022F1E0: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022F1E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F1E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F1EC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F1F0: jal         0x8022F650
    // 0x8022F1F4: sh          $v1, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r3;
    func_8022F650_ovl13(rdram, ctx);
        goto after_4;
    // 0x8022F1F4: sh          $v1, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r3;
    after_4:
L_8022F1F8:
    // 0x8022F1F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F1FC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022F200: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022F204: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022F208: jr          $ra
    // 0x8022F20C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022F20C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802370F0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802370F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802370F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802370F8: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x802370FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237100: bne         $v1, $v0, L_80237118
    if (ctx->r3 != ctx->r2) {
        // 0x80237104: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237118;
    }
    // 0x80237104: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237108: jal         0x80236EE0
    // 0x8023710C: nop

    func_80236EE0_ovl13(rdram, ctx);
        goto after_0;
    // 0x8023710C: nop

    after_0:
    // 0x80237110: j           L_8023713C
    // 0x80237114: nop

        goto L_8023713C;
    // 0x80237114: nop

L_80237118:
    // 0x80237118: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8023711C: beq         $v1, $v0, L_80237134
    if (ctx->r3 == ctx->r2) {
        // 0x80237120: nop
    
            goto L_80237134;
    }
    // 0x80237120: nop

    // 0x80237124: jal         0x80236FB8
    // 0x80237128: nop

    func_80236FB8_ovl13(rdram, ctx);
        goto after_1;
    // 0x80237128: nop

    after_1:
    // 0x8023712C: j           L_8023713C
    // 0x80237130: nop

        goto L_8023713C;
    // 0x80237130: nop

L_80237134:
    // 0x80237134: jal         0x8004F5C4
    // 0x80237138: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x80237138: nop

    after_2:
L_8023713C:
    // 0x8023713C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237140: jr          $ra
    // 0x80237144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227D98_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227D9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227DA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227DA4: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x80227DA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227DAC: beq         $v1, $v0, L_80227DFC
    if (ctx->r3 == ctx->r2) {
        // 0x80227DB0: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_80227DFC;
    }
    // 0x80227DB0: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80227DB4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227DB8: beql        $v0, $zero, L_80227DD0
    if (ctx->r2 == 0) {
        // 0x80227DBC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227DD0;
    }
    goto skip_0;
    // 0x80227DBC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227DC0: beq         $v1, $zero, L_80227DE8
    if (ctx->r3 == 0) {
        // 0x80227DC4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227DE8;
    }
    // 0x80227DC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227DC8: j           L_80227E98
    // 0x80227DCC: nop

        goto L_80227E98;
    // 0x80227DCC: nop

L_80227DD0:
    // 0x80227DD0: beq         $v1, $v0, L_80227E28
    if (ctx->r3 == ctx->r2) {
        // 0x80227DD4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227E28;
    }
    // 0x80227DD4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227DD8: beq         $v1, $v0, L_80227E40
    if (ctx->r3 == ctx->r2) {
        // 0x80227DDC: nop
    
            goto L_80227E40;
    }
    // 0x80227DDC: nop

    // 0x80227DE0: j           L_80227E98
    // 0x80227DE4: nop

        goto L_80227E98;
    // 0x80227DE4: nop

L_80227DE8:
    // 0x80227DE8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80227DEC: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80227DF0: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80227DF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227DF8: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80227DFC:
    // 0x80227DFC: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80227E00: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x80227E04: beq         $v0, $zero, L_80227E18
    if (ctx->r2 == 0) {
        // 0x80227E08: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_80227E18;
    }
    // 0x80227E08: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80227E0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227E10: j           L_80227E64
    // 0x80227E14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
        goto L_80227E64;
    // 0x80227E14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_80227E18:
    // 0x80227E18: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80227E1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227E20: j           L_80227E98
    // 0x80227E24: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_80227E98;
    // 0x80227E24: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80227E28:
    // 0x80227E28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E2C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80227E30: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80227E34: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80227E38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227E3C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80227E40:
    // 0x80227E40: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80227E44: slti        $v0, $v0, 0x6
    ctx->r2 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x80227E48: beq         $v0, $zero, L_80227E7C
    if (ctx->r2 == 0) {
        // 0x80227E4C: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80227E7C;
    }
    // 0x80227E4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227E50: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80227E54: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80227E58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227E5C: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80227E60: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
L_80227E64:
    // 0x80227E64: jal         0x8004DA90
    // 0x80227E68: nop

    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80227E68: nop

    after_0:
    // 0x80227E6C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80227E70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227E74: j           L_80227E98
    // 0x80227E78: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_80227E98;
    // 0x80227E78: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_80227E7C:
    // 0x80227E7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E80: sb          $v0, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r2;
    // 0x80227E84: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80227E88: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80227E8C: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80227E90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227E94: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80227E98:
    // 0x80227E98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227E9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227EA0: jr          $ra
    // 0x80227EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236CC0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236CC0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80236CC4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80236CC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236CCC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80236CD0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80236CD4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80236CD8: jal         0x80071060
    // 0x80236CDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80071060_4C460(rdram, ctx);
        goto after_0;
    // 0x80236CDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80236CE0: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80236CE4: lhu         $a0, 0x2C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2C);
    // 0x80236CE8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80236CEC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80236CF0: sh          $v1, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r3;
    // 0x80236CF4: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80236CF8: lhu         $a0, 0x2E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2E);
    // 0x80236CFC: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x80236D00: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80236D04: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80236D08: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    // 0x80236D0C: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80236D10: lhu         $v1, 0x30($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X30);
    // 0x80236D14: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80236D18: lb          $a0, 0x4B21($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4B21);
    // 0x80236D1C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236D20: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80236D24: bne         $a0, $zero, L_80236D30
    if (ctx->r4 != 0) {
        // 0x80236D28: sh          $v0, 0x34($sp)
        MEM_H(0X34, ctx->r29) = ctx->r2;
            goto L_80236D30;
    }
    // 0x80236D28: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x80236D2C: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
L_80236D30:
    // 0x80236D30: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236D34: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80236D38: beq         $v0, $zero, L_80236D7C
    if (ctx->r2 == 0) {
        // 0x80236D3C: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_80236D7C;
    }
    // 0x80236D3C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80236D40: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x80236D44: ori         $t0, $t0, 0x5
    ctx->r8 = ctx->r8 | 0X5;
    // 0x80236D48: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80236D4C: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x80236D50: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80236D54: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80236D58: ori         $v0, $zero, 0xA000
    ctx->r2 = 0 | 0XA000;
    // 0x80236D5C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80236D60: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80236D64: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80236D68: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80236D6C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80236D70: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80236D74: j           L_80236DD4
    // 0x80236D78: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
        goto L_80236DD4;
    // 0x80236D78: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
L_80236D7C:
    // 0x80236D7C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80236D80: beq         $v0, $zero, L_80236D9C
    if (ctx->r2 == 0) {
        // 0x80236D84: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_80236D9C;
    }
    // 0x80236D84: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80236D88: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x80236D8C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80236D90: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80236D94: j           L_80236DB0
    // 0x80236D98: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_80236DB0;
    // 0x80236D98: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80236D9C:
    // 0x80236D9C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80236DA0: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x80236DA4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80236DA8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80236DAC: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_80236DB0:
    // 0x80236DB0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80236DB4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80236DB8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80236DBC: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80236DC0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80236DC4: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80236DC8: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x80236DCC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80236DD0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80236DD4:
    // 0x80236DD4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80236DD8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80236DDC: jal         0x80051F9C
    // 0x80236DE0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_1;
    // 0x80236DE0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80236DE4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80236DE8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80236DEC: jr          $ra
    // 0x80236DF0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80236DF0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802350AC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802350AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802350B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802350B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802350B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802350BC: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x802350C0: lui         $v1, 0x1A00
    ctx->r3 = S32(0X1A00 << 16);
    // 0x802350C4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802350C8: bne         $v0, $zero, L_802350EC
    if (ctx->r2 != 0) {
        // 0x802350CC: nop
    
            goto L_802350EC;
    }
    // 0x802350CC: nop

    // 0x802350D0: jal         0x8003F754
    // 0x802350D4: nop

    func_8003F754_1AB54(rdram, ctx);
        goto after_0;
    // 0x802350D4: nop

    after_0:
    // 0x802350D8: bne         $v0, $zero, L_802350EC
    if (ctx->r2 != 0) {
        // 0x802350DC: nop
    
            goto L_802350EC;
    }
    // 0x802350DC: nop

    // 0x802350E0: lh          $v0, 0x7C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X7C);
    // 0x802350E4: beq         $v0, $zero, L_80235104
    if (ctx->r2 == 0) {
        // 0x802350E8: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_80235104;
    }
    // 0x802350E8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
L_802350EC:
    // 0x802350EC: jal         0x802351A8
    // 0x802350F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802351A8_ovl13(rdram, ctx);
        goto after_1;
    // 0x802350F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802350F4: jal         0x8004F4F8
    // 0x802350F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x802350F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802350FC: j           L_8023514C
    // 0x80235100: nop

        goto L_8023514C;
    // 0x80235100: nop

L_80235104:
    // 0x80235104: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80235108: jal         0x8009A3B4
    // 0x8023510C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023510C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80235110: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80235114: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80235118: jal         0x8009A3B4
    // 0x8023511C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023511C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80235120: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x80235124: addiu       $s0, $s0, 0x8C
    ctx->r16 = ADD32(ctx->r16, 0X8C);
    // 0x80235128: jal         0x80031600
    // 0x8023512C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x8023512C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80235130: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235134: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80235138: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023513C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80235140: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80235144: jal         0x80031DA8
    // 0x80235148: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x80235148: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
L_8023514C:
    // 0x8023514C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80235150: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235154: jr          $ra
    // 0x80235158: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80235158: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022D5A4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D5A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D5A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D5AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D5B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D5B4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D5B8: jal         0x8003B878
    // 0x8022D5BC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022D5BC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D5C0: lbu         $a0, 0x5($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5);
    // 0x8022D5C4: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x8022D5C8: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8022D5CC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D5D0: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8022D5D4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D5D8: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x8022D5DC: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x8022D5E0: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x8022D5E4: lhu         $a0, 0xC($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XC);
    // 0x8022D5E8: ori         $a1, $a1, 0x40
    ctx->r5 = ctx->r5 | 0X40;
    // 0x8022D5EC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D5F0: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022D5F4: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022D5F8: lh          $a0, 0xE($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XE);
    // 0x8022D5FC: lui         $v1, 0x4E
    ctx->r3 = S32(0X4E << 16);
    // 0x8022D600: ori         $v1, $v1, 0x5F
    ctx->r3 = ctx->r3 | 0X5F;
    // 0x8022D604: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022D608: addiu       $v1, $zero, 0x1F40
    ctx->r3 = ADD32(0, 0X1F40);
    // 0x8022D60C: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x8022D610: addiu       $v1, $zero, 0x1F5F
    ctx->r3 = ADD32(0, 0X1F5F);
    // 0x8022D614: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
    // 0x8022D618: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8022D61C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022D620: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x8022D624: lhu         $a0, 0x8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X8);
    // 0x8022D628: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022D62C: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022D630: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x8022D634: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D638: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D63C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D640: jr          $ra
    // 0x8022D644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D648_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D648: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D64C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D650: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022D654: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D658: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D65C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D660: lhu         $v0, 0x6($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X6);
    // 0x8022D664: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D668: sra         $v0, $v0, 18
    ctx->r2 = S32(SIGNED(ctx->r2) >> 18);
    // 0x8022D66C: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022D670: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8022D674: lbu         $s1, -0x6A00($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X6A00);
    // 0x8022D678: jal         0x8003B878
    // 0x8022D67C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022D67C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D680: lbu         $a0, 0x5($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X5);
    // 0x8022D684: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8022D688: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D68C: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8022D690: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D694: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x8022D698: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x8022D69C: lh          $v1, 0xA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA);
    // 0x8022D6A0: lhu         $a0, 0xC($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XC);
    // 0x8022D6A4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D6A8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022D6AC: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022D6B0: lh          $a1, 0xE($s2)
    ctx->r5 = MEM_H(ctx->r18, 0XE);
    // 0x8022D6B4: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8022D6B8: or          $v1, $s1, $v1
    ctx->r3 = ctx->r17 | ctx->r3;
    // 0x8022D6BC: addiu       $a0, $s1, 0x1F
    ctx->r4 = ADD32(ctx->r17, 0X1F);
    // 0x8022D6C0: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8022D6C4: lui         $v1, 0x4E
    ctx->r3 = S32(0X4E << 16);
    // 0x8022D6C8: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x8022D6CC: ori         $s1, $s1, 0x1F00
    ctx->r17 = ctx->r17 | 0X1F00;
    // 0x8022D6D0: ori         $a0, $a0, 0x1F00
    ctx->r4 = ctx->r4 | 0X1F00;
    // 0x8022D6D4: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022D6D8: sw          $s1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r17;
    // 0x8022D6DC: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
    // 0x8022D6E0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022D6E4: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x8022D6E8: lhu         $a0, 0x8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8);
    // 0x8022D6EC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022D6F0: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022D6F4: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x8022D6F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D6FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D700: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D704: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D708: jr          $ra
    // 0x8022D70C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D70C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AE54_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AE58: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022AE5C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022AE60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AE64: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022AE68: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AE6C: lw          $v0, -0x6A94($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6A94);
    // 0x8022AE70: jalr        $v0
    // 0x8022AE74: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022AE74: nop

    after_0:
    // 0x8022AE78: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022AE7C: jr          $ra
    // 0x8022AE80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AE80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E95C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E95C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022E960: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022E964: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E968: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022E96C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022E970: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022E974: addiu       $a0, $s2, 0xC4
    ctx->r4 = ADD32(ctx->r18, 0XC4);
    // 0x8022E978: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022E97C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E980: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022E984: jal         0x8009A3B4
    // 0x8022E988: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E988: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022E98C: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022E990: addiu       $a1, $s0, 0x188
    ctx->r5 = ADD32(ctx->r16, 0X188);
    // 0x8022E994: jal         0x8009A3B4
    // 0x8022E998: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E998: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022E99C: lui         $v0, 0x7F
    ctx->r2 = S32(0X7F << 16);
    // 0x8022E9A0: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022E9A4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022E9A8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022E9AC: bne         $v0, $zero, L_8022EA40
    if (ctx->r2 != 0) {
        // 0x8022E9B0: addiu       $s1, $s0, 0x2E8
        ctx->r17 = ADD32(ctx->r16, 0X2E8);
            goto L_8022EA40;
    }
    // 0x8022E9B0: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    // 0x8022E9B4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022E9B8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022E9BC: beq         $v0, $zero, L_8022EA40
    if (ctx->r2 == 0) {
        // 0x8022E9C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EA40;
    }
    // 0x8022E9C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E9C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022E9C8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E9CC: lhu         $v1, 0x32C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X32C);
    // 0x8022E9D0: addiu       $a2, $s0, 0x310
    ctx->r6 = ADD32(ctx->r16, 0X310);
    // 0x8022E9D4: addiu       $a3, $s0, 0x318
    ctx->r7 = ADD32(ctx->r16, 0X318);
    // 0x8022E9D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E9DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E9E0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E9E4: jal         0x8004E150
    // 0x8022E9E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_2;
    // 0x8022E9E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022E9EC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E9F0: beq         $v0, $zero, L_8022EA28
    if (ctx->r2 == 0) {
        // 0x8022E9F4: nop
    
            goto L_8022EA28;
    }
    // 0x8022E9F4: nop

    // 0x8022E9F8: lbu         $v0, 0x33B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X33B);
    // 0x8022E9FC: bne         $v0, $zero, L_8022EA34
    if (ctx->r2 != 0) {
        // 0x8022EA00: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022EA34;
    }
    // 0x8022EA00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022EA04: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8022EA08: lbu         $a1, 0xA($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EA0C: lbu         $v1, 0x336($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X336);
    // 0x8022EA10: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022EA14: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x8022EA18: sb          $a0, 0x334($s0)
    MEM_B(0X334, ctx->r16) = ctx->r4;
    // 0x8022EA1C: sb          $a1, 0x335($s0)
    MEM_B(0X335, ctx->r16) = ctx->r5;
    // 0x8022EA20: j           L_8022EA40
    // 0x8022EA24: sb          $v1, 0x336($s0)
    MEM_B(0X336, ctx->r16) = ctx->r3;
        goto L_8022EA40;
    // 0x8022EA24: sb          $v1, 0x336($s0)
    MEM_B(0X336, ctx->r16) = ctx->r3;
L_8022EA28:
    // 0x8022EA28: lbu         $v0, 0x33B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X33B);
    // 0x8022EA2C: beq         $v0, $zero, L_8022EA40
    if (ctx->r2 == 0) {
        // 0x8022EA30: nop
    
            goto L_8022EA40;
    }
    // 0x8022EA30: nop

L_8022EA34:
    // 0x8022EA34: lbu         $v0, 0x53($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X53);
    // 0x8022EA38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EA3C: sb          $v0, 0x53($s1)
    MEM_B(0X53, ctx->r17) = ctx->r2;
L_8022EA40:
    // 0x8022EA40: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022EA44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022EA48: beq         $v1, $v0, L_8022EAB4
    if (ctx->r3 == ctx->r2) {
        // 0x8022EA4C: addiu       $a0, $s0, 0xC4
        ctx->r4 = ADD32(ctx->r16, 0XC4);
            goto L_8022EAB4;
    }
    // 0x8022EA4C: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022EA50: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x8022EA54: jal         0x8009A3B4
    // 0x8022EA58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022EA58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022EA5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EA60: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022EA64: addiu       $a2, $s1, 0x28
    ctx->r6 = ADD32(ctx->r17, 0X28);
    // 0x8022EA68: jal         0x8004DF78
    // 0x8022EA6C: addiu       $a3, $s1, 0x30
    ctx->r7 = ADD32(ctx->r17, 0X30);
    func_8004DF78_29378(rdram, ctx);
        goto after_4;
    // 0x8022EA6C: addiu       $a3, $s1, 0x30
    ctx->r7 = ADD32(ctx->r17, 0X30);
    after_4:
    // 0x8022EA70: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022EA74: beq         $v0, $zero, L_8022EAA4
    if (ctx->r2 == 0) {
        // 0x8022EA78: nop
    
            goto L_8022EAA4;
    }
    // 0x8022EA78: nop

    // 0x8022EA7C: lbu         $v1, 0x4E($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4E);
    // 0x8022EA80: andi        $v0, $v1, 0xA
    ctx->r2 = ctx->r3 & 0XA;
    // 0x8022EA84: bne         $v0, $zero, L_8022EAA4
    if (ctx->r2 != 0) {
        // 0x8022EA88: ori         $v0, $v1, 0x2
        ctx->r2 = ctx->r3 | 0X2;
            goto L_8022EAA4;
    }
    // 0x8022EA88: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x8022EA8C: sb          $v0, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = ctx->r2;
    // 0x8022EA90: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022EA94: sb          $v0, 0x50($s1)
    MEM_B(0X50, ctx->r17) = ctx->r2;
    // 0x8022EA98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022EA9C: sb          $v0, 0x4F($s1)
    MEM_B(0X4F, ctx->r17) = ctx->r2;
    // 0x8022EAA0: sb          $zero, 0x51($s1)
    MEM_B(0X51, ctx->r17) = 0;
L_8022EAA4:
    // 0x8022EAA4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022EAA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022EAAC: bne         $v1, $v0, L_8022EAE4
    if (ctx->r3 != ctx->r2) {
        // 0x8022EAB0: nop
    
            goto L_8022EAE4;
    }
    // 0x8022EAB0: nop

L_8022EAB4:
    // 0x8022EAB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EAB8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EABC: lbu         $v1, 0x4E($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4E);
    // 0x8022EAC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EAC4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022EAC8: sb          $v0, 0x52($s1)
    MEM_B(0X52, ctx->r17) = ctx->r2;
    // 0x8022EACC: sb          $zero, 0x53($s1)
    MEM_B(0X53, ctx->r17) = 0;
    // 0x8022EAD0: andi        $v1, $v1, 0xF5
    ctx->r3 = ctx->r3 & 0XF5;
    // 0x8022EAD4: jal         0x8022E344
    // 0x8022EAD8: sb          $v1, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = ctx->r3;
    func_8022E344_ovl13(rdram, ctx);
        goto after_5;
    // 0x8022EAD8: sb          $v1, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = ctx->r3;
    after_5:
    // 0x8022EADC: j           L_8022EAEC
    // 0x8022EAE0: nop

        goto L_8022EAEC;
    // 0x8022EAE0: nop

L_8022EAE4:
    // 0x8022EAE4: jal         0x8022EB04
    // 0x8022EAE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022EB04_ovl13(rdram, ctx);
        goto after_6;
    // 0x8022EAE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022EAEC:
    // 0x8022EAEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022EAF0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022EAF4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EAF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022EAFC: jr          $ra
    // 0x8022EB00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022EB00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225B7C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B7C: jr          $ra
    // 0x80225B80: nop

    TRACE_RETURN()
    return;
    // 0x80225B80: nop

;}
RECOMP_FUNC void func_80225C0C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C0C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225C10: bne         $v0, $zero, L_80225C5C
    if (ctx->r2 != 0) {
        // 0x80225C14: addiu       $v0, $zero, -0x1400
        ctx->r2 = ADD32(0, -0X1400);
            goto L_80225C5C;
    }
    // 0x80225C14: addiu       $v0, $zero, -0x1400
    ctx->r2 = ADD32(0, -0X1400);
    // 0x80225C18: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80225C1C: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80225C20: lh          $a0, 0x14($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X14);
    // 0x80225C24: addiu       $v0, $zero, -0x2E4
    ctx->r2 = ADD32(0, -0X2E4);
    // 0x80225C28: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x80225C2C: lh          $a1, 0x16($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X16);
    // 0x80225C30: addiu       $v0, $zero, 0x1A00
    ctx->r2 = ADD32(0, 0X1A00);
    // 0x80225C34: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x80225C38: lh          $a2, 0x18($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X18);
    // 0x80225C3C: addiu       $v0, $zero, 0x900
    ctx->r2 = ADD32(0, 0X900);
    // 0x80225C40: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x80225C44: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80225C48: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80225C4C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80225C50: sw          $a0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r4;
    // 0x80225C54: sw          $a1, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r5;
    // 0x80225C58: sw          $a2, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r6;
L_80225C5C:
    // 0x80225C5C: jr          $ra
    // 0x80225C60: nop

    TRACE_RETURN()
    return;
    // 0x80225C60: nop

;}
RECOMP_FUNC void func_80228C20_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C20: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228C24: bne         $v0, $zero, L_80228C34
    if (ctx->r2 != 0) {
        // 0x80228C28: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80228C34;
    }
    // 0x80228C28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228C2C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80228C30: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80228C34:
    // 0x80228C34: jr          $ra
    // 0x80228C38: nop

    TRACE_RETURN()
    return;
    // 0x80228C38: nop

;}
RECOMP_FUNC void func_8022B430_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B434: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B438: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022B43C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B440: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B444: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B448: lw          $v0, -0x6A68($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6A68);
    // 0x8022B44C: jalr        $v0
    // 0x8022B450: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022B450: nop

    after_0:
    // 0x8022B454: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B458: jr          $ra
    // 0x8022B45C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B45C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233DD4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233DD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233DD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233DDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233DE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80233DE4: lw          $v0, 0xD0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD0);
    // 0x80233DE8: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80233DEC: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80233DF0: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80233DF4: lbu         $a2, 0xB($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XB);
    // 0x80233DF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233DFC: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x80233E00: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x80233E04: sh          $a0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r4;
    // 0x80233E08: bne         $a2, $zero, L_80233E54
    if (ctx->r6 != 0) {
        // 0x80233E0C: sh          $a1, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r5;
            goto L_80233E54;
    }
    // 0x80233E0C: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x80233E10: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80233E14: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80233E18: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80233E1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233E20: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80233E24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233E28: jal         0x80234274
    // 0x80233E2C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    func_80234274_ovl13(rdram, ctx);
        goto after_0;
    // 0x80233E2C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    after_0:
    // 0x80233E30: addiu       $a0, $s0, 0xA4
    ctx->r4 = ADD32(ctx->r16, 0XA4);
    // 0x80233E34: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80233E38: jal         0x8009A3B4
    // 0x80233E3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80233E3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80233E40: addiu       $a0, $zero, 0xF1
    ctx->r4 = ADD32(0, 0XF1);
    // 0x80233E44: jal         0x8002A33C
    // 0x80233E48: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80233E48: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80233E4C: j           L_80233E5C
    // 0x80233E50: nop

        goto L_80233E5C;
    // 0x80233E50: nop

L_80233E54:
    // 0x80233E54: jal         0x80234424
    // 0x80233E58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80234424_ovl13(rdram, ctx);
        goto after_3;
    // 0x80233E58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80233E5C:
    // 0x80233E5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80233E60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233E64: jr          $ra
    // 0x80233E68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233E68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227184_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227184: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80227188: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022718C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227190: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80227194: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80227198: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022719C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802271A0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802271A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802271A8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802271AC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802271B0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802271B4: beq         $v0, $zero, L_80227494
    if (ctx->r2 == 0) {
        // 0x802271B8: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80227494;
    }
    // 0x802271B8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x802271BC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802271C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802271C4: addu        $at, $at, $v0
    gpr jr_addend_802271CC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802271C8: lw          $v0, -0x6520($at)
    ctx->r2 = ADD32(ctx->r1, -0X6520);
    // 0x802271CC: jr          $v0
    // 0x802271D0: nop

    switch (jr_addend_802271CC >> 2) {
        case 0: goto L_80227324; break;
        case 1: goto L_80227390; break;
        case 2: goto L_80227390; break;
        case 3: goto L_80227470; break;
        case 4: goto L_802271D4; break;
        default: switch_error(__func__, 0x802271CC, 0x80239AE0);
    }
    // 0x802271D0: nop

L_802271D4:
    // 0x802271D4: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x802271D8: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x802271DC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802271E0: bne         $v0, $zero, L_802272EC
    if (ctx->r2 != 0) {
        // 0x802271E4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802272EC;
    }
    // 0x802271E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802271E8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802271EC: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x802271F0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802271F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802271F8: lbu         $v0, -0x7284($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X7284);
    // 0x802271FC: bne         $v1, $v0, L_802272D8
    if (ctx->r3 != ctx->r2) {
        // 0x80227200: nop
    
            goto L_802272D8;
    }
    // 0x80227200: nop

    // 0x80227204: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x80227208: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022720C: beq         $v0, $zero, L_802272D8
    if (ctx->r2 == 0) {
        // 0x80227210: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_802272D8;
    }
    // 0x80227210: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80227214: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x80227218: addiu       $s5, $zero, 0x83
    ctx->r21 = ADD32(0, 0X83);
    // 0x8022721C: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x80227220: addiu       $s4, $s4, -0x7280
    ctx->r20 = ADD32(ctx->r20, -0X7280);
    // 0x80227224: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_80227228:
    // 0x80227228: jal         0x8004F144
    // 0x8022722C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022722C: nop

    after_0:
    // 0x80227230: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227234: beq         $v1, $zero, L_802272C8
    if (ctx->r3 == 0) {
        // 0x80227238: nop
    
            goto L_802272C8;
    }
    // 0x80227238: nop

    // 0x8022723C: sb          $s6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r22;
    // 0x80227240: sb          $s5, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r21;
    // 0x80227244: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80227248: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022724C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227250: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80227254: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80227258: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022725C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80227260: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80227264: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x80227268: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022726C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80227270: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227274: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80227278: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022727C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227280: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80227284: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80227288: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x8022728C: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x80227290: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80227294: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80227298: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022729C: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x802272A0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802272A4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802272A8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802272AC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802272B0: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x802272B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802272B8: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x802272BC: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x802272C0: bne         $v0, $zero, L_80227228
    if (ctx->r2 != 0) {
        // 0x802272C4: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_80227228;
    }
    // 0x802272C4: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
L_802272C8:
    // 0x802272C8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802272CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802272D0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802272D4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802272D8:
    // 0x802272D8: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x802272DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802272E0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802272E4: j           L_80227494
    // 0x802272E8: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_80227494;
    // 0x802272E8: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_802272EC:
    // 0x802272EC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802272F0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x802272F4: jal         0x8004FEA0
    // 0x802272F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_1;
    // 0x802272F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802272FC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227300: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80227304: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80227308: beq         $v0, $zero, L_8022731C
    if (ctx->r2 == 0) {
        // 0x8022730C: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_8022731C;
    }
    // 0x8022730C: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x80227310: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227314: j           L_80227320
    // 0x80227318: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80227320;
    // 0x80227318: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022731C:
    // 0x8022731C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80227320:
    // 0x80227320: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80227324:
    // 0x80227324: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227328: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022732C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227330: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80227334: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227338: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x8022733C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80227340: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80227344: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80227348: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022734C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227350: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80227354: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80227358: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022735C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80227360: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
    // 0x80227364: sh          $zero, 0x4($s2)
    MEM_H(0X4, ctx->r18) = 0;
    // 0x80227368: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8022736C: andi        $v0, $v0, 0xFFB3
    ctx->r2 = ctx->r2 & 0XFFB3;
    // 0x80227370: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80227374: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80227378: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022737C: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80227380: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80227384: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80227388: jal         0x8002A33C
    // 0x8022738C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022738C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_2:
L_80227390:
    // 0x80227390: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227394: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80227398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022739C: jal         0x8004DA90
    // 0x802273A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802273A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x802273A4: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x802273A8: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x802273AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802273B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802273B4: jal         0x80040F30
    // 0x802273B8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x802273B8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_4:
    // 0x802273BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802273C0: beq         $v1, $zero, L_80227494
    if (ctx->r3 == 0) {
        // 0x802273C4: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_80227494;
    }
    // 0x802273C4: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x802273C8: beq         $v0, $zero, L_802273E4
    if (ctx->r2 == 0) {
        // 0x802273CC: andi        $v0, $v1, 0x1000
        ctx->r2 = ctx->r3 & 0X1000;
            goto L_802273E4;
    }
    // 0x802273CC: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x802273D0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802273D4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802273D8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802273DC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802273E0: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
L_802273E4:
    // 0x802273E4: beq         $v0, $zero, L_80227498
    if (ctx->r2 == 0) {
        // 0x802273E8: addiu       $v0, $zero, 0x190C
        ctx->r2 = ADD32(0, 0X190C);
            goto L_80227498;
    }
    // 0x802273E8: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
    // 0x802273EC: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x802273F0: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x802273F4: bne         $v0, $zero, L_80227448
    if (ctx->r2 != 0) {
        // 0x802273F8: addiu       $a0, $zero, 0xDA
        ctx->r4 = ADD32(0, 0XDA);
            goto L_80227448;
    }
    // 0x802273F8: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
    // 0x802273FC: ori         $v0, $v1, 0x40
    ctx->r2 = ctx->r3 | 0X40;
    // 0x80227400: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80227404: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80227408: beq         $v0, $zero, L_80227438
    if (ctx->r2 == 0) {
        // 0x8022740C: nop
    
            goto L_80227438;
    }
    // 0x8022740C: nop

    // 0x80227410: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x80227414: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227418: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022741C: beq         $v0, $zero, L_80227438
    if (ctx->r2 == 0) {
        // 0x80227420: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80227438;
    }
    // 0x80227420: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80227424: sh          $v0, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r2;
    // 0x80227428: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022742C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80227430: jal         0x8007A290
    // 0x80227434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8007A290_55690(rdram, ctx);
        goto after_5;
    // 0x80227434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_80227438:
    // 0x80227438: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022743C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80227440: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80227444: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
L_80227448:
    // 0x80227448: jal         0x8002A33C
    // 0x8022744C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022744C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x80227450: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227454: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x80227458: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022745C: addiu       $v1, $zero, -0x200
    ctx->r3 = ADD32(0, -0X200);
    // 0x80227460: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80227464: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227468: j           L_80227494
    // 0x8022746C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80227494;
    // 0x8022746C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227470:
    // 0x80227470: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80227474: bne         $v0, $zero, L_80227498
    if (ctx->r2 != 0) {
        // 0x80227478: addiu       $v0, $zero, 0x190C
        ctx->r2 = ADD32(0, 0X190C);
            goto L_80227498;
    }
    // 0x80227478: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
    // 0x8022747C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227480: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227484: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80227488: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022748C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227490: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80227494:
    // 0x80227494: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
L_80227498:
    // 0x80227498: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022749C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802274A0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802274A4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802274A8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802274AC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802274B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802274B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802274B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802274BC: jr          $ra
    // 0x802274C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802274C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022961C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022961C: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x80229620: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80229624: beq         $v0, $zero, L_80229640
    if (ctx->r2 == 0) {
        // 0x80229628: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80229640;
    }
    // 0x80229628: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022962C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80229630: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80229634: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229638: bne         $v0, $zero, L_8022966C
    if (ctx->r2 != 0) {
        // 0x8022963C: nop
    
            goto L_8022966C;
    }
    // 0x8022963C: nop

L_80229640:
    // 0x80229640: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80229644: bgez        $v0, L_8022966C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229648: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022966C;
    }
    // 0x80229648: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022964C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x80229650: bnel        $v1, $v0, L_8022966C
    if (ctx->r3 != ctx->r2) {
        // 0x80229654: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022966C;
    }
    goto skip_0;
    // 0x80229654: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x80229658: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022965C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80229660: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80229664: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229668: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022966C:
    // 0x8022966C: jr          $ra
    // 0x80229670: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80229670: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022F210_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F210: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022F214: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022F218: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F21C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022F220: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022F224: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022F228: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022F22C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022F230: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022F234: lb          $v0, 0x36D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X36D);
    // 0x8022F238: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022F23C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022F240: beq         $v0, $zero, L_8022F480
    if (ctx->r2 == 0) {
        // 0x8022F244: addiu       $s4, $s1, 0x308
        ctx->r20 = ADD32(ctx->r17, 0X308);
            goto L_8022F480;
    }
    // 0x8022F244: addiu       $s4, $s1, 0x308
    ctx->r20 = ADD32(ctx->r17, 0X308);
    // 0x8022F248: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022F24C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F250: addiu       $s5, $s3, 0x14
    ctx->r21 = ADD32(ctx->r19, 0X14);
    // 0x8022F254: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022F258: lhu         $v0, 0x322($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X322);
    // 0x8022F25C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022F260: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8022F264: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022F268: jal         0x8004F820
    // 0x8022F26C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F26C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8022F270: lhu         $v1, 0x322($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X322);
    // 0x8022F274: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F278: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F27C: jal         0x8004EFE4
    // 0x8022F280: sh          $v1, 0x322($s1)
    MEM_H(0X322, ctx->r17) = ctx->r3;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x8022F280: sh          $v1, 0x322($s1)
    MEM_H(0X322, ctx->r17) = ctx->r3;
    after_1:
    // 0x8022F284: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022F288: beq         $s2, $zero, L_8022F464
    if (ctx->r18 == 0) {
        // 0x8022F28C: addiu       $a0, $zero, 0x148
        ctx->r4 = ADD32(0, 0X148);
            goto L_8022F464;
    }
    // 0x8022F28C: addiu       $a0, $zero, 0x148
    ctx->r4 = ADD32(0, 0X148);
    // 0x8022F290: jal         0x8002A33C
    // 0x8022F294: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022F294: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022F298: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022F29C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F2A0: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x8022F2A4: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x8022F2A8: sb          $zero, 0x4($s2)
    MEM_B(0X4, ctx->r18) = 0;
    // 0x8022F2AC: sb          $v1, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r3;
    // 0x8022F2B0: lhu         $v0, 0x198($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X198);
    // 0x8022F2B4: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x8022F2B8: lhu         $v0, 0x19A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19A);
    // 0x8022F2BC: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8022F2C0: lhu         $v0, 0x19C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19C);
    // 0x8022F2C4: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x8022F2C8: addiu       $a0, $s3, 0xC4
    ctx->r4 = ADD32(ctx->r19, 0XC4);
    // 0x8022F2CC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022F2D0: sh          $v0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r2;
    // 0x8022F2D4: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022F2D8: lh          $a3, 0x18($s2)
    ctx->r7 = MEM_H(ctx->r18, 0X18);
    // 0x8022F2DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F2E0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F2E4: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x8022F2E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F2EC: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022F2F0: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8022F2F4: jal         0x8009A3B4
    // 0x8022F2F8: sw          $a3, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022F2F8: sw          $a3, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r7;
    after_3:
    // 0x8022F2FC: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x8022F300: addiu       $a1, $s1, 0x190
    ctx->r5 = ADD32(ctx->r17, 0X190);
    // 0x8022F304: jal         0x8009A3B4
    // 0x8022F308: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022F308: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022F30C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F310: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022F314: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022F318: lhu         $v1, 0x322($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X322);
    // 0x8022F31C: addiu       $a2, $s1, 0x34C
    ctx->r6 = ADD32(ctx->r17, 0X34C);
    // 0x8022F320: addiu       $a3, $s1, 0x354
    ctx->r7 = ADD32(ctx->r17, 0X354);
    // 0x8022F324: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F328: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F32C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022F330: jal         0x8004E150
    // 0x8022F334: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_5;
    // 0x8022F334: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022F338: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022F33C: beq         $v0, $zero, L_8022F378
    if (ctx->r2 == 0) {
        // 0x8022F340: nop
    
            goto L_8022F378;
    }
    // 0x8022F340: nop

    // 0x8022F344: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8022F348: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022F34C: lhu         $v1, 0x49C6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C6);
    // 0x8022F350: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F354: lhu         $a0, 0x49C8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X49C8);
    // 0x8022F358: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022F35C: sh          $v0, 0xC4($s3)
    MEM_H(0XC4, ctx->r19) = ctx->r2;
    // 0x8022F360: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F364: sh          $v1, 0x4A76($at)
    MEM_H(0X4A76, ctx->r1) = ctx->r3;
    // 0x8022F368: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F36C: sh          $a0, 0x4A78($at)
    MEM_H(0X4A78, ctx->r1) = ctx->r4;
    // 0x8022F370: j           L_8022F408
    // 0x8022F374: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
        goto L_8022F408;
    // 0x8022F374: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8022F378:
    // 0x8022F378: lw          $a0, 0x80($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X80);
    // 0x8022F37C: jal         0x80032424
    // 0x8022F380: nop

    func_80032424_D824(rdram, ctx);
        goto after_6;
    // 0x8022F380: nop

    after_6:
    // 0x8022F384: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8022F388: lh          $a0, 0x322($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X322);
    // 0x8022F38C: sw          $v0, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->r2;
    // 0x8022F390: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x8022F394: jal         0x80032498
    // 0x8022F398: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80032498_D898(rdram, ctx);
        goto after_7;
    // 0x8022F398: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_7:
    // 0x8022F39C: lh          $a0, 0x322($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X322);
    // 0x8022F3A0: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8022F3A4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022F3A8: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x8022F3AC: jal         0x800324B4
    // 0x8022F3B0: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_800324B4_D8B4(rdram, ctx);
        goto after_8;
    // 0x8022F3B0: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_8:
    // 0x8022F3B4: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022F3B8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F3BC: mflo        $v0
    ctx->r2 = lo;
    // 0x8022F3C0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022F3C4: lhu         $v1, 0x49C6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C6);
    // 0x8022F3C8: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x8022F3CC: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022F3D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F3D4: sh          $v1, 0x4A76($at)
    MEM_H(0X4A76, ctx->r1) = ctx->r3;
    // 0x8022F3D8: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8022F3DC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022F3E0: sh          $a0, 0xC4($s3)
    MEM_H(0XC4, ctx->r19) = ctx->r4;
    // 0x8022F3E4: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x8022F3E8: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F3EC: mflo        $s0
    ctx->r16 = lo;
    // 0x8022F3F0: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022F3F4: srl         $s0, $s0, 12
    ctx->r16 = S32(U32(ctx->r16) >> 12);
    // 0x8022F3F8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022F3FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F400: sh          $v0, 0x4A78($at)
    MEM_H(0X4A78, ctx->r1) = ctx->r2;
    // 0x8022F404: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8022F408:
    // 0x8022F408: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022F40C: lh          $a2, 0x5E($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X5E);
    // 0x8022F410: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022F414: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    // 0x8022F418: jal         0x8004E458
    // 0x8022F41C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E458_29858(rdram, ctx);
        goto after_9;
    // 0x8022F41C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_9:
    // 0x8022F420: jal         0x8022F650
    // 0x8022F424: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022F650_ovl13(rdram, ctx);
        goto after_10;
    // 0x8022F424: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x8022F428: jal         0x8004F144
    // 0x8022F42C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_11;
    // 0x8022F42C: nop

    after_11:
    // 0x8022F430: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F434: beq         $v1, $zero, L_8022F464
    if (ctx->r3 == 0) {
        // 0x8022F438: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F464;
    }
    // 0x8022F438: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F43C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022F440: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8022F444: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022F448: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x8022F44C: lhu         $v0, 0x198($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X198);
    // 0x8022F450: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022F454: lhu         $v0, 0x19A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19A);
    // 0x8022F458: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022F45C: lhu         $v0, 0x19C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19C);
    // 0x8022F460: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_8022F464:
    // 0x8022F464: lbu         $v0, 0x65($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X65);
    // 0x8022F468: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
    // 0x8022F46C: sb          $v1, 0x66($s4)
    MEM_B(0X66, ctx->r20) = ctx->r3;
    // 0x8022F470: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F474: sb          $v0, 0x65($s4)
    MEM_B(0X65, ctx->r20) = ctx->r2;
    // 0x8022F478: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F47C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022F480:
    // 0x8022F480: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022F484: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F488: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022F48C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022F490: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022F494: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F498: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022F49C: jr          $ra
    // 0x8022F4A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022F4A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802309DC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802309DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802309E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802309E4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802309E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802309EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802309F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802309F4: addiu       $s0, $s1, 0x440
    ctx->r16 = ADD32(ctx->r17, 0X440);
    // 0x802309F8: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x802309FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
L_80230A00:
    // 0x80230A00: lw          $v0, 0xE8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XE8);
    // 0x80230A04: bnel        $v0, $zero, L_80230A0C
    if (ctx->r2 != 0) {
        // 0x80230A08: sb          $a1, 0xA($v0)
        MEM_B(0XA, ctx->r2) = ctx->r5;
            goto L_80230A0C;
    }
    goto skip_0;
    // 0x80230A08: sb          $a1, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r5;
    skip_0:
L_80230A0C:
    // 0x80230A0C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80230A10: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80230A14: bne         $v0, $zero, L_80230A00
    if (ctx->r2 != 0) {
        // 0x80230A18: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80230A00;
    }
    // 0x80230A18: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80230A1C: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x80230A20: beq         $a0, $zero, L_80230A30
    if (ctx->r4 == 0) {
        // 0x80230A24: nop
    
            goto L_80230A30;
    }
    // 0x80230A24: nop

    // 0x80230A28: jal         0x8004F4F8
    // 0x80230A2C: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80230A2C: nop

    after_0:
L_80230A30:
    // 0x80230A30: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    // 0x80230A34: beq         $a0, $zero, L_80230A44
    if (ctx->r4 == 0) {
        // 0x80230A38: nop
    
            goto L_80230A44;
    }
    // 0x80230A38: nop

    // 0x80230A3C: jal         0x8004F4F8
    // 0x80230A40: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x80230A40: nop

    after_1:
L_80230A44:
    // 0x80230A44: jal         0x8004F488
    // 0x80230A48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_2;
    // 0x80230A48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80230A4C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230A50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230A54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230A58: jr          $ra
    // 0x80230A5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230A5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802329C0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802329C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802329C4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802329C8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802329CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802329D0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802329D4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802329D8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802329DC: jal         0x8004EFE4
    // 0x802329E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x802329E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802329E4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802329E8: bne         $s0, $zero, L_80232A08
    if (ctx->r16 != 0) {
        // 0x802329EC: addiu       $s2, $s3, 0x440
        ctx->r18 = ADD32(ctx->r19, 0X440);
            goto L_80232A08;
    }
    // 0x802329EC: addiu       $s2, $s3, 0x440
    ctx->r18 = ADD32(ctx->r19, 0X440);
    // 0x802329F0: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x802329F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802329F8: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x802329FC: sw          $zero, 0x80($v0)
    MEM_W(0X80, ctx->r2) = 0;
    // 0x80232A00: j           L_80232A74
    // 0x80232A04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80232A74;
    // 0x80232A04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80232A08:
    // 0x80232A08: sra         $v0, $s1, 3
    ctx->r2 = S32(SIGNED(ctx->r17) >> 3);
    // 0x80232A0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232A10: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80232A14: sw          $s0, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r16;
    // 0x80232A18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232A1C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80232A20: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232A24: sll         $a1, $s1, 3
    ctx->r5 = S32(ctx->r17 << 3);
    // 0x80232A28: addu        $a1, $a1, $s3
    ctx->r5 = ADD32(ctx->r5, ctx->r19);
    // 0x80232A2C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232A30: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    // 0x80232A34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232A38: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80232A3C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x80232A40: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x80232A44: jal         0x8009A3B4
    // 0x80232A48: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232A48: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    after_1:
    // 0x80232A4C: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80232A50: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80232A54: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x80232A58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232A5C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232A60: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80232A64: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80232A68: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80232A6C: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x80232A70: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
L_80232A74:
    // 0x80232A74: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80232A78: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80232A7C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232A80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232A84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232A88: jr          $ra
    // 0x80232A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230A68_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230A68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230A6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230A70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230A74: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230A78: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230A7C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230A80: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80230A84: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80230A88: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80230A8C: beq         $v1, $zero, L_80230AA8
    if (ctx->r3 == 0) {
        // 0x80230A90: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_80230AA8;
    }
    // 0x80230A90: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x80230A94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230A98: beq         $v1, $v0, L_80230ABC
    if (ctx->r3 == ctx->r2) {
        // 0x80230A9C: nop
    
            goto L_80230ABC;
    }
    // 0x80230A9C: nop

    // 0x80230AA0: j           L_80230C80
    // 0x80230AA4: nop

        goto L_80230C80;
    // 0x80230AA4: nop

L_80230AA8:
    // 0x80230AA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230AAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230AB0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80230AB4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80230AB8: sh          $v0, 0x444($s0)
    MEM_H(0X444, ctx->r16) = ctx->r2;
L_80230ABC:
    // 0x80230ABC: lb          $v0, 0x76($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X76);
    // 0x80230AC0: beq         $v0, $zero, L_80230AFC
    if (ctx->r2 == 0) {
        // 0x80230AC4: nop
    
            goto L_80230AFC;
    }
    // 0x80230AC4: nop

    // 0x80230AC8: lw          $v0, 0xC0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC0);
    // 0x80230ACC: bne         $v0, $s0, L_80230AFC
    if (ctx->r2 != ctx->r16) {
        // 0x80230AD0: nop
    
            goto L_80230AFC;
    }
    // 0x80230AD0: nop

    // 0x80230AD4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80230AD8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230ADC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80230AE0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230AE4: bgez        $v0, L_80230C80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80230AE8: nop
    
            goto L_80230C80;
    }
    // 0x80230AE8: nop

    // 0x80230AEC: jal         0x802325A0
    // 0x80230AF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802325A0_ovl13(rdram, ctx);
        goto after_0;
    // 0x80230AF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80230AF4: j           L_80230C60
    // 0x80230AF8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80230C60;
    // 0x80230AF8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80230AFC:
    // 0x80230AFC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80230B00: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230B04: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80230B08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230B0C: bgez        $v0, L_80230B24
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80230B10: nop
    
            goto L_80230B24;
    }
    // 0x80230B10: nop

    // 0x80230B14: jal         0x802325A0
    // 0x80230B18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802325A0_ovl13(rdram, ctx);
        goto after_1;
    // 0x80230B18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230B1C: j           L_80230C60
    // 0x80230B20: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80230C60;
    // 0x80230B20: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80230B24:
    // 0x80230B24: lh          $v0, 0x40($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X40);
    // 0x80230B28: bne         $v0, $zero, L_80230C80
    if (ctx->r2 != 0) {
        // 0x80230B2C: nop
    
            goto L_80230C80;
    }
    // 0x80230B2C: nop

    // 0x80230B30: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80230B34: lh          $a0, 0x49C6($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C6);
    // 0x80230B38: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80230B3C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80230B40: bltz        $v0, L_80230B58
    if (SIGNED(ctx->r2) < 0) {
        // 0x80230B44: slti        $v0, $v0, 0x200
        ctx->r2 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
            goto L_80230B58;
    }
    // 0x80230B44: slti        $v0, $v0, 0x200
    ctx->r2 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x80230B48: bne         $v0, $zero, L_80230B68
    if (ctx->r2 != 0) {
        // 0x80230B4C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80230B68;
    }
    // 0x80230B4C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230B50: j           L_80230C18
    // 0x80230B54: nop

        goto L_80230C18;
    // 0x80230B54: nop

L_80230B58:
    // 0x80230B58: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80230B5C: slti        $v0, $v0, 0x200
    ctx->r2 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x80230B60: beq         $v0, $zero, L_80230C18
    if (ctx->r2 == 0) {
        // 0x80230B64: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80230C18;
    }
    // 0x80230B64: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80230B68:
    // 0x80230B68: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230B6C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80230B70: jal         0x8004F820
    // 0x80230B74: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80230B74: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_2:
    // 0x80230B78: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80230B7C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80230B80: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80230B84: bltzl       $v0, L_80230BA0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80230B88: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80230BA0;
    }
    goto skip_0;
    // 0x80230B88: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x80230B8C: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x80230B90: bne         $v0, $zero, L_80230BAC
    if (ctx->r2 != 0) {
        // 0x80230B94: sll         $v0, $a0, 16
        ctx->r2 = S32(ctx->r4 << 16);
            goto L_80230BAC;
    }
    // 0x80230B94: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80230B98: j           L_80230BCC
    // 0x80230B9C: nop

        goto L_80230BCC;
    // 0x80230B9C: nop

L_80230BA0:
    // 0x80230BA0: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x80230BA4: beq         $v0, $zero, L_80230BCC
    if (ctx->r2 == 0) {
        // 0x80230BA8: sll         $v0, $a0, 16
        ctx->r2 = S32(ctx->r4 << 16);
            goto L_80230BCC;
    }
    // 0x80230BA8: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
L_80230BAC:
    // 0x80230BAC: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80230BB0: lui         $v0, 0x1F
    ctx->r2 = S32(0X1F << 16);
    // 0x80230BB4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80230BB8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80230BBC: bne         $v0, $zero, L_80230BCC
    if (ctx->r2 != 0) {
        // 0x80230BC0: sll         $v0, $a0, 16
        ctx->r2 = S32(ctx->r4 << 16);
            goto L_80230BCC;
    }
    // 0x80230BC0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80230BC4: j           L_80230C5C
    // 0x80230BC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80230C5C;
    // 0x80230BC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80230BCC:
    // 0x80230BCC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80230BD0: bltzl       $v0, L_80230BEC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80230BD4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80230BEC;
    }
    goto skip_1;
    // 0x80230BD4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x80230BD8: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x80230BDC: beq         $v0, $zero, L_80230C80
    if (ctx->r2 == 0) {
        // 0x80230BE0: nop
    
            goto L_80230C80;
    }
    // 0x80230BE0: nop

    // 0x80230BE4: j           L_80230BF8
    // 0x80230BE8: nop

        goto L_80230BF8;
    // 0x80230BE8: nop

L_80230BEC:
    // 0x80230BEC: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x80230BF0: beq         $v0, $zero, L_80230C80
    if (ctx->r2 == 0) {
        // 0x80230BF4: nop
    
            goto L_80230C80;
    }
    // 0x80230BF4: nop

L_80230BF8:
    // 0x80230BF8: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80230BFC: lui         $v0, 0x11F
    ctx->r2 = S32(0X11F << 16);
    // 0x80230C00: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80230C04: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80230C08: bne         $v0, $zero, L_80230C80
    if (ctx->r2 != 0) {
        // 0x80230C0C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80230C80;
    }
    // 0x80230C0C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80230C10: j           L_80230C60
    // 0x80230C14: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80230C60;
    // 0x80230C14: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80230C18:
    // 0x80230C18: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230C1C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230C20: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80230C24: jal         0x8004F820
    // 0x80230C28: addiu       $a3, $zero, 0x600
    ctx->r7 = ADD32(0, 0X600);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80230C28: addiu       $a3, $zero, 0x600
    ctx->r7 = ADD32(0, 0X600);
    after_3:
    // 0x80230C2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230C30: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80230C34: bltzl       $v0, L_80230C50
    if (SIGNED(ctx->r2) < 0) {
        // 0x80230C38: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80230C50;
    }
    goto skip_2;
    // 0x80230C38: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
    // 0x80230C3C: slti        $v0, $v0, 0x600
    ctx->r2 = SIGNED(ctx->r2) < 0X600 ? 1 : 0;
    // 0x80230C40: bne         $v0, $zero, L_80230C5C
    if (ctx->r2 != 0) {
        // 0x80230C44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230C5C;
    }
    // 0x80230C44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230C48: j           L_80230C80
    // 0x80230C4C: nop

        goto L_80230C80;
    // 0x80230C4C: nop

L_80230C50:
    // 0x80230C50: slti        $v0, $v0, 0x600
    ctx->r2 = SIGNED(ctx->r2) < 0X600 ? 1 : 0;
    // 0x80230C54: beq         $v0, $zero, L_80230C80
    if (ctx->r2 == 0) {
        // 0x80230C58: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230C80;
    }
    // 0x80230C58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80230C5C:
    // 0x80230C5C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80230C60:
    // 0x80230C60: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80230C64: lhu         $a0, 0x42($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X42);
    // 0x80230C68: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80230C6C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80230C70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80230C74: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x80230C78: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80230C7C: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_80230C80:
    // 0x80230C80: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230C84: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230C88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230C8C: jr          $ra
    // 0x80230C90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230C90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802300A0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802300A0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802300A4: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x802300A8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802300AC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x802300B0: addiu       $s1, $s2, 0x440
    ctx->r17 = ADD32(ctx->r18, 0X440);
    // 0x802300B4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x802300B8: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x802300BC: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x802300C0: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x802300C4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x802300C8: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x802300CC: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x802300D0: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x802300D4: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x802300D8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x802300DC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x802300E0: lbu         $v0, 0xAC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XAC);
    // 0x802300E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802300E8: addiu       $s0, $zero, 0xE
    ctx->r16 = ADD32(0, 0XE);
    // 0x802300EC: jal         0x8009A3B4
    // 0x802300F0: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802300F0: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    after_0:
    // 0x802300F4: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x802300F8: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x802300FC: jal         0x8009A3B4
    // 0x80230100: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230100: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230104: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x80230108: addiu       $a1, $s2, 0x54
    ctx->r5 = ADD32(ctx->r18, 0X54);
    // 0x8023010C: jal         0x8009A3B4
    // 0x80230110: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230110: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230114: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80230118: addiu       $v0, $s2, 0x70
    ctx->r2 = ADD32(ctx->r18, 0X70);
L_8023011C:
    // 0x8023011C: sh          $v1, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r3;
    // 0x80230120: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80230124: bgez        $s0, L_8023011C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80230128: addiu       $v0, $v0, -0x8
        ctx->r2 = ADD32(ctx->r2, -0X8);
            goto L_8023011C;
    }
    // 0x80230128: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8023012C: jal         0x800A3450
    // 0x80230130: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80230130: nop

    after_3:
    // 0x80230134: jal         0x80049EBC
    // 0x80230138: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    func_80049EBC_252BC(rdram, ctx);
        goto after_4;
    // 0x80230138: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    after_4:
    // 0x8023013C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80230140: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x80230144: beq         $v0, $zero, L_802301A8
    if (ctx->r2 == 0) {
        // 0x80230148: nop
    
            goto L_802301A8;
    }
    // 0x80230148: nop

    // 0x8023014C: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
    // 0x80230150: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80230154: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x80230158: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023015C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230160: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80230164: lh          $v0, 0x6E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X6E);
    // 0x80230168: lbu         $a0, 0xB($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XB);
    // 0x8023016C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230170: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x80230174: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80230178: blez        $v0, L_80230194
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023017C: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_80230194;
    }
    // 0x8023017C: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80230180: sh          $v0, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r2;
    // 0x80230184: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80230188: andi        $v0, $v0, 0xFBFF
    ctx->r2 = ctx->r2 & 0XFBFF;
    // 0x8023018C: j           L_802301A8
    // 0x80230190: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_802301A8;
    // 0x80230190: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80230194:
    // 0x80230194: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80230198: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x8023019C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802301A0: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x802301A4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_802301A8:
    // 0x802301A8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802301AC: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x802301B0: beq         $v0, $zero, L_80230214
    if (ctx->r2 == 0) {
        // 0x802301B4: nop
    
            goto L_80230214;
    }
    // 0x802301B4: nop

    // 0x802301B8: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
    // 0x802301BC: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x802301C0: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x802301C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802301C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802301CC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x802301D0: lh          $v0, 0x6E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X6E);
    // 0x802301D4: lbu         $a0, 0xF($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XF);
    // 0x802301D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802301DC: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x802301E0: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x802301E4: blez        $v0, L_80230200
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802301E8: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_80230200;
    }
    // 0x802301E8: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x802301EC: sh          $v0, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r2;
    // 0x802301F0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802301F4: andi        $v0, $v0, 0xBFFF
    ctx->r2 = ctx->r2 & 0XBFFF;
    // 0x802301F8: j           L_80230214
    // 0x802301FC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80230214;
    // 0x802301FC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80230200:
    // 0x80230200: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80230204: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x80230208: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8023020C: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x80230210: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
L_80230214:
    // 0x80230214: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80230218: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8023021C: beq         $v0, $zero, L_8023022C
    if (ctx->r2 == 0) {
        // 0x80230220: nop
    
            goto L_8023022C;
    }
    // 0x80230220: nop

    // 0x80230224: jal         0x80232A90
    // 0x80230228: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80232A90_ovl13(rdram, ctx);
        goto after_5;
    // 0x80230228: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
L_8023022C:
    // 0x8023022C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80230230: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80230234: beq         $v0, $zero, L_80230244
    if (ctx->r2 == 0) {
        // 0x80230238: nop
    
            goto L_80230244;
    }
    // 0x80230238: nop

    // 0x8023023C: jal         0x80232768
    // 0x80230240: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80232768_ovl13(rdram, ctx);
        goto after_6;
    // 0x80230240: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
L_80230244:
    // 0x80230244: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80230248: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023024C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230250: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230254: lw          $v0, -0x6940($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6940);
    // 0x80230258: jalr        $v0
    // 0x8023025C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x8023025C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x80230260: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80230264: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80230268: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023026C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80230270: ori         $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 | 0XFFFE;
    // 0x80230274: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x80230278: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023027C: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x80230280: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80230284: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80230288: beq         $v0, $zero, L_80230338
    if (ctx->r2 == 0) {
        // 0x8023028C: nop
    
            goto L_80230338;
    }
    // 0x8023028C: nop

    // 0x80230290: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x80230294: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80230298: beq         $v0, $zero, L_80230318
    if (ctx->r2 == 0) {
        // 0x8023029C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80230318;
    }
    // 0x8023029C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802302A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802302A4: addu        $at, $at, $v0
    gpr jr_addend_802302AC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802302A8: lw          $v0, -0x63B8($at)
    ctx->r2 = ADD32(ctx->r1, -0X63B8);
    // 0x802302AC: jr          $v0
    // 0x802302B0: nop

    switch (jr_addend_802302AC >> 2) {
        case 0: goto L_802302B4; break;
        case 1: goto L_80230318; break;
        case 2: goto L_80230318; break;
        case 3: goto L_802302C0; break;
        case 4: goto L_802302EC; break;
        case 5: goto L_802302EC; break;
        case 6: goto L_802302B4; break;
        case 7: goto L_80230318; break;
        case 8: goto L_80230318; break;
        case 9: goto L_80230318; break;
        case 10: goto L_802302EC; break;
        default: switch_error(__func__, 0x802302AC, 0x80239C48);
    }
    // 0x802302B0: nop

L_802302B4:
    // 0x802302B4: lbu         $v0, 0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XD);
    // 0x802302B8: j           L_80230328
    // 0x802302BC: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
        goto L_80230328;
    // 0x802302BC: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_802302C0:
    // 0x802302C0: lbu         $v1, 0xF($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XF);
    // 0x802302C4: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x802302C8: beq         $v0, $zero, L_802302EC
    if (ctx->r2 == 0) {
        // 0x802302CC: andi        $v0, $v1, 0xFB
        ctx->r2 = ctx->r3 & 0XFB;
            goto L_802302EC;
    }
    // 0x802302CC: andi        $v0, $v1, 0xFB
    ctx->r2 = ctx->r3 & 0XFB;
    // 0x802302D0: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    // 0x802302D4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802302D8: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x802302DC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802302E0: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
    // 0x802302E4: j           L_80230328
    // 0x802302E8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80230328;
    // 0x802302E8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802302EC:
    // 0x802302EC: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x802302F0: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x802302F4: beq         $v0, $zero, L_80230318
    if (ctx->r2 == 0) {
        // 0x802302F8: andi        $v0, $v1, 0xFEFF
        ctx->r2 = ctx->r3 & 0XFEFF;
            goto L_80230318;
    }
    // 0x802302F8: andi        $v0, $v1, 0xFEFF
    ctx->r2 = ctx->r3 & 0XFEFF;
    // 0x802302FC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80230300: lb          $v0, 0x76($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X76);
    // 0x80230304: beq         $v0, $zero, L_80230318
    if (ctx->r2 == 0) {
        // 0x80230308: nop
    
            goto L_80230318;
    }
    // 0x80230308: nop

    // 0x8023030C: lw          $v0, 0xC0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC0);
    // 0x80230310: beq         $v0, $s2, L_80230324
    if (ctx->r2 == ctx->r18) {
        // 0x80230314: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80230324;
    }
    // 0x80230314: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80230318:
    // 0x80230318: jal         0x802324F0
    // 0x8023031C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_802324F0_ovl13(rdram, ctx);
        goto after_8;
    // 0x8023031C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x80230320: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80230324:
    // 0x80230324: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_80230328:
    // 0x80230328: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8023032C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80230330: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80230334: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80230338:
    // 0x80230338: lh          $v0, 0x40($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X40);
    // 0x8023033C: beq         $v0, $zero, L_8023034C
    if (ctx->r2 == 0) {
        // 0x80230340: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023034C;
    }
    // 0x80230340: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230344: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80230348: sh          $v0, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r2;
L_8023034C:
    // 0x8023034C: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x80230350: beq         $v0, $zero, L_80230360
    if (ctx->r2 == 0) {
        // 0x80230354: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80230360;
    }
    // 0x80230354: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230358: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023035C: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_80230360:
    // 0x80230360: lbu         $v0, 0xAD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XAD);
    // 0x80230364: lbu         $a1, 0xAC($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0XAC);
    // 0x80230368: beq         $v0, $a1, L_80230380
    if (ctx->r2 == ctx->r5) {
        // 0x8023036C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80230380;
    }
    // 0x8023036C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80230370: jal         0x800502EC
    // 0x80230374: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_9;
    // 0x80230374: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x80230378: j           L_80230388
    // 0x8023037C: nop

        goto L_80230388;
    // 0x8023037C: nop

L_80230380:
    // 0x80230380: jal         0x800504EC
    // 0x80230384: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_10;
    // 0x80230384: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_10:
L_80230388:
    // 0x80230388: lhu         $v0, 0x42($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X42);
    // 0x8023038C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80230390: sh          $v0, -0x3D36($at)
    MEM_H(-0X3D36, ctx->r1) = ctx->r2;
    // 0x80230394: jal         0x80051248
    // 0x80230398: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_11;
    // 0x80230398: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_11:
    // 0x8023039C: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x802303A0: beq         $v0, $zero, L_802303B0
    if (ctx->r2 == 0) {
        // 0x802303A4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_802303B0;
    }
    // 0x802303A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802303A8: jal         0x802328F8
    // 0x802303AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_802328F8_ovl13(rdram, ctx);
        goto after_12;
    // 0x802303AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
L_802303B0:
    // 0x802303B0: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x802303B4: beq         $v0, $zero, L_802303C4
    if (ctx->r2 == 0) {
        // 0x802303B8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_802303C4;
    }
    // 0x802303B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802303BC: jal         0x802328F8
    // 0x802303C0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_802328F8_ovl13(rdram, ctx);
        goto after_13;
    // 0x802303C0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_13:
L_802303C4:
    // 0x802303C4: lhu         $v0, 0xF2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XF2);
    // 0x802303C8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802303CC: beql        $v0, $zero, L_80230418
    if (ctx->r2 == 0) {
        // 0x802303D0: sh          $zero, 0xF0($s1)
        MEM_H(0XF0, ctx->r17) = 0;
            goto L_80230418;
    }
    goto skip_0;
    // 0x802303D0: sh          $zero, 0xF0($s1)
    MEM_H(0XF0, ctx->r17) = 0;
    skip_0:
    // 0x802303D4: lh          $v0, 0xF0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XF0);
    // 0x802303D8: bne         $v0, $zero, L_802303E8
    if (ctx->r2 != 0) {
        // 0x802303DC: addiu       $a0, $zero, 0xF3
        ctx->r4 = ADD32(0, 0XF3);
            goto L_802303E8;
    }
    // 0x802303DC: addiu       $a0, $zero, 0xF3
    ctx->r4 = ADD32(0, 0XF3);
    // 0x802303E0: jal         0x8002A33C
    // 0x802303E4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_14;
    // 0x802303E4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_14:
L_802303E8:
    // 0x802303E8: lhu         $v0, 0xF0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XF0);
    // 0x802303EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802303F0: sh          $v0, 0xF0($s1)
    MEM_H(0XF0, ctx->r17) = ctx->r2;
    // 0x802303F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802303F8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802303FC: slti        $v0, $v0, 0x1F
    ctx->r2 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x80230400: bne         $v0, $zero, L_80230418
    if (ctx->r2 != 0) {
        // 0x80230404: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230418;
    }
    // 0x80230404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230408: sh          $v0, 0xF0($s1)
    MEM_H(0XF0, ctx->r17) = ctx->r2;
    // 0x8023040C: addiu       $a0, $zero, 0xF4
    ctx->r4 = ADD32(0, 0XF4);
    // 0x80230410: jal         0x8002A33C
    // 0x80230414: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_15;
    // 0x80230414: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_15:
L_80230418:
    // 0x80230418: lhu         $v0, 0xF2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XF2);
    // 0x8023041C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80230420: sh          $v0, 0xF2($s1)
    MEM_H(0XF2, ctx->r17) = ctx->r2;
    // 0x80230424: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x80230428: lhu         $v1, 0x2C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X2C);
    // 0x8023042C: lhu         $a0, 0x2E($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X2E);
    // 0x80230430: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80230434: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80230438: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8023043C: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80230440: lhu         $a1, 0x30($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X30);
    // 0x80230444: lhu         $v1, 0x18($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X18);
    // 0x80230448: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8023044C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80230450: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80230454: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80230458: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x8023045C: sh          $v1, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r3;
    // 0x80230460: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80230464: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x80230468: bne         $v0, $zero, L_802309B0
    if (ctx->r2 != 0) {
        // 0x8023046C: nop
    
            goto L_802309B0;
    }
    // 0x8023046C: nop

    // 0x80230470: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80230474: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230478: beq         $v0, $zero, L_802304C4
    if (ctx->r2 == 0) {
        // 0x8023047C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_802304C4;
    }
    // 0x8023047C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80230480: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x80230484: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80230488: jal         0x8003B564
    // 0x8023048C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8003B564_16964(rdram, ctx);
        goto after_16;
    // 0x8023048C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x80230490: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
    // 0x80230494: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80230498: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023049C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802304A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802304A4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802304A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802304AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802304B0: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x802304B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802304B8: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x802304BC: jal         0x80047284
    // 0x802304C0: or          $a3, $v0, $a3
    ctx->r7 = ctx->r2 | ctx->r7;
    func_80047284_22684(rdram, ctx);
        goto after_17;
    // 0x802304C0: or          $a3, $v0, $a3
    ctx->r7 = ctx->r2 | ctx->r7;
    after_17:
L_802304C4:
    // 0x802304C4: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x802304C8: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    // 0x802304CC: bne         $v0, $zero, L_802309B0
    if (ctx->r2 != 0) {
        // 0x802304D0: nop
    
            goto L_802309B0;
    }
    // 0x802304D0: nop

    // 0x802304D4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x802304D8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802304DC: beq         $v0, $zero, L_80230820
    if (ctx->r2 == 0) {
        // 0x802304E0: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_80230820;
    }
    // 0x802304E0: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x802304E4: beq         $v0, $zero, L_80230578
    if (ctx->r2 == 0) {
        // 0x802304E8: addiu       $s0, $s1, 0xC
        ctx->r16 = ADD32(ctx->r17, 0XC);
            goto L_80230578;
    }
    // 0x802304E8: addiu       $s0, $s1, 0xC
    ctx->r16 = ADD32(ctx->r17, 0XC);
    // 0x802304EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802304F0: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x802304F4: jal         0x8009A3B4
    // 0x802304F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x802304F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_18:
    // 0x802304FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230500: lh          $v0, 0xC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XC);
    // 0x80230504: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
    // 0x80230508: lh          $a2, 0x10($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X10);
    // 0x8023050C: addiu       $a1, $s1, 0x70
    ctx->r5 = ADD32(ctx->r17, 0X70);
    // 0x80230510: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230514: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80230518: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023051C: sw          $v0, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->r2;
    // 0x80230520: sw          $v1, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->r3;
    // 0x80230524: sw          $a2, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r6;
    // 0x80230528: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8023052C: addiu       $a3, $zero, 0xD00
    ctx->r7 = ADD32(0, 0XD00);
    // 0x80230530: addiu       $v0, $zero, -0x3200
    ctx->r2 = ADD32(0, -0X3200);
    // 0x80230534: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80230538: jal         0x8004DBA0
    // 0x8023053C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_19;
    // 0x8023053C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_19:
    // 0x80230540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230544: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80230548: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023054C: lbu         $v1, 0x1($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X1);
    // 0x80230550: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80230554: addiu       $v0, $s1, 0x14
    ctx->r2 = ADD32(ctx->r17, 0X14);
    // 0x80230558: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023055C: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80230560: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80230564: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230568: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023056C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80230570: jal         0x80051E18
    // 0x80230574: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_20;
    // 0x80230574: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_20:
L_80230578:
    // 0x80230578: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023057C: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x80230580: beq         $v0, $zero, L_80230730
    if (ctx->r2 == 0) {
        // 0x80230584: nop
    
            goto L_80230730;
    }
    // 0x80230584: nop

    // 0x80230588: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023058C: addiu       $s5, $s1, 0xC
    ctx->r21 = ADD32(ctx->r17, 0XC);
    // 0x80230590: addiu       $s7, $zero, 0x80
    ctx->r23 = ADD32(0, 0X80);
    // 0x80230594: addu        $s4, $s1, $zero
    ctx->r20 = ADD32(ctx->r17, 0);
    // 0x80230598: addiu       $s6, $zero, 0x88
    ctx->r22 = ADD32(0, 0X88);
    // 0x8023059C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_802305A0:
    // 0x802305A0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x802305A4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x802305A8: jal         0x8009A3B4
    // 0x802305AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_21;
    // 0x802305AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_21:
    // 0x802305B0: lh          $v0, 0xC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XC);
    // 0x802305B4: lh          $v1, 0xE($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XE);
    // 0x802305B8: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    // 0x802305BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802305C0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802305C4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802305C8: sw          $v0, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->r2;
    // 0x802305CC: sw          $v1, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->r3;
    // 0x802305D0: sw          $a0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r4;
    // 0x802305D4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x802305D8: lhu         $v0, 0x42($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X42);
    // 0x802305DC: addiu       $a1, $s1, 0x70
    ctx->r5 = ADD32(ctx->r17, 0X70);
    // 0x802305E0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x802305E4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x802305E8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802305EC: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x802305F0: lhu         $v0, -0x68F6($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X68F6);
    // 0x802305F4: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x802305F8: addu        $a3, $a3, $s3
    ctx->r7 = ADD32(ctx->r7, ctx->r19);
    // 0x802305FC: lhu         $a3, -0x68F8($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X68F8);
    // 0x80230600: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80230604: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x80230608: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023060C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80230610: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230614: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80230618: lhu         $v0, -0x68F4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X68F4);
    // 0x8023061C: sll         $a3, $a3, 20
    ctx->r7 = S32(ctx->r7 << 20);
    // 0x80230620: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80230624: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x80230628: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023062C: jal         0x8004DBA0
    // 0x80230630: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_22;
    // 0x80230630: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_22:
    // 0x80230634: lbu         $v1, 0x1($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X1);
    // 0x80230638: addu        $v0, $s1, $s6
    ctx->r2 = ADD32(ctx->r17, ctx->r22);
    // 0x8023063C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80230640: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80230644: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80230648: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
    // 0x8023064C: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80230650: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x80230654: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80230658: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023065C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230660: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80230664: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80230668: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023066C: lbu         $v1, 0xD($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XD);
    // 0x80230670: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80230674: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80230678: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023067C: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    // 0x80230680: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230684: jal         0x80051E18
    // 0x80230688: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_23;
    // 0x80230688: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_23:
    // 0x8023068C: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x80230690: slti        $v1, $s0, 0x2
    ctx->r3 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80230694: srl         $v0, $a0, 12
    ctx->r2 = S32(U32(ctx->r4) >> 12);
    // 0x80230698: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8023069C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802306A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802306A4: beq         $v0, $zero, L_80230718
    if (ctx->r2 == 0) {
        // 0x802306A8: andi        $v0, $a0, 0x8000
        ctx->r2 = ctx->r4 & 0X8000;
            goto L_80230718;
    }
    // 0x802306A8: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x802306AC: beq         $v0, $zero, L_802306F4
    if (ctx->r2 == 0) {
        // 0x802306B0: andi        $v0, $a0, 0x7FFF
        ctx->r2 = ctx->r4 & 0X7FFF;
            goto L_802306F4;
    }
    // 0x802306B0: andi        $v0, $a0, 0x7FFF
    ctx->r2 = ctx->r4 & 0X7FFF;
    // 0x802306B4: jal         0x8004F144
    // 0x802306B8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_24;
    // 0x802306B8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    after_24:
    // 0x802306BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802306C0: beq         $v1, $zero, L_802306F4
    if (ctx->r3 == 0) {
        // 0x802306C4: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_802306F4;
    }
    // 0x802306C4: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x802306C8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x802306CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802306D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802306D4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802306D8: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x802306DC: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x802306E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802306E4: sb          $s7, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r23;
    // 0x802306E8: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x802306EC: jal         0x8009A3B4
    // 0x802306F0: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_25;
    // 0x802306F0: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    after_25:
L_802306F4:
    // 0x802306F4: lw          $v1, 0xE8($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XE8);
    // 0x802306F8: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x802306FC: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80230700: lw          $v1, 0xE8($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XE8);
    // 0x80230704: lhu         $v0, 0xE($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XE);
    // 0x80230708: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8023070C: lw          $v1, 0xE8($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XE8);
    // 0x80230710: lhu         $v0, 0x10($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X10);
    // 0x80230714: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_80230718:
    // 0x80230718: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8023071C: addiu       $s6, $s6, 0x10
    ctx->r22 = ADD32(ctx->r22, 0X10);
    // 0x80230720: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80230724: slti        $v0, $s0, 0x6
    ctx->r2 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x80230728: bne         $v0, $zero, L_802305A0
    if (ctx->r2 != 0) {
        // 0x8023072C: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_802305A0;
    }
    // 0x8023072C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
L_80230730:
    // 0x80230730: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80230734: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80230738: beq         $v0, $zero, L_802307A8
    if (ctx->r2 == 0) {
        // 0x8023073C: addiu       $s0, $s1, 0x58
        ctx->r16 = ADD32(ctx->r17, 0X58);
            goto L_802307A8;
    }
    // 0x8023073C: addiu       $s0, $s1, 0x58
    ctx->r16 = ADD32(ctx->r17, 0X58);
    // 0x80230740: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230744: addiu       $a1, $s2, 0x1C0
    ctx->r5 = ADD32(ctx->r18, 0X1C0);
    // 0x80230748: jal         0x8009A3B4
    // 0x8023074C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_26;
    // 0x8023074C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_26:
    // 0x80230750: lbu         $v1, 0x1($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X1);
    // 0x80230754: addiu       $v0, $s1, 0x60
    ctx->r2 = ADD32(ctx->r17, 0X60);
    // 0x80230758: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023075C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80230760: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
    // 0x80230764: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80230768: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023076C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230770: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230774: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230778: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023077C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80230780: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230784: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x80230788: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8023078C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230790: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80230794: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80230798: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023079C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802307A0: jal         0x80051E18
    // 0x802307A4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_27;
    // 0x802307A4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_27:
L_802307A8:
    // 0x802307A8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802307AC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802307B0: beq         $v0, $zero, L_80230820
    if (ctx->r2 == 0) {
        // 0x802307B4: addiu       $s0, $s1, 0x48
        ctx->r16 = ADD32(ctx->r17, 0X48);
            goto L_80230820;
    }
    // 0x802307B4: addiu       $s0, $s1, 0x48
    ctx->r16 = ADD32(ctx->r17, 0X48);
    // 0x802307B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802307BC: addiu       $a1, $s2, 0x198
    ctx->r5 = ADD32(ctx->r18, 0X198);
    // 0x802307C0: jal         0x8009A3B4
    // 0x802307C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_28;
    // 0x802307C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_28:
    // 0x802307C8: lbu         $v1, 0x1($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X1);
    // 0x802307CC: addiu       $v0, $s1, 0x50
    ctx->r2 = ADD32(ctx->r17, 0X50);
    // 0x802307D0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802307D4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802307D8: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
    // 0x802307DC: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x802307E0: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x802307E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802307E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802307EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802307F0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802307F4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x802307F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802307FC: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x80230800: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80230804: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230808: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023080C: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80230810: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80230814: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230818: jal         0x80051E18
    // 0x8023081C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_29;
    // 0x8023081C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_29:
L_80230820:
    // 0x80230820: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80230824: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x80230828: bne         $v0, $zero, L_802309B0
    if (ctx->r2 != 0) {
        // 0x8023082C: nop
    
            goto L_802309B0;
    }
    // 0x8023082C: nop

    // 0x80230830: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230834: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230838: bltz        $v0, L_802309B0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023083C: nop
    
            goto L_802309B0;
    }
    // 0x8023083C: nop

    // 0x80230840: lhu         $a0, 0xF2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XF2);
    // 0x80230844: andi        $v0, $a0, 0x40
    ctx->r2 = ctx->r4 & 0X40;
    // 0x80230848: bne         $v0, $zero, L_80230880
    if (ctx->r2 != 0) {
        // 0x8023084C: nop
    
            goto L_80230880;
    }
    // 0x8023084C: nop

    // 0x80230850: lh          $v1, 0xB0($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XB0);
    // 0x80230854: bltzl       $v1, L_8023085C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80230858: addiu       $v1, $v1, 0x3
        ctx->r3 = ADD32(ctx->r3, 0X3);
            goto L_8023085C;
    }
    goto skip_1;
    // 0x80230858: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    skip_1:
L_8023085C:
    // 0x8023085C: lh          $v0, 0xF8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XF8);
    // 0x80230860: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x80230864: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80230868: beq         $v0, $zero, L_80230880
    if (ctx->r2 == 0) {
        // 0x8023086C: ori         $v0, $a0, 0x70
        ctx->r2 = ctx->r4 | 0X70;
            goto L_80230880;
    }
    // 0x8023086C: ori         $v0, $a0, 0x70
    ctx->r2 = ctx->r4 | 0X70;
    // 0x80230870: sh          $v0, 0xF2($s1)
    MEM_H(0XF2, ctx->r17) = ctx->r2;
    // 0x80230874: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80230878: jal         0x800616FC
    // 0x8023087C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_30;
    // 0x8023087C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_30:
L_80230880:
    // 0x80230880: lhu         $a1, 0xF2($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0XF2);
    // 0x80230884: andi        $v0, $a1, 0x20
    ctx->r2 = ctx->r5 & 0X20;
    // 0x80230888: bne         $v0, $zero, L_802308C8
    if (ctx->r2 != 0) {
        // 0x8023088C: nop
    
            goto L_802308C8;
    }
    // 0x8023088C: nop

    // 0x80230890: lhu         $v0, 0xB0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XB0);
    // 0x80230894: lh          $a0, 0xF8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XF8);
    // 0x80230898: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023089C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802308A0: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x802308A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802308A8: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x802308AC: slt         $a0, $a0, $v1
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802308B0: beq         $a0, $zero, L_802308C8
    if (ctx->r4 == 0) {
        // 0x802308B4: ori         $v0, $a1, 0x30
        ctx->r2 = ctx->r5 | 0X30;
            goto L_802308C8;
    }
    // 0x802308B4: ori         $v0, $a1, 0x30
    ctx->r2 = ctx->r5 | 0X30;
    // 0x802308B8: sh          $v0, 0xF2($s1)
    MEM_H(0XF2, ctx->r17) = ctx->r2;
    // 0x802308BC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802308C0: jal         0x800616FC
    // 0x802308C4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_31;
    // 0x802308C4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_31:
L_802308C8:
    // 0x802308C8: lhu         $a0, 0xF2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XF2);
    // 0x802308CC: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x802308D0: bne         $v0, $zero, L_80230900
    if (ctx->r2 != 0) {
        // 0x802308D4: andi        $v0, $a0, 0x8
        ctx->r2 = ctx->r4 & 0X8;
            goto L_80230900;
    }
    // 0x802308D4: andi        $v0, $a0, 0x8
    ctx->r2 = ctx->r4 & 0X8;
    // 0x802308D8: lh          $v1, 0xB0($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XB0);
    // 0x802308DC: lh          $v0, 0xF8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XF8);
    // 0x802308E0: beq         $v1, $v0, L_802308FC
    if (ctx->r3 == ctx->r2) {
        // 0x802308E4: ori         $v0, $a0, 0x10
        ctx->r2 = ctx->r4 | 0X10;
            goto L_802308FC;
    }
    // 0x802308E4: ori         $v0, $a0, 0x10
    ctx->r2 = ctx->r4 | 0X10;
    // 0x802308E8: sh          $v0, 0xF2($s1)
    MEM_H(0XF2, ctx->r17) = ctx->r2;
    // 0x802308EC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802308F0: jal         0x800616FC
    // 0x802308F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_32;
    // 0x802308F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_32:
    // 0x802308F8: lhu         $a0, 0xF2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XF2);
L_802308FC:
    // 0x802308FC: andi        $v0, $a0, 0x8
    ctx->r2 = ctx->r4 & 0X8;
L_80230900:
    // 0x80230900: bne         $v0, $zero, L_80230938
    if (ctx->r2 != 0) {
        // 0x80230904: nop
    
            goto L_80230938;
    }
    // 0x80230904: nop

    // 0x80230908: lh          $v1, 0xF4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XF4);
    // 0x8023090C: bltzl       $v1, L_80230914
    if (SIGNED(ctx->r3) < 0) {
        // 0x80230910: addiu       $v1, $v1, 0x3
        ctx->r3 = ADD32(ctx->r3, 0X3);
            goto L_80230914;
    }
    goto skip_2;
    // 0x80230910: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    skip_2:
L_80230914:
    // 0x80230914: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80230918: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x8023091C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80230920: beq         $v0, $zero, L_80230938
    if (ctx->r2 == 0) {
        // 0x80230924: ori         $v0, $a0, 0xE
        ctx->r2 = ctx->r4 | 0XE;
            goto L_80230938;
    }
    // 0x80230924: ori         $v0, $a0, 0xE
    ctx->r2 = ctx->r4 | 0XE;
    // 0x80230928: sh          $v0, 0xF2($s1)
    MEM_H(0XF2, ctx->r17) = ctx->r2;
    // 0x8023092C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80230930: jal         0x800616FC
    // 0x80230934: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_33;
    // 0x80230934: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_33:
L_80230938:
    // 0x80230938: lhu         $a1, 0xF2($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0XF2);
    // 0x8023093C: andi        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 & 0X4;
    // 0x80230940: bne         $v0, $zero, L_80230980
    if (ctx->r2 != 0) {
        // 0x80230944: nop
    
            goto L_80230980;
    }
    // 0x80230944: nop

    // 0x80230948: lhu         $v0, 0xF4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XF4);
    // 0x8023094C: lh          $a0, 0x46($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X46);
    // 0x80230950: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230954: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80230958: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x8023095C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230960: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80230964: slt         $a0, $a0, $v1
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80230968: beq         $a0, $zero, L_80230980
    if (ctx->r4 == 0) {
        // 0x8023096C: ori         $v0, $a1, 0x6
        ctx->r2 = ctx->r5 | 0X6;
            goto L_80230980;
    }
    // 0x8023096C: ori         $v0, $a1, 0x6
    ctx->r2 = ctx->r5 | 0X6;
    // 0x80230970: sh          $v0, 0xF2($s1)
    MEM_H(0XF2, ctx->r17) = ctx->r2;
    // 0x80230974: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80230978: jal         0x800616FC
    // 0x8023097C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_34;
    // 0x8023097C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_34:
L_80230980:
    // 0x80230980: lhu         $a0, 0xF2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XF2);
    // 0x80230984: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
    // 0x80230988: bne         $v0, $zero, L_802309B0
    if (ctx->r2 != 0) {
        // 0x8023098C: nop
    
            goto L_802309B0;
    }
    // 0x8023098C: nop

    // 0x80230990: lh          $v1, 0xF4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XF4);
    // 0x80230994: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80230998: beq         $v1, $v0, L_802309B0
    if (ctx->r3 == ctx->r2) {
        // 0x8023099C: ori         $v0, $a0, 0x2
        ctx->r2 = ctx->r4 | 0X2;
            goto L_802309B0;
    }
    // 0x8023099C: ori         $v0, $a0, 0x2
    ctx->r2 = ctx->r4 | 0X2;
    // 0x802309A0: sh          $v0, 0xF2($s1)
    MEM_H(0XF2, ctx->r17) = ctx->r2;
    // 0x802309A4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802309A8: jal         0x800616FC
    // 0x802309AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_35;
    // 0x802309AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_35:
L_802309B0:
    // 0x802309B0: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x802309B4: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x802309B8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x802309BC: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x802309C0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x802309C4: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x802309C8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x802309CC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x802309D0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x802309D4: jr          $ra
    // 0x802309D8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x802309D8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80225C64_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C64: jr          $ra
    // 0x80225C68: nop

    TRACE_RETURN()
    return;
    // 0x80225C68: nop

;}
RECOMP_FUNC void func_80237634_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237634: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237638: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023763C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80237640: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x80237644: bgtz        $v0, L_8023765C
    if (SIGNED(ctx->r2) > 0) {
        // 0x80237648: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8023765C;
    }
    // 0x80237648: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023764C: jal         0x8004F5C4
    // 0x80237650: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80237650: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80237654: j           L_80237674
    // 0x80237658: nop

        goto L_80237674;
    // 0x80237658: nop

L_8023765C:
    // 0x8023765C: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x80237660: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80237664: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x80237668: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x8023766C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80237670: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_80237674:
    // 0x80237674: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237678: jr          $ra
    // 0x8023767C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023767C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226B58_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B58: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80226B5C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80226B60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226B64: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80226B68: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80226B6C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80226B70: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80226B74: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226B78: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226B7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226B80: jal         0x8009A3B4
    // 0x80226B84: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80226B84: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226B88: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80226B8C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80226B90: jal         0x8009A3B4
    // 0x80226B94: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226B94: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80226B98: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80226B9C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80226BA0: jal         0x8009A3B4
    // 0x80226BA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80226BA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80226BA8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226BAC: jal         0x800A3450
    // 0x80226BB0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80226BB0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80226BB4: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x80226BB8: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x80226BBC: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x80226BC0: andi        $v1, $v1, 0x104
    ctx->r3 = ctx->r3 & 0X104;
    // 0x80226BC4: bne         $v1, $v0, L_80226BD4
    if (ctx->r3 != ctx->r2) {
        // 0x80226BC8: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80226BD4;
    }
    // 0x80226BC8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80226BCC: jal         0x80227618
    // 0x80226BD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227618_ovl13(rdram, ctx);
        goto after_4;
    // 0x80226BD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80226BD4:
    // 0x80226BD4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226BD8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226BDC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226BE0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226BE4: lw          $v0, -0x72A4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X72A4);
    // 0x80226BE8: jalr        $v0
    // 0x80226BEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80226BEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80226BF0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80226BF4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226BF8: beq         $v0, $zero, L_80226C38
    if (ctx->r2 == 0) {
        // 0x80226BFC: nop
    
            goto L_80226C38;
    }
    // 0x80226BFC: nop

    // 0x80226C00: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80226C04: bltz        $v1, L_80226C28
    if (SIGNED(ctx->r3) < 0) {
        // 0x80226C08: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_80226C28;
    }
    // 0x80226C08: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80226C0C: bne         $v0, $zero, L_80226C24
    if (ctx->r2 != 0) {
        // 0x80226C10: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80226C24;
    }
    // 0x80226C10: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226C14: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226C18: bnel        $v1, $v0, L_80226C2C
    if (ctx->r3 != ctx->r2) {
        // 0x80226C1C: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_80226C2C;
    }
    goto skip_0;
    // 0x80226C1C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_0:
    // 0x80226C20: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80226C24:
    // 0x80226C24: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80226C28:
    // 0x80226C28: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80226C2C:
    // 0x80226C2C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80226C30: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80226C34: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_80226C38:
    // 0x80226C38: lhu         $v0, 0x36($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X36);
    // 0x80226C3C: bne         $v0, $zero, L_80226C6C
    if (ctx->r2 != 0) {
        // 0x80226C40: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80226C6C;
    }
    // 0x80226C40: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80226C44: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80226C48: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80226C4C: beq         $v0, $zero, L_80226C6C
    if (ctx->r2 == 0) {
        // 0x80226C50: nop
    
            goto L_80226C6C;
    }
    // 0x80226C50: nop

    // 0x80226C54: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80226C58: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80226C5C: bne         $v0, $zero, L_80226C6C
    if (ctx->r2 != 0) {
        // 0x80226C60: nop
    
            goto L_80226C6C;
    }
    // 0x80226C60: nop

    // 0x80226C64: jal         0x8004F418
    // 0x80226C68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x80226C68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80226C6C:
    // 0x80226C6C: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x80226C70: beq         $v0, $zero, L_80226C80
    if (ctx->r2 == 0) {
        // 0x80226C74: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80226C80;
    }
    // 0x80226C74: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226C78: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80226C7C: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
L_80226C80:
    // 0x80226C80: lhu         $v0, 0x36($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X36);
    // 0x80226C84: beq         $v0, $zero, L_80226C90
    if (ctx->r2 == 0) {
        // 0x80226C88: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80226C90;
    }
    // 0x80226C88: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226C8C: sh          $v0, 0x36($s2)
    MEM_H(0X36, ctx->r18) = ctx->r2;
L_80226C90:
    // 0x80226C90: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80226C94: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226C98: beq         $v0, $a1, L_80226CB0
    if (ctx->r2 == ctx->r5) {
        // 0x80226C9C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226CB0;
    }
    // 0x80226C9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226CA0: jal         0x80050294
    // 0x80226CA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80226CA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80226CA8: j           L_80226CB8
    // 0x80226CAC: nop

        goto L_80226CB8;
    // 0x80226CAC: nop

L_80226CB0:
    // 0x80226CB0: jal         0x8005044C
    // 0x80226CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80226CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_80226CB8:
    // 0x80226CB8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226CBC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80226CC0: beq         $v0, $zero, L_80226CD8
    if (ctx->r2 == 0) {
        // 0x80226CC4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226CD8;
    }
    // 0x80226CC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226CC8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80226CCC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80226CD0: jal         0x8003B564
    // 0x80226CD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x80226CD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_80226CD8:
    // 0x80226CD8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226CDC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226CE0: beq         $v0, $zero, L_80226D50
    if (ctx->r2 == 0) {
        // 0x80226CE4: nop
    
            goto L_80226D50;
    }
    // 0x80226CE4: nop

    // 0x80226CE8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80226CEC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80226CF0: beq         $v0, $zero, L_80226D50
    if (ctx->r2 == 0) {
        // 0x80226CF4: addiu       $s1, $s2, 0xC
        ctx->r17 = ADD32(ctx->r18, 0XC);
            goto L_80226D50;
    }
    // 0x80226CF4: addiu       $s1, $s2, 0xC
    ctx->r17 = ADD32(ctx->r18, 0XC);
    // 0x80226CF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226CFC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226D00: jal         0x8009A3B4
    // 0x80226D04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80226D04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x80226D08: lhu         $v0, 0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XE);
    // 0x80226D0C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x80226D10: sh          $v0, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r2;
    // 0x80226D14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226D18: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80226D1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226D20: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80226D24: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80226D28: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x80226D2C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80226D30: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80226D34: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80226D38: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80226D3C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80226D40: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226D44: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80226D48: jal         0x80051E18
    // 0x80226D4C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_11;
    // 0x80226D4C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_11:
L_80226D50:
    // 0x80226D50: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80226D54: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80226D58: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80226D5C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80226D60: jr          $ra
    // 0x80226D64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80226D64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022A690_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A690: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022A694: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A698: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022A69C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A6A0: bne         $v0, $zero, L_8022A6AC
    if (ctx->r2 != 0) {
        // 0x8022A6A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A6AC;
    }
    // 0x8022A6A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A6A8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022A6AC:
    // 0x8022A6AC: jr          $ra
    // 0x8022A6B0: nop

    TRACE_RETURN()
    return;
    // 0x8022A6B0: nop

;}
RECOMP_FUNC void func_80225630_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225634: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225638: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8022563C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225640: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225644: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225648: lw          $v0, -0x7C60($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7C60);
    // 0x8022564C: jalr        $v0
    // 0x80225650: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225650: nop

    after_0:
    // 0x80225654: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225658: jr          $ra
    // 0x8022565C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022565C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236FB8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236FB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80236FBC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80236FC0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80236FC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80236FC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80236FCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80236FD0: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x80236FD4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80236FD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236FDC: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x80236FE0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80236FE4: bne         $v0, $v1, L_802370D8
    if (ctx->r2 != ctx->r3) {
        // 0x80236FE8: nop
    
            goto L_802370D8;
    }
    // 0x80236FE8: nop

    // 0x80236FEC: jal         0x8004F144
    // 0x80236FF0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80236FF0: nop

    after_0:
    // 0x80236FF4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80236FF8: beq         $s1, $zero, L_802370D8
    if (ctx->r17 == 0) {
        // 0x80236FFC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802370D8;
    }
    // 0x80236FFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237000: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80237004: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80237008: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x8023700C: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80237010: jal         0x800A3450
    // 0x80237014: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80237014: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_1:
    // 0x80237018: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8023701C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237020: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x80237024: jal         0x800A3450
    // 0x80237028: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80237028: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    after_2:
    // 0x8023702C: lhu         $v1, 0x1C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1C);
    // 0x80237030: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80237034: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237038: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x8023703C: lhu         $v0, 0x1E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1E);
    // 0x80237040: jal         0x800A3450
    // 0x80237044: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80237044: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    after_3:
    // 0x80237048: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x8023704C: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80237050: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x80237054: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80237058: sw          $a0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r4;
    // 0x8023705C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237060: jal         0x800A3450
    // 0x80237064: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80237064: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    after_4:
    // 0x80237068: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023706C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80237070: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80237074: sb          $v0, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r2;
    // 0x80237078: sb          $zero, 0x23($s1)
    MEM_B(0X23, ctx->r17) = 0;
    // 0x8023707C: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x80237080: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237084: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237088: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
    // 0x8023708C: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x80237090: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80237094: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x80237098: sw          $s2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r18;
    // 0x8023709C: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x802370A0: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x802370A4: blez        $v0, L_802370C8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802370A8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_802370C8;
    }
    // 0x802370A8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_802370AC:
    // 0x802370AC: jal         0x80236EE0
    // 0x802370B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80236EE0_ovl13(rdram, ctx);
        goto after_5;
    // 0x802370B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x802370B4: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x802370B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802370BC: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802370C0: bne         $v0, $zero, L_802370AC
    if (ctx->r2 != 0) {
        // 0x802370C4: nop
    
            goto L_802370AC;
    }
    // 0x802370C4: nop

L_802370C8:
    // 0x802370C8: jal         0x800A3450
    // 0x802370CC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x802370CC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_6:
    // 0x802370D0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802370D4: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_802370D8:
    // 0x802370D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802370DC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802370E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802370E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802370E8: jr          $ra
    // 0x802370EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802370EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80235E20_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235E24: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80235E28: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80235E2C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235E30: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80235E34: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80235E38: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80235E3C: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x80235E40: bne         $v0, $zero, L_80235E4C
    if (ctx->r2 != 0) {
        // 0x80235E44: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235E4C;
    }
    // 0x80235E44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235E48: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
L_80235E4C:
    // 0x80235E4C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80235E50: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x80235E54: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    // 0x80235E58: jal         0x8009A3B4
    // 0x80235E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80235E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80235E60: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235E64: jr          $ra
    // 0x80235E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234424_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234424: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80234428: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8023442C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80234430: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80234434: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x80234438: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8023443C: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80234440: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80234444: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80234448: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8023444C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80234450: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80234454: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
L_80234458:
    // 0x80234458: lw          $v0, 0xD0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XD0);
    // 0x8023445C: andi        $v1, $s7, 0xFF
    ctx->r3 = ctx->r23 & 0XFF;
    // 0x80234460: sll         $s0, $v1, 3
    ctx->r16 = S32(ctx->r3 << 3);
    // 0x80234464: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x80234468: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023446C: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x80234470: lh          $a0, -0x6708($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X6708);
    // 0x80234474: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234478: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023447C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80234480: beq         $v0, $zero, L_8023463C
    if (ctx->r2 == 0) {
        // 0x80234484: addiu       $v0, $a0, 0x10
        ctx->r2 = ADD32(ctx->r4, 0X10);
            goto L_8023463C;
    }
    // 0x80234484: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x80234488: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023448C: beq         $v0, $zero, L_80234640
    if (ctx->r2 == 0) {
        // 0x80234490: andi        $v0, $s7, 0xFF
        ctx->r2 = ctx->r23 & 0XFF;
            goto L_80234640;
    }
    // 0x80234490: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x80234494: jal         0x8003B878
    // 0x80234498: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x80234498: nop

    after_0:
    // 0x8023449C: lw          $a0, 0xD0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XD0);
    // 0x802344A0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802344A4: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x802344A8: lhu         $v1, -0x6708($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6708);
    // 0x802344AC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802344B0: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x802344B4: lh          $a1, -0x6702($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X6702);
    // 0x802344B8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x802344BC: subu        $a3, $a0, $v1
    ctx->r7 = SUB32(ctx->r4, ctx->r3);
    // 0x802344C0: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x802344C4: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802344C8: sll         $v1, $t0, 1
    ctx->r3 = S32(ctx->r8 << 1);
    // 0x802344CC: sh          $a3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r7;
    // 0x802344D0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802344D4: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x802344D8: lhu         $a0, -0x6704($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X6704);
    // 0x802344DC: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x802344E0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802344E4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x802344E8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x802344EC: bgez        $a1, L_802344F8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x802344F0: andi        $a0, $a0, 0xFFF
        ctx->r4 = ctx->r4 & 0XFFF;
            goto L_802344F8;
    }
    // 0x802344F0: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x802344F4: addiu       $a1, $a1, 0xF
    ctx->r5 = ADD32(ctx->r5, 0XF);
L_802344F8:
    // 0x802344F8: sra         $v0, $a1, 4
    ctx->r2 = S32(SIGNED(ctx->r5) >> 4);
    // 0x802344FC: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234500: mflo        $v0
    ctx->r2 = lo;
    // 0x80234504: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234508: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8023450C: lh          $v1, -0x6706($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X6706);
    // 0x80234510: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80234514: bgez        $v1, L_80234520
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80234518: subu        $fp, $a2, $v0
        ctx->r30 = SUB32(ctx->r6, ctx->r2);
            goto L_80234520;
    }
    // 0x80234518: subu        $fp, $a2, $v0
    ctx->r30 = SUB32(ctx->r6, ctx->r2);
    // 0x8023451C: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
L_80234520:
    // 0x80234520: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80234524: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234528: mflo        $v0
    ctx->r2 = lo;
    // 0x8023452C: subu        $s0, $a1, $v0
    ctx->r16 = SUB32(ctx->r5, ctx->r2);
    // 0x80234530: slti        $v0, $t0, 0x8
    ctx->r2 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x80234534: beq         $v0, $zero, L_8023455C
    if (ctx->r2 == 0) {
        // 0x80234538: addiu       $v0, $t0, 0x1
        ctx->r2 = ADD32(ctx->r8, 0X1);
            goto L_8023455C;
    }
    // 0x80234538: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
    // 0x8023453C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80234540: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234544: sll         $s3, $v1, 2
    ctx->r19 = S32(ctx->r3 << 2);
    // 0x80234548: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8023454C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80234550: sll         $s6, $v1, 2
    ctx->r22 = S32(ctx->r3 << 2);
    // 0x80234554: j           L_80234568
    // 0x80234558: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
        goto L_80234568;
    // 0x80234558: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
L_8023455C:
    // 0x8023455C: addiu       $s3, $zero, 0x60
    ctx->r19 = ADD32(0, 0X60);
    // 0x80234560: addiu       $s6, $zero, 0xE0
    ctx->r22 = ADD32(0, 0XE0);
    // 0x80234564: addiu       $s5, $zero, 0x60
    ctx->r21 = ADD32(0, 0X60);
L_80234568:
    // 0x80234568: jal         0x800324B4
    // 0x8023456C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8023456C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    after_1:
    // 0x80234570: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80234574: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80234578: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023457C: mflo        $v0
    ctx->r2 = lo;
    // 0x80234580: lhu         $v1, 0x14($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X14);
    // 0x80234584: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234588: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023458C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234590: jal         0x80032498
    // 0x80234594: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80234594: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x80234598: nop

    // 0x8023459C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802345A0: mflo        $v0
    ctx->r2 = lo;
    // 0x802345A4: lhu         $v1, 0x18($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X18);
    // 0x802345A8: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x802345AC: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    // 0x802345B0: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802345B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802345B8: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x802345BC: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x802345C0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802345C4: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x802345C8: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x802345CC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x802345D0: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x802345D4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802345D8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802345DC: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x802345E0: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x802345E4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x802345E8: sw          $a0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r4;
    // 0x802345EC: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x802345F0: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x802345F4: ori         $a1, $a1, 0x2040
    ctx->r5 = ctx->r5 | 0X2040;
    // 0x802345F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802345FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234600: sw          $v1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r3;
    // 0x80234604: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80234608: lui         $v0, 0x2E
    ctx->r2 = S32(0X2E << 16);
    // 0x8023460C: ori         $v0, $v0, 0x205F
    ctx->r2 = ctx->r2 | 0X205F;
    // 0x80234610: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80234614: addiu       $v0, $zero, 0x3F40
    ctx->r2 = ADD32(0, 0X3F40);
    // 0x80234618: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8023461C: addiu       $v0, $zero, 0x3F5F
    ctx->r2 = ADD32(0, 0X3F5F);
    // 0x80234620: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x80234624: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80234628: sw          $a1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r5;
    // 0x8023462C: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80234630: sw          $zero, 0x20($s2)
    MEM_W(0X20, ctx->r18) = 0;
    // 0x80234634: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234638: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
L_8023463C:
    // 0x8023463C: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
L_80234640:
    // 0x80234640: lhu         $t1, 0x1E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X1E);
    // 0x80234644: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80234648: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023464C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234650: lh          $v1, -0x6708($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X6708);
    // 0x80234654: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x80234658: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023465C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80234660: bne         $v0, $v1, L_80234680
    if (ctx->r2 != ctx->r3) {
        // 0x80234664: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_80234680;
    }
    // 0x80234664: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80234668: lbu         $v0, 0xB($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XB);
    // 0x8023466C: lhu         $v1, 0x98($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X98);
    // 0x80234670: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234674: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80234678: sb          $v0, 0xB($s4)
    MEM_B(0XB, ctx->r20) = ctx->r2;
    // 0x8023467C: sh          $v1, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r3;
L_80234680:
    // 0x80234680: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x80234684: sltiu       $v0, $v0, 0x18
    ctx->r2 = ctx->r2 < 0X18 ? 1 : 0;
    // 0x80234688: bne         $v0, $zero, L_80234458
    if (ctx->r2 != 0) {
        // 0x8023468C: nop
    
            goto L_80234458;
    }
    // 0x8023468C: nop

    // 0x80234690: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80234694: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80234698: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8023469C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802346A0: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802346A4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802346A8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802346AC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802346B0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802346B4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802346B8: jr          $ra
    // 0x802346BC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x802346BC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8022E64C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E64C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E650: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022E654: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E658: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022E65C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022E660: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022E664: beq         $v0, $zero, L_8022E6EC
    if (ctx->r2 == 0) {
        // 0x8022E668: addiu       $s1, $s0, 0x2E8
        ctx->r17 = ADD32(ctx->r16, 0X2E8);
            goto L_8022E6EC;
    }
    // 0x8022E668: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    // 0x8022E66C: lb          $v0, 0x330($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X330);
    // 0x8022E670: bne         $v0, $zero, L_8022E68C
    if (ctx->r2 != 0) {
        // 0x8022E674: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022E68C;
    }
    // 0x8022E674: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E678: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022E67C: jal         0x8002A33C
    // 0x8022E680: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022E680: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022E684: j           L_8022E690
    // 0x8022E688: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
        goto L_8022E690;
    // 0x8022E688: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
L_8022E68C:
    // 0x8022E68C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8022E690:
    // 0x8022E690: sb          $v0, 0x330($s0)
    MEM_B(0X330, ctx->r16) = ctx->r2;
    // 0x8022E694: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E698: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022E69C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E6A0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022E6A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022E6A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022E6AC: jal         0x8004DBA0
    // 0x8022E6B0: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_1;
    // 0x8022E6B0: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    after_1:
    // 0x8022E6B4: jal         0x80040F30
    // 0x8022E6B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022E6B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022E6BC: andi        $v0, $v0, 0x3000
    ctx->r2 = ctx->r2 & 0X3000;
    // 0x8022E6C0: bne         $v0, $zero, L_8022E6DC
    if (ctx->r2 != 0) {
        // 0x8022E6C4: nop
    
            goto L_8022E6DC;
    }
    // 0x8022E6C4: nop

    // 0x8022E6C8: jal         0x8003E934
    // 0x8022E6CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022E6CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022E6D0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022E6D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E6D8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022E6DC:
    // 0x8022E6DC: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x8022E6E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E6E4: j           L_8022E6FC
    // 0x8022E6E8: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
        goto L_8022E6FC;
    // 0x8022E6E8: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
L_8022E6EC:
    // 0x8022E6EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E6F0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022E6F4: sb          $zero, 0x336($s0)
    MEM_B(0X336, ctx->r16) = 0;
    // 0x8022E6F8: sb          $zero, 0x33B($s0)
    MEM_B(0X33B, ctx->r16) = 0;
L_8022E6FC:
    // 0x8022E6FC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022E700: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022E704: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022E708: jr          $ra
    // 0x8022E70C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022E70C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022D868_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D868: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D86C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D870: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D874: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D878: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D87C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022D880: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8022D884: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8022D888: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D88C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022D890: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022D894: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8022D898: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8022D89C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022D8A0: lui         $v0, 0xA00
    ctx->r2 = S32(0XA00 << 16);
    // 0x8022D8A4: bne         $v1, $v0, L_8022D8BC
    if (ctx->r3 != ctx->r2) {
        // 0x8022D8A8: addiu       $s0, $s1, 0x2E8
        ctx->r16 = ADD32(ctx->r17, 0X2E8);
            goto L_8022D8BC;
    }
    // 0x8022D8A8: addiu       $s0, $s1, 0x2E8
    ctx->r16 = ADD32(ctx->r17, 0X2E8);
    // 0x8022D8AC: jal         0x8004D5FC
    // 0x8022D8B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x8022D8B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8022D8B4: j           L_8022D8CC
    // 0x8022D8B8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
        goto L_8022D8CC;
    // 0x8022D8B8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
L_8022D8BC:
    // 0x8022D8BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D8C0: jal         0x8004D5D4
    // 0x8022D8C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022D8C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x8022D8C8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
L_8022D8CC:
    // 0x8022D8CC: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x8022D8D0: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x8022D8D4: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x8022D8D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022D8DC: sb          $v0, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r2;
    // 0x8022D8E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D8E4: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x8022D8E8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022D8EC: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
    // 0x8022D8F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D8F4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022D8F8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8022D8FC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x8022D900: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x8022D904: sb          $zero, 0x50($s0)
    MEM_B(0X50, ctx->r16) = 0;
    // 0x8022D908: sb          $zero, 0x53($s0)
    MEM_B(0X53, ctx->r16) = 0;
    // 0x8022D90C: sb          $zero, 0x54($s0)
    MEM_B(0X54, ctx->r16) = 0;
    // 0x8022D910: sb          $zero, 0x4E($s0)
    MEM_B(0X4E, ctx->r16) = 0;
    // 0x8022D914: sb          $zero, 0x48($s0)
    MEM_B(0X48, ctx->r16) = 0;
    // 0x8022D918: sb          $zero, 0x49($s0)
    MEM_B(0X49, ctx->r16) = 0;
    // 0x8022D91C: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x8022D920: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022D924: beq         $v1, $zero, L_8022D93C
    if (ctx->r3 == 0) {
        // 0x8022D928: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D93C;
    }
    // 0x8022D928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D92C: bnel        $v1, $v0, L_8022D940
    if (ctx->r3 != ctx->r2) {
        // 0x8022D930: addiu       $a0, $s0, 0x18
        ctx->r4 = ADD32(ctx->r16, 0X18);
            goto L_8022D940;
    }
    goto skip_0;
    // 0x8022D930: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    skip_0:
    // 0x8022D934: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022D938: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8022D93C:
    // 0x8022D93C: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
L_8022D940:
    // 0x8022D940: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8022D944: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022D948: jal         0x800540BC
    // 0x8022D94C: sh          $zero, 0x42($s0)
    MEM_H(0X42, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x8022D94C: sh          $zero, 0x42($s0)
    MEM_H(0X42, ctx->r16) = 0;
    after_2:
    // 0x8022D950: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022D954: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022D958: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022D95C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D960: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D964: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022D968: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022D96C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D970: sb          $zero, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = 0;
    // 0x8022D974: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022D978: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D97C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D980: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022D984: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022D988: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    // 0x8022D98C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022D990: addiu       $v0, $v0, -0x69E0
    ctx->r2 = ADD32(ctx->r2, -0X69E0);
    // 0x8022D994: sb          $zero, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = 0;
    // 0x8022D998: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022D99C: sb          $zero, 0x74($s1)
    MEM_B(0X74, ctx->r17) = 0;
    // 0x8022D9A0: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    // 0x8022D9A4: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022D9A8: sh          $v1, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r3;
    // 0x8022D9AC: sh          $v1, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r3;
    // 0x8022D9B0: jal         0x800502EC
    // 0x8022D9B4: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_3;
    // 0x8022D9B4: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    after_3:
    // 0x8022D9B8: jal         0x80051248
    // 0x8022D9BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_4;
    // 0x8022D9BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022D9C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D9C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D9C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D9CC: jr          $ra
    // 0x8022D9D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D9D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233578_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233578: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023357C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80233580: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80233584: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80233588: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023358C: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80233590: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x80233594: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233598: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8023359C: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x802335A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802335A4: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x802335A8: beq         $a0, $v0, L_802335C4
    if (ctx->r4 == ctx->r2) {
        // 0x802335AC: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_802335C4;
    }
    // 0x802335AC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x802335B0: bne         $a0, $v0, L_802335C0
    if (ctx->r4 != ctx->r2) {
        // 0x802335B4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802335C0;
    }
    // 0x802335B4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802335B8: j           L_802335C4
    // 0x802335BC: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_802335C4;
    // 0x802335BC: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_802335C0:
    // 0x802335C0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_802335C4:
    // 0x802335C4: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x802335C8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x802335CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802335D0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802335D4: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x802335D8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802335DC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802335E0: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802335E4: beq         $a0, $v1, L_8023360C
    if (ctx->r4 == ctx->r3) {
        // 0x802335E8: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8023360C;
    }
    // 0x802335E8: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x802335EC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x802335F0: jal         0x8003B85C
    // 0x802335F4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x802335F4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x802335F8: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x802335FC: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80233600: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80233604: jal         0x8003B840
    // 0x80233608: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80233608: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8023360C:
    // 0x8023360C: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x80233610: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80233614: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80233618: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8023361C: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80233620: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x80233624: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80233628: beq         $v1, $v0, L_80233644
    if (ctx->r3 == ctx->r2) {
        // 0x8023362C: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80233644;
    }
    // 0x8023362C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80233630: bne         $v1, $v0, L_80233640
    if (ctx->r3 != ctx->r2) {
        // 0x80233634: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80233640;
    }
    // 0x80233634: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80233638: j           L_80233644
    // 0x8023363C: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_80233644;
    // 0x8023363C: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_80233640:
    // 0x80233640: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_80233644:
    // 0x80233644: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x80233648: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8023364C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233650: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80233654: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x80233658: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8023365C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80233660: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80233664: beq         $a0, $v1, L_8023368C
    if (ctx->r4 == ctx->r3) {
        // 0x80233668: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8023368C;
    }
    // 0x80233668: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8023366C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80233670: jal         0x8003B85C
    // 0x80233674: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80233674: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80233678: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8023367C: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80233680: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80233684: jal         0x8003B840
    // 0x80233688: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80233688: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_8023368C:
    // 0x8023368C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80233690: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x80233694: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80233698: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023369C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802336A0: jr          $ra
    // 0x802336A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802336A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022FD20_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FD20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FD24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FD28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FD2C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022FD30: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022FD34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FD38: jal         0x8009A3B4
    // 0x8022FD3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022FD3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022FD40: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022FD44: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022FD48: jal         0x8009A3B4
    // 0x8022FD4C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022FD4C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022FD50: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022FD54: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022FD58: jal         0x8009A3B4
    // 0x8022FD5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022FD5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022FD60: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FD64: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FD68: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022FD6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FD70: beq         $v1, $v0, L_8022FDF8
    if (ctx->r3 == ctx->r2) {
        // 0x8022FD74: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022FDF8;
    }
    // 0x8022FD74: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022FD78: beql        $v0, $zero, L_8022FD90
    if (ctx->r2 == 0) {
        // 0x8022FD7C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022FD90;
    }
    goto skip_0;
    // 0x8022FD7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022FD80: beq         $v1, $zero, L_8022FDA8
    if (ctx->r3 == 0) {
        // 0x8022FD84: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FDA8;
    }
    // 0x8022FD84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FD88: j           L_8022FE40
    // 0x8022FD8C: nop

        goto L_8022FE40;
    // 0x8022FD8C: nop

L_8022FD90:
    // 0x8022FD90: beq         $v1, $v0, L_8022FE40
    if (ctx->r3 == ctx->r2) {
        // 0x8022FD94: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022FE40;
    }
    // 0x8022FD94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FD98: beq         $v1, $v0, L_8022FE04
    if (ctx->r3 == ctx->r2) {
        // 0x8022FD9C: nop
    
            goto L_8022FE04;
    }
    // 0x8022FD9C: nop

    // 0x8022FDA0: j           L_8022FE40
    // 0x8022FDA4: nop

        goto L_8022FE40;
    // 0x8022FDA4: nop

L_8022FDA8:
    // 0x8022FDA8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FDAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FDB0: ori         $v0, $v0, 0x42
    ctx->r2 = ctx->r2 | 0X42;
    // 0x8022FDB4: jal         0x8004D5D4
    // 0x8022FDB8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022FDB8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022FDBC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FDC0: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
    // 0x8022FDC4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022FDC8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022FDCC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022FDD0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022FDD4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022FDD8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022FDDC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022FDE0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022FDE4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022FDE8: sh          $zero, 0x500($s0)
    MEM_H(0X500, ctx->r16) = 0;
    // 0x8022FDEC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022FDF0: j           L_8022FE40
    // 0x8022FDF4: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_8022FE40;
    // 0x8022FDF4: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022FDF8:
    // 0x8022FDF8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022FDFC: j           L_8022FE40
    // 0x8022FE00: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
        goto L_8022FE40;
    // 0x8022FE00: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
L_8022FE04:
    // 0x8022FE04: lh          $v0, 0x500($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X500);
    // 0x8022FE08: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x8022FE0C: beq         $v0, $zero, L_8022FE34
    if (ctx->r2 == 0) {
        // 0x8022FE10: nop
    
            goto L_8022FE34;
    }
    // 0x8022FE10: nop

    // 0x8022FE14: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022FE18: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FE1C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022FE20: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022FE24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FE28: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x8022FE2C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022FE30: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022FE34:
    // 0x8022FE34: lhu         $v0, 0x500($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X500);
    // 0x8022FE38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FE3C: sh          $v0, 0x500($s0)
    MEM_H(0X500, ctx->r16) = ctx->r2;
L_8022FE40:
    // 0x8022FE40: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FE44: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022FE48: beq         $a1, $v0, L_8022FE60
    if (ctx->r5 == ctx->r2) {
        // 0x8022FE4C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FE60;
    }
    // 0x8022FE4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FE50: jal         0x80050294
    // 0x8022FE54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022FE54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022FE58: j           L_8022FE68
    // 0x8022FE5C: nop

        goto L_8022FE68;
    // 0x8022FE5C: nop

L_8022FE60:
    // 0x8022FE60: jal         0x8005044C
    // 0x8022FE64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022FE64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8022FE68:
    // 0x8022FE68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FE6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FE70: jr          $ra
    // 0x8022FE74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FE74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022FE78: nop

    // 0x8022FE7C: nop

;}
RECOMP_FUNC void func_80229944_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229948: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022994C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229954: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80229958: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022995C: jal         0x8004FA7C
    // 0x80229960: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80229960: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80229964: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80229968: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022996C: bne         $v0, $zero, L_80229998
    if (ctx->r2 != 0) {
        // 0x80229970: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229998;
    }
    // 0x80229970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229974: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x80229978: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022997C: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x80229980: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229984: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229988: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022998C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80229990: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80229994: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_80229998:
    // 0x80229998: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022999C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802299A0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802299A4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802299A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802299AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802299B0: jr          $ra
    // 0x802299B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802299B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802296B8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802296B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802296BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802296C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802296C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802296C8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802296CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802296D0: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x802296D4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802296D8: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x802296DC: jal         0x8022B798
    // 0x802296E0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_8022B798_ovl13(rdram, ctx);
        goto after_0;
    // 0x802296E0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x802296E4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802296E8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802296EC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802296F0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802296F4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802296F8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802296FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229700: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229704: jr          $ra
    // 0x80229708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C524_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C528: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C52C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C530: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022C534: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C53C: jal         0x8009A3B4
    // 0x8022C540: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C540: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022C544: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022C548: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C54C: jal         0x8009A3B4
    // 0x8022C550: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C550: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022C554: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022C558: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022C55C: jal         0x8009A3B4
    // 0x8022C560: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C560: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022C564: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C568: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C56C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C570: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C574: lw          $v0, -0x6A3C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6A3C);
    // 0x8022C578: jalr        $v0
    // 0x8022C57C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022C57C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C584: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C588: jr          $ra
    // 0x8022C58C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C58C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226314_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226314: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226318: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022631C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226320: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226324: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226328: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022632C: bne         $v0, $zero, L_80226358
    if (ctx->r2 != 0) {
        // 0x80226330: nop
    
            goto L_80226358;
    }
    // 0x80226330: nop

    // 0x80226334: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80226338: addiu       $s0, $s0, -0x7694
    ctx->r16 = ADD32(ctx->r16, -0X7694);
    // 0x8022633C: jal         0x8005FA7C
    // 0x80226340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80226340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80226344: jal         0x8005FA7C
    // 0x80226348: addiu       $a0, $s0, -0x3C
    ctx->r4 = ADD32(ctx->r16, -0X3C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80226348: addiu       $a0, $s0, -0x3C
    ctx->r4 = ADD32(ctx->r16, -0X3C);
    after_1:
    // 0x8022634C: jal         0x8005FA7C
    // 0x80226350: addiu       $a0, $s0, -0x28
    ctx->r4 = ADD32(ctx->r16, -0X28);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80226350: addiu       $a0, $s0, -0x28
    ctx->r4 = ADD32(ctx->r16, -0X28);
    after_2:
    // 0x80226354: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
L_80226358:
    // 0x80226358: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x8022635C: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80226360: beq         $v0, $zero, L_80226484
    if (ctx->r2 == 0) {
        // 0x80226364: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226484;
    }
    // 0x80226364: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226368: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022636C: addu        $at, $at, $v0
    gpr jr_addend_80226374 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226370: lw          $v0, -0x6550($at)
    ctx->r2 = ADD32(ctx->r1, -0X6550);
    // 0x80226374: jr          $v0
    // 0x80226378: nop

    switch (jr_addend_80226374 >> 2) {
        case 0: goto L_8022637C; break;
        case 1: goto L_80226398; break;
        case 2: goto L_802263B0; break;
        case 3: goto L_802263E8; break;
        case 4: goto L_802263FC; break;
        case 5: goto L_80226424; break;
        default: switch_error(__func__, 0x80226374, 0x80239AB0);
    }
    // 0x80226378: nop

L_8022637C:
    // 0x8022637C: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80226380: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80226384: bne         $v1, $v0, L_8022648C
    if (ctx->r3 != ctx->r2) {
        // 0x80226388: nop
    
            goto L_8022648C;
    }
    // 0x80226388: nop

    // 0x8022638C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226390: j           L_80226414
    // 0x80226394: sb          $zero, -0x621C($at)
    MEM_B(-0X621C, ctx->r1) = 0;
        goto L_80226414;
    // 0x80226394: sb          $zero, -0x621C($at)
    MEM_B(-0X621C, ctx->r1) = 0;
L_80226398:
    // 0x80226398: jal         0x802267FC
    // 0x8022639C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_802267FC_ovl13(rdram, ctx);
        goto after_3;
    // 0x8022639C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x802263A0: beq         $v0, $zero, L_8022648C
    if (ctx->r2 == 0) {
        // 0x802263A4: nop
    
            goto L_8022648C;
    }
    // 0x802263A4: nop

    // 0x802263A8: j           L_80226414
    // 0x802263AC: nop

        goto L_80226414;
    // 0x802263AC: nop

L_802263B0:
    // 0x802263B0: jal         0x802267FC
    // 0x802263B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802267FC_ovl13(rdram, ctx);
        goto after_4;
    // 0x802263B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x802263B8: jal         0x802266E4
    // 0x802263BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_802266E4_ovl13(rdram, ctx);
        goto after_5;
    // 0x802263BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
    // 0x802263C0: beq         $v0, $zero, L_802263D4
    if (ctx->r2 == 0) {
        // 0x802263C4: nop
    
            goto L_802263D4;
    }
    // 0x802263C4: nop

    // 0x802263C8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802263CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802263D0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_802263D4:
    // 0x802263D4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802263D8: lhu         $v0, -0x6220($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X6220);
    // 0x802263DC: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    // 0x802263E0: j           L_80226468
    // 0x802263E4: addiu       $v0, $v0, -0x54
    ctx->r2 = ADD32(ctx->r2, -0X54);
        goto L_80226468;
    // 0x802263E4: addiu       $v0, $v0, -0x54
    ctx->r2 = ADD32(ctx->r2, -0X54);
L_802263E8:
    // 0x802263E8: jal         0x802267FC
    // 0x802263EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802267FC_ovl13(rdram, ctx);
        goto after_6;
    // 0x802263EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x802263F0: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x802263F4: j           L_8022640C
    // 0x802263F8: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
        goto L_8022640C;
    // 0x802263F8: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
L_802263FC:
    // 0x802263FC: jal         0x802267FC
    // 0x80226400: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802267FC_ovl13(rdram, ctx);
        goto after_7;
    // 0x80226400: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x80226404: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80226408: addiu       $v0, $zero, 0x208
    ctx->r2 = ADD32(0, 0X208);
L_8022640C:
    // 0x8022640C: bne         $v1, $v0, L_8022648C
    if (ctx->r3 != ctx->r2) {
        // 0x80226410: nop
    
            goto L_8022648C;
    }
    // 0x80226410: nop

L_80226414:
    // 0x80226414: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226418: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022641C: j           L_8022648C
    // 0x80226420: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_8022648C;
    // 0x80226420: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80226424:
    // 0x80226424: jal         0x802267FC
    // 0x80226428: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802267FC_ovl13(rdram, ctx);
        goto after_8;
    // 0x80226428: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x8022642C: jal         0x802266E4
    // 0x80226430: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802266E4_ovl13(rdram, ctx);
        goto after_9;
    // 0x80226430: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x80226434: beq         $v0, $zero, L_80226448
    if (ctx->r2 == 0) {
        // 0x80226438: nop
    
            goto L_80226448;
    }
    // 0x80226438: nop

    // 0x8022643C: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80226440: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226444: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80226448:
    // 0x80226448: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022644C: lhu         $v0, -0x6220($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X6220);
    // 0x80226450: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x80226454: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80226458: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x8022645C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
    // 0x80226460: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    // 0x80226464: addiu       $v0, $v0, -0x34
    ctx->r2 = ADD32(ctx->r2, -0X34);
L_80226468:
    // 0x80226468: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8022646C: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80226470: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
    // 0x80226474: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    // 0x80226478: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x8022647C: j           L_8022648C
    // 0x80226480: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_8022648C;
    // 0x80226480: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_80226484:
    // 0x80226484: jal         0x802267FC
    // 0x80226488: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802267FC_ovl13(rdram, ctx);
        goto after_10;
    // 0x80226488: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
L_8022648C:
    // 0x8022648C: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80226490: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226494: lhu         $v0, -0x6220($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X6220);
    // 0x80226498: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x8022649C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802264A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802264A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802264A8: jr          $ra
    // 0x802264AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802264AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
