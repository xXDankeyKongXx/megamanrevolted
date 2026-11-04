#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022E754_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E754: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E758: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E75C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E760: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022E764: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E768: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E76C: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x8022E770: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8022E774: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x8022E778: jal         0x8004FA7C
    // 0x8022E77C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022E77C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x8022E780: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x8022E784: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022E788: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x8022E78C: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022E790: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x8022E794: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8022E798: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E79C: bnel        $v0, $zero, L_8022E7BC
    if (ctx->r2 != 0) {
        // 0x8022E7A0: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_8022E7BC;
    }
    goto skip_0;
    // 0x8022E7A0: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x8022E7A4: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x8022E7A8: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022E7AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E7B0: beq         $v0, $zero, L_8022E7C0
    if (ctx->r2 == 0) {
        // 0x8022E7B4: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_8022E7C0;
    }
    // 0x8022E7B4: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8022E7B8: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_8022E7BC:
    // 0x8022E7BC: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_8022E7C0:
    // 0x8022E7C0: bne         $v0, $zero, L_8022E7F0
    if (ctx->r2 != 0) {
        // 0x8022E7C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E7F0;
    }
    // 0x8022E7C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E7C8: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022E7CC: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x8022E7D0: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x8022E7D4: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E7D8: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022E7DC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022E7E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E7E4: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x8022E7E8: j           L_8022E848
    // 0x8022E7EC: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_8022E848;
    // 0x8022E7EC: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_8022E7F0:
    // 0x8022E7F0: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8022E7F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E7F8: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022E7FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E800: beq         $v0, $zero, L_8022E844
    if (ctx->r2 == 0) {
        // 0x8022E804: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022E844;
    }
    // 0x8022E804: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E808: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022E80C: jal         0x8022FF44
    // 0x8022E810: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022FF44_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022E810: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x8022E814: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E818: beq         $v0, $zero, L_8022E850
    if (ctx->r2 == 0) {
        // 0x8022E81C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022E850;
    }
    // 0x8022E81C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E820: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022E824: jal         0x8022FEA8
    // 0x8022E828: nop

    func_8022FEA8_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022E828: nop

    after_2:
    // 0x8022E82C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022E830: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022E834: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022E838: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022E83C: j           L_8022E870
    // 0x8022E840: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022E870;
    // 0x8022E840: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022E844:
    // 0x8022E844: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E848:
    // 0x8022E848: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022E84C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022E850:
    // 0x8022E850: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022E854: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8022E858: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E85C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022E860: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022E864: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E868: jal         0x8004DA90
    // 0x8022E86C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022E86C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_8022E870:
    // 0x8022E870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E874: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E878: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E87C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E880: jr          $ra
    // 0x8022E884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024839C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024839C: lbu         $a2, 0x9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X9);
    // 0x802483A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802483A4: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x802483A8: beq         $v1, $v0, L_802483E0
    if (ctx->r3 == ctx->r2) {
        // 0x802483AC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802483E0;
    }
    // 0x802483AC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802483B0: beq         $v0, $zero, L_8024840C
    if (ctx->r2 == 0) {
        // 0x802483B4: nop
    
            goto L_8024840C;
    }
    // 0x802483B4: nop

    // 0x802483B8: bne         $v1, $zero, L_8024840C
    if (ctx->r3 != 0) {
        // 0x802483BC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8024840C;
    }
    // 0x802483BC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802483C0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802483C4: bne         $v1, $v0, L_8024840C
    if (ctx->r3 != ctx->r2) {
        // 0x802483C8: addiu       $v0, $zero, 0x55
        ctx->r2 = ADD32(0, 0X55);
            goto L_8024840C;
    }
    // 0x802483C8: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x802483CC: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802483D0: bne         $v1, $v0, L_8024840C
    if (ctx->r3 != ctx->r2) {
        // 0x802483D4: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_8024840C;
    }
    // 0x802483D4: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x802483D8: j           L_8024840C
    // 0x802483DC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_8024840C;
    // 0x802483DC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_802483E0:
    // 0x802483E0: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
    // 0x802483E4: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x802483E8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802483EC: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x802483F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802483F4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802483F8: bne         $v0, $v1, L_8024840C
    if (ctx->r2 != ctx->r3) {
        // 0x802483FC: nop
    
            goto L_8024840C;
    }
    // 0x802483FC: nop

    // 0x80248400: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80248404: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80248408: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8024840C:
    // 0x8024840C: jr          $ra
    // 0x80248410: nop

    TRACE_RETURN()
    return;
    // 0x80248410: nop

;}
RECOMP_FUNC void func_80241740_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241740: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80241744: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80241748: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8024174C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80241750: jr          $ra
    // 0x80241754: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80241754: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80247EDC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247EDC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80247EE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80247EE4: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80247EE8: lbu         $v1, 0x4F80($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4F80);
    // 0x80247EEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80247EF0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80247EF4: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x80247EF8: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x80247EFC: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x80247F00: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x80247F04: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x80247F08: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x80247F0C: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x80247F10: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x80247F14: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x80247F18: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x80247F1C: beq         $v1, $v0, L_80247F88
    if (ctx->r3 == ctx->r2) {
        // 0x80247F20: sw          $t2, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r10;
            goto L_80247F88;
    }
    // 0x80247F20: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x80247F24: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x80247F28: addiu       $a3, $a3, -0x3BC8
    ctx->r7 = ADD32(ctx->r7, -0X3BC8);
    // 0x80247F2C: lb          $t0, 0x0($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X0);
    // 0x80247F30: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80247F34: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80247F38: addiu       $a0, $a0, 0x4F80
    ctx->r4 = ADD32(ctx->r4, 0X4F80);
    // 0x80247F3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80247F40: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
L_80247F44:
    // 0x80247F44: bnel        $t0, $v0, L_80247F7C
    if (ctx->r8 != ctx->r2) {
        // 0x80247F48: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_80247F7C;
    }
    goto skip_0;
    // 0x80247F48: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    skip_0:
    // 0x80247F4C: lb          $v1, 0x1($a3)
    ctx->r3 = MEM_B(ctx->r7, 0X1);
    // 0x80247F50: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80247F54: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80247F58: lbu         $v0, 0x4F81($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4F81);
    // 0x80247F5C: bnel        $v1, $v0, L_80247F7C
    if (ctx->r3 != ctx->r2) {
        // 0x80247F60: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_80247F7C;
    }
    goto skip_1;
    // 0x80247F60: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    skip_1:
    // 0x80247F64: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247F68: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80247F6C: lw          $a1, 0x4F84($at)
    ctx->r5 = MEM_W(ctx->r1, 0X4F84);
    // 0x80247F70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80247F74: j           L_80247F88
    // 0x80247F78: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
        goto L_80247F88;
    // 0x80247F78: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
L_80247F7C:
    // 0x80247F7C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80247F80: bne         $v0, $t1, L_80247F44
    if (ctx->r2 != ctx->r9) {
        // 0x80247F84: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_80247F44;
    }
    // 0x80247F84: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_80247F88:
    // 0x80247F88: beq         $a2, $zero, L_80248208
    if (ctx->r6 == 0) {
        // 0x80247F8C: nop
    
            goto L_80248208;
    }
    // 0x80247F8C: nop

    // 0x80247F90: lui         $t3, 0x801C
    ctx->r11 = S32(0X801C << 16);
    // 0x80247F94: lbu         $t3, -0x39A6($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X39A6);
    // 0x80247F98: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80247F9C: addiu       $v1, $v1, -0x3B9A
    ctx->r3 = ADD32(ctx->r3, -0X3B9A);
    // 0x80247FA0: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80247FA4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80247FA8: lbu         $fp, 0x0($v1)
    ctx->r30 = MEM_BU(ctx->r3, 0X0);
    // 0x80247FAC: lui         $t3, 0x801A
    ctx->r11 = S32(0X801A << 16);
    // 0x80247FB0: lbu         $t3, 0x53D4($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X53D4);
    // 0x80247FB4: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x80247FB8: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x80247FBC: lbu         $t2, 0x6B40($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X6B40);
    // 0x80247FC0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x80247FC4: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80247FC8: lbu         $t3, -0x35BC($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X35BC);
    // 0x80247FCC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80247FD0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80247FD4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80247FD8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80247FDC: slt         $v0, $t2, $t3
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80247FE0: beq         $v0, $zero, L_80248208
    if (ctx->r2 == 0) {
        // 0x80247FE4: nop
    
            goto L_80248208;
    }
    // 0x80247FE4: nop

L_80247FE8:
    // 0x80247FE8: lw          $s7, 0x1C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1C);
    // 0x80247FEC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80247FF0: slt         $v0, $s7, $t2
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80247FF4: beq         $v0, $zero, L_802481F0
    if (ctx->r2 == 0) {
        // 0x80247FF8: nop
    
            goto L_802481F0;
    }
    // 0x80247FF8: nop

    // 0x80247FFC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80248000: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80248004: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80248008: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
L_8024800C:
    // 0x8024800C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80248010: lhu         $v1, 0x49AE($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49AE);
    // 0x80248014: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80248018: mult        $t3, $v1
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024801C: mflo        $v1
    ctx->r3 = lo;
    // 0x80248020: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80248024: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80248028: lw          $a0, -0x35C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X35C0);
    // 0x8024802C: subu        $v0, $s7, $t2
    ctx->r2 = SUB32(ctx->r23, ctx->r10);
    // 0x80248030: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80248034: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80248038: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8024803C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80248040: lh          $s6, 0x0($v1)
    ctx->r22 = MEM_H(ctx->r3, 0X0);
    // 0x80248044: blez        $s6, L_802481DC
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80248048: sll         $v0, $s6, 1
        ctx->r2 = S32(ctx->r22 << 1);
            goto L_802481DC;
    }
    // 0x80248048: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x8024804C: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x80248050: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80248054: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80248058: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024805C: lw          $v1, 0x5088($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5088);
    // 0x80248060: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80248064: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80248068: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8024806C: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
L_80248070:
    // 0x80248070: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x80248074: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80248078: bnel        $v0, $t3, L_802481D0
    if (ctx->r2 != ctx->r11) {
        // 0x8024807C: addiu       $s5, $s5, 0x10
        ctx->r21 = ADD32(ctx->r21, 0X10);
            goto L_802481D0;
    }
    goto skip_2;
    // 0x8024807C: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    skip_2:
    // 0x80248080: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80248084: addu        $s2, $s5, $zero
    ctx->r18 = ADD32(ctx->r21, 0);
L_80248088:
    // 0x80248088: jal         0x8004F2C4
    // 0x8024808C: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x8024808C: nop

    after_0:
    // 0x80248090: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80248094: beql        $s1, $zero, L_802481A8
    if (ctx->r17 == 0) {
        // 0x80248098: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_802481A8;
    }
    goto skip_3;
    // 0x80248098: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_3:
    // 0x8024809C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802480A0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802480A4: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x802480A8: addu        $s0, $s2, $s3
    ctx->r16 = ADD32(ctx->r18, ctx->r19);
    // 0x802480AC: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x802480B0: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802480B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802480B8: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x802480BC: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x802480C0: jal         0x8004D5D4
    // 0x802480C4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x802480C4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_1:
    // 0x802480C8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802480CC: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802480D0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x802480D4: addiu       $a1, $a1, 0x5080
    ctx->r5 = ADD32(ctx->r5, 0X5080);
    // 0x802480D8: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    // 0x802480DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802480E0: sb          $fp, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r30;
    // 0x802480E4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802480E8: jal         0x8009A3B4
    // 0x802480EC: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802480EC: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    after_2:
    // 0x802480F0: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x802480F4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x802480F8: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x802480FC: lhu         $v1, 0x5080($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5080);
    // 0x80248100: lhu         $a0, 0x8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8);
    // 0x80248104: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80248108: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024810C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80248110: lhu         $v0, 0x50C0($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X50C0);
    // 0x80248114: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80248118: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024811C: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x80248120: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x80248124: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80248128: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x8024812C: lhu         $v1, 0x5084($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5084);
    // 0x80248130: lhu         $a0, 0xC($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XC);
    // 0x80248134: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80248138: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024813C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80248140: lhu         $v0, 0x50C2($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X50C2);
    // 0x80248144: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80248148: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024814C: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    // 0x80248150: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80248154: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80248158: lhu         $v0, 0x5082($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5082);
    // 0x8024815C: lhu         $v1, 0xA($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XA);
    // 0x80248160: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80248164: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80248168: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024816C: jal         0x8002C678
    // 0x80248170: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_3;
    // 0x80248170: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_3:
    // 0x80248174: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80248178: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8024817C: jal         0x800319B4
    // 0x80248180: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x80248180: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_4:
    // 0x80248184: sw          $s6, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r22;
    // 0x80248188: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8024818C: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80248190: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x80248194: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x80248198: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8024819C: jal         0x80071A70
    // 0x802481A0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_80071A70_4CE70(rdram, ctx);
        goto after_5;
    // 0x802481A0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_5:
    // 0x802481A4: sw          $v0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r2;
L_802481A8:
    // 0x802481A8: slti        $v0, $s3, 0x2
    ctx->r2 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x802481AC: bne         $v0, $zero, L_80248088
    if (ctx->r2 != 0) {
        // 0x802481B0: nop
    
            goto L_80248088;
    }
    // 0x802481B0: nop

    // 0x802481B4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802481B8: lbu         $v0, -0x3B9A($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B9A);
    // 0x802481BC: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x802481C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802481C4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802481C8: sb          $v0, -0x3B9A($at)
    MEM_B(-0X3B9A, ctx->r1) = ctx->r2;
    // 0x802481CC: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
L_802481D0:
    // 0x802481D0: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x802481D4: bne         $v0, $zero, L_80248070
    if (ctx->r2 != 0) {
        // 0x802481D8: nop
    
            goto L_80248070;
    }
    // 0x802481D8: nop

L_802481DC:
    // 0x802481DC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x802481E0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x802481E4: slt         $v0, $s7, $t2
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x802481E8: bne         $v0, $zero, L_8024800C
    if (ctx->r2 != 0) {
        // 0x802481EC: nop
    
            goto L_8024800C;
    }
    // 0x802481EC: nop

L_802481F0:
    // 0x802481F0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x802481F4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x802481F8: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x802481FC: slt         $v0, $t3, $t2
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80248200: bne         $v0, $zero, L_80247FE8
    if (ctx->r2 != 0) {
        // 0x80248204: sw          $t3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r11;
            goto L_80247FE8;
    }
    // 0x80248204: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_80248208:
    // 0x80248208: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8024820C: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x80248210: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x80248214: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x80248218: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x8024821C: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x80248220: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x80248224: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x80248228: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x8024822C: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x80248230: jr          $ra
    // 0x80248234: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x80248234: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x80248238: nop

    // 0x8024823C: nop

;}
RECOMP_FUNC void func_802281A4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802281A8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802281AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802281B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802281B4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802281B8: bne         $v0, $zero, L_8022826C
    if (ctx->r2 != 0) {
        // 0x802281BC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022826C;
    }
    // 0x802281BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802281C0: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x802281C4: addiu       $s0, $s0, 0x1240
    ctx->r16 = ADD32(ctx->r16, 0X1240);
    // 0x802281C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802281CC: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802281D0: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x802281D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802281D8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802281DC: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x802281E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802281E4: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802281E8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802281EC: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x802281F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802281F4: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802281F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802281FC: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80228200: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228204: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80228208: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022820C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80228210: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228214: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80228218: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022821C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80228220: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228224: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80228228: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022822C: sb          $s1, 0x44D8($at)
    MEM_B(0X44D8, ctx->r1) = ctx->r17;
    // 0x80228230: jal         0x8005FA7C
    // 0x80228234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80228234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80228238: jal         0x8005FA7C
    // 0x8022823C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x8022823C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80228240: jal         0x8005FA7C
    // 0x80228244: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80228244: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_2:
    // 0x80228248: jal         0x8005FA7C
    // 0x8022824C: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x8022824C: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    after_3:
    // 0x80228250: jal         0x8005FA7C
    // 0x80228254: addiu       $a0, $s0, 0x50
    ctx->r4 = ADD32(ctx->r16, 0X50);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x80228254: addiu       $a0, $s0, 0x50
    ctx->r4 = ADD32(ctx->r16, 0X50);
    after_4:
    // 0x80228258: jal         0x8005FA7C
    // 0x8022825C: addiu       $a0, $s0, 0x64
    ctx->r4 = ADD32(ctx->r16, 0X64);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x8022825C: addiu       $a0, $s0, 0x64
    ctx->r4 = ADD32(ctx->r16, 0X64);
    after_5:
    // 0x80228260: jal         0x8005FA7C
    // 0x80228264: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_6;
    // 0x80228264: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    after_6:
    // 0x80228268: sb          $s1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r17;
L_8022826C:
    // 0x8022826C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228270: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228274: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228278: jr          $ra
    // 0x8022827C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022827C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226190_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226190: jr          $ra
    // 0x80226194: nop

    TRACE_RETURN()
    return;
    // 0x80226194: nop

;}
RECOMP_FUNC void func_80226540_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226540: lw          $v1, 0x50($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X50);
    // 0x80226544: lhu         $v0, 0x18($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X18);
    // 0x80226548: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8022654C: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x80226550: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226554: jr          $ra
    // 0x80226558: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80226558: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_80239CB4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239CB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80239CB8: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80239CBC: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x80239CC0: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x80239CC4: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80239CC8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80239CCC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80239CD0: lw          $v0, 0x44F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X44F8);
    // 0x80239CD4: jr          $ra
    // 0x80239CD8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80239CD8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80236A60_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236A60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236A64: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80236A68: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80236A6C: sb          $zero, 0x8($a1)
    MEM_B(0X8, ctx->r5) = 0;
    // 0x80236A70: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80236A74: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80236A78: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80236A7C: lw          $v0, 0x3DAC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3DAC);
    // 0x80236A80: jr          $ra
    // 0x80236A84: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80236A84: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80245310_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80245314: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80245318: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024531C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80245320: lbu         $t0, 0xB($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XB);
    // 0x80245324: lbu         $t1, 0xA($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XA);
    // 0x80245328: beq         $t0, $zero, L_802454A4
    if (ctx->r8 == 0) {
        // 0x8024532C: subu        $v1, $t0, $t1
        ctx->r3 = SUB32(ctx->r8, ctx->r9);
            goto L_802454A4;
    }
    // 0x8024532C: subu        $v1, $t0, $t1
    ctx->r3 = SUB32(ctx->r8, ctx->r9);
    // 0x80245330: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    // 0x80245334: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80245338: mflo        $a0
    ctx->r4 = lo;
    // 0x8024533C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80245340: nop

    // 0x80245344: mult        $v0, $t1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80245348: mflo        $v0
    ctx->r2 = lo;
    // 0x8024534C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80245350: nop

    // 0x80245354: div         $zero, $a0, $t0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r8)));
    // 0x80245358: bne         $t0, $zero, L_80245364
    if (ctx->r8 != 0) {
        // 0x8024535C: nop
    
            goto L_80245364;
    }
    // 0x8024535C: nop

    // 0x80245360: break       7
    do_break(2149864288);
L_80245364:
    // 0x80245364: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80245368: bne         $t0, $at, L_8024537C
    if (ctx->r8 != ctx->r1) {
        // 0x8024536C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8024537C;
    }
    // 0x8024536C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80245370: bne         $a0, $at, L_8024537C
    if (ctx->r4 != ctx->r1) {
        // 0x80245374: nop
    
            goto L_8024537C;
    }
    // 0x80245374: nop

    // 0x80245378: break       6
    do_break(2149864312);
