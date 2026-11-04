#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022CC54_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CC58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CC5C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CC60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022CC64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CC68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CC6C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022CC70: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022CC74: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022CC78: beq         $v1, $zero, L_8022CC94
    if (ctx->r3 == 0) {
        // 0x8022CC7C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022CC94;
    }
    // 0x8022CC7C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022CC80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CC84: beq         $v1, $v0, L_8022CCB8
    if (ctx->r3 == ctx->r2) {
        // 0x8022CC88: addiu       $a0, $a0, 0x14
        ctx->r4 = ADD32(ctx->r4, 0X14);
            goto L_8022CCB8;
    }
    // 0x8022CC88: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8022CC8C: j           L_8022CD90
    // 0x8022CC90: nop

        goto L_8022CD90;
    // 0x8022CC90: nop

L_8022CC94:
    // 0x8022CC94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CC98: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022CC9C: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x8022CCA0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022CCA4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022CCA8: sh          $v0, 0x66($s1)
    MEM_H(0X66, ctx->r17) = ctx->r2;
    // 0x8022CCAC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022CCB0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022CCB4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
L_8022CCB8:
    // 0x8022CCB8: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022CCBC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022CCC0: jal         0x8004F820
    // 0x8022CCC4: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022CCC4: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_0:
    // 0x8022CCC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CCCC: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022CCD0: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022CCD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CCD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022CCDC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CCE0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022CCE4: jal         0x8004DA90
    // 0x8022CCE8: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022CCE8: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_1:
    // 0x8022CCEC: jal         0x80040F30
    // 0x8022CCF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022CCF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022CCF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CCF8: jal         0x8003E934
    // 0x8022CCFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022CCFC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x8022CD00: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022CD04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CD08: andi        $s0, $s0, 0xF00
    ctx->r16 = ctx->r16 & 0XF00;
    // 0x8022CD0C: bne         $s0, $zero, L_8022CD48
    if (ctx->r16 != 0) {
        // 0x8022CD10: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_8022CD48;
    }
    // 0x8022CD10: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022CD14: lh          $a0, 0x16($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X16);
    // 0x8022CD18: lh          $v1, 0x2E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2E);
    // 0x8022CD1C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022CD20: bltz        $v0, L_8022CD38
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022CD24: slti        $v0, $v0, 0x11
        ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
            goto L_8022CD38;
    }
    // 0x8022CD24: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x8022CD28: beq         $v0, $zero, L_8022CD4C
    if (ctx->r2 == 0) {
        // 0x8022CD2C: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022CD4C;
    }
    // 0x8022CD2C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022CD30: j           L_8022CD78
    // 0x8022CD34: nop

        goto L_8022CD78;
    // 0x8022CD34: nop

L_8022CD38:
    // 0x8022CD38: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022CD3C: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x8022CD40: bne         $v0, $zero, L_8022CD78
    if (ctx->r2 != 0) {
        // 0x8022CD44: nop
    
            goto L_8022CD78;
    }
    // 0x8022CD44: nop

L_8022CD48:
    // 0x8022CD48: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
L_8022CD4C:
    // 0x8022CD4C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022CD50: jal         0x8009A3B4
    // 0x8022CD54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022CD54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022CD58: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022CD5C: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022CD60: jal         0x8009A3B4
    // 0x8022CD64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022CD64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8022CD68: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022CD6C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022CD70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CD74: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8022CD78:
    // 0x8022CD78: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x8022CD7C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8022CD80: bne         $v0, $zero, L_8022CD90
    if (ctx->r2 != 0) {
        // 0x8022CD84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CD90;
    }
    // 0x8022CD84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CD88: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022CD8C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_8022CD90:
    // 0x8022CD90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CD94: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CD98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CD9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CDA0: jr          $ra
    // 0x8022CDA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CDA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225150_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225154: addiu       $v0, $v0, 0x2508
    ctx->r2 = ADD32(ctx->r2, 0X2508);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225164: addiu       $v0, $v0, 0x2644
    ctx->r2 = ADD32(ctx->r2, 0X2644);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225174: addiu       $v0, $v0, 0x267C
    ctx->r2 = ADD32(ctx->r2, 0X267C);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225184: addiu       $v0, $v0, 0x273C
    ctx->r2 = ADD32(ctx->r2, 0X273C);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225194: addiu       $v0, $v0, 0x2770
    ctx->r2 = ADD32(ctx->r2, 0X2770);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802251A4: addiu       $v0, $v0, 0x2794
    ctx->r2 = ADD32(ctx->r2, 0X2794);
    // 0x802251A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802251AC: jr          $ra
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_802351C8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802351C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802351CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802351D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802351D4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802351D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802351DC: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802351E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802351E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802351E8: jal         0x8009A3B4
    // 0x802351EC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802351EC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x802351F0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802351F4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802351F8: jal         0x8009A3B4
    // 0x802351FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802351FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80235200: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80235204: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80235208: jal         0x8009A3B4
    // 0x8023520C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023520C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80235210: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80235214: jal         0x800A3450
    // 0x80235218: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80235218: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023521C: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x80235220: andi        $v1, $v1, 0x2
    ctx->r3 = ctx->r3 & 0X2;
    // 0x80235224: beq         $v1, $zero, L_80235234
    if (ctx->r3 == 0) {
        // 0x80235228: sh          $v0, 0x34A($s0)
        MEM_H(0X34A, ctx->r16) = ctx->r2;
            goto L_80235234;
    }
    // 0x80235228: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x8023522C: jal         0x802355B8
    // 0x80235230: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802355B8_ovl5(rdram, ctx);
        goto after_4;
    // 0x80235230: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80235234:
    // 0x80235234: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80235238: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023523C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235240: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235244: lw          $v0, 0x5E9C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5E9C);
    // 0x80235248: jalr        $v0
    // 0x8023524C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8023524C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80235250: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80235254: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235258: beq         $v0, $zero, L_80235274
    if (ctx->r2 == 0) {
        // 0x8023525C: nop
    
            goto L_80235274;
    }
    // 0x8023525C: nop

    // 0x80235260: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80235264: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80235268: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8023526C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80235270: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80235274:
    // 0x80235274: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80235278: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023527C: beq         $v0, $a1, L_80235294
    if (ctx->r2 == ctx->r5) {
        // 0x80235280: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235294;
    }
    // 0x80235280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235284: jal         0x800502EC
    // 0x80235288: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_6;
    // 0x80235288: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8023528C: j           L_8023529C
    // 0x80235290: nop

        goto L_8023529C;
    // 0x80235290: nop

L_80235294:
    // 0x80235294: jal         0x800504EC
    // 0x80235298: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_7;
    // 0x80235298: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_8023529C:
    // 0x8023529C: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x802352A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802352A4: sh          $v0, -0x3D86($at)
    MEM_H(-0X3D86, ctx->r1) = ctx->r2;
    // 0x802352A8: jal         0x80051248
    // 0x802352AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_8;
    // 0x802352AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802352B0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802352B4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802352B8: beq         $v0, $zero, L_802352D0
    if (ctx->r2 == 0) {
        // 0x802352BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802352D0;
    }
    // 0x802352BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802352C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802352C4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802352C8: jal         0x80047284
    // 0x802352CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x802352CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_802352D0:
    // 0x802352D0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802352D4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802352D8: beq         $v0, $zero, L_802352F0
    if (ctx->r2 == 0) {
        // 0x802352DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802352F0;
    }
    // 0x802352DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802352E0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802352E4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802352E8: jal         0x8003B564
    // 0x802352EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_10;
    // 0x802352EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_802352F0:
    // 0x802352F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802352F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802352F8: jr          $ra
    // 0x802352FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802352FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251B4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251B4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802251B8: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x802251BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251C4: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802251C8: beq         $v0, $zero, L_802251EC
    if (ctx->r2 == 0) {
        // 0x802251CC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251EC;
    }
    // 0x802251CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802251D4: beq         $v0, $zero, L_802251F8
    if (ctx->r2 == 0) {
        // 0x802251D8: nop
    
            goto L_802251F8;
    }
    // 0x802251D8: nop

    // 0x802251DC: beq         $v1, $zero, L_802251F8
    if (ctx->r3 == 0) {
        // 0x802251E0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802251F8;
    }
    // 0x802251E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251E4: j           L_8022520C
    // 0x802251E8: nop

        goto L_8022520C;
    // 0x802251E8: nop

L_802251EC:
    // 0x802251EC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802251F0: bne         $v1, $v0, L_8022520C
    if (ctx->r3 != ctx->r2) {
        // 0x802251F4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022520C;
    }
    // 0x802251F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_802251F8:
    // 0x802251F8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251FC: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x80225200: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80225204: j           L_80225210
    // 0x80225208: addiu       $a1, $a1, 0x2D78
    ctx->r5 = ADD32(ctx->r5, 0X2D78);
        goto L_80225210;
    // 0x80225208: addiu       $a1, $a1, 0x2D78
    ctx->r5 = ADD32(ctx->r5, 0X2D78);
L_8022520C:
    // 0x8022520C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80225210:
    // 0x80225210: jal         0x80037D80
    // 0x80225214: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x80225214: nop

    after_0:
    // 0x80225218: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8022521C: lb          $t1, -0x3BC7($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X3BC7);
    // 0x80225220: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80225224: addiu       $a0, $a0, 0xCB4
    ctx->r4 = ADD32(ctx->r4, 0XCB4);
    // 0x80225228: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x8022522C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225230: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80225234: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225238: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x8022523C: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x80225240: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225244: sh          $a2, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r6;
    // 0x80225248: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x8022524C: lui         $a3, 0x7FE9
    ctx->r7 = S32(0X7FE9 << 16);
    // 0x80225250: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x80225254: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225258: sb          $a1, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r5;
    // 0x8022525C: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x80225260: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225264: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80225268: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022526C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225270: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225274: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225278: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x8022527C: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225280: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225284: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225288: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022528C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225290: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225294: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225298: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x8022529C: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x802252A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802252A4: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x802252A8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252AC: sb          $t0, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r8;
    // 0x802252B0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252B4: sb          $a2, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r6;
    // 0x802252B8: bne         $v1, $zero, L_802252D4
    if (ctx->r3 != 0) {
        // 0x802252BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802252D4;
    }
    // 0x802252BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802252C0: bne         $t1, $v0, L_802252D4
    if (ctx->r9 != ctx->r2) {
        // 0x802252C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802252D4;
    }
    // 0x802252C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802252C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252CC: j           L_802252DC
    // 0x802252D0: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
        goto L_802252DC;
    // 0x802252D0: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
L_802252D4:
    // 0x802252D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252D8: sb          $zero, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = 0;
L_802252DC:
    // 0x802252DC: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802252E0: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x802252E4: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252E8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802252EC: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x802252F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802252F4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802252F8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802252FC: lw          $a0, 0x29B8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X29B8);
    // 0x80225300: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225304: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225308: lw          $v0, 0x2B20($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2B20);
    // 0x8022530C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225310: jal         0x8004C790
    // 0x80225314: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_1;
    // 0x80225314: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_1:
    // 0x80225318: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8022531C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225320: addiu       $a0, $a0, 0x2B80
    ctx->r4 = ADD32(ctx->r4, 0X2B80);
    // 0x80225324: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80225328: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022532C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225330: lw          $v1, 0x2D60($at)
    ctx->r3 = MEM_W(ctx->r1, 0X2D60);
    // 0x80225334: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x80225338: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022533C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80225340: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225344: addiu       $v0, $v0, 0x2B38
    ctx->r2 = ADD32(ctx->r2, 0X2B38);
    // 0x80225348: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022534C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225350: jal         0x80054FB8
    // 0x80225354: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_2;
    // 0x80225354: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_2:
    // 0x80225358: jal         0x8004A614
    // 0x8022535C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_3;
    // 0x8022535C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x80225360: jal         0x80225380
    // 0x80225364: nop

    func_80225380_ovl5(rdram, ctx);
        goto after_4;
    // 0x80225364: nop

    after_4:
    // 0x80225368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022536C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225370: jr          $ra
    // 0x80225374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225378: nop

    // 0x8022537C: nop

;}
RECOMP_FUNC void func_8022E73C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E73C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E740: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E744: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E748: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E74C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E750: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022E754: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022E758: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022E75C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022E760: bne         $v0, $zero, L_8022E7BC
    if (ctx->r2 != 0) {
        // 0x8022E764: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022E7BC;
    }
    // 0x8022E764: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022E768: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E76C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022E770: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E774: jal         0x8004F820
    // 0x8022E778: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022E778: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022E77C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E780: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022E784: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022E788: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E78C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E790: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022E794: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022E798: beq         $a0, $zero, L_8022E7BC
    if (ctx->r4 == 0) {
        // 0x8022E79C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022E7BC;
    }
    // 0x8022E79C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022E7A0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E7A4: jal         0x8022F4E0
    // 0x8022E7A8: nop

    func_8022F4E0_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022E7A8: nop

    after_1:
    // 0x8022E7AC: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022E7B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E7B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022E7B8: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022E7BC:
    // 0x8022E7BC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022E7C0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022E7C4: bne         $v0, $zero, L_8022E7E8
    if (ctx->r2 != 0) {
        // 0x8022E7C8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022E7E8;
    }
    // 0x8022E7C8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022E7CC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022E7D0: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022E7D4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022E7D8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022E7DC: jal         0x8022F578
    // 0x8022E7E0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022F578_ovl5(rdram, ctx);
        goto after_2;
    // 0x8022E7E0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022E7E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022E7E8:
    // 0x8022E7E8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E7EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E7F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E7F4: jr          $ra
    // 0x8022E7F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E7F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B788_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B788: jr          $ra
    // 0x8023B78C: nop

    TRACE_RETURN()
    return;
    // 0x8023B78C: nop

;}
RECOMP_FUNC void func_8023C418_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C418: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8023C41C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023C420: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C424: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C428: lh          $v0, 0x65C0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X65C0);
    // 0x8023C42C: blez        $v0, L_8023C480
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023C430: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8023C480;
    }
    // 0x8023C430: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023C434: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
L_8023C438:
    // 0x8023C438: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023C43C: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x8023C440: lbu         $v0, 0x14($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X14);
    // 0x8023C444: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C448: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8023C44C: sb          $v0, 0x75A0($at)
    MEM_B(0X75A0, ctx->r1) = ctx->r2;
    // 0x8023C450: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8023C454: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8023C458: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8023C45C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023C460: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C464: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8023C468: lh          $v1, 0x65C0($at)
    ctx->r3 = MEM_H(ctx->r1, 0X65C0);
    // 0x8023C46C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C470: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C474: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023C478: bne         $v0, $zero, L_8023C438
    if (ctx->r2 != 0) {
        // 0x8023C47C: sll         $v1, $a1, 16
        ctx->r3 = S32(ctx->r5 << 16);
            goto L_8023C438;
    }
    // 0x8023C47C: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
L_8023C480:
    // 0x8023C480: jr          $ra
    // 0x8023C484: nop

    TRACE_RETURN()
    return;
    // 0x8023C484: nop

;}
RECOMP_FUNC void func_8022C914_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C914: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022C918: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C91C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C920: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022C924: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022C928: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022C92C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022C930: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022C934: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022C938: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022C93C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C940: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022C944: beq         $v0, $zero, L_8022CC24
    if (ctx->r2 == 0) {
        // 0x8022C948: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022CC24;
    }
    // 0x8022C948: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022C94C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022C950: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C954: addu        $at, $at, $v0
    gpr jr_addend_8022C95C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C958: lw          $v0, 0x7148($at)
    ctx->r2 = ADD32(ctx->r1, 0X7148);
    // 0x8022C95C: jr          $v0
    // 0x8022C960: nop

    switch (jr_addend_8022C95C >> 2) {
        case 0: goto L_8022CAB4; break;
        case 1: goto L_8022CB20; break;
        case 2: goto L_8022CB20; break;
        case 3: goto L_8022CC00; break;
        case 4: goto L_8022C964; break;
        default: switch_error(__func__, 0x8022C95C, 0x80247148);
    }
    // 0x8022C960: nop

L_8022C964:
    // 0x8022C964: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x8022C968: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022C96C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C970: bne         $v0, $zero, L_8022CA7C
    if (ctx->r2 != 0) {
        // 0x8022C974: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022CA7C;
    }
    // 0x8022C974: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C978: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022C97C: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x8022C980: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C984: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C988: lbu         $v0, 0x543C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X543C);
    // 0x8022C98C: bne         $v1, $v0, L_8022CA68
    if (ctx->r3 != ctx->r2) {
        // 0x8022C990: nop
    
            goto L_8022CA68;
    }
    // 0x8022C990: nop

    // 0x8022C994: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x8022C998: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022C99C: beq         $v0, $zero, L_8022CA68
    if (ctx->r2 == 0) {
        // 0x8022C9A0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8022CA68;
    }
    // 0x8022C9A0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022C9A4: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x8022C9A8: addiu       $s5, $zero, 0x83
    ctx->r21 = ADD32(0, 0X83);
    // 0x8022C9AC: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x8022C9B0: addiu       $s4, $s4, 0x5440
    ctx->r20 = ADD32(ctx->r20, 0X5440);
    // 0x8022C9B4: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_8022C9B8:
    // 0x8022C9B8: jal         0x8004F144
    // 0x8022C9BC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022C9BC: nop

    after_0:
    // 0x8022C9C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C9C4: beq         $v1, $zero, L_8022CA58
    if (ctx->r3 == 0) {
        // 0x8022C9C8: nop
    
            goto L_8022CA58;
    }
    // 0x8022C9C8: nop

    // 0x8022C9CC: sb          $s6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r22;
    // 0x8022C9D0: sb          $s5, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r21;
    // 0x8022C9D4: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x8022C9D8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022C9DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C9E0: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8022C9E4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022C9E8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022C9EC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022C9F0: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022C9F4: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x8022C9F8: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022C9FC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022CA00: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CA04: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8022CA08: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022CA0C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022CA10: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CA14: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022CA18: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x8022CA1C: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x8022CA20: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022CA24: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022CA28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CA2C: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8022CA30: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022CA34: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022CA38: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CA3C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022CA40: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x8022CA44: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022CA48: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x8022CA4C: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x8022CA50: bne         $v0, $zero, L_8022C9B8
    if (ctx->r2 != 0) {
        // 0x8022CA54: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_8022C9B8;
    }
    // 0x8022CA54: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
L_8022CA58:
    // 0x8022CA58: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022CA5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CA60: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022CA64: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022CA68:
    // 0x8022CA68: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022CA6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CA70: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022CA74: j           L_8022CC24
    // 0x8022CA78: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_8022CC24;
    // 0x8022CA78: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_8022CA7C:
    // 0x8022CA7C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CA80: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022CA84: jal         0x8004FEA0
    // 0x8022CA88: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_1;
    // 0x8022CA88: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022CA8C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022CA90: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8022CA94: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022CA98: beq         $v0, $zero, L_8022CAAC
    if (ctx->r2 == 0) {
        // 0x8022CA9C: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_8022CAAC;
    }
    // 0x8022CA9C: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x8022CAA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CAA4: j           L_8022CAB0
    // 0x8022CAA8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022CAB0;
    // 0x8022CAA8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022CAAC:
    // 0x8022CAAC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022CAB0:
    // 0x8022CAB0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022CAB4:
    // 0x8022CAB4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CAB8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022CABC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CAC0: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8022CAC4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022CAC8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x8022CACC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022CAD0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022CAD4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022CAD8: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022CADC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022CAE0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022CAE4: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022CAE8: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022CAEC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CAF0: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
    // 0x8022CAF4: sh          $zero, 0x4($s2)
    MEM_H(0X4, ctx->r18) = 0;
    // 0x8022CAF8: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8022CAFC: andi        $v0, $v0, 0xFFB3
    ctx->r2 = ctx->r2 & 0XFFB3;
    // 0x8022CB00: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8022CB04: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022CB08: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022CB0C: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x8022CB10: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022CB14: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022CB18: jal         0x8002A33C
    // 0x8022CB1C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022CB1C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_2:
L_8022CB20:
    // 0x8022CB20: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022CB24: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022CB28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CB2C: jal         0x8004DA90
    // 0x8022CB30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022CB30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8022CB34: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022CB38: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022CB3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CB40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CB44: jal         0x80040F30
    // 0x8022CB48: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x8022CB48: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_4:
    // 0x8022CB4C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022CB50: beq         $v1, $zero, L_8022CC24
    if (ctx->r3 == 0) {
        // 0x8022CB54: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_8022CC24;
    }
    // 0x8022CB54: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022CB58: beq         $v0, $zero, L_8022CB74
    if (ctx->r2 == 0) {
        // 0x8022CB5C: andi        $v0, $v1, 0x1000
        ctx->r2 = ctx->r3 & 0X1000;
            goto L_8022CB74;
    }
    // 0x8022CB5C: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022CB60: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CB64: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022CB68: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CB6C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022CB70: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
