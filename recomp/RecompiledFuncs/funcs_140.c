#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023328C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023328C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233290: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233294: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233298: jal         0x8005044C
    // 0x8023329C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x8023329C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802332A0: jal         0x80040F30
    // 0x802332A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x802332A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802332A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802332AC: jal         0x8003E934
    // 0x802332B0: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x802332B0: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    after_2:
    // 0x802332B4: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x802332B8: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x802332BC: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x802332C0: bnel        $v1, $zero, L_802332F4
    if (ctx->r3 != 0) {
        // 0x802332C4: sh          $v0, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r2;
            goto L_802332F4;
    }
    goto skip_0;
    // 0x802332C4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    skip_0:
    // 0x802332C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802332CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802332D0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x802332D4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802332D8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802332DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802332E0: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x802332E4: jal         0x80050294
    // 0x802332E8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x802332E8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_3:
    // 0x802332EC: j           L_802332FC
    // 0x802332F0: nop

        goto L_802332FC;
    // 0x802332F0: nop

L_802332F4:
    // 0x802332F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802332F8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_802332FC:
    // 0x802332FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233300: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233304: jr          $ra
    // 0x80233308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023330C: nop

;}
RECOMP_FUNC void func_80229894_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229894: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80229898: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022989C: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x802298A0: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x802298A4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x802298A8: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x802298AC: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x802298B0: div         $zero, $v0, $s6
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r22)));
    // 0x802298B4: bne         $s6, $zero, L_802298C0
    if (ctx->r22 != 0) {
        // 0x802298B8: nop
    
            goto L_802298C0;
    }
    // 0x802298B8: nop

    // 0x802298BC: break       7
    do_break(2149750972);
L_802298C0:
    // 0x802298C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802298C4: bne         $s6, $at, L_802298D8
    if (ctx->r22 != ctx->r1) {
        // 0x802298C8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802298D8;
    }
    // 0x802298C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802298CC: bne         $v0, $at, L_802298D8
    if (ctx->r2 != ctx->r1) {
        // 0x802298D0: nop
    
            goto L_802298D8;
    }
    // 0x802298D0: nop

    // 0x802298D4: break       6
    do_break(2149750996);
L_802298D8:
    // 0x802298D8: mflo        $t0
    ctx->r8 = lo;
    // 0x802298DC: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x802298E0: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x802298E4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x802298E8: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x802298EC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802298F0: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x802298F4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802298F8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x802298FC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80229900: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80229904: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80229908: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022990C: blez        $s6, L_80229A3C
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80229910: sw          $t0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r8;
            goto L_80229A3C;
    }
    // 0x80229910: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80229914: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x80229918: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8022991C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229920: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80229924: sll         $fp, $s5, 4
    ctx->r30 = S32(ctx->r21 << 4);
L_80229928:
    // 0x80229928: jal         0x8004F144
    // 0x8022992C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022992C: nop

    after_0:
    // 0x80229930: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80229934: beq         $s0, $zero, L_80229A18
    if (ctx->r16 == 0) {
        // 0x80229938: lui         $v1, 0x2E80
        ctx->r3 = S32(0X2E80 << 16);
            goto L_80229A18;
    }
    // 0x80229938: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8022993C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80229940: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229944: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80229948: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022994C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80229950: sb          $s7, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r23;
    // 0x80229954: sb          $s5, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r21;
    // 0x80229958: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x8022995C: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x80229960: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80229964: lhu         $v0, 0x2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X2);
    // 0x80229968: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x8022996C: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x80229970: beq         $s7, $zero, L_802299A4
    if (ctx->r23 == 0) {
        // 0x80229974: sh          $v0, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r2;
            goto L_802299A4;
    }
    // 0x80229974: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80229978: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8022997C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229980: addiu       $v0, $v0, -0x4DD0
    ctx->r2 = ADD32(ctx->r2, -0X4DD0);
    // 0x80229984: addu        $s1, $t0, $v0
    ctx->r17 = ADD32(ctx->r8, ctx->r2);
    // 0x80229988: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x8022998C: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80229990: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x80229994: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x80229998: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8022999C: j           L_802299C8
    // 0x802299A0: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
        goto L_802299C8;
    // 0x802299A0: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
L_802299A4:
    // 0x802299A4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802299A8: addiu       $v0, $v0, -0x4E70
    ctx->r2 = ADD32(ctx->r2, -0X4E70);
    // 0x802299AC: addu        $s1, $fp, $v0
    ctx->r17 = ADD32(ctx->r30, ctx->r2);
    // 0x802299B0: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x802299B4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x802299B8: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x802299BC: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x802299C0: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x802299C4: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
L_802299C8:
    // 0x802299C8: jal         0x800324B4
    // 0x802299CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x802299CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x802299D0: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x802299D4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802299D8: mflo        $v0
    ctx->r2 = lo;
    // 0x802299DC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802299E0: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802299E4: jal         0x80032498
    // 0x802299E8: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x802299E8: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    after_2:
    // 0x802299EC: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x802299F0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802299F4: mflo        $v0
    ctx->r2 = lo;
    // 0x802299F8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802299FC: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x80229A00: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80229A04: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
    // 0x80229A08: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80229A0C: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x80229A10: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x80229A14: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80229A18:
    // 0x80229A18: jal         0x800A3450
    // 0x80229A1C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80229A1C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_3:
    // 0x80229A20: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80229A24: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80229A28: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80229A2C: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x80229A30: slt         $v0, $s3, $s6
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80229A34: bne         $v0, $zero, L_80229928
    if (ctx->r2 != 0) {
        // 0x80229A38: nop
    
            goto L_80229928;
    }
    // 0x80229A38: nop

L_80229A3C:
    // 0x80229A3C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80229A40: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80229A44: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80229A48: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80229A4C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80229A50: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80229A54: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80229A58: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80229A5C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80229A60: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80229A64: jr          $ra
    // 0x80229A68: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80229A68: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80229A6C: nop

;}
RECOMP_FUNC void func_80233148_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233148: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023314C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233150: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233154: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233158: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023315C: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x80233160: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80233164: bne         $v0, $zero, L_80233180
    if (ctx->r2 != 0) {
        // 0x80233168: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80233180;
    }
    // 0x80233168: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8023316C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80233170: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80233174: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80233178: beq         $v0, $zero, L_802331D4
    if (ctx->r2 == 0) {
        // 0x8023317C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802331D4;
    }
    // 0x8023317C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80233180:
    // 0x80233180: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80233184: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80233188: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8023318C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80233190: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x80233194: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80233198: bne         $v0, $zero, L_802331A4
    if (ctx->r2 != 0) {
        // 0x8023319C: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_802331A4;
    }
    // 0x8023319C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x802331A0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_802331A4:
    // 0x802331A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802331A8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802331AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802331B0: jal         0x80050294
    // 0x802331B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802331B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802331B8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802331BC: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x802331C0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802331C4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802331C8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802331CC: j           L_802331E4
    // 0x802331D0: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
        goto L_802331E4;
    // 0x802331D0: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
L_802331D4:
    // 0x802331D4: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x802331D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802331DC: jal         0x8004DA90
    // 0x802331E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802331E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_802331E4:
    // 0x802331E4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802331E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802331EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802331F0: jr          $ra
    // 0x802331F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802331F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BB04_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BB04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022BB08: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022BB0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BB10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022BB14: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BB18: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BB1C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BB20: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BB24: lw          $v0, -0x4C64($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4C64);
    // 0x8022BB28: jalr        $v0
    // 0x8022BB2C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022BB2C: nop

    after_0:
    // 0x8022BB30: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x8022BB34: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x8022BB38: jal         0x80031600
    // 0x8022BB3C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x8022BB3C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022BB40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BB44: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022BB48: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022BB4C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022BB50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022BB54: jal         0x80031DA8
    // 0x8022BB58: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8022BB58: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022BB5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022BB60: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022BB64: jr          $ra
    // 0x8022BB68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022BB68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80228E18_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228E1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228E20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228E28: lw          $v0, 0xF0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF0);
    // 0x80228E2C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80228E30: bnel        $v0, $zero, L_80228E38
    if (ctx->r2 != 0) {
        // 0x80228E34: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80228E38;
    }
    goto skip_0;
    // 0x80228E34: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_80228E38:
    // 0x80228E38: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x80228E3C: bne         $v0, $zero, L_80228E60
    if (ctx->r2 != 0) {
        // 0x80228E40: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_80228E60;
    }
    // 0x80228E40: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80228E44: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80228E48: sh          $v0, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r2;
    // 0x80228E4C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228E50: sh          $zero, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = 0;
    // 0x80228E54: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228E58: j           L_80228EB8
    // 0x80228E5C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80228EB8;
    // 0x80228E5C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80228E60:
    // 0x80228E60: lw          $v0, 0xFC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XFC);
    // 0x80228E64: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228E68: beq         $v0, $zero, L_80228E94
    if (ctx->r2 == 0) {
        // 0x80228E6C: nop
    
            goto L_80228E94;
    }
    // 0x80228E6C: nop

    // 0x80228E70: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228E74: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228E78: sh          $zero, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = 0;
    // 0x80228E7C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228E80: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80228E84: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228E88: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228E8C: j           L_80228EB8
    // 0x80228E90: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80228EB8;
    // 0x80228E90: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80228E94:
    // 0x80228E94: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228E98: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80228E9C: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80228EA0: jal         0x8004DA90
    // 0x80228EA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80228EA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80228EA8: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80228EAC: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80228EB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228EB4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80228EB8:
    // 0x80228EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228EBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228EC0: jr          $ra
    // 0x80228EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229A70_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229A74: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229A78: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80229A7C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229A80: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229A84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229A88: lw          $v0, -0x4D84($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4D84);
    // 0x80229A8C: jalr        $v0
    // 0x80229A90: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229A90: nop

    after_0:
    // 0x80229A94: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229A98: jr          $ra
    // 0x80229A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230CF0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230CF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230CF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230CF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230CFC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230D00: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230D04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230D08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230D0C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80230D10: jal         0x8009A3B4
    // 0x80230D14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230D14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80230D18: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230D1C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230D20: jal         0x8009A3B4
    // 0x80230D24: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230D24: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230D28: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80230D2C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80230D30: jal         0x8009A3B4
    // 0x80230D34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230D34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230D38: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230D3C: jal         0x800A3450
    // 0x80230D40: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80230D40: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80230D44: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230D48: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80230D4C: sh          $v0, 0x1DA($s0)
    MEM_H(0X1DA, ctx->r16) = ctx->r2;
    // 0x80230D50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230D54: bne         $v1, $v0, L_80230D74
    if (ctx->r3 != ctx->r2) {
        // 0x80230D58: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_80230D74;
    }
    // 0x80230D58: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x80230D5C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230D60: beq         $v0, $zero, L_80230D7C
    if (ctx->r2 == 0) {
        // 0x80230D64: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80230D7C;
    }
    // 0x80230D64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230D68: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230D6C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230D70: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80230D74:
    // 0x80230D74: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230D78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80230D7C:
    // 0x80230D7C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230D80: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230D84: lw          $v0, -0x3F24($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3F24);
    // 0x80230D88: jalr        $v0
    // 0x80230D8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80230D8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80230D90: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230D94: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230D98: bnel        $v1, $v0, L_80230E50
    if (ctx->r3 != ctx->r2) {
        // 0x80230D9C: sw          $zero, 0x8($s2)
        MEM_W(0X8, ctx->r18) = 0;
            goto L_80230E50;
    }
    goto skip_0;
    // 0x80230D9C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    skip_0:
    // 0x80230DA0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230DA4: beq         $v0, $zero, L_80230E28
    if (ctx->r2 == 0) {
        // 0x80230DA8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230E28;
    }
    // 0x80230DA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230DAC: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
    // 0x80230DB0: beq         $v0, $zero, L_80230DDC
    if (ctx->r2 == 0) {
        // 0x80230DB4: nop
    
            goto L_80230DDC;
    }
    // 0x80230DB4: nop

    // 0x80230DB8: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x80230DBC: bne         $v0, $zero, L_80230DD0
    if (ctx->r2 != 0) {
        // 0x80230DC0: addiu       $a0, $zero, 0x190
        ctx->r4 = ADD32(0, 0X190);
            goto L_80230DD0;
    }
    // 0x80230DC0: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x80230DC4: jal         0x8002A33C
    // 0x80230DC8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80230DC8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x80230DCC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
L_80230DD0:
    // 0x80230DD0: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
    // 0x80230DD4: bne         $v0, $zero, L_80230DF8
    if (ctx->r2 != 0) {
        // 0x80230DD8: nop
    
            goto L_80230DF8;
    }
    // 0x80230DD8: nop

L_80230DDC:
    // 0x80230DDC: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x80230DE0: blez        $v0, L_80230DF8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80230DE4: addiu       $a0, $zero, 0x191
        ctx->r4 = ADD32(0, 0X191);
            goto L_80230DF8;
    }
    // 0x80230DE4: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    // 0x80230DE8: jal         0x8002A33C
    // 0x80230DEC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80230DEC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x80230DF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230DF4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
L_80230DF8:
    // 0x80230DF8: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x80230DFC: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80230E00: beq         $v0, $zero, L_80230E20
    if (ctx->r2 == 0) {
        // 0x80230E04: nop
    
            goto L_80230E20;
    }
    // 0x80230E04: nop

    // 0x80230E08: lb          $v0, 0x2($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2);
    // 0x80230E0C: bne         $v0, $zero, L_80230E20
    if (ctx->r2 != 0) {
        // 0x80230E10: nop
    
            goto L_80230E20;
    }
    // 0x80230E10: nop

    // 0x80230E14: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230E18: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80230E1C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80230E20:
    // 0x80230E20: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230E24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80230E28:
    // 0x80230E28: bnel        $v1, $v0, L_80230E50
    if (ctx->r3 != ctx->r2) {
        // 0x80230E2C: sw          $zero, 0x8($s2)
        MEM_W(0X8, ctx->r18) = 0;
            goto L_80230E50;
    }
    goto skip_1;
    // 0x80230E2C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    skip_1:
    // 0x80230E30: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x80230E34: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80230E38: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80230E3C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230E40: beq         $v0, $zero, L_80230E4C
    if (ctx->r2 == 0) {
        // 0x80230E44: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80230E4C;
    }
    // 0x80230E44: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80230E48: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80230E4C:
    // 0x80230E4C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
L_80230E50:
    // 0x80230E50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230E54: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80230E58: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230E5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230E60: jr          $ra
    // 0x80230E64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230E64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DB14_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DB14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DB18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DB1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DB20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022DB24: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022DB28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DB2C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022DB30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DB34: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x8022DB38: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022DB3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DB40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DB44: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022DB48: addiu       $v1, $v1, -0x4710
    ctx->r3 = ADD32(ctx->r3, -0X4710);
    // 0x8022DB4C: jal         0x8022FF64
    // 0x8022DB50: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_8022FF64_ovl21(rdram, ctx);
        goto after_0;
    // 0x8022DB50: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x8022DB54: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022DB58: beq         $v0, $zero, L_8022DC68
    if (ctx->r2 == 0) {
        // 0x8022DB5C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022DC68;
    }
    // 0x8022DB5C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022DB60: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022DB64: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022DB68: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022DB6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DB70: jal         0x8009A3B4
    // 0x8022DB74: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DB74: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022DB78: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022DB7C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022DB80: jal         0x8009A3B4
    // 0x8022DB84: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022DB84: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022DB88: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022DB8C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022DB90: jal         0x8009A3B4
    // 0x8022DB94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022DB94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022DB98: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022DB9C: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022DBA0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022DBA4: beq         $v0, $zero, L_8022DBB4
    if (ctx->r2 == 0) {
        // 0x8022DBA8: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_8022DBB4;
    }
    // 0x8022DBA8: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022DBAC: jal         0x8022FDCC
    // 0x8022DBB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FDCC_ovl21(rdram, ctx);
        goto after_4;
    // 0x8022DBB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8022DBB4:
    // 0x8022DBB4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022DBB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DBBC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DBC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DBC4: lw          $v0, -0x41A8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X41A8);
    // 0x8022DBC8: jalr        $v0
    // 0x8022DBCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022DBCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022DBD0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022DBD4: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022DBD8: bne         $v0, $zero, L_8022DBF4
    if (ctx->r2 != 0) {
        // 0x8022DBDC: nop
    
            goto L_8022DBF4;
    }
    // 0x8022DBDC: nop

    // 0x8022DBE0: jal         0x8003E934
    // 0x8022DBE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8022DBE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022DBE8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022DBEC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DBF0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022DBF4:
    // 0x8022DBF4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022DBF8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022DBFC: beq         $v0, $a1, L_8022DC14
    if (ctx->r2 == ctx->r5) {
        // 0x8022DC00: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DC14;
    }
    // 0x8022DC00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DC04: jal         0x80050294
    // 0x8022DC08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022DC08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022DC0C: j           L_8022DC1C
    // 0x8022DC10: nop

        goto L_8022DC1C;
    // 0x8022DC10: nop