L_8024537C:
    // 0x8024537C: mflo        $a0
    ctx->r4 = lo;
    // 0x80245380: lh          $a1, 0x2E($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2E);
    // 0x80245384: nop

    // 0x80245388: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024538C: mflo        $a1
    ctx->r5 = lo;
    // 0x80245390: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80245394: nop

    // 0x80245398: mult        $v0, $t1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024539C: mflo        $v0
    ctx->r2 = lo;
    // 0x802453A0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802453A4: nop

    // 0x802453A8: div         $zero, $a1, $t0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r8)));
    // 0x802453AC: bne         $t0, $zero, L_802453B8
    if (ctx->r8 != 0) {
        // 0x802453B0: nop
    
            goto L_802453B8;
    }
    // 0x802453B0: nop

    // 0x802453B4: break       7
    do_break(2149864372);
L_802453B8:
    // 0x802453B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802453BC: bne         $t0, $at, L_802453D0
    if (ctx->r8 != ctx->r1) {
        // 0x802453C0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802453D0;
    }
    // 0x802453C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802453C4: bne         $a1, $at, L_802453D0
    if (ctx->r5 != ctx->r1) {
        // 0x802453C8: nop
    
            goto L_802453D0;
    }
    // 0x802453C8: nop

    // 0x802453CC: break       6
    do_break(2149864396);
L_802453D0:
    // 0x802453D0: mflo        $a1
    ctx->r5 = lo;
    // 0x802453D4: lh          $a2, 0x30($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X30);
    // 0x802453D8: nop

    // 0x802453DC: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802453E0: mflo        $a2
    ctx->r6 = lo;
    // 0x802453E4: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x802453E8: nop

    // 0x802453EC: mult        $v0, $t1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802453F0: mflo        $v0
    ctx->r2 = lo;
    // 0x802453F4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x802453F8: nop

    // 0x802453FC: div         $zero, $a2, $t0
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r8)));
    // 0x80245400: bne         $t0, $zero, L_8024540C
    if (ctx->r8 != 0) {
        // 0x80245404: nop
    
            goto L_8024540C;
    }
    // 0x80245404: nop

    // 0x80245408: break       7
    do_break(2149864456);
L_8024540C:
    // 0x8024540C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80245410: bne         $t0, $at, L_80245424
    if (ctx->r8 != ctx->r1) {
        // 0x80245414: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80245424;
    }
    // 0x80245414: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80245418: bne         $a2, $at, L_80245424
    if (ctx->r6 != ctx->r1) {
        // 0x8024541C: nop
    
            goto L_80245424;
    }
    // 0x8024541C: nop

    // 0x80245420: break       6
    do_break(2149864480);
L_80245424:
    // 0x80245424: mflo        $a2
    ctx->r6 = lo;
    // 0x80245428: lh          $a3, 0x32($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X32);
    // 0x8024542C: nop

    // 0x80245430: mult        $a3, $v1
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80245434: mflo        $a3
    ctx->r7 = lo;
    // 0x80245438: lh          $v0, 0x1A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1A);
    // 0x8024543C: nop

    // 0x80245440: mult        $v0, $t1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80245444: mflo        $v0
    ctx->r2 = lo;
    // 0x80245448: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8024544C: nop

    // 0x80245450: div         $zero, $a3, $t0
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r8)));
    // 0x80245454: bne         $t0, $zero, L_80245460
    if (ctx->r8 != 0) {
        // 0x80245458: nop
    
            goto L_80245460;
    }
    // 0x80245458: nop

    // 0x8024545C: break       7
    do_break(2149864540);
L_80245460:
    // 0x80245460: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80245464: bne         $t0, $at, L_80245478
    if (ctx->r8 != ctx->r1) {
        // 0x80245468: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80245478;
    }
    // 0x80245468: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024546C: bne         $a3, $at, L_80245478
    if (ctx->r7 != ctx->r1) {
        // 0x80245470: nop
    
            goto L_80245478;
    }
    // 0x80245470: nop

    // 0x80245474: break       6
    do_break(2149864564);
L_80245478:
    // 0x80245478: mflo        $a3
    ctx->r7 = lo;
    // 0x8024547C: jal         0x80054984
    // 0x80245480: nop

    func_80054984_2FD84(rdram, ctx);
        goto after_0;
    // 0x80245480: nop

    after_0:
    // 0x80245484: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80245488: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8024548C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80245490: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80245494: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80245498: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8024549C: beq         $v1, $zero, L_802454AC
    if (ctx->r3 == 0) {
        // 0x802454A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802454AC;
    }
    // 0x802454A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802454A4:
    // 0x802454A4: jal         0x8004F4F8
    // 0x802454A8: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x802454A8: nop

    after_1:
L_802454AC:
    // 0x802454AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802454B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802454B4: jr          $ra
    // 0x802454B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802454B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226218_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226218: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022621C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226220: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226224: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226228: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022622C: bne         $v0, $zero, L_802262AC
    if (ctx->r2 != 0) {
        // 0x80226230: addiu       $s0, $zero, 0xE
        ctx->r16 = ADD32(0, 0XE);
            goto L_802262AC;
    }
    // 0x80226230: addiu       $s0, $zero, 0xE
    ctx->r16 = ADD32(0, 0XE);
    // 0x80226234: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x80226238: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8022623C: addiu       $s1, $s1, 0x380
    ctx->r17 = ADD32(ctx->r17, 0X380);
    // 0x80226240: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80226244: sh          $v1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r3;
    // 0x80226248: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x8022624C: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x80226250: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80226254: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x80226258: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x8022625C: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x80226260: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x80226264: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x80226268: sh          $zero, 0x58($v0)
    MEM_H(0X58, ctx->r2) = 0;
    // 0x8022626C: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x80226270: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x80226274: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_80226278:
    // 0x80226278: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022627C: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80226280: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80226284: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80226288: jal         0x8005FA7C
    // 0x8022628C: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8022628C: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    after_0:
    // 0x80226290: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x80226294: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80226298: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022629C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802262A0: slti        $v0, $v0, 0x12
    ctx->r2 = SIGNED(ctx->r2) < 0X12 ? 1 : 0;
    // 0x802262A4: bne         $v0, $zero, L_80226278
    if (ctx->r2 != 0) {
        // 0x802262A8: sll         $v0, $s0, 24
        ctx->r2 = S32(ctx->r16 << 24);
            goto L_80226278;
    }
    // 0x802262A8: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_802262AC:
    // 0x802262AC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802262B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802262B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802262B8: jr          $ra
    // 0x802262BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802262BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024A840_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A840: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8024A844: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8024A848: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024A84C: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8024A850: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8024A854: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8024A858: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8024A85C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8024A860: lbu         $a3, 0x1($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X1);
    // 0x8024A864: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x8024A868: addiu       $a2, $a2, 0x5230
    ctx->r6 = ADD32(ctx->r6, 0X5230);
    // 0x8024A86C: jal         0x8003F780
    // 0x8024A870: addiu       $s2, $s1, 0x28
    ctx->r18 = ADD32(ctx->r17, 0X28);
    func_8003F780_1AB80(rdram, ctx);
        goto after_0;
    // 0x8024A870: addiu       $s2, $s1, 0x28
    ctx->r18 = ADD32(ctx->r17, 0X28);
    after_0:
    // 0x8024A874: bne         $v0, $zero, L_8024AA68
    if (ctx->r2 != 0) {
        // 0x8024A878: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_8024AA68;
    }
    // 0x8024A878: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8024A87C: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x8024A880: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024A884: bne         $v0, $zero, L_8024AA68
    if (ctx->r2 != 0) {
        // 0x8024A888: nop
    
            goto L_8024AA68;
    }
    // 0x8024A888: nop

    // 0x8024A88C: lh          $v1, 0x2E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2E);
    // 0x8024A890: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8024A894: bne         $v0, $zero, L_8024A8A0
    if (ctx->r2 != 0) {
        // 0x8024A898: sll         $v0, $v1, 4
        ctx->r2 = S32(ctx->r3 << 4);
            goto L_8024A8A0;
    }
    // 0x8024A898: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8024A89C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8024A8A0:
    // 0x8024A8A0: sb          $v0, 0x40($s1)
    MEM_B(0X40, ctx->r17) = ctx->r2;
    // 0x8024A8A4: lbu         $a1, 0x18($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X18);
    // 0x8024A8A8: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x8024A8AC: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x8024A8B0: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x8024A8B4: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8024A8B8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8024A8BC: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8024A8C0: sw          $v1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r3;
    // 0x8024A8C4: lbu         $v0, 0x19($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X19);
    // 0x8024A8C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024A8CC: sb          $v0, 0x19($s2)
    MEM_B(0X19, ctx->r18) = ctx->r2;
    // 0x8024A8D0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8024A8D4: sltiu       $v0, $v0, 0x7
    ctx->r2 = ctx->r2 < 0X7 ? 1 : 0;
    // 0x8024A8D8: beql        $v0, $zero, L_8024A8E0
    if (ctx->r2 == 0) {
        // 0x8024A8DC: sb          $zero, 0x19($s2)
        MEM_B(0X19, ctx->r18) = 0;
            goto L_8024A8E0;
    }
    goto skip_0;
    // 0x8024A8DC: sb          $zero, 0x19($s2)
    MEM_B(0X19, ctx->r18) = 0;
    skip_0:
L_8024A8E0:
    // 0x8024A8E0: lbu         $v0, 0x19($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X19);
    // 0x8024A8E4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024A8E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A8EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024A8F0: lbu         $v0, 0x5220($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5220);
    // 0x8024A8F4: sb          $v0, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r2;
    // 0x8024A8F8: lbu         $v0, 0x19($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X19);
    // 0x8024A8FC: lhu         $v1, 0x24($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X24);
    // 0x8024A900: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024A904: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A908: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024A90C: lbu         $v0, 0x5221($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5221);
    // 0x8024A910: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8024A914: sh          $v1, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r3;
    // 0x8024A918: sb          $v0, 0x23($s1)
    MEM_B(0X23, ctx->r17) = ctx->r2;
    // 0x8024A91C: lhu         $v0, 0x1A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1A);
    // 0x8024A920: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024A924: andi        $a0, $v0, 0x3F
    ctx->r4 = ctx->r2 & 0X3F;
    // 0x8024A928: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x8024A92C: jal         0x800324B4
    // 0x8024A930: sh          $v0, 0x1A($s2)
    MEM_H(0X1A, ctx->r18) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8024A930: sh          $v0, 0x1A($s2)
    MEM_H(0X1A, ctx->r18) = ctx->r2;
    after_1:
    // 0x8024A934: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x8024A938: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8024A93C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8024A940: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8024A944: andi        $s0, $s0, 0xFFF
    ctx->r16 = ctx->r16 & 0XFFF;
    // 0x8024A948: jal         0x800324B4
    // 0x8024A94C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x8024A94C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8024A950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024A954: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8024A958: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024A95C: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x8024A960: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024A964: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8024A968: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024A96C: jal         0x80032498
    // 0x8024A970: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x8024A970: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    after_3:
    // 0x8024A974: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8024A978: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024A97C: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x8024A980: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024A984: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8024A988: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024A98C: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x8024A990: lhu         $a0, 0x4($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X4);
    // 0x8024A994: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x8024A998: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8024A99C: jal         0x800324B4
    // 0x8024A9A0: sh          $a0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r4;
    func_800324B4_D8B4(rdram, ctx);
        goto after_4;
    // 0x8024A9A0: sh          $a0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r4;
    after_4:
    // 0x8024A9A4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8024A9A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024A9AC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8024A9B0: lhu         $v0, 0x12($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X12);
    // 0x8024A9B4: lhu         $a0, 0x1C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1C);
    // 0x8024A9B8: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8024A9BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024A9C0: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x8024A9C4: sh          $a0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r4;
    // 0x8024A9C8: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x8024A9CC: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8024A9D0: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x8024A9D4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8024A9D8: addiu       $a1, $a1, 0x5230
    ctx->r5 = ADD32(ctx->r5, 0X5230);
    // 0x8024A9DC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x8024A9E0: lbu         $a3, 0x1($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X1);
    // 0x8024A9E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8024A9E8: jal         0x8003E964
    // 0x8024A9EC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_8003E964_19D64(rdram, ctx);
        goto after_5;
    // 0x8024A9EC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x8024A9F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8024A9F4: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8024A9F8: lh          $v1, 0x1E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1E);
    // 0x8024A9FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024AA00: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024AA04: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8024AA08: bnel        $v0, $zero, L_8024AA10
    if (ctx->r2 != 0) {
        // 0x8024AA0C: sh          $a0, 0x1E($s1)
        MEM_H(0X1E, ctx->r17) = ctx->r4;
            goto L_8024AA10;
    }
    goto skip_1;
    // 0x8024AA0C: sh          $a0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r4;
    skip_1:
L_8024AA10:
    // 0x8024AA10: lui         $v1, 0x6800
    ctx->r3 = S32(0X6800 << 16);
    // 0x8024AA14: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8024AA18: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8024AA1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8024AA20: lhu         $a1, 0x24($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X24);
    // 0x8024AA24: lbu         $t0, 0x1($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X1);
    // 0x8024AA28: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8024AA2C: addiu       $v0, $s2, 0x8
    ctx->r2 = ADD32(ctx->r18, 0X8);
    // 0x8024AA30: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8024AA34: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8024AA38: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8024AA3C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8024AA40: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8024AA44: jal         0x80051E18
    // 0x8024AA48: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x8024AA48: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_6:
    // 0x8024AA4C: lhu         $v0, 0x6($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X6);
    // 0x8024AA50: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    // 0x8024AA54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8024AA58: sh          $v0, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r2;
    // 0x8024AA5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024AA60: bne         $v0, $zero, L_8024AA74
    if (ctx->r2 != 0) {
        // 0x8024AA64: nop
    
            goto L_8024AA74;
    }
    // 0x8024AA64: nop

L_8024AA68:
    // 0x8024AA68: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8024AA6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024AA70: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8024AA74:
    // 0x8024AA74: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8024AA78: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8024AA7C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8024AA80: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8024AA84: jr          $ra
    // 0x8024AA88: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8024AA88: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802485A8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802485A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802485AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802485B0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802485B4: addiu       $a0, $zero, 0x5B
    ctx->r4 = ADD32(0, 0X5B);
    // 0x802485B8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802485BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802485C0: jal         0x8006033C
    // 0x802485C4: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802485C4: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    after_0:
    // 0x802485C8: beq         $v0, $zero, L_80248614
    if (ctx->r2 == 0) {
        // 0x802485CC: nop
    
            goto L_80248614;
    }
    // 0x802485CC: nop

    // 0x802485D0: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x802485D4: addiu       $s0, $s0, 0x5154
    ctx->r16 = ADD32(ctx->r16, 0X5154);
    // 0x802485D8: jal         0x8003E6BC
    // 0x802485DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x802485DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802485E0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802485E4: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x802485E8: jal         0x80071ACC
    // 0x802485EC: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_2;
    // 0x802485EC: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    after_2:
    // 0x802485F0: jal         0x8003E6BC
    // 0x802485F4: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_3;
    // 0x802485F4: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_3:
    // 0x802485F8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802485FC: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80248600: jal         0x80071ACC
    // 0x80248604: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_4;
    // 0x80248604: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
    after_4:
    // 0x80248608: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024860C: j           L_80248634
    // 0x80248610: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_80248634;
    // 0x80248610: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80248614:
    // 0x80248614: jal         0x802492D0
    // 0x80248618: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802492D0_ovl28(rdram, ctx);
        goto after_5;
    // 0x80248618: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8024861C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80248620: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248624: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x80248628: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8024862C: jal         0x8024932C
    // 0x80248630: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    func_8024932C_ovl28(rdram, ctx);
        goto after_6;
    // 0x80248630: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    after_6:
L_80248634:
    // 0x80248634: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80248638: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024863C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80248640: jr          $ra
    // 0x80248644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80248644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802275E8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802275E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802275EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802275F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802275F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802275F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802275FC: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80227600: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80227604: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80227608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022760C: beq         $v1, $v0, L_80227708
    if (ctx->r3 == ctx->r2) {
        // 0x80227610: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80227708;
    }
    // 0x80227610: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227614: beql        $v0, $zero, L_8022762C
    if (ctx->r2 == 0) {
        // 0x80227618: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022762C;
    }
    goto skip_0;
    // 0x80227618: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022761C: beq         $v1, $zero, L_8022763C
    if (ctx->r3 == 0) {
        // 0x80227620: addiu       $a0, $zero, 0x2E
        ctx->r4 = ADD32(0, 0X2E);
            goto L_8022763C;
    }
    // 0x80227620: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    // 0x80227624: j           L_80227750
    // 0x80227628: nop

        goto L_80227750;
    // 0x80227628: nop

L_8022762C:
    // 0x8022762C: beq         $v1, $v0, L_80227730
    if (ctx->r3 == ctx->r2) {
        // 0x80227630: nop
    
            goto L_80227730;
    }
    // 0x80227630: nop

    // 0x80227634: j           L_80227750
    // 0x80227638: nop

        goto L_80227750;
    // 0x80227638: nop

L_8022763C:
    // 0x8022763C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227640: jal         0x8002A2F8
    // 0x80227644: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80227644: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227648: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022764C: addiu       $a0, $zero, 0x17E
    ctx->r4 = ADD32(0, 0X17E);
    // 0x80227650: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80227654: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80227658: jal         0x8004CB2C
    // 0x8022765C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x8022765C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_1:
    // 0x80227660: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227664: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227668: jal         0x8005F6B4
    // 0x8022766C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_2;
    // 0x8022766C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80227670: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227674: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227678: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022767C: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80227680: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227684: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80227688: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022768C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227690: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80227694: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227698: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022769C: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802276A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802276A4: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802276A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802276AC: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802276B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802276B4: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802276B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802276BC: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802276C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802276C4: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802276C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802276CC: jal         0x80060170
    // 0x802276D0: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    func_80060170_3B570(rdram, ctx);
        goto after_3;
    // 0x802276D0: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    after_3:
    // 0x802276D4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802276D8: addiu       $a0, $a0, 0x11DC
    ctx->r4 = ADD32(ctx->r4, 0X11DC);
    // 0x802276DC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802276E0: addiu       $v0, $v0, 0x12CC
    ctx->r2 = ADD32(ctx->r2, 0X12CC);
    // 0x802276E4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802276E8: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802276EC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802276F0: addiu       $v0, $v0, 0x1880
    ctx->r2 = ADD32(ctx->r2, 0X1880);
    // 0x802276F4: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x802276F8: jal         0x8005FA7C
    // 0x802276FC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x802276FC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_4:
    // 0x80227700: j           L_80227720
    // 0x80227704: nop

        goto L_80227720;
    // 0x80227704: nop

L_80227708:
    // 0x80227708: jal         0x8006FF84
    // 0x8022770C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_5;
    // 0x8022770C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80227710: beq         $v0, $zero, L_80227750
    if (ctx->r2 == 0) {
        // 0x80227714: addiu       $a0, $zero, 0x100
        ctx->r4 = ADD32(0, 0X100);
            goto L_80227750;
    }
    // 0x80227714: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x80227718: jal         0x8004CB2C
    // 0x8022771C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_6;
    // 0x8022771C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_6:
L_80227720:
    // 0x80227720: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227724: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227728: j           L_80227750
    // 0x8022772C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80227750;
    // 0x8022772C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80227730:
    // 0x80227730: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227734: sw          $zero, 0x63A0($at)
    MEM_W(0X63A0, ctx->r1) = 0;
    // 0x80227738: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022773C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80227740: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80227744: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x80227748: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022774C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80227750:
    // 0x80227750: jal         0x8005FB90
    // 0x80227754: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_7;
    // 0x80227754: nop

    after_7:
    // 0x80227758: jal         0x80060018
    // 0x8022775C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_8;
    // 0x8022775C: nop

    after_8:
    // 0x80227760: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227764: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227768: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022776C: jr          $ra
    // 0x80227770: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227770: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024C2F0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C2F0: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8024C2F4: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x8024C2F8: ori         $a1, $a1, 0x2C
    ctx->r5 = ctx->r5 | 0X2C;
    // 0x8024C2FC: lui         $a0, 0x2EF0
    ctx->r4 = S32(0X2EF0 << 16);
    // 0x8024C300: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x8024C304: lbu         $a2, 0x3($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X3);
    // 0x8024C308: ori         $a0, $a0, 0x6868
    ctx->r4 = ctx->r4 | 0X6868;
    // 0x8024C30C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8024C310: sh          $v0, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r2;
    // 0x8024C314: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x8024C318: sw          $a1, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r5;
    // 0x8024C31C: sw          $a0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r4;
    // 0x8024C320: sb          $v0, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r2;
    // 0x8024C324: sb          $zero, 0xD($a3)
    MEM_B(0XD, ctx->r7) = 0;
    // 0x8024C328: ori         $v1, $v1, 0x22
    ctx->r3 = ctx->r3 | 0X22;
    // 0x8024C32C: beq         $a2, $zero, L_8024C384
    if (ctx->r6 == 0) {
        // 0x8024C330: sb          $v1, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r3;
            goto L_8024C384;
    }
    // 0x8024C330: sb          $v1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r3;
    // 0x8024C334: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024C338: lbu         $v0, 0x547C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X547C);
    // 0x8024C33C: lb          $v1, 0xD($a3)
    ctx->r3 = MEM_B(ctx->r7, 0XD);
    // 0x8024C340: sb          $v0, 0xE($a3)
    MEM_B(0XE, ctx->r7) = ctx->r2;
    // 0x8024C344: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024C348: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C34C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024C350: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C354: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C358: lhu         $v0, 0x5478($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X5478);
    // 0x8024C35C: lb          $v1, 0xD($a3)
    ctx->r3 = MEM_B(ctx->r7, 0XD);
    // 0x8024C360: sb          $v0, 0x22($a3)
    MEM_B(0X22, ctx->r7) = ctx->r2;
    // 0x8024C364: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024C368: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C36C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024C370: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C374: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C378: lhu         $v0, 0x547A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X547A);
    // 0x8024C37C: j           L_8024C3D0
    // 0x8024C380: sb          $v0, 0x23($a3)
    MEM_B(0X23, ctx->r7) = ctx->r2;
        goto L_8024C3D0;
    // 0x8024C380: sb          $v0, 0x23($a3)
    MEM_B(0X23, ctx->r7) = ctx->r2;
L_8024C384:
    // 0x8024C384: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024C388: lbu         $v0, 0x5464($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5464);
    // 0x8024C38C: lb          $v1, 0xD($a3)
    ctx->r3 = MEM_B(ctx->r7, 0XD);
    // 0x8024C390: sb          $v0, 0xE($a3)
    MEM_B(0XE, ctx->r7) = ctx->r2;
    // 0x8024C394: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024C398: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C39C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024C3A0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C3A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C3A8: lhu         $v0, 0x5460($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X5460);
    // 0x8024C3AC: lb          $v1, 0xD($a3)
    ctx->r3 = MEM_B(ctx->r7, 0XD);
    // 0x8024C3B0: sb          $v0, 0x22($a3)
    MEM_B(0X22, ctx->r7) = ctx->r2;
    // 0x8024C3B4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024C3B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C3BC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024C3C0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C3C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C3C8: lhu         $v0, 0x5462($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X5462);
    // 0x8024C3CC: sb          $v0, 0x23($a3)
    MEM_B(0X23, ctx->r7) = ctx->r2;
L_8024C3D0:
    // 0x8024C3D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024C3D4: sb          $v0, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r2;
    // 0x8024C3D8: jr          $ra
    // 0x8024C3DC: sb          $zero, 0xB($a3)
    MEM_B(0XB, ctx->r7) = 0;
    TRACE_RETURN()
    return;
    // 0x8024C3DC: sb          $zero, 0xB($a3)
    MEM_B(0XB, ctx->r7) = 0;
;}
RECOMP_FUNC void func_8024742C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024742C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80247430: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80247434: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80247438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024743C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80247440: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80247444: beq         $v0, $zero, L_802474FC
    if (ctx->r2 == 0) {
        // 0x80247448: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802474FC;
    }
    // 0x80247448: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8024744C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247450: addu        $at, $at, $v0
    gpr jr_addend_80247458 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80247454: lw          $v0, 0x62E8($at)
    ctx->r2 = ADD32(ctx->r1, 0X62E8);
    // 0x80247458: jr          $v0
    // 0x8024745C: nop

    switch (jr_addend_80247458 >> 2) {
        case 0: goto L_80247460; break;
        case 1: goto L_8024748C; break;
        case 2: goto L_802474B4; break;
        case 3: goto L_802474D8; break;
        case 4: goto L_802474FC; break;
        default: switch_error(__func__, 0x80247458, 0x802562E8);
    }
    // 0x8024745C: nop

L_80247460:
    // 0x80247460: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80247464: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80247468: bne         $v1, $v0, L_802474FC
    if (ctx->r3 != ctx->r2) {
        // 0x8024746C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802474FC;
    }
    // 0x8024746C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80247470: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80247474: bne         $v1, $v0, L_802474FC
    if (ctx->r3 != ctx->r2) {
        // 0x80247478: nop
    
            goto L_802474FC;
    }
    // 0x80247478: nop

    // 0x8024747C: jal         0x802476B0
    // 0x80247480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802476B0_ovl28(rdram, ctx);
        goto after_0;
    // 0x80247480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80247484: j           L_802474F0
    // 0x80247488: nop

        goto L_802474F0;
    // 0x80247488: nop

L_8024748C:
    // 0x8024748C: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x80247490: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x80247494: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x80247498: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
    // 0x8024749C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802474A0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802474A4: beq         $v0, $v1, L_802474F0
    if (ctx->r2 == ctx->r3) {
        // 0x802474A8: nop
    
            goto L_802474F0;
    }
    // 0x802474A8: nop

    // 0x802474AC: j           L_802474FC
    // 0x802474B0: nop

        goto L_802474FC;
    // 0x802474B0: nop

L_802474B4:
    // 0x802474B4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802474B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802474BC: bne         $v1, $v0, L_802474FC
    if (ctx->r3 != ctx->r2) {
        // 0x802474C0: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_802474FC;
    }
    // 0x802474C0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802474C4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802474C8: beq         $v1, $v0, L_802474F0
    if (ctx->r3 == ctx->r2) {
        // 0x802474CC: nop
    
            goto L_802474F0;
    }
    // 0x802474CC: nop

    // 0x802474D0: j           L_802474FC
    // 0x802474D4: nop

        goto L_802474FC;
    // 0x802474D4: nop

L_802474D8:
    // 0x802474D8: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x802474DC: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x802474E0: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
    // 0x802474E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802474E8: bne         $v0, $zero, L_802474FC
    if (ctx->r2 != 0) {
        // 0x802474EC: nop
    
            goto L_802474FC;
    }
    // 0x802474EC: nop

L_802474F0:
    // 0x802474F0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802474F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802474F8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802474FC:
    // 0x802474FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247500: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80247504: jr          $ra
    // 0x80247508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80247508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80246250_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246250: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80246254: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80246258: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024625C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80246260: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80246264: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80246268: bnel        $v0, $zero, L_802462C8
    if (ctx->r2 != 0) {
        // 0x8024626C: addiu       $a0, $s1, 0x54
        ctx->r4 = ADD32(ctx->r17, 0X54);
            goto L_802462C8;
    }
    goto skip_0;
    // 0x8024626C: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
    skip_0:
    // 0x80246270: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x80246274: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80246278: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8024627C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80246280: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80246284: jal         0x8009A3B4
    // 0x80246288: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80246288: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x8024628C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80246290: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x80246294: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
    // 0x80246298: jal         0x8004D5D4
    // 0x8024629C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8024629C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    after_1:
    // 0x802462A0: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    // 0x802462A4: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x802462A8: ori         $a0, $a0, 0x8080
    ctx->r4 = ctx->r4 | 0X8080;
    // 0x802462AC: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x802462B0: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x802462B4: sw          $a0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r4;
    // 0x802462B8: sw          $zero, 0x78($s1)
    MEM_W(0X78, ctx->r17) = 0;
    // 0x802462BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802462C0: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x802462C4: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
L_802462C8:
    // 0x802462C8: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x802462CC: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x802462D0: lh          $a2, 0x18($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X18);
    // 0x802462D4: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x802462D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802462DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802462E0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802462E4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x802462E8: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x802462EC: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x802462F0: jal         0x80031600
    // 0x802462F4: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x802462F4: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    after_2:
    // 0x802462F8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802462FC: addiu       $a1, $a1, 0x4CB0
    ctx->r5 = ADD32(ctx->r5, 0X4CB0);
    // 0x80246300: jal         0x80031DA8
    // 0x80246304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x80246304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80246308: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x8024630C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80246310: jal         0x8009A3B4
    // 0x80246314: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80246314: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80246318: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024631C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80246320: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80246324: jr          $ra
    // 0x80246328: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80246328: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8024632C: nop

;}
RECOMP_FUNC void func_8023B674_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B678: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B67C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B680: jal         0x8005044C
    // 0x8023B684: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x8023B684: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8023B688: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B68C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8023B690: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8023B694: beq         $v1, $v0, L_8023B704
    if (ctx->r3 == ctx->r2) {
        // 0x8023B698: slti        $v0, $v1, 0x79
        ctx->r2 = SIGNED(ctx->r3) < 0X79 ? 1 : 0;
            goto L_8023B704;
    }
    // 0x8023B698: slti        $v0, $v1, 0x79
    ctx->r2 = SIGNED(ctx->r3) < 0X79 ? 1 : 0;
    // 0x8023B69C: beql        $v0, $zero, L_8023B6B4
    if (ctx->r2 == 0) {
        // 0x8023B6A0: addiu       $v0, $zero, 0x82
        ctx->r2 = ADD32(0, 0X82);
            goto L_8023B6B4;
    }
    goto skip_0;
    // 0x8023B6A0: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    skip_0:
    // 0x8023B6A4: beql        $v1, $zero, L_8023B6CC
    if (ctx->r3 == 0) {
        // 0x8023B6A8: sb          $zero, 0x8($s0)
        MEM_B(0X8, ctx->r16) = 0;
            goto L_8023B6CC;
    }
    goto skip_1;
    // 0x8023B6A8: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    skip_1:
    // 0x8023B6AC: j           L_8023B718
    // 0x8023B6B0: nop

        goto L_8023B718;
    // 0x8023B6B0: nop

L_8023B6B4:
    // 0x8023B6B4: beq         $v1, $v0, L_8023B6F0
    if (ctx->r3 == ctx->r2) {
        // 0x8023B6B8: addiu       $v0, $zero, 0xBE
        ctx->r2 = ADD32(0, 0XBE);
            goto L_8023B6F0;
    }
    // 0x8023B6B8: addiu       $v0, $zero, 0xBE
    ctx->r2 = ADD32(0, 0XBE);
    // 0x8023B6BC: beql        $v1, $v0, L_8023B708
    if (ctx->r3 == ctx->r2) {
        // 0x8023B6C0: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_8023B708;
    }
    goto skip_2;
    // 0x8023B6C0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_2:
    // 0x8023B6C4: j           L_8023B718
    // 0x8023B6C8: nop

        goto L_8023B718;
    // 0x8023B6C8: nop

L_8023B6CC:
    // 0x8023B6CC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B6D0: lw          $v0, 0x45DC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X45DC);
    // 0x8023B6D4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023B6D8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023B6DC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8023B6E0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B6E4: lw          $v0, 0x4668($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4668);
    // 0x8023B6E8: j           L_8023B714
    // 0x8023B6EC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_8023B714;
    // 0x8023B6EC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023B6F0:
    // 0x8023B6F0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023B6F4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B6F8: lw          $v0, 0x4668($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4668);
    // 0x8023B6FC: j           L_8023B714
    // 0x8023B700: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_8023B714;
    // 0x8023B700: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023B704:
    // 0x8023B704: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8023B708:
    // 0x8023B708: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B70C: lw          $v0, 0x465C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X465C);
    // 0x8023B710: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023B714:
    // 0x8023B714: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_8023B718:
    // 0x8023B718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B71C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B720: jr          $ra
    // 0x8023B724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AE44_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE44: jr          $ra
    // 0x8022AE48: nop

    TRACE_RETURN()
    return;
    // 0x8022AE48: nop

;}
RECOMP_FUNC void func_802426C0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802426C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802426C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802426C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802426CC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802426D0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802426D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802426D8: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x802426DC: lhu         $a3, 0x20($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X20);
    // 0x802426E0: lhu         $t0, 0x24($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X24);
    // 0x802426E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802426E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802426EC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802426F0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802426F4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802426F8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802426FC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80242700: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80242704: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80242708: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8024270C: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80242710: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x80242714: sh          $a3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r7;
    // 0x80242718: sh          $a3, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r7;
    // 0x8024271C: sh          $t0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r8;
    // 0x80242720: jal         0x8009A3B4
    // 0x80242724: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80242724: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    after_0:
    // 0x80242728: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8024272C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80242730: jal         0x8009A3B4
    // 0x80242734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80242734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80242738: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8024273C: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x80242740: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    // 0x80242744: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80242748: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x8024274C: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x80242750: subu        $a0, $v1, $a0
    ctx->r4 = SUB32(ctx->r3, ctx->r4);
    // 0x80242754: jal         0x80032664
    // 0x80242758: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    func_80032664_DA64(rdram, ctx);
        goto after_2;
    // 0x80242758: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    after_2:
    // 0x8024275C: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x80242760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242764: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80242768: jr          $ra
    // 0x8024276C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024276C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80242770_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242770: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80242774: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80242778: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024277C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80242780: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80242784: jal         0x80053ED8
    // 0x80242788: lbu         $a0, 0xF($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XF);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80242788: lbu         $a0, 0xF($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XF);
    after_0:
    // 0x8024278C: jal         0x8004F144
    // 0x80242790: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80242790: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80242794: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80242798: beq         $v1, $zero, L_8024280C
    if (ctx->r3 == 0) {
        // 0x8024279C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024280C;
    }
    // 0x8024279C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802427A0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802427A4: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x802427A8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802427AC: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x802427B0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x802427B4: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x802427B8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802427BC: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x802427C0: lw          $v0, 0xD0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD0);
    // 0x802427C4: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x802427C8: lhu         $v0, 0x188($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X188);
    // 0x802427CC: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x802427D0: lhu         $v0, 0x18A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18A);
    // 0x802427D4: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x802427D8: lhu         $v0, 0x18C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18C);
    // 0x802427DC: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x802427E0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802427E4: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x802427E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802427EC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802427F0: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x802427F4: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x802427F8: bne         $v1, $zero, L_8024280C
    if (ctx->r3 != 0) {
        // 0x802427FC: sb          $v0, 0xC($s0)
        MEM_B(0XC, ctx->r16) = ctx->r2;
            goto L_8024280C;
    }
    // 0x802427FC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80242800: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80242804: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80242808: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8024280C:
    // 0x8024280C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80242810: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80242814: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80242818: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024281C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80242820: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80242824: jr          $ra
    // 0x80242828: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80242828: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024BA5C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024BA5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024BA60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024BA64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024BA68: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024BA6C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024BA70: jal         0x80053ED8
    // 0x8024BA74: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8024BA74: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x8024BA78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024BA7C: jal         0x8024BB30
    // 0x8024BA80: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_8024BB30_ovl28(rdram, ctx);
        goto after_1;
    // 0x8024BA80: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8024BA84: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8024BA88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024BA8C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8024BA90: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024BA94: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8024BA98: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8024BA9C: beql        $v0, $zero, L_8024BAA4
    if (ctx->r2 == 0) {
        // 0x8024BAA0: sb          $zero, 0xF($s0)
        MEM_B(0XF, ctx->r16) = 0;
            goto L_8024BAA4;
    }
    goto skip_0;
    // 0x8024BAA0: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    skip_0:
L_8024BAA4:
    // 0x8024BAA4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8024BAA8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024BAAC: bne         $v0, $zero, L_8024BABC
    if (ctx->r2 != 0) {
        // 0x8024BAB0: nop
    
            goto L_8024BABC;
    }
    // 0x8024BAB0: nop

    // 0x8024BAB4: jal         0x8004F5C4
    // 0x8024BAB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x8024BAB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8024BABC:
    // 0x8024BABC: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x8024BAC0: beq         $v0, $zero, L_8024BACC
    if (ctx->r2 == 0) {
        // 0x8024BAC4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024BACC;
    }
    // 0x8024BAC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024BAC8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8024BACC:
    // 0x8024BACC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024BAD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024BAD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024BAD8: jr          $ra
    // 0x8024BADC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024BADC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B324_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B324: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022B328: bne         $v0, $zero, L_8022B38C
    if (ctx->r2 != 0) {
        // 0x8022B32C: nop
    
            goto L_8022B38C;
    }
    // 0x8022B32C: nop

    // 0x8022B330: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022B334: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8022B338: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022B33C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022B340: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022B344: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x8022B348: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022B34C: addiu       $v1, $zero, -0xC1
    ctx->r3 = ADD32(0, -0XC1);
    // 0x8022B350: sh          $v1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r3;
    // 0x8022B354: addiu       $v1, $zero, 0x620
    ctx->r3 = ADD32(0, 0X620);
    // 0x8022B358: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x8022B35C: lui         $v1, 0xFF3F
    ctx->r3 = S32(0XFF3F << 16);
    // 0x8022B360: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022B364: lui         $v1, 0x620
    ctx->r3 = S32(0X620 << 16);
    // 0x8022B368: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8022B36C: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x8022B370: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x8022B374: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x8022B378: sh          $zero, 0x58($v0)
    MEM_H(0X58, ctx->r2) = 0;
    // 0x8022B37C: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x8022B380: sh          $v1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r3;
    // 0x8022B384: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022B388: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
L_8022B38C:
    // 0x8022B38C: jr          $ra
    // 0x8022B390: nop

    TRACE_RETURN()
    return;
    // 0x8022B390: nop