L_8022CB74:
    // 0x8022CB74: beq         $v0, $zero, L_8022CC28
    if (ctx->r2 == 0) {
        // 0x8022CB78: addiu       $v0, $zero, 0x190C
        ctx->r2 = ADD32(0, 0X190C);
            goto L_8022CC28;
    }
    // 0x8022CB78: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
    // 0x8022CB7C: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x8022CB80: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8022CB84: bne         $v0, $zero, L_8022CBD8
    if (ctx->r2 != 0) {
        // 0x8022CB88: addiu       $a0, $zero, 0xDA
        ctx->r4 = ADD32(0, 0XDA);
            goto L_8022CBD8;
    }
    // 0x8022CB88: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
    // 0x8022CB8C: ori         $v0, $v1, 0x40
    ctx->r2 = ctx->r3 | 0X40;
    // 0x8022CB90: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8022CB94: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022CB98: beq         $v0, $zero, L_8022CBC8
    if (ctx->r2 == 0) {
        // 0x8022CB9C: nop
    
            goto L_8022CBC8;
    }
    // 0x8022CB9C: nop

    // 0x8022CBA0: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x8022CBA4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022CBA8: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022CBAC: beq         $v0, $zero, L_8022CBC8
    if (ctx->r2 == 0) {
        // 0x8022CBB0: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022CBC8;
    }
    // 0x8022CBB0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022CBB4: sh          $v0, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r2;
    // 0x8022CBB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CBBC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CBC0: jal         0x8007A290
    // 0x8022CBC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8007A290_55690(rdram, ctx);
        goto after_5;
    // 0x8022CBC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_8022CBC8:
    // 0x8022CBC8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022CBCC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022CBD0: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8022CBD4: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
L_8022CBD8:
    // 0x8022CBD8: jal         0x8002A33C
    // 0x8022CBDC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022CBDC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x8022CBE0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CBE4: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x8022CBE8: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022CBEC: addiu       $v1, $zero, -0x200
    ctx->r3 = ADD32(0, -0X200);
    // 0x8022CBF0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022CBF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CBF8: j           L_8022CC24
    // 0x8022CBFC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022CC24;
    // 0x8022CBFC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022CC00:
    // 0x8022CC00: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022CC04: bne         $v0, $zero, L_8022CC28
    if (ctx->r2 != 0) {
        // 0x8022CC08: addiu       $v0, $zero, 0x190C
        ctx->r2 = ADD32(0, 0X190C);
            goto L_8022CC28;
    }
    // 0x8022CC08: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
    // 0x8022CC0C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CC10: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CC14: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022CC18: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CC1C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022CC20: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022CC24:
    // 0x8022CC24: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
L_8022CC28:
    // 0x8022CC28: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022CC2C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022CC30: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022CC34: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022CC38: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022CC3C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022CC40: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022CC44: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CC48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022CC4C: jr          $ra
    // 0x8022CC50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022CC50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802397D8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802397D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802397DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802397E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802397E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802397E8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x802397EC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802397F0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802397F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802397F8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802397FC: jal         0x8004D5FC
    // 0x80239800: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x80239800: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80239804: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239808: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023980C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80239810: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80239814: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80239818: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023981C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80239820: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80239824: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80239828: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8023982C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80239830: jal         0x8003E934
    // 0x80239834: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80239834: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    after_1:
    // 0x80239838: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8023983C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80239840: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80239844: sh          $v1, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r3;
    // 0x80239848: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8023984C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80239850: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80239854: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80239858: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023985C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80239860: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80239864: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80239868: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023986C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239870: jr          $ra
    // 0x80239874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80239874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023F890_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F890: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023F894: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8023F898: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023F89C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8023F8A0: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x8023F8A4: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8023F8A8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8023F8AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023F8B0: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x8023F8B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023F8B8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023F8BC: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8023F8C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023F8C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023F8C8: sw          $v1, 0x88($s2)
    MEM_W(0X88, ctx->r18) = ctx->r3;
    // 0x8023F8CC: sw          $v0, 0x8C($s2)
    MEM_W(0X8C, ctx->r18) = ctx->r2;
    // 0x8023F8D0: sh          $zero, 0x7C($s2)
    MEM_H(0X7C, ctx->r18) = 0;
    // 0x8023F8D4: jal         0x8004DD04
    // 0x8023F8D8: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x8023F8D8: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    after_0:
    // 0x8023F8DC: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8023F8E0: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x8023F8E4: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x8023F8E8: lhu         $a3, 0x18($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X18);
    // 0x8023F8EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023F8F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8023F8F4: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8023F8F8: sh          $v1, 0x90($s2)
    MEM_H(0X90, ctx->r18) = ctx->r3;
    // 0x8023F8FC: sh          $v0, 0x92($s2)
    MEM_H(0X92, ctx->r18) = ctx->r2;
    // 0x8023F900: jal         0x8009A3B4
    // 0x8023F904: sh          $a3, 0x94($s2)
    MEM_H(0X94, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023F904: sh          $a3, 0x94($s2)
    MEM_H(0X94, ctx->r18) = ctx->r7;
    after_1:
    // 0x8023F908: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8023F90C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023F910: jal         0x8009A3B4
    // 0x8023F914: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023F914: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023F918: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8023F91C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023F920: beq         $v0, $zero, L_8023F95C
    if (ctx->r2 == 0) {
        // 0x8023F924: nop
    
            goto L_8023F95C;
    }
    // 0x8023F924: nop

    // 0x8023F928: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x8023F92C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F930: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023F934: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F938: lhu         $v1, 0x6C68($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6C68);
    // 0x8023F93C: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x8023F940: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F944: sb          $v1, 0x96($s2)
    MEM_B(0X96, ctx->r18) = ctx->r3;
    // 0x8023F948: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023F94C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F950: lhu         $v0, 0x6C6A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X6C6A);
    // 0x8023F954: j           L_8023F98C
    // 0x8023F958: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
        goto L_8023F98C;
    // 0x8023F958: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
L_8023F95C:
    // 0x8023F95C: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x8023F960: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F964: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023F968: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F96C: lhu         $v1, 0x6C50($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6C50);
    // 0x8023F970: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x8023F974: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F978: sb          $v1, 0x96($s2)
    MEM_B(0X96, ctx->r18) = ctx->r3;
    // 0x8023F97C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023F980: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F984: lhu         $v0, 0x6C52($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X6C52);
    // 0x8023F988: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
L_8023F98C:
    // 0x8023F98C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023F990: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8023F994: sh          $v1, 0x98($s2)
    MEM_H(0X98, ctx->r18) = ctx->r3;
    // 0x8023F998: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023F99C: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8023F9A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F9A4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023F9A8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023F9AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023F9B0: jr          $ra
    // 0x8023F9B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023F9B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80235D44_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235D44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235D48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235D4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235D50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235D54: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235D58: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235D5C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80235D60: jal         0x8004D5D4
    // 0x80235D64: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80235D64: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80235D68: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80235D6C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80235D70: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80235D74: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80235D78: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80235D7C: lhu         $a2, 0x54($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X54);
    // 0x80235D80: lhu         $a3, 0x56($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X56);
    // 0x80235D84: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80235D88: lhu         $t0, 0x58($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X58);
    // 0x80235D8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235D90: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80235D94: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x80235D98: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80235D9C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80235DA0: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x80235DA4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80235DA8: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80235DAC: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x80235DB0: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80235DB4: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80235DB8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80235DBC: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80235DC0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235DC4: addiu       $v0, $v0, 0x5F38
    ctx->r2 = ADD32(ctx->r2, 0X5F38);
    // 0x80235DC8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80235DCC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80235DD0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80235DD4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80235DD8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80235DDC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80235DE0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80235DE4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80235DE8: sh          $a1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r5;
    // 0x80235DEC: sh          $a2, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r6;
    // 0x80235DF0: sh          $a3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r7;
    // 0x80235DF4: sh          $t0, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r8;
    // 0x80235DF8: sh          $v1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r3;
    // 0x80235DFC: sh          $a0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r4;
    // 0x80235E00: sw          $t1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r9;
    // 0x80235E04: sw          $t2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r10;
    // 0x80235E08: sw          $t3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r11;
    // 0x80235E0C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80235E10: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x80235E14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235E18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235E1C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80235E20: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80235E24: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80235E28: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80235E2C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80235E30: jal         0x80050294
    // 0x80235E34: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80235E34: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_1:
    // 0x80235E38: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235E3C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80235E40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235E44: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235E4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235E50: jr          $ra
    // 0x80235E54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235E54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237678_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237678: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023767C: lb          $a0, 0xD($a1)
    ctx->r4 = MEM_B(ctx->r5, 0XD);
    // 0x80237680: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80237684: addiu       $v0, $v0, 0x603C
    ctx->r2 = ADD32(ctx->r2, 0X603C);
    // 0x80237688: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x8023768C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237690: lbu         $a2, 0x0($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X0);
    // 0x80237694: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80237698: beq         $a2, $v0, L_802376D8
    if (ctx->r6 == ctx->r2) {
        // 0x8023769C: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_802376D8;
    }
    // 0x8023769C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802376A0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802376A4: lbu         $v0, -0x3A47($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A47);
    // 0x802376A8: bne         $v0, $a2, L_802376D8
    if (ctx->r2 != ctx->r6) {
        // 0x802376AC: nop
    
            goto L_802376D8;
    }
    // 0x802376AC: nop

    // 0x802376B0: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x802376B4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802376B8: lw          $v0, -0x3A40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A40);
    // 0x802376BC: bne         $v0, $v1, L_802376D8
    if (ctx->r2 != ctx->r3) {
        // 0x802376C0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802376D8;
    }
    // 0x802376C0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802376C4: lb          $v1, 0xE($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XE);
    // 0x802376C8: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x802376CC: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x802376D0: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802376D4: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
L_802376D8:
    // 0x802376D8: lb          $v0, 0xE($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XE);
    // 0x802376DC: beq         $v0, $zero, L_80237720
    if (ctx->r2 == 0) {
        // 0x802376E0: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80237720;
    }
    // 0x802376E0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802376E4: lb          $v0, 0xF($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XF);
    // 0x802376E8: bne         $v0, $zero, L_8023770C
    if (ctx->r2 != 0) {
        // 0x802376EC: nop
    
            goto L_8023770C;
    }
    // 0x802376EC: nop

    // 0x802376F0: lbu         $v0, 0xFC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XFC);
    // 0x802376F4: xori        $v0, $v0, 0xB
    ctx->r2 = ctx->r2 ^ 0XB;
    // 0x802376F8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x802376FC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80237700: andi        $v0, $v0, 0xB
    ctx->r2 = ctx->r2 & 0XB;
    // 0x80237704: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237708: sb          $v0, 0xFC($a1)
    MEM_B(0XFC, ctx->r5) = ctx->r2;
L_8023770C:
    // 0x8023770C: lbu         $v0, 0xF($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XF);
    // 0x80237710: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237714: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80237718: j           L_80237728
    // 0x8023771C: sb          $v0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r2;
        goto L_80237728;
    // 0x8023771C: sb          $v0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r2;
L_80237720:
    // 0x80237720: sb          $v0, 0xFC($a1)
    MEM_B(0XFC, ctx->r5) = ctx->r2;
    // 0x80237724: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
L_80237728:
    // 0x80237728: jr          $ra
    // 0x8023772C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8023772C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8023A4EC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A4EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A4F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A4F4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023A4F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023A4FC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023A500: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A504: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x8023A508: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023A50C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8023A510: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A514: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8023A518: beq         $v1, $v0, L_8023A58C
    if (ctx->r3 == ctx->r2) {
        // 0x8023A51C: addiu       $s2, $s1, 0x440
        ctx->r18 = ADD32(ctx->r17, 0X440);
            goto L_8023A58C;
    }
    // 0x8023A51C: addiu       $s2, $s1, 0x440
    ctx->r18 = ADD32(ctx->r17, 0X440);
    // 0x8023A520: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023A524: beql        $v0, $zero, L_8023A53C
    if (ctx->r2 == 0) {
        // 0x8023A528: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023A53C;
    }
    goto skip_0;
    // 0x8023A528: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023A52C: beq         $v1, $zero, L_8023A554
    if (ctx->r3 == 0) {
        // 0x8023A530: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023A554;
    }
    // 0x8023A530: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023A534: j           L_8023A698
    // 0x8023A538: nop

        goto L_8023A698;
    // 0x8023A538: nop

L_8023A53C:
    // 0x8023A53C: beq         $v1, $v0, L_8023A658
    if (ctx->r3 == ctx->r2) {
        // 0x8023A540: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023A658;
    }
    // 0x8023A540: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A544: beq         $v1, $v0, L_8023A67C
    if (ctx->r3 == ctx->r2) {
        // 0x8023A548: nop
    
            goto L_8023A67C;
    }
    // 0x8023A548: nop

    // 0x8023A54C: j           L_8023A698
    // 0x8023A550: nop

        goto L_8023A698;
    // 0x8023A550: nop

L_8023A554:
    // 0x8023A554: lhu         $v1, 0x440($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X440);
    // 0x8023A558: lhu         $a2, 0x4C8($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X4C8);
    // 0x8023A55C: addiu       $a0, $zero, 0x141
    ctx->r4 = ADD32(0, 0X141);
    // 0x8023A560: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8023A564: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8023A568: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023A56C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8023A570: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8023A574: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8023A578: sh          $v1, 0x440($s1)
    MEM_H(0X440, ctx->r17) = ctx->r3;
    // 0x8023A57C: jal         0x8002A33C
    // 0x8023A580: sh          $a2, 0x4C8($s1)
    MEM_H(0X4C8, ctx->r17) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023A580: sh          $a2, 0x4C8($s1)
    MEM_H(0X4C8, ctx->r17) = ctx->r6;
    after_0:
    // 0x8023A584: j           L_8023A698
    // 0x8023A588: nop

        goto L_8023A698;
    // 0x8023A588: nop

L_8023A58C:
    // 0x8023A58C: lb          $v0, 0xA6($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA6);
    // 0x8023A590: beq         $v0, $zero, L_8023A5A0
    if (ctx->r2 == 0) {
        // 0x8023A594: addiu       $a0, $zero, 0x154
        ctx->r4 = ADD32(0, 0X154);
            goto L_8023A5A0;
    }
    // 0x8023A594: addiu       $a0, $zero, 0x154
    ctx->r4 = ADD32(0, 0X154);
    // 0x8023A598: jal         0x8002A33C
    // 0x8023A59C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023A59C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_1:
L_8023A5A0:
    // 0x8023A5A0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8023A5A4: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8023A5A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023A5AC: jal         0x8004F820
    // 0x8023A5B0: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8023A5B0: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_2:
    // 0x8023A5B4: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8023A5B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A5BC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023A5C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A5C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023A5C8: bltz        $v0, L_8023A5E4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023A5CC: sh          $v1, 0x56($s1)
        MEM_H(0X56, ctx->r17) = ctx->r3;
            goto L_8023A5E4;
    }
    // 0x8023A5CC: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x8023A5D0: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x8023A5D4: beq         $v0, $zero, L_8023A698
    if (ctx->r2 == 0) {
        // 0x8023A5D8: nop
    
            goto L_8023A698;
    }
    // 0x8023A5D8: nop

    // 0x8023A5DC: j           L_8023A5F4
    // 0x8023A5E0: nop

        goto L_8023A5F4;
    // 0x8023A5E0: nop

L_8023A5E4:
    // 0x8023A5E4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023A5E8: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x8023A5EC: beq         $v0, $zero, L_8023A698
    if (ctx->r2 == 0) {
        // 0x8023A5F0: nop
    
            goto L_8023A698;
    }
    // 0x8023A5F0: nop

L_8023A5F4:
    // 0x8023A5F4: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x8023A5F8: bgez        $v0, L_8023A698
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A5FC: nop
    
            goto L_8023A698;
    }
    // 0x8023A5FC: nop

    // 0x8023A600: jal         0x8004EEAC
    // 0x8023A604: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_3;
    // 0x8023A604: nop

    after_3:
    // 0x8023A608: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023A60C: beq         $s0, $zero, L_8023A64C
    if (ctx->r16 == 0) {
        // 0x8023A610: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023A64C;
    }
    // 0x8023A610: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023A614: addiu       $a1, $s1, 0x188
    ctx->r5 = ADD32(ctx->r17, 0X188);
    // 0x8023A618: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023A61C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A620: sw          $s0, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r16;
    // 0x8023A624: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023A628: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x8023A62C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023A630: jal         0x8009A3B4
    // 0x8023A634: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023A634: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    after_4:
    // 0x8023A638: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8023A63C: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8023A640: jal         0x8009A3B4
    // 0x8023A644: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023A644: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8023A648: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_8023A64C:
    // 0x8023A64C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023A650: j           L_8023A66C
    // 0x8023A654: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_8023A66C;
    // 0x8023A654: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_8023A658:
    // 0x8023A658: lw          $v0, 0x4C4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C4);
    // 0x8023A65C: lb          $v0, 0xC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XC);
    // 0x8023A660: beq         $v0, $zero, L_8023A698
    if (ctx->r2 == 0) {
        // 0x8023A664: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8023A698;
    }
    // 0x8023A664: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8023A668: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
L_8023A66C:
    // 0x8023A66C: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    // 0x8023A670: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A674: j           L_8023A698
    // 0x8023A678: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8023A698;
    // 0x8023A678: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023A67C:
    // 0x8023A67C: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x8023A680: bgez        $v0, L_8023A698
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A684: addiu       $v1, $zero, 0x3C
        ctx->r3 = ADD32(0, 0X3C);
            goto L_8023A698;
    }
    // 0x8023A684: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x8023A688: lhu         $v0, 0x440($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X440);
    // 0x8023A68C: sh          $v1, 0x44C($s1)
    MEM_H(0X44C, ctx->r17) = ctx->r3;
    // 0x8023A690: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023A694: sh          $v0, 0x440($s1)
    MEM_H(0X440, ctx->r17) = ctx->r2;
L_8023A698:
    // 0x8023A698: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A69C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023A6A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A6A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A6A8: jr          $ra
    // 0x8023A6AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A6AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A970_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A970: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A974: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A978: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A97C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023A980: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A984: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A988: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023A98C: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8023A990: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8023A994: beq         $v0, $zero, L_8023ABB4
    if (ctx->r2 == 0) {
        // 0x8023A998: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_8023ABB4;
    }
    // 0x8023A998: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023A99C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023A9A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A9A4: addu        $at, $at, $v0
    gpr jr_addend_8023A9AC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A9A8: lw          $v0, 0x73A8($at)
    ctx->r2 = ADD32(ctx->r1, 0X73A8);
    // 0x8023A9AC: jr          $v0
    // 0x8023A9B0: nop

    switch (jr_addend_8023A9AC >> 2) {
        case 0: goto L_8023A9B4; break;
        case 1: goto L_8023A9D4; break;
        case 2: goto L_8023AA30; break;
        case 3: goto L_8023AAC8; break;
        case 4: goto L_8023AB68; break;
        default: switch_error(__func__, 0x8023A9AC, 0x802473A8);
    }
    // 0x8023A9B0: nop

L_8023A9B4:
    // 0x8023A9B4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A9B8: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8023A9BC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023A9C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A9C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023A9C8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023A9CC: j           L_8023ABB0
    // 0x8023A9D0: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_8023ABB0;
    // 0x8023A9D0: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_8023A9D4:
    // 0x8023A9D4: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023A9D8: bgez        $v0, L_8023A9EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A9DC: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_8023A9EC;
    }
    // 0x8023A9DC: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8023A9E0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A9E4: j           L_8023AB5C
    // 0x8023A9E8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
        goto L_8023AB5C;
    // 0x8023A9E8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_8023A9EC:
    // 0x8023A9EC: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x8023A9F0: beq         $v0, $zero, L_8023ABB4
    if (ctx->r2 == 0) {
        // 0x8023A9F4: nop
    
            goto L_8023ABB4;
    }
    // 0x8023A9F4: nop

    // 0x8023A9F8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023A9FC: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x8023AA00: bne         $v0, $zero, L_8023AA18
    if (ctx->r2 != 0) {
        // 0x8023AA04: nop
    
            goto L_8023AA18;
    }
    // 0x8023AA04: nop

    // 0x8023AA08: jal         0x8023AEE0
    // 0x8023AA0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023AEE0_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023AA0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023AA10: bne         $v0, $zero, L_8023AA84
    if (ctx->r2 != 0) {
        // 0x8023AA14: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_8023AA84;
    }
    // 0x8023AA14: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_8023AA18:
    // 0x8023AA18: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023AA1C: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8023AA20: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023AA24: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8023AA28: j           L_8023ABB4
    // 0x8023AA2C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023ABB4;
    // 0x8023AA2C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023AA30:
    // 0x8023AA30: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x8023AA34: beq         $v0, $zero, L_8023ABB4
    if (ctx->r2 == 0) {
        // 0x8023AA38: nop
    
            goto L_8023ABB4;
    }
    // 0x8023AA38: nop

    // 0x8023AA3C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023AA40: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x8023AA44: bne         $v0, $zero, L_8023AA5C
    if (ctx->r2 != 0) {
        // 0x8023AA48: nop
    
            goto L_8023AA5C;
    }
    // 0x8023AA48: nop

    // 0x8023AA4C: jal         0x8023AEE0
    // 0x8023AA50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023AEE0_ovl5(rdram, ctx);
        goto after_1;
    // 0x8023AA50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023AA54: bne         $v0, $zero, L_8023AA84
    if (ctx->r2 != 0) {
        // 0x8023AA58: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_8023AA84;
    }
    // 0x8023AA58: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_8023AA5C:
    // 0x8023AA5C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023AA60: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8023AA64: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023AA68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AA6C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023AA70: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023AA74: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8023AA78: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8023AA7C: j           L_8023ABB0
    // 0x8023AA80: ori         $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 | 0XC0;
        goto L_8023ABB0;
    // 0x8023AA80: ori         $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 | 0XC0;