L_8022DC14:
    // 0x8022DC14: jal         0x8005044C
    // 0x8022DC18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x8022DC18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022DC1C:
    // 0x8022DC1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DC20: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022DC24: beq         $v0, $zero, L_8022DC40
    if (ctx->r2 == 0) {
        // 0x8022DC28: nop
    
            goto L_8022DC40;
    }
    // 0x8022DC28: nop

    // 0x8022DC2C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8022DC30: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x8022DC34: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x8022DC38: jal         0x8003B564
    // 0x8022DC3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022DC3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_8022DC40:
    // 0x8022DC40: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022DC44: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022DC48: beq         $v0, $zero, L_8022DC58
    if (ctx->r2 == 0) {
        // 0x8022DC4C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DC58;
    }
    // 0x8022DC4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DC50: j           L_8022DC5C
    // 0x8022DC54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8022DC5C;
    // 0x8022DC54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022DC58:
    // 0x8022DC58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_8022DC5C:
    // 0x8022DC5C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022DC60: jal         0x80047284
    // 0x8022DC64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x8022DC64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_8022DC68:
    // 0x8022DC68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DC6C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022DC70: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DC74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DC78: jr          $ra
    // 0x8022DC7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DC7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234250_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234250: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80234254: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234258: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023425C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80234260: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80234264: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80234268: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023426C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80234270: beq         $v0, $zero, L_8023429C
    if (ctx->r2 == 0) {
        // 0x80234274: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8023429C;
    }
    // 0x80234274: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80234278: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023427C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80234280: addiu       $a1, $s0, 0x398
    ctx->r5 = ADD32(ctx->r16, 0X398);
    // 0x80234284: jal         0x8004F820
    // 0x80234288: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80234288: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_0:
    // 0x8023428C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80234290: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234294: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80234298: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8023429C:
    // 0x8023429C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802342A0: bgez        $v0, L_80234460
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802342A4: nop
    
            goto L_80234460;
    }
    // 0x802342A4: nop

    // 0x802342A8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802342AC: beq         $v0, $zero, L_8023443C
    if (ctx->r2 == 0) {
        // 0x802342B0: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8023443C;
    }
    // 0x802342B0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x802342B4: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x802342B8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802342BC: jal         0x800324B4
    // 0x802342C0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x802342C0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_1:
    // 0x802342C4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802342C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802342CC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802342D0: bgez        $v1, L_802342FC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802342D4: nop
    
            goto L_802342FC;
    }
    // 0x802342D4: nop

    // 0x802342D8: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x802342DC: jal         0x800324B4
    // 0x802342E0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x802342E0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_2:
    // 0x802342E4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802342E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802342EC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802342F0: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802342F4: j           L_80234314
    // 0x802342F8: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
        goto L_80234314;
    // 0x802342F8: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
L_802342FC:
    // 0x802342FC: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80234300: jal         0x800324B4
    // 0x80234304: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x80234304: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_3:
    // 0x80234308: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023430C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234310: srl         $v0, $v1, 11
    ctx->r2 = S32(U32(ctx->r3) >> 11);
L_80234314:
    // 0x80234314: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234318: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023431C: beq         $v1, $zero, L_80234368
    if (ctx->r3 == 0) {
        // 0x80234320: nop
    
            goto L_80234368;
    }
    // 0x80234320: nop

    // 0x80234324: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x80234328: lh          $a0, 0x50($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X50);
    // 0x8023432C: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80234330: bltzl       $v0, L_80234338
    if (SIGNED(ctx->r2) < 0) {
        // 0x80234334: subu        $v0, $a0, $a1
        ctx->r2 = SUB32(ctx->r4, ctx->r5);
            goto L_80234338;
    }
    goto skip_0;
    // 0x80234334: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    skip_0:
L_80234338:
    // 0x80234338: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8023433C: bne         $v1, $zero, L_80234348
    if (ctx->r3 != 0) {
        // 0x80234340: nop
    
            goto L_80234348;
    }
    // 0x80234340: nop

    // 0x80234344: break       7
    do_break(2149794628);
L_80234348:
    // 0x80234348: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023434C: bne         $v1, $at, L_80234360
    if (ctx->r3 != ctx->r1) {
        // 0x80234350: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80234360;
    }
    // 0x80234350: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80234354: bne         $v0, $at, L_80234360
    if (ctx->r2 != ctx->r1) {
        // 0x80234358: nop
    
            goto L_80234360;
    }
    // 0x80234358: nop

    // 0x8023435C: break       6
    do_break(2149794652);
L_80234360:
    // 0x80234360: mflo        $v0
    ctx->r2 = lo;
    // 0x80234364: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_80234368:
    // 0x80234368: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8023436C: jal         0x80032498
    // 0x80234370: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x80234370: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_4:
    // 0x80234374: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80234378: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023437C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80234380: bgez        $v1, L_802343AC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80234384: nop
    
            goto L_802343AC;
    }
    // 0x80234384: nop

    // 0x80234388: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8023438C: jal         0x80032498
    // 0x80234390: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_5;
    // 0x80234390: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_5:
    // 0x80234394: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80234398: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023439C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802343A0: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802343A4: j           L_802343C4
    // 0x802343A8: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
        goto L_802343C4;
    // 0x802343A8: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
L_802343AC:
    // 0x802343AC: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x802343B0: jal         0x80032498
    // 0x802343B4: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_6;
    // 0x802343B4: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_6:
    // 0x802343B8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802343BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802343C0: srl         $v0, $v1, 11
    ctx->r2 = S32(U32(ctx->r3) >> 11);
L_802343C4:
    // 0x802343C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802343C8: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802343CC: beql        $v1, $zero, L_8023441C
    if (ctx->r3 == 0) {
        // 0x802343D0: sll         $v1, $s1, 16
        ctx->r3 = S32(ctx->r17 << 16);
            goto L_8023441C;
    }
    goto skip_1;
    // 0x802343D0: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
    skip_1:
    // 0x802343D4: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x802343D8: lh          $a0, 0x54($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X54);
    // 0x802343DC: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x802343E0: bltzl       $v0, L_802343E8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802343E4: subu        $v0, $a0, $a1
        ctx->r2 = SUB32(ctx->r4, ctx->r5);
            goto L_802343E8;
    }
    goto skip_2;
    // 0x802343E4: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    skip_2:
L_802343E8:
    // 0x802343E8: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x802343EC: bne         $v1, $zero, L_802343F8
    if (ctx->r3 != 0) {
        // 0x802343F0: nop
    
            goto L_802343F8;
    }
    // 0x802343F0: nop

    // 0x802343F4: break       7
    do_break(2149794804);
L_802343F8:
    // 0x802343F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802343FC: bne         $v1, $at, L_80234410
    if (ctx->r3 != ctx->r1) {
        // 0x80234400: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80234410;
    }
    // 0x80234400: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80234404: bne         $v0, $at, L_80234410
    if (ctx->r2 != ctx->r1) {
        // 0x80234408: nop
    
            goto L_80234410;
    }
    // 0x80234408: nop

    // 0x8023440C: break       6
    do_break(2149794828);
L_80234410:
    // 0x80234410: mflo        $v0
    ctx->r2 = lo;
    // 0x80234414: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80234418: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
L_8023441C:
    // 0x8023441C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80234420: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80234424: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80234428: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023442C: beql        $v1, $zero, L_8023444C
    if (ctx->r3 == 0) {
        // 0x80234430: sh          $s1, 0x4($s3)
        MEM_H(0X4, ctx->r19) = ctx->r17;
            goto L_8023444C;
    }
    goto skip_3;
    // 0x80234430: sh          $s1, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r17;
    skip_3:
    // 0x80234434: j           L_8023444C
    // 0x80234438: sh          $s2, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r18;
        goto L_8023444C;
    // 0x80234438: sh          $s2, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r18;
L_8023443C:
    // 0x8023443C: lhu         $v0, 0x34A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34A);
    // 0x80234440: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80234444: addiu       $v0, $v0, 0x1E
    ctx->r2 = ADD32(ctx->r2, 0X1E);
    // 0x80234448: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
L_8023444C:
    // 0x8023444C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234450: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80234454: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80234458: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023445C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80234460:
    // 0x80234460: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80234464: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80234468: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023446C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234470: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234474: jr          $ra
    // 0x80234478: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80234478: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225FE8_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225FEC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80225FF0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225FF4: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80225FF8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80225FFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226000: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80226004: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80226008: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022600C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226010: jal         0x8004F820
    // 0x80226014: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80226014: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x80226018: lhu         $a1, 0x56($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X56);
    // 0x8022601C: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80226020: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80226024: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80226028: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x8022602C: sh          $a1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r5;
    // 0x80226030: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80226034: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80226038: addiu       $a3, $s0, 0x1C
    ctx->r7 = ADD32(ctx->r16, 0X1C);
    // 0x8022603C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226040: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80226044: jal         0x8004FAEC
    // 0x80226048: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x80226048: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022604C: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x80226050: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x80226054: andi        $v1, $v1, 0x80
    ctx->r3 = ctx->r3 & 0X80;
    // 0x80226058: beq         $v1, $zero, L_80226078
    if (ctx->r3 == 0) {
        // 0x8022605C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80226078;
    }
    // 0x8022605C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80226060: lhu         $v1, 0x518($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X518);
    // 0x80226064: sltiu       $v0, $v1, 0x1E
    ctx->r2 = ctx->r3 < 0X1E ? 1 : 0;
    // 0x80226068: beq         $v0, $zero, L_8022607C
    if (ctx->r2 == 0) {
        // 0x8022606C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022607C;
    }
    // 0x8022606C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80226070: j           L_8022607C
    // 0x80226074: sh          $v0, 0x518($s1)
    MEM_H(0X518, ctx->r17) = ctx->r2;
        goto L_8022607C;
    // 0x80226074: sh          $v0, 0x518($s1)
    MEM_H(0X518, ctx->r17) = ctx->r2;
L_80226078:
    // 0x80226078: sh          $zero, 0x518($s1)
    MEM_H(0X518, ctx->r17) = 0;
L_8022607C:
    // 0x8022607C: lhu         $v0, 0x36($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36);
    // 0x80226080: beq         $v0, $zero, L_80226090
    if (ctx->r2 == 0) {
        // 0x80226084: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80226090;
    }
    // 0x80226084: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226088: j           L_802260F8
    // 0x8022608C: sh          $v0, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r2;
        goto L_802260F8;
    // 0x8022608C: sh          $v0, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r2;
L_80226090:
    // 0x80226090: lhu         $v0, 0x38($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X38);
    // 0x80226094: sltiu       $v0, $v0, 0x1E
    ctx->r2 = ctx->r2 < 0X1E ? 1 : 0;
    // 0x80226098: bne         $v0, $zero, L_802260F8
    if (ctx->r2 != 0) {
        // 0x8022609C: lui         $v1, 0x9
        ctx->r3 = S32(0X9 << 16);
            goto L_802260F8;
    }
    // 0x8022609C: lui         $v1, 0x9
    ctx->r3 = S32(0X9 << 16);
    // 0x802260A0: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x802260A4: ori         $v1, $v1, 0xC400
    ctx->r3 = ctx->r3 | 0XC400;
    // 0x802260A8: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x802260AC: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x802260B0: sltu        $v0, $zero, $a0
    ctx->r2 = 0 < ctx->r4 ? 1 : 0;
    // 0x802260B4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x802260B8: beq         $v1, $zero, L_802260F8
    if (ctx->r3 == 0) {
        // 0x802260BC: nop
    
            goto L_802260F8;
    }
    // 0x802260BC: nop

    // 0x802260C0: jal         0x800A3450
    // 0x802260C4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802260C4: nop

    after_2:
    // 0x802260C8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802260CC: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x802260D0: beq         $v0, $zero, L_802260E8
    if (ctx->r2 == 0) {
        // 0x802260D4: nop
    
            goto L_802260E8;
    }
    // 0x802260D4: nop

    // 0x802260D8: jal         0x802268A8
    // 0x802260DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802268A8_ovl21(rdram, ctx);
        goto after_3;
    // 0x802260DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x802260E0: j           L_802261DC
    // 0x802260E4: nop

        goto L_802261DC;
    // 0x802260E4: nop

L_802260E8:
    // 0x802260E8: jal         0x802268EC
    // 0x802260EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802268EC_ovl21(rdram, ctx);
        goto after_4;
    // 0x802260EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x802260F0: j           L_802261DC
    // 0x802260F4: nop

        goto L_802261DC;
    // 0x802260F4: nop

L_802260F8:
    // 0x802260F8: lhu         $v0, 0x34($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34);
    // 0x802260FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226100: sh          $v0, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r2;
    // 0x80226104: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80226108: bne         $v0, $zero, L_80226144
    if (ctx->r2 != 0) {
        // 0x8022610C: nop
    
            goto L_80226144;
    }
    // 0x8022610C: nop

    // 0x80226110: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226114: bne         $v0, $zero, L_80226140
    if (ctx->r2 != 0) {
        // 0x80226118: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80226140;
    }
    // 0x80226118: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022611C: jal         0x80226858
    // 0x80226120: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80226858_ovl21(rdram, ctx);
        goto after_5;
    // 0x80226120: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80226124: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x80226128: lh          $a2, 0x46($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X46);
    // 0x8022612C: lh          $a3, 0x48($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X48);
    // 0x80226130: jal         0x8004DA90
    // 0x80226134: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x80226134: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80226138: j           L_802261DC
    // 0x8022613C: nop

        goto L_802261DC;
    // 0x8022613C: nop

L_80226140:
    // 0x80226140: sh          $v0, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r2;
L_80226144:
    // 0x80226144: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80226148: lhu         $a2, 0x5E($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X5E);
    // 0x8022614C: subu        $a1, $v1, $a2
    ctx->r5 = SUB32(ctx->r3, ctx->r6);
    // 0x80226150: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80226154: bgez        $v0, L_80226160
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226158: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_80226160;
    }
    // 0x80226158: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x8022615C: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
L_80226160:
    // 0x80226160: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80226164: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226168: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x8022616C: beq         $v0, $zero, L_8022617C
    if (ctx->r2 == 0) {
        // 0x80226170: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022617C;
    }
    // 0x80226170: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226174: j           L_802261A8
    // 0x80226178: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_802261A8;
    // 0x80226178: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8022617C:
    // 0x8022617C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226180: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80226184: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80226188: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022618C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226190: beq         $v0, $zero, L_802261A0
    if (ctx->r2 == 0) {
        // 0x80226194: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_802261A0;
    }
    // 0x80226194: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80226198: j           L_802261A8
    // 0x8022619C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_802261A8;
    // 0x8022619C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_802261A0:
    // 0x802261A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802261A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_802261A8:
    // 0x802261A8: jal         0x80226768
    // 0x802261AC: nop

    func_80226768_ovl21(rdram, ctx);
        goto after_7;
    // 0x802261AC: nop

    after_7:
    // 0x802261B0: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x802261B4: lh          $a2, 0x46($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X46);
    // 0x802261B8: lh          $a3, 0x48($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X48);
    // 0x802261BC: jal         0x8004DA90
    // 0x802261C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_8;
    // 0x802261C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x802261C4: lbu         $v1, 0xA4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA4);
    // 0x802261C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802261CC: bne         $v1, $v0, L_802261DC
    if (ctx->r3 != ctx->r2) {
        // 0x802261D0: addiu       $a0, $zero, 0x1B8
        ctx->r4 = ADD32(0, 0X1B8);
            goto L_802261DC;
    }
    // 0x802261D0: addiu       $a0, $zero, 0x1B8
    ctx->r4 = ADD32(0, 0X1B8);
    // 0x802261D4: jal         0x8002A33C
    // 0x802261D8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x802261D8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_9:
L_802261DC:
    // 0x802261DC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802261E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802261E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802261E8: jr          $ra
    // 0x802261EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802261EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230A48_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230A48: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80230A4C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80230A50: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230A54: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x80230A58: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x80230A5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230A60: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80230A64: jal         0x8009A3B4
    // 0x80230A68: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230A68: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x80230A6C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80230A70: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80230A74: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x80230A78: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230A7C: jal         0x8009A3B4
    // 0x80230A80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230A80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80230A84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230A88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230A8C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x80230A90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230A94: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80230A98: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80230A9C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80230AA0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230AA4: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x80230AA8: jal         0x8004DF78
    // 0x80230AAC: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x80230AAC: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x80230AB0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80230AB4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80230AB8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80230ABC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80230AC0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80230AC4: jr          $ra
    // 0x80230AC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80230AC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80233A38_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233A38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80233A3C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80233A40: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80233A44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80233A48: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80233A4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233A50: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x80233A54: bgez        $v0, L_80233B10
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233A58: nop
    
            goto L_80233B10;
    }
    // 0x80233A58: nop

    // 0x80233A5C: lh          $v0, 0x350($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X350);
    // 0x80233A60: bne         $v0, $zero, L_80233B10
    if (ctx->r2 != 0) {
        // 0x80233A64: nop
    
            goto L_80233B10;
    }
    // 0x80233A64: nop

    // 0x80233A68: jal         0x8004EFE4
    // 0x80233A6C: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x80233A6C: nop

    after_0:
    // 0x80233A70: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80233A74: beq         $s1, $zero, L_80233AF4
    if (ctx->r17 == 0) {
        // 0x80233A78: addiu       $s0, $s1, 0x14
        ctx->r16 = ADD32(ctx->r17, 0X14);
            goto L_80233AF4;
    }
    // 0x80233A78: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80233A7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233A80: addiu       $a1, $s2, 0x188
    ctx->r5 = ADD32(ctx->r18, 0X188);
    // 0x80233A84: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233A88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233A8C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80233A90: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80233A94: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80233A98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233A9C: jal         0x8009A3B4
    // 0x80233AA0: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80233AA0: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_1:
    // 0x80233AA4: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80233AA8: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80233AAC: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x80233AB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233AB4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80233AB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233ABC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80233AC0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80233AC4: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80233AC8: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80233ACC: sw          $a1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r5;
    // 0x80233AD0: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80233AD4: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80233AD8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80233ADC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80233AE0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80233AE4: jal         0x8004DBA0
    // 0x80233AE8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x80233AE8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
    // 0x80233AEC: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80233AF0: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80233AF4:
    // 0x80233AF4: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80233AF8: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x80233AFC: sh          $v1, 0x350($s2)
    MEM_H(0X350, ctx->r18) = ctx->r3;
    // 0x80233B00: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80233B04: sb          $v1, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r3;
    // 0x80233B08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233B0C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_80233B10:
    // 0x80233B10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80233B14: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80233B18: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80233B1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233B20: jr          $ra
    // 0x80233B24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80233B24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022EF74_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EF74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EF78: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EF7C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022EF80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EF84: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022EF88: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EF8C: lw          $v0, -0x3FD0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3FD0);
    // 0x8022EF90: jalr        $v0
    // 0x8022EF94: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022EF94: nop

    after_0:
    // 0x8022EF98: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EF9C: jr          $ra
    // 0x8022EFA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EFA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238890_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238890: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80238894: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80238898: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023889C: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    // 0x802388A0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802388A4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x802388A8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x802388AC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802388B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802388B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802388B8: jal         0x8006033C
    // 0x802388BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802388BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802388C0: beq         $v0, $zero, L_802388D0
    if (ctx->r2 == 0) {
        // 0x802388C4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802388D0;
    }
    // 0x802388C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802388C8: j           L_802389B4
    // 0x802388CC: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
        goto L_802389B4;
    // 0x802388CC: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
L_802388D0:
    // 0x802388D0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x802388D4: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x802388D8: addiu       $s5, $zero, 0x11
    ctx->r21 = ADD32(0, 0X11);
    // 0x802388DC: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x802388E0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802388E4: addiu       $v0, $v0, -0x1300
    ctx->r2 = ADD32(ctx->r2, -0X1300);
    // 0x802388E8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802388EC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802388F0: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x802388F4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802388F8: sw          $zero, -0x12FC($at)
    MEM_W(-0X12FC, ctx->r1) = 0;
    // 0x802388FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238900: sw          $zero, -0x12F8($at)
    MEM_W(-0X12F8, ctx->r1) = 0;
L_80238904:
    // 0x80238904: jal         0x8004EF48
    // 0x80238908: nop

    func_8004EF48_2A348(rdram, ctx);
        goto after_1;
    // 0x80238908: nop

    after_1:
    // 0x8023890C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80238910: beql        $a1, $zero, L_80238988
    if (ctx->r5 == 0) {
        // 0x80238914: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80238988;
    }
    goto skip_0;
    // 0x80238914: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_0:
    // 0x80238918: sb          $s6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r22;
    // 0x8023891C: sb          $s5, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r21;
    // 0x80238920: sb          $s2, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r18;
    // 0x80238924: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x80238928: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x8023892C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80238930: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80238934: lhu         $v0, -0x3724($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3724);
    // 0x80238938: sh          $s4, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r20;
    // 0x8023893C: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80238940: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80238944: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80238948: lhu         $v0, -0x3722($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3722);
    // 0x8023894C: lh          $v1, 0x14($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X14);
    // 0x80238950: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80238954: lh          $v0, 0x16($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X16);
    // 0x80238958: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x8023895C: sh          $zero, 0x54($a1)
    MEM_H(0X54, ctx->r5) = 0;
    // 0x80238960: sh          $zero, 0x56($a1)
    MEM_H(0X56, ctx->r5) = 0;
    // 0x80238964: sh          $zero, 0x58($a1)
    MEM_H(0X58, ctx->r5) = 0;
    // 0x80238968: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023896C: sw          $v1, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r3;
    // 0x80238970: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238974: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80238978: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x8023897C: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
    // 0x80238980: sw          $a1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r5;
    // 0x80238984: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80238988:
    // 0x80238988: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8023898C: sltiu       $v0, $s2, 0x3
    ctx->r2 = ctx->r18 < 0X3 ? 1 : 0;
    // 0x80238990: bne         $v0, $zero, L_80238904
    if (ctx->r2 != 0) {
        // 0x80238994: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80238904;
    }
    // 0x80238994: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80238998: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x8023899C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802389A0: jal         0x80060DA0
    // 0x802389A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_2;
    // 0x802389A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x802389A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802389AC: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x802389B0: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
L_802389B4:
    // 0x802389B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802389B8: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x802389BC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802389C0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802389C4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802389C8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802389CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802389D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802389D4: jr          $ra
    // 0x802389D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802389D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225B78_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225B7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225B80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80225B88: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80225B8C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80225B90: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80225B94: beq         $v0, $zero, L_80225D10
    if (ctx->r2 == 0) {
        // 0x80225B98: addiu       $s2, $s0, 0x4E0
        ctx->r18 = ADD32(ctx->r16, 0X4E0);
            goto L_80225D10;
    }
    // 0x80225B98: addiu       $s2, $s0, 0x4E0
    ctx->r18 = ADD32(ctx->r16, 0X4E0);
    // 0x80225B9C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80225BA0: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80225BA4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80225BA8: bne         $v0, $zero, L_80225BC4
    if (ctx->r2 != 0) {
        // 0x80225BAC: nop
    
            goto L_80225BC4;
    }
    // 0x80225BAC: nop

    // 0x80225BB0: lh          $v0, 0xB2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XB2);
    // 0x80225BB4: beq         $v0, $zero, L_80225BC4
    if (ctx->r2 == 0) {
        // 0x80225BB8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225BC4;
    }
    // 0x80225BB8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225BBC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80225BC0: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
L_80225BC4:
    // 0x80225BC4: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x80225BC8: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80225BCC: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80225BD0: and         $a2, $v1, $v0
    ctx->r6 = ctx->r3 & ctx->r2;
    // 0x80225BD4: beq         $a2, $zero, L_80225D10
    if (ctx->r6 == 0) {
        // 0x80225BD8: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80225D10;
    }
    // 0x80225BD8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80225BDC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80225BE0: bne         $v1, $v0, L_80225BFC
    if (ctx->r3 != ctx->r2) {
        // 0x80225BE4: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80225BFC;
    }
    // 0x80225BE4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80225BE8: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x80225BEC: jal         0x8002A33C
    // 0x80225BF0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80225BF0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80225BF4: j           L_80225D10
    // 0x80225BF8: nop

        goto L_80225D10;
    // 0x80225BF8: nop

L_80225BFC:
    // 0x80225BFC: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80225C00: lhu         $v1, 0xB2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB2);
    // 0x80225C04: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225C08: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x80225C0C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80225C10: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80225C14: jal         0x8002A33C
    // 0x80225C18: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80225C18: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_1:
    // 0x80225C1C: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x80225C20: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80225C24: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80225C28: bgtz        $v1, L_80225C38
    if (SIGNED(ctx->r3) > 0) {
        // 0x80225C2C: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_80225C38;
    }
    // 0x80225C2C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80225C30: j           L_80225C68
    // 0x80225C34: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
        goto L_80225C68;
    // 0x80225C34: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
L_80225C38:
    // 0x80225C38: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80225C3C: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80225C40: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x80225C44: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225C48: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225C4C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80225C50: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x80225C54: lh          $v1, 0xB2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XB2);
    // 0x80225C58: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80225C5C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80225C60: bne         $v1, $zero, L_80225C6C
    if (ctx->r3 != 0) {
        // 0x80225C64: nop
    
            goto L_80225C6C;
    }
    // 0x80225C64: nop

L_80225C68:
    // 0x80225C68: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80225C6C:
    // 0x80225C6C: beq         $s1, $zero, L_80225D10
    if (ctx->r17 == 0) {
        // 0x80225C70: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225D10;
    }
    // 0x80225C70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225C74: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80225C78: jal         0x80050294
    // 0x80225C7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80225C7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80225C80: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80225C84: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80225C88: sw          $zero, 0x30($s2)
    MEM_W(0X30, ctx->r18) = 0;
    // 0x80225C8C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80225C90: addiu       $a1, $s2, 0x28
    ctx->r5 = ADD32(ctx->r18, 0X28);
    // 0x80225C94: jal         0x8004FEA0
    // 0x80225C98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_3;
    // 0x80225C98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80225C9C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225CA0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80225CA4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80225CA8: beq         $v0, $zero, L_80225CB8
    if (ctx->r2 == 0) {
        // 0x80225CAC: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_80225CB8;
    }
    // 0x80225CAC: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x80225CB0: j           L_80225CC0
    // 0x80225CB4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_80225CC0;
    // 0x80225CB4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80225CB8:
    // 0x80225CB8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225CBC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80225CC0:
    // 0x80225CC0: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x80225CC4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80225CC8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80225CCC: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80225CD0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80225CD4: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80225CD8: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80225CDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225CE0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80225CE4: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80225CE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225CEC: jal         0x8004DA90
    // 0x80225CF0: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x80225CF0: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_4:
    // 0x80225CF4: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x80225CF8: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x80225CFC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80225D00: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80225D04: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80225D08: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80225D0C: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