;}
RECOMP_FUNC void func_8024BB30_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024BB30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024BB34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024BB38: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024BB3C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024BB40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024BB44: jal         0x80053ED8
    // 0x8024BB48: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8024BB48: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    after_0:
    // 0x8024BB4C: lhu         $v1, 0x38($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X38);
    // 0x8024BB50: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8024BB54: lw          $a2, -0x3A2C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3A2C);
    // 0x8024BB58: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x8024BB5C: lhu         $v1, 0x3A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X3A);
    // 0x8024BB60: lh          $a0, 0x1C($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X1C);
    // 0x8024BB64: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x8024BB68: lhu         $a1, 0x3C($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X3C);
    // 0x8024BB6C: sh          $a1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r5;
    // 0x8024BB70: lh          $v0, 0x14($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X14);
    // 0x8024BB74: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
    // 0x8024BB78: lh          $v0, 0x18($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X18);
    // 0x8024BB7C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8024BB80: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8024BB84: jal         0x80032664
    // 0x8024BB88: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    func_80032664_DA64(rdram, ctx);
        goto after_1;
    // 0x8024BB88: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    after_1:
    // 0x8024BB8C: andi        $s0, $v0, 0xFFF
    ctx->r16 = ctx->r2 & 0XFFF;
    // 0x8024BB90: jal         0x800324B4
    // 0x8024BB94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x8024BB94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8024BB98: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x8024BB9C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024BBA0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024BBA4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024BBA8: lh          $v1, 0x5336($at)
    ctx->r3 = MEM_H(ctx->r1, 0X5336);
    // 0x8024BBAC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024BBB0: mflo        $v0
    ctx->r2 = lo;
    // 0x8024BBB4: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x8024BBB8: lb          $a0, 0xE($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XE);
    // 0x8024BBBC: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8024BBC0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024BBC4: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x8024BBC8: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x8024BBCC: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x8024BBD0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024BBD4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8024BBD8: lhu         $v1, 0x5338($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5338);
    // 0x8024BBDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024BBE0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8024BBE4: jal         0x80032498
    // 0x8024BBE8: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x8024BBE8: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    after_3:
    // 0x8024BBEC: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x8024BBF0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024BBF4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024BBF8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024BBFC: lh          $v1, 0x5336($at)
    ctx->r3 = MEM_H(ctx->r1, 0X5336);
    // 0x8024BC00: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024BC04: mflo        $v0
    ctx->r2 = lo;
    // 0x8024BC08: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x8024BC0C: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x8024BC10: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8024BC14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024BC18: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x8024BC1C: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x8024BC20: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    // 0x8024BC24: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024BC28: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8024BC2C: lbu         $v1, 0x52B8($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X52B8);
    // 0x8024BC30: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024BC34: sb          $v1, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r3;
    // 0x8024BC38: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024BC3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024BC40: lbu         $v1, 0x52B9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X52B9);
    // 0x8024BC44: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x8024BC48: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024BC4C: sb          $v1, 0x23($s1)
    MEM_B(0X23, ctx->r17) = ctx->r3;
    // 0x8024BC50: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024BC54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024BC58: lhu         $v1, 0x5334($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5334);
    // 0x8024BC5C: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8024BC60: lui         $a3, 0x3DC0
    ctx->r7 = S32(0X3DC0 << 16);
    // 0x8024BC64: sh          $v1, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r3;
    // 0x8024BC68: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8024BC6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BC70: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x8024BC74: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8024BC78: lw          $a2, 0x5314($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5314);
    // 0x8024BC7C: ori         $a3, $a3, 0x2E
    ctx->r7 = ctx->r7 | 0X2E;
    // 0x8024BC80: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x8024BC84: sw          $a3, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r7;
    // 0x8024BC88: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024BC8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024BC90: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x8024BC94: sll         $v1, $v0, 17
    ctx->r3 = S32(ctx->r2 << 17);
    // 0x8024BC98: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8024BC9C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8024BCA0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8024BCA4: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8024BCA8: sw          $v1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r3;
    // 0x8024BCAC: sh          $a2, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r6;
    // 0x8024BCB0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8024BCB4: lw          $v0, -0x3A48($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A48);
    // 0x8024BCB8: lui         $a0, 0xFFFF
    ctx->r4 = S32(0XFFFF << 16);
    // 0x8024BCBC: lui         $v1, 0x1B
    ctx->r3 = S32(0X1B << 16);
    // 0x8024BCC0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8024BCC4: bne         $v0, $v1, L_8024BCE4
    if (ctx->r2 != ctx->r3) {
        // 0x8024BCC8: nop
    
            goto L_8024BCE4;
    }
    // 0x8024BCC8: nop

    // 0x8024BCCC: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8024BCD0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BCD4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024BCD8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024BCDC: lw          $v0, 0x5324($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5324);
    // 0x8024BCE0: sh          $v0, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r2;
L_8024BCE4:
    // 0x8024BCE4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8024BCE8: lw          $v0, -0x3A48($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A48);
    // 0x8024BCEC: lui         $v1, 0x1C
    ctx->r3 = S32(0X1C << 16);
    // 0x8024BCF0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8024BCF4: bne         $v0, $v1, L_8024BD14
    if (ctx->r2 != ctx->r3) {
        // 0x8024BCF8: nop
    
            goto L_8024BD14;
    }
    // 0x8024BCF8: nop

    // 0x8024BCFC: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8024BD00: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BD04: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024BD08: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024BD0C: lw          $v0, 0x5324($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5324);
    // 0x8024BD10: sh          $v0, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r2;
L_8024BD14:
    // 0x8024BD14: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024BD18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024BD1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024BD20: jr          $ra
    // 0x8024BD24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024BD24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8024BD28: nop

    // 0x8024BD2C: nop

;}
RECOMP_FUNC void func_80246450_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246450: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80246454: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x80246458: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x8024645C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80246460: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80246464: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80246468: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8024646C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80246470: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80246474: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80246478: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024647C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80246480: lw          $s4, 0x14($fp)
    ctx->r20 = MEM_W(ctx->r30, 0X14);
    // 0x80246484: lh          $v1, 0x0($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X0);
    // 0x80246488: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8024648C: beq         $v1, $v0, L_80246860
    if (ctx->r3 == ctx->r2) {
        // 0x80246490: addiu       $s7, $fp, 0x14
        ctx->r23 = ADD32(ctx->r30, 0X14);
            goto L_80246860;
    }
    // 0x80246490: addiu       $s7, $fp, 0x14
    ctx->r23 = ADD32(ctx->r30, 0X14);
    // 0x80246494: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
    // 0x80246498: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x8024649C: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x802464A0: addiu       $s2, $s4, 0x8
    ctx->r18 = ADD32(ctx->r20, 0X8);
L_802464A4:
    // 0x802464A4: lbu         $v0, 0x8($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X8);
    // 0x802464A8: lh          $v1, -0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, -0X6);
    // 0x802464AC: sll         $a2, $v0, 24
    ctx->r6 = S32(ctx->r2 << 24);
    // 0x802464B0: sra         $v0, $a2, 24
    ctx->r2 = S32(SIGNED(ctx->r6) >> 24);
    // 0x802464B4: beq         $v1, $v0, L_8024674C
    if (ctx->r3 == ctx->r2) {
        // 0x802464B8: nop
    
            goto L_8024674C;
    }
    // 0x802464B8: nop

    // 0x802464BC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802464C0: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x802464C4: lb          $a0, -0x4($s2)
    ctx->r4 = MEM_B(ctx->r18, -0X4);
    // 0x802464C8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802464CC: lhu         $v1, 0x49C8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C8);
    // 0x802464D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802464D4: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x802464D8: subu        $a1, $v0, $a0
    ctx->r5 = SUB32(ctx->r2, ctx->r4);
    // 0x802464DC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802464E0: lb          $a0, -0x3($s2)
    ctx->r4 = MEM_B(ctx->r18, -0X3);
    // 0x802464E4: lbu         $v0, -0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X2);
    // 0x802464E8: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x802464EC: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x802464F0: beq         $v0, $zero, L_8024684C
    if (ctx->r2 == 0) {
        // 0x802464F4: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_8024684C;
    }
    // 0x802464F4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x802464F8: lbu         $v0, -0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X1);
    // 0x802464FC: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80246500: beq         $v0, $zero, L_8024684C
    if (ctx->r2 == 0) {
        // 0x80246504: sra         $v1, $a2, 24
        ctx->r3 = S32(SIGNED(ctx->r6) >> 24);
            goto L_8024684C;
    }
    // 0x80246504: sra         $v1, $a2, 24
    ctx->r3 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80246508: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8024650C: beql        $v1, $v0, L_80246744
    if (ctx->r3 == ctx->r2) {
        // 0x80246510: sw          $s4, 0x4($s7)
        MEM_W(0X4, ctx->r23) = ctx->r20;
            goto L_80246744;
    }
    goto skip_0;
    // 0x80246510: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
    skip_0:
    // 0x80246514: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80246518: lbu         $v0, 0x6431($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6431);
    // 0x8024651C: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80246520: addiu       $s1, $s1, 0x6430
    ctx->r17 = ADD32(ctx->r17, 0X6430);
    // 0x80246524: beql        $v0, $s6, L_80246744
    if (ctx->r2 == ctx->r22) {
        // 0x80246528: sw          $s4, 0x4($s7)
        MEM_W(0X4, ctx->r23) = ctx->r20;
            goto L_80246744;
    }
    goto skip_1;
    // 0x80246528: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
    skip_1:
    // 0x8024652C: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_80246530:
    // 0x80246530: jal         0x8004DA68
    // 0x80246534: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x80246534: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_0:
    // 0x80246538: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024653C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80246540: beq         $v1, $v0, L_802465E4
    if (ctx->r3 == ctx->r2) {
        // 0x80246544: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_802465E4;
    }
    // 0x80246544: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x80246548: beq         $v0, $zero, L_80246560
    if (ctx->r2 == 0) {
        // 0x8024654C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80246560;
    }
    // 0x8024654C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80246550: beq         $v1, $v0, L_8024657C
    if (ctx->r3 == ctx->r2) {
        // 0x80246554: nop
    
            goto L_8024657C;
    }
    // 0x80246554: nop

    // 0x80246558: j           L_80246734
    // 0x8024655C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80246734;
    // 0x8024655C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80246560:
    // 0x80246560: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80246564: beq         $v1, $v0, L_8024664C
    if (ctx->r3 == ctx->r2) {
        // 0x80246568: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8024664C;
    }
    // 0x80246568: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8024656C: beq         $v1, $v0, L_802466A4
    if (ctx->r3 == ctx->r2) {
        // 0x80246570: nop
    
            goto L_802466A4;
    }
    // 0x80246570: nop

    // 0x80246574: j           L_80246734
    // 0x80246578: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80246734;
    // 0x80246578: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8024657C:
    // 0x8024657C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80246580: jal         0x80053ED8
    // 0x80246584: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_1;
    // 0x80246584: nop

    after_1:
    // 0x80246588: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8024658C: lw          $v1, -0x714C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X714C);
    // 0x80246590: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80246594: lw          $a0, 0x6424($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6424);
    // 0x80246598: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8024659C: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x802465A0: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x802465A4: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x802465A8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802465AC: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x802465B0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802465B4: bne         $v0, $zero, L_802466E4
    if (ctx->r2 != 0) {
        // 0x802465B8: nop
    
            goto L_802466E4;
    }
    // 0x802465B8: nop

    // 0x802465BC: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x802465C0: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x802465C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802465C8: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x802465CC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802465D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802465D4: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802465D8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x802465DC: j           L_80246724
    // 0x802465E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80246724;
    // 0x802465E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_802465E4:
    // 0x802465E4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x802465E8: jal         0x80053ED8
    // 0x802465EC: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x802465EC: nop

    after_2:
    // 0x802465F0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x802465F4: lw          $v1, -0x7798($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7798);
    // 0x802465F8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802465FC: lw          $a0, 0x6420($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6420);
    // 0x80246600: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x80246604: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x80246608: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8024660C: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80246610: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80246614: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x80246618: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8024661C: bne         $v0, $zero, L_802466E4
    if (ctx->r2 != 0) {
        // 0x80246620: nop
    
            goto L_802466E4;
    }
    // 0x80246620: nop

    // 0x80246624: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x80246628: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x8024662C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80246630: lw          $v0, -0x22A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22A0);
    // 0x80246634: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80246638: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024663C: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80246640: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80246644: j           L_80246724
    // 0x80246648: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80246724;
    // 0x80246648: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8024664C:
    // 0x8024664C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80246650: jal         0x80053ED8
    // 0x80246654: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_3;
    // 0x80246654: nop

    after_3:
    // 0x80246658: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8024665C: lw          $v1, -0x781C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X781C);
    // 0x80246660: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80246664: lw          $a0, 0x6428($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6428);
    // 0x80246668: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8024666C: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x80246670: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80246674: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80246678: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8024667C: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x80246680: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80246684: bne         $v0, $zero, L_802466E4
    if (ctx->r2 != 0) {
        // 0x80246688: nop
    
            goto L_802466E4;
    }
    // 0x80246688: nop

    // 0x8024668C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80246690: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x80246694: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80246698: lw          $v1, -0x26A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26A8);
    // 0x8024669C: j           L_80246724
    // 0x802466A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80246724;
    // 0x802466A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_802466A4:
    // 0x802466A4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x802466A8: jal         0x80053ED8
    // 0x802466AC: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_4;
    // 0x802466AC: nop

    after_4:
    // 0x802466B0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x802466B4: lw          $v1, -0x72C8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X72C8);
    // 0x802466B8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802466BC: lw          $a0, 0x642C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X642C);
    // 0x802466C0: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x802466C4: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x802466C8: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x802466CC: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x802466D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802466D4: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x802466D8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802466DC: beq         $v0, $zero, L_80246710
    if (ctx->r2 == 0) {
        // 0x802466E0: nop
    
            goto L_80246710;
    }
    // 0x802466E0: nop

L_802466E4:
    // 0x802466E4: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x802466E8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802466EC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802466F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802466F4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802466F8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802466FC: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x80246700: jal         0x8006036C
    // 0x80246704: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80246704: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    after_5:
    // 0x80246708: j           L_80246734
    // 0x8024670C: nop

        goto L_80246734;
    // 0x8024670C: nop

L_80246710:
    // 0x80246710: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80246714: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x80246718: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8024671C: lw          $v1, -0x2344($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2344);
    // 0x80246720: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80246724:
    // 0x80246724: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80246728: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8024672C: jalr        $v0
    // 0x80246730: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80246730: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    after_6:
L_80246734:
    // 0x80246734: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80246738: bne         $v0, $s6, L_80246530
    if (ctx->r2 != ctx->r22) {
        // 0x8024673C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80246530;
    }
    // 0x8024673C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80246740: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
L_80246744:
    // 0x80246744: j           L_8024684C
    // 0x80246748: sb          $s5, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r21;
        goto L_8024684C;
    // 0x80246748: sb          $s5, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r21;
L_8024674C:
    // 0x8024674C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80246750: lbu         $v0, 0x6431($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6431);
    // 0x80246754: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80246758: addiu       $s1, $s1, 0x6430
    ctx->r17 = ADD32(ctx->r17, 0X6430);
    // 0x8024675C: beql        $v0, $s6, L_80246850
    if (ctx->r2 == ctx->r22) {
        // 0x80246760: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_80246850;
    }
    goto skip_2;
    // 0x80246760: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    skip_2:
    // 0x80246764: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_80246768:
    // 0x80246768: jal         0x8004DA68
    // 0x8024676C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_7;
    // 0x8024676C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_7:
    // 0x80246770: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80246774: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80246778: beq         $v1, $v0, L_802467C8
    if (ctx->r3 == ctx->r2) {
        // 0x8024677C: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_802467C8;
    }
    // 0x8024677C: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x80246780: beq         $v0, $zero, L_80246798
    if (ctx->r2 == 0) {
        // 0x80246784: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80246798;
    }
    // 0x80246784: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80246788: beq         $v1, $v0, L_802467B4
    if (ctx->r3 == ctx->r2) {
        // 0x8024678C: nop
    
            goto L_802467B4;
    }
    // 0x8024678C: nop

    // 0x80246790: j           L_80246840
    // 0x80246794: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80246840;
    // 0x80246794: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80246798:
    // 0x80246798: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8024679C: beq         $v1, $v0, L_802467DC
    if (ctx->r3 == ctx->r2) {
        // 0x802467A0: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_802467DC;
    }
    // 0x802467A0: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x802467A4: beq         $v1, $v0, L_802467F0
    if (ctx->r3 == ctx->r2) {
        // 0x802467A8: nop
    
            goto L_802467F0;
    }
    // 0x802467A8: nop

    // 0x802467AC: j           L_80246840
    // 0x802467B0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80246840;
    // 0x802467B0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_802467B4:
    // 0x802467B4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802467B8: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x802467BC: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802467C0: j           L_80246800
    // 0x802467C4: lw          $v1, 0x6424($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6424);
        goto L_80246800;
    // 0x802467C4: lw          $v1, 0x6424($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6424);
L_802467C8:
    // 0x802467C8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802467CC: lw          $v0, -0x7798($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7798);
    // 0x802467D0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802467D4: j           L_80246800
    // 0x802467D8: lw          $v1, 0x6420($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6420);
        goto L_80246800;
    // 0x802467D8: lw          $v1, 0x6420($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6420);
L_802467DC:
    // 0x802467DC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802467E0: lw          $v0, -0x781C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X781C);
    // 0x802467E4: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802467E8: j           L_80246800
    // 0x802467EC: lw          $v1, 0x6428($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6428);
        goto L_80246800;
    // 0x802467EC: lw          $v1, 0x6428($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6428);
L_802467F0:
    // 0x802467F0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802467F4: lw          $v0, -0x72C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X72C8);
    // 0x802467F8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802467FC: lw          $v1, 0x642C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X642C);
L_80246800:
    // 0x80246800: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80246804: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x80246808: and         $v1, $v0, $v1
    ctx->r3 = ctx->r2 & ctx->r3;
    // 0x8024680C: andi        $a1, $a0, 0x1F
    ctx->r5 = ctx->r4 & 0X1F;
    // 0x80246810: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x80246814: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80246818: beq         $v0, $zero, L_80246840
    if (ctx->r2 == 0) {
        // 0x8024681C: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_80246840;
    }
    // 0x8024681C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80246820: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x80246824: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80246828: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8024682C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80246830: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80246834: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80246838: jal         0x8006036C
    // 0x8024683C: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x8024683C: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    after_8:
L_80246840:
    // 0x80246840: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80246844: bne         $v0, $s6, L_80246768
    if (ctx->r2 != ctx->r22) {
        // 0x80246848: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80246768;
    }
    // 0x80246848: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_8024684C:
    // 0x8024684C: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