L_8023AA84:
    // 0x8023AA84: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x8023AA88: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x8023AA8C: jal         0x8003491C
    // 0x8023AA90: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    func_8003491C_FD1C(rdram, ctx);
        goto after_2;
    // 0x8023AA90: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8023AA94: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023AA98: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023AA9C: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023AAA0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023AAA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AAA8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023AAAC: lw          $a0, 0x7C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X7C);
    // 0x8023AAB0: jal         0x800711A8
    // 0x8023AAB4: lbu         $a1, 0xB($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XB);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_3;
    // 0x8023AAB4: lbu         $a1, 0xB($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XB);
    after_3:
    // 0x8023AAB8: jal         0x8023AF9C
    // 0x8023AABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023AF9C_ovl5(rdram, ctx);
        goto after_4;
    // 0x8023AABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023AAC0: j           L_8023ABB4
    // 0x8023AAC4: nop

        goto L_8023ABB4;
    // 0x8023AAC4: nop

L_8023AAC8:
    // 0x8023AAC8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023AACC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023AAD0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8023AAD4: jal         0x8004F820
    // 0x8023AAD8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8023AAD8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x8023AADC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023AAE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AAE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AAE8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023AAEC: jal         0x8003E934
    // 0x8023AAF0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8023AAF0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_6:
    // 0x8023AAF4: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8023AAF8: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x8023AAFC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023AB00: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x8023AB04: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8023AB08: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023AB0C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023AB10: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023AB14: lh          $a2, -0x23C0($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X23C0);
    // 0x8023AB18: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023AB1C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023AB20: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023AB24: mflo        $a2
    ctx->r6 = lo;
    // 0x8023AB28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AB2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023AB30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023AB34: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x8023AB38: jal         0x8004DA90
    // 0x8023AB3C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x8023AB3C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_7:
    // 0x8023AB40: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023AB44: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023AB48: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023AB4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023AB50: bgez        $v0, L_8023ABB4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023AB54: nop
    
            goto L_8023ABB4;
    }
    // 0x8023AB54: nop

    // 0x8023AB58: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_8023AB5C:
    // 0x8023AB5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AB60: j           L_8023ABB4
    // 0x8023AB64: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023ABB4;
    // 0x8023AB64: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023AB68:
    // 0x8023AB68: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023AB6C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023AB70: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8023AB74: jal         0x8004F820
    // 0x8023AB78: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_8;
    // 0x8023AB78: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_8:
    // 0x8023AB7C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023AB80: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8023AB84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AB88: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023AB8C: bgez        $a0, L_8023ABB4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8023AB90: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023ABB4;
    }
    // 0x8023AB90: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023AB94: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023AB98: lhu         $v1, 0xE($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XE);
    // 0x8023AB9C: ori         $a0, $v0, 0x1
    ctx->r4 = ctx->r2 | 0X1;
    // 0x8023ABA0: andi        $v0, $a0, 0xF73F
    ctx->r2 = ctx->r4 & 0XF73F;
    // 0x8023ABA4: bne         $v1, $zero, L_8023ABB4
    if (ctx->r3 != 0) {
        // 0x8023ABA8: sh          $v0, 0x0($s1)
        MEM_H(0X0, ctx->r17) = ctx->r2;
            goto L_8023ABB4;
    }
    // 0x8023ABA8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8023ABAC: andi        $v0, $a0, 0xF33F
    ctx->r2 = ctx->r4 & 0XF33F;
L_8023ABB0:
    // 0x8023ABB0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023ABB4:
    // 0x8023ABB4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023ABB8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023ABBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023ABC0: jr          $ra
    // 0x8023ABC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023ABC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231410_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231410: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231414: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80231418: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023141C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80231420: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80231424: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80231428: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8023142C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80231430: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80231434: bne         $v0, $s2, L_802314DC
    if (ctx->r2 != ctx->r18) {
        // 0x80231438: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_802314DC;
    }
    // 0x80231438: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023143C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80231440: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80231444: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80231448: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023144C: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80231450: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80231454: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x80231458: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8023145C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231460: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x80231464: lh          $v0, 0x180($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X180);
    // 0x80231468: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023146C: lh          $v0, 0x182($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X182);
    // 0x80231470: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x80231474: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231478: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8023147C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80231480: lh          $v0, 0x184($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X184);
    // 0x80231484: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x80231488: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023148C: jal         0x8004EC38
    // 0x80231490: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x80231490: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x80231494: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80231498: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8023149C: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x802314A0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x802314A4: jal         0x80034FCC
    // 0x802314A8: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_1;
    // 0x802314A8: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_1:
    // 0x802314AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802314B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802314B4: jal         0x80050294
    // 0x802314B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x802314B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x802314BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802314C0: jal         0x8004EC38
    // 0x802314C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x802314C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x802314C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802314CC: sh          $v0, 0x7480($at)
    MEM_H(0X7480, ctx->r1) = ctx->r2;
    // 0x802314D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802314D4: j           L_80231508
    // 0x802314D8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
        goto L_80231508;
    // 0x802314D8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_802314DC:
    // 0x802314DC: lb          $v0, 0xD($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XD);
    // 0x802314E0: bne         $v0, $zero, L_802314F8
    if (ctx->r2 != 0) {
        // 0x802314E4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_802314F8;
    }
    // 0x802314E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802314E8: jal         0x8005044C
    // 0x802314EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x802314EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x802314F0: j           L_80231508
    // 0x802314F4: nop

        goto L_80231508;
    // 0x802314F4: nop

L_802314F8:
    // 0x802314F8: lb          $a1, 0xE($s2)
    ctx->r5 = MEM_B(ctx->r18, 0XE);
    // 0x802314FC: jal         0x80050294
    // 0x80231500: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80231500: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80231504: sb          $zero, 0xD($s2)
    MEM_B(0XD, ctx->r18) = 0;
L_80231508:
    // 0x80231508: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023150C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80231510: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80231514: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80231518: jr          $ra
    // 0x8023151C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023151C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022B300_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B304: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B308: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8022B30C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B310: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B314: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B318: lw          $v0, 0x5090($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5090);
    // 0x8022B31C: jalr        $v0
    // 0x8022B320: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022B320: nop

    after_0:
    // 0x8022B324: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B328: jr          $ra
    // 0x8022B32C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B32C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802375D4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802375D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802375D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802375DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802375E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802375E4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802375E8: bnel        $v0, $zero, L_80237620
    if (ctx->r2 != 0) {
        // 0x802375EC: addiu       $a0, $s0, 0x2C
        ctx->r4 = ADD32(ctx->r16, 0X2C);
            goto L_80237620;
    }
    goto skip_0;
    // 0x802375EC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    skip_0:
    // 0x802375F0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802375F4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802375F8: addiu       $v1, $v1, 0x6018
    ctx->r3 = ADD32(ctx->r3, 0X6018);
    // 0x802375FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237600: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237604: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x80237608: jal         0x80050294
    // 0x8023760C: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023760C: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    after_0:
    // 0x80237610: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80237614: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237618: j           L_80237654
    // 0x8023761C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80237654;
    // 0x8023761C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80237620:
    // 0x80237620: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80237624: jal         0x8009A3B4
    // 0x80237628: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80237628: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8023762C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80237630: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80237634: jal         0x8009A3B4
    // 0x80237638: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80237638: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8023763C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80237640: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80237644: jal         0x8009A3B4
    // 0x80237648: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80237648: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8023764C: jal         0x8005044C
    // 0x80237650: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80237650: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80237654:
    // 0x80237654: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237658: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8023765C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80237660: jal         0x8003B564
    // 0x80237664: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_5;
    // 0x80237664: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x80237668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023766C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237670: jr          $ra
    // 0x80237674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FCD0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FCD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FCD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FCD8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022FCDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FCE0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FCE4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FCE8: lw          $v0, 0x5C40($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5C40);
    // 0x8022FCEC: jalr        $v0
    // 0x8022FCF0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FCF0: nop

    after_0:
    // 0x8022FCF4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FCF8: jr          $ra
    // 0x8022FCFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FCFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023E954_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E954: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023E958: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023E95C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023E960: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023E964: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023E968: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023E96C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023E970: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023E974: lbu         $v0, 0xDE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDE);
    // 0x8023E978: lw          $v1, 0xD0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD0);
    // 0x8023E97C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023E980: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023E984: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x8023E988: lh          $a0, 0xE2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE2);
    // 0x8023E98C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8023E990: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8023E994: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023E998: jal         0x80032498
    // 0x8023E99C: ori         $s1, $v0, 0x1
    ctx->r17 = ctx->r2 | 0X1;
    func_80032498_D898(rdram, ctx);
        goto after_0;
    // 0x8023E99C: ori         $s1, $v0, 0x1
    ctx->r17 = ctx->r2 | 0X1;
    after_0:
    // 0x8023E9A0: lh          $a0, 0xE2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE2);
    // 0x8023E9A4: jal         0x800324B4
    // 0x8023E9A8: sll         $s2, $v0, 13
    ctx->r18 = S32(ctx->r2 << 13);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8023E9A8: sll         $s2, $v0, 13
    ctx->r18 = S32(ctx->r2 << 13);
    after_1:
    // 0x8023E9AC: lh          $v1, 0xE6($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE6);
    // 0x8023E9B0: lh          $a0, 0xE8($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE8);
    // 0x8023E9B4: addiu       $s3, $s0, 0xD0
    ctx->r19 = ADD32(ctx->r16, 0XD0);
    // 0x8023E9B8: addu        $s4, $s1, $zero
    ctx->r20 = ADD32(ctx->r17, 0);
    // 0x8023E9BC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023E9C0: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8023E9C4: lbu         $v1, 0xDC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XDC);
    // 0x8023E9C8: sll         $a1, $v0, 13
    ctx->r5 = S32(ctx->r2 << 13);
    // 0x8023E9CC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023E9D0: bne         $v1, $zero, L_8023EA00
    if (ctx->r3 != 0) {
        // 0x8023E9D4: sw          $a0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r4;
            goto L_8023EA00;
    }
    // 0x8023E9D4: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8023E9D8: nop

    // 0x8023E9DC: mult        $s1, $s2
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023E9E0: mflo        $a0
    ctx->r4 = lo;
    // 0x8023E9E4: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8023E9E8: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8023E9EC: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8023E9F0: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8023E9F4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023E9F8: j           L_8023EA80
    // 0x8023E9FC: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
        goto L_8023EA80;
    // 0x8023E9FC: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
L_8023EA00:
    // 0x8023EA00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023EA04: bne         $v1, $v0, L_8023EA30
    if (ctx->r3 != ctx->r2) {
        // 0x8023EA08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023EA30;
    }
    // 0x8023EA08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023EA0C: nop

    // 0x8023EA10: mult        $s1, $s2
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023EA14: mflo        $a0
    ctx->r4 = lo;
    // 0x8023EA18: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8023EA1C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8023EA20: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8023EA24: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023EA28: j           L_8023EA7C
    // 0x8023EA2C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
        goto L_8023EA7C;
    // 0x8023EA2C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
L_8023EA30:
    // 0x8023EA30: bne         $v1, $v0, L_8023EA5C
    if (ctx->r3 != ctx->r2) {
        // 0x8023EA34: nop
    
            goto L_8023EA5C;
    }
    // 0x8023EA34: nop

    // 0x8023EA38: mult        $s1, $s2
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023EA3C: mflo        $a0
    ctx->r4 = lo;
    // 0x8023EA40: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8023EA44: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8023EA48: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023EA4C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8023EA50: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8023EA54: j           L_8023EA80
    // 0x8023EA58: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
        goto L_8023EA80;
    // 0x8023EA58: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
L_8023EA5C:
    // 0x8023EA5C: nop

    // 0x8023EA60: mult        $s1, $s2
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023EA64: mflo        $a0
    ctx->r4 = lo;
    // 0x8023EA68: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8023EA6C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8023EA70: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023EA74: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023EA78: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
L_8023EA7C:
    // 0x8023EA7C: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
L_8023EA80:
    // 0x8023EA80: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8023EA84: jal         0x8004DD04
    // 0x8023EA88: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8023EA88: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8023EA8C: lhu         $v0, 0x12($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X12);
    // 0x8023EA90: sll         $v1, $s4, 24
    ctx->r3 = S32(ctx->r20 << 24);
    // 0x8023EA94: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8023EA98: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023EA9C: mflo        $v1
    ctx->r3 = lo;
    // 0x8023EAA0: lbu         $v0, 0xC($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XC);
    // 0x8023EAA4: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8023EAA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023EAAC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023EAB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023EAB4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023EAB8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023EABC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023EAC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023EAC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023EAC8: jr          $ra
    // 0x8023EACC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023EACC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022BAB8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BAB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BABC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BAC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BAC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BAC8: jal         0x8006033C
    // 0x8022BACC: addiu       $a0, $zero, 0x243
    ctx->r4 = ADD32(0, 0X243);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022BACC: addiu       $a0, $zero, 0x243
    ctx->r4 = ADD32(0, 0X243);
    after_0:
    // 0x8022BAD0: beq         $v0, $zero, L_8022BAE4
    if (ctx->r2 == 0) {
        // 0x8022BAD4: nop
    
            goto L_8022BAE4;
    }
    // 0x8022BAD4: nop

    // 0x8022BAD8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022BADC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022BAE0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022BAE4:
    // 0x8022BAE4: jal         0x8006033C
    // 0x8022BAE8: addiu       $a0, $zero, 0x244
    ctx->r4 = ADD32(0, 0X244);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022BAE8: addiu       $a0, $zero, 0x244
    ctx->r4 = ADD32(0, 0X244);
    after_1:
    // 0x8022BAEC: beq         $v0, $zero, L_8022BB00
    if (ctx->r2 == 0) {
        // 0x8022BAF0: nop
    
            goto L_8022BB00;
    }
    // 0x8022BAF0: nop

    // 0x8022BAF4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022BAF8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022BAFC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022BB00:
    // 0x8022BB00: jal         0x8006033C
    // 0x8022BB04: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022BB04: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    after_2:
    // 0x8022BB08: beq         $v0, $zero, L_8022BB1C
    if (ctx->r2 == 0) {
        // 0x8022BB0C: nop
    
            goto L_8022BB1C;
    }
    // 0x8022BB0C: nop

    // 0x8022BB10: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022BB14: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022BB18: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022BB1C:
    // 0x8022BB1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BB20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BB24: jr          $ra
    // 0x8022BB28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BB28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A160_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A160: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023A164: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8023A168: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8023A16C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023A170: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8023A174: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8023A178: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023A17C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023A180: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023A184: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023A188: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8023A18C: lui         $s6, 0x8020
    ctx->r22 = S32(0X8020 << 16);
    // 0x8023A190: addiu       $s6, $s6, 0x49B0
    ctx->r22 = ADD32(ctx->r22, 0X49B0);
    // 0x8023A194: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8023A198: beq         $v0, $zero, L_8023A4C4
    if (ctx->r2 == 0) {
        // 0x8023A19C: addiu       $s5, $s4, 0x440
        ctx->r21 = ADD32(ctx->r20, 0X440);
            goto L_8023A4C4;
    }
    // 0x8023A19C: addiu       $s5, $s4, 0x440
    ctx->r21 = ADD32(ctx->r20, 0X440);
    // 0x8023A1A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023A1A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A1A8: addu        $at, $at, $v0
    gpr jr_addend_8023A1B0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A1AC: lw          $v0, 0x7390($at)
    ctx->r2 = ADD32(ctx->r1, 0X7390);
    // 0x8023A1B0: jr          $v0
    // 0x8023A1B4: nop

    switch (jr_addend_8023A1B0 >> 2) {
        case 0: goto L_8023A1B8; break;
        case 1: goto L_8023A1F0; break;
        case 2: goto L_8023A224; break;
        case 3: goto L_8023A3A0; break;
        case 4: goto L_8023A3E0; break;
        case 5: goto L_8023A4A0; break;
        default: switch_error(__func__, 0x8023A1B0, 0x80247390);
    }
    // 0x8023A1B4: nop

L_8023A1B8:
    // 0x8023A1B8: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8023A1BC: addiu       $a0, $zero, 0xFD
    ctx->r4 = ADD32(0, 0XFD);
    // 0x8023A1C0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023A1C4: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    // 0x8023A1C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023A1CC: sb          $v1, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r3;
    // 0x8023A1D0: lhu         $v1, 0x0($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X0);
    // 0x8023A1D4: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x8023A1D8: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023A1DC: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8023A1E0: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8023A1E4: jal         0x8002A33C
    // 0x8023A1E8: sh          $v1, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023A1E8: sh          $v1, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r3;
    after_0:
    // 0x8023A1EC: sh          $zero, 0x88($s5)
    MEM_H(0X88, ctx->r21) = 0;
L_8023A1F0:
    // 0x8023A1F0: lhu         $v0, 0x4($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X4);
    // 0x8023A1F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023A1F8: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8023A1FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A200: bgez        $v0, L_8023A4C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A204: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8023A4C4;
    }
    // 0x8023A204: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8023A208: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x8023A20C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A210: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8023A214: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x8023A218: sh          $v1, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r3;
    // 0x8023A21C: j           L_8023A4C0
    // 0x8023A220: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
        goto L_8023A4C0;
    // 0x8023A220: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
L_8023A224:
    // 0x8023A224: addiu       $s3, $s4, 0x14
    ctx->r19 = ADD32(ctx->r20, 0X14);
    // 0x8023A228: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8023A22C: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x8023A230: addiu       $s0, $s6, 0x14
    ctx->r16 = ADD32(ctx->r22, 0X14);
    // 0x8023A234: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023A238: jal         0x8004F820
    // 0x8023A23C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8023A23C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_1:
    // 0x8023A240: addiu       $s2, $s5, 0x38
    ctx->r18 = ADD32(ctx->r21, 0X38);
    // 0x8023A244: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023A248: lhu         $v1, 0x56($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X56);
    // 0x8023A24C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023A250: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023A254: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A258: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023A25C: jal         0x8009A3B4
    // 0x8023A260: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023A260: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    after_2:
    // 0x8023A264: addiu       $s1, $s5, 0x40
    ctx->r17 = ADD32(ctx->r21, 0X40);
    // 0x8023A268: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023A26C: addiu       $a1, $s6, 0x1C
    ctx->r5 = ADD32(ctx->r22, 0X1C);
    // 0x8023A270: jal         0x8009A3B4
    // 0x8023A274: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023A274: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8023A278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A27C: jal         0x8004EC38
    // 0x8023A280: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_4;
    // 0x8023A280: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_4:
    // 0x8023A284: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023A288: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023A28C: andi        $a2, $v0, 0xFFF
    ctx->r6 = ctx->r2 & 0XFFF;
    // 0x8023A290: addiu       $a3, $zero, 0x1100
    ctx->r7 = ADD32(0, 0X1100);
    // 0x8023A294: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023A298: jal         0x8004DBA0
    // 0x8023A29C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_5;
    // 0x8023A29C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
    // 0x8023A2A0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8023A2A4: jal         0x8004DEE8
    // 0x8023A2A8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8004DEE8_292E8(rdram, ctx);
        goto after_6;
    // 0x8023A2A8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
    // 0x8023A2AC: lh          $v1, 0x4($s5)
    ctx->r3 = MEM_H(ctx->r21, 0X4);
    // 0x8023A2B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023A2B4: divu        $zero, $v0, $v1
    lo = S32(U32(ctx->r2) / U32(ctx->r3)); hi = S32(U32(ctx->r2) % U32(ctx->r3));
    // 0x8023A2B8: bne         $v1, $zero, L_8023A2C4
    if (ctx->r3 != 0) {
        // 0x8023A2BC: nop
    
            goto L_8023A2C4;
    }
    // 0x8023A2BC: nop

    // 0x8023A2C0: break       7
    do_break(2149819072);
L_8023A2C4:
    // 0x8023A2C4: mflo        $v0
    ctx->r2 = lo;
    // 0x8023A2C8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023A2CC: sh          $v0, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = ctx->r2;
    // 0x8023A2D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A2D4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023A2D8: slti        $v0, $v0, 0x41
    ctx->r2 = SIGNED(ctx->r2) < 0X41 ? 1 : 0;
    // 0x8023A2DC: beql        $v0, $zero, L_8023A2E4
    if (ctx->r2 == 0) {
        // 0x8023A2E0: addiu       $v1, $zero, 0x40
        ctx->r3 = ADD32(0, 0X40);
            goto L_8023A2E4;
    }
    goto skip_0;
    // 0x8023A2E0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    skip_0:
L_8023A2E4:
    // 0x8023A2E4: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x8023A2E8: sh          $v1, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = ctx->r3;
    // 0x8023A2EC: lhu         $v1, 0x16($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X16);
    // 0x8023A2F0: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x8023A2F4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023A2F8: sh          $v1, 0x4E($s4)
    MEM_H(0X4E, ctx->r20) = ctx->r3;
    // 0x8023A2FC: lh          $v0, 0x4($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X4);
    // 0x8023A300: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023A304: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023A308: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023A30C: lh          $a2, -0x2400($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X2400);
    // 0x8023A310: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023A314: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023A318: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023A31C: mflo        $a2
    ctx->r6 = lo;
    // 0x8023A320: lhu         $a1, 0x4C($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X4C);
    // 0x8023A324: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8023A328: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023A32C: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8023A330: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8023A334: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x8023A338: jal         0x8004DA90
    // 0x8023A33C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x8023A33C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_7:
    // 0x8023A340: jal         0x8023AEE0
    // 0x8023A344: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8023AEE0_ovl5(rdram, ctx);
        goto after_8;
    // 0x8023A344: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_8:
    // 0x8023A348: beq         $v0, $zero, L_8023A360
    if (ctx->r2 == 0) {
        // 0x8023A34C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023A360;
    }
    // 0x8023A34C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023A350: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8023A354: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x8023A358: j           L_8023A4C0
    // 0x8023A35C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_8023A4C0;
    // 0x8023A35C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_8023A360:
    // 0x8023A360: lhu         $v0, 0x4($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X4);
    // 0x8023A364: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023A368: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8023A36C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A370: bgez        $v0, L_8023A4C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A374: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8023A4C4;
    }
    // 0x8023A374: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8023A378: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x8023A37C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A380: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8023A384: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x8023A388: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8023A38C: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x8023A390: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x8023A394: sh          $v1, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r3;
    // 0x8023A398: j           L_8023A4C0
    // 0x8023A39C: ori         $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 | 0XC0;
        goto L_8023A4C0;
    // 0x8023A39C: ori         $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 | 0XC0;