L_80225D10:
    // 0x80225D10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80225D14: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80225D18: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80225D1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80225D20: jr          $ra
    // 0x80225D24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225D24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80238A0C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238A0C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80238A10: lhu         $v1, 0x49C6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C6);
    // 0x80238A14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238A18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238A1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238A20: ori         $v0, $zero, 0xFFD7
    ctx->r2 = 0 | 0XFFD7;
    // 0x80238A24: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80238A28: beq         $v0, $zero, L_80238B54
    if (ctx->r2 == 0) {
        // 0x80238A2C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80238B54;
    }
    // 0x80238A2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238A30: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238A34: lbu         $v0, 0x49B6($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X49B6);
    // 0x80238A38: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80238A3C: bne         $v0, $zero, L_80238B54
    if (ctx->r2 != 0) {
        // 0x80238A40: nop
    
            goto L_80238B54;
    }
    // 0x80238A40: nop

    // 0x80238A44: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80238A48: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80238A4C: bne         $v0, $zero, L_80238B54
    if (ctx->r2 != 0) {
        // 0x80238A50: nop
    
            goto L_80238B54;
    }
    // 0x80238A50: nop

    // 0x80238A54: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80238A58: jal         0x8006FF84
    // 0x80238A5C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80238A5C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80238A60: beq         $v0, $zero, L_80238B54
    if (ctx->r2 == 0) {
        // 0x80238A64: addiu       $a0, $zero, 0x32
        ctx->r4 = ADD32(0, 0X32);
            goto L_80238B54;
    }
    // 0x80238A64: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x80238A68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238A6C: jal         0x8002A2F8
    // 0x80238A70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x80238A70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80238A74: jal         0x8006036C
    // 0x80238A78: addiu       $a0, $zero, 0x64B
    ctx->r4 = ADD32(0, 0X64B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80238A78: addiu       $a0, $zero, 0x64B
    ctx->r4 = ADD32(0, 0X64B);
    after_2:
    // 0x80238A7C: jal         0x80049ECC
    // 0x80238A80: nop

    func_80049ECC_252CC(rdram, ctx);
        goto after_3;
    // 0x80238A80: nop

    after_3:
    // 0x80238A84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80238A88: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80238A8C: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80238A90: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80238A94: lhu         $a2, 0x49C4($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X49C4);
    // 0x80238A98: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80238A9C: lhu         $a3, 0x49C6($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X49C6);
    // 0x80238AA0: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80238AA4: lhu         $t0, 0x49C8($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X49C8);
    // 0x80238AA8: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80238AAC: lhu         $t1, 0x4A04($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X4A04);
    // 0x80238AB0: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x80238AB4: lhu         $t2, 0x4A06($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X4A06);
    // 0x80238AB8: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x80238ABC: lhu         $t3, 0x4A08($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X4A08);
    // 0x80238AC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238AC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238AC8: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80238ACC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238AD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238AD4: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80238AD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238ADC: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x80238AE0: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80238AE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238AE8: sh          $a2, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r6;
    // 0x80238AEC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80238AF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238AF4: sh          $a3, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r7;
    // 0x80238AF8: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80238AFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238B00: sh          $t0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r8;
    // 0x80238B04: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x80238B08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238B0C: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x80238B10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238B14: sw          $a2, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r6;
    // 0x80238B18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238B1C: sw          $a3, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r7;
    // 0x80238B20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238B24: sw          $t0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r8;
    // 0x80238B28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238B2C: sh          $t1, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = ctx->r9;
    // 0x80238B30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238B34: sh          $t2, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r10;
    // 0x80238B38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238B3C: sh          $t3, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = ctx->r11;
    // 0x80238B40: jal         0x800616FC
    // 0x80238B44: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80238B44: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_4:
    // 0x80238B48: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80238B4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238B50: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80238B54:
    // 0x80238B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238B58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238B5C: jr          $ra
    // 0x80238B60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238B60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234EDC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234EDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234EE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234EE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234EE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80234EEC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80234EF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234EF4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80234EF8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80234EFC: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80234F00: sltiu       $v0, $v1, 0x17
    ctx->r2 = ctx->r3 < 0X17 ? 1 : 0;
    // 0x80234F04: beq         $v0, $zero, L_80235080
    if (ctx->r2 == 0) {
        // 0x80234F08: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80235080;
    }
    // 0x80234F08: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80234F0C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80234F10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234F14: addu        $at, $at, $v0
    gpr jr_addend_80234F1C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234F18: lw          $v0, -0x3570($at)
    ctx->r2 = ADD32(ctx->r1, -0X3570);
    // 0x80234F1C: jr          $v0
    // 0x80234F20: nop

    switch (jr_addend_80234F1C >> 2) {
        case 0: goto L_80234F24; break;
        case 1: goto L_80234F50; break;
        case 2: goto L_80234F90; break;
        case 3: goto L_80235034; break;
        case 4: goto L_80234FD4; break;
        case 5: goto L_80235080; break;
        case 6: goto L_80235080; break;
        case 7: goto L_80235080; break;
        case 8: goto L_80235080; break;
        case 9: goto L_80235080; break;
        case 10: goto L_80235080; break;
        case 11: goto L_80235080; break;
        case 12: goto L_80235080; break;
        case 13: goto L_80235080; break;
        case 14: goto L_80235080; break;
        case 15: goto L_80235080; break;
        case 16: goto L_80235080; break;
        case 17: goto L_80235080; break;
        case 18: goto L_80235080; break;
        case 19: goto L_80235080; break;
        case 20: goto L_80235018; break;
        case 21: goto L_80235034; break;
        case 22: goto L_8023504C; break;
        default: switch_error(__func__, 0x80234F1C, 0x8023CA90);
    }
    // 0x80234F20: nop

L_80234F24:
    // 0x80234F24: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80234F28: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234F2C: beq         $v1, $v0, L_80234F50
    if (ctx->r3 == ctx->r2) {
        // 0x80234F30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234F50;
    }
    // 0x80234F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234F34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80234F38: jal         0x80050294
    // 0x80234F3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80234F3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80234F40: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234F44: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80234F48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234F4C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80234F50:
    // 0x80234F50: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80234F54: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80234F58: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80234F5C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80234F60: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80234F64: bne         $v0, $zero, L_80235080
    if (ctx->r2 != 0) {
        // 0x80234F68: nop
    
            goto L_80235080;
    }
    // 0x80234F68: nop

    // 0x80234F6C: jal         0x8003516C
    // 0x80234F70: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80234F70: nop

    after_1:
    // 0x80234F74: bne         $v0, $zero, L_80235080
    if (ctx->r2 != 0) {
        // 0x80234F78: nop
    
            goto L_80235080;
    }
    // 0x80234F78: nop

    // 0x80234F7C: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x80234F80: jal         0x800616FC
    // 0x80234F84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x80234F84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x80234F88: j           L_8023503C
    // 0x80234F8C: nop

        goto L_8023503C;
    // 0x80234F8C: nop

L_80234F90:
    // 0x80234F90: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80234F94: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80234F98: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80234F9C: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x80234FA0: bne         $v0, $zero, L_80235080
    if (ctx->r2 != 0) {
        // 0x80234FA4: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80235080;
    }
    // 0x80234FA4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80234FA8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80234FAC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80234FB0: bne         $v1, $v0, L_8023503C
    if (ctx->r3 != ctx->r2) {
        // 0x80234FB4: nop
    
            goto L_8023503C;
    }
    // 0x80234FB4: nop

    // 0x80234FB8: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80234FBC: bne         $v0, $zero, L_8023503C
    if (ctx->r2 != 0) {
        // 0x80234FC0: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_8023503C;
    }
    // 0x80234FC0: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x80234FC4: bne         $v0, $zero, L_8023503C
    if (ctx->r2 != 0) {
        // 0x80234FC8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8023503C;
    }
    // 0x80234FC8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80234FCC: j           L_80235080
    // 0x80234FD0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80235080;
    // 0x80234FD0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80234FD4:
    // 0x80234FD4: jal         0x8003516C
    // 0x80234FD8: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x80234FD8: nop

    after_3:
    // 0x80234FDC: bne         $v0, $zero, L_80235080
    if (ctx->r2 != 0) {
        // 0x80234FE0: nop
    
            goto L_80235080;
    }
    // 0x80234FE0: nop

    // 0x80234FE4: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80234FE8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80234FEC: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80234FF0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80234FF4: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80234FF8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80234FFC: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80235000: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235004: beq         $v1, $v0, L_80235080
    if (ctx->r3 == ctx->r2) {
        // 0x80235008: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235080;
    }
    // 0x80235008: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023500C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235010: j           L_80235080
    // 0x80235014: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80235080;
    // 0x80235014: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80235018:
    // 0x80235018: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023501C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235020: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80235024: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80235028: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023502C: j           L_80235080
    // 0x80235030: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_80235080;
    // 0x80235030: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80235034:
    // 0x80235034: jal         0x80034E3C
    // 0x80235038: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_4;
    // 0x80235038: nop

    after_4:
L_8023503C:
    // 0x8023503C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80235040: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235044: j           L_80235080
    // 0x80235048: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80235080;
    // 0x80235048: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023504C:
    // 0x8023504C: jal         0x8003516C
    // 0x80235050: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_5;
    // 0x80235050: nop

    after_5:
    // 0x80235054: bne         $v0, $zero, L_80235080
    if (ctx->r2 != 0) {
        // 0x80235058: addiu       $a0, $zero, 0x238
        ctx->r4 = ADD32(0, 0X238);
            goto L_80235080;
    }
    // 0x80235058: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    // 0x8023505C: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80235060: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80235064: jal         0x8006036C
    // 0x80235068: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80235068: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    after_6:
    // 0x8023506C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80235070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235074: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80235078: jal         0x8004F418
    // 0x8023507C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004F418_2A818(rdram, ctx);
        goto after_7;
    // 0x8023507C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_7:
L_80235080:
    // 0x80235080: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80235084: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80235088: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023508C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235090: jr          $ra
    // 0x80235094: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235094: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230218_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230218: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8023021C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80230220: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230224: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80230228: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8023022C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80230230: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80230234: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80230238: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8023023C: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80230240: beq         $v0, $zero, L_802305B0
    if (ctx->r2 == 0) {
        // 0x80230244: addiu       $s2, $s0, 0x308
        ctx->r18 = ADD32(ctx->r16, 0X308);
            goto L_802305B0;
    }
    // 0x80230244: addiu       $s2, $s0, 0x308
    ctx->r18 = ADD32(ctx->r16, 0X308);
    // 0x80230248: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023024C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230250: addu        $at, $at, $v0
    gpr jr_addend_80230258 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230254: lw          $v0, -0x3648($at)
    ctx->r2 = ADD32(ctx->r1, -0X3648);
    // 0x80230258: jr          $v0
    // 0x8023025C: nop

    switch (jr_addend_80230258 >> 2) {
        case 0: goto L_80230260; break;
        case 1: goto L_80230274; break;
        case 2: goto L_802302C0; break;
        case 3: goto L_802302EC; break;
        case 4: goto L_80230344; break;
        case 5: goto L_80230350; break;
        case 6: goto L_80230550; break;
        case 7: goto L_80230398; break;
        case 8: goto L_802304F4; break;
        case 9: goto L_80230550; break;
        case 10: goto L_80230578; break;
        default: switch_error(__func__, 0x80230258, 0x8023C9B8);
    }
    // 0x8023025C: nop

L_80230260:
    // 0x80230260: jal         0x8023009C
    // 0x80230264: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023009C_ovl21(rdram, ctx);
        goto after_0;
    // 0x80230264: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80230268: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023026C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230270: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230274:
    // 0x80230274: jal         0x80230A00
    // 0x80230278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230A00_ovl21(rdram, ctx);
        goto after_1;
    // 0x80230278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023027C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230280: beq         $v0, $zero, L_8023029C
    if (ctx->r2 == 0) {
        // 0x80230284: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023029C;
    }
    // 0x80230284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230288: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023028C: jal         0x80050294
    // 0x80230290: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80230290: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80230294: j           L_802302B4
    // 0x80230298: nop

        goto L_802302B4;
    // 0x80230298: nop

L_8023029C:
    // 0x8023029C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802302A0: jal         0x80050294
    // 0x802302A4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x802302A4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x802302A8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802302AC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802302B0: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_802302B4:
    // 0x802302B4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802302B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802302BC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802302C0:
    // 0x802302C0: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x802302C4: bne         $v0, $s0, L_802305B4
    if (ctx->r2 != ctx->r16) {
        // 0x802302C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802305B4;
    }
    // 0x802302C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802302CC: jal         0x80230A48
    // 0x802302D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230A48_ovl21(rdram, ctx);
        goto after_4;
    // 0x802302D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802302D4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802302D8: beql        $v0, $zero, L_802305B0
    if (ctx->r2 == 0) {
        // 0x802302DC: sw          $zero, 0x184($s1)
        MEM_W(0X184, ctx->r17) = 0;
            goto L_802305B0;
    }
    goto skip_0;
    // 0x802302DC: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    skip_0:
    // 0x802302E0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802302E4: j           L_802305AC
    // 0x802302E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802305AC;
    // 0x802302E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802302EC:
    // 0x802302EC: jal         0x8006FF84
    // 0x802302F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_5;
    // 0x802302F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x802302F4: beq         $v0, $zero, L_802305B0
    if (ctx->r2 == 0) {
        // 0x802302F8: addiu       $a0, $zero, 0x3FE
        ctx->r4 = ADD32(0, 0X3FE);
            goto L_802305B0;
    }
    // 0x802302F8: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x802302FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230300: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230304: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80230308: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8023030C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80230310: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x80230314: jal         0x8004CB2C
    // 0x80230318: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_6;
    // 0x80230318: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    after_6:
    // 0x8023031C: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80230320: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230324: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80230328: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8023032C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80230330: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x80230334: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230338: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    // 0x8023033C: j           L_802305B0
    // 0x80230340: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
        goto L_802305B0;
    // 0x80230340: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
L_80230344:
    // 0x80230344: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230348: j           L_802305AC
    // 0x8023034C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802305AC;
    // 0x8023034C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230350:
    // 0x80230350: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80230354: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230358: bne         $v0, $zero, L_80230380
    if (ctx->r2 != 0) {
        // 0x8023035C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230380;
    }
    // 0x8023035C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230360: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230364: jal         0x80050294
    // 0x80230368: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80230368: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8023036C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x80230370: jal         0x8002A33C
    // 0x80230374: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x80230374: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_8:
    // 0x80230378: j           L_8023038C
    // 0x8023037C: nop

        goto L_8023038C;
    // 0x8023037C: nop

L_80230380:
    // 0x80230380: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230384: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230388: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023038C:
    // 0x8023038C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230390: j           L_802305AC
    // 0x80230394: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802305AC;
    // 0x80230394: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230398:
    // 0x80230398: jal         0x80230A00
    // 0x8023039C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230A00_ovl21(rdram, ctx);
        goto after_9;
    // 0x8023039C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x802303A0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802303A4: beql        $v0, $zero, L_802304D8
    if (ctx->r2 == 0) {
        // 0x802303A8: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_802304D8;
    }
    goto skip_1;
    // 0x802303A8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_1:
    // 0x802303AC: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x802303B0: bne         $v1, $zero, L_802303D4
    if (ctx->r3 != 0) {
        // 0x802303B4: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_802303D4;
    }
    // 0x802303B4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x802303B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802303BC: lb          $a3, 0xE($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XE);
    // 0x802303C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802303C4: jal         0x800610AC
    // 0x802303C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_10;
    // 0x802303C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x802303CC: j           L_802304E8
    // 0x802303D0: nop

        goto L_802304E8;
    // 0x802303D0: nop

L_802303D4:
    // 0x802303D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802303D8: bnel        $v1, $v0, L_802303FC
    if (ctx->r3 != ctx->r2) {
        // 0x802303DC: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_802303FC;
    }
    goto skip_2;
    // 0x802303DC: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    skip_2:
    // 0x802303E0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802303E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802303E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802303EC: jal         0x800610AC
    // 0x802303F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_11;
    // 0x802303F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x802303F4: j           L_802304E8
    // 0x802303F8: nop

        goto L_802304E8;
    // 0x802303F8: nop

L_802303FC:
    // 0x802303FC: beq         $v0, $zero, L_80230460
    if (ctx->r2 == 0) {
        // 0x80230400: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_80230460;
    }
    // 0x80230400: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x80230404: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x80230408: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8023040C: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x80230410: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80230414: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80230418: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x8023041C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80230420: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80230424: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80230428: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023042C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80230430: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80230434: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x80230438: mfhi        $t0
    ctx->r8 = hi;
    // 0x8023043C: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x80230440: nop

    // 0x80230444: jal         0x80069754
    // 0x80230448: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    func_80069754_44B54(rdram, ctx);
        goto after_12;
    // 0x80230448: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    after_12:
    // 0x8023044C: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80230450: jal         0x8006036C
    // 0x80230454: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x80230454: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_13:
    // 0x80230458: j           L_802304E8
    // 0x8023045C: nop

        goto L_802304E8;
    // 0x8023045C: nop

L_80230460:
    // 0x80230460: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80230464: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230468: beq         $v1, $v0, L_802304D4
    if (ctx->r3 == ctx->r2) {
        // 0x8023046C: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_802304D4;
    }
    // 0x8023046C: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80230470: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80230474: xori        $v1, $v0, 0x40
    ctx->r3 = ctx->r2 ^ 0X40;
    // 0x80230478: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8023047C: xori        $v0, $v0, 0x42
    ctx->r2 = ctx->r2 ^ 0X42;
    // 0x80230480: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80230484: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230488: beq         $v1, $zero, L_802304A8
    if (ctx->r3 == 0) {
        // 0x8023048C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802304A8;
    }
    // 0x8023048C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230490: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230498: jal         0x800610AC
    // 0x8023049C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_14;
    // 0x8023049C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    after_14:
    // 0x802304A0: j           L_802304BC
    // 0x802304A4: nop

        goto L_802304BC;
    // 0x802304A4: nop

L_802304A8:
    // 0x802304A8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802304AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802304B0: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x802304B4: jal         0x80069754
    // 0x802304B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_15;
    // 0x802304B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_15:
L_802304BC:
    // 0x802304BC: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x802304C0: jal         0x8006036C
    // 0x802304C4: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_16;
    // 0x802304C4: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_16:
    // 0x802304C8: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x802304CC: j           L_802304E8
    // 0x802304D0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_802304E8;
    // 0x802304D0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_802304D4:
    // 0x802304D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_802304D8:
    // 0x802304D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802304DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802304E0: jal         0x80069754
    // 0x802304E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_17;
    // 0x802304E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_17:
L_802304E8:
    // 0x802304E8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802304EC: j           L_802305AC
    // 0x802304F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802305AC;
    // 0x802304F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802304F4:
    // 0x802304F4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802304F8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802304FC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230500: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230504: bne         $v0, $zero, L_802305B4
    if (ctx->r2 != 0) {
        // 0x80230508: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802305B4;
    }
    // 0x80230508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023050C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80230510: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230514: bne         $v0, $zero, L_80230538
    if (ctx->r2 != 0) {
        // 0x80230518: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80230538;
    }
    // 0x80230518: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8023051C: jal         0x80050294
    // 0x80230520: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_18;
    // 0x80230520: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_18:
    // 0x80230524: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    // 0x80230528: jal         0x8002A33C
    // 0x8023052C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_19;
    // 0x8023052C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_19:
    // 0x80230530: j           L_80230544
    // 0x80230534: nop

        goto L_80230544;
    // 0x80230534: nop

L_80230538:
    // 0x80230538: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023053C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230540: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230544:
    // 0x80230544: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230548: j           L_802305AC
    // 0x8023054C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802305AC;
    // 0x8023054C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230550:
    // 0x80230550: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80230554: bgez        $v0, L_80230568
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80230558: nop
    
            goto L_80230568;
    }
    // 0x80230558: nop

    // 0x8023055C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230560: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230564: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230568:
    // 0x80230568: jal         0x8005044C
    // 0x8023056C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_20;
    // 0x8023056C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x80230570: j           L_802305B4
    // 0x80230574: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802305B4;
    // 0x80230574: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80230578:
    // 0x80230578: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x8023057C: jal         0x8004CB2C
    // 0x80230580: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_21;
    // 0x80230580: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_21:
    // 0x80230584: jal         0x80070050
    // 0x80230588: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_22;
    // 0x80230588: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_22:
    // 0x8023058C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230590: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x80230594: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230598: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8023059C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802305A0: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x802305A4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x802305A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802305AC:
    // 0x802305AC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802305B0:
    // 0x802305B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802305B4:
    // 0x802305B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802305B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802305BC: jal         0x80047284
    // 0x802305C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_23;
    // 0x802305C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_23:
    // 0x802305C4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802305C8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x802305CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802305D0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802305D4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802305D8: addiu       $v0, $s2, 0x18
    ctx->r2 = ADD32(ctx->r18, 0X18);
    // 0x802305DC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802305E0: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x802305E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802305E8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802305EC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802305F0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802305F4: jal         0x80051E18
    // 0x802305F8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_24;
    // 0x802305F8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_24:
    // 0x802305FC: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x80230600: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80230604: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80230608: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8023060C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80230610: jr          $ra
    // 0x80230614: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80230614: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022B7A4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B7A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022B7A8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022B7AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022B7B0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022B7B4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022B7B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022B7BC: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022B7C0: beq         $v0, $zero, L_8022B7E8
    if (ctx->r2 == 0) {
        // 0x8022B7C4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022B7E8;
    }
    // 0x8022B7C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B7C8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022B7CC: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8022B7D0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022B7D4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022B7D8: jal         0x80047284
    // 0x8022B7DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_0;
    // 0x8022B7DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022B7E0: j           L_8022BAB4
    // 0x8022B7E4: nop

        goto L_8022BAB4;
    // 0x8022B7E4: nop