L_80246850:
    // 0x80246850: lh          $v1, 0x0($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X0);
    // 0x80246854: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80246858: bne         $v1, $v0, L_802464A4
    if (ctx->r3 != ctx->r2) {
        // 0x8024685C: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_802464A4;
    }
    // 0x8024685C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_80246860:
    // 0x80246860: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80246864: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x80246868: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8024686C: lw          $v1, -0x7798($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7798);
    // 0x80246870: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80246874: lw          $a0, -0x781C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X781C);
    // 0x80246878: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8024687C: lw          $a1, -0x72C8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X72C8);
    // 0x80246880: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246884: sw          $v0, 0x6424($at)
    MEM_W(0X6424, ctx->r1) = ctx->r2;
    // 0x80246888: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024688C: sw          $v1, 0x6420($at)
    MEM_W(0X6420, ctx->r1) = ctx->r3;
    // 0x80246890: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246894: sw          $a0, 0x6428($at)
    MEM_W(0X6428, ctx->r1) = ctx->r4;
    // 0x80246898: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024689C: sw          $a1, 0x642C($at)
    MEM_W(0X642C, ctx->r1) = ctx->r5;
    // 0x802468A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802468A4: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x802468A8: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x802468AC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x802468B0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802468B4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802468B8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802468BC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802468C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802468C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802468C8: jr          $ra
    // 0x802468CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802468CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8024A07C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A07C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024A080: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024A084: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024A088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024A08C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8024A090: addiu       $v1, $zero, 0x29
    ctx->r3 = ADD32(0, 0X29);
    // 0x8024A094: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8024A098: sb          $v1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r3;
    // 0x8024A09C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8024A0A0: jal         0x8004D5D4
    // 0x8024A0A4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8024A0A4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8024A0A8: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    // 0x8024A0AC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8024A0B0: ori         $a0, $a0, 0x8080
    ctx->r4 = ctx->r4 | 0X8080;
    // 0x8024A0B4: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
    // 0x8024A0B8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8024A0BC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8024A0C0: sw          $a0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r4;
    // 0x8024A0C4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8024A0C8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8024A0CC: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8024A0D0: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8024A0D4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024A0D8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024A0DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024A0E0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8024A0E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024A0E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024A0EC: jr          $ra
    // 0x8024A0F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024A0F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023CE48_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CE48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023CE4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023CE50: jal         0x8004F488
    // 0x8023CE54: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8023CE54: nop

    after_0:
    // 0x8023CE58: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023CE5C: jr          $ra
    // 0x8023CE60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023CE60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022542C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022542C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225430: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225434: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225438: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022543C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225440: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225444: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225448: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022544C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225450: lw          $v1, 0x308($at)
    ctx->r3 = MEM_W(ctx->r1, 0X308);
    // 0x80225454: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225458: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022545C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80225460: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225464: jalr        $v0
    // 0x80225468: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225468: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x8022546C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225470: jr          $ra
    // 0x80225474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233348_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233348: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023334C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233350: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233354: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233358: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023335C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80233360: beq         $v0, $zero, L_802333A0
    if (ctx->r2 == 0) {
        // 0x80233364: lui         $s1, 0x3800
        ctx->r17 = S32(0X3800 << 16);
            goto L_802333A0;
    }
    // 0x80233364: lui         $s1, 0x3800
    ctx->r17 = S32(0X3800 << 16);
    // 0x80233368: lw          $v0, 0x368($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X368);
    // 0x8023336C: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x80233370: beq         $v0, $zero, L_80233380
    if (ctx->r2 == 0) {
        // 0x80233374: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80233380;
    }
    // 0x80233374: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x80233378: jal         0x8002A33C
    // 0x8023337C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023337C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_80233380:
    // 0x80233380: lw          $v0, 0x378($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X378);
    // 0x80233384: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x80233388: beq         $v0, $zero, L_80233404
    if (ctx->r2 == 0) {
        // 0x8023338C: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80233404;
    }
    // 0x8023338C: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x80233390: jal         0x8002A33C
    // 0x80233394: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80233394: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80233398: j           L_80233404
    // 0x8023339C: nop

        goto L_80233404;
    // 0x8023339C: nop

L_802333A0:
    // 0x802333A0: jal         0x80233980
    // 0x802333A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233980_ovl28(rdram, ctx);
        goto after_2;
    // 0x802333A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802333A8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802333AC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802333B0: beq         $v0, $zero, L_802333E4
    if (ctx->r2 == 0) {
        // 0x802333B4: nop
    
            goto L_802333E4;
    }
    // 0x802333B4: nop

    // 0x802333B8: bgez        $v0, L_80233404
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802333BC: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80233404;
    }
    // 0x802333BC: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x802333C0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802333C4: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x802333C8: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x802333CC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802333D0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802333D4: sh          $zero, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = 0;
    // 0x802333D8: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x802333DC: j           L_80233420
    // 0x802333E0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_80233420;
    // 0x802333E0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_802333E4:
    // 0x802333E4: jal         0x80233818
    // 0x802333E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233818_ovl28(rdram, ctx);
        goto after_3;
    // 0x802333E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802333EC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802333F0: bgez        $v0, L_80233404
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802333F4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80233404;
    }
    // 0x802333F4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802333F8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802333FC: j           L_80233420
    // 0x80233400: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80233420;
    // 0x80233400: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80233404:
    // 0x80233404: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80233408: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023340C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80233410: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233414: lw          $v0, 0x3960($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3960);
    // 0x80233418: jalr        $v0
    // 0x8023341C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8023341C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80233420:
    // 0x80233420: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233424: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233428: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023342C: jr          $ra
    // 0x80233430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024932C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024932C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249330: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80249334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249338: jal         0x8004F2C4
    // 0x8024933C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x8024933C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80249340: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80249344: beq         $a0, $zero, L_802493A0
    if (ctx->r4 == 0) {
        // 0x80249348: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802493A0;
    }
    // 0x80249348: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024934C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80249350: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
    // 0x80249354: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80249358: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8024935C: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80249360: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80249364: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80249368: beq         $v1, $v0, L_8024937C
    if (ctx->r3 == ctx->r2) {
        // 0x8024936C: nop
    
            goto L_8024937C;
    }
    // 0x8024936C: nop

    // 0x80249370: lhu         $v0, 0x38($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X38);
    // 0x80249374: j           L_80249384
    // 0x80249378: addiu       $v0, $v0, 0x300
    ctx->r2 = ADD32(ctx->r2, 0X300);
        goto L_80249384;
    // 0x80249378: addiu       $v0, $v0, 0x300
    ctx->r2 = ADD32(ctx->r2, 0X300);
L_8024937C:
    // 0x8024937C: lhu         $v0, 0x38($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X38);
    // 0x80249380: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
L_80249384:
    // 0x80249384: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x80249388: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x8024938C: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x80249390: lhu         $v0, 0x3C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3C);
    // 0x80249394: sw          $s0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r16;
    // 0x80249398: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
    // 0x8024939C: sw          $a0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r4;
L_802493A0:
    // 0x802493A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802493A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802493A8: jr          $ra
    // 0x802493AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802493AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024C530_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C530: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8024C534: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8024C538: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8024C53C: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8024C540: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8024C544: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8024C548: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8024C54C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8024C550: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8024C554: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8024C558: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8024C55C: lbu         $v1, 0x8($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X8);
    // 0x8024C560: beq         $v1, $zero, L_8024C578
    if (ctx->r3 == 0) {
        // 0x8024C564: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024C578;
    }
    // 0x8024C564: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024C568: beq         $v1, $v0, L_8024C588
    if (ctx->r3 == ctx->r2) {
        // 0x8024C56C: nop
    
            goto L_8024C588;
    }
    // 0x8024C56C: nop

    // 0x8024C570: j           L_8024C738
    // 0x8024C574: nop

        goto L_8024C738;
    // 0x8024C574: nop

L_8024C578:
    // 0x8024C578: lbu         $v0, 0x8($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X8);
    // 0x8024C57C: sw          $zero, 0x28($s5)
    MEM_W(0X28, ctx->r21) = 0;
    // 0x8024C580: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C584: sb          $v0, 0x8($s5)
    MEM_B(0X8, ctx->r21) = ctx->r2;
L_8024C588:
    // 0x8024C588: lw          $v0, 0x28($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X28);
    // 0x8024C58C: lbu         $v1, 0x3($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X3);
    // 0x8024C590: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C594: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024C598: sw          $v0, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->r2;
    // 0x8024C59C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024C5A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C5A4: lw          $v0, 0x58E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X58E4);
    // 0x8024C5A8: lui         $s6, 0x8025
    ctx->r22 = S32(0X8025 << 16);
    // 0x8024C5AC: addu        $s6, $s6, $v1
    ctx->r22 = ADD32(ctx->r22, ctx->r3);
    // 0x8024C5B0: lw          $s6, 0x58E0($s6)
    ctx->r22 = MEM_W(ctx->r22, 0X58E0);
    // 0x8024C5B4: blez        $v0, L_8024C738
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8024C5B8: addu        $s7, $zero, $zero
        ctx->r23 = ADD32(0, 0);
            goto L_8024C738;
    }
    // 0x8024C5B8: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x8024C5BC: addiu       $s4, $s6, 0x11
    ctx->r20 = ADD32(ctx->r22, 0X11);
L_8024C5C0:
    // 0x8024C5C0: lh          $v1, -0x9($s4)
    ctx->r3 = MEM_H(ctx->r20, -0X9);
    // 0x8024C5C4: lw          $v0, 0x28($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X28);
    // 0x8024C5C8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024C5CC: mflo        $v1
    ctx->r3 = lo;
    // 0x8024C5D0: lh          $v0, 0x0($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X0);
    // 0x8024C5D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C5D8: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8024C5DC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8024C5E0: lh          $v1, -0x7($s4)
    ctx->r3 = MEM_H(ctx->r20, -0X7);
    // 0x8024C5E4: lw          $v0, 0x28($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X28);
    // 0x8024C5E8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024C5EC: mflo        $v1
    ctx->r3 = lo;
    // 0x8024C5F0: lh          $v0, -0xF($s4)
    ctx->r2 = MEM_H(ctx->r20, -0XF);
    // 0x8024C5F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C5F8: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8024C5FC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8024C600: lh          $v1, -0x5($s4)
    ctx->r3 = MEM_H(ctx->r20, -0X5);
    // 0x8024C604: lw          $v0, 0x28($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X28);
    // 0x8024C608: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024C60C: mflo        $v1
    ctx->r3 = lo;
    // 0x8024C610: lh          $v0, -0xD($s4)
    ctx->r2 = MEM_H(ctx->r20, -0XD);
    // 0x8024C614: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C618: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8024C61C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8024C620: lh          $v1, -0x3($s4)
    ctx->r3 = MEM_H(ctx->r20, -0X3);
    // 0x8024C624: lw          $v0, 0x28($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X28);
    // 0x8024C628: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024C62C: mflo        $v1
    ctx->r3 = lo;
    // 0x8024C630: lh          $v0, -0xB($s4)
    ctx->r2 = MEM_H(ctx->r20, -0XB);
    // 0x8024C634: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C638: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8024C63C: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x8024C640: lbu         $v0, -0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, -0X1);
    // 0x8024C644: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024C648: lui         $s2, 0x8025
    ctx->r18 = S32(0X8025 << 16);
    // 0x8024C64C: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x8024C650: lbu         $s2, 0x54B0($s2)
    ctx->r18 = MEM_BU(ctx->r18, 0X54B0);
    // 0x8024C654: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x8024C658: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x8024C65C: lbu         $s3, 0x54B2($s3)
    ctx->r19 = MEM_BU(ctx->r19, 0X54B2);
    // 0x8024C660: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x8024C664: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8024C668: lbu         $s0, 0x54B1($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X54B1);
    // 0x8024C66C: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8024C670: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8024C674: lbu         $s1, 0x54B3($s1)
    ctx->r17 = MEM_BU(ctx->r17, 0X54B3);
    // 0x8024C678: addu        $s3, $s2, $s3
    ctx->r19 = ADD32(ctx->r18, ctx->r19);
    // 0x8024C67C: jal         0x8003B878
    // 0x8024C680: addu        $s1, $s0, $s1
    ctx->r17 = ADD32(ctx->r16, ctx->r17);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8024C680: addu        $s1, $s0, $s1
    ctx->r17 = ADD32(ctx->r16, ctx->r17);
    after_0:
    // 0x8024C684: lui         $a1, 0x2C80
    ctx->r5 = S32(0X2C80 << 16);
    // 0x8024C688: lbu         $a0, 0x0($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0X0);
    // 0x8024C68C: ori         $a1, $a1, 0x8080
    ctx->r5 = ctx->r5 | 0X8080;
    // 0x8024C690: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x8024C694: andi        $s2, $s2, 0xFF
    ctx->r18 = ctx->r18 & 0XFF;
    // 0x8024C698: andi        $s3, $s3, 0xFF
    ctx->r19 = ctx->r19 & 0XFF;
    // 0x8024C69C: andi        $s1, $s1, 0xFF
    ctx->r17 = ctx->r17 & 0XFF;
    // 0x8024C6A0: sll         $s1, $s1, 8
    ctx->r17 = S32(ctx->r17 << 8);
    // 0x8024C6A4: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8024C6A8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8024C6AC: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8024C6B0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8024C6B4: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x8024C6B8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024C6BC: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8024C6C0: or          $v1, $s0, $s2
    ctx->r3 = ctx->r16 | ctx->r18;
    // 0x8024C6C4: or          $s0, $s0, $s3
    ctx->r16 = ctx->r16 | ctx->r19;
    // 0x8024C6C8: or          $s2, $s1, $s2
    ctx->r18 = ctx->r17 | ctx->r18;
    // 0x8024C6CC: or          $s1, $s1, $s3
    ctx->r17 = ctx->r17 | ctx->r19;
    // 0x8024C6D0: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x8024C6D4: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x8024C6D8: lh          $a1, 0x14($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X14);
    // 0x8024C6DC: lui         $a0, 0x3E40
    ctx->r4 = S32(0X3E40 << 16);
    // 0x8024C6E0: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8024C6E4: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8024C6E8: lui         $v1, 0x7
    ctx->r3 = S32(0X7 << 16);
    // 0x8024C6EC: or          $s0, $s0, $v1
    ctx->r16 = ctx->r16 | ctx->r3;
    // 0x8024C6F0: sw          $s0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r16;
    // 0x8024C6F4: sw          $s2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r18;
    // 0x8024C6F8: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x8024C6FC: sw          $s1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r17;
    // 0x8024C700: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8024C704: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x8024C708: lh          $v1, 0x16($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X16);
    // 0x8024C70C: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x8024C710: lbu         $v0, 0x3($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X3);
    // 0x8024C714: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8024C718: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024C71C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C720: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C724: lw          $v0, 0x58E4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X58E4);
    // 0x8024C728: addiu       $s6, $s6, 0x14
    ctx->r22 = ADD32(ctx->r22, 0X14);
    // 0x8024C72C: slt         $v0, $s7, $v0
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024C730: bne         $v0, $zero, L_8024C5C0
    if (ctx->r2 != 0) {
        // 0x8024C734: addiu       $s4, $s4, 0x14
        ctx->r20 = ADD32(ctx->r20, 0X14);
            goto L_8024C5C0;
    }
    // 0x8024C734: addiu       $s4, $s4, 0x14
    ctx->r20 = ADD32(ctx->r20, 0X14);
L_8024C738:
    // 0x8024C738: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8024C73C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8024C740: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8024C744: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8024C748: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8024C74C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8024C750: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8024C754: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8024C758: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8024C75C: jr          $ra
    // 0x8024C760: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8024C760: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8024C764: nop

    // 0x8024C768: nop

    // 0x8024C76C: nop

;}
RECOMP_FUNC void func_8022E118_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E118: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E11C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E120: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E124: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E128: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E12C: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022E130: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022E134: jal         0x8004FA7C
    // 0x8022E138: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022E138: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022E13C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022E140: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022E144: bne         $v0, $zero, L_8022E168
    if (ctx->r2 != 0) {
        // 0x8022E148: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022E168;
    }
    // 0x8022E148: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022E14C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E150: jal         0x8022FEA8
    // 0x8022E154: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022E154: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022E158: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E15C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E160: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022E164: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022E168:
    // 0x8022E168: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E16C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022E170: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E174: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022E178: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E17C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E180: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E184: jr          $ra
    // 0x8022E188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024B120_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024B124: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024B128: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024B12C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024B130: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8024B134: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8024B138: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x8024B13C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024B140: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8024B144: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024B148: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024B14C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8024B150: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8024B154: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8024B158: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8024B15C: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x8024B160: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8024B164: jal         0x80053ED8
    // 0x8024B168: sb          $a1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r5;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8024B168: sb          $a1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r5;
    after_0:
    // 0x8024B16C: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x8024B170: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x8024B174: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8024B178: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8024B17C: lhu         $a0, 0x38($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X38);
    // 0x8024B180: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B184: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024B188: lhu         $v1, 0x5270($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X5270);
    // 0x8024B18C: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x8024B190: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8024B194: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x8024B198: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8024B19C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8024B1A0: sh          $a0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r4;
    // 0x8024B1A4: lhu         $a0, 0x3A($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X3A);
    // 0x8024B1A8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B1AC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024B1B0: lhu         $v1, 0x5272($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X5272);
    // 0x8024B1B4: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x8024B1B8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8024B1BC: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x8024B1C0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8024B1C4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8024B1C8: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    // 0x8024B1CC: lhu         $v0, 0x3C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3C);
    // 0x8024B1D0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024B1D4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8024B1D8: lhu         $a0, 0x5274($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X5274);
    // 0x8024B1DC: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8024B1E0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024B1E4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8024B1E8: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x8024B1EC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B1F0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024B1F4: lbu         $v1, 0x52A8($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X52A8);
    // 0x8024B1F8: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8024B1FC: lui         $a0, 0x2E80
    ctx->r4 = S32(0X2E80 << 16);
    // 0x8024B200: ori         $a0, $a0, 0x8080
    ctx->r4 = ctx->r4 | 0X8080;
    // 0x8024B204: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024B208: sb          $v1, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r3;
    // 0x8024B20C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024B210: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024B214: lbu         $v1, 0x52A9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X52A9);
    // 0x8024B218: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x8024B21C: ori         $v0, $v0, 0x29
    ctx->r2 = ctx->r2 | 0X29;
    // 0x8024B220: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8024B224: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8024B228: sw          $a0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r4;
    // 0x8024B22C: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x8024B230: sb          $v1, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r3;
    // 0x8024B234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024B238: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024B23C: jr          $ra
    // 0x8024B240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024B240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232C88_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232C88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232C8C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80232C90: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80232C94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80232C98: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80232C9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80232CA0: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x80232CA4: bgez        $v0, L_80232D60
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232CA8: nop
    
            goto L_80232D60;
    }
    // 0x80232CA8: nop

    // 0x80232CAC: lh          $v0, 0x350($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X350);
    // 0x80232CB0: bne         $v0, $zero, L_80232D60
    if (ctx->r2 != 0) {
        // 0x80232CB4: nop
    
            goto L_80232D60;
    }
    // 0x80232CB4: nop

    // 0x80232CB8: jal         0x8004EFE4
    // 0x80232CBC: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x80232CBC: nop

    after_0:
    // 0x80232CC0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80232CC4: beq         $s1, $zero, L_80232D44
    if (ctx->r17 == 0) {
        // 0x80232CC8: addiu       $s0, $s1, 0x14
        ctx->r16 = ADD32(ctx->r17, 0X14);
            goto L_80232D44;
    }
    // 0x80232CC8: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80232CCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232CD0: addiu       $a1, $s2, 0x188
    ctx->r5 = ADD32(ctx->r18, 0X188);
    // 0x80232CD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232CD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232CDC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80232CE0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80232CE4: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80232CE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232CEC: jal         0x8009A3B4
    // 0x80232CF0: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232CF0: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_1:
    // 0x80232CF4: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80232CF8: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80232CFC: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x80232D00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232D04: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80232D08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232D0C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232D10: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80232D14: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80232D18: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80232D1C: sw          $a1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r5;
    // 0x80232D20: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x80232D24: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80232D28: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80232D2C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80232D30: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80232D34: jal         0x8004DBA0
    // 0x80232D38: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x80232D38: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
    // 0x80232D3C: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80232D40: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80232D44:
    // 0x80232D44: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80232D48: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x80232D4C: sh          $v1, 0x350($s2)
    MEM_H(0X350, ctx->r18) = ctx->r3;
    // 0x80232D50: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80232D54: sb          $v1, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r3;
    // 0x80232D58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232D5C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_80232D60:
    // 0x80232D60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80232D64: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80232D68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80232D6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232D70: jr          $ra
    // 0x80232D74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232D74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225714_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225714: jr          $ra
    // 0x80225718: nop

    TRACE_RETURN()
    return;
    // 0x80225718: nop