L_8023A3A0:
    // 0x8023A3A0: lb          $v0, 0xA6($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XA6);
    // 0x8023A3A4: beq         $v0, $zero, L_8023A3B4
    if (ctx->r2 == 0) {
        // 0x8023A3A8: addiu       $a0, $zero, 0xFE
        ctx->r4 = ADD32(0, 0XFE);
            goto L_8023A3B4;
    }
    // 0x8023A3A8: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    // 0x8023A3AC: jal         0x8002A33C
    // 0x8023A3B0: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x8023A3B0: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_9:
L_8023A3B4:
    // 0x8023A3B4: lb          $v0, 0xA7($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XA7);
    // 0x8023A3B8: bgez        $v0, L_8023A4C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A3BC: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8023A4C4;
    }
    // 0x8023A3BC: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8023A3C0: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x8023A3C4: sb          $zero, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = 0;
    // 0x8023A3C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A3CC: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8023A3D0: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x8023A3D4: sh          $v1, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r3;
    // 0x8023A3D8: j           L_8023A4C0
    // 0x8023A3DC: andi        $v0, $v0, 0xFF3F
    ctx->r2 = ctx->r2 & 0XFF3F;
        goto L_8023A4C0;
    // 0x8023A3DC: andi        $v0, $v0, 0xFF3F
    ctx->r2 = ctx->r2 & 0XFF3F;
L_8023A3E0:
    // 0x8023A3E0: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x8023A3E4: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8023A3E8: beq         $v0, $zero, L_8023A3FC
    if (ctx->r2 == 0) {
        // 0x8023A3EC: addiu       $a0, $s5, 0x50
        ctx->r4 = ADD32(ctx->r21, 0X50);
            goto L_8023A3FC;
    }
    // 0x8023A3EC: addiu       $a0, $s5, 0x50
    ctx->r4 = ADD32(ctx->r21, 0X50);
    // 0x8023A3F0: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023A3F4: j           L_8023A400
    // 0x8023A3F8: addiu       $a1, $a1, 0x6464
    ctx->r5 = ADD32(ctx->r5, 0X6464);
        goto L_8023A400;
    // 0x8023A3F8: addiu       $a1, $a1, 0x6464
    ctx->r5 = ADD32(ctx->r5, 0X6464);
L_8023A3FC:
    // 0x8023A3FC: addiu       $a1, $s6, 0x14
    ctx->r5 = ADD32(ctx->r22, 0X14);
L_8023A400:
    // 0x8023A400: jal         0x8009A3B4
    // 0x8023A404: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x8023A404: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8023A408: addiu       $a0, $s4, 0x14
    ctx->r4 = ADD32(ctx->r20, 0X14);
    // 0x8023A40C: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x8023A410: addiu       $a1, $s5, 0x50
    ctx->r5 = ADD32(ctx->r21, 0X50);
    // 0x8023A414: jal         0x8004F820
    // 0x8023A418: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_11;
    // 0x8023A418: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_11:
    // 0x8023A41C: lhu         $v1, 0x56($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X56);
    // 0x8023A420: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8023A424: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A428: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023A42C: jal         0x8003E934
    // 0x8023A430: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_12;
    // 0x8023A430: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    after_12:
    // 0x8023A434: lhu         $v1, 0x16($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X16);
    // 0x8023A438: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x8023A43C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023A440: sh          $v1, 0x4E($s4)
    MEM_H(0X4E, ctx->r20) = ctx->r3;
    // 0x8023A444: lh          $v0, 0x4($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X4);
    // 0x8023A448: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023A44C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8023A450: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023A454: lh          $a2, -0x23C0($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X23C0);
    // 0x8023A458: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023A45C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023A460: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023A464: mflo        $a2
    ctx->r6 = lo;
    // 0x8023A468: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8023A46C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023A470: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023A474: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x8023A478: jal         0x8004DA90
    // 0x8023A47C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_13;
    // 0x8023A47C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_13:
    // 0x8023A480: lhu         $v0, 0x4($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X4);
    // 0x8023A484: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023A488: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8023A48C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A490: bgez        $v0, L_8023A4C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A494: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8023A4C4;
    }
    // 0x8023A494: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023A498: j           L_8023A4B0
    // 0x8023A49C: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
        goto L_8023A4B0;
    // 0x8023A49C: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
L_8023A4A0:
    // 0x8023A4A0: lb          $v0, 0xA7($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XA7);
    // 0x8023A4A4: bgez        $v0, L_8023A4C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A4A8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023A4C4;
    }
    // 0x8023A4A8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023A4AC: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
L_8023A4B0:
    // 0x8023A4B0: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x8023A4B4: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x8023A4B8: sh          $v1, 0xC($s5)
    MEM_H(0XC, ctx->r21) = ctx->r3;
    // 0x8023A4BC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_8023A4C0:
    // 0x8023A4C0: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
L_8023A4C4:
    // 0x8023A4C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023A4C8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8023A4CC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8023A4D0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023A4D4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023A4D8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023A4DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A4E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023A4E4: jr          $ra
    // 0x8023A4E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023A4E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022BC38_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BC38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BC3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BC40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BC44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BC48: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022BC4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BC50: bne         $v1, $v0, L_8022BC9C
    if (ctx->r3 != ctx->r2) {
        // 0x8022BC54: addiu       $v0, $zero, 0x3D
        ctx->r2 = ADD32(0, 0X3D);
            goto L_8022BC9C;
    }
    // 0x8022BC54: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x8022BC58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022BC5C: jal         0x800616FC
    // 0x8022BC60: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022BC60: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    after_0:
    // 0x8022BC64: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022BC68: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BC6C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022BC70: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8022BC74: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022BC78: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022BC7C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022BC80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BC84: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022BC88: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8022BC8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BC90: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8022BC94: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022BC98: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
L_8022BC9C:
    // 0x8022BC9C: bne         $v1, $v0, L_8022BCAC
    if (ctx->r3 != ctx->r2) {
        // 0x8022BCA0: nop
    
            goto L_8022BCAC;
    }
    // 0x8022BCA0: nop

    // 0x8022BCA4: jal         0x800600F8
    // 0x8022BCA8: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x8022BCA8: nop

    after_1:
L_8022BCAC:
    // 0x8022BCAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BCB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BCB4: jr          $ra
    // 0x8022BCB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BCB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238CF0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238CF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238CF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238CF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238CFC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238D00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238D04: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238D08: bne         $v0, $zero, L_80238D40
    if (ctx->r2 != 0) {
        // 0x80238D0C: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80238D40;
    }
    // 0x80238D0C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80238D10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80238D14: jal         0x80050294
    // 0x80238D18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80238D18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80238D1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238D20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238D24: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80238D28: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80238D2C: jal         0x80239590
    // 0x80238D30: sb          $v0, 0x10C($s0)
    MEM_B(0X10C, ctx->r16) = ctx->r2;
    func_80239590_ovl5(rdram, ctx);
        goto after_1;
    // 0x80238D30: sb          $v0, 0x10C($s0)
    MEM_B(0X10C, ctx->r16) = ctx->r2;
    after_1:
    // 0x80238D34: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238D38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238D3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80238D40:
    // 0x80238D40: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80238D44: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80238D48: addiu       $v0, $zero, 0x91
    ctx->r2 = ADD32(0, 0X91);
    // 0x80238D4C: beq         $v1, $v0, L_80238DAC
    if (ctx->r3 == ctx->r2) {
        // 0x80238D50: slti        $v0, $v1, 0x92
        ctx->r2 = SIGNED(ctx->r3) < 0X92 ? 1 : 0;
            goto L_80238DAC;
    }
    // 0x80238D50: slti        $v0, $v1, 0x92
    ctx->r2 = SIGNED(ctx->r3) < 0X92 ? 1 : 0;
    // 0x80238D54: beq         $v0, $zero, L_80238D74
    if (ctx->r2 == 0) {
        // 0x80238D58: addiu       $v0, $zero, 0x73
        ctx->r2 = ADD32(0, 0X73);
            goto L_80238D74;
    }
    // 0x80238D58: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x80238D5C: beq         $v1, $v0, L_80238DAC
    if (ctx->r3 == ctx->r2) {
        // 0x80238D60: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_80238DAC;
    }
    // 0x80238D60: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80238D64: beq         $v1, $v0, L_80238D90
    if (ctx->r3 == ctx->r2) {
        // 0x80238D68: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238D90;
    }
    // 0x80238D68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238D6C: j           L_80238DC0
    // 0x80238D70: nop

        goto L_80238DC0;
    // 0x80238D70: nop

L_80238D74:
    // 0x80238D74: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80238D78: beq         $v1, $v0, L_80238D9C
    if (ctx->r3 == ctx->r2) {
        // 0x80238D7C: addiu       $v0, $zero, 0x172
        ctx->r2 = ADD32(0, 0X172);
            goto L_80238D9C;
    }
    // 0x80238D7C: addiu       $v0, $zero, 0x172
    ctx->r2 = ADD32(0, 0X172);
    // 0x80238D80: beq         $v1, $v0, L_80238DB0
    if (ctx->r3 == ctx->r2) {
        // 0x80238D84: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238DB0;
    }
    // 0x80238D84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238D88: j           L_80238DC0
    // 0x80238D8C: nop

        goto L_80238DC0;
    // 0x80238D8C: nop

L_80238D90:
    // 0x80238D90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238D94: j           L_80238DB8
    // 0x80238D98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_80238DB8;
    // 0x80238D98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_80238D9C:
    // 0x80238D9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238DA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238DA4: j           L_80238DB8
    // 0x80238DA8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_80238DB8;
    // 0x80238DA8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_80238DAC:
    // 0x80238DAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238DB0:
    // 0x80238DB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238DB4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_80238DB8:
    // 0x80238DB8: jal         0x80239590
    // 0x80238DBC: nop

    func_80239590_ovl5(rdram, ctx);
        goto after_2;
    // 0x80238DBC: nop

    after_2:
L_80238DC0:
    // 0x80238DC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238DC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238DC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238DCC: jr          $ra
    // 0x80238DD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238DD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229F24_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229F24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229F28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229F2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229F34: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80229F38: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229F3C: bne         $v1, $v0, L_80229F64
    if (ctx->r3 != ctx->r2) {
        // 0x80229F40: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80229F64;
    }
    // 0x80229F40: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229F44: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x80229F48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229F4C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80229F50: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x80229F54: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x80229F58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229F5C: jal         0x800616FC
    // 0x80229F60: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80229F60: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    after_0:
L_80229F64:
    // 0x80229F64: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80229F68: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80229F6C: bne         $v0, $zero, L_80229F90
    if (ctx->r2 != 0) {
        // 0x80229F70: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80229F90;
    }
    // 0x80229F70: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229F74: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229F78: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229F7C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229F80: bne         $v0, $zero, L_80229F90
    if (ctx->r2 != 0) {
        // 0x80229F84: nop
    
            goto L_80229F90;
    }
    // 0x80229F84: nop

    // 0x80229F88: jal         0x800600F8
    // 0x80229F8C: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x80229F8C: nop

    after_1:
L_80229F90:
    // 0x80229F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229F94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229F98: jr          $ra
    // 0x80229F9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229F9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A204_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A204: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A208: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A20C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A214: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022A218: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022A21C: bne         $v1, $v0, L_8022A244
    if (ctx->r3 != ctx->r2) {
        // 0x8022A220: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022A244;
    }
    // 0x8022A220: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022A224: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x8022A228: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A22C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022A230: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x8022A234: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    // 0x8022A238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A23C: jal         0x800616FC
    // 0x8022A240: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022A240: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    after_0:
L_8022A244:
    // 0x8022A244: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022A248: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8022A24C: bne         $v0, $zero, L_8022A280
    if (ctx->r2 != 0) {
        // 0x8022A250: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022A280;
    }
    // 0x8022A250: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A254: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A258: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A25C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A260: bne         $v0, $zero, L_8022A280
    if (ctx->r2 != 0) {
        // 0x8022A264: nop
    
            goto L_8022A280;
    }
    // 0x8022A264: nop

    // 0x8022A268: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022A26C: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8022A270: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022A274: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022A278: jal         0x800600F8
    // 0x8022A27C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x8022A27C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_1:
L_8022A280:
    // 0x8022A280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A284: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A288: jr          $ra
    // 0x8022A28C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A28C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A7EC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A7EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A7F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A7F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A7F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A7FC: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A804: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8023A808: beq         $v1, $v0, L_8023A868
    if (ctx->r3 == ctx->r2) {
        // 0x8023A80C: addiu       $a1, $s0, 0x440
        ctx->r5 = ADD32(ctx->r16, 0X440);
            goto L_8023A868;
    }
    // 0x8023A80C: addiu       $a1, $s0, 0x440
    ctx->r5 = ADD32(ctx->r16, 0X440);
    // 0x8023A810: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023A814: beql        $v0, $zero, L_8023A82C
    if (ctx->r2 == 0) {
        // 0x8023A818: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023A82C;
    }
    goto skip_0;
    // 0x8023A818: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023A81C: beq         $v1, $zero, L_8023A83C
    if (ctx->r3 == 0) {
        // 0x8023A820: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023A83C;
    }
    // 0x8023A820: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023A824: j           L_8023A960
    // 0x8023A828: nop

        goto L_8023A960;
    // 0x8023A828: nop

L_8023A82C:
    // 0x8023A82C: beq         $v1, $v0, L_8023A8C4
    if (ctx->r3 == ctx->r2) {
        // 0x8023A830: nop
    
            goto L_8023A8C4;
    }
    // 0x8023A830: nop

    // 0x8023A834: j           L_8023A960
    // 0x8023A838: nop

        goto L_8023A960;
    // 0x8023A838: nop

L_8023A83C:
    // 0x8023A83C: lhu         $v1, 0x440($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X440);
    // 0x8023A840: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023A844: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023A848: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023A84C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023A850: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8023A854: sh          $v0, 0x444($s0)
    MEM_H(0X444, ctx->r16) = ctx->r2;
    // 0x8023A858: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023A85C: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8023A860: j           L_8023A960
    // 0x8023A864: sh          $v1, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r3;
        goto L_8023A960;
    // 0x8023A864: sh          $v1, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r3;
L_8023A868:
    // 0x8023A868: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8023A86C: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x8023A870: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x8023A874: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A878: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8023A87C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023A880: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023A884: lhu         $v0, 0x48($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X48);
    // 0x8023A888: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x8023A88C: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8023A890: lhu         $v1, 0x444($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X444);
    // 0x8023A894: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A898: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8023A89C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8023A8A0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8023A8A4: sh          $v1, 0x444($s0)
    MEM_H(0X444, ctx->r16) = ctx->r3;
    // 0x8023A8A8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023A8AC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x8023A8B0: bgez        $v1, L_8023A8C4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023A8B4: sh          $a0, 0x4E($s0)
        MEM_H(0X4E, ctx->r16) = ctx->r4;
            goto L_8023A8C4;
    }
    // 0x8023A8B4: sh          $a0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r4;
    // 0x8023A8B8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A8BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A8C0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023A8C4:
    // 0x8023A8C4: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023A8C8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023A8CC: beq         $v1, $v0, L_8023A8E4
    if (ctx->r3 == ctx->r2) {
        // 0x8023A8D0: nop
    
            goto L_8023A8E4;
    }
    // 0x8023A8D0: nop

    // 0x8023A8D4: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023A8D8: bgez        $v0, L_8023A8E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A8DC: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8023A8E4;
    }
    // 0x8023A8DC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023A8E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023A8E4:
    // 0x8023A8E4: lw          $v0, 0x78($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X78);
    // 0x8023A8E8: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8023A8EC: beq         $v0, $zero, L_8023A94C
    if (ctx->r2 == 0) {
        // 0x8023A8F0: nop
    
            goto L_8023A94C;
    }
    // 0x8023A8F0: nop

    // 0x8023A8F4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8023A8F8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023A8FC: jal         0x8004F144
    // 0x8023A900: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023A900: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    after_0:
    // 0x8023A904: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023A908: beq         $v1, $zero, L_8023A960
    if (ctx->r3 == 0) {
        // 0x8023A90C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8023A960;
    }
    // 0x8023A90C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8023A910: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023A914: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023A918: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023A91C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023A920: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023A924: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023A928: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8023A92C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8023A930: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A934: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8023A938: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A93C: jal         0x8009A3B4
    // 0x8023A940: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023A940: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    after_1:
    // 0x8023A944: j           L_8023A960
    // 0x8023A948: nop

        goto L_8023A960;
    // 0x8023A948: nop

L_8023A94C:
    // 0x8023A94C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8023A950: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8023A954: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8023A958: jal         0x8004DA90
    // 0x8023A95C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8023A95C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8023A960:
    // 0x8023A960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A964: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A968: jr          $ra
    // 0x8023A96C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A96C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233BF4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233BF4: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80233BF8: lbu         $v1, 0x9($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X9);
    // 0x80233BFC: addiu       $a1, $a2, 0x328
    ctx->r5 = ADD32(ctx->r6, 0X328);
    // 0x80233C00: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80233C04: beq         $v0, $zero, L_80233E7C
    if (ctx->r2 == 0) {
        // 0x80233C08: sh          $zero, 0x330($a2)
        MEM_H(0X330, ctx->r6) = 0;
            goto L_80233E7C;
    }
    // 0x80233C08: sh          $zero, 0x330($a2)
    MEM_H(0X330, ctx->r6) = 0;
    // 0x80233C0C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80233C10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233C14: addu        $at, $at, $v0
    gpr jr_addend_80233C1C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233C18: lw          $v0, 0x7278($at)
    ctx->r2 = ADD32(ctx->r1, 0X7278);
    // 0x80233C1C: jr          $v0
    // 0x80233C20: nop

    switch (jr_addend_80233C1C >> 2) {
        case 0: goto L_80233C40; break;
        case 1: goto L_80233C40; break;
        case 2: goto L_80233E04; break;
        case 3: goto L_80233C24; break;
        case 4: goto L_80233C40; break;
        case 5: goto L_80233C40; break;
        case 6: goto L_80233C40; break;
        default: switch_error(__func__, 0x80233C1C, 0x80247278);
    }
    // 0x80233C20: nop

L_80233C24:
    // 0x80233C24: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x80233C28: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x80233C2C: beq         $v0, $zero, L_80233C44
    if (ctx->r2 == 0) {
        // 0x80233C30: andi        $v0, $v1, 0xFBFF
        ctx->r2 = ctx->r3 & 0XFBFF;
            goto L_80233C44;
    }
    // 0x80233C30: andi        $v0, $v1, 0xFBFF
    ctx->r2 = ctx->r3 & 0XFBFF;
    // 0x80233C34: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80233C38: j           L_80233C58
    // 0x80233C3C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80233C58;
    // 0x80233C3C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80233C40:
    // 0x80233C40: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
L_80233C44:
    // 0x80233C44: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    // 0x80233C48: beq         $v0, $zero, L_80233C64
    if (ctx->r2 == 0) {
        // 0x80233C4C: andi        $v0, $v1, 0xFDFF
        ctx->r2 = ctx->r3 & 0XFDFF;
            goto L_80233C64;
    }
    // 0x80233C4C: andi        $v0, $v1, 0xFDFF
    ctx->r2 = ctx->r3 & 0XFDFF;
    // 0x80233C50: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80233C54: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80233C58:
    // 0x80233C58: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
    // 0x80233C5C: j           L_80233E7C
    // 0x80233C60: sh          $zero, 0xA($a2)
    MEM_H(0XA, ctx->r6) = 0;
        goto L_80233E7C;
    // 0x80233C60: sh          $zero, 0xA($a2)
    MEM_H(0XA, ctx->r6) = 0;
L_80233C64:
    // 0x80233C64: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x80233C68: beq         $v0, $zero, L_80233CC0
    if (ctx->r2 == 0) {
        // 0x80233C6C: andi        $v0, $v1, 0xEFFF
        ctx->r2 = ctx->r3 & 0XEFFF;
            goto L_80233CC0;
    }
    // 0x80233C6C: andi        $v0, $v1, 0xEFFF
    ctx->r2 = ctx->r3 & 0XEFFF;
    // 0x80233C70: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
    // 0x80233C74: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80233C78: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80233C7C: sb          $v0, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = ctx->r2;
    // 0x80233C80: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233C84: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
    // 0x80233C88: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x80233C8C: lhu         $a0, 0x6($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6);
    // 0x80233C90: lui         $v0, 0x2492
    ctx->r2 = S32(0X2492 << 16);
    // 0x80233C94: ori         $v0, $v0, 0x4926
    ctx->r2 = ctx->r2 | 0X4926;
    // 0x80233C98: srl         $v1, $a0, 4
    ctx->r3 = S32(U32(ctx->r4) >> 4);
    // 0x80233C9C: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233CA0: mfhi        $v1
    ctx->r3 = hi;
    // 0x80233CA4: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80233CA8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80233CAC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80233CB0: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80233CB4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80233CB8: j           L_80233E7C
    // 0x80233CBC: sh          $a0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r4;
        goto L_80233E7C;
    // 0x80233CBC: sh          $a0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r4;