L_8022B7E8:
    // 0x8022B7E8: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x8022B7EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B7F0: addiu       $s2, $s1, 0x38
    ctx->r18 = ADD32(ctx->r17, 0X38);
    // 0x8022B7F4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B7F8: jal         0x8009A3B4
    // 0x8022B7FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B7FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022B800: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B804: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022B808: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022B80C: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x8022B810: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8022B814: lhu         $t0, 0x14($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X14);
    // 0x8022B818: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022B81C: addiu       $v0, $v0, -0x301
    ctx->r2 = ADD32(ctx->r2, -0X301);
    // 0x8022B820: addiu       $v1, $v1, -0x3E
    ctx->r3 = ADD32(ctx->r3, -0X3E);
    // 0x8022B824: addiu       $t0, $t0, -0x3E
    ctx->r8 = ADD32(ctx->r8, -0X3E);
    // 0x8022B828: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022B82C: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8022B830: jal         0x802296B8
    // 0x8022B834: sh          $t0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r8;
    func_802296B8_ovl21(rdram, ctx);
        goto after_2;
    // 0x8022B834: sh          $t0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x8022B838: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B83C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022B840: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022B844: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022B848: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8022B84C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022B850: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x8022B854: addiu       $v1, $v1, -0x3E
    ctx->r3 = ADD32(ctx->r3, -0X3E);
    // 0x8022B858: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022B85C: jal         0x802296B8
    // 0x8022B860: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_802296B8_ovl21(rdram, ctx);
        goto after_3;
    // 0x8022B860: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022B864: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B868: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022B86C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022B870: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022B874: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022B878: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x8022B87C: jal         0x802296B8
    // 0x8022B880: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_802296B8_ovl21(rdram, ctx);
        goto after_4;
    // 0x8022B880: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x8022B884: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B888: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022B88C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022B890: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022B894: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022B898: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x8022B89C: jal         0x802296B8
    // 0x8022B8A0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_802296B8_ovl21(rdram, ctx);
        goto after_5;
    // 0x8022B8A0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022B8A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B8A8: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x8022B8AC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022B8B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022B8B4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8022B8B8: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022B8BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022B8C0: addiu       $v1, $v1, 0x3E
    ctx->r3 = ADD32(ctx->r3, 0X3E);
    // 0x8022B8C4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8022B8C8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8022B8CC: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022B8D0: jal         0x802296B8
    // 0x8022B8D4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_802296B8_ovl21(rdram, ctx);
        goto after_6;
    // 0x8022B8D4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_6:
    // 0x8022B8D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B8DC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022B8E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022B8E4: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022B8E8: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8022B8EC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022B8F0: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022B8F4: addiu       $v1, $v1, 0x3E
    ctx->r3 = ADD32(ctx->r3, 0X3E);
    // 0x8022B8F8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022B8FC: jal         0x802296B8
    // 0x8022B900: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_802296B8_ovl21(rdram, ctx);
        goto after_7;
    // 0x8022B900: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_7:
    // 0x8022B904: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B908: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022B90C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022B910: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022B914: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022B918: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022B91C: jal         0x802296B8
    // 0x8022B920: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_802296B8_ovl21(rdram, ctx);
        goto after_8;
    // 0x8022B920: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_8:
    // 0x8022B924: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B928: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022B92C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022B930: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022B934: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022B938: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022B93C: jal         0x802296B8
    // 0x8022B940: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_802296B8_ovl21(rdram, ctx);
        goto after_9;
    // 0x8022B940: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_9:
    // 0x8022B944: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B948: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x8022B94C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022B950: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022B954: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8022B958: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022B95C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022B960: addiu       $v1, $v1, -0x3E
    ctx->r3 = ADD32(ctx->r3, -0X3E);
    // 0x8022B964: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8022B968: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8022B96C: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022B970: jal         0x802296B8
    // 0x8022B974: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_802296B8_ovl21(rdram, ctx);
        goto after_10;
    // 0x8022B974: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_10:
    // 0x8022B978: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B97C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022B980: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022B984: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022B988: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8022B98C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022B990: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x8022B994: addiu       $v1, $v1, 0x3E
    ctx->r3 = ADD32(ctx->r3, 0X3E);
    // 0x8022B998: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022B99C: jal         0x802296B8
    // 0x8022B9A0: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_802296B8_ovl21(rdram, ctx);
        goto after_11;
    // 0x8022B9A0: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_11:
    // 0x8022B9A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B9A8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022B9AC: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022B9B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022B9B4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022B9B8: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x8022B9BC: jal         0x802296B8
    // 0x8022B9C0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_802296B8_ovl21(rdram, ctx);
        goto after_12;
    // 0x8022B9C0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_12:
    // 0x8022B9C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B9C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022B9CC: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022B9D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022B9D4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022B9D8: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x8022B9DC: jal         0x802296B8
    // 0x8022B9E0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_802296B8_ovl21(rdram, ctx);
        goto after_13;
    // 0x8022B9E0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_13:
    // 0x8022B9E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B9E8: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x8022B9EC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022B9F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022B9F4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8022B9F8: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022B9FC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022BA00: addiu       $v1, $v1, 0x3E
    ctx->r3 = ADD32(ctx->r3, 0X3E);
    // 0x8022BA04: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8022BA08: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8022BA0C: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x8022BA10: jal         0x802296B8
    // 0x8022BA14: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_802296B8_ovl21(rdram, ctx);
        goto after_14;
    // 0x8022BA14: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_14:
    // 0x8022BA18: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022BA1C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022BA20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022BA24: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022BA28: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8022BA2C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022BA30: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022BA34: addiu       $v1, $v1, -0x3E
    ctx->r3 = ADD32(ctx->r3, -0X3E);
    // 0x8022BA38: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022BA3C: jal         0x802296B8
    // 0x8022BA40: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_802296B8_ovl21(rdram, ctx);
        goto after_15;
    // 0x8022BA40: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_15:
    // 0x8022BA44: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022BA48: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022BA4C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022BA50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022BA54: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022BA58: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022BA5C: jal         0x802296B8
    // 0x8022BA60: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_802296B8_ovl21(rdram, ctx);
        goto after_16;
    // 0x8022BA60: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_16:
    // 0x8022BA64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022BA68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022BA6C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022BA70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022BA74: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022BA78: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022BA7C: jal         0x802296B8
    // 0x8022BA80: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_802296B8_ovl21(rdram, ctx);
        goto after_17;
    // 0x8022BA80: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_17:
    // 0x8022BA84: jal         0x80047B3C
    // 0x8022BA88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_18;
    // 0x8022BA88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_18:
    // 0x8022BA8C: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8022BA90: beq         $v0, $zero, L_8022BAA4
    if (ctx->r2 == 0) {
        // 0x8022BA94: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022BAA4;
    }
    // 0x8022BA94: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BA98: jal         0x8006036C
    // 0x8022BA9C: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_19;
    // 0x8022BA9C: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_19:
    // 0x8022BAA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022BAA4:
    // 0x8022BAA4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022BAA8: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    // 0x8022BAAC: jal         0x8002A33C
    // 0x8022BAB0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_20;
    // 0x8022BAB0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_20:
L_8022BAB4:
    // 0x8022BAB4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022BAB8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022BABC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022BAC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022BAC4: jr          $ra
    // 0x8022BAC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022BAC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022E1AC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E1AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E1B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E1B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E1B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E1BC: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022E1C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E1C4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022E1C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E1CC: bne         $v0, $zero, L_8022E1F4
    if (ctx->r2 != 0) {
        // 0x8022E1D0: nop
    
            goto L_8022E1F4;
    }
    // 0x8022E1D0: nop

    // 0x8022E1D4: jal         0x8022FE30
    // 0x8022E1D8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FE30_ovl21(rdram, ctx);
        goto after_0;
    // 0x8022E1D8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022E1DC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E1E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E1E4: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8022E1E8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022E1EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022E1F0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022E1F4:
    // 0x8022E1F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E1F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E1FC: jr          $ra
    // 0x8022E200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DC80_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DC80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DC84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DC88: jal         0x8004F418
    // 0x8022DC8C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022DC8C: nop

    after_0:
    // 0x8022DC90: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DC94: jr          $ra
    // 0x8022DC98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DC98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232B28_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232B28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232B2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232B30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232B34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232B38: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80232B3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232B40: bne         $v1, $v0, L_80232B84
    if (ctx->r3 != ctx->r2) {
        // 0x80232B44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232B84;
    }
    // 0x80232B44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232B48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80232B4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232B50: jal         0x80050294
    // 0x80232B54: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232B54: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80232B58: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x80232B5C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80232B60: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80232B64: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80232B68: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80232B6C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80232B70: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80232B74: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x80232B78: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x80232B7C: andi        $v1, $v1, 0xFC
    ctx->r3 = ctx->r3 & 0XFC;
    // 0x80232B80: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
L_80232B84:
    // 0x80232B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232B88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232B8C: jr          $ra
    // 0x80232B90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232B90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E410_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E414: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E418: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E41C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E420: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022E424: bgez        $v0, L_8022E43C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022E428: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022E43C;
    }
    // 0x8022E428: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022E42C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E430: jal         0x8022FED8
    // 0x8022E434: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8022FED8_ovl21(rdram, ctx);
        goto after_0;
    // 0x8022E434: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022E438: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022E43C:
    // 0x8022E43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E440: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E444: jr          $ra
    // 0x8022E448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232608_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232608: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023260C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80232610: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232614: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232618: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8023261C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232620: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232624: jal         0x80050294
    // 0x80232628: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232628: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023262C: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x80232630: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80232634: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232638: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8023263C: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x80232640: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80232644: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80232648: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8023264C: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80232650: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80232654: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80232658: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8023265C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80232660: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80232664: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x80232668: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8023266C: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x80232670: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x80232674: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80232678: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8023267C: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80232680: bne         $v1, $zero, L_802326BC
    if (ctx->r3 != 0) {
        // 0x80232684: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_802326BC;
    }
    // 0x80232684: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232688: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x8023268C: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x80232690: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232694: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232698: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8023269C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802326A0: beq         $v1, $v0, L_802326BC
    if (ctx->r3 == ctx->r2) {
        // 0x802326A4: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_802326BC;
    }
    // 0x802326A4: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x802326A8: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x802326AC: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x802326B0: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x802326B4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802326B8: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_802326BC:
    // 0x802326BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802326C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802326C4: jr          $ra
    // 0x802326C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802326C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C674_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C678: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C67C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C684: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C688: beq         $v1, $zero, L_8022C6A0
    if (ctx->r3 == 0) {
        // 0x8022C68C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C6A0;
    }
    // 0x8022C68C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C690: beq         $v1, $v0, L_8022C6EC
    if (ctx->r3 == ctx->r2) {
        // 0x8022C694: nop
    
            goto L_8022C6EC;
    }
    // 0x8022C694: nop

    // 0x8022C698: j           L_8022C730
    // 0x8022C69C: nop

        goto L_8022C730;
    // 0x8022C69C: nop

L_8022C6A0:
    // 0x8022C6A0: jal         0x8006033C
    // 0x8022C6A4: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022C6A4: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    after_0:
    // 0x8022C6A8: bnel        $v0, $zero, L_8022C6D4
    if (ctx->r2 != 0) {
        // 0x8022C6AC: sb          $zero, 0x8($s0)
        MEM_B(0X8, ctx->r16) = 0;
            goto L_8022C6D4;
    }
    goto skip_0;
    // 0x8022C6AC: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    skip_0:
    // 0x8022C6B0: jal         0x8006033C
    // 0x8022C6B4: addiu       $a0, $zero, 0x645
    ctx->r4 = ADD32(0, 0X645);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022C6B4: addiu       $a0, $zero, 0x645
    ctx->r4 = ADD32(0, 0X645);
    after_1:
    // 0x8022C6B8: bnel        $v0, $zero, L_8022C6D4
    if (ctx->r2 != 0) {
        // 0x8022C6BC: sb          $zero, 0x8($s0)
        MEM_B(0X8, ctx->r16) = 0;
            goto L_8022C6D4;
    }
    goto skip_1;
    // 0x8022C6BC: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    skip_1:
    // 0x8022C6C0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C6C4: lb          $v0, 0x4A24($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4A24);
    // 0x8022C6C8: bne         $v0, $zero, L_8022C6DC
    if (ctx->r2 != 0) {
        // 0x8022C6CC: nop
    
            goto L_8022C6DC;
    }
    // 0x8022C6CC: nop

    // 0x8022C6D0: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
L_8022C6D4:
    // 0x8022C6D4: j           L_8022C730
    // 0x8022C6D8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022C730;
    // 0x8022C6D8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022C6DC:
    // 0x8022C6DC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C6E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C6E4: j           L_8022C730
    // 0x8022C6E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022C730;
    // 0x8022C6E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C6EC:
    // 0x8022C6EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C6F0: lb          $v0, 0x4A24($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4A24);
    // 0x8022C6F4: bne         $v0, $zero, L_8022C730
    if (ctx->r2 != 0) {
        // 0x8022C6F8: nop
    
            goto L_8022C730;
    }
    // 0x8022C6F8: nop

    // 0x8022C6FC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C700: lh          $v0, 0x49C6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C6);
    // 0x8022C704: slti        $v0, $v0, -0x22
    ctx->r2 = SIGNED(ctx->r2) < -0X22 ? 1 : 0;
    // 0x8022C708: bnel        $v0, $zero, L_8022C728
    if (ctx->r2 != 0) {
        // 0x8022C70C: sb          $zero, 0x8($s0)
        MEM_B(0X8, ctx->r16) = 0;
            goto L_8022C728;
    }
    goto skip_2;
    // 0x8022C70C: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    skip_2:
    // 0x8022C710: jal         0x8006036C
    // 0x8022C714: addiu       $a0, $zero, 0x645
    ctx->r4 = ADD32(0, 0X645);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8022C714: addiu       $a0, $zero, 0x645
    ctx->r4 = ADD32(0, 0X645);
    after_2:
    // 0x8022C718: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022C71C: jal         0x800616FC
    // 0x8022C720: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8022C720: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x8022C724: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
L_8022C728:
    // 0x8022C728: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022C72C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022C730:
    // 0x8022C730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C734: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C738: jr          $ra
    // 0x8022C73C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C73C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226768_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226768: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022676C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226770: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226778: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022677C: beq         $v0, $a1, L_8022679C
    if (ctx->r2 == ctx->r5) {
        // 0x80226780: nop
    
            goto L_8022679C;
    }
    // 0x80226780: nop

    // 0x80226784: jal         0x80050294
    // 0x80226788: lbu         $a2, 0xA4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA4);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226788: lbu         $a2, 0xA4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA4);
    after_0:
    // 0x8022678C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226790: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226794: j           L_802267A4
    // 0x80226798: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802267A4;
    // 0x80226798: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022679C:
    // 0x8022679C: jal         0x8005044C
    // 0x802267A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802267A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802267A4:
    // 0x802267A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802267A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802267AC: jr          $ra
    // 0x802267B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802267B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D950_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D954: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D958: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022D95C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D960: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D964: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D968: lw          $v0, -0x41B4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X41B4);
    // 0x8022D96C: jalr        $v0
    // 0x8022D970: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D970: nop

    after_0:
    // 0x8022D974: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D978: jr          $ra
    // 0x8022D97C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D97C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232E3C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232E3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232E40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232E44: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232E48: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232E4C: jal         0x8004F144
    // 0x80232E50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80232E50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80232E54: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80232E58: beq         $v1, $zero, L_80232E94
    if (ctx->r3 == 0) {
        // 0x80232E5C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80232E94;
    }
    // 0x80232E5C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80232E60: addiu       $s0, $s1, 0x180
    ctx->r16 = ADD32(ctx->r17, 0X180);
    // 0x80232E64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232E68: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232E6C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80232E70: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80232E74: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80232E78: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80232E7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232E80: jal         0x8009A3B4
    // 0x80232E84: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232E84: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
    // 0x80232E88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232E8C: jal         0x8007A1B8
    // 0x80232E90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x80232E90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_80232E94:
    // 0x80232E94: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80232E98: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80232E9C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x80232EA0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80232EA4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80232EA8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232EAC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232EB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232EB4: jr          $ra
    // 0x80232EB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232EB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234E38_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234E38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234E3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234E40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234E44: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80234E48: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80234E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234E50: jal         0x8004DDE8
    // 0x80234E54: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x80234E54: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80234E58: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80234E5C: beq         $v1, $zero, L_80234E78
    if (ctx->r3 == 0) {
        // 0x80234E60: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_80234E78;
    }
    // 0x80234E60: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x80234E64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234E68: beq         $v1, $v0, L_80234EA4
    if (ctx->r3 == ctx->r2) {
        // 0x80234E6C: nop
    
            goto L_80234EA4;
    }
    // 0x80234E6C: nop

    // 0x80234E70: j           L_80234ECC
    // 0x80234E74: nop

        goto L_80234ECC;
    // 0x80234E74: nop

L_80234E78:
    // 0x80234E78: sltiu       $v0, $v0, 0x12C
    ctx->r2 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x80234E7C: beq         $v0, $zero, L_80234ECC
    if (ctx->r2 == 0) {
        // 0x80234E80: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234ECC;
    }
    // 0x80234E80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234E84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80234E88: jal         0x80050294
    // 0x80234E8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80234E8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80234E90: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234E94: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80234E98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234E9C: j           L_80234ECC
    // 0x80234EA0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80234ECC;
    // 0x80234EA0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80234EA4:
    // 0x80234EA4: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80234EA8: bgez        $v0, L_80234ECC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80234EAC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234ECC;
    }
    // 0x80234EAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234EB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80234EB4: jal         0x80050294
    // 0x80234EB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80234EB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80234EBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234EC0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80234EC4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80234EC8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80234ECC:
    // 0x80234ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234ED0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234ED4: jr          $ra
    // 0x80234ED8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234ED8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DE8C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022DE90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DE94: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DE98: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022DE9C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022DEA0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022DEA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DEA8: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x8022DEAC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022DEB0: addiu       $v0, $v0, -0x4108
    ctx->r2 = ADD32(ctx->r2, -0X4108);
    // 0x8022DEB4: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x8022DEB8: jal         0x800A3450
    // 0x8022DEBC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022DEBC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x8022DEC0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022DEC4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022DEC8: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DECC: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022DED0: addiu       $s0, $s0, -0x40C8
    ctx->r16 = ADD32(ctx->r16, -0X40C8);
    // 0x8022DED4: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x8022DED8: beq         $v1, $zero, L_8022DEF4
    if (ctx->r3 == 0) {
        // 0x8022DEDC: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022DEF4;
    }
    // 0x8022DEDC: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022DEE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DEE4: beq         $v1, $v0, L_8022DF14
    if (ctx->r3 == ctx->r2) {
        // 0x8022DEE8: nop
    
            goto L_8022DF14;
    }
    // 0x8022DEE8: nop

    // 0x8022DEEC: j           L_8022DF28
    // 0x8022DEF0: nop

        goto L_8022DF28;
    // 0x8022DEF0: nop

L_8022DEF4:
    // 0x8022DEF4: jal         0x8022FED8
    // 0x8022DEF8: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_8022FED8_ovl21(rdram, ctx);
        goto after_1;
    // 0x8022DEF8: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x8022DEFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DF00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022DF04: jal         0x8022FF18
    // 0x8022DF08: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_8022FF18_ovl21(rdram, ctx);
        goto after_2;
    // 0x8022DF08: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022DF0C: j           L_8022DF80
    // 0x8022DF10: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_8022DF80;
    // 0x8022DF10: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8022DF14:
    // 0x8022DF14: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022DF18: jal         0x8022FEC8
    // 0x8022DF1C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_8022FEC8_ovl21(rdram, ctx);
        goto after_3;
    // 0x8022DF1C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x8022DF20: j           L_8022DF80
    // 0x8022DF24: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_8022DF80;
    // 0x8022DF24: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_8022DF28:
    // 0x8022DF28: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x8022DF2C: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x8022DF30: bne         $v1, $v0, L_8022DF40
    if (ctx->r3 != ctx->r2) {
        // 0x8022DF34: nop
    
            goto L_8022DF40;
    }
    // 0x8022DF34: nop

    // 0x8022DF38: j           L_8022DF80
    // 0x8022DF3C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_8022DF80;
    // 0x8022DF3C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_8022DF40:
    // 0x8022DF40: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022DF44: jal         0x8022FED8
    // 0x8022DF48: nop

    func_8022FED8_ovl21(rdram, ctx);
        goto after_4;
    // 0x8022DF48: nop

    after_4:
    // 0x8022DF4C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022DF50: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022DF54: beq         $v0, $zero, L_8022DF68
    if (ctx->r2 == 0) {
        // 0x8022DF58: nop
    
            goto L_8022DF68;
    }
    // 0x8022DF58: nop

    // 0x8022DF5C: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8022DF60: j           L_8022DF78
    // 0x8022DF64: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_8022DF78;
    // 0x8022DF64: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_8022DF68:
    // 0x8022DF68: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8022DF6C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022DF70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DF74: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_8022DF78:
    // 0x8022DF78: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022DF7C: addiu       $s0, $s0, -0x40A8
    ctx->r16 = ADD32(ctx->r16, -0X40A8);