;}
RECOMP_FUNC void func_80225B08_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225B0C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225B10: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225B14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225B18: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225B1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B20: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80225B24: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80225B28: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80225B2C: beq         $v1, $zero, L_80225B44
    if (ctx->r3 == 0) {
        // 0x80225B30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225B44;
    }
    // 0x80225B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225B34: beq         $v1, $v0, L_80225C7C
    if (ctx->r3 == ctx->r2) {
        // 0x80225B38: addiu       $a0, $zero, 0x2D
        ctx->r4 = ADD32(0, 0X2D);
            goto L_80225C7C;
    }
    // 0x80225B38: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    // 0x80225B3C: j           L_80225CF4
    // 0x80225B40: nop

        goto L_80225CF4;
    // 0x80225B40: nop

L_80225B44:
    // 0x80225B44: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225B48: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225B4C: bne         $v0, $zero, L_80225CF4
    if (ctx->r2 != 0) {
        // 0x80225B50: addiu       $a0, $zero, 0x156
        ctx->r4 = ADD32(0, 0X156);
            goto L_80225CF4;
    }
    // 0x80225B50: addiu       $a0, $zero, 0x156
    ctx->r4 = ADD32(0, 0X156);
    // 0x80225B54: jal         0x8004CB2C
    // 0x80225B58: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80225B58: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80225B5C: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x80225B60: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225B64: lbu         $a0, 0x4A6D($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4A6D);
    // 0x80225B68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225B6C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80225B70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B74: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80225B78: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225B7C: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x80225B80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B84: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80225B88: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80225B8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B90: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80225B94: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80225B98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B9C: sb          $s0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r16;
    // 0x80225BA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BA4: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x80225BA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BAC: sh          $a1, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r5;
    // 0x80225BB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BB4: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x80225BB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BBC: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80225BC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BC4: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80225BC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BCC: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80225BD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BD4: sh          $a1, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r5;
    // 0x80225BD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BDC: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x80225BE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BE4: sb          $zero, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = 0;
    // 0x80225BE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BEC: sb          $zero, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = 0;
    // 0x80225BF0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80225BF4: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x80225BF8: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x80225BFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C00: jal         0x80054578
    // 0x80225C04: sb          $a0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r4;
    func_80054578_2F978(rdram, ctx);
        goto after_1;
    // 0x80225C04: sb          $a0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r4;
    after_1:
    // 0x80225C08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C0C: jal         0x80034844
    // 0x80225C10: sb          $s0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r16;
    func_80034844_FC44(rdram, ctx);
        goto after_2;
    // 0x80225C10: sb          $s0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r16;
    after_2:
    // 0x80225C14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225C18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225C1C: jal         0x80036B00
    // 0x80225C20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_3;
    // 0x80225C20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80225C24: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80225C28: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80225C2C: beq         $v0, $zero, L_80225C64
    if (ctx->r2 == 0) {
        // 0x80225C30: lui         $a1, 0x3
        ctx->r5 = S32(0X3 << 16);
            goto L_80225C64;
    }
    // 0x80225C30: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x80225C34: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225C38: lh          $a0, 0x6390($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X6390);
    // 0x80225C3C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80225C40: lhu         $v1, 0x6392($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6392);
    // 0x80225C44: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80225C48: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225C4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225C50: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225C54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225C58: sh          $v1, 0x5082($at)
    MEM_H(0X5082, ctx->r1) = ctx->r3;
    // 0x80225C5C: jal         0x80071ACC
    // 0x80225C60: ori         $a1, $a1, 0x1500
    ctx->r5 = ctx->r5 | 0X1500;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_4;
    // 0x80225C60: ori         $a1, $a1, 0x1500
    ctx->r5 = ctx->r5 | 0X1500;
    after_4:
L_80225C64:
    // 0x80225C64: jal         0x80070050
    // 0x80225C68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_5;
    // 0x80225C68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x80225C6C: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80225C70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225C74: j           L_80225CF4
    // 0x80225C78: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_80225CF4;
    // 0x80225C78: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80225C7C:
    // 0x80225C7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225C80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225C84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C88: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225C8C: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80225C90: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225C94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C98: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225C9C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225CA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CA4: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80225CA8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80225CAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CB0: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80225CB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CB8: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80225CBC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225CC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CC4: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x80225CC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CCC: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225CD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CD4: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225CD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CDC: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225CE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CE4: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x80225CE8: jal         0x8002A2F8
    // 0x80225CEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_6;
    // 0x80225CEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80225CF0: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_80225CF4:
    // 0x80225CF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225CF8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225CFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225D00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225D04: jr          $ra
    // 0x80225D08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225D08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E3F0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E3F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E3F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E3F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E3FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E400: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022E404: bgez        $v0, L_8022E41C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022E408: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022E41C;
    }
    // 0x8022E408: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022E40C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E410: jal         0x8022FEB8
    // 0x8022E414: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8022FEB8_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022E414: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022E418: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022E41C:
    // 0x8022E41C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E420: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E424: jr          $ra
    // 0x8022E428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023FB7C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023FB7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023FB80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023FB84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023FB88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023FB8C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023FB90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023FB94: lbu         $v1, 0x4E1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4E1);
    // 0x8023FB98: lbu         $v0, 0x4E2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4E2);
    // 0x8023FB9C: lbu         $a0, 0x4E0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4E0);
    // 0x8023FBA0: sb          $v1, 0x4E2($s0)
    MEM_B(0X4E2, ctx->r16) = ctx->r3;
    // 0x8023FBA4: lh          $v1, 0x4DE($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4DE);
    // 0x8023FBA8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8023FBAC: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023FBB0: sb          $v0, 0x4E3($s0)
    MEM_B(0X4E3, ctx->r16) = ctx->r2;
    // 0x8023FBB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FBB8: beq         $v1, $v0, L_8023FC54
    if (ctx->r3 == ctx->r2) {
        // 0x8023FBBC: sb          $a0, 0x4E1($s0)
        MEM_B(0X4E1, ctx->r16) = ctx->r4;
            goto L_8023FC54;
    }
    // 0x8023FBBC: sb          $a0, 0x4E1($s0)
    MEM_B(0X4E1, ctx->r16) = ctx->r4;
    // 0x8023FBC0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023FBC4: beql        $v0, $zero, L_8023FBDC
    if (ctx->r2 == 0) {
        // 0x8023FBC8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023FBDC;
    }
    goto skip_0;
    // 0x8023FBC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023FBCC: beq         $v1, $zero, L_8023FBEC
    if (ctx->r3 == 0) {
        // 0x8023FBD0: nop
    
            goto L_8023FBEC;
    }
    // 0x8023FBD0: nop

    // 0x8023FBD4: j           L_8023FE10
    // 0x8023FBD8: nop

        goto L_8023FE10;
    // 0x8023FBD8: nop

L_8023FBDC:
    // 0x8023FBDC: beq         $v1, $v0, L_8023FD54
    if (ctx->r3 == ctx->r2) {
        // 0x8023FBE0: nop
    
            goto L_8023FD54;
    }
    // 0x8023FBE0: nop

    // 0x8023FBE4: j           L_8023FE10
    // 0x8023FBE8: nop

        goto L_8023FE10;
    // 0x8023FBE8: nop

L_8023FBEC:
    // 0x8023FBEC: jal         0x800A3450
    // 0x8023FBF0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8023FBF0: nop

    after_0:
    // 0x8023FBF4: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8023FBF8: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8023FBFC: bne         $v0, $zero, L_8023FC08
    if (ctx->r2 != 0) {
        // 0x8023FC00: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023FC08;
    }
    // 0x8023FC00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023FC04: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8023FC08:
    // 0x8023FC08: sb          $v0, 0x4E0($s0)
    MEM_B(0X4E0, ctx->r16) = ctx->r2;
    // 0x8023FC0C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023FC10: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023FC14: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023FC18: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
    // 0x8023FC1C: lh          $a0, 0x6E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6E);
    // 0x8023FC20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023FC24: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023FC28: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x8023FC2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023FC30: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8023FC34: slt         $a0, $a0, $v1
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023FC38: beq         $a0, $zero, L_8023FC48
    if (ctx->r4 == 0) {
        // 0x8023FC3C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023FC48;
    }
    // 0x8023FC3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023FC40: j           L_8023FE10
    // 0x8023FC44: sh          $v0, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r2;
        goto L_8023FE10;
    // 0x8023FC44: sh          $v0, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r2;
L_8023FC48:
    // 0x8023FC48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FC4C: j           L_8023FE10
    // 0x8023FC50: sh          $v0, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r2;
        goto L_8023FE10;
    // 0x8023FC50: sh          $v0, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r2;
L_8023FC54:
    // 0x8023FC54: jal         0x800A3450
    // 0x8023FC58: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8023FC58: nop

    after_1:
    // 0x8023FC5C: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8023FC60: sltiu       $v0, $v1, 0x2
    ctx->r2 = ctx->r3 < 0X2 ? 1 : 0;
    // 0x8023FC64: beq         $v0, $zero, L_8023FCA8
    if (ctx->r2 == 0) {
        // 0x8023FC68: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023FCA8;
    }
    // 0x8023FC68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023FC6C: sb          $v0, 0xA0($s1)
    MEM_B(0XA0, ctx->r17) = ctx->r2;
    // 0x8023FC70: lhu         $a0, 0xB0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XB0);
    // 0x8023FC74: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x8023FC78: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023FC7C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023FC80: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023FC84: sra         $v0, $a0, 16
    ctx->r2 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8023FC88: srl         $a0, $a0, 31
    ctx->r4 = S32(U32(ctx->r4) >> 31);
    // 0x8023FC8C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023FC90: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8023FC94: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023FC98: bne         $v1, $zero, L_8023FCE8
    if (ctx->r3 != 0) {
        // 0x8023FC9C: sb          $zero, 0xB($s0)
        MEM_B(0XB, ctx->r16) = 0;
            goto L_8023FCE8;
    }
    // 0x8023FC9C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023FCA0: j           L_8023FCF8
    // 0x8023FCA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023FCF8;
    // 0x8023FCA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023FCA8:
    // 0x8023FCA8: sltiu       $v0, $v1, 0x3
    ctx->r2 = ctx->r3 < 0X3 ? 1 : 0;
    // 0x8023FCAC: beq         $v0, $zero, L_8023FD00
    if (ctx->r2 == 0) {
        // 0x8023FCB0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023FD00;
    }
    // 0x8023FCB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023FCB4: sb          $v0, 0xA0($s1)
    MEM_B(0XA0, ctx->r17) = ctx->r2;
    // 0x8023FCB8: lhu         $a0, 0xB0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XB0);
    // 0x8023FCBC: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x8023FCC0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023FCC4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023FCC8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023FCCC: sra         $v0, $a0, 16
    ctx->r2 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8023FCD0: srl         $a0, $a0, 31
    ctx->r4 = S32(U32(ctx->r4) >> 31);
    // 0x8023FCD4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023FCD8: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8023FCDC: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023FCE0: beq         $v1, $zero, L_8023FCF4
    if (ctx->r3 == 0) {
        // 0x8023FCE4: sb          $zero, 0xB($s0)
        MEM_B(0XB, ctx->r16) = 0;
            goto L_8023FCF4;
    }
    // 0x8023FCE4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023FCE8:
    // 0x8023FCE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023FCEC: j           L_8023FD24
    // 0x8023FCF0: sh          $v0, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r2;
        goto L_8023FD24;
    // 0x8023FCF0: sh          $v0, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r2;
L_8023FCF4:
    // 0x8023FCF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023FCF8:
    // 0x8023FCF8: j           L_8023FD24
    // 0x8023FCFC: sh          $v0, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r2;
        goto L_8023FD24;
    // 0x8023FCFC: sh          $v0, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r2;
L_8023FD00:
    // 0x8023FD00: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8023FD04: bne         $v0, $zero, L_8023FD10
    if (ctx->r2 != 0) {
        // 0x8023FD08: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8023FD10;
    }
    // 0x8023FD08: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023FD0C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8023FD10:
    // 0x8023FD10: sb          $v0, 0xA0($s1)
    MEM_B(0XA0, ctx->r17) = ctx->r2;
    // 0x8023FD14: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023FD18: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023FD1C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023FD20: sh          $zero, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = 0;
L_8023FD24:
    // 0x8023FD24: lbu         $v1, 0xA1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA1);
    // 0x8023FD28: lbu         $v0, 0xA0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA0);
    // 0x8023FD2C: bne         $v1, $v0, L_8023FE10
    if (ctx->r3 != ctx->r2) {
        // 0x8023FD30: nop
    
            goto L_8023FE10;
    }
    // 0x8023FD30: nop

    // 0x8023FD34: lbu         $v0, 0xA2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA2);
    // 0x8023FD38: bne         $v0, $v1, L_8023FE10
    if (ctx->r2 != ctx->r3) {
        // 0x8023FD3C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8023FE10;
    }
    // 0x8023FD3C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8023FD40: sltiu       $v0, $s2, 0x10
    ctx->r2 = ctx->r18 < 0X10 ? 1 : 0;
    // 0x8023FD44: beq         $v0, $zero, L_8023FE10
    if (ctx->r2 == 0) {
        // 0x8023FD48: nop
    
            goto L_8023FE10;
    }
    // 0x8023FD48: nop

    // 0x8023FD4C: j           L_8023FC54
    // 0x8023FD50: nop

        goto L_8023FC54;
    // 0x8023FD50: nop

L_8023FD54:
    // 0x8023FD54: jal         0x800A3450
    // 0x8023FD58: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8023FD58: nop

    after_2:
    // 0x8023FD5C: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8023FD60: sltiu       $v0, $v1, 0x3
    ctx->r2 = ctx->r3 < 0X3 ? 1 : 0;
    // 0x8023FD64: beq         $v0, $zero, L_8023FDB8
    if (ctx->r2 == 0) {
        // 0x8023FD68: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023FDB8;
    }
    // 0x8023FD68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023FD6C: sb          $v0, 0xA0($s1)
    MEM_B(0XA0, ctx->r17) = ctx->r2;
    // 0x8023FD70: lhu         $a0, 0xB0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XB0);
    // 0x8023FD74: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x8023FD78: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023FD7C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023FD80: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023FD84: sra         $v0, $a0, 16
    ctx->r2 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8023FD88: srl         $a0, $a0, 31
    ctx->r4 = S32(U32(ctx->r4) >> 31);
    // 0x8023FD8C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023FD90: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8023FD94: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023FD98: beq         $v1, $zero, L_8023FDAC
    if (ctx->r3 == 0) {
        // 0x8023FD9C: sb          $zero, 0xB($s0)
        MEM_B(0XB, ctx->r16) = 0;
            goto L_8023FDAC;
    }
    // 0x8023FD9C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023FDA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023FDA4: j           L_8023FDE8
    // 0x8023FDA8: sh          $v0, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r2;
        goto L_8023FDE8;
    // 0x8023FDA8: sh          $v0, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r2;
L_8023FDAC:
    // 0x8023FDAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FDB0: j           L_8023FDE8
    // 0x8023FDB4: sh          $v0, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r2;
        goto L_8023FDE8;
    // 0x8023FDB4: sh          $v0, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r2;
L_8023FDB8:
    // 0x8023FDB8: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8023FDBC: bne         $v0, $zero, L_8023FDD4
    if (ctx->r2 != 0) {
        // 0x8023FDC0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8023FDD4;
    }
    // 0x8023FDC0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023FDC4: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x8023FDC8: bne         $v0, $zero, L_8023FDD4
    if (ctx->r2 != 0) {
        // 0x8023FDCC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023FDD4;
    }
    // 0x8023FDCC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023FDD0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8023FDD4:
    // 0x8023FDD4: sb          $v0, 0xA0($s1)
    MEM_B(0XA0, ctx->r17) = ctx->r2;
    // 0x8023FDD8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023FDDC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023FDE0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023FDE4: sh          $zero, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = 0;
L_8023FDE8:
    // 0x8023FDE8: lbu         $v1, 0xA1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA1);
    // 0x8023FDEC: lbu         $v0, 0xA0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA0);
    // 0x8023FDF0: bne         $v1, $v0, L_8023FE10
    if (ctx->r3 != ctx->r2) {
        // 0x8023FDF4: nop
    
            goto L_8023FE10;
    }
    // 0x8023FDF4: nop

    // 0x8023FDF8: lbu         $v0, 0xA2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA2);
    // 0x8023FDFC: bne         $v0, $v1, L_8023FE10
    if (ctx->r2 != ctx->r3) {
        // 0x8023FE00: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8023FE10;
    }
    // 0x8023FE00: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8023FE04: sltiu       $v0, $s2, 0x10
    ctx->r2 = ctx->r18 < 0X10 ? 1 : 0;
    // 0x8023FE08: bne         $v0, $zero, L_8023FD54
    if (ctx->r2 != 0) {
        // 0x8023FE0C: nop
    
            goto L_8023FD54;
    }
    // 0x8023FE0C: nop

L_8023FE10:
    // 0x8023FE10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FE14: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023FE18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023FE1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023FE20: jr          $ra
    // 0x8023FE24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023FE24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80246E60_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246E60: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x80246E64: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80246E68: beq         $v0, $zero, L_80246F18
    if (ctx->r2 == 0) {
        // 0x80246E6C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80246F18;
    }
    // 0x80246E6C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80246E70: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246E74: addu        $at, $at, $v0
    gpr jr_addend_80246E7C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246E78: lw          $v0, 0x6258($at)
    ctx->r2 = ADD32(ctx->r1, 0X6258);
    // 0x80246E7C: jr          $v0
    // 0x80246E80: nop

    switch (jr_addend_80246E7C >> 2) {
        case 0: goto L_80246E84; break;
        case 1: goto L_80246EA8; break;
        case 2: goto L_80246ED0; break;
        case 3: goto L_80246EF4; break;
        case 4: goto L_80246F18; break;
        default: switch_error(__func__, 0x80246E7C, 0x80256258);
    }
    // 0x80246E80: nop

L_80246E84:
    // 0x80246E84: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80246E88: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80246E8C: bne         $v1, $v0, L_80246F18
    if (ctx->r3 != ctx->r2) {
        // 0x80246E90: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80246F18;
    }
    // 0x80246E90: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80246E94: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80246E98: beq         $v1, $v0, L_80246F0C
    if (ctx->r3 == ctx->r2) {
        // 0x80246E9C: nop
    
            goto L_80246F0C;
    }
    // 0x80246E9C: nop

    // 0x80246EA0: j           L_80246F18
    // 0x80246EA4: nop

        goto L_80246F18;
    // 0x80246EA4: nop