L_80233CC0:
    // 0x80233CC0: lbu         $v0, 0x3($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X3);
    // 0x80233CC4: bne         $v0, $zero, L_80233DB0
    if (ctx->r2 != 0) {
        // 0x80233CC8: andi        $v0, $v1, 0x800
        ctx->r2 = ctx->r3 & 0X800;
            goto L_80233DB0;
    }
    // 0x80233CC8: andi        $v0, $v1, 0x800
    ctx->r2 = ctx->r3 & 0X800;
    // 0x80233CCC: beq         $v0, $zero, L_80233CEC
    if (ctx->r2 == 0) {
        // 0x80233CD0: andi        $v0, $v1, 0xF6FF
        ctx->r2 = ctx->r3 & 0XF6FF;
            goto L_80233CEC;
    }
    // 0x80233CD0: andi        $v0, $v1, 0xF6FF
    ctx->r2 = ctx->r3 & 0XF6FF;
    // 0x80233CD4: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80233CD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233CDC: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
    // 0x80233CE0: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80233CE4: j           L_80233E78
    // 0x80233CE8: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
        goto L_80233E78;
    // 0x80233CE8: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
L_80233CEC:
    // 0x80233CEC: lbu         $v0, 0x7($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X7);
    // 0x80233CF0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80233CF4: sb          $v0, 0xA($a2)
    MEM_B(0XA, ctx->r6) = ctx->r2;
    // 0x80233CF8: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x80233CFC: beq         $v0, $zero, L_80233D4C
    if (ctx->r2 == 0) {
        // 0x80233D00: nop
    
            goto L_80233D4C;
    }
    // 0x80233D00: nop

    // 0x80233D04: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x80233D08: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x80233D0C: beq         $v0, $zero, L_80233D4C
    if (ctx->r2 == 0) {
        // 0x80233D10: andi        $v0, $v1, 0xFEFF
        ctx->r2 = ctx->r3 & 0XFEFF;
            goto L_80233D4C;
    }
    // 0x80233D10: andi        $v0, $v1, 0xFEFF
    ctx->r2 = ctx->r3 & 0XFEFF;
    // 0x80233D14: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80233D18: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80233D1C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80233D20: sb          $v1, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r3;
    // 0x80233D24: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x80233D28: lbu         $a0, 0xA($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0XA);
    // 0x80233D2C: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
    // 0x80233D30: bnel        $v0, $zero, L_80233E7C
    if (ctx->r2 != 0) {
        // 0x80233D34: sb          $v1, 0x3D($a1)
        MEM_B(0X3D, ctx->r5) = ctx->r3;
            goto L_80233E7C;
    }
    goto skip_0;
    // 0x80233D34: sb          $v1, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = ctx->r3;
    skip_0:
    // 0x80233D38: andi        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 & 0X4;
    // 0x80233D3C: bne         $v0, $zero, L_80233E70
    if (ctx->r2 != 0) {
        // 0x80233D40: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80233E70;
    }
    // 0x80233D40: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80233D44: j           L_80233E7C
    // 0x80233D48: sb          $zero, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = 0;
        goto L_80233E7C;
    // 0x80233D48: sb          $zero, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = 0;
L_80233D4C:
    // 0x80233D4C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80233D50: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
    // 0x80233D54: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80233D58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233D5C: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
    // 0x80233D60: lhu         $a0, 0x6($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6);
    // 0x80233D64: lui         $v1, 0x410
    ctx->r3 = S32(0X410 << 16);
    // 0x80233D68: ori         $v1, $v1, 0x4105
    ctx->r3 = ctx->r3 | 0X4105;
    // 0x80233D6C: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233D70: mfhi        $v1
    ctx->r3 = hi;
    // 0x80233D74: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80233D78: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80233D7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233D80: srl         $v1, $v1, 5
    ctx->r3 = S32(U32(ctx->r3) >> 5);
    // 0x80233D84: sll         $v0, $v1, 6
    ctx->r2 = S32(ctx->r3 << 6);
    // 0x80233D88: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80233D8C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80233D90: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80233D94: sh          $a0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r4;
    // 0x80233D98: lbu         $v0, 0xA($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XA);
    // 0x80233D9C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233DA0: beq         $v0, $zero, L_80233E6C
    if (ctx->r2 == 0) {
        // 0x80233DA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233E6C;
    }
    // 0x80233DA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233DA8: j           L_80233E7C
    // 0x80233DAC: sb          $v0, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = ctx->r2;
        goto L_80233E7C;
    // 0x80233DAC: sb          $v0, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = ctx->r2;
L_80233DB0:
    // 0x80233DB0: lbu         $v0, 0x9($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X9);
    // 0x80233DB4: bne         $v0, $zero, L_80233DE0
    if (ctx->r2 != 0) {
        // 0x80233DB8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233DE0;
    }
    // 0x80233DB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233DBC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80233DC0: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
    // 0x80233DC4: sh          $zero, 0xA($a2)
    MEM_H(0XA, ctx->r6) = 0;
    // 0x80233DC8: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80233DCC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80233DD0: sb          $v1, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = ctx->r3;
    // 0x80233DD4: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
    // 0x80233DD8: j           L_80233E7C
    // 0x80233DDC: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
        goto L_80233E7C;
    // 0x80233DDC: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_80233DE0:
    // 0x80233DE0: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
    // 0x80233DE4: sh          $zero, 0xA($a2)
    MEM_H(0XA, ctx->r6) = 0;
    // 0x80233DE8: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x80233DEC: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x80233DF0: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x80233DF4: sb          $zero, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = 0;
    // 0x80233DF8: andi        $v1, $v1, 0xFEFF
    ctx->r3 = ctx->r3 & 0XFEFF;
    // 0x80233DFC: j           L_80233E7C
    // 0x80233E00: sh          $v1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r3;
        goto L_80233E7C;
    // 0x80233E00: sh          $v1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r3;
L_80233E04:
    // 0x80233E04: lbu         $a0, 0x7($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X7);
    // 0x80233E08: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x80233E0C: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80233E10: multu       $a0, $v0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233E14: mfhi        $a3
    ctx->r7 = hi;
    // 0x80233E18: srl         $v1, $a3, 2
    ctx->r3 = S32(U32(ctx->r7) >> 2);
    // 0x80233E1C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80233E20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233E24: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233E28: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80233E2C: sb          $a0, 0xA($a2)
    MEM_B(0XA, ctx->r6) = ctx->r4;
    // 0x80233E30: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80233E34: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80233E38: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x80233E3C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80233E40: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80233E44: sb          $v1, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r3;
    // 0x80233E48: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x80233E4C: lbu         $a0, 0xA($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0XA);
    // 0x80233E50: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
    // 0x80233E54: beq         $v0, $zero, L_80233E64
    if (ctx->r2 == 0) {
        // 0x80233E58: andi        $v0, $a0, 0x4
        ctx->r2 = ctx->r4 & 0X4;
            goto L_80233E64;
    }
    // 0x80233E58: andi        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 & 0X4;
    // 0x80233E5C: j           L_80233E7C
    // 0x80233E60: sb          $v1, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = ctx->r3;
        goto L_80233E7C;
    // 0x80233E60: sb          $v1, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = ctx->r3;
L_80233E64:
    // 0x80233E64: beql        $v0, $zero, L_80233E7C
    if (ctx->r2 == 0) {
        // 0x80233E68: sb          $zero, 0x3D($a1)
        MEM_B(0X3D, ctx->r5) = 0;
            goto L_80233E7C;
    }
    goto skip_1;
    // 0x80233E68: sb          $zero, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = 0;
    skip_1:
L_80233E6C:
    // 0x80233E6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80233E70:
    // 0x80233E70: j           L_80233E7C
    // 0x80233E74: sb          $v0, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = ctx->r2;
        goto L_80233E7C;
    // 0x80233E74: sb          $v0, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = ctx->r2;
L_80233E78:
    // 0x80233E78: sb          $zero, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = 0;
L_80233E7C:
    // 0x80233E7C: jr          $ra
    // 0x80233E80: nop

    TRACE_RETURN()
    return;
    // 0x80233E80: nop

;}
RECOMP_FUNC void func_8022F3E8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F3E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F3EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F3F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F3F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F3F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F3FC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022F400: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022F404: jal         0x8004FA7C
    // 0x8022F408: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022F408: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022F40C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022F410: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022F414: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022F418: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022F41C: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x8022F420: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022F424: beq         $v1, $zero, L_8022F458
    if (ctx->r3 == 0) {
        // 0x8022F428: nop
    
            goto L_8022F458;
    }
    // 0x8022F428: nop

    // 0x8022F42C: jal         0x8022F578
    // 0x8022F430: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022F578_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022F430: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x8022F434: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022F438: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022F43C: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F440: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F444: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022F448: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022F44C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022F450: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022F454: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022F458:
    // 0x8022F458: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F45C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022F460: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F464: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022F468: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F46C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F470: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F474: jr          $ra
    // 0x8022F478: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F478: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80240DEC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240DEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80240DF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80240DF4: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80240DF8: lw          $s1, -0x3A2C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3A2C);
    // 0x80240DFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80240E00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80240E04: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80240E08: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80240E0C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80240E10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80240E14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80240E18: jal         0x8009A3B4
    // 0x80240E1C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80240E1C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_0:
    // 0x80240E20: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80240E24: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80240E28: jal         0x8009A3B4
    // 0x80240E2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80240E2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80240E30: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80240E34: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80240E38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80240E3C: jal         0x8009A3B4
    // 0x80240E40: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80240E40: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    after_2:
    // 0x80240E44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80240E48: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80240E4C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80240E50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80240E54: jr          $ra
    // 0x80240E58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80240E58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235338_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235338: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x8023533C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235340: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x80235344: beq         $v1, $v0, L_8023537C
    if (ctx->r3 == ctx->r2) {
        // 0x80235348: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023537C;
    }
    // 0x80235348: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023534C: beql        $v0, $zero, L_80235364
    if (ctx->r2 == 0) {
        // 0x80235350: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235364;
    }
    goto skip_0;
    // 0x80235350: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80235354: beq         $v1, $zero, L_80235374
    if (ctx->r3 == 0) {
        // 0x80235358: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_80235374;
    }
    // 0x80235358: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8023535C: j           L_802353BC
    // 0x80235360: nop

        goto L_802353BC;
    // 0x80235360: nop

L_80235364:
    // 0x80235364: beq         $v1, $v0, L_802353A8
    if (ctx->r3 == ctx->r2) {
        // 0x80235368: nop
    
            goto L_802353A8;
    }
    // 0x80235368: nop

    // 0x8023536C: j           L_802353BC
    // 0x80235370: nop

        goto L_802353BC;
    // 0x80235370: nop

L_80235374:
    // 0x80235374: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80235378: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_8023537C:
    // 0x8023537C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80235380: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80235384: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x80235388: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023538C: beq         $v0, $zero, L_802353BC
    if (ctx->r2 == 0) {
        // 0x80235390: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_802353BC;
    }
    // 0x80235390: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80235394: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80235398: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8023539C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802353A0: j           L_802353BC
    // 0x802353A4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_802353BC;
    // 0x802353A4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802353A8:
    // 0x802353A8: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x802353AC: bgez        $v0, L_802353BC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802353B0: addiu       $v0, $a1, -0x1
        ctx->r2 = ADD32(ctx->r5, -0X1);
            goto L_802353BC;
    }
    // 0x802353B0: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x802353B4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802353B8: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_802353BC:
    // 0x802353BC: jr          $ra
    // 0x802353C0: nop

    TRACE_RETURN()
    return;
    // 0x802353C0: nop

;}
RECOMP_FUNC void func_80237FB4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237FB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237FB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237FBC: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80237FC0: lw          $s0, -0x3A2C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3A2C);
    // 0x80237FC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237FC8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237FCC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80237FD0: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x80237FD4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80237FD8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80237FDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237FE0: jal         0x8009A3B4
    // 0x80237FE4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80237FE4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80237FE8: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80237FEC: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80237FF0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x80237FF4: lui         $v1, 0x260
    ctx->r3 = S32(0X260 << 16);
    // 0x80237FF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237FFC: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80238000: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80238004: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80238008: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023800C: jal         0x8004DD04
    // 0x80238010: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80238010: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_1:
    // 0x80238014: jal         0x8005044C
    // 0x80238018: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x80238018: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8023801C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80238020: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80238024: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238028: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023802C: jr          $ra
    // 0x80238030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229C68_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229C6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229C70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229C74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229C78: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80229C7C: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80229C80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229C84: bne         $v1, $v0, L_80229CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80229C88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229CA0;
    }
    // 0x80229C88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229C8C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80229C90: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x80229C94: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x80229C98: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x80229C9C: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_80229CA0:
    // 0x80229CA0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80229CA4: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x80229CA8: bne         $v1, $v0, L_80229CE0
    if (ctx->r3 != ctx->r2) {
        // 0x80229CAC: nop
    
            goto L_80229CE0;
    }
    // 0x80229CAC: nop

    // 0x80229CB0: jal         0x800600F8
    // 0x80229CB4: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_0;
    // 0x80229CB4: nop

    after_0:
    // 0x80229CB8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80229CBC: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x80229CC0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80229CC4: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x80229CC8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80229CCC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80229CD0: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80229CD4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80229CD8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80229CDC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80229CE0:
    // 0x80229CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229CE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229CE8: jr          $ra
    // 0x80229CEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229CEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C33C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C33C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023C340: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C344: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023C348: jal         0x8023C418
    // 0x8023C34C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8023C418_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023C34C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8023C350: jal         0x8023C488
    // 0x8023C354: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023C488_ovl5(rdram, ctx);
        goto after_1;
    // 0x8023C354: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023C358: jal         0x8023CCFC
    // 0x8023C35C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023CCFC_ovl5(rdram, ctx);
        goto after_2;
    // 0x8023C35C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023C360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023C364: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C368: jr          $ra
    // 0x8023C36C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023C36C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236764_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236768: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023676C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236770: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236774: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80236778: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023677C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80236780: jal         0x8004D5D4
    // 0x80236784: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80236784: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80236788: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8023678C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80236790: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80236794: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80236798: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8023679C: lhu         $a2, 0x54($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X54);
    // 0x802367A0: lhu         $a3, 0x56($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X56);
    // 0x802367A4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802367A8: lhu         $t0, 0x58($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X58);
    // 0x802367AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802367B0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802367B4: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x802367B8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802367BC: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802367C0: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x802367C4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802367C8: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x802367CC: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x802367D0: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x802367D4: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x802367D8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802367DC: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802367E0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802367E4: addiu       $v0, $v0, 0x5F98
    ctx->r2 = ADD32(ctx->r2, 0X5F98);
    // 0x802367E8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x802367EC: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
    // 0x802367F0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802367F4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802367F8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802367FC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80236800: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80236804: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80236808: sh          $a1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r5;
    // 0x8023680C: sh          $a2, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r6;
    // 0x80236810: sh          $a3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r7;
    // 0x80236814: sh          $t0, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r8;
    // 0x80236818: sh          $v1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r3;
    // 0x8023681C: sh          $a0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r4;
    // 0x80236820: sw          $t1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r9;
    // 0x80236824: sw          $t2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r10;
    // 0x80236828: sw          $t3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r11;
    // 0x8023682C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80236830: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x80236834: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023683C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80236840: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80236844: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80236848: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8023684C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80236850: jal         0x80050294
    // 0x80236854: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80236854: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_1:
    // 0x80236858: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023685C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80236860: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236864: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023686C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236870: jr          $ra
    // 0x80236874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802387DC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802387DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802387E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802387E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802387E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802387EC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802387F0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802387F4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802387F8: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x802387FC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80238800: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80238804: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80238808: jal         0x800A3450
    // 0x8023880C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8023880C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80238810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238814: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238818: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8023881C: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80238820: jal         0x8004D5D4
    // 0x80238824: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80238824: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    after_1:
    // 0x80238828: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023882C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80238830: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80238834: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80238838: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023883C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80238840: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80238844: jal         0x8003E934
    // 0x80238848: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80238848: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_2:
    // 0x8023884C: addiu       $a0, $s0, 0x364
    ctx->r4 = ADD32(ctx->r16, 0X364);
    // 0x80238850: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80238854: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80238858: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x8023885C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80238860: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238864: jal         0x8009A3B4
    // 0x80238868: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80238868: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023886C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80238870: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80238874: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80238878: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8023887C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80238880: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80238884: jal         0x800A3450
    // 0x80238888: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80238888: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    after_4:
    // 0x8023888C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238890: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238894: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238898: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8023889C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802388A0: jal         0x80050294
    // 0x802388A4: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x802388A4: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    after_5:
    // 0x802388A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802388AC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802388B0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802388B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802388B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802388BC: jr          $ra
    // 0x802388C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802388C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228374_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228378: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022837C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228384: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80228388: bne         $v0, $zero, L_802283A4
    if (ctx->r2 != 0) {
        // 0x8022838C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802283A4;
    }
    // 0x8022838C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228390: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80228394: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x80228398: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x8022839C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802283A0: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_802283A4:
    // 0x802283A4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802283A8: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
    // 0x802283AC: bne         $v1, $v0, L_802283C4
    if (ctx->r3 != ctx->r2) {
        // 0x802283B0: addiu       $v0, $zero, 0x59
        ctx->r2 = ADD32(0, 0X59);
            goto L_802283C4;
    }
    // 0x802283B0: addiu       $v0, $zero, 0x59
    ctx->r2 = ADD32(0, 0X59);
    // 0x802283B4: jal         0x80036E48
    // 0x802283B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x802283B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x802283BC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802283C0: addiu       $v0, $zero, 0x59
    ctx->r2 = ADD32(0, 0X59);
L_802283C4:
    // 0x802283C4: bne         $v1, $v0, L_802283D4
    if (ctx->r3 != ctx->r2) {
        // 0x802283C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802283D4;
    }
    // 0x802283C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802283CC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802283D0: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_802283D4:
    // 0x802283D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802283D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802283DC: jr          $ra
    // 0x802283E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802283E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802283E4: nop

    // 0x802283E8: nop

    // 0x802283EC: nop

;}
RECOMP_FUNC void func_80229E08_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229E08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229E0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229E10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229E18: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80229E1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229E20: bne         $v1, $v0, L_80229E44
    if (ctx->r3 != ctx->r2) {
        // 0x80229E24: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80229E44;
    }
    // 0x80229E24: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229E28: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80229E2C: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x80229E30: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80229E34: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229E38: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80229E3C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80229E40: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80229E44:
    // 0x80229E44: bne         $v1, $v0, L_80229E6C
    if (ctx->r3 != ctx->r2) {
        // 0x80229E48: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80229E6C;
    }
    // 0x80229E48: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229E4C: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x80229E50: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229E54: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80229E58: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x80229E5C: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    // 0x80229E60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229E64: jal         0x800616FC
    // 0x80229E68: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80229E68: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    after_0:
L_80229E6C:
    // 0x80229E6C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80229E70: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80229E74: bne         $v0, $zero, L_80229E98
    if (ctx->r2 != 0) {
        // 0x80229E78: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80229E98;
    }
    // 0x80229E78: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229E7C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229E80: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229E84: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229E88: bne         $v0, $zero, L_80229E98
    if (ctx->r2 != 0) {
        // 0x80229E8C: nop
    
            goto L_80229E98;
    }
    // 0x80229E8C: nop

    // 0x80229E90: jal         0x800600F8
    // 0x80229E94: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x80229E94: nop

    after_1:
L_80229E98:
    // 0x80229E98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229E9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229EA0: jr          $ra
    // 0x80229EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023D6C0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D6C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023D6C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023D6C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023D6CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D6D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023D6D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D6D8: lw          $v0, 0x67E4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X67E4);
    // 0x8023D6DC: jalr        $v0
    // 0x8023D6E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023D6E0: nop

    after_0:
    // 0x8023D6E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023D6E8: jr          $ra
    // 0x8023D6EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023D6EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232BC4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232BC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232BC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232BCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232BD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232BD4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80232BD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232BDC: beq         $v1, $v0, L_80232C18
    if (ctx->r3 == ctx->r2) {
        // 0x80232BE0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80232C18;
    }
    // 0x80232BE0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80232BE4: beq         $v0, $zero, L_80232C7C
    if (ctx->r2 == 0) {
        // 0x80232BE8: nop
    
            goto L_80232C7C;
    }
    // 0x80232BE8: nop

    // 0x80232BEC: bne         $v1, $zero, L_80232C7C
    if (ctx->r3 != 0) {
        // 0x80232BF0: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_80232C7C;
    }
    // 0x80232BF0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80232BF4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80232BF8: beq         $v1, $zero, L_80232C08
    if (ctx->r3 == 0) {
        // 0x80232BFC: sh          $v0, 0x330($s0)
        MEM_H(0X330, ctx->r16) = ctx->r2;
            goto L_80232C08;
    }
    // 0x80232BFC: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
    // 0x80232C00: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80232C04: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80232C08:
    // 0x80232C08: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232C0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232C10: j           L_80232C7C
    // 0x80232C14: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80232C7C;
    // 0x80232C14: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232C18:
    // 0x80232C18: lhu         $v0, 0x330($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X330);
    // 0x80232C1C: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x80232C20: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x80232C24: bne         $v0, $zero, L_80232C44
    if (ctx->r2 != 0) {
        // 0x80232C28: sh          $a0, 0x330($s0)
        MEM_H(0X330, ctx->r16) = ctx->r4;
            goto L_80232C44;
    }
    // 0x80232C28: sh          $a0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r4;
    // 0x80232C2C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80232C30: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    // 0x80232C34: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80232C38: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, 0X180);
    // 0x80232C3C: jal         0x80233B98
    // 0x80232C40: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    func_80233B98_ovl5(rdram, ctx);
        goto after_0;
    // 0x80232C40: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    after_0:
L_80232C44:
    // 0x80232C44: lh          $v0, 0x330($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X330);
    // 0x80232C48: bne         $v0, $zero, L_80232C7C
    if (ctx->r2 != 0) {
        // 0x80232C4C: nop
    
            goto L_80232C7C;
    }
    // 0x80232C4C: nop

    // 0x80232C50: jal         0x80047B3C
    // 0x80232C54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_1;
    // 0x80232C54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232C58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232C5C: jal         0x8007A1B8
    // 0x80232C60: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x80232C60: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_2:
    // 0x80232C64: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80232C68: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80232C6C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80232C70: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80232C74: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80232C78: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80232C7C:
    // 0x80232C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232C80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232C84: jr          $ra
    // 0x80232C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023FEA4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023FEA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023FEA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023FEAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023FEB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023FEB4: jal         0x8006033C
    // 0x8023FEB8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023FEB8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x8023FEBC: beq         $v0, $zero, L_8023FED0
    if (ctx->r2 == 0) {
        // 0x8023FEC0: nop
    
            goto L_8023FED0;
    }
    // 0x8023FEC0: nop

    // 0x8023FEC4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023FEC8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023FECC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8023FED0:
    // 0x8023FED0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023FED4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023FED8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023FEDC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023FEE0: lw          $v0, 0x6CAC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6CAC);
    // 0x8023FEE4: jalr        $v0
    // 0x8023FEE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023FEE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023FEEC: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8023FEF0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023FEF4: jal         0x8009A3B4
    // 0x8023FEF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023FEF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023FEFC: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x8023FF00: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023FF04: beq         $v0, $zero, L_8023FF20
    if (ctx->r2 == 0) {
        // 0x8023FF08: nop
    
            goto L_8023FF20;
    }
    // 0x8023FF08: nop

    // 0x8023FF0C: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x8023FF10: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023FF14: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8023FF18: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8023FF1C: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
L_8023FF20:
    // 0x8023FF20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023FF24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023FF28: jr          $ra
    // 0x8023FF2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023FF2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D3E8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D3E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D3EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D3F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D3F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D3F8: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022D3FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D400: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022D404: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D408: bne         $v0, $zero, L_8022D43C
    if (ctx->r2 != 0) {
        // 0x8022D40C: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022D43C;
    }
    // 0x8022D40C: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022D410: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D414: bne         $v1, $v0, L_8022D420
    if (ctx->r3 != ctx->r2) {
        // 0x8022D418: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D420;
    }
    // 0x8022D418: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D41C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
L_8022D420:
    // 0x8022D420: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022D424: jal         0x8022F4E0
    // 0x8022D428: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022F4E0_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022D428: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022D42C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D430: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D434: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D438: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022D43C:
    // 0x8022D43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D440: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D444: jr          $ra
    // 0x8022D448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D030_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D030: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D034: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D038: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D03C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D040: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D044: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D048: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D04C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022D050: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D054: beq         $v1, $zero, L_8022D064
    if (ctx->r3 == 0) {
        // 0x8022D058: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_8022D064;
    }
    // 0x8022D058: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022D05C: j           L_8022D06C
    // 0x8022D060: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_8022D06C;
    // 0x8022D060: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_8022D064:
    // 0x8022D064: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D068: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022D06C:
    // 0x8022D06C: jal         0x8004D5D4
    // 0x8022D070: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022D070: nop

    after_0:
    // 0x8022D074: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D078: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022D07C: bne         $a0, $v0, L_8022D08C
    if (ctx->r4 != ctx->r2) {
        // 0x8022D080: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_8022D08C;
    }
    // 0x8022D080: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x8022D084: j           L_8022D100
    // 0x8022D088: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_8022D100;
    // 0x8022D088: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_8022D08C:
    // 0x8022D08C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022D090: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x8022D094: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022D098: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022D09C: bne         $v1, $zero, L_8022D100
    if (ctx->r3 != 0) {
        // 0x8022D0A0: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_8022D100;
    }
    // 0x8022D0A0: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022D0A4: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x8022D0A8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022D0AC: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x8022D0B0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022D0B4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022D0B8: bne         $v1, $zero, L_8022D100
    if (ctx->r3 != 0) {
        // 0x8022D0BC: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_8022D100;
    }
    // 0x8022D0BC: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022D0C0: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x8022D0C4: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022D0C8: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x8022D0CC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022D0D0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022D0D4: bne         $v1, $zero, L_8022D100
    if (ctx->r3 != 0) {
        // 0x8022D0D8: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_8022D100;
    }
    // 0x8022D0D8: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022D0DC: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x8022D0E0: bnel        $a0, $v0, L_8022D100
    if (ctx->r4 != ctx->r2) {
        // 0x8022D0E4: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_8022D100;
    }
    goto skip_0;
    // 0x8022D0E4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x8022D0E8: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x8022D0EC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022D0F0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022D0F4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022D0F8: j           L_8022D108
    // 0x8022D0FC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_8022D108;
    // 0x8022D0FC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_8022D100:
    // 0x8022D100: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022D104: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_8022D108:
    // 0x8022D108: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022D10C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022D110: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022D114: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D118: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022D11C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022D120: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022D124: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022D128: bne         $v0, $zero, L_8022D134
    if (ctx->r2 != 0) {
        // 0x8022D12C: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_8022D134;
    }
    // 0x8022D12C: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x8022D130: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_8022D134:
    // 0x8022D134: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x8022D138: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x8022D13C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D140: jal         0x8009A3B4
    // 0x8022D144: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D144: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022D148: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D14C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D150: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D154: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x8022D158: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022D15C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D160: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022D164: addiu       $v0, $v0, 0x59B0
    ctx->r2 = ADD32(ctx->r2, 0X59B0);
    // 0x8022D168: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022D16C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D170: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022D174: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022D178: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022D17C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022D180: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022D184: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022D188: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022D18C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022D190: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D194: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022D198: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022D19C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022D1A0: jal         0x80050294
    // 0x8022D1A4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022D1A4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022D1A8: jal         0x8022D1C4
    // 0x8022D1AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D1C4_ovl5(rdram, ctx);
        goto after_3;
    // 0x8022D1AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022D1B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D1B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D1B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D1BC: jr          $ra
    // 0x8022D1C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D1C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023D2A0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D2A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D2A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023D2A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023D2AC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023D2B0: jal         0x8023D56C
    // 0x8023D2B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8023D56C_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023D2B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023D2B8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023D2BC: jal         0x8023D600
    // 0x8023D2C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023D600_ovl5(rdram, ctx);
        goto after_1;
    // 0x8023D2C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023D2C4: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8023D2C8: bne         $v0, $zero, L_8023D4B0
    if (ctx->r2 != 0) {
        // 0x8023D2CC: nop
    
            goto L_8023D4B0;
    }
    // 0x8023D2CC: nop

    // 0x8023D2D0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023D2D4: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8023D2D8: bne         $v0, $zero, L_8023D4F8
    if (ctx->r2 != 0) {
        // 0x8023D2DC: nop
    
            goto L_8023D4F8;
    }
    // 0x8023D2DC: nop

    // 0x8023D2E0: jal         0x8006033C
    // 0x8023D2E4: addiu       $a0, $zero, 0x627
    ctx->r4 = ADD32(0, 0X627);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8023D2E4: addiu       $a0, $zero, 0x627
    ctx->r4 = ADD32(0, 0X627);
    after_2:
    // 0x8023D2E8: beq         $v0, $zero, L_8023D328
    if (ctx->r2 == 0) {
        // 0x8023D2EC: slti        $v0, $s0, 0x7E
        ctx->r2 = SIGNED(ctx->r16) < 0X7E ? 1 : 0;
            goto L_8023D328;
    }
    // 0x8023D2EC: slti        $v0, $s0, 0x7E
    ctx->r2 = SIGNED(ctx->r16) < 0X7E ? 1 : 0;
    // 0x8023D2F0: jal         0x8006033C
    // 0x8023D2F4: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8023D2F4: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_3:
    // 0x8023D2F8: bne         $v0, $zero, L_8023D328
    if (ctx->r2 != 0) {
        // 0x8023D2FC: slti        $v0, $s0, 0x7E
        ctx->r2 = SIGNED(ctx->r16) < 0X7E ? 1 : 0;
            goto L_8023D328;
    }
    // 0x8023D2FC: slti        $v0, $s0, 0x7E
    ctx->r2 = SIGNED(ctx->r16) < 0X7E ? 1 : 0;
    // 0x8023D300: jal         0x8006FF58
    // 0x8023D304: nop

    func_8006FF58_4B358(rdram, ctx);
        goto after_4;
    // 0x8023D304: nop

    after_4:
    // 0x8023D308: beq         $v0, $zero, L_8023D328
    if (ctx->r2 == 0) {
        // 0x8023D30C: slti        $v0, $s0, 0x7E
        ctx->r2 = SIGNED(ctx->r16) < 0X7E ? 1 : 0;
            goto L_8023D328;
    }
    // 0x8023D30C: slti        $v0, $s0, 0x7E
    ctx->r2 = SIGNED(ctx->r16) < 0X7E ? 1 : 0;
    // 0x8023D310: jal         0x8006036C
    // 0x8023D314: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x8023D314: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    after_5:
    // 0x8023D318: jal         0x8006036C
    // 0x8023D31C: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x8023D31C: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_6:
    // 0x8023D320: j           L_8023D4F8
    // 0x8023D324: nop

        goto L_8023D4F8;
    // 0x8023D324: nop

L_8023D328:
    // 0x8023D328: beq         $v0, $zero, L_8023D388
    if (ctx->r2 == 0) {
        // 0x8023D32C: slti        $v0, $s0, 0x3F
        ctx->r2 = SIGNED(ctx->r16) < 0X3F ? 1 : 0;
            goto L_8023D388;
    }
    // 0x8023D32C: slti        $v0, $s0, 0x3F
    ctx->r2 = SIGNED(ctx->r16) < 0X3F ? 1 : 0;
    // 0x8023D330: jal         0x8006033C
    // 0x8023D334: addiu       $a0, $zero, 0x623
    ctx->r4 = ADD32(0, 0X623);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x8023D334: addiu       $a0, $zero, 0x623
    ctx->r4 = ADD32(0, 0X623);
    after_7:
    // 0x8023D338: bne         $v0, $zero, L_8023D388
    if (ctx->r2 != 0) {
        // 0x8023D33C: slti        $v0, $s0, 0x3F
        ctx->r2 = SIGNED(ctx->r16) < 0X3F ? 1 : 0;
            goto L_8023D388;
    }
    // 0x8023D33C: slti        $v0, $s0, 0x3F
    ctx->r2 = SIGNED(ctx->r16) < 0X3F ? 1 : 0;
    // 0x8023D340: jal         0x8006033C
    // 0x8023D344: addiu       $a0, $zero, 0x624
    ctx->r4 = ADD32(0, 0X624);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x8023D344: addiu       $a0, $zero, 0x624
    ctx->r4 = ADD32(0, 0X624);
    after_8:
    // 0x8023D348: bne         $v0, $zero, L_8023D388
    if (ctx->r2 != 0) {
        // 0x8023D34C: slti        $v0, $s0, 0x3F
        ctx->r2 = SIGNED(ctx->r16) < 0X3F ? 1 : 0;
            goto L_8023D388;
    }
    // 0x8023D34C: slti        $v0, $s0, 0x3F
    ctx->r2 = SIGNED(ctx->r16) < 0X3F ? 1 : 0;
    // 0x8023D350: jal         0x8006033C
    // 0x8023D354: addiu       $a0, $zero, 0x625
    ctx->r4 = ADD32(0, 0X625);
    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x8023D354: addiu       $a0, $zero, 0x625
    ctx->r4 = ADD32(0, 0X625);
    after_9:
    // 0x8023D358: bne         $v0, $zero, L_8023D388
    if (ctx->r2 != 0) {
        // 0x8023D35C: slti        $v0, $s0, 0x3F
        ctx->r2 = SIGNED(ctx->r16) < 0X3F ? 1 : 0;
            goto L_8023D388;
    }
    // 0x8023D35C: slti        $v0, $s0, 0x3F
    ctx->r2 = SIGNED(ctx->r16) < 0X3F ? 1 : 0;
    // 0x8023D360: jal         0x8006FF58
    // 0x8023D364: nop

    func_8006FF58_4B358(rdram, ctx);
        goto after_10;
    // 0x8023D364: nop

    after_10:
    // 0x8023D368: beq         $v0, $zero, L_8023D388
    if (ctx->r2 == 0) {
        // 0x8023D36C: slti        $v0, $s0, 0x3F
        ctx->r2 = SIGNED(ctx->r16) < 0X3F ? 1 : 0;
            goto L_8023D388;
    }
    // 0x8023D36C: slti        $v0, $s0, 0x3F
    ctx->r2 = SIGNED(ctx->r16) < 0X3F ? 1 : 0;
    // 0x8023D370: jal         0x8006036C
    // 0x8023D374: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x8023D374: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    after_11:
    // 0x8023D378: jal         0x8006036C
    // 0x8023D37C: addiu       $a0, $zero, 0x623
    ctx->r4 = ADD32(0, 0X623);
    func_8006036C_3B76C(rdram, ctx);
        goto after_12;
    // 0x8023D37C: addiu       $a0, $zero, 0x623
    ctx->r4 = ADD32(0, 0X623);
    after_12:
    // 0x8023D380: j           L_8023D4F8
    // 0x8023D384: nop

        goto L_8023D4F8;
    // 0x8023D384: nop

L_8023D388:
    // 0x8023D388: beq         $v0, $zero, L_8023D3E8
    if (ctx->r2 == 0) {
        // 0x8023D38C: nop
    
            goto L_8023D3E8;
    }
    // 0x8023D38C: nop

    // 0x8023D390: jal         0x8006033C
    // 0x8023D394: addiu       $a0, $zero, 0x623
    ctx->r4 = ADD32(0, 0X623);
    func_8006033C_3B73C(rdram, ctx);
        goto after_13;
    // 0x8023D394: addiu       $a0, $zero, 0x623
    ctx->r4 = ADD32(0, 0X623);
    after_13:
    // 0x8023D398: beq         $v0, $zero, L_8023D3E8
    if (ctx->r2 == 0) {
        // 0x8023D39C: nop
    
            goto L_8023D3E8;
    }
    // 0x8023D39C: nop

    // 0x8023D3A0: jal         0x8006033C
    // 0x8023D3A4: addiu       $a0, $zero, 0x624
    ctx->r4 = ADD32(0, 0X624);
    func_8006033C_3B73C(rdram, ctx);
        goto after_14;
    // 0x8023D3A4: addiu       $a0, $zero, 0x624
    ctx->r4 = ADD32(0, 0X624);
    after_14:
    // 0x8023D3A8: bne         $v0, $zero, L_8023D3E8
    if (ctx->r2 != 0) {
        // 0x8023D3AC: nop
    
            goto L_8023D3E8;
    }
    // 0x8023D3AC: nop

    // 0x8023D3B0: jal         0x8006033C
    // 0x8023D3B4: addiu       $a0, $zero, 0x625
    ctx->r4 = ADD32(0, 0X625);
    func_8006033C_3B73C(rdram, ctx);
        goto after_15;
    // 0x8023D3B4: addiu       $a0, $zero, 0x625
    ctx->r4 = ADD32(0, 0X625);
    after_15:
    // 0x8023D3B8: bne         $v0, $zero, L_8023D3E8
    if (ctx->r2 != 0) {
        // 0x8023D3BC: nop
    
            goto L_8023D3E8;
    }
    // 0x8023D3BC: nop

    // 0x8023D3C0: jal         0x8006FF58
    // 0x8023D3C4: nop

    func_8006FF58_4B358(rdram, ctx);
        goto after_16;
    // 0x8023D3C4: nop

    after_16:
    // 0x8023D3C8: beq         $v0, $zero, L_8023D3E8
    if (ctx->r2 == 0) {
        // 0x8023D3CC: nop
    
            goto L_8023D3E8;
    }
    // 0x8023D3CC: nop

    // 0x8023D3D0: jal         0x8006036C
    // 0x8023D3D4: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    func_8006036C_3B76C(rdram, ctx);
        goto after_17;
    // 0x8023D3D4: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    after_17:
    // 0x8023D3D8: jal         0x8006036C
    // 0x8023D3DC: addiu       $a0, $zero, 0x624
    ctx->r4 = ADD32(0, 0X624);
    func_8006036C_3B76C(rdram, ctx);
        goto after_18;
    // 0x8023D3DC: addiu       $a0, $zero, 0x624
    ctx->r4 = ADD32(0, 0X624);
    after_18:
    // 0x8023D3E0: j           L_8023D4F8
    // 0x8023D3E4: nop

        goto L_8023D4F8;
    // 0x8023D3E4: nop

L_8023D3E8:
    // 0x8023D3E8: bne         $s0, $zero, L_8023D460
    if (ctx->r16 != 0) {
        // 0x8023D3EC: nop
    
            goto L_8023D460;
    }
    // 0x8023D3EC: nop

    // 0x8023D3F0: jal         0x8006033C
    // 0x8023D3F4: addiu       $a0, $zero, 0x623
    ctx->r4 = ADD32(0, 0X623);
    func_8006033C_3B73C(rdram, ctx);
        goto after_19;
    // 0x8023D3F4: addiu       $a0, $zero, 0x623
    ctx->r4 = ADD32(0, 0X623);
    after_19:
    // 0x8023D3F8: beq         $v0, $zero, L_8023D460
    if (ctx->r2 == 0) {
        // 0x8023D3FC: nop
    
            goto L_8023D460;
    }
    // 0x8023D3FC: nop

    // 0x8023D400: jal         0x8006033C
    // 0x8023D404: addiu       $a0, $zero, 0x624
    ctx->r4 = ADD32(0, 0X624);
    func_8006033C_3B73C(rdram, ctx);
        goto after_20;
    // 0x8023D404: addiu       $a0, $zero, 0x624
    ctx->r4 = ADD32(0, 0X624);
    after_20:
    // 0x8023D408: beq         $v0, $zero, L_8023D460
    if (ctx->r2 == 0) {
        // 0x8023D40C: nop
    
            goto L_8023D460;
    }
    // 0x8023D40C: nop

    // 0x8023D410: jal         0x8006033C
    // 0x8023D414: addiu       $a0, $zero, 0x625
    ctx->r4 = ADD32(0, 0X625);
    func_8006033C_3B73C(rdram, ctx);
        goto after_21;
    // 0x8023D414: addiu       $a0, $zero, 0x625
    ctx->r4 = ADD32(0, 0X625);
    after_21:
    // 0x8023D418: bne         $v0, $zero, L_8023D460
    if (ctx->r2 != 0) {
        // 0x8023D41C: nop
    
            goto L_8023D460;
    }
    // 0x8023D41C: nop

    // 0x8023D420: jal         0x8006FF58
    // 0x8023D424: nop

    func_8006FF58_4B358(rdram, ctx);
        goto after_22;
    // 0x8023D424: nop

    after_22:
    // 0x8023D428: beq         $v0, $zero, L_8023D460
    if (ctx->r2 == 0) {
        // 0x8023D42C: nop
    
            goto L_8023D460;
    }
    // 0x8023D42C: nop

    // 0x8023D430: jal         0x8006036C
    // 0x8023D434: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    func_8006036C_3B76C(rdram, ctx);
        goto after_23;
    // 0x8023D434: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    after_23:
    // 0x8023D438: jal         0x8006036C
    // 0x8023D43C: addiu       $a0, $zero, 0x625
    ctx->r4 = ADD32(0, 0X625);
    func_8006036C_3B76C(rdram, ctx);
        goto after_24;
    // 0x8023D43C: addiu       $a0, $zero, 0x625
    ctx->r4 = ADD32(0, 0X625);
    after_24:
    // 0x8023D440: jal         0x8006033C
    // 0x8023D444: addiu       $a0, $zero, 0x629
    ctx->r4 = ADD32(0, 0X629);
    func_8006033C_3B73C(rdram, ctx);
        goto after_25;
    // 0x8023D444: addiu       $a0, $zero, 0x629
    ctx->r4 = ADD32(0, 0X629);
    after_25:
    // 0x8023D448: bne         $v0, $zero, L_8023D4F8
    if (ctx->r2 != 0) {
        // 0x8023D44C: nop
    
            goto L_8023D4F8;
    }
    // 0x8023D44C: nop

    // 0x8023D450: jal         0x8006036C
    // 0x8023D454: addiu       $a0, $zero, 0x629
    ctx->r4 = ADD32(0, 0X629);
    func_8006036C_3B76C(rdram, ctx);
        goto after_26;
    // 0x8023D454: addiu       $a0, $zero, 0x629
    ctx->r4 = ADD32(0, 0X629);
    after_26:
    // 0x8023D458: j           L_8023D4F8
    // 0x8023D45C: nop

        goto L_8023D4F8;
    // 0x8023D45C: nop