L_8022DF80:
    // 0x8022DF80: jal         0x800A3450
    // 0x8022DF84: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8022DF84: nop

    after_5:
    // 0x8022DF88: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022DF8C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022DF90: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022DF94: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x8022DF98: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022DF9C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022DFA0: beq         $v1, $v0, L_8022DFB8
    if (ctx->r3 == ctx->r2) {
        // 0x8022DFA4: nop
    
            goto L_8022DFB8;
    }
    // 0x8022DFA4: nop

    // 0x8022DFA8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022DFAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DFB0: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022DFB4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022DFB8:
    // 0x8022DFB8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022DFBC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DFC0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022DFC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DFC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DFCC: jr          $ra
    // 0x8022DFD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022DFD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022BFC4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BFC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BFC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BFCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BFD0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BFD4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BFD8: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8022BFDC: bne         $v1, $zero, L_8022C008
    if (ctx->r3 != 0) {
        // 0x8022BFE0: addiu       $s1, $s0, 0x2C
        ctx->r17 = ADD32(ctx->r16, 0X2C);
            goto L_8022C008;
    }
    // 0x8022BFE0: addiu       $s1, $s0, 0x2C
    ctx->r17 = ADD32(ctx->r16, 0X2C);
    // 0x8022BFE4: jal         0x8006033C
    // 0x8022BFE8: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022BFE8: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_0:
    // 0x8022BFEC: bnel        $v0, $zero, L_8022C060
    if (ctx->r2 != 0) {
        // 0x8022BFF0: addiu       $a0, $zero, 0x605
        ctx->r4 = ADD32(0, 0X605);
            goto L_8022C060;
    }
    goto skip_0;
    // 0x8022BFF0: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    skip_0:
    // 0x8022BFF4: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    // 0x8022BFF8: jal         0x8002A33C
    // 0x8022BFFC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022BFFC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_1:
    // 0x8022C000: j           L_8022C060
    // 0x8022C004: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
        goto L_8022C060;
    // 0x8022C004: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
L_8022C008:
    // 0x8022C008: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C00C: bne         $v1, $v0, L_8022C038
    if (ctx->r3 != ctx->r2) {
        // 0x8022C010: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C038;
    }
    // 0x8022C010: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C014: jal         0x8006033C
    // 0x8022C018: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022C018: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_2:
    // 0x8022C01C: bnel        $v0, $zero, L_8022C060
    if (ctx->r2 != 0) {
        // 0x8022C020: addiu       $a0, $zero, 0x606
        ctx->r4 = ADD32(0, 0X606);
            goto L_8022C060;
    }
    goto skip_1;
    // 0x8022C020: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    skip_1:
    // 0x8022C024: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    // 0x8022C028: jal         0x8002A33C
    // 0x8022C02C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022C02C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_3:
    // 0x8022C030: j           L_8022C060
    // 0x8022C034: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
        goto L_8022C060;
    // 0x8022C034: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
L_8022C038:
    // 0x8022C038: bne         $v1, $v0, L_8022C06C
    if (ctx->r3 != ctx->r2) {
        // 0x8022C03C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022C06C;
    }
    // 0x8022C03C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022C040: jal         0x8006033C
    // 0x8022C044: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022C044: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_4:
    // 0x8022C048: bne         $v0, $zero, L_8022C060
    if (ctx->r2 != 0) {
        // 0x8022C04C: addiu       $a0, $zero, 0x604
        ctx->r4 = ADD32(0, 0X604);
            goto L_8022C060;
    }
    // 0x8022C04C: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    // 0x8022C050: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    // 0x8022C054: jal         0x8002A33C
    // 0x8022C058: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022C058: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_5:
    // 0x8022C05C: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
L_8022C060:
    // 0x8022C060: jal         0x8006036C
    // 0x8022C064: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x8022C064: nop

    after_6:
    // 0x8022C068: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022C06C:
    // 0x8022C06C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8022C070: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C074: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C078: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C07C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022C080: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C084: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C088: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C08C: jr          $ra
    // 0x8022C090: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C090: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238018_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238018: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023801C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80238020: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238024: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80238028: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8023802C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80238030: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80238034: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80238038: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023803C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238040: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238044: lw          $v0, -0x38E4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X38E4);
    // 0x80238048: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8023804C: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x80238050: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80238054: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80238058: addiu       $s2, $s2, -0x38E4
    ctx->r18 = ADD32(ctx->r18, -0X38E4);
    // 0x8023805C: beq         $v0, $zero, L_802381E0
    if (ctx->r2 == 0) {
        // 0x80238060: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_802381E0;
    }
    // 0x80238060: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80238064: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238068: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x8023806C: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x80238070: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80238074: lbu         $a3, -0x3894($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X3894);
    // 0x80238078: jal         0x8003BA58
    // 0x8023807C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x8023807C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80238080: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80238084: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80238088: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023808C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80238090: bne         $v0, $zero, L_802380F8
    if (ctx->r2 != 0) {
        // 0x80238094: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_802380F8;
    }
    // 0x80238094: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80238098: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8023809C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x802380A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802380A4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802380A8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802380AC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802380B0: bne         $v1, $v0, L_802380D0
    if (ctx->r3 != ctx->r2) {
        // 0x802380B4: nop
    
            goto L_802380D0;
    }
    // 0x802380B4: nop

    // 0x802380B8: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802380BC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802380C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802380C4: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x802380C8: j           L_802380D8
    // 0x802380CC: lw          $s1, 0x0($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X0);
        goto L_802380D8;
    // 0x802380CC: lw          $s1, 0x0($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X0);
L_802380D0:
    // 0x802380D0: beq         $v1, $zero, L_802381E0
    if (ctx->r3 == 0) {
        // 0x802380D4: nop
    
            goto L_802381E0;
    }
    // 0x802380D4: nop

L_802380D8:
    // 0x802380D8: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802380DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802380E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802380E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802380E8: lw          $v0, -0x38E4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X38E4);
    // 0x802380EC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802380F0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x802380F4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_802380F8:
    // 0x802380F8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802380FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238100: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80238104: jal         0x8003BB80
    // 0x80238108: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x80238108: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023810C: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x80238110: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80238114: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238118: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023811C: lbu         $v0, -0x3994($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X3994);
    // 0x80238120: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x80238124: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x80238128: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023812C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238130: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238134: lbu         $v0, -0x3993($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X3993);
    // 0x80238138: sb          $v0, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r2;
    // 0x8023813C: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x80238140: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80238144: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238148: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023814C: lbu         $v0, -0x3992($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X3992);
    // 0x80238150: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x80238154: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x80238158: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023815C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238160: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238164: lbu         $v0, -0x3991($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X3991);
    // 0x80238168: sb          $v0, 0x13($sp)
    MEM_B(0X13, ctx->r29) = ctx->r2;
    // 0x8023816C: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x80238170: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80238174: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238178: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023817C: lbu         $v0, -0x3990($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X3990);
    // 0x80238180: sb          $v0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r2;
    // 0x80238184: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x80238188: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023818C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238190: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238194: lbu         $v0, -0x398F($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X398F);
    // 0x80238198: sb          $v0, 0x15($sp)
    MEM_B(0X15, ctx->r29) = ctx->r2;
    // 0x8023819C: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x802381A0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802381A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802381A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802381AC: lbu         $v0, -0x398E($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X398E);
    // 0x802381B0: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    // 0x802381B4: lb          $v0, 0x1($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X1);
    // 0x802381B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802381BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802381C0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802381C4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802381C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802381CC: lbu         $v0, -0x398D($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X398D);
    // 0x802381D0: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x802381D4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x802381D8: jal         0x8003BC68
    // 0x802381DC: sb          $v0, 0x17($sp)
    MEM_B(0X17, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x802381DC: sb          $v0, 0x17($sp)
    MEM_B(0X17, ctx->r29) = ctx->r2;
    after_2:
L_802381E0:
    // 0x802381E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802381E4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802381E8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802381EC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802381F0: jr          $ra
    // 0x802381F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802381F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022FF18_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FF18: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022FF1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FF20: beq         $a1, $v0, L_8022FF4C
    if (ctx->r5 == ctx->r2) {
        // 0x8022FF24: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022FF4C;
    }
    // 0x8022FF24: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022FF28: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x8022FF2C: bne         $a0, $v0, L_8022FF3C
    if (ctx->r4 != ctx->r2) {
        // 0x8022FF30: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8022FF3C;
    }
    // 0x8022FF30: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022FF34: j           L_8022FF5C
    // 0x8022FF38: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_8022FF5C;
    // 0x8022FF38: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8022FF3C:
    // 0x8022FF3C: bne         $a0, $v1, L_8022FF5C
    if (ctx->r4 != ctx->r3) {
        // 0x8022FF40: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_8022FF5C;
    }
    // 0x8022FF40: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022FF44: j           L_8022FF5C
    // 0x8022FF48: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_8022FF5C;
    // 0x8022FF48: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_8022FF4C:
    // 0x8022FF4C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8022FF50: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FF54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FF58: lbu         $v0, -0x4230($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X4230);
L_8022FF5C:
    // 0x8022FF5C: jr          $ra
    // 0x8022FF60: nop

    TRACE_RETURN()
    return;
    // 0x8022FF60: nop

;}
RECOMP_FUNC void func_8022551C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022551C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225520: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225524: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022552C: jal         0x8006033C
    // 0x80225530: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225530: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x80225534: beq         $v0, $zero, L_8022554C
    if (ctx->r2 == 0) {
        // 0x80225538: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022554C;
    }
    // 0x80225538: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022553C: jal         0x80060690
    // 0x80225540: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x80225540: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x80225544: j           L_802255F0
    // 0x80225548: nop

        goto L_802255F0;
    // 0x80225548: nop

L_8022554C:
    // 0x8022554C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225550: beq         $v1, $v0, L_802255A8
    if (ctx->r3 == ctx->r2) {
        // 0x80225554: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802255A8;
    }
    // 0x80225554: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225558: beql        $v0, $zero, L_80225570
    if (ctx->r2 == 0) {
        // 0x8022555C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225570;
    }
    goto skip_0;
    // 0x8022555C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225560: beq         $v1, $zero, L_80225580
    if (ctx->r3 == 0) {
        // 0x80225564: nop
    
            goto L_80225580;
    }
    // 0x80225564: nop

    // 0x80225568: j           L_802255F0
    // 0x8022556C: nop

        goto L_802255F0;
    // 0x8022556C: nop

L_80225570:
    // 0x80225570: beq         $v1, $v0, L_802255CC
    if (ctx->r3 == ctx->r2) {
        // 0x80225574: nop
    
            goto L_802255CC;
    }
    // 0x80225574: nop

    // 0x80225578: j           L_802255F0
    // 0x8022557C: nop

        goto L_802255F0;
    // 0x8022557C: nop

L_80225580:
    // 0x80225580: jal         0x8006033C
    // 0x80225584: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225584: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    after_2:
    // 0x80225588: bne         $v0, $zero, L_802255EC
    if (ctx->r2 != 0) {
        // 0x8022558C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802255EC;
    }
    // 0x8022558C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225590: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80225594: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225598: jal         0x80060DA0
    // 0x8022559C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_3;
    // 0x8022559C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x802255A0: j           L_802255E4
    // 0x802255A4: nop

        goto L_802255E4;
    // 0x802255A4: nop

L_802255A8:
    // 0x802255A8: jal         0x8006033C
    // 0x802255AC: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x802255AC: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    after_4:
    // 0x802255B0: beq         $v0, $zero, L_802255F0
    if (ctx->r2 == 0) {
        // 0x802255B4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_802255F0;
    }
    // 0x802255B4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802255B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802255BC: jal         0x80060DA0
    // 0x802255C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_5;
    // 0x802255C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x802255C4: j           L_802255E4
    // 0x802255C8: nop

        goto L_802255E4;
    // 0x802255C8: nop

L_802255CC:
    // 0x802255CC: jal         0x8006033C
    // 0x802255D0: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x802255D0: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_6:
    // 0x802255D4: beq         $v0, $zero, L_802255F0
    if (ctx->r2 == 0) {
        // 0x802255D8: nop
    
            goto L_802255F0;
    }
    // 0x802255D8: nop

    // 0x802255DC: jal         0x80060690
    // 0x802255E0: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    func_80060690_3BA90(rdram, ctx);
        goto after_7;
    // 0x802255E0: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    after_7:
L_802255E4:
    // 0x802255E4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802255EC:
    // 0x802255EC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802255F0:
    // 0x802255F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802255F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802255F8: jr          $ra
    // 0x802255FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235694_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235694: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80235698: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8023569C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802356A0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802356A4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802356A8: lw          $v0, 0x350($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X350);
    // 0x802356AC: sltiu       $v0, $v0, 0x64
    ctx->r2 = ctx->r2 < 0X64 ? 1 : 0;
    // 0x802356B0: beq         $v0, $zero, L_802357A0
    if (ctx->r2 == 0) {
        // 0x802356B4: addiu       $a0, $s1, 0xC4
        ctx->r4 = ADD32(ctx->r17, 0XC4);
            goto L_802357A0;
    }
    // 0x802356B4: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x802356B8: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x802356BC: jal         0x8009A3B4
    // 0x802356C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802356C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802356C4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802356C8: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x802356CC: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x802356D0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802356D4: jal         0x8009A3B4
    // 0x802356D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802356D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802356DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802356E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802356E4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x802356E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802356EC: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x802356F0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802356F4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x802356F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802356FC: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x80235700: jal         0x8004DF78
    // 0x80235704: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x80235704: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x80235708: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8023570C: bne         $v0, $zero, L_802357A4
    if (ctx->r2 != 0) {
        // 0x80235710: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802357A4;
    }
    // 0x80235710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235714: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80235718: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8023571C: jal         0x8009A3B4
    // 0x80235720: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80235720: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80235724: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80235728: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8023572C: jal         0x8009A3B4
    // 0x80235730: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80235730: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80235734: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80235738: beq         $v0, $zero, L_80235754
    if (ctx->r2 == 0) {
        // 0x8023573C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80235754;
    }
    // 0x8023573C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235740: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235744: jal         0x80050294
    // 0x80235748: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80235748: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8023574C: j           L_80235798
    // 0x80235750: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_80235798;
    // 0x80235750: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_80235754:
    // 0x80235754: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80235758: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023575C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80235760: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80235764: sltiu       $v0, $v0, 0x3D
    ctx->r2 = ctx->r2 < 0X3D ? 1 : 0;
    // 0x80235768: bnel        $v0, $zero, L_802357A4
    if (ctx->r2 != 0) {
        // 0x8023576C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802357A4;
    }
    goto skip_0;
    // 0x8023576C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x80235770: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235774: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80235778: jal         0x80050294
    // 0x8023577C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8023577C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80235780: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80235784: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x80235788: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x8023578C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80235790: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80235794: sh          $v0, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r2;
L_80235798:
    // 0x80235798: j           L_802357A4
    // 0x8023579C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_802357A4;
    // 0x8023579C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802357A0:
    // 0x802357A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802357A4:
    // 0x802357A4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x802357A8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802357AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802357B0: jr          $ra
    // 0x802357B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802357B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802357B8: nop

    // 0x802357BC: nop

;}
RECOMP_FUNC void func_8022B6D8_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B6D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B6DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B6E0: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022B6E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B6E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B6EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B6F0: lw          $v0, -0x4C6C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4C6C);
    // 0x8022B6F4: jalr        $v0
    // 0x8022B6F8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022B6F8: nop

    after_0:
    // 0x8022B6FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B700: jr          $ra
    // 0x8022B704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802294F0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802294F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802294F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802294F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802294FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229500: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80229504: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229508: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022950C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229510: lw          $v0, -0x4DBC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4DBC);
    // 0x80229514: jalr        $v0
    // 0x80229518: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229518: nop

    after_0:
    // 0x8022951C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80229520: beq         $v0, $zero, L_80229574
    if (ctx->r2 == 0) {
        // 0x80229524: nop
    
            goto L_80229574;
    }
    // 0x80229524: nop

    // 0x80229528: jal         0x8003B878
    // 0x8022952C: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_1;
    // 0x8022952C: nop

    after_1:
    // 0x80229530: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x80229534: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x80229538: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8022953C: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80229540: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80229544: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x80229548: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8022954C: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x80229550: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x80229554: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x80229558: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x8022955C: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x80229560: srl         $v1, $v1, 16
    ctx->r3 = S32(U32(ctx->r3) >> 16);
    // 0x80229564: sw          $a0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r4;
    // 0x80229568: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8022956C: lhu         $v1, 0x24($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X24);
    // 0x80229570: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