L_80246EA8:
    // 0x80246EA8: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x80246EAC: addiu       $v1, $zero, -0x500
    ctx->r3 = ADD32(0, -0X500);
    // 0x80246EB0: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x80246EB4: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x80246EB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246EBC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80246EC0: beq         $v0, $v1, L_80246F0C
    if (ctx->r2 == ctx->r3) {
        // 0x80246EC4: nop
    
            goto L_80246F0C;
    }
    // 0x80246EC4: nop

    // 0x80246EC8: j           L_80246F18
    // 0x80246ECC: nop

        goto L_80246F18;
    // 0x80246ECC: nop

L_80246ED0:
    // 0x80246ED0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80246ED4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80246ED8: bne         $v1, $v0, L_80246F18
    if (ctx->r3 != ctx->r2) {
        // 0x80246EDC: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80246F18;
    }
    // 0x80246EDC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80246EE0: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80246EE4: beq         $v1, $v0, L_80246F0C
    if (ctx->r3 == ctx->r2) {
        // 0x80246EE8: nop
    
            goto L_80246F0C;
    }
    // 0x80246EE8: nop

    // 0x80246EEC: j           L_80246F18
    // 0x80246EF0: nop

        goto L_80246F18;
    // 0x80246EF0: nop

L_80246EF4:
    // 0x80246EF4: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x80246EF8: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80246EFC: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x80246F00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246F04: bne         $v0, $zero, L_80246F18
    if (ctx->r2 != 0) {
        // 0x80246F08: nop
    
            goto L_80246F18;
    }
    // 0x80246F08: nop

L_80246F0C:
    // 0x80246F0C: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80246F10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246F14: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80246F18:
    // 0x80246F18: jr          $ra
    // 0x80246F1C: nop

    TRACE_RETURN()
    return;
    // 0x80246F1C: nop

;}
RECOMP_FUNC void func_8023B940_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B940: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B944: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B948: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B94C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023B950: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023B954: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023B958: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B95C: jal         0x8009A3B4
    // 0x8023B960: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023B960: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8023B964: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023B968: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023B96C: jal         0x8009A3B4
    // 0x8023B970: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023B970: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8023B974: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023B978: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8023B97C: jal         0x8009A3B4
    // 0x8023B980: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023B980: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023B984: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023B988: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023B98C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B990: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8023B994: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x8023B998: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B99C: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    // 0x8023B9A0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023B9A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B9A8: lw          $v0, 0x46E0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X46E0);
    // 0x8023B9AC: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8023B9B0: jalr        $v0
    // 0x8023B9B4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8023B9B4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8023B9B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B9BC: jal         0x8023C560
    // 0x8023B9C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8023C560_ovl28(rdram, ctx);
        goto after_4;
    // 0x8023B9C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8023B9C4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023B9C8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8023B9CC: beq         $a1, $v0, L_8023B9E8
    if (ctx->r5 == ctx->r2) {
        // 0x8023B9D0: nop
    
            goto L_8023B9E8;
    }
    // 0x8023B9D0: nop

    // 0x8023B9D4: lh          $a2, 0x4E2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X4E2);
    // 0x8023B9D8: jal         0x80050294
    // 0x8023B9DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8023B9DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8023B9E0: j           L_8023B9F0
    // 0x8023B9E4: nop

        goto L_8023B9F0;
    // 0x8023B9E4: nop

L_8023B9E8:
    // 0x8023B9E8: jal         0x8005044C
    // 0x8023B9EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8023B9EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8023B9F0:
    // 0x8023B9F0: lbu         $v0, 0x12($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X12);
    // 0x8023B9F4: beq         $v0, $zero, L_8023BA0C
    if (ctx->r2 == 0) {
        // 0x8023B9F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023BA0C;
    }
    // 0x8023B9F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B9FC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8023BA00: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023BA04: jal         0x8003B564
    // 0x8023BA08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8023BA08: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_8023BA0C:
    // 0x8023BA0C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023BA10: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023BA14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BA18: jr          $ra
    // 0x8023BA1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023BA1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80241F40_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241F40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80241F44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80241F48: jal         0x8004EF48
    // 0x80241F4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8004EF48_2A348(rdram, ctx);
        goto after_0;
    // 0x80241F4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80241F50: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80241F54: bne         $s0, $zero, L_80241F64
    if (ctx->r16 != 0) {
        // 0x80241F58: addiu       $a0, $s0, 0x2C
        ctx->r4 = ADD32(ctx->r16, 0X2C);
            goto L_80241F64;
    }
    // 0x80241F58: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80241F5C: j           L_80242060
    // 0x80241F60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80242060;
    // 0x80241F60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80241F64:
    // 0x80241F64: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80241F68: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x80241F6C: lh          $a3, 0x14($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X14);
    // 0x80241F70: addiu       $v0, $zero, -0x33
    ctx->r2 = ADD32(0, -0X33);
    // 0x80241F74: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80241F78: lh          $t0, 0x16($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X16);
    // 0x80241F7C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80241F80: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80241F84: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80241F88: lh          $t1, 0x18($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X18);
    // 0x80241F8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80241F90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241F94: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80241F98: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80241F9C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80241FA0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x80241FA4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80241FA8: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x80241FAC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80241FB0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80241FB4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80241FB8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80241FBC: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80241FC0: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80241FC4: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x80241FC8: sll         $t1, $t1, 16
    ctx->r9 = S32(ctx->r9 << 16);
    // 0x80241FCC: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    // 0x80241FD0: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x80241FD4: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    // 0x80241FD8: jal         0x8009A3B4
    // 0x80241FDC: sw          $t1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r9;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80241FDC: sw          $t1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r9;
    after_1:
    // 0x80241FE0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80241FE4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80241FE8: jal         0x8009A3B4
    // 0x80241FEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80241FEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80241FF0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80241FF4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80241FF8: jal         0x8009A3B4
    // 0x80241FFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80241FFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80242000: jal         0x8004A1AC
    // 0x80242004: nop

    func_8004A1AC_255AC(rdram, ctx);
        goto after_4;
    // 0x80242004: nop

    after_4:
    // 0x80242008: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8024200C: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80242010: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x80242014: lui         $a3, 0x80
    ctx->r7 = S32(0X80 << 16);
    // 0x80242018: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024201C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80242020: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80242024: ori         $a3, $a3, 0x6468
    ctx->r7 = ctx->r7 | 0X6468;
    // 0x80242028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024202C: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80242030: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80242034: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80242038: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8024203C: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80242040: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x80242044: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80242048: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x8024204C: jal         0x8004A00C
    // 0x80242050: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8004A00C_2540C(rdram, ctx);
        goto after_5;
    // 0x80242050: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_5:
    // 0x80242054: jal         0x80049ECC
    // 0x80242058: nop

    func_80049ECC_252CC(rdram, ctx);
        goto after_6;
    // 0x80242058: nop

    after_6:
    // 0x8024205C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_80242060:
    // 0x80242060: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80242064: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80242068: jr          $ra
    // 0x8024206C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024206C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023F6A0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F6A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023F6A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023F6A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023F6AC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023F6B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023F6B4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023F6B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023F6BC: ori         $v0, $v0, 0x42
    ctx->r2 = ctx->r2 | 0X42;
    // 0x8023F6C0: jal         0x8004D5D4
    // 0x8023F6C4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023F6C4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023F6C8: jal         0x800512D4
    // 0x8023F6CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800512D4_2C6D4(rdram, ctx);
        goto after_1;
    // 0x8023F6CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023F6D0: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023F6D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023F6D8: jal         0x8003BDA4
    // 0x8023F6DC: addiu       $a1, $s0, 0x520
    ctx->r5 = ADD32(ctx->r16, 0X520);
    func_8003BDA4_171A4(rdram, ctx);
        goto after_2;
    // 0x8023F6DC: addiu       $a1, $s0, 0x520
    ctx->r5 = ADD32(ctx->r16, 0X520);
    after_2:
    // 0x8023F6E0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023F6E4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8023F6E8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8023F6EC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023F6F0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023F6F4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023F6F8: sw          $zero, 0x51C($s0)
    MEM_W(0X51C, ctx->r16) = 0;
    // 0x8023F6FC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023F700: lb          $v0, -0x3BBD($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BBD);
    // 0x8023F704: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8023F708: bnel        $v0, $zero, L_8023F718
    if (ctx->r2 != 0) {
        // 0x8023F70C: sw          $zero, 0x520($s0)
        MEM_W(0X520, ctx->r16) = 0;
            goto L_8023F718;
    }
    goto skip_0;
    // 0x8023F70C: sw          $zero, 0x520($s0)
    MEM_W(0X520, ctx->r16) = 0;
    skip_0:
    // 0x8023F710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F714: sw          $v0, 0x520($s0)
    MEM_W(0X520, ctx->r16) = ctx->r2;
L_8023F718:
    // 0x8023F718: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023F71C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023F720: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023F724: addiu       $v0, $zero, -0x33
    ctx->r2 = ADD32(0, -0X33);
    // 0x8023F728: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023F72C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023F730: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x8023F734: jal         0x8009A3B4
    // 0x8023F738: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023F738: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023F73C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023F740: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023F744: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8023F748: lui         $v0, 0xFFCD
    ctx->r2 = S32(0XFFCD << 16);
    // 0x8023F74C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8023F750: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8023F754: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x8023F758: jal         0x8009A3B4
    // 0x8023F75C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023F75C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    after_4:
    // 0x8023F760: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F764: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023F768: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F76C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8023F770: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023F774: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8023F778: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8023F77C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8023F780: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x8023F784: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023F788: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8023F78C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023F790: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x8023F794: lh          $v0, 0x98($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X98);
    // 0x8023F798: sb          $zero, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = 0;
    // 0x8023F79C: blez        $v0, L_8023F7C0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023F7A0: sb          $zero, 0x9B($s1)
        MEM_B(0X9B, ctx->r17) = 0;
            goto L_8023F7C0;
    }
    // 0x8023F7A0: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
    // 0x8023F7A4: lb          $a1, 0x9A($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X9A);
    // 0x8023F7A8: lb          $a2, 0x9B($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X9B);
    // 0x8023F7AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023F7B0: jal         0x80050294
    // 0x8023F7B4: sh          $zero, 0x98($s1)
    MEM_H(0X98, ctx->r17) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8023F7B4: sh          $zero, 0x98($s1)
    MEM_H(0X98, ctx->r17) = 0;
    after_5:
    // 0x8023F7B8: j           L_8023F7D0
    // 0x8023F7BC: nop

        goto L_8023F7D0;
    // 0x8023F7BC: nop

L_8023F7C0:
    // 0x8023F7C0: bne         $v0, $zero, L_8023F7D0
    if (ctx->r2 != 0) {
        // 0x8023F7C4: nop
    
            goto L_8023F7D0;
    }
    // 0x8023F7C4: nop

    // 0x8023F7C8: jal         0x8005044C
    // 0x8023F7CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8023F7CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8023F7D0:
    // 0x8023F7D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023F7D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023F7D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023F7DC: jr          $ra
    // 0x8023F7E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023F7E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80249D10_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249D10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249D14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80249D18: jal         0x8004F684
    // 0x80249D1C: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x80249D1C: nop

    after_0:
    // 0x80249D20: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80249D24: jr          $ra
    // 0x80249D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80249D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802334A0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802334A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802334A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802334A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802334AC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802334B0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802334B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802334B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802334BC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802334C0: beq         $v0, $zero, L_802334EC
    if (ctx->r2 == 0) {
        // 0x802334C4: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_802334EC;
    }
    // 0x802334C4: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802334C8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802334CC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802334D0: addiu       $a1, $s0, 0x398
    ctx->r5 = ADD32(ctx->r16, 0X398);
    // 0x802334D4: jal         0x8004F820
    // 0x802334D8: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802334D8: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_0:
    // 0x802334DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802334E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802334E4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802334E8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_802334EC:
    // 0x802334EC: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802334F0: bgez        $v0, L_802336B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802334F4: nop
    
            goto L_802336B0;
    }
    // 0x802334F4: nop

    // 0x802334F8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802334FC: beq         $v0, $zero, L_8023368C
    if (ctx->r2 == 0) {
        // 0x80233500: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8023368C;
    }
    // 0x80233500: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80233504: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80233508: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023350C: jal         0x800324B4
    // 0x80233510: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80233510: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_1:
    // 0x80233514: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80233518: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023351C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80233520: bgez        $v1, L_8023354C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80233524: nop
    
            goto L_8023354C;
    }
    // 0x80233524: nop

    // 0x80233528: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8023352C: jal         0x800324B4
    // 0x80233530: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80233530: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_2:
    // 0x80233534: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80233538: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023353C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80233540: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80233544: j           L_80233564
    // 0x80233548: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
        goto L_80233564;
    // 0x80233548: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
L_8023354C:
    // 0x8023354C: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80233550: jal         0x800324B4
    // 0x80233554: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x80233554: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_3:
    // 0x80233558: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023355C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233560: srl         $v0, $v1, 11
    ctx->r2 = S32(U32(ctx->r3) >> 11);
L_80233564:
    // 0x80233564: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233568: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023356C: beq         $v1, $zero, L_802335B8
    if (ctx->r3 == 0) {
        // 0x80233570: nop
    
            goto L_802335B8;
    }
    // 0x80233570: nop

    // 0x80233574: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x80233578: lh          $a0, 0x50($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X50);
    // 0x8023357C: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80233580: bltzl       $v0, L_80233588
    if (SIGNED(ctx->r2) < 0) {
        // 0x80233584: subu        $v0, $a0, $a1
        ctx->r2 = SUB32(ctx->r4, ctx->r5);
            goto L_80233588;
    }
    goto skip_0;
    // 0x80233584: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    skip_0:
L_80233588:
    // 0x80233588: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8023358C: bne         $v1, $zero, L_80233598
    if (ctx->r3 != 0) {
        // 0x80233590: nop
    
            goto L_80233598;
    }
    // 0x80233590: nop

    // 0x80233594: break       7
    do_break(2149791124);
L_80233598:
    // 0x80233598: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023359C: bne         $v1, $at, L_802335B0
    if (ctx->r3 != ctx->r1) {
        // 0x802335A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802335B0;
    }
    // 0x802335A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802335A4: bne         $v0, $at, L_802335B0
    if (ctx->r2 != ctx->r1) {
        // 0x802335A8: nop
    
            goto L_802335B0;
    }
    // 0x802335A8: nop

    // 0x802335AC: break       6
    do_break(2149791148);
L_802335B0:
    // 0x802335B0: mflo        $v0
    ctx->r2 = lo;
    // 0x802335B4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_802335B8:
    // 0x802335B8: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x802335BC: jal         0x80032498
    // 0x802335C0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x802335C0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_4:
    // 0x802335C4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802335C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802335CC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802335D0: bgez        $v1, L_802335FC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802335D4: nop
    
            goto L_802335FC;
    }
    // 0x802335D4: nop

    // 0x802335D8: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x802335DC: jal         0x80032498
    // 0x802335E0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_5;
    // 0x802335E0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_5:
    // 0x802335E4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802335E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802335EC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802335F0: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802335F4: j           L_80233614
    // 0x802335F8: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
        goto L_80233614;
    // 0x802335F8: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
L_802335FC:
    // 0x802335FC: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80233600: jal         0x80032498
    // 0x80233604: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_6;
    // 0x80233604: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_6:
    // 0x80233608: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023360C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233610: srl         $v0, $v1, 11
    ctx->r2 = S32(U32(ctx->r3) >> 11);
L_80233614:
    // 0x80233614: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233618: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023361C: beql        $v1, $zero, L_8023366C
    if (ctx->r3 == 0) {
        // 0x80233620: sll         $v1, $s1, 16
        ctx->r3 = S32(ctx->r17 << 16);
            goto L_8023366C;
    }
    goto skip_1;
    // 0x80233620: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
    skip_1:
    // 0x80233624: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x80233628: lh          $a0, 0x54($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X54);
    // 0x8023362C: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80233630: bltzl       $v0, L_80233638
    if (SIGNED(ctx->r2) < 0) {
        // 0x80233634: subu        $v0, $a0, $a1
        ctx->r2 = SUB32(ctx->r4, ctx->r5);
            goto L_80233638;
    }
    goto skip_2;
    // 0x80233634: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    skip_2:
L_80233638:
    // 0x80233638: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8023363C: bne         $v1, $zero, L_80233648
    if (ctx->r3 != 0) {
        // 0x80233640: nop
    
            goto L_80233648;
    }
    // 0x80233640: nop

    // 0x80233644: break       7
    do_break(2149791300);
L_80233648:
    // 0x80233648: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023364C: bne         $v1, $at, L_80233660
    if (ctx->r3 != ctx->r1) {
        // 0x80233650: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80233660;
    }
    // 0x80233650: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80233654: bne         $v0, $at, L_80233660
    if (ctx->r2 != ctx->r1) {
        // 0x80233658: nop
    
            goto L_80233660;
    }
    // 0x80233658: nop

    // 0x8023365C: break       6
    do_break(2149791324);
L_80233660:
    // 0x80233660: mflo        $v0
    ctx->r2 = lo;
    // 0x80233664: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80233668: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
L_8023366C:
    // 0x8023366C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80233670: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80233674: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80233678: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023367C: beql        $v1, $zero, L_8023369C
    if (ctx->r3 == 0) {
        // 0x80233680: sh          $s1, 0x4($s3)
        MEM_H(0X4, ctx->r19) = ctx->r17;
            goto L_8023369C;
    }
    goto skip_3;
    // 0x80233680: sh          $s1, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r17;
    skip_3:
    // 0x80233684: j           L_8023369C
    // 0x80233688: sh          $s2, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r18;
        goto L_8023369C;
    // 0x80233688: sh          $s2, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r18;
L_8023368C:
    // 0x8023368C: lhu         $v0, 0x34A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34A);
    // 0x80233690: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80233694: addiu       $v0, $v0, 0x1E
    ctx->r2 = ADD32(ctx->r2, 0X1E);
    // 0x80233698: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
L_8023369C:
    // 0x8023369C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802336A0: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802336A4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802336A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802336AC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802336B0:
    // 0x802336B0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802336B4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802336B8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802336BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802336C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802336C4: jr          $ra
    // 0x802336C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802336C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80249CE4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249CE4: lw          $v0, 0x4C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4C);
    // 0x80249CE8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80249CEC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80249CF0: jr          $ra
    // 0x80249CF4: sw          $v0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80249CF4: sw          $v0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8024B35C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B35C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024B360: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024B364: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024B368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024B36C: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
    // 0x8024B370: jal         0x80032498
    // 0x8024B374: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    func_80032498_D898(rdram, ctx);
        goto after_0;
    // 0x8024B374: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    after_0:
    // 0x8024B378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024B37C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8024B380: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024B384: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024B388: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024B38C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024B390: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8024B394: addiu       $v0, $zero, -0xC8
    ctx->r2 = ADD32(0, -0XC8);
    // 0x8024B398: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8024B39C: jal         0x8024B3F4
    // 0x8024B3A0: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    func_8024B3F4_ovl28(rdram, ctx);
        goto after_1;
    // 0x8024B3A0: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    after_1:
    // 0x8024B3A4: lhu         $v0, 0x28($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X28);
    // 0x8024B3A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024B3AC: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x8024B3B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024B3B4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024B3B8: slti        $v0, $v0, 0x81
    ctx->r2 = SIGNED(ctx->r2) < 0X81 ? 1 : 0;
    // 0x8024B3BC: bne         $v0, $zero, L_8024B3C8
    if (ctx->r2 != 0) {
        // 0x8024B3C0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024B3C8;
    }
    // 0x8024B3C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024B3C4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8024B3C8:
    // 0x8024B3C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024B3CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024B3D0: jr          $ra
    // 0x8024B3D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024B3D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023D394_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D394: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023D398: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023D39C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023D3A0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023D3A4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8023D3A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023D3AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023D3B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023D3B4: lbu         $a0, 0xA($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0XA);
    // 0x8023D3B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D3BC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8023D3C0: beq         $v1, $v0, L_8023D4AC
    if (ctx->r3 == ctx->r2) {
        // 0x8023D3C4: addiu       $s4, $s3, 0x440
        ctx->r20 = ADD32(ctx->r19, 0X440);
            goto L_8023D4AC;
    }
    // 0x8023D3C4: addiu       $s4, $s3, 0x440
    ctx->r20 = ADD32(ctx->r19, 0X440);
    // 0x8023D3C8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023D3CC: beql        $v0, $zero, L_8023D3E4
    if (ctx->r2 == 0) {
        // 0x8023D3D0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023D3E4;
    }
    goto skip_0;
    // 0x8023D3D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023D3D4: beq         $v1, $zero, L_8023D3FC
    if (ctx->r3 == 0) {
        // 0x8023D3D8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023D3FC;
    }
    // 0x8023D3D8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023D3DC: j           L_8023D740
    // 0x8023D3E0: nop

        goto L_8023D740;
    // 0x8023D3E0: nop