L_8023D460:
    // 0x8023D460: jal         0x8006033C
    // 0x8023D464: addiu       $a0, $zero, 0x628
    ctx->r4 = ADD32(0, 0X628);
    func_8006033C_3B73C(rdram, ctx);
        goto after_27;
    // 0x8023D464: addiu       $a0, $zero, 0x628
    ctx->r4 = ADD32(0, 0X628);
    after_27:
    // 0x8023D468: beq         $v0, $zero, L_8023D4F8
    if (ctx->r2 == 0) {
        // 0x8023D46C: nop
    
            goto L_8023D4F8;
    }
    // 0x8023D46C: nop

    // 0x8023D470: jal         0x8006033C
    // 0x8023D474: addiu       $a0, $zero, 0x626
    ctx->r4 = ADD32(0, 0X626);
    func_8006033C_3B73C(rdram, ctx);
        goto after_28;
    // 0x8023D474: addiu       $a0, $zero, 0x626
    ctx->r4 = ADD32(0, 0X626);
    after_28:
    // 0x8023D478: bne         $v0, $zero, L_8023D4F8
    if (ctx->r2 != 0) {
        // 0x8023D47C: nop
    
            goto L_8023D4F8;
    }
    // 0x8023D47C: nop

    // 0x8023D480: jal         0x8006FF58
    // 0x8023D484: nop

    func_8006FF58_4B358(rdram, ctx);
        goto after_29;
    // 0x8023D484: nop

    after_29:
    // 0x8023D488: beq         $v0, $zero, L_8023D4F8
    if (ctx->r2 == 0) {
        // 0x8023D48C: nop
    
            goto L_8023D4F8;
    }
    // 0x8023D48C: nop

    // 0x8023D490: jal         0x8006036C
    // 0x8023D494: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    func_8006036C_3B76C(rdram, ctx);
        goto after_30;
    // 0x8023D494: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    after_30:
    // 0x8023D498: jal         0x8006036C
    // 0x8023D49C: addiu       $a0, $zero, 0x626
    ctx->r4 = ADD32(0, 0X626);
    func_8006036C_3B76C(rdram, ctx);
        goto after_31;
    // 0x8023D49C: addiu       $a0, $zero, 0x626
    ctx->r4 = ADD32(0, 0X626);
    after_31:
    // 0x8023D4A0: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8023D4A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D4A8: j           L_8023D4F8
    // 0x8023D4AC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8023D4F8;
    // 0x8023D4AC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8023D4B0:
    // 0x8023D4B0: jal         0x8006033C
    // 0x8023D4B4: addiu       $a0, $zero, 0x629
    ctx->r4 = ADD32(0, 0X629);
    func_8006033C_3B73C(rdram, ctx);
        goto after_32;
    // 0x8023D4B4: addiu       $a0, $zero, 0x629
    ctx->r4 = ADD32(0, 0X629);
    after_32:
    // 0x8023D4B8: bne         $v0, $zero, L_8023D4D0
    if (ctx->r2 != 0) {
        // 0x8023D4BC: nop
    
            goto L_8023D4D0;
    }
    // 0x8023D4BC: nop

    // 0x8023D4C0: bne         $s0, $zero, L_8023D4D0
    if (ctx->r16 != 0) {
        // 0x8023D4C4: nop
    
            goto L_8023D4D0;
    }
    // 0x8023D4C4: nop

    // 0x8023D4C8: jal         0x8006036C
    // 0x8023D4CC: addiu       $a0, $zero, 0x629
    ctx->r4 = ADD32(0, 0X629);
    func_8006036C_3B76C(rdram, ctx);
        goto after_33;
    // 0x8023D4CC: addiu       $a0, $zero, 0x629
    ctx->r4 = ADD32(0, 0X629);
    after_33:
L_8023D4D0:
    // 0x8023D4D0: jal         0x8006033C
    // 0x8023D4D4: addiu       $a0, $zero, 0x640
    ctx->r4 = ADD32(0, 0X640);
    func_8006033C_3B73C(rdram, ctx);
        goto after_34;
    // 0x8023D4D4: addiu       $a0, $zero, 0x640
    ctx->r4 = ADD32(0, 0X640);
    after_34:
    // 0x8023D4D8: beq         $v0, $zero, L_8023D4F8
    if (ctx->r2 == 0) {
        // 0x8023D4DC: nop
    
            goto L_8023D4F8;
    }
    // 0x8023D4DC: nop

    // 0x8023D4E0: jal         0x80036B58
    // 0x8023D4E4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_35;
    // 0x8023D4E4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_35:
    // 0x8023D4E8: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8023D4EC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8023D4F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D4F4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8023D4F8:
    // 0x8023D4F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023D4FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023D500: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023D504: jr          $ra
    // 0x8023D508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023D508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802265F0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802265F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802265F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802265F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802265FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226600: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226604: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80226608: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022660C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80226610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226614: beq         $v1, $v0, L_802266F0
    if (ctx->r3 == ctx->r2) {
        // 0x80226618: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802266F0;
    }
    // 0x80226618: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022661C: beql        $v0, $zero, L_80226634
    if (ctx->r2 == 0) {
        // 0x80226620: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226634;
    }
    goto skip_0;
    // 0x80226620: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226624: beq         $v1, $zero, L_8022664C
    if (ctx->r3 == 0) {
        // 0x80226628: nop
    
            goto L_8022664C;
    }
    // 0x80226628: nop

    // 0x8022662C: j           L_802267EC
    // 0x80226630: nop

        goto L_802267EC;
    // 0x80226630: nop

L_80226634:
    // 0x80226634: beq         $v1, $v0, L_80226718
    if (ctx->r3 == ctx->r2) {
        // 0x80226638: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226718;
    }
    // 0x80226638: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022663C: beq         $v1, $v0, L_80226748
    if (ctx->r3 == ctx->r2) {
        // 0x80226640: nop
    
            goto L_80226748;
    }
    // 0x80226640: nop

    // 0x80226644: j           L_802267EC
    // 0x80226648: nop

        goto L_802267EC;
    // 0x80226648: nop

L_8022664C:
    // 0x8022664C: jal         0x8006FF84
    // 0x80226650: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80226650: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80226654: beq         $v0, $zero, L_802267EC
    if (ctx->r2 == 0) {
        // 0x80226658: nop
    
            goto L_802267EC;
    }
    // 0x80226658: nop

    // 0x8022665C: jal         0x80060170
    // 0x80226660: nop

    func_80060170_3B570(rdram, ctx);
        goto after_1;
    // 0x80226660: nop

    after_1:
    // 0x80226664: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226668: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022666C: jal         0x8005F6B4
    // 0x80226670: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_2;
    // 0x80226670: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80226674: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226678: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8022667C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226680: addiu       $v0, $v0, 0x3BAC
    ctx->r2 = ADD32(ctx->r2, 0X3BAC);
    // 0x80226684: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226688: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8022668C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226690: addiu       $v0, $v0, 0x3B9C
    ctx->r2 = ADD32(ctx->r2, 0X3B9C);
    // 0x80226694: jal         0x800616FC
    // 0x80226698: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80226698: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022669C: jal         0x80060590
    // 0x802266A0: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_80060590_3B990(rdram, ctx);
        goto after_4;
    // 0x802266A0: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_4:
    // 0x802266A4: jal         0x80060590
    // 0x802266A8: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x802266A8: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_5:
    // 0x802266AC: jal         0x80060590
    // 0x802266B0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_80060590_3B990(rdram, ctx);
        goto after_6;
    // 0x802266B0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_6:
    // 0x802266B4: jal         0x80060590
    // 0x802266B8: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_80060590_3B990(rdram, ctx);
        goto after_7;
    // 0x802266B8: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_7:
    // 0x802266BC: jal         0x80226E80
    // 0x802266C0: nop

    func_80226E80_ovl5(rdram, ctx);
        goto after_8;
    // 0x802266C0: nop

    after_8:
    // 0x802266C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802266C8: jal         0x80226E18
    // 0x802266CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80226E18_ovl5(rdram, ctx);
        goto after_9;
    // 0x802266CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_9:
    // 0x802266D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802266D4: jal         0x80226E18
    // 0x802266D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80226E18_ovl5(rdram, ctx);
        goto after_10;
    // 0x802266D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x802266DC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802266E0: jal         0x80226E18
    // 0x802266E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80226E18_ovl5(rdram, ctx);
        goto after_11;
    // 0x802266E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x802266E8: j           L_80226738
    // 0x802266EC: nop

        goto L_80226738;
    // 0x802266EC: nop

L_802266F0:
    // 0x802266F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802266F4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802266F8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802266FC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226700: bne         $v0, $zero, L_802267EC
    if (ctx->r2 != 0) {
        // 0x80226704: nop
    
            goto L_802267EC;
    }
    // 0x80226704: nop

    // 0x80226708: jal         0x8006036C
    // 0x8022670C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006036C_3B76C(rdram, ctx);
        goto after_12;
    // 0x8022670C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_12:
    // 0x80226710: j           L_80226738
    // 0x80226714: nop

        goto L_80226738;
    // 0x80226714: nop

L_80226718:
    // 0x80226718: jal         0x8006033C
    // 0x8022671C: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006033C_3B73C(rdram, ctx);
        goto after_13;
    // 0x8022671C: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_13:
    // 0x80226720: beq         $v0, $zero, L_802267EC
    if (ctx->r2 == 0) {
        // 0x80226724: nop
    
            goto L_802267EC;
    }
    // 0x80226724: nop

    // 0x80226728: jal         0x80060590
    // 0x8022672C: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_80060590_3B990(rdram, ctx);
        goto after_14;
    // 0x8022672C: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_14:
    // 0x80226730: jal         0x80036E48
    // 0x80226734: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_15;
    // 0x80226734: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_15:
L_80226738:
    // 0x80226738: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022673C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226740: j           L_802267EC
    // 0x80226744: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_802267EC;
    // 0x80226744: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80226748:
    // 0x80226748: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022674C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226750: bne         $v0, $zero, L_802267EC
    if (ctx->r2 != 0) {
        // 0x80226754: nop
    
            goto L_802267EC;
    }
    // 0x80226754: nop

    // 0x80226758: jal         0x80226E60
    // 0x8022675C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80226E60_ovl5(rdram, ctx);
        goto after_16;
    // 0x8022675C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_16:
    // 0x80226760: jal         0x80226E60
    // 0x80226764: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80226E60_ovl5(rdram, ctx);
        goto after_17;
    // 0x80226764: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_17:
    // 0x80226768: jal         0x80226E60
    // 0x8022676C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80226E60_ovl5(rdram, ctx);
        goto after_18;
    // 0x8022676C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_18:
    // 0x80226770: jal         0x80226CE0
    // 0x80226774: nop

    func_80226CE0_ovl5(rdram, ctx);
        goto after_19;
    // 0x80226774: nop

    after_19:
    // 0x80226778: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022677C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226780: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226784: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226788: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022678C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226790: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226794: sb          $a1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r5;
    // 0x80226798: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022679C: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x802267A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267A4: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802267A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267AC: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802267B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267B4: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802267B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267BC: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802267C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267C4: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802267C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267CC: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802267D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267D4: sb          $a1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r5;
    // 0x802267D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267DC: sb          $v1, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r3;
    // 0x802267E0: jal         0x80070050
    // 0x802267E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_20;
    // 0x802267E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_20:
    // 0x802267E8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802267EC:
    // 0x802267EC: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802267F0: beq         $v0, $zero, L_80226814
    if (ctx->r2 == 0) {
        // 0x802267F4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80226814;
    }
    // 0x802267F4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802267F8: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x802267FC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80226800: beq         $v1, $v0, L_80226814
    if (ctx->r3 == ctx->r2) {
        // 0x80226804: nop
    
            goto L_80226814;
    }
    // 0x80226804: nop

    // 0x80226808: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8022680C: jalr        $v0
    // 0x80226810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_21;
    // 0x80226810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_21:
L_80226814:
    // 0x80226814: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80226818: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022681C: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80226820: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80226824: beq         $v1, $zero, L_80226874
    if (ctx->r3 == 0) {
        // 0x80226828: nop
    
            goto L_80226874;
    }
    // 0x80226828: nop

    // 0x8022682C: jal         0x8006072C
    // 0x80226830: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_22;
    // 0x80226830: nop

    after_22:
    // 0x80226834: beq         $v0, $zero, L_80226874
    if (ctx->r2 == 0) {
        // 0x80226838: nop
    
            goto L_80226874;
    }
    // 0x80226838: nop

    // 0x8022683C: jal         0x80061724
    // 0x80226840: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_23;
    // 0x80226840: nop

    after_23:
    // 0x80226844: jal         0x80061090
    // 0x80226848: nop

    func_80061090_3C490(rdram, ctx);
        goto after_24;
    // 0x80226848: nop

    after_24:
    // 0x8022684C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226850: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226854: jal         0x80036B00
    // 0x80226858: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_25;
    // 0x80226858: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_25:
    // 0x8022685C: jal         0x8002A488
    // 0x80226860: nop

    func_8002A488_5888(rdram, ctx);
        goto after_26;
    // 0x80226860: nop

    after_26:
    // 0x80226864: jal         0x8006036C
    // 0x80226868: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006036C_3B76C(rdram, ctx);
        goto after_27;
    // 0x80226868: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_27:
    // 0x8022686C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226870: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80226874:
    // 0x80226874: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226878: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022687C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226880: jr          $ra
    // 0x80226884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FE3C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FE3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022FE40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022FE44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FE48: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022FE4C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022FE50: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FE54: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022FE58: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022FE5C: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8022FE60: beq         $v0, $zero, L_802302DC
    if (ctx->r2 == 0) {
        // 0x8022FE64: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802302DC;
    }
    // 0x8022FE64: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022FE68: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022FE6C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FE70: addu        $at, $at, $v0
    gpr jr_addend_8022FE78 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FE74: lw          $v0, 0x7160($at)
    ctx->r2 = ADD32(ctx->r1, 0X7160);
    // 0x8022FE78: jr          $v0
    // 0x8022FE7C: nop

    switch (jr_addend_8022FE78 >> 2) {
        case 0: goto L_8022FE80; break;
        case 1: goto L_8022FF64; break;
        case 2: goto L_8023000C; break;
        case 3: goto L_80230050; break;
        case 4: goto L_802300CC; break;
        case 5: goto L_80230174; break;
        case 6: goto L_802301F0; break;
        case 7: goto L_802302DC; break;
        case 8: goto L_8023029C; break;
        default: switch_error(__func__, 0x8022FE78, 0x80247160);
    }
    // 0x8022FE7C: nop

L_8022FE80:
    // 0x8022FE80: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FE84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FE88: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FE8C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022FE90: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022FE94: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022FE98: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022FE9C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022FEA0: jal         0x8004D5D4
    // 0x8022FEA4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022FEA4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022FEA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FEAC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022FEB0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022FEB4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022FEB8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022FEBC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022FEC0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022FEC4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022FEC8: addiu       $v0, $v0, 0x5C50
    ctx->r2 = ADD32(ctx->r2, 0X5C50);
    // 0x8022FECC: jal         0x8003E934
    // 0x8022FED0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022FED0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022FED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FED8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022FEDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FEE0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022FEE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FEE8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022FEEC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022FEF0: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022FEF4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022FEF8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022FEFC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022FF00: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022FF04: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022FF08: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022FF0C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022FF10: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022FF14: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022FF18: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022FF1C: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022FF20: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022FF24: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022FF28: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022FF2C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022FF30: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022FF34: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FF38: jal         0x80050294
    // 0x8022FF3C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022FF3C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x8022FF40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FF44: jal         0x80230658
    // 0x8022FF48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80230658_ovl5(rdram, ctx);
        goto after_3;
    // 0x8022FF48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x8022FF4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FF50: jal         0x80230638
    // 0x8022FF54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80230638_ovl5(rdram, ctx);
        goto after_4;
    // 0x8022FF54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8022FF58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FF5C: j           L_802302DC
    // 0x8022FF60: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802302DC;
    // 0x8022FF60: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022FF64:
    // 0x8022FF64: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8022FF68: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022FF6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FF70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FF74: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8022FF78: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FF7C: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022FF80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FF84: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FF88: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022FF8C: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x8022FF90: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x8022FF94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FF98: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022FF9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FFA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FFA4: jal         0x80230818
    // 0x8022FFA8: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    func_80230818_ovl5(rdram, ctx);
        goto after_5;
    // 0x8022FFA8: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022FFAC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022FFB0: bne         $v0, $zero, L_802302E0
    if (ctx->r2 != 0) {
        // 0x8022FFB4: nop
    
            goto L_802302E0;
    }
    // 0x8022FFB4: nop

    // 0x8022FFB8: jal         0x8003E934
    // 0x8022FFBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8022FFBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022FFC0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022FFC4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022FFC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FFCC: beq         $a1, $zero, L_8022FFDC
    if (ctx->r5 == 0) {
        // 0x8022FFD0: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022FFDC;
    }
    // 0x8022FFD0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022FFD4: jal         0x802304FC
    // 0x8022FFD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802304FC_ovl5(rdram, ctx);
        goto after_7;
    // 0x8022FFD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_8022FFDC:
    // 0x8022FFDC: jal         0x8023057C
    // 0x8022FFE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023057C_ovl5(rdram, ctx);
        goto after_8;
    // 0x8022FFE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022FFE4: jal         0x8005044C
    // 0x8022FFE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_9;
    // 0x8022FFE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022FFEC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022FFF0: bne         $v0, $zero, L_80230004
    if (ctx->r2 != 0) {
        // 0x8022FFF4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80230004;
    }
    // 0x8022FFF4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FFF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FFFC: j           L_802302DC
    // 0x80230000: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802302DC;
    // 0x80230000: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230004:
    // 0x80230004: j           L_802302DC
    // 0x80230008: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802302DC;
    // 0x80230008: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023000C:
    // 0x8023000C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80230010: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80230014: bne         $v1, $v0, L_80230038
    if (ctx->r3 != ctx->r2) {
        // 0x80230018: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230038;
    }
    // 0x80230018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023001C: jal         0x802304FC
    // 0x80230020: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_802304FC_ovl5(rdram, ctx);
        goto after_10;
    // 0x80230020: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_10:
    // 0x80230024: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230028: jal         0x800A3450
    // 0x8023002C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x8023002C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_11:
    // 0x80230030: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80230034: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80230038:
    // 0x80230038: jal         0x8023057C
    // 0x8023003C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023057C_ovl5(rdram, ctx);
        goto after_12;
    // 0x8023003C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x80230040: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80230044: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230048: j           L_802302DC
    // 0x8023004C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802302DC;
    // 0x8023004C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80230050:
    // 0x80230050: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230054: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80230058: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8023005C: jal         0x8004F820
    // 0x80230060: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_13;
    // 0x80230060: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_13:
    // 0x80230064: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230068: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8023006C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230070: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230074: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80230078: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023007C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230080: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230084: jal         0x80230818
    // 0x80230088: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_80230818_ovl5(rdram, ctx);
        goto after_14;
    // 0x80230088: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_14:
    // 0x8023008C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230090: bne         $v0, $zero, L_802302E0
    if (ctx->r2 != 0) {
        // 0x80230094: nop
    
            goto L_802302E0;
    }
    // 0x80230094: nop

    // 0x80230098: jal         0x8003E934
    // 0x8023009C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_15;
    // 0x8023009C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x802300A0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x802300A4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802300A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802300AC: beq         $a1, $zero, L_802300BC
    if (ctx->r5 == 0) {
        // 0x802300B0: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_802300BC;
    }
    // 0x802300B0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802300B4: jal         0x802304FC
    // 0x802300B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802304FC_ovl5(rdram, ctx);
        goto after_16;
    // 0x802300B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
L_802300BC:
    // 0x802300BC: jal         0x8023057C
    // 0x802300C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023057C_ovl5(rdram, ctx);
        goto after_17;
    // 0x802300C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x802300C4: j           L_802302D4
    // 0x802300C8: nop

        goto L_802302D4;
    // 0x802300C8: nop

L_802300CC:
    // 0x802300CC: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x802300D0: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802300D4: xori        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 ^ 0X8;
    // 0x802300D8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802300DC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802300E0: beq         $v1, $zero, L_80230138
    if (ctx->r3 == 0) {
        // 0x802300E4: addiu       $a0, $zero, 0x109
        ctx->r4 = ADD32(0, 0X109);
            goto L_80230138;
    }
    // 0x802300E4: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x802300E8: jal         0x8002A33C
    // 0x802300EC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_18;
    // 0x802300EC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_18:
    // 0x802300F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802300F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802300F8: jal         0x80050294
    // 0x802300FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_19;
    // 0x802300FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_19:
    // 0x80230100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230104: jal         0x80230658
    // 0x80230108: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80230658_ovl5(rdram, ctx);
        goto after_20;
    // 0x80230108: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x8023010C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230110: jal         0x80230638
    // 0x80230114: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80230638_ovl5(rdram, ctx);
        goto after_21;
    // 0x80230114: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x80230118: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023011C: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x80230120: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80230124: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80230128: sb          $v1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r3;
    // 0x8023012C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230130: j           L_80230140
    // 0x80230134: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80230140;
    // 0x80230134: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230138:
    // 0x80230138: jal         0x8005044C
    // 0x8023013C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_22;
    // 0x8023013C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_22:
L_80230140:
    // 0x80230140: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230144: jal         0x80230818
    // 0x80230148: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80230818_ovl5(rdram, ctx);
        goto after_23;
    // 0x80230148: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_23:
    // 0x8023014C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230150: bne         $v0, $zero, L_802302E0
    if (ctx->r2 != 0) {
        // 0x80230154: nop
    
            goto L_802302E0;
    }
    // 0x80230154: nop

    // 0x80230158: jal         0x8003E934
    // 0x8023015C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_24;
    // 0x8023015C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x80230160: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80230164: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80230168: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023016C: j           L_802301D8
    // 0x80230170: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_802301D8;
    // 0x80230170: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80230174:
    // 0x80230174: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80230178: bgez        $v0, L_802301B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023017C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802301B4;
    }
    // 0x8023017C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230180: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80230184: jal         0x80050294
    // 0x80230188: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_25;
    // 0x80230188: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_25:
    // 0x8023018C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230190: jal         0x80230658
    // 0x80230194: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80230658_ovl5(rdram, ctx);
        goto after_26;
    // 0x80230194: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x80230198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023019C: jal         0x80230638
    // 0x802301A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80230638_ovl5(rdram, ctx);
        goto after_27;
    // 0x802301A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_27:
    // 0x802301A4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802301A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802301AC: j           L_802301BC
    // 0x802301B0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802301BC;
    // 0x802301B0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802301B4:
    // 0x802301B4: jal         0x8005044C
    // 0x802301B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_28;
    // 0x802301B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_28:
L_802301BC:
    // 0x802301BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802301C0: jal         0x80230818
    // 0x802301C4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80230818_ovl5(rdram, ctx);
        goto after_29;
    // 0x802301C4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_29:
    // 0x802301C8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802301CC: bne         $v0, $zero, L_802302E0
    if (ctx->r2 != 0) {
        // 0x802301D0: nop
    
            goto L_802302E0;
    }
    // 0x802301D0: nop

    // 0x802301D4: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_802301D8:
    // 0x802301D8: beql        $a1, $zero, L_802302E0
    if (ctx->r5 == 0) {
        // 0x802301DC: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_802302E0;
    }
    goto skip_0;
    // 0x802301DC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_0:
    // 0x802301E0: jal         0x802304FC
    // 0x802301E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802304FC_ovl5(rdram, ctx);
        goto after_30;
    // 0x802301E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_30:
    // 0x802301E8: j           L_802302E0
    // 0x802301EC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
        goto L_802302E0;
    // 0x802301EC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_802301F0:
    // 0x802301F0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802301F4: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x802301F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802301FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230200: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80230204: jal         0x8003E934
    // 0x80230208: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_31;
    // 0x80230208: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_31:
    // 0x8023020C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80230210: addiu       $v1, $v0, -0x258
    ctx->r3 = ADD32(ctx->r2, -0X258);
    // 0x80230214: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x80230218: beq         $v0, $zero, L_8023022C
    if (ctx->r2 == 0) {
        // 0x8023021C: sw          $v1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r3;
            goto L_8023022C;
    }
    // 0x8023021C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80230220: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80230224: j           L_80230244
    // 0x80230228: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80230244;
    // 0x80230228: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8023022C:
    // 0x8023022C: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80230230: beq         $v0, $zero, L_80230240
    if (ctx->r2 == 0) {
        // 0x80230234: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80230240;
    }
    // 0x80230234: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80230238: j           L_80230244
    // 0x8023023C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80230244;
    // 0x8023023C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80230240:
    // 0x80230240: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_80230244:
    // 0x80230244: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230248: jal         0x80230818
    // 0x8023024C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80230818_ovl5(rdram, ctx);
        goto after_32;
    // 0x8023024C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_32:
    // 0x80230250: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230254: bne         $v0, $zero, L_802302E0
    if (ctx->r2 != 0) {
        // 0x80230258: nop
    
            goto L_802302E0;
    }
    // 0x80230258: nop

    // 0x8023025C: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80230260: bne         $a1, $zero, L_80230278
    if (ctx->r5 != 0) {
        // 0x80230264: nop
    
            goto L_80230278;
    }
    // 0x80230264: nop

    // 0x80230268: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023026C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80230270: bne         $v0, $zero, L_80230284
    if (ctx->r2 != 0) {
        // 0x80230274: nop
    
            goto L_80230284;
    }
    // 0x80230274: nop

L_80230278:
    // 0x80230278: jal         0x802304FC
    // 0x8023027C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802304FC_ovl5(rdram, ctx);
        goto after_33;
    // 0x8023027C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_33:
    // 0x80230280: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_80230284:
    // 0x80230284: jal         0x802307AC
    // 0x80230288: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802307AC_ovl5(rdram, ctx);
        goto after_34;
    // 0x80230288: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_34:
    // 0x8023028C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80230290: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230294: j           L_802302D4
    // 0x80230298: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802302D4;
    // 0x80230298: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023029C:
    // 0x8023029C: lh          $a0, 0x66($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X66);
    // 0x802302A0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802302A4: jal         0x8004FA7C
    // 0x802302A8: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_35;
    // 0x802302A8: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_35:
    // 0x802302AC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802302B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802302B4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802302B8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802302BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802302C0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802302C4: bne         $v0, $zero, L_802302D4
    if (ctx->r2 != 0) {
        // 0x802302C8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802302D4;
    }
    // 0x802302C8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802302CC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802302D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802302D4:
    // 0x802302D4: jal         0x8005044C
    // 0x802302D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_36;
    // 0x802302D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_36:
L_802302DC:
    // 0x802302DC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_802302E0:
    // 0x802302E0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802302E4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802302E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802302EC: jr          $ra
    // 0x802302F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802302F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80239BA8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239BA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239BAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239BB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239BB8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80239BBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239BC0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80239BC4: jal         0x8004D5D4
    // 0x80239BC8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80239BC8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80239BCC: addiu       $a0, $s0, 0x468
    ctx->r4 = ADD32(ctx->r16, 0X468);
    // 0x80239BD0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239BD4: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80239BD8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80239BDC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80239BE0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80239BE4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80239BE8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80239BEC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80239BF0: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80239BF4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80239BF8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80239BFC: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80239C00: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80239C04: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80239C08: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
    // 0x80239C0C: sw          $zero, 0x444($s0)
    MEM_W(0X444, ctx->r16) = 0;
    // 0x80239C10: sw          $zero, 0x448($s0)
    MEM_W(0X448, ctx->r16) = 0;
    // 0x80239C14: sw          $zero, 0x458($s0)
    MEM_W(0X458, ctx->r16) = 0;
    // 0x80239C18: jal         0x800540BC
    // 0x80239C1C: sw          $zero, 0x45C($s0)
    MEM_W(0X45C, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80239C1C: sw          $zero, 0x45C($s0)
    MEM_W(0X45C, ctx->r16) = 0;
    after_1:
    // 0x80239C20: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80239C24: addiu       $a0, $a0, 0x6464
    ctx->r4 = ADD32(ctx->r4, 0X6464);
    // 0x80239C28: sw          $zero, 0x4A0($s0)
    MEM_W(0X4A0, ctx->r16) = 0;
    // 0x80239C2C: sw          $zero, 0x4A4($s0)
    MEM_W(0X4A4, ctx->r16) = 0;
    // 0x80239C30: sw          $zero, 0x4B0($s0)
    MEM_W(0X4B0, ctx->r16) = 0;
    // 0x80239C34: sw          $zero, 0x4B4($s0)
    MEM_W(0X4B4, ctx->r16) = 0;
    // 0x80239C38: sw          $zero, 0x4B8($s0)
    MEM_W(0X4B8, ctx->r16) = 0;
    // 0x80239C3C: sh          $zero, 0x44C($s0)
    MEM_H(0X44C, ctx->r16) = 0;
    // 0x80239C40: sh          $zero, 0x44E($s0)
    MEM_H(0X44E, ctx->r16) = 0;
    // 0x80239C44: sh          $zero, 0x4C0($s0)
    MEM_H(0X4C0, ctx->r16) = 0;
    // 0x80239C48: sh          $zero, 0x4C2($s0)
    MEM_H(0X4C2, ctx->r16) = 0;
    // 0x80239C4C: jal         0x8003E6BC
    // 0x80239C50: sh          $zero, 0x4C8($s0)
    MEM_H(0X4C8, ctx->r16) = 0;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_2;
    // 0x80239C50: sh          $zero, 0x4C8($s0)
    MEM_H(0X4C8, ctx->r16) = 0;
    after_2:
    // 0x80239C54: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80239C58: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80239C5C: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x80239C60: sw          $v0, 0x4CC($s0)
    MEM_W(0X4CC, ctx->r16) = ctx->r2;
    // 0x80239C64: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80239C68: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80239C6C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80239C70: lb          $a2, 0xC($s0)
    ctx->r6 = MEM_B(ctx->r16, 0XC);
    // 0x80239C74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239C78: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80239C7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239C80: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80239C84: addiu       $v0, $v0, 0x6458
    ctx->r2 = ADD32(ctx->r2, 0X6458);
    // 0x80239C88: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80239C8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239C90: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80239C94: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80239C98: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80239C9C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80239CA0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80239CA4: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80239CA8: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80239CAC: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80239CB0: jal         0x80050294
    // 0x80239CB4: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80239CB4: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_3:
    // 0x80239CB8: jal         0x80239CD0
    // 0x80239CBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80239CD0_ovl5(rdram, ctx);
        goto after_4;
    // 0x80239CBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80239CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239CC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239CC8: jr          $ra
    // 0x80239CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238C30_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238C30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238C34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238C38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238C3C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238C40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238C44: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238C48: bne         $v0, $zero, L_80238C80
    if (ctx->r2 != 0) {
        // 0x80238C4C: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80238C80;
    }
    // 0x80238C4C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80238C50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80238C54: jal         0x80050294
    // 0x80238C58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80238C58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80238C5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238C60: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238C64: jal         0x80239590
    // 0x80238C68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80239590_ovl5(rdram, ctx);
        goto after_1;
    // 0x80238C68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80238C6C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238C70: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x80238C74: sb          $v1, 0x10C($s0)
    MEM_B(0X10C, ctx->r16) = ctx->r3;
    // 0x80238C78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238C7C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80238C80:
    // 0x80238C80: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238C84: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238C88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238C8C: jr          $ra
    // 0x80238C90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238C90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A6B0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A6B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A6B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A6B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A6BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A6C0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A6C4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023A6C8: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8023A6CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A6D0: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x8023A6D4: beq         $a0, $v0, L_8023A728
    if (ctx->r4 == ctx->r2) {
        // 0x8023A6D8: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_8023A728;
    }
    // 0x8023A6D8: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8023A6DC: beql        $v0, $zero, L_8023A6F4
    if (ctx->r2 == 0) {
        // 0x8023A6E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023A6F4;
    }
    goto skip_0;
    // 0x8023A6E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023A6E4: beq         $a0, $zero, L_8023A70C
    if (ctx->r4 == 0) {
        // 0x8023A6E8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8023A70C;
    }
    // 0x8023A6E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023A6EC: j           L_8023A7DC
    // 0x8023A6F0: nop

        goto L_8023A7DC;
    // 0x8023A6F0: nop

L_8023A6F4:
    // 0x8023A6F4: beq         $a0, $v0, L_8023A794
    if (ctx->r4 == ctx->r2) {
        // 0x8023A6F8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023A794;
    }
    // 0x8023A6F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A6FC: beq         $a0, $v0, L_8023A7C0
    if (ctx->r4 == ctx->r2) {
        // 0x8023A700: nop
    
            goto L_8023A7C0;
    }
    // 0x8023A700: nop

    // 0x8023A704: j           L_8023A7DC
    // 0x8023A708: nop

        goto L_8023A7DC;
    // 0x8023A708: nop

L_8023A70C:
    // 0x8023A70C: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023A710: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8023A714: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023A718: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023A71C: sh          $zero, 0x4C8($s0)
    MEM_H(0X4C8, ctx->r16) = 0;
    // 0x8023A720: j           L_8023A7D8
    // 0x8023A724: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_8023A7D8;
    // 0x8023A724: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_8023A728:
    // 0x8023A728: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023A72C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023A730: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8023A734: jal         0x8004F820
    // 0x8023A738: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8023A738: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_0:
    // 0x8023A73C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023A740: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A744: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023A748: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A74C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023A750: bltz        $v0, L_8023A76C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023A754: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023A76C;
    }
    // 0x8023A754: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023A758: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x8023A75C: beq         $v0, $zero, L_8023A7DC
    if (ctx->r2 == 0) {
        // 0x8023A760: nop
    
            goto L_8023A7DC;
    }
    // 0x8023A760: nop

    // 0x8023A764: j           L_8023A77C
    // 0x8023A768: nop

        goto L_8023A77C;
    // 0x8023A768: nop

L_8023A76C:
    // 0x8023A76C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023A770: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x8023A774: beq         $v0, $zero, L_8023A7DC
    if (ctx->r2 == 0) {
        // 0x8023A778: nop
    
            goto L_8023A7DC;
    }
    // 0x8023A778: nop

L_8023A77C:
    // 0x8023A77C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023A780: bgez        $v0, L_8023A7DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A784: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8023A7DC;
    }
    // 0x8023A784: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8023A788: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A78C: j           L_8023A7B4
    // 0x8023A790: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
        goto L_8023A7B4;
    // 0x8023A790: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_8023A794:
    // 0x8023A794: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023A798: bgez        $v0, L_8023A7DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A79C: nop
    
            goto L_8023A7DC;
    }
    // 0x8023A79C: nop

    // 0x8023A7A0: jal         0x8023B134
    // 0x8023A7A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023B134_ovl5(rdram, ctx);
        goto after_1;
    // 0x8023A7A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023A7A8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A7AC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8023A7B0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_8023A7B4:
    // 0x8023A7B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A7B8: j           L_8023A7DC
    // 0x8023A7BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023A7DC;
    // 0x8023A7BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023A7C0:
    // 0x8023A7C0: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023A7C4: bgez        $v0, L_8023A7DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023A7C8: addiu       $v1, $zero, 0x5A
        ctx->r3 = ADD32(0, 0X5A);
            goto L_8023A7DC;
    }
    // 0x8023A7C8: addiu       $v1, $zero, 0x5A
    ctx->r3 = ADD32(0, 0X5A);
    // 0x8023A7CC: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023A7D0: sh          $v1, 0x44C($s0)
    MEM_H(0X44C, ctx->r16) = ctx->r3;
    // 0x8023A7D4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_8023A7D8:
    // 0x8023A7D8: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
L_8023A7DC:
    // 0x8023A7DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A7E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A7E4: jr          $ra
    // 0x8023A7E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A7E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228B40_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228B44: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80228B48: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228B4C: lw          $v1, 0x10($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X10);
    // 0x80228B50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228B54: bne         $v1, $v0, L_80228B90
    if (ctx->r3 != ctx->r2) {
        // 0x80228B58: addiu       $v0, $zero, 0x5B
        ctx->r2 = ADD32(0, 0X5B);
            goto L_80228B90;
    }
    // 0x80228B58: addiu       $v0, $zero, 0x5B
    ctx->r2 = ADD32(0, 0X5B);
    // 0x80228B5C: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228B60: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80228B64: sh          $v0, 0x44($v1)
    MEM_H(0X44, ctx->r3) = ctx->r2;
    // 0x80228B68: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80228B6C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80228B70: sb          $a0, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r4;
    // 0x80228B74: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228B78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228B7C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80228B80: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80228B84: sb          $a0, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r4;
    // 0x80228B88: lw          $v1, 0x10($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X10);
    // 0x80228B8C: addiu       $v0, $zero, 0x5B
    ctx->r2 = ADD32(0, 0X5B);
L_80228B90:
    // 0x80228B90: bne         $v1, $v0, L_80228BA0
    if (ctx->r3 != ctx->r2) {
        // 0x80228B94: nop
    
            goto L_80228BA0;
    }
    // 0x80228B94: nop

    // 0x80228B98: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80228B9C: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
L_80228BA0:
    // 0x80228BA0: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x80228BA4: slti        $v0, $v0, 0x5B
    ctx->r2 = SIGNED(ctx->r2) < 0X5B ? 1 : 0;
    // 0x80228BA8: bne         $v0, $zero, L_80228C8C
    if (ctx->r2 != 0) {
        // 0x80228BAC: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80228C8C;
    }
    // 0x80228BAC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228BB0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228BB4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228BB8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228BBC: bne         $v0, $zero, L_80228C8C
    if (ctx->r2 != 0) {
        // 0x80228BC0: addiu       $v0, $zero, 0x329
        ctx->r2 = ADD32(0, 0X329);
            goto L_80228C8C;
    }
    // 0x80228BC0: addiu       $v0, $zero, 0x329
    ctx->r2 = ADD32(0, 0X329);
    // 0x80228BC4: addiu       $a0, $zero, -0x301
    ctx->r4 = ADD32(0, -0X301);
    // 0x80228BC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228BCC: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80228BD0: addiu       $v0, $zero, 0x498
    ctx->r2 = ADD32(0, 0X498);
    // 0x80228BD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228BD8: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80228BDC: lui         $v0, 0x329
    ctx->r2 = S32(0X329 << 16);
    // 0x80228BE0: lui         $a1, 0xFCFF
    ctx->r5 = S32(0XFCFF << 16);
    // 0x80228BE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228BE8: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80228BEC: lui         $v0, 0x498
    ctx->r2 = S32(0X498 << 16);
    // 0x80228BF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228BF4: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80228BF8: addiu       $v0, $zero, 0x4F6
    ctx->r2 = ADD32(0, 0X4F6);
    // 0x80228BFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C00: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80228C04: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80228C08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C0C: sh          $a0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r4;
    // 0x80228C10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C14: sw          $a1, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r5;
    // 0x80228C18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C1C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80228C20: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228C24: addiu       $v0, $zero, 0x2CE
    ctx->r2 = ADD32(0, 0X2CE);
    // 0x80228C28: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80228C2C: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80228C30: sh          $a0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r4;
    // 0x80228C34: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228C38: addiu       $v0, $zero, 0x4C0
    ctx->r2 = ADD32(0, 0X4C0);
    // 0x80228C3C: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x80228C40: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228C44: lui         $v0, 0x2CE
    ctx->r2 = S32(0X2CE << 16);
    // 0x80228C48: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80228C4C: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80228C50: sw          $a1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r5;
    // 0x80228C54: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228C58: lui         $v0, 0x4C0
    ctx->r2 = S32(0X4C0 << 16);
    // 0x80228C5C: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80228C60: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228C64: addiu       $v0, $zero, 0xCF6
    ctx->r2 = ADD32(0, 0XCF6);
    // 0x80228C68: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x80228C6C: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80228C70: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x80228C74: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228C78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228C7C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80228C80: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80228C84: jal         0x800600F8
    // 0x80228C88: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_0;
    // 0x80228C88: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    after_0:
L_80228C8C:
    // 0x80228C8C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228C90: jr          $ra
    // 0x80228C94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234D1C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234D1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234D20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80234D24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80234D28: jal         0x8003E934
    // 0x80234D2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x80234D2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80234D30: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x80234D34: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80234D38: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234D3C: slti        $v0, $a1, -0x62F
    ctx->r2 = SIGNED(ctx->r5) < -0X62F ? 1 : 0;
    // 0x80234D40: bne         $v0, $zero, L_80234D50
    if (ctx->r2 != 0) {
        // 0x80234D44: addu        $a2, $a1, $zero
        ctx->r6 = ADD32(ctx->r5, 0);
            goto L_80234D50;
    }
    // 0x80234D44: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80234D48: j           L_80234D5C
    // 0x80234D4C: addiu       $a0, $zero, -0x10
    ctx->r4 = ADD32(0, -0X10);
        goto L_80234D5C;
    // 0x80234D4C: addiu       $a0, $zero, -0x10
    ctx->r4 = ADD32(0, -0X10);
L_80234D50:
    // 0x80234D50: slti        $v0, $a1, -0x650
    ctx->r2 = SIGNED(ctx->r5) < -0X650 ? 1 : 0;
    // 0x80234D54: bnel        $v0, $zero, L_80234D5C
    if (ctx->r2 != 0) {
        // 0x80234D58: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_80234D5C;
    }
    goto skip_0;
    // 0x80234D58: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    skip_0:
L_80234D5C:
    // 0x80234D5C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234D60: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80234D64: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80234D68: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80234D6C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80234D70: beq         $v1, $zero, L_80234DA4
    if (ctx->r3 == 0) {
        // 0x80234D74: addiu       $a1, $s0, 0x2C
        ctx->r5 = ADD32(ctx->r16, 0X2C);
            goto L_80234DA4;
    }
    // 0x80234D74: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80234D78: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234D7C: jal         0x8009A3B4
    // 0x80234D80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234D80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80234D84: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80234D88: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80234D8C: jal         0x8009A3B4
    // 0x80234D90: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234D90: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80234D94: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80234D98: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80234D9C: j           L_80234DAC
    // 0x80234DA0: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
        goto L_80234DAC;
    // 0x80234DA0: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
L_80234DA4:
    // 0x80234DA4: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80234DA8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
L_80234DAC:
    // 0x80234DAC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80234DB0: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80234DB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234DB8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80234DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80234DC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80234DC4: jr          $ra
    // 0x80234DC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234DC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