L_80229574:
    // 0x80229574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229578: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022957C: jr          $ra
    // 0x80229580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234B1C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234B1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80234B20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80234B24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234B28: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80234B2C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80234B30: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80234B34: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80234B38: lw          $v0, 0x354($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X354);
    // 0x80234B3C: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x80234B40: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80234B44: beq         $v0, $zero, L_80234B5C
    if (ctx->r2 == 0) {
        // 0x80234B48: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80234B5C;
    }
    // 0x80234B48: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80234B4C: jal         0x80060D38
    // 0x80234B50: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80060D38_3C138(rdram, ctx);
        goto after_0;
    // 0x80234B50: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x80234B54: j           L_80234B6C
    // 0x80234B58: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80234B6C;
    // 0x80234B58: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80234B5C:
    // 0x80234B5C: jal         0x802354F0
    // 0x80234B60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802354F0_ovl21(rdram, ctx);
        goto after_1;
    // 0x80234B60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80234B64: beq         $v0, $zero, L_80234B78
    if (ctx->r2 == 0) {
        // 0x80234B68: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80234B78;
    }
    // 0x80234B68: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80234B6C:
    // 0x80234B6C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80234B70: j           L_80234E1C
    // 0x80234B74: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80234E1C;
    // 0x80234B74: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80234B78:
    // 0x80234B78: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80234B7C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80234B80: jal         0x8004DDE8
    // 0x80234B84: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_2;
    // 0x80234B84: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80234B88: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80234B8C: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x80234B90: sltiu       $v0, $v1, 0x15
    ctx->r2 = ctx->r3 < 0X15 ? 1 : 0;
    // 0x80234B94: beq         $v0, $zero, L_80234E1C
    if (ctx->r2 == 0) {
        // 0x80234B98: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80234E1C;
    }
    // 0x80234B98: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80234B9C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234BA0: addu        $at, $at, $v0
    gpr jr_addend_80234BA8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234BA4: lw          $v0, -0x35C8($at)
    ctx->r2 = ADD32(ctx->r1, -0X35C8);
    // 0x80234BA8: jr          $v0
    // 0x80234BAC: nop

    switch (jr_addend_80234BA8 >> 2) {
        case 0: goto L_80234BB0; break;
        case 1: goto L_80234BCC; break;
        case 2: goto L_80234D28; break;
        case 3: goto L_80234DCC; break;
        case 4: goto L_80234E1C; break;
        case 5: goto L_80234E1C; break;
        case 6: goto L_80234E1C; break;
        case 7: goto L_80234E1C; break;
        case 8: goto L_80234E1C; break;
        case 9: goto L_80234E1C; break;
        case 10: goto L_80234D58; break;
        case 11: goto L_80234D90; break;
        case 12: goto L_80234E1C; break;
        case 13: goto L_80234E1C; break;
        case 14: goto L_80234E1C; break;
        case 15: goto L_80234DA4; break;
        case 16: goto L_80234E1C; break;
        case 17: goto L_80234E1C; break;
        case 18: goto L_80234E1C; break;
        case 19: goto L_80234E1C; break;
        case 20: goto L_80234DEC; break;
        default: switch_error(__func__, 0x80234BA8, 0x8023CA38);
    }
    // 0x80234BAC: nop

L_80234BB0:
    // 0x80234BB0: jal         0x800A3450
    // 0x80234BB4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80234BB4: nop

    after_3:
    // 0x80234BB8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234BBC: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x80234BC0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234BC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234BC8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80234BCC:
    // 0x80234BCC: jal         0x80235694
    // 0x80234BD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80235694_ovl21(rdram, ctx);
        goto after_4;
    // 0x80234BD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80234BD4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234BD8: beq         $v0, $zero, L_80234E1C
    if (ctx->r2 == 0) {
        // 0x80234BDC: nop
    
            goto L_80234E1C;
    }
    // 0x80234BDC: nop

    // 0x80234BE0: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x80234BE4: sltiu       $v0, $v0, 0x12C
    ctx->r2 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x80234BE8: beq         $v0, $zero, L_80234C0C
    if (ctx->r2 == 0) {
        // 0x80234BEC: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_80234C0C;
    }
    // 0x80234BEC: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80234BF0: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80234BF4: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80234BF8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80234BFC: beq         $v0, $v1, L_80234C34
    if (ctx->r2 == ctx->r3) {
        // 0x80234C00: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234C34;
    }
    // 0x80234C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234C04: j           L_80234C28
    // 0x80234C08: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_80234C28;
    // 0x80234C08: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_80234C0C:
    // 0x80234C0C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80234C10: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80234C14: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80234C18: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80234C1C: beq         $v0, $v1, L_80234C34
    if (ctx->r2 == ctx->r3) {
        // 0x80234C20: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234C34;
    }
    // 0x80234C20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234C24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80234C28:
    // 0x80234C28: jal         0x80050294
    // 0x80234C2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80234C2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80234C30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80234C34:
    // 0x80234C34: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80234C38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234C3C: jal         0x8004DA90
    // 0x80234C40: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x80234C40: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x80234C44: jal         0x80040F30
    // 0x80234C48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_7;
    // 0x80234C48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80234C4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234C50: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80234C54: jal         0x802355A4
    // 0x80234C58: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802355A4_ovl21(rdram, ctx);
        goto after_8;
    // 0x80234C58: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
    // 0x80234C5C: lb          $s2, 0xD($s0)
    ctx->r18 = MEM_B(ctx->r16, 0XD);
    // 0x80234C60: beq         $s2, $zero, L_80234CB8
    if (ctx->r18 == 0) {
        // 0x80234C64: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80234CB8;
    }
    // 0x80234C64: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234C68: jal         0x8004DE68
    // 0x80234C6C: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    func_8004DE68_29268(rdram, ctx);
        goto after_9;
    // 0x80234C6C: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    after_9:
    // 0x80234C70: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x80234C74: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x80234C78: beq         $v0, $zero, L_80234CB8
    if (ctx->r2 == 0) {
        // 0x80234C7C: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_80234CB8;
    }
    // 0x80234C7C: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80234C80: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80234C84: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80234C88: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80234C8C: beq         $v0, $v1, L_80234CA0
    if (ctx->r2 == ctx->r3) {
        // 0x80234C90: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234CA0;
    }
    // 0x80234C90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234C94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80234C98: jal         0x80050294
    // 0x80234C9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x80234C9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
L_80234CA0:
    // 0x80234CA0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80234CA4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80234CA8: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80234CAC: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x80234CB0: j           L_80234E18
    // 0x80234CB4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80234E18;
    // 0x80234CB4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80234CB8:
    // 0x80234CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234CBC: jal         0x8023547C
    // 0x80234CC0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8023547C_ovl21(rdram, ctx);
        goto after_11;
    // 0x80234CC0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_11:
    // 0x80234CC4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80234CC8: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x80234CCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234CD0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234CD4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234CD8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80234CDC: jal         0x8023562C
    // 0x80234CE0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8023562C_ovl21(rdram, ctx);
        goto after_12;
    // 0x80234CE0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_12:
    // 0x80234CE4: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80234CE8: bne         $v0, $zero, L_80234E1C
    if (ctx->r2 != 0) {
        // 0x80234CEC: nop
    
            goto L_80234E1C;
    }
    // 0x80234CEC: nop

    // 0x80234CF0: lh          $v0, 0x4($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X4);
    // 0x80234CF4: bne         $v0, $zero, L_80234D1C
    if (ctx->r2 != 0) {
        // 0x80234CF8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80234D1C;
    }
    // 0x80234CF8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234CFC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234D00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234D04: jal         0x800A3450
    // 0x80234D08: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_13;
    // 0x80234D08: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_13:
    // 0x80234D0C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80234D10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234D14: j           L_80234E1C
    // 0x80234D18: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
        goto L_80234E1C;
    // 0x80234D18: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_80234D1C:
    // 0x80234D1C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80234D20: j           L_80234E1C
    // 0x80234D24: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
        goto L_80234E1C;
    // 0x80234D24: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_80234D28:
    // 0x80234D28: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80234D2C: bgez        $v0, L_80234DCC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80234D30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234DCC;
    }
    // 0x80234D30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234D34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80234D38: jal         0x80050294
    // 0x80234D3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_14;
    // 0x80234D3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
    // 0x80234D40: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234D44: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80234D48: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80234D4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234D50: j           L_80234DCC
    // 0x80234D54: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80234DCC;
    // 0x80234D54: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80234D58:
    // 0x80234D58: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80234D5C: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80234D60: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234D64: jal         0x8004F820
    // 0x80234D68: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    func_8004F820_2AC20(rdram, ctx);
        goto after_15;
    // 0x80234D68: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    after_15:
    // 0x80234D6C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80234D70: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234D74: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80234D78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234D7C: bne         $v0, $zero, L_80234E1C
    if (ctx->r2 != 0) {
        // 0x80234D80: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80234E1C;
    }
    // 0x80234D80: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80234D84: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234D88: j           L_80234E18
    // 0x80234D8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80234E18;
    // 0x80234D8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80234D90:
    // 0x80234D90: jal         0x80235694
    // 0x80234D94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80235694_ovl21(rdram, ctx);
        goto after_16;
    // 0x80234D94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x80234D98: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234D9C: beq         $v0, $zero, L_80234E1C
    if (ctx->r2 == 0) {
        // 0x80234DA0: nop
    
            goto L_80234E1C;
    }
    // 0x80234DA0: nop

L_80234DA4:
    // 0x80234DA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234DA8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80234DAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234DB0: jal         0x8004DA90
    // 0x80234DB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_17;
    // 0x80234DB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_17:
    // 0x80234DB8: jal         0x80040F30
    // 0x80234DBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_18;
    // 0x80234DBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_18:
    // 0x80234DC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234DC4: jal         0x802355A4
    // 0x80234DC8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_802355A4_ovl21(rdram, ctx);
        goto after_19;
    // 0x80234DC8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_19:
L_80234DCC:
    // 0x80234DCC: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x80234DD0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234DD4: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x80234DD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234DDC: beql        $v0, $zero, L_80234E1C
    if (ctx->r2 == 0) {
        // 0x80234DE0: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_80234E1C;
    }
    goto skip_0;
    // 0x80234DE0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
    // 0x80234DE4: j           L_80234E1C
    // 0x80234DE8: nop

        goto L_80234E1C;
    // 0x80234DE8: nop

L_80234DEC:
    // 0x80234DEC: lh          $a0, 0x2($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X2);
    // 0x80234DF0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80234DF4: jal         0x8004FA7C
    // 0x80234DF8: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_20;
    // 0x80234DF8: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_20:
    // 0x80234DFC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80234E00: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234E04: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80234E08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234E0C: bne         $v0, $zero, L_80234E1C
    if (ctx->r2 != 0) {
        // 0x80234E10: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80234E1C;
    }
    // 0x80234E10: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80234E14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80234E18:
    // 0x80234E18: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80234E1C:
    // 0x80234E1C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80234E20: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80234E24: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80234E28: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80234E2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80234E30: jr          $ra
    // 0x80234E34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80234E34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802263C0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802263C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802263C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802263CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802263D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802263D4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802263D8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802263DC: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802263E0: jal         0x8004F820
    // 0x802263E4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802263E4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_0:
    // 0x802263E8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802263EC: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x802263F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802263F4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802263F8: beq         $a0, $zero, L_80226420
    if (ctx->r4 == 0) {
        // 0x802263FC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80226420;
    }
    // 0x802263FC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80226400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226404: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80226408: jal         0x80050294
    // 0x8022640C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022640C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80226410: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226414: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226418: j           L_80226478
    // 0x8022641C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80226478;
    // 0x8022641C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226420:
    // 0x80226420: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80226424: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226428: bne         $v1, $v0, L_80226440
    if (ctx->r3 != ctx->r2) {
        // 0x8022642C: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80226440;
    }
    // 0x8022642C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80226430: addiu       $v0, $zero, -0x600
    ctx->r2 = ADD32(0, -0X600);
    // 0x80226434: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80226438: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022643C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80226440:
    // 0x80226440: bne         $v1, $v0, L_8022644C
    if (ctx->r3 != ctx->r2) {
        // 0x80226444: addiu       $v0, $zero, -0x400
        ctx->r2 = ADD32(0, -0X400);
            goto L_8022644C;
    }
    // 0x80226444: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x80226448: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022644C:
    // 0x8022644C: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80226450: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80226454: beql        $v1, $v0, L_8022645C
    if (ctx->r3 == ctx->r2) {
        // 0x80226458: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022645C;
    }
    goto skip_0;
    // 0x80226458: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8022645C:
    // 0x8022645C: jal         0x8005044C
    // 0x80226460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x80226460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226464: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226468: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022646C: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80226470: jal         0x8004DA90
    // 0x80226474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80226474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80226478:
    // 0x80226478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022647C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226480: jr          $ra
    // 0x80226484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231F50_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231F50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80231F54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231F58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231F5C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80231F60: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80231F64: lb          $v1, 0x385($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X385);
    // 0x80231F68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231F6C: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x80231F70: beq         $v1, $zero, L_80231FAC
    if (ctx->r3 == 0) {
        // 0x80231F74: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80231FAC;
    }
    // 0x80231F74: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80231F78: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231F7C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80231F80: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80231F84: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80231F88: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80231F8C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80231F90: jal         0x8004F820
    // 0x80231F94: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80231F94: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231F98: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80231F9C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231FA0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80231FA4: j           L_80231FFC
    // 0x80231FA8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_80231FFC;
    // 0x80231FA8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80231FAC:
    // 0x80231FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231FB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80231FB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231FB8: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80231FBC: jal         0x80050294
    // 0x80231FC0: sb          $s1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r17;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80231FC0: sb          $s1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r17;
    after_1:
    // 0x80231FC4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80231FC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231FCC: bne         $v1, $v0, L_80231FEC
    if (ctx->r3 != ctx->r2) {
        // 0x80231FD0: addiu       $v0, $zero, 0x1E0
        ctx->r2 = ADD32(0, 0X1E0);
            goto L_80231FEC;
    }
    // 0x80231FD0: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x80231FD4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80231FD8: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x80231FDC: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x80231FE0: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80231FE4: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x80231FE8: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
L_80231FEC:
    // 0x80231FEC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80231FF0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80231FF4: sb          $s1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r17;
    // 0x80231FF8: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
L_80231FFC:
    // 0x80231FFC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80232000: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80232004: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232008: jr          $ra
    // 0x8023200C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023200C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022D420_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D420: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D424: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D428: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D42C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    // 0x8022D430: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D434: jal         0x8006033C
    // 0x8022D438: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022D438: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022D43C: beq         $v0, $zero, L_8022D4AC
    if (ctx->r2 == 0) {
        // 0x8022D440: nop
    
            goto L_8022D4AC;
    }
    // 0x8022D440: nop

    // 0x8022D444: jal         0x8006033C
    // 0x8022D448: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022D448: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_1:
    // 0x8022D44C: bne         $v0, $zero, L_8022D51C
    if (ctx->r2 != 0) {
        // 0x8022D450: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8022D51C;
    }
    // 0x8022D450: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022D454: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022D458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D45C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D460: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8022D464: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D468: jal         0x8002C678
    // 0x8022D46C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_2;
    // 0x8022D46C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_2:
    // 0x8022D470: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8022D474: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D478: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x8022D47C: jal         0x800319B4
    // 0x8022D480: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x8022D480: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_3:
    // 0x8022D484: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022D488: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8022D48C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D490: jal         0x8006036C
    // 0x8022D494: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8022D494: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022D498: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x8022D49C: jal         0x8002A33C
    // 0x8022D4A0: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022D4A0: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_5:
    // 0x8022D4A4: j           L_8022D51C
    // 0x8022D4A8: nop

        goto L_8022D51C;
    // 0x8022D4A8: nop

L_8022D4AC:
    // 0x8022D4AC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022D4B0: jal         0x8003E6BC
    // 0x8022D4B4: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_6;
    // 0x8022D4B4: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_6:
    // 0x8022D4B8: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x8022D4BC: beq         $v1, $v0, L_8022D51C
    if (ctx->r3 == ctx->r2) {
        // 0x8022D4C0: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8022D51C;
    }
    // 0x8022D4C0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022D4C4: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022D4C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D4CC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D4D0: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8022D4D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D4D8: jal         0x8002C678
    // 0x8022D4DC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_7;
    // 0x8022D4DC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_7:
    // 0x8022D4E0: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8022D4E4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D4E8: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x8022D4EC: jal         0x800319B4
    // 0x8022D4F0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_8;
    // 0x8022D4F0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_8:
    // 0x8022D4F4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022D4F8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8022D4FC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D500: jal         0x8006036C
    // 0x8022D504: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x8022D504: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_9:
    // 0x8022D508: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x8022D50C: jal         0x8002A33C
    // 0x8022D510: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8022D510: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_10:
    // 0x8022D514: jal         0x80060590
    // 0x8022D518: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_80060590_3B990(rdram, ctx);
        goto after_11;
    // 0x8022D518: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_11:
L_8022D51C:
    // 0x8022D51C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D520: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D524: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D528: jr          $ra
    // 0x8022D52C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D52C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BE78_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BE78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BE7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BE80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BE84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BE88: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BE8C: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8022BE90: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022BE94: jal         0x8002C654
    // 0x8022BE98: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8022BE98: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022BE9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BEA0: jal         0x8004D5D4
    // 0x8022BEA4: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022BEA4: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    after_1:
    // 0x8022BEA8: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8022BEAC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022BEB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BEB4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022BEB8: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022BEBC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022BEC0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022BEC4: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x8022BEC8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x8022BECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BED0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BED4: jr          $ra
    // 0x8022BED8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BED8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238D5C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238D5C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238D60: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80238D64: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80238D68: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80238D6C: bne         $v0, $zero, L_80238D78
    if (ctx->r2 != 0) {
        // 0x80238D70: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238D78;
    }
    // 0x80238D70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238D74: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80238D78:
    // 0x80238D78: jr          $ra
    // 0x80238D7C: nop

    TRACE_RETURN()
    return;
    // 0x80238D7C: nop

;}
RECOMP_FUNC void func_8022DFD4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DFD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DFD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DFDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DFE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DFE4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022DFE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DFEC: jal         0x8004DA90
    // 0x8022DFF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022DFF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022DFF4: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x8022DFF8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DFFC: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x8022E000: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E004: bne         $v0, $zero, L_8022E03C
    if (ctx->r2 != 0) {
        // 0x8022E008: nop
    
            goto L_8022E03C;
    }
    // 0x8022E008: nop

    // 0x8022E00C: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x8022E010: beq         $v0, $zero, L_8022E024
    if (ctx->r2 == 0) {
        // 0x8022E014: nop
    
            goto L_8022E024;
    }
    // 0x8022E014: nop

    // 0x8022E018: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022E01C: j           L_8022E02C
    // 0x8022E020: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_8022E02C;
    // 0x8022E020: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_8022E024:
    // 0x8022E024: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022E028: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_8022E02C:
    // 0x8022E02C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022E030: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022E034: j           L_8022E08C
    // 0x8022E038: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022E08C;
    // 0x8022E038: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022E03C:
    // 0x8022E03C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022E040: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E044: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022E048: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E04C: bne         $v0, $zero, L_8022E05C
    if (ctx->r2 != 0) {
        // 0x8022E050: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E05C;
    }
    // 0x8022E050: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E054: j           L_8022E08C
    // 0x8022E058: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022E08C;
    // 0x8022E058: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E05C:
    // 0x8022E05C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022E060: jal         0x8022FF64
    // 0x8022E064: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022FF64_ovl21(rdram, ctx);
        goto after_1;
    // 0x8022E064: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x8022E068: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E06C: beq         $v0, $zero, L_8022E090
    if (ctx->r2 == 0) {
        // 0x8022E070: nop
    
            goto L_8022E090;
    }
    // 0x8022E070: nop

    // 0x8022E074: jal         0x8022FEC8
    // 0x8022E078: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FEC8_ovl21(rdram, ctx);
        goto after_2;
    // 0x8022E078: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022E07C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E080: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022E084: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022E088: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022E08C:
    // 0x8022E08C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E090:
    // 0x8022E090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E094: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E098: jr          $ra
    // 0x8022E09C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E09C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C848_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C84C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C850: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C858: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C85C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C860: beq         $v1, $v0, L_8022C8C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C864: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022C8C8;
    }
    // 0x8022C864: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C868: beql        $v0, $zero, L_8022C880
    if (ctx->r2 == 0) {
        // 0x8022C86C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C880;
    }
    goto skip_0;
    // 0x8022C86C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C870: beq         $v1, $zero, L_8022C890
    if (ctx->r3 == 0) {
        // 0x8022C874: nop
    
            goto L_8022C890;
    }
    // 0x8022C874: nop

    // 0x8022C878: j           L_8022C918
    // 0x8022C87C: nop

        goto L_8022C918;
    // 0x8022C87C: nop

L_8022C880:
    // 0x8022C880: beq         $v1, $v0, L_8022C8E8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C884: nop
    
            goto L_8022C8E8;
    }
    // 0x8022C884: nop

    // 0x8022C888: j           L_8022C918
    // 0x8022C88C: nop

        goto L_8022C918;
    // 0x8022C88C: nop

L_8022C890:
    // 0x8022C890: jal         0x8006033C
    // 0x8022C894: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022C894: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    after_0:
    // 0x8022C898: bnel        $v0, $zero, L_8022C8B4
    if (ctx->r2 != 0) {
        // 0x8022C89C: sb          $zero, 0x8($s0)
        MEM_B(0X8, ctx->r16) = 0;
            goto L_8022C8B4;
    }
    goto skip_1;
    // 0x8022C89C: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    skip_1:
    // 0x8022C8A0: jal         0x8006033C
    // 0x8022C8A4: addiu       $a0, $zero, 0x64A
    ctx->r4 = ADD32(0, 0X64A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022C8A4: addiu       $a0, $zero, 0x64A
    ctx->r4 = ADD32(0, 0X64A);
    after_1:
    // 0x8022C8A8: beq         $v0, $zero, L_8022C8BC
    if (ctx->r2 == 0) {
        // 0x8022C8AC: nop
    
            goto L_8022C8BC;
    }
    // 0x8022C8AC: nop

    // 0x8022C8B0: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
L_8022C8B4:
    // 0x8022C8B4: j           L_8022C918
    // 0x8022C8B8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022C918;
    // 0x8022C8B8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022C8BC:
    // 0x8022C8BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C8C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C8C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C8C8:
    // 0x8022C8C8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022C8CC: lw          $v0, -0x7798($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7798);
    // 0x8022C8D0: beq         $v0, $zero, L_8022C918
    if (ctx->r2 == 0) {
        // 0x8022C8D4: nop
    
            goto L_8022C918;
    }
    // 0x8022C8D4: nop

    // 0x8022C8D8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C8DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C8E0: j           L_8022C918
    // 0x8022C8E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022C918;
    // 0x8022C8E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C8E8:
    // 0x8022C8E8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022C8EC: lw          $v0, -0x7798($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7798);
    // 0x8022C8F0: bne         $v0, $zero, L_8022C918
    if (ctx->r2 != 0) {
        // 0x8022C8F4: nop
    
            goto L_8022C918;
    }
    // 0x8022C8F4: nop

    // 0x8022C8F8: jal         0x8006036C
    // 0x8022C8FC: addiu       $a0, $zero, 0x64A
    ctx->r4 = ADD32(0, 0X64A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8022C8FC: addiu       $a0, $zero, 0x64A
    ctx->r4 = ADD32(0, 0X64A);
    after_2:
    // 0x8022C900: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022C904: jal         0x800616FC
    // 0x8022C908: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8022C908: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x8022C90C: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x8022C910: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022C914: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022C918:
    // 0x8022C918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C91C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C920: jr          $ra
    // 0x8022C924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FEC8_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FEC8: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022FECC: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x8022FED0: jr          $ra
    // 0x8022FED4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x8022FED4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_802251B4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251B4: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x802251B8: lb          $a3, -0x3BC7($a3)
    ctx->r7 = MEM_B(ctx->r7, -0X3BC7);
    // 0x802251BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251C4: addiu       $a0, $a0, 0xCB4
    ctx->r4 = ADD32(ctx->r4, 0XCB4);
    // 0x802251C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D0: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
    // 0x802251D4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802251D8: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x802251DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802251E0: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x802251E4: lbu         $a1, 0x3($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3);
    // 0x802251E8: lui         $t0, 0x7FE9
    ctx->r8 = S32(0X7FE9 << 16);
    // 0x802251EC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x802251F0: sh          $a1, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r5;
    // 0x802251F4: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x802251F8: ori         $t0, $t0, 0xC000
    ctx->r8 = ctx->r8 | 0XC000;
    // 0x802251FC: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80225200: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225204: sb          $a2, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r6;
    // 0x80225208: lbu         $t1, 0x1($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1);
    // 0x8022520C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225210: slti        $a3, $a3, 0xA
    ctx->r7 = SIGNED(ctx->r7) < 0XA ? 1 : 0;
    // 0x80225214: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80225218: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022521C: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225220: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80225224: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225228: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022522C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225230: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225234: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225238: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022523C: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225240: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x80225244: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225248: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x8022524C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225250: sb          $t1, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r9;
    // 0x80225254: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225258: sb          $a1, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r5;
    // 0x8022525C: beq         $a3, $zero, L_80225278
    if (ctx->r7 == 0) {
        // 0x80225260: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225278;
    }
    // 0x80225260: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225264: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225268: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
    // 0x8022526C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225270: j           L_80225288
    // 0x80225274: sb          $v0, 0xB62($at)
    MEM_B(0XB62, ctx->r1) = ctx->r2;
        goto L_80225288;
    // 0x80225274: sb          $v0, 0xB62($at)
    MEM_B(0XB62, ctx->r1) = ctx->r2;
L_80225278:
    // 0x80225278: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022527C: sb          $zero, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = 0;
    // 0x80225280: jal         0x80060590
    // 0x80225284: addiu       $a0, $zero, 0x642
    ctx->r4 = ADD32(0, 0X642);
    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x80225284: addiu       $a0, $zero, 0x642
    ctx->r4 = ADD32(0, 0X642);
    after_0:
L_80225288:
    // 0x80225288: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8022528C: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x80225290: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225294: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80225298: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x8022529C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802252A0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802252A4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802252A8: lw          $a0, -0x5874($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5874);
    // 0x802252AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802252B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802252B4: lw          $v0, -0x53EC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X53EC);
    // 0x802252B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252BC: jal         0x8004C790
    // 0x802252C0: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_1;
    // 0x802252C0: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_1:
    // 0x802252C4: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252C8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802252CC: addiu       $a0, $a0, -0x530C
    ctx->r4 = ADD32(ctx->r4, -0X530C);
    // 0x802252D0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252D4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802252D8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252DC: lw          $v1, -0x52CC($at)
    ctx->r3 = MEM_W(ctx->r1, -0X52CC);
    // 0x802252E0: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252E4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252E8: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252EC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802252F0: addiu       $v0, $v0, -0x53B4
    ctx->r2 = ADD32(ctx->r2, -0X53B4);
    // 0x802252F4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252F8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802252FC: jal         0x80054FB8
    // 0x80225300: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_2;
    // 0x80225300: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_2:
    // 0x80225304: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225308: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022530C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225310: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80225314: jal         0x8004A614
    // 0x80225318: lw          $a0, -0x6700($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6700);
    func_8004A614_25A14(rdram, ctx);
        goto after_3;
    // 0x80225318: lw          $a0, -0x6700($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6700);
    after_3:
    // 0x8022531C: jal         0x80225340
    // 0x80225320: nop

    func_80225340_ovl21(rdram, ctx);
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
RECOMP_FUNC void func_8022C094_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C098: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C09C: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x8022C0A0: beq         $v0, $zero, L_8022C0B0
    if (ctx->r2 == 0) {
        // 0x8022C0A4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022C0B0;
    }
    // 0x8022C0A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C0A8: j           L_8022C0F0
    // 0x8022C0AC: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
        goto L_8022C0F0;
    // 0x8022C0AC: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
L_8022C0B0:
    // 0x8022C0B0: lbu         $v1, 0x5($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X5);
    // 0x8022C0B4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022C0B8: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x8022C0BC: bne         $v1, $zero, L_8022C0CC
    if (ctx->r3 != 0) {
        // 0x8022C0C0: sb          $zero, 0x9($a0)
        MEM_B(0X9, ctx->r4) = 0;
            goto L_8022C0CC;
    }
    // 0x8022C0C0: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022C0C4: j           L_8022C0E8
    // 0x8022C0C8: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
        goto L_8022C0E8;
    // 0x8022C0C8: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
L_8022C0CC:
    // 0x8022C0CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C0D0: bne         $v1, $v0, L_8022C0E0
    if (ctx->r3 != ctx->r2) {
        // 0x8022C0D4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C0E0;
    }
    // 0x8022C0D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C0D8: j           L_8022C0E8
    // 0x8022C0DC: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
        goto L_8022C0E8;
    // 0x8022C0DC: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
L_8022C0E0:
    // 0x8022C0E0: bne         $v1, $v0, L_8022C0F0
    if (ctx->r3 != ctx->r2) {
        // 0x8022C0E4: addiu       $a0, $zero, 0x604
        ctx->r4 = ADD32(0, 0X604);
            goto L_8022C0F0;
    }
    // 0x8022C0E4: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
L_8022C0E8:
    // 0x8022C0E8: jal         0x80060590
    // 0x8022C0EC: nop

    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x8022C0EC: nop

    after_0:
L_8022C0F0:
    // 0x8022C0F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C0F4: jr          $ra
    // 0x8022C0F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C0F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227690_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227690: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80227694: lhu         $v0, 0x44($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X44);
    // 0x80227698: lhu         $v1, 0x4C($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X4C);
    // 0x8022769C: lhu         $a0, 0x4E($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X4E);
    // 0x802276A0: lhu         $a1, 0x50($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X50);
    // 0x802276A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802276A8: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
    // 0x802276AC: lhu         $v0, 0x46($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X46);
    // 0x802276B0: lhu         $v1, 0x48($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X48);
    // 0x802276B4: lh          $a2, 0x44($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X44);
    // 0x802276B8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802276BC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802276C0: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
    // 0x802276C4: slti        $v0, $a2, -0x6000
    ctx->r2 = SIGNED(ctx->r6) < -0X6000 ? 1 : 0;
    // 0x802276C8: beq         $v0, $zero, L_802276D8
    if (ctx->r2 == 0) {
        // 0x802276CC: sh          $v1, 0x48($a3)
        MEM_H(0X48, ctx->r7) = ctx->r3;
            goto L_802276D8;
    }
    // 0x802276CC: sh          $v1, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r3;
    // 0x802276D0: j           L_802276E4
    // 0x802276D4: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
        goto L_802276E4;
    // 0x802276D4: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
L_802276D8:
    // 0x802276D8: slti        $v0, $a2, 0x6001
    ctx->r2 = SIGNED(ctx->r6) < 0X6001 ? 1 : 0;
    // 0x802276DC: bne         $v0, $zero, L_802276E8
    if (ctx->r2 != 0) {
        // 0x802276E0: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_802276E8;
    }
    // 0x802276E0: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_802276E4:
    // 0x802276E4: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
L_802276E8:
    // 0x802276E8: lh          $v1, 0x46($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X46);
    // 0x802276EC: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x802276F0: bne         $v0, $zero, L_80227704
    if (ctx->r2 != 0) {
        // 0x802276F4: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_80227704;
    }
    // 0x802276F4: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x802276F8: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x802276FC: bne         $v0, $zero, L_80227708
    if (ctx->r2 != 0) {
        // 0x80227700: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80227708;
    }
    // 0x80227700: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80227704:
    // 0x80227704: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
L_80227708:
    // 0x80227708: lh          $v1, 0x48($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X48);
    // 0x8022770C: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x80227710: bne         $v0, $zero, L_80227724
    if (ctx->r2 != 0) {
        // 0x80227714: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_80227724;
    }
    // 0x80227714: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x80227718: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x8022771C: bne         $v0, $zero, L_80227728
    if (ctx->r2 != 0) {
        // 0x80227720: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80227728;
    }
    // 0x80227720: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80227724:
    // 0x80227724: sh          $v0, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r2;
L_80227728:
    // 0x80227728: lh          $v0, 0x44($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X44);
    // 0x8022772C: lw          $v1, 0x1C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X1C);
    // 0x80227730: lh          $a0, 0x46($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X46);
    // 0x80227734: lw          $a1, 0x20($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X20);
    // 0x80227738: lhu         $a2, 0x18($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X18);
    // 0x8022773C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80227740: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227744: lh          $v0, 0x48($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X48);
    // 0x80227748: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8022774C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80227750: sw          $v1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r3;
    // 0x80227754: lw          $v1, 0x24($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X24);
    // 0x80227758: lhu         $a0, 0x14($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X14);
    // 0x8022775C: sw          $a1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r5;
    // 0x80227760: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x80227764: sh          $a2, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r6;
    // 0x80227768: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022776C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227770: sw          $v1, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r3;
    // 0x80227774: sh          $a0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r4;
    // 0x80227778: jr          $ra
    // 0x8022777C: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8022777C: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
;}
RECOMP_FUNC void func_80225790_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225794: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225798: addiu       $s0, $zero, 0x621
    ctx->r16 = ADD32(0, 0X621);
    // 0x8022579C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_802257A0:
    // 0x802257A0: jal         0x80060590
    // 0x802257A4: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x802257A4: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_0:
    // 0x802257A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802257AC: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x802257B0: sltiu       $v0, $v0, 0x63B
    ctx->r2 = ctx->r2 < 0X63B ? 1 : 0;
    // 0x802257B4: bne         $v0, $zero, L_802257A0
    if (ctx->r2 != 0) {
        // 0x802257B8: nop
    
            goto L_802257A0;
    }
    // 0x802257B8: nop

    // 0x802257BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802257C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802257C4: jr          $ra
    // 0x802257C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802257C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