L_8023D3E4:
    // 0x8023D3E4: beq         $v1, $v0, L_8023D5A4
    if (ctx->r3 == ctx->r2) {
        // 0x8023D3E8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023D5A4;
    }
    // 0x8023D3E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023D3EC: beq         $v1, $v0, L_8023D67C
    if (ctx->r3 == ctx->r2) {
        // 0x8023D3F0: nop
    
            goto L_8023D67C;
    }
    // 0x8023D3F0: nop

    // 0x8023D3F4: j           L_8023D740
    // 0x8023D3F8: nop

        goto L_8023D740;
    // 0x8023D3F8: nop

L_8023D3FC:
    // 0x8023D3FC: addiu       $s0, $s3, 0x14
    ctx->r16 = ADD32(ctx->r19, 0X14);
    // 0x8023D400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D404: lh          $a2, 0x56($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X56);
    // 0x8023D408: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023D40C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023D410: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8023D414: sb          $v0, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r2;
    // 0x8023D418: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8023D41C: jal         0x8004F820
    // 0x8023D420: sb          $v0, 0xAC($s3)
    MEM_B(0XAC, ctx->r19) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8023D420: sb          $v0, 0xAC($s3)
    MEM_B(0XAC, ctx->r19) = ctx->r2;
    after_0:
    // 0x8023D424: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D428: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8023D42C: addiu       $a1, $zero, -0x40
    ctx->r5 = ADD32(0, -0X40);
    // 0x8023D430: lhu         $a0, 0x440($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X440);
    // 0x8023D434: lbu         $v1, 0x2($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X2);
    // 0x8023D438: lui         $a2, 0x8019
    ctx->r6 = S32(0X8019 << 16);
    // 0x8023D43C: lw          $a2, 0x3C60($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X3C60);
    // 0x8023D440: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8023D444: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8023D448: sh          $v0, 0x66($s3)
    MEM_H(0X66, ctx->r19) = ctx->r2;
    // 0x8023D44C: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8023D450: sh          $v0, 0x64($s3)
    MEM_H(0X64, ctx->r19) = ctx->r2;
    // 0x8023D454: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8023D458: sh          $v0, 0x490($s3)
    MEM_H(0X490, ctx->r19) = ctx->r2;
    // 0x8023D45C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023D460: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023D464: sh          $v0, 0x444($s3)
    MEM_H(0X444, ctx->r19) = ctx->r2;
    // 0x8023D468: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x8023D46C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023D470: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8023D474: sh          $a0, 0x440($s3)
    MEM_H(0X440, ctx->r19) = ctx->r4;
    // 0x8023D478: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8023D47C: addiu       $a0, $zero, 0x1DC
    ctx->r4 = ADD32(0, 0X1DC);
    // 0x8023D480: lhu         $v1, 0x440($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X440);
    // 0x8023D484: lbu         $a2, 0xA($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0XA);
    // 0x8023D488: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023D48C: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x8023D490: sb          $v0, 0x493($s3)
    MEM_B(0X493, ctx->r19) = ctx->r2;
    // 0x8023D494: sb          $zero, 0x492($s3)
    MEM_B(0X492, ctx->r19) = 0;
    // 0x8023D498: sh          $v1, 0x440($s3)
    MEM_H(0X440, ctx->r19) = ctx->r3;
    // 0x8023D49C: jal         0x8002A33C
    // 0x8023D4A0: sh          $a2, 0x448($s3)
    MEM_H(0X448, ctx->r19) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023D4A0: sh          $a2, 0x448($s3)
    MEM_H(0X448, ctx->r19) = ctx->r6;
    after_1:
    // 0x8023D4A4: j           L_8023D740
    // 0x8023D4A8: nop

        goto L_8023D740;
    // 0x8023D4A8: nop

L_8023D4AC:
    // 0x8023D4AC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8023D4B0: lhu         $v0, 0x56($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X56);
    // 0x8023D4B4: lhu         $a1, 0x66($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X66);
    // 0x8023D4B8: lhu         $v1, 0x66($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X66);
    // 0x8023D4BC: lhu         $a2, 0x64($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X64);
    // 0x8023D4C0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023D4C4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023D4C8: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8023D4CC: sh          $v0, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r2;
    // 0x8023D4D0: jal         0x8003E934
    // 0x8023D4D4: sh          $v1, 0x66($s3)
    MEM_H(0X66, ctx->r19) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8023D4D4: sh          $v1, 0x66($s3)
    MEM_H(0X66, ctx->r19) = ctx->r3;
    after_2:
    // 0x8023D4D8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8023D4DC: lhu         $a2, 0x490($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X490);
    // 0x8023D4E0: lhu         $a1, 0x16($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X16);
    // 0x8023D4E4: lh          $v1, 0x444($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X444);
    // 0x8023D4E8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023D4EC: subu        $a2, $a2, $a1
    ctx->r6 = SUB32(ctx->r6, ctx->r5);
    // 0x8023D4F0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8023D4F4: sh          $a2, 0x4E($s3)
    MEM_H(0X4E, ctx->r19) = ctx->r6;
    // 0x8023D4F8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8023D4FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023D500: lh          $v0, -0x2400($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X2400);
    // 0x8023D504: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023D508: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023D50C: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8023D510: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023D514: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023D518: jal         0x8004DA90
    // 0x8023D51C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8023D51C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_3:
    // 0x8023D520: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023D524: addiu       $a2, $zero, -0x8000
    ctx->r6 = ADD32(0, -0X8000);
    // 0x8023D528: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
L_8023D52C:
    // 0x8023D52C: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x8023D530: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8023D534: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8023D538: sll         $v1, $v0, 5
    ctx->r3 = S32(ctx->r2 << 5);
    // 0x8023D53C: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
    // 0x8023D540: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8023D544: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023D548: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x8023D54C: sh          $v1, 0x186($a1)
    MEM_H(0X186, ctx->r5) = ctx->r3;
    // 0x8023D550: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8023D554: bne         $v0, $zero, L_8023D52C
    if (ctx->r2 != 0) {
        // 0x8023D558: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_8023D52C;
    }
    // 0x8023D558: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8023D55C: lbu         $v0, 0xF($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XF);
    // 0x8023D560: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023D564: sb          $v0, 0xF($s3)
    MEM_B(0XF, ctx->r19) = ctx->r2;
    // 0x8023D568: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x8023D56C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023D570: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x8023D574: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D578: bgez        $v0, L_8023D740
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023D57C: nop
    
            goto L_8023D740;
    }
    // 0x8023D57C: nop

    // 0x8023D580: lbu         $v0, 0xA($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XA);
    // 0x8023D584: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x8023D588: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D58C: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8023D590: sb          $v0, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r2;
    // 0x8023D594: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023D598: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
    // 0x8023D59C: j           L_8023D740
    // 0x8023D5A0: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
        goto L_8023D740;
    // 0x8023D5A0: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
L_8023D5A4:
    // 0x8023D5A4: lhu         $v0, 0x444($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X444);
    // 0x8023D5A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023D5AC: sh          $v0, 0x444($s3)
    MEM_H(0X444, ctx->r19) = ctx->r2;
    // 0x8023D5B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D5B4: bgez        $v0, L_8023D740
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023D5B8: addiu       $s2, $s3, 0x480
        ctx->r18 = ADD32(ctx->r19, 0X480);
            goto L_8023D740;
    }
    // 0x8023D5B8: addiu       $s2, $s3, 0x480
    ctx->r18 = ADD32(ctx->r19, 0X480);
    // 0x8023D5BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023D5C0: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x8023D5C4: lbu         $a2, 0xA($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0XA);
    // 0x8023D5C8: addiu       $s1, $s3, 0x478
    ctx->r17 = ADD32(ctx->r19, 0X478);
    // 0x8023D5CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023D5D0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023D5D4: sh          $v0, 0x444($s3)
    MEM_H(0X444, ctx->r19) = ctx->r2;
    // 0x8023D5D8: addiu       $v0, $zero, -0x60
    ctx->r2 = ADD32(0, -0X60);
    // 0x8023D5DC: sh          $v0, 0x490($s3)
    MEM_H(0X490, ctx->r19) = ctx->r2;
    // 0x8023D5E0: lui         $v0, 0xFF3F
    ctx->r2 = S32(0XFF3F << 16);
    // 0x8023D5E4: sw          $v0, 0x484($s3)
    MEM_W(0X484, ctx->r19) = ctx->r2;
    // 0x8023D5E8: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8023D5EC: sb          $zero, 0xAC($s3)
    MEM_B(0XAC, ctx->r19) = 0;
    // 0x8023D5F0: sw          $zero, 0x480($s3)
    MEM_W(0X480, ctx->r19) = 0;
    // 0x8023D5F4: sw          $v0, 0x488($s3)
    MEM_W(0X488, ctx->r19) = ctx->r2;
    // 0x8023D5F8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8023D5FC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8023D600: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
    // 0x8023D604: jal         0x8004DD04
    // 0x8023D608: sb          $a2, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_4;
    // 0x8023D608: sb          $a2, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r6;
    after_4:
    // 0x8023D60C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023D610: jal         0x8004EC38
    // 0x8023D614: addiu       $a1, $s3, 0x2C
    ctx->r5 = ADD32(ctx->r19, 0X2C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_5;
    // 0x8023D614: addiu       $a1, $s3, 0x2C
    ctx->r5 = ADD32(ctx->r19, 0X2C);
    after_5:
    // 0x8023D618: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023D61C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023D620: andi        $a2, $v0, 0xFFF
    ctx->r6 = ctx->r2 & 0XFFF;
    // 0x8023D624: addiu       $a3, $zero, 0x3000
    ctx->r7 = ADD32(0, 0X3000);
    // 0x8023D628: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023D62C: jal         0x8004DBA0
    // 0x8023D630: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_6;
    // 0x8023D630: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_6:
    // 0x8023D634: addiu       $s0, $s3, 0x14
    ctx->r16 = ADD32(ctx->r19, 0X14);
    // 0x8023D638: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D63C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023D640: jal         0x8009A3B4
    // 0x8023D644: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8023D644: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8023D648: addiu       $a0, $s3, 0x1C
    ctx->r4 = ADD32(ctx->r19, 0X1C);
    // 0x8023D64C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023D650: jal         0x8009A3B4
    // 0x8023D654: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8023D654: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_8:
    // 0x8023D658: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023D65C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023D660: jal         0x8004EC38
    // 0x8023D664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_9;
    // 0x8023D664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8023D668: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    // 0x8023D66C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023D670: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023D674: jal         0x8002A33C
    // 0x8023D678: sh          $v0, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8023D678: sh          $v0, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r2;
    after_10:
L_8023D67C:
    // 0x8023D67C: jal         0x8003E934
    // 0x8023D680: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_11;
    // 0x8023D680: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_11:
    // 0x8023D684: lhu         $a2, 0x50($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X50);
    // 0x8023D688: lhu         $v1, 0x16($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X16);
    // 0x8023D68C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023D690: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8023D694: sh          $a2, 0x4E($s3)
    MEM_H(0X4E, ctx->r19) = ctx->r6;
    // 0x8023D698: lh          $v0, 0x4($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X4);
    // 0x8023D69C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8023D6A0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023D6A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023D6A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D6AC: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x8023D6B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023D6B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023D6B8: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8023D6BC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023D6C0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023D6C4: jal         0x8004DA90
    // 0x8023D6C8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_12;
    // 0x8023D6C8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_12:
    // 0x8023D6CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023D6D0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8023D6D4: addiu       $a2, $zero, -0x8000
    ctx->r6 = ADD32(0, -0X8000);
    // 0x8023D6D8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
L_8023D6DC:
    // 0x8023D6DC: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x8023D6E0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8023D6E4: subu        $v0, $a3, $v0
    ctx->r2 = SUB32(ctx->r7, ctx->r2);
    // 0x8023D6E8: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8023D6EC: sll         $v1, $v0, 5
    ctx->r3 = S32(ctx->r2 << 5);
    // 0x8023D6F0: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
    // 0x8023D6F4: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8023D6F8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023D6FC: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x8023D700: sh          $v1, 0x186($a1)
    MEM_H(0X186, ctx->r5) = ctx->r3;
    // 0x8023D704: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8023D708: bne         $v0, $zero, L_8023D6DC
    if (ctx->r2 != 0) {
        // 0x8023D70C: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_8023D6DC;
    }
    // 0x8023D70C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8023D710: lbu         $v0, 0xF($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XF);
    // 0x8023D714: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023D718: sb          $v0, 0xF($s3)
    MEM_B(0XF, ctx->r19) = ctx->r2;
    // 0x8023D71C: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x8023D720: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023D724: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x8023D728: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D72C: bgez        $v0, L_8023D740
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023D730: nop
    
            goto L_8023D740;
    }
    // 0x8023D730: nop

    // 0x8023D734: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x8023D738: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x8023D73C: sh          $v0, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r2;
L_8023D740:
    // 0x8023D740: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023D744: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023D748: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023D74C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023D750: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D754: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023D758: jr          $ra
    // 0x8023D75C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023D75C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F12C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F12C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F130: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F134: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F13C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F140: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F144: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F148: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022F14C: jal         0x8004F820
    // 0x8022F150: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F150: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022F154: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F158: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022F15C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F160: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F164: bgez        $a0, L_8022F188
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022F168: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022F188;
    }
    // 0x8022F168: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022F16C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F170: jal         0x8022FEA8
    // 0x8022F174: nop

    func_8022FEA8_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022F174: nop

    after_1:
    // 0x8022F178: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F17C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F180: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022F184: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022F188:
    // 0x8022F188: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022F18C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022F190: bne         $v0, $zero, L_8022F1B4
    if (ctx->r2 != 0) {
        // 0x8022F194: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022F1B4;
    }
    // 0x8022F194: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022F198: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F19C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022F1A0: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022F1A4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022F1A8: jal         0x8022FEA8
    // 0x8022F1AC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022F1AC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022F1B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022F1B4:
    // 0x8022F1B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F1B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F1BC: jr          $ra
    // 0x8022F1C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F1C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AD0C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AD10: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022AD14: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022AD18: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022AD1C: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022AD20: addiu       $v0, $zero, 0x136
    ctx->r2 = ADD32(0, 0X136);
    // 0x8022AD24: beq         $v1, $v0, L_8022AD80
    if (ctx->r3 == ctx->r2) {
        // 0x8022AD28: slti        $v0, $v1, 0x137
        ctx->r2 = SIGNED(ctx->r3) < 0X137 ? 1 : 0;
            goto L_8022AD80;
    }
    // 0x8022AD28: slti        $v0, $v1, 0x137
    ctx->r2 = SIGNED(ctx->r3) < 0X137 ? 1 : 0;
    // 0x8022AD2C: beql        $v0, $zero, L_8022AD4C
    if (ctx->r2 == 0) {
        // 0x8022AD30: addiu       $v0, $zero, 0x1EA
        ctx->r2 = ADD32(0, 0X1EA);
            goto L_8022AD4C;
    }
    goto skip_0;
    // 0x8022AD30: addiu       $v0, $zero, 0x1EA
    ctx->r2 = ADD32(0, 0X1EA);
    skip_0:
    // 0x8022AD34: beq         $v1, $zero, L_8022AD64
    if (ctx->r3 == 0) {
        // 0x8022AD38: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_8022AD64;
    }
    // 0x8022AD38: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022AD3C: beq         $v1, $v0, L_8022AD80
    if (ctx->r3 == ctx->r2) {
        // 0x8022AD40: nop
    
            goto L_8022AD80;
    }
    // 0x8022AD40: nop

    // 0x8022AD44: j           L_8022ADAC
    // 0x8022AD48: nop

        goto L_8022ADAC;
    // 0x8022AD48: nop

L_8022AD4C:
    // 0x8022AD4C: beq         $v1, $v0, L_8022AD80
    if (ctx->r3 == ctx->r2) {
        // 0x8022AD50: addiu       $v0, $zero, 0x262
        ctx->r2 = ADD32(0, 0X262);
            goto L_8022AD80;
    }
    // 0x8022AD50: addiu       $v0, $zero, 0x262
    ctx->r2 = ADD32(0, 0X262);
    // 0x8022AD54: beq         $v1, $v0, L_8022AD90
    if (ctx->r3 == ctx->r2) {
        // 0x8022AD58: addiu       $v0, $zero, 0x89
        ctx->r2 = ADD32(0, 0X89);
            goto L_8022AD90;
    }
    // 0x8022AD58: addiu       $v0, $zero, 0x89
    ctx->r2 = ADD32(0, 0X89);
    // 0x8022AD5C: j           L_8022ADAC
    // 0x8022AD60: nop

        goto L_8022ADAC;
    // 0x8022AD60: nop

L_8022AD64:
    // 0x8022AD64: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8022AD68: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022AD6C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022AD70: jal         0x8022B750
    // 0x8022AD74: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    func_8022B750_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022AD74: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    after_0:
    // 0x8022AD78: j           L_8022ADA4
    // 0x8022AD7C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_8022ADA4;
    // 0x8022AD7C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8022AD80:
    // 0x8022AD80: jal         0x8022B750
    // 0x8022AD84: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8022B750_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022AD84: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x8022AD88: j           L_8022ADAC
    // 0x8022AD8C: nop

        goto L_8022ADAC;
    // 0x8022AD8C: nop

L_8022AD90:
    // 0x8022AD90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AD94: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022AD98: jal         0x8022B750
    // 0x8022AD9C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_8022B750_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022AD9C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_2:
    // 0x8022ADA0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_8022ADA4:
    // 0x8022ADA4: jal         0x8022B784
    // 0x8022ADA8: nop

    func_8022B784_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022ADA8: nop

    after_3:
L_8022ADAC:
    // 0x8022ADAC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022ADB0: jr          $ra
    // 0x8022ADB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ADB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225724_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225724: jr          $ra
    // 0x80225728: nop

    TRACE_RETURN()
    return;
    // 0x80225728: nop

;}
