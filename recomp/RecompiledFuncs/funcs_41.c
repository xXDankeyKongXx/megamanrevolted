#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80225C2C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C30: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225C34: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225C38: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80225C3C: bne         $v1, $v0, L_80225C60
    if (ctx->r3 != ctx->r2) {
        // 0x80225C40: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_80225C60;
    }
    // 0x80225C40: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80225C44: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80225C48: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80225C4C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225C50: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80225C54: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225C58: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225C5C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
L_80225C60:
    // 0x80225C60: bne         $v1, $v0, L_80225CA8
    if (ctx->r3 != ctx->r2) {
        // 0x80225C64: nop
    
            goto L_80225CA8;
    }
    // 0x80225C64: nop

    // 0x80225C68: jal         0x8004F144
    // 0x80225C6C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80225C6C: nop

    after_0:
    // 0x80225C70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80225C74: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80225C78: sb          $v1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r3;
    // 0x80225C7C: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    // 0x80225C80: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80225C84: sh          $v1, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r3;
    // 0x80225C88: addiu       $v1, $zero, -0x194
    ctx->r3 = ADD32(0, -0X194);
    // 0x80225C8C: sh          $v1, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = ctx->r3;
    // 0x80225C90: addiu       $v1, $zero, 0xDF0
    ctx->r3 = ADD32(0, 0XDF0);
    // 0x80225C94: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
    // 0x80225C98: sb          $a0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r4;
    // 0x80225C9C: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x80225CA0: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x80225CA4: sh          $v1, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r3;
L_80225CA8:
    // 0x80225CA8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225CAC: jr          $ra
    // 0x80225CB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225CB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D168_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D168: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022D16C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8022D170: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8022D174: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x8022D178: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8022D17C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8022D180: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8022D184: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8022D188: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022D18C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022D190: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8022D194: lbu         $v1, 0xA($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0XA);
    // 0x8022D198: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022D19C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022D1A0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022D1A4: beq         $v0, $zero, L_8022D57C
    if (ctx->r2 == 0) {
        // 0x8022D1A8: addiu       $s0, $s5, 0x4E0
        ctx->r16 = ADD32(ctx->r21, 0X4E0);
            goto L_8022D57C;
    }
    // 0x8022D1A8: addiu       $s0, $s5, 0x4E0
    ctx->r16 = ADD32(ctx->r21, 0X4E0);
    // 0x8022D1AC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D1B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D1B4: addu        $at, $at, $v0
    gpr jr_addend_8022D1BC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D1B8: lw          $v0, -0x198($at)
    ctx->r2 = ADD32(ctx->r1, -0X198);
    // 0x8022D1BC: jr          $v0
    // 0x8022D1C0: nop

    switch (jr_addend_8022D1BC >> 2) {
        case 0: goto L_8022D1C4; break;
        case 1: goto L_8022D1D8; break;
        case 2: goto L_8022D32C; break;
        case 3: goto L_8022D388; break;
        case 4: goto L_8022D520; break;
        default: switch_error(__func__, 0x8022D1BC, 0x8023FE68);
    }
    // 0x8022D1C0: nop

L_8022D1C4:
    // 0x8022D1C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D1C8: sb          $v0, 0xA($s5)
    MEM_B(0XA, ctx->r21) = ctx->r2;
    // 0x8022D1CC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022D1D0: sb          $zero, 0xB($s5)
    MEM_B(0XB, ctx->r21) = 0;
    // 0x8022D1D4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022D1D8:
    // 0x8022D1D8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022D1DC: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8022D1E0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022D1E4: bgez        $v0, L_8022D210
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D1E8: sh          $v1, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r3;
            goto L_8022D210;
    }
    // 0x8022D1E8: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x8022D1EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D1F0: sb          $v0, 0xA($s5)
    MEM_B(0XA, ctx->r21) = ctx->r2;
    // 0x8022D1F4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D1F8: sb          $v0, 0xAC($s5)
    MEM_B(0XAC, ctx->r21) = ctx->r2;
    // 0x8022D1FC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D200: sb          $v0, 0xAD($s5)
    MEM_B(0XAD, ctx->r21) = ctx->r2;
    // 0x8022D204: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D208: j           L_8022D32C
    // 0x8022D20C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8022D32C;
    // 0x8022D20C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022D210:
    // 0x8022D210: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x8022D214: bne         $v0, $zero, L_8022D57C
    if (ctx->r2 != 0) {
        // 0x8022D218: nop
    
            goto L_8022D57C;
    }
    // 0x8022D218: nop

    // 0x8022D21C: jal         0x8004F144
    // 0x8022D220: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022D220: nop

    after_0:
    // 0x8022D224: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8022D228: beq         $s4, $zero, L_8022D31C
    if (ctx->r20 == 0) {
        // 0x8022D22C: addiu       $s3, $sp, 0x18
        ctx->r19 = ADD32(ctx->r29, 0X18);
            goto L_8022D31C;
    }
    // 0x8022D22C: addiu       $s3, $sp, 0x18
    ctx->r19 = ADD32(ctx->r29, 0X18);
    // 0x8022D230: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022D234: addiu       $s0, $s5, 0x14
    ctx->r16 = ADD32(ctx->r21, 0X14);
    // 0x8022D238: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D23C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D240: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D244: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    // 0x8022D248: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022D24C: sb          $v0, 0x2($s4)
    MEM_B(0X2, ctx->r20) = ctx->r2;
    // 0x8022D250: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022D254: jal         0x8009A3B4
    // 0x8022D258: sb          $v0, 0x3($s4)
    MEM_B(0X3, ctx->r20) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D258: sb          $v0, 0x3($s4)
    MEM_B(0X3, ctx->r20) = ctx->r2;
    after_1:
    // 0x8022D25C: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x8022D260: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022D264: addiu       $s1, $s5, 0x1C
    ctx->r17 = ADD32(ctx->r21, 0X1C);
    // 0x8022D268: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D26C: jal         0x8009A3B4
    // 0x8022D270: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D270: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022D274: lbu         $v1, 0xB($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0XB);
    // 0x8022D278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D27C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D280: lbu         $a1, 0xB($s5)
    ctx->r5 = MEM_BU(ctx->r21, 0XB);
    // 0x8022D284: lhu         $v0, 0x56($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X56);
    // 0x8022D288: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022D28C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D290: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022D294: lhu         $v1, -0x14B8($at)
    ctx->r3 = MEM_HU(ctx->r1, -0X14B8);
    // 0x8022D298: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8022D29C: addu        $a1, $a1, $s5
    ctx->r5 = ADD32(ctx->r5, ctx->r21);
    // 0x8022D2A0: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    // 0x8022D2A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D2A8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D2AC: jal         0x8009A3B4
    // 0x8022D2B0: sh          $v0, 0x56($s5)
    MEM_H(0X56, ctx->r21) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022D2B0: sh          $v0, 0x56($s5)
    MEM_H(0X56, ctx->r21) = ctx->r2;
    after_3:
    // 0x8022D2B4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022D2B8: addiu       $a1, $zero, 0xB40
    ctx->r5 = ADD32(0, 0XB40);
    // 0x8022D2BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D2C0: jal         0x8004DA90
    // 0x8022D2C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8022D2C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x8022D2C8: addiu       $a0, $s4, 0x38
    ctx->r4 = ADD32(ctx->r20, 0X38);
    // 0x8022D2CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D2D0: jal         0x8009A3B4
    // 0x8022D2D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022D2D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022D2D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D2DC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022D2E0: jal         0x8009A3B4
    // 0x8022D2E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022D2E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022D2E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D2EC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D2F0: jal         0x8009A3B4
    // 0x8022D2F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022D2F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x8022D2F8: lbu         $v1, 0xB($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0XB);
    // 0x8022D2FC: lhu         $v0, 0x56($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X56);
    // 0x8022D300: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022D304: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D308: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022D30C: lhu         $v1, -0x14B8($at)
    ctx->r3 = MEM_HU(ctx->r1, -0X14B8);
    // 0x8022D310: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D314: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D318: sh          $v0, 0x56($s5)
    MEM_H(0X56, ctx->r21) = ctx->r2;
L_8022D31C:
    // 0x8022D31C: lbu         $v0, 0xB($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XB);
    // 0x8022D320: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D324: j           L_8022D57C
    // 0x8022D328: sb          $v0, 0xB($s5)
    MEM_B(0XB, ctx->r21) = ctx->r2;
        goto L_8022D57C;
    // 0x8022D328: sb          $v0, 0xB($s5)
    MEM_B(0XB, ctx->r21) = ctx->r2;
L_8022D32C:
    // 0x8022D32C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022D330: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D334: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022D338: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D33C: bgez        $v0, L_8022D57C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D340: addiu       $s1, $zero, 0x6
        ctx->r17 = ADD32(0, 0X6);
            goto L_8022D57C;
    }
    // 0x8022D340: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
    // 0x8022D344: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8022D348: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D34C: sb          $v0, 0xA($s5)
    MEM_B(0XA, ctx->r21) = ctx->r2;
    // 0x8022D350: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D354: sh          $zero, 0x46($s5)
    MEM_H(0X46, ctx->r21) = 0;
    // 0x8022D358: sh          $v0, 0x4E($s5)
    MEM_H(0X4E, ctx->r21) = ctx->r2;
    // 0x8022D35C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8022D360:
    // 0x8022D360: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x8022D364: addu        $v0, $s5, $v0
    ctx->r2 = ADD32(ctx->r21, ctx->r2);
    // 0x8022D368: sb          $v1, 0xFB($v0)
    MEM_B(0XFB, ctx->r2) = ctx->r3;
    // 0x8022D36C: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8022D370: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022D374: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D378: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D37C: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x8022D380: bne         $v0, $zero, L_8022D360
    if (ctx->r2 != 0) {
        // 0x8022D384: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8022D360;
    }
    // 0x8022D384: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8022D388:
    // 0x8022D388: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022D38C: lhu         $a2, 0x46($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X46);
    // 0x8022D390: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D394: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D398: sll         $a2, $a2, 20
    ctx->r6 = S32(ctx->r6 << 20);
    // 0x8022D39C: jal         0x8004DA90
    // 0x8022D3A0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_8;
    // 0x8022D3A0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_8:
    // 0x8022D3A4: lhu         $v1, 0x46($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X46);
    // 0x8022D3A8: lhu         $a1, 0x4E($s5)
    ctx->r5 = MEM_HU(ctx->r21, 0X4E);
    // 0x8022D3AC: lhu         $v0, 0x16($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X16);
    // 0x8022D3B0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022D3B4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022D3B8: addiu       $v0, $v0, -0x46
    ctx->r2 = ADD32(ctx->r2, -0X46);
    // 0x8022D3BC: sh          $v0, 0x16($s5)
    MEM_H(0X16, ctx->r21) = ctx->r2;
    // 0x8022D3C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D3C4: sh          $v1, 0x46($s5)
    MEM_H(0X46, ctx->r21) = ctx->r3;
    // 0x8022D3C8: jal         0x80040F30
    // 0x8022D3CC: sw          $v0, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_9;
    // 0x8022D3CC: sw          $v0, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r2;
    after_9:
    // 0x8022D3D0: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022D3D4: beq         $v0, $zero, L_8022D508
    if (ctx->r2 == 0) {
        // 0x8022D3D8: addiu       $a0, $s2, 0x1C
        ctx->r4 = ADD32(ctx->r18, 0X1C);
            goto L_8022D508;
    }
    // 0x8022D3D8: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x8022D3DC: lbu         $v0, 0x0($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X0);
    // 0x8022D3E0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022D3E4: sb          $v0, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r2;
    // 0x8022D3E8: lh          $a1, 0x56($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X56);
    // 0x8022D3EC: lh          $v0, 0x56($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X56);
    // 0x8022D3F0: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x8022D3F4: addiu       $a3, $s5, 0x1C
    ctx->r7 = ADD32(ctx->r21, 0X1C);
    // 0x8022D3F8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022D3FC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022D400: jal         0x8004FC28
    // 0x8022D404: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004FC28_2B028(rdram, ctx);
        goto after_10;
    // 0x8022D404: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_10:
    // 0x8022D408: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x8022D40C: lbu         $v1, 0xE($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XE);
    // 0x8022D410: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022D414: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8022D418: bne         $v0, $zero, L_8022D444
    if (ctx->r2 != 0) {
        // 0x8022D41C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_8022D444;
    }
    // 0x8022D41C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022D420: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x8022D424: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8022D428: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022D42C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022D430: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022D434: bne         $v1, $zero, L_8022D440
    if (ctx->r3 != 0) {
        // 0x8022D438: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D440;
    }
    // 0x8022D438: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D43C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022D440:
    // 0x8022D440: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022D444:
    // 0x8022D444: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x8022D448: lbu         $v1, 0xE($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XE);
    // 0x8022D44C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8022D450: bnel        $v0, $zero, L_8022D480
    if (ctx->r2 != 0) {
        // 0x8022D454: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8022D480;
    }
    goto skip_0;
    // 0x8022D454: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    skip_0:
    // 0x8022D458: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x8022D45C: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8022D460: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022D464: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022D468: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022D46C: bne         $v1, $zero, L_8022D478
    if (ctx->r3 != 0) {
        // 0x8022D470: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D478;
    }
    // 0x8022D470: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022D478:
    // 0x8022D478: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022D47C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_8022D480:
    // 0x8022D480: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x8022D484: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x8022D488: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x8022D48C: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x8022D490: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x8022D494: addiu       $s3, $zero, 0x40
    ctx->r19 = ADD32(0, 0X40);
    // 0x8022D498: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x8022D49C: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
L_8022D4A0:
    // 0x8022D4A0: jal         0x8004F144
    // 0x8022D4A4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_11;
    // 0x8022D4A4: nop

    after_11:
    // 0x8022D4A8: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8022D4AC: beq         $s4, $zero, L_8022D500
    if (ctx->r20 == 0) {
        // 0x8022D4B0: addiu       $a0, $s4, 0x38
        ctx->r4 = ADD32(ctx->r20, 0X38);
            goto L_8022D500;
    }
    // 0x8022D4B0: addiu       $a0, $s4, 0x38
    ctx->r4 = ADD32(ctx->r20, 0X38);
    // 0x8022D4B4: sll         $s0, $s1, 16
    ctx->r16 = S32(ctx->r17 << 16);
    // 0x8022D4B8: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8022D4BC: sll         $a1, $s0, 3
    ctx->r5 = S32(ctx->r16 << 3);
    // 0x8022D4C0: addu        $a1, $a1, $s5
    ctx->r5 = ADD32(ctx->r5, ctx->r21);
    // 0x8022D4C4: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    // 0x8022D4C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D4CC: sb          $s7, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r23;
    // 0x8022D4D0: sb          $s6, 0x2($s4)
    MEM_B(0X2, ctx->r20) = ctx->r22;
    // 0x8022D4D4: jal         0x8009A3B4
    // 0x8022D4D8: sb          $s3, 0x3($s4)
    MEM_B(0X3, ctx->r20) = ctx->r19;
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x8022D4D8: sb          $s3, 0x3($s4)
    MEM_B(0X3, ctx->r20) = ctx->r19;
    after_12:
    // 0x8022D4DC: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8022D4E0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022D4E4: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8022D4E8: addu        $s0, $s5, $s0
    ctx->r16 = ADD32(ctx->r21, ctx->r16);
    // 0x8022D4EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D4F0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D4F4: slti        $v0, $v0, 0x6
    ctx->r2 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x8022D4F8: bne         $v0, $zero, L_8022D4A0
    if (ctx->r2 != 0) {
        // 0x8022D4FC: sb          $s2, 0xFB($s0)
        MEM_B(0XFB, ctx->r16) = ctx->r18;
            goto L_8022D4A0;
    }
    // 0x8022D4FC: sb          $s2, 0xFB($s0)
    MEM_B(0XFB, ctx->r16) = ctx->r18;
L_8022D500:
    // 0x8022D500: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D504: sb          $v0, 0xA($s5)
    MEM_B(0XA, ctx->r21) = ctx->r2;
L_8022D508:
    // 0x8022D508: lhu         $v0, 0x16($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X16);
    // 0x8022D50C: addiu       $v0, $v0, 0x46
    ctx->r2 = ADD32(ctx->r2, 0X46);
    // 0x8022D510: sh          $v0, 0x16($s5)
    MEM_H(0X16, ctx->r21) = ctx->r2;
    // 0x8022D514: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D518: j           L_8022D57C
    // 0x8022D51C: sw          $v0, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r2;
        goto L_8022D57C;
    // 0x8022D51C: sw          $v0, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r2;
L_8022D520:
    // 0x8022D520: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x8022D524: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x8022D528: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022D52C: beq         $v0, $zero, L_8022D57C
    if (ctx->r2 == 0) {
        // 0x8022D530: nop
    
            goto L_8022D57C;
    }
    // 0x8022D530: nop

    // 0x8022D534: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x8022D538: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x8022D53C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022D540: beq         $v0, $zero, L_8022D57C
    if (ctx->r2 == 0) {
        // 0x8022D544: nop
    
            goto L_8022D57C;
    }
    // 0x8022D544: nop

    // 0x8022D548: jal         0x8004A0DC
    // 0x8022D54C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_8004A0DC_254DC(rdram, ctx);
        goto after_13;
    // 0x8022D54C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_13:
    // 0x8022D550: jal         0x8004F488
    // 0x8022D554: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_14;
    // 0x8022D554: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_14:
    // 0x8022D558: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x8022D55C: jal         0x8004F4F8
    // 0x8022D560: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_15;
    // 0x8022D560: nop

    after_15:
    // 0x8022D564: jal         0x8004F4F8
    // 0x8022D568: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_16;
    // 0x8022D568: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    after_16:
    // 0x8022D56C: lbu         $a2, 0x3($s5)
    ctx->r6 = MEM_BU(ctx->r21, 0X3);
    // 0x8022D570: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022D574: jal         0x8007A290
    // 0x8022D578: addiu       $a1, $a0, 0x180
    ctx->r5 = ADD32(ctx->r4, 0X180);
    func_8007A290_55690(rdram, ctx);
        goto after_17;
    // 0x8022D578: addiu       $a1, $a0, 0x180
    ctx->r5 = ADD32(ctx->r4, 0X180);
    after_17:
L_8022D57C:
    // 0x8022D57C: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x8022D580: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8022D584: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8022D588: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8022D58C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8022D590: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8022D594: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022D598: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022D59C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022D5A0: jr          $ra
    // 0x8022D5A4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8022D5A4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_802316B0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802316B0: jr          $ra
    // 0x802316B4: nop

    TRACE_RETURN()
    return;
    // 0x802316B4: nop

;}
RECOMP_FUNC void func_8022FE94_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FE94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FE98: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FE9C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FEA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FEA4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022FEA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FEAC: lw          $v1, 0x4F4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4F4);
    // 0x8022FEB0: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022FEB4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022FEB8: and         $a1, $v1, $v0
    ctx->r5 = ctx->r3 & ctx->r2;
    // 0x8022FEBC: beq         $a1, $zero, L_802300C0
    if (ctx->r5 == 0) {
        // 0x8022FEC0: addiu       $s2, $s1, 0x4E0
        ctx->r18 = ADD32(ctx->r17, 0X4E0);
            goto L_802300C0;
    }
    // 0x8022FEC0: addiu       $s2, $s1, 0x4E0
    ctx->r18 = ADD32(ctx->r17, 0X4E0);
    // 0x8022FEC4: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022FEC8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022FECC: beql        $v0, $zero, L_802300B8
    if (ctx->r2 == 0) {
        // 0x8022FED0: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_802300B8;
    }
    goto skip_0;
    // 0x8022FED0: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8022FED4: lhu         $v0, 0x6E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6E);
    // 0x8022FED8: lhu         $v1, 0x6E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6E);
    // 0x8022FEDC: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022FEE0: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x8022FEE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FEE8: bgtz        $v0, L_8022FF2C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022FEEC: sh          $v1, 0xB2($s1)
        MEM_H(0XB2, ctx->r17) = ctx->r3;
            goto L_8022FF2C;
    }
    // 0x8022FEEC: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    // 0x8022FEF0: lhu         $v0, 0x4E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E0);
    // 0x8022FEF4: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x8022FEF8: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x8022FEFC: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x8022FF00: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022FF04: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022FF08: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022FF0C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022FF10: sh          $v0, 0x4E0($s1)
    MEM_H(0X4E0, ctx->r17) = ctx->r2;
    // 0x8022FF14: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022FF18: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022FF1C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022FF20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FF24: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x8022FF28: sll         $a1, $v0, 4
    ctx->r5 = S32(ctx->r2 << 4);
L_8022FF2C:
    // 0x8022FF2C: lhu         $v0, 0x4E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E0);
    // 0x8022FF30: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022FF34: beq         $v0, $zero, L_80230064
    if (ctx->r2 == 0) {
        // 0x8022FF38: nop
    
            goto L_80230064;
    }
    // 0x8022FF38: nop

    // 0x8022FF3C: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022FF40: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8022FF44: lw          $v0, 0x3C60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C60);
    // 0x8022FF48: lhu         $v1, 0x4EA($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4EA);
    // 0x8022FF4C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8022FF50: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022FF54: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022FF58: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022FF5C: sh          $v1, 0x4EA($s1)
    MEM_H(0X4EA, ctx->r17) = ctx->r3;
    // 0x8022FF60: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8022FF64: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022FF68: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022FF6C: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x8022FF70: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022FF74: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022FF78: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022FF7C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022FF80: bne         $v1, $zero, L_802300A4
    if (ctx->r3 != 0) {
        // 0x8022FF84: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_802300A4;
    }
    // 0x8022FF84: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022FF88: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022FF8C: jal         0x8002A33C
    // 0x8022FF90: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022FF90: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_0:
    // 0x8022FF94: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022FF98: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x8022FF9C: beq         $v0, $zero, L_80230058
    if (ctx->r2 == 0) {
        // 0x8022FFA0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80230058;
    }
    // 0x8022FFA0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022FFA4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FFA8: addu        $at, $at, $v0
    gpr jr_addend_8022FFB0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FFAC: lw          $v0, -0xA8($at)
    ctx->r2 = ADD32(ctx->r1, -0XA8);
    // 0x8022FFB0: jr          $v0
    // 0x8022FFB4: nop

    switch (jr_addend_8022FFB0 >> 2) {
        case 0: goto L_8022FFCC; break;
        case 1: goto L_8022FFEC; break;
        case 2: goto L_8022FFEC; break;
        case 3: goto L_8022FFEC; break;
        case 4: goto L_8022FFB8; break;
        case 5: goto L_8022FFB8; break;
        case 6: goto L_80230058; break;
        case 7: goto L_80230058; break;
        case 8: goto L_80230058; break;
        case 9: goto L_8022FFEC; break;
        case 10: goto L_8022FFB8; break;
        case 11: goto L_8022FFEC; break;
        default: switch_error(__func__, 0x8022FFB0, 0x8023FF58);
    }
    // 0x8022FFB4: nop

L_8022FFB8:
    // 0x8022FFB8: lh          $s0, 0x16($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X16);
    // 0x8022FFBC: jal         0x8003E934
    // 0x8022FFC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022FFC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022FFC4: bne         $s0, $v0, L_8022FFD8
    if (ctx->r16 != ctx->r2) {
        // 0x8022FFC8: nop
    
            goto L_8022FFD8;
    }
    // 0x8022FFC8: nop

L_8022FFCC:
    // 0x8022FFCC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022FFD0: j           L_80230058
    // 0x8022FFD4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80230058;
    // 0x8022FFD4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022FFD8:
    // 0x8022FFD8: lh          $s0, 0x16($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X16);
    // 0x8022FFDC: jal         0x8003EF5C
    // 0x8022FFE0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003EF5C_1A35C(rdram, ctx);
        goto after_2;
    // 0x8022FFE0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022FFE4: bne         $s0, $v0, L_8022FFF8
    if (ctx->r16 != ctx->r2) {
        // 0x8022FFE8: nop
    
            goto L_8022FFF8;
    }
    // 0x8022FFE8: nop

L_8022FFEC:
    // 0x8022FFEC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022FFF0: j           L_80230058
    // 0x8022FFF4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80230058;
    // 0x8022FFF4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022FFF8:
    // 0x8022FFF8: jal         0x8004F144
    // 0x8022FFFC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x8022FFFC: nop

    after_3:
    // 0x80230000: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230004: beq         $v1, $zero, L_80230030
    if (ctx->r3 == 0) {
        // 0x80230008: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80230030;
    }
    // 0x80230008: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8023000C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80230010: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230014: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80230018: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023001C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230020: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80230024: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80230028: jal         0x8009A3B4
    // 0x8023002C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023002C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_4:
L_80230030:
    // 0x80230030: jal         0x8004F488
    // 0x80230034: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_5;
    // 0x80230034: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80230038: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023003C: lb          $a2, 0xD($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XD);
    // 0x80230040: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80230044: jal         0x8007A290
    // 0x80230048: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A290_55690(rdram, ctx);
        goto after_6;
    // 0x80230048: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8023004C: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x80230050: jal         0x8002A33C
    // 0x80230054: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80230054: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
L_80230058:
    // 0x80230058: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8023005C: j           L_802300AC
    // 0x80230060: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_802300AC;
    // 0x80230060: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_80230064:
    // 0x80230064: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x80230068: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8023006C: lw          $v0, 0x3C60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C60);
    // 0x80230070: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230074: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230078: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8023007C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80230080: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80230084: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230088: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x8023008C: lh          $v1, 0x4EA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4EA);
    // 0x80230090: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80230094: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80230098: bne         $v1, $zero, L_802300A4
    if (ctx->r3 != 0) {
        // 0x8023009C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_802300A4;
    }
    // 0x8023009C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x802300A0: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_802300A4:
    // 0x802300A4: jal         0x8002A33C
    // 0x802300A8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x802300A8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_8:
L_802300AC:
    // 0x802300AC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x802300B0: j           L_802300C0
    // 0x802300B4: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
        goto L_802300C0;
    // 0x802300B4: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
L_802300B8:
    // 0x802300B8: jal         0x8002A33C
    // 0x802300BC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x802300BC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_9:
L_802300C0:
    // 0x802300C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802300C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802300C8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802300CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802300D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802300D4: jr          $ra
    // 0x802300D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802300D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802300DC: nop

;}
RECOMP_FUNC void func_80231598_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231598: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023159C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802315A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802315A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802315A8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802315AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802315B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802315B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802315B8: lw          $v0, -0xF04($at)
    ctx->r2 = MEM_W(ctx->r1, -0XF04);
    // 0x802315BC: jalr        $v0
    // 0x802315C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802315C0: nop

    after_0:
    // 0x802315C4: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x802315C8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802315CC: xori        $v1, $v0, 0x6
    ctx->r3 = ctx->r2 ^ 0X6;
    // 0x802315D0: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802315D4: xori        $v0, $v0, 0x16
    ctx->r2 = ctx->r2 ^ 0X16;
    // 0x802315D8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802315DC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802315E0: beq         $v1, $zero, L_802315F4
    if (ctx->r3 == 0) {
        // 0x802315E4: addiu       $a0, $zero, 0x90
        ctx->r4 = ADD32(0, 0X90);
            goto L_802315F4;
    }
    // 0x802315E4: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    // 0x802315E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802315EC: jal         0x8002A2F8
    // 0x802315F0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x802315F0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
L_802315F4:
    // 0x802315F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802315F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802315FC: jr          $ra
    // 0x80231600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253F0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802253F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802253F8: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x802253FC: addiu       $s0, $s0, -0x2860
    ctx->r16 = ADD32(ctx->r16, -0X2860);
    // 0x80225400: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225404: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225408: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x8022540C: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x80225410: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x80225414: beq         $v1, $v0, L_8022544C
    if (ctx->r3 == ctx->r2) {
        // 0x80225418: ori         $s1, $zero, 0xFFFF
        ctx->r17 = 0 | 0XFFFF;
            goto L_8022544C;
    }
    // 0x80225418: ori         $s1, $zero, 0xFFFF
    ctx->r17 = 0 | 0XFFFF;
L_8022541C:
    // 0x8022541C: jal         0x8006033C
    // 0x80225420: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225420: nop

    after_0:
    // 0x80225424: beql        $v0, $zero, L_80225440
    if (ctx->r2 == 0) {
        // 0x80225428: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80225440;
    }
    goto skip_0;
    // 0x80225428: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x8022542C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80225430: jal         0x80060690
    // 0x80225434: nop

    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x80225434: nop

    after_1:
    // 0x80225438: j           L_8022544C
    // 0x8022543C: nop

        goto L_8022544C;
    // 0x8022543C: nop

L_80225440:
    // 0x80225440: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x80225444: bne         $a0, $s1, L_8022541C
    if (ctx->r4 != ctx->r17) {
        // 0x80225448: nop
    
            goto L_8022541C;
    }
    // 0x80225448: nop

L_8022544C:
    // 0x8022544C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225450: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225454: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225458: jr          $ra
    // 0x8022545C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022545C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231788_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231788: jr          $ra
    // 0x8023178C: nop

    TRACE_RETURN()
    return;
    // 0x8023178C: nop

;}
RECOMP_FUNC void func_80230F7C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230F7C: jr          $ra
    // 0x80230F80: nop

    TRACE_RETURN()
    return;
    // 0x80230F80: nop

;}
RECOMP_FUNC void func_80226E84_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226E88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226E8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226E90: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226E94: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226E98: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226E9C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226EA0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80226EA4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80226EA8: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80226EAC: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80226EB0: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80226EB4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226EB8: jal         0x8004D5D4
    // 0x80226EBC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226EBC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226EC0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80226EC4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226EC8: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80226ECC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226ED0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226ED4: andi        $v1, $v1, 0x20
    ctx->r3 = ctx->r3 & 0X20;
    // 0x80226ED8: beq         $v1, $zero, L_80226EE8
    if (ctx->r3 == 0) {
        // 0x80226EDC: sh          $v0, 0x158($s0)
        MEM_H(0X158, ctx->r16) = ctx->r2;
            goto L_80226EE8;
    }
    // 0x80226EDC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226EE0: j           L_80226EF0
    // 0x80226EE4: sh          $zero, 0x328($s0)
    MEM_H(0X328, ctx->r16) = 0;
        goto L_80226EF0;
    // 0x80226EE4: sh          $zero, 0x328($s0)
    MEM_H(0X328, ctx->r16) = 0;
L_80226EE8:
    // 0x80226EE8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80226EEC: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_80226EF0:
    // 0x80226EF0: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x80226EF4: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80226EF8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80226EFC: beq         $v0, $zero, L_80226F08
    if (ctx->r2 == 0) {
        // 0x80226F00: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226F08;
    }
    // 0x80226F00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F04: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
L_80226F08:
    // 0x80226F08: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x80226F0C: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x80226F10: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x80226F14: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80226F18: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80226F1C: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x80226F20: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80226F24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226F28: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x80226F2C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80226F30: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80226F34: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226F38: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x80226F3C: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    // 0x80226F40: jal         0x800540BC
    // 0x80226F44: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80226F44: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    after_1:
    // 0x80226F48: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226F4C: sh          $zero, 0x34($s1)
    MEM_H(0X34, ctx->r17) = 0;
    // 0x80226F50: sh          $zero, 0x36($s1)
    MEM_H(0X36, ctx->r17) = 0;
    // 0x80226F54: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x80226F58: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x80226F5C: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    // 0x80226F60: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80226F64: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x80226F68: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x80226F6C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80226F70: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80226F74: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x80226F78: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80226F7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226F80: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x80226F84: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80226F88: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80226F8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226F90: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80226F94: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80226F98: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80226F9C: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80226FA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226FA4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226FA8: mflo        $v1
    ctx->r3 = lo;
    // 0x80226FAC: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80226FB0: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x80226FB4: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80226FB8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226FBC: addiu       $v0, $v0, -0x1768
    ctx->r2 = ADD32(ctx->r2, -0X1768);
    // 0x80226FC0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80226FC4: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80226FC8: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80226FCC: beq         $a0, $zero, L_8022700C
    if (ctx->r4 == 0) {
        // 0x80226FD0: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022700C;
    }
    // 0x80226FD0: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80226FD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226FD8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80226FDC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80226FE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226FE4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226FE8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80226FEC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80226FF0: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80226FF4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80226FF8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80226FFC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227000: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227004: j           L_8022703C
    // 0x80227008: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8022703C;
    // 0x80227008: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022700C:
    // 0x8022700C: jal         0x8003E934
    // 0x80227010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80227010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227014: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227018: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022701C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227020: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227024: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227028: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022702C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227030: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227034: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227038: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022703C:
    // 0x8022703C: jal         0x80050294
    // 0x80227040: nop

    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80227040: nop

    after_3:
    // 0x80227044: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227048: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022704C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227050: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227054: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227058: jr          $ra
    // 0x8022705C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022705C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A6A0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A6A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A6A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A6A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A6AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A6B0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023A6B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023A6B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023A6BC: jal         0x8004F144
    // 0x8023A6C0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023A6C0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    after_0:
    // 0x8023A6C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023A6C8: beq         $v1, $zero, L_8023A714
    if (ctx->r3 == 0) {
        // 0x8023A6CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023A714;
    }
    // 0x8023A6CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A6D0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023A6D4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023A6D8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023A6DC: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8023A6E0: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x8023A6E4: sb          $zero, 0xE($v1)
    MEM_B(0XE, ctx->r3) = 0;
    // 0x8023A6E8: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x8023A6EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A6F0: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x8023A6F4: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
    // 0x8023A6F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A6FC: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x8023A700: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8023A704: sh          $s1, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r17;
    // 0x8023A708: sh          $s2, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r18;
    // 0x8023A70C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A710: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
L_8023A714:
    // 0x8023A714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A718: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023A71C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A720: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A724: jr          $ra
    // 0x8023A728: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A728: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802371A8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802371A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802371AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802371B0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802371B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802371B8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802371BC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802371C0: jal         0x8006033C
    // 0x802371C4: addiu       $a0, $zero, 0x615
    ctx->r4 = ADD32(0, 0X615);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802371C4: addiu       $a0, $zero, 0x615
    ctx->r4 = ADD32(0, 0X615);
    after_0:
    // 0x802371C8: bne         $v0, $zero, L_802371FC
    if (ctx->r2 != 0) {
        // 0x802371CC: nop
    
            goto L_802371FC;
    }
    // 0x802371CC: nop

    // 0x802371D0: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x802371D4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802371D8: beq         $v0, $zero, L_802371FC
    if (ctx->r2 == 0) {
        // 0x802371DC: nop
    
            goto L_802371FC;
    }
    // 0x802371DC: nop

    // 0x802371E0: bltz        $v1, L_802371FC
    if (SIGNED(ctx->r3) < 0) {
        // 0x802371E4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802371FC;
    }
    // 0x802371E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802371E8: jal         0x80238028
    // 0x802371EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_1;
    // 0x802371EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802371F0: beq         $v0, $zero, L_802371FC
    if (ctx->r2 == 0) {
        // 0x802371F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802371FC;
    }
    // 0x802371F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802371F8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802371FC:
    // 0x802371FC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237200: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237204: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237208: jr          $ra
    // 0x8023720C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023720C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228CB0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228CB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228CB4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228CB8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228CBC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228CC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228CC4: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x80228CC8: addiu       $v1, $zero, 0x1C
    ctx->r3 = ADD32(0, 0X1C);
    // 0x80228CCC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228CD0: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x80228CD4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228CD8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228CDC: bne         $v0, $v1, L_80228D3C
    if (ctx->r2 != ctx->r3) {
        // 0x80228CE0: addiu       $a1, $zero, 0x14A
        ctx->r5 = ADD32(0, 0X14A);
            goto L_80228D3C;
    }
    // 0x80228CE0: addiu       $a1, $zero, 0x14A
    ctx->r5 = ADD32(0, 0X14A);
    // 0x80228CE4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228CE8: lw          $v0, 0x90($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X90);
    // 0x80228CEC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80228CF0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80228CF4: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x80228CF8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228CFC: lw          $v0, 0x94($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X94);
    // 0x80228D00: addiu       $a3, $zero, 0x244
    ctx->r7 = ADD32(0, 0X244);
    // 0x80228D04: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80228D08: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x80228D0C: jal         0x8023A350
    // 0x80228D10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8023A350_ovl2(rdram, ctx);
        goto after_0;
    // 0x80228D10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80228D14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228D18: addiu       $a1, $zero, -0x14A
    ctx->r5 = ADD32(0, -0X14A);
    // 0x80228D1C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80228D20: addiu       $a3, $zero, 0x244
    ctx->r7 = ADD32(0, 0X244);
    // 0x80228D24: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228D28: sw          $v0, 0x90($at)
    MEM_W(0X90, ctx->r1) = ctx->r2;
    // 0x80228D2C: jal         0x8023A350
    // 0x80228D30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8023A350_ovl2(rdram, ctx);
        goto after_1;
    // 0x80228D30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x80228D34: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228D38: sw          $v0, 0x94($at)
    MEM_W(0X94, ctx->r1) = ctx->r2;
L_80228D3C:
    // 0x80228D3C: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x80228D40: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228D44: bne         $v1, $v0, L_80228D7C
    if (ctx->r3 != ctx->r2) {
        // 0x80228D48: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228D7C;
    }
    // 0x80228D48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228D4C: addiu       $a1, $zero, 0x14A
    ctx->r5 = ADD32(0, 0X14A);
    // 0x80228D50: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80228D54: addiu       $a3, $zero, 0x208
    ctx->r7 = ADD32(0, 0X208);
    // 0x80228D58: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x80228D5C: jal         0x8023A350
    // 0x80228D60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8023A350_ovl2(rdram, ctx);
        goto after_2;
    // 0x80228D60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x80228D64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228D68: addiu       $a1, $zero, -0x14A
    ctx->r5 = ADD32(0, -0X14A);
    // 0x80228D6C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80228D70: addiu       $a3, $zero, 0x208
    ctx->r7 = ADD32(0, 0X208);
    // 0x80228D74: jal         0x8023A350
    // 0x80228D78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8023A350_ovl2(rdram, ctx);
        goto after_3;
    // 0x80228D78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
L_80228D7C:
    // 0x80228D7C: lh          $v0, 0xC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XC);
    // 0x80228D80: bne         $v0, $zero, L_80228DB4
    if (ctx->r2 != 0) {
        // 0x80228D84: lui         $v0, 0xFFFE
        ctx->r2 = S32(0XFFFE << 16);
            goto L_80228DB4;
    }
    // 0x80228D84: lui         $v0, 0xFFFE
    ctx->r2 = S32(0XFFFE << 16);
    // 0x80228D88: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228D8C: lw          $v0, 0x90($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X90);
    // 0x80228D90: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80228D94: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x80228D98: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228D9C: lw          $v0, 0x94($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X94);
    // 0x80228DA0: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    // 0x80228DA4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80228DA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228DAC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80228DB0: lui         $v0, 0xFFFE
    ctx->r2 = S32(0XFFFE << 16);
L_80228DB4:
    // 0x80228DB4: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x80228DB8: lhu         $a0, 0x56($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X56);
    // 0x80228DBC: ori         $v0, $v0, 0xF8B0
    ctx->r2 = ctx->r2 | 0XF8B0;
    // 0x80228DC0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228DC4: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x80228DC8: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80228DCC: sh          $a0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r4;
    // 0x80228DD0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228DD4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80228DD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228DDC: jr          $ra
    // 0x80228DE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228DE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226650_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226650: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226654: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226658: bne         $v1, $v0, L_8022668C
    if (ctx->r3 != ctx->r2) {
        // 0x8022665C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8022668C;
    }
    // 0x8022665C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80226660: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226664: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226668: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x8022666C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80226670: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x80226674: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226678: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022667C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226680: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x80226684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226688: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_8022668C:
    // 0x8022668C: jr          $ra
    // 0x80226690: nop

    TRACE_RETURN()
    return;
    // 0x80226690: nop

;}
RECOMP_FUNC void func_8022D814_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D814: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022D818: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D81C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D820: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022D824: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x8022D828: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8022D82C: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022D830: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022D834: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022D838: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022D83C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D840: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D844: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022D848: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022D84C: beq         $v0, $zero, L_8022DA94
    if (ctx->r2 == 0) {
        // 0x8022D850: addiu       $s0, $s1, 0x4E0
        ctx->r16 = ADD32(ctx->r17, 0X4E0);
            goto L_8022DA94;
    }
    // 0x8022D850: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x8022D854: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D858: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D85C: addu        $at, $at, $v0
    gpr jr_addend_8022D864 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D860: lw          $v0, -0x168($at)
    ctx->r2 = ADD32(ctx->r1, -0X168);
    // 0x8022D864: jr          $v0
    // 0x8022D868: nop

    switch (jr_addend_8022D864 >> 2) {
        case 0: goto L_8022D86C; break;
        case 1: goto L_8022D894; break;
        case 2: goto L_8022D8DC; break;
        case 3: goto L_8022D918; break;
        case 4: goto L_8022DA0C; break;
        case 5: goto L_8022DA3C; break;
        default: switch_error(__func__, 0x8022D864, 0x8023FE98);
    }
    // 0x8022D868: nop

L_8022D86C:
    // 0x8022D86C: addiu       $a0, $zero, 0xBF
    ctx->r4 = ADD32(0, 0XBF);
    // 0x8022D870: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022D874: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D878: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022D87C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022D880: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022D884: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022D888: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022D88C: jal         0x8002A33C
    // 0x8022D890: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022D890: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    after_0:
L_8022D894:
    // 0x8022D894: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022D898: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D89C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022D8A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D8A4: bgez        $v0, L_8022DA94
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D8A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DA94;
    }
    // 0x8022D8A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D8AC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022D8B0: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x8022D8B4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D8B8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022D8BC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022D8C0: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x8022D8C4: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x8022D8C8: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x8022D8CC: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x8022D8D0: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x8022D8D4: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x8022D8D8: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
L_8022D8DC:
    // 0x8022D8DC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022D8E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D8E4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022D8E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D8EC: bgez        $v0, L_8022DA94
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D8F0: addiu       $a0, $zero, 0xC0
        ctx->r4 = ADD32(0, 0XC0);
            goto L_8022DA94;
    }
    // 0x8022D8F0: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    // 0x8022D8F4: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022D8F8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022D8FC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022D900: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8022D904: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D908: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022D90C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022D910: jal         0x8002A33C
    // 0x8022D914: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022D914: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    after_1:
L_8022D918:
    // 0x8022D918: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022D91C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D920: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022D924: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D928: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D92C: bgez        $v1, L_8022D948
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022D930: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D948;
    }
    // 0x8022D930: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D934: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D938: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022D93C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D940: j           L_8022DA0C
    // 0x8022D944: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8022DA0C;
    // 0x8022D944: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022D948:
    // 0x8022D948: bne         $v1, $v0, L_8022DA94
    if (ctx->r3 != ctx->r2) {
        // 0x8022D94C: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_8022DA94;
    }
    // 0x8022D94C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8022D950: addiu       $fp, $zero, 0x5
    ctx->r30 = ADD32(0, 0X5);
    // 0x8022D954: addiu       $s7, $zero, 0x80
    ctx->r23 = ADD32(0, 0X80);
    // 0x8022D958: addiu       $s6, $zero, 0x42
    ctx->r22 = ADD32(0, 0X42);
    // 0x8022D95C: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x8022D960: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x8022D964: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x8022D968: addiu       $s2, $s2, -0x14A4
    ctx->r18 = ADD32(ctx->r18, -0X14A4);
L_8022D96C:
    // 0x8022D96C: jal         0x8004F144
    // 0x8022D970: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8022D970: nop

    after_2:
    // 0x8022D974: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022D978: beq         $s0, $zero, L_8022D9D0
    if (ctx->r16 == 0) {
        // 0x8022D97C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022D9D0;
    }
    // 0x8022D97C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D980: sb          $fp, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r30;
    // 0x8022D984: sb          $s7, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r23;
    // 0x8022D988: sb          $s6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r22;
    // 0x8022D98C: sb          $s5, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r21;
    // 0x8022D990: lh          $a1, 0x0($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X0);
    // 0x8022D994: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D998: jal         0x8004DA90
    // 0x8022D99C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022D99C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8022D9A0: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022D9A4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022D9A8: jal         0x8009A3B4
    // 0x8022D9AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022D9AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022D9B0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022D9B4: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022D9B8: jal         0x8009A3B4
    // 0x8022D9BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022D9BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022D9C0: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022D9C4: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022D9C8: jal         0x8009A3B4
    // 0x8022D9CC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022D9CC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
L_8022D9D0:
    // 0x8022D9D0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022D9D4: slti        $v0, $s3, 0x3
    ctx->r2 = SIGNED(ctx->r19) < 0X3 ? 1 : 0;
    // 0x8022D9D8: bne         $v0, $zero, L_8022D96C
    if (ctx->r2 != 0) {
        // 0x8022D9DC: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_8022D96C;
    }
    // 0x8022D9DC: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x8022D9E0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8022D9E4: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    // 0x8022D9E8: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x8022D9EC: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022D9F0: jal         0x8003491C
    // 0x8022D9F4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_7;
    // 0x8022D9F4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022D9F8: addiu       $a0, $zero, 0xC1
    ctx->r4 = ADD32(0, 0XC1);
    // 0x8022D9FC: jal         0x8002A33C
    // 0x8022DA00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022DA00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022DA04: j           L_8022DA94
    // 0x8022DA08: nop

        goto L_8022DA94;
    // 0x8022DA08: nop

L_8022DA0C:
    // 0x8022DA0C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022DA10: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DA14: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022DA18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DA1C: bgez        $v0, L_8022DA94
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DA20: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8022DA94;
    }
    // 0x8022DA20: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022DA24: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022DA28: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8022DA2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DA30: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022DA34: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022DA38: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022DA3C:
    // 0x8022DA3C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022DA40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DA44: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022DA48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DA4C: bgez        $v0, L_8022DA94
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DA50: lui         $v0, 0xC
        ctx->r2 = S32(0XC << 16);
            goto L_8022DA94;
    }
    // 0x8022DA50: lui         $v0, 0xC
    ctx->r2 = S32(0XC << 16);
    // 0x8022DA54: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022DA58: ori         $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 | 0X7FFF;
    // 0x8022DA5C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022DA60: bnel        $v0, $zero, L_8022DA7C
    if (ctx->r2 != 0) {
        // 0x8022DA64: addiu       $v1, $zero, 0xA
        ctx->r3 = ADD32(0, 0XA);
            goto L_8022DA7C;
    }
    goto skip_0;
    // 0x8022DA64: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    skip_0:
    // 0x8022DA68: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022DA6C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022DA70: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x8022DA74: j           L_8022DA88
    // 0x8022DA78: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
        goto L_8022DA88;
    // 0x8022DA78: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
L_8022DA7C:
    // 0x8022DA7C: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022DA80: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x8022DA84: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
L_8022DA88:
    // 0x8022DA88: sb          $v1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r3;
    // 0x8022DA8C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8022DA90: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_8022DA94:
    // 0x8022DA94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022DA98: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x8022DA9C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DAA0: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022DAA4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022DAA8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022DAAC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DAB0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022DAB4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DAB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DABC: jr          $ra
    // 0x8022DAC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022DAC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802263AC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263AC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802263B0: bne         $v0, $zero, L_802263C8
    if (ctx->r2 != 0) {
        // 0x802263B4: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_802263C8;
    }
    // 0x802263B4: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x802263B8: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802263BC: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802263C0: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802263C4: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_802263C8:
    // 0x802263C8: jr          $ra
    // 0x802263CC: nop

    TRACE_RETURN()
    return;
    // 0x802263CC: nop

;}
RECOMP_FUNC void func_8023BEE4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BEE4: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8023BEE8: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8023BEEC: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x8023BEF0: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x8023BEF4: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x8023BEF8: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x8023BEFC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023BF00: bgez        $v1, L_8023BF40
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023BF04: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8023BF40;
    }
    // 0x8023BF04: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8023BF08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023BF0C: bne         $v1, $v0, L_8023BF2C
    if (ctx->r3 != ctx->r2) {
        // 0x8023BF10: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_8023BF2C;
    }
    // 0x8023BF10: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8023BF14: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x8023BF18: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023BF1C: bne         $v1, $v0, L_8023BF4C
    if (ctx->r3 != ctx->r2) {
        // 0x8023BF20: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023BF4C;
    }
    // 0x8023BF20: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023BF24: j           L_8023BF70
    // 0x8023BF28: nop

        goto L_8023BF70;
    // 0x8023BF28: nop

L_8023BF2C:
    // 0x8023BF2C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8023BF30: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023BF34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023BF38: j           L_8023BF4C
    // 0x8023BF3C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_8023BF4C;
    // 0x8023BF3C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_8023BF40:
    // 0x8023BF40: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x8023BF44: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8023BF48: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8023BF4C:
    // 0x8023BF4C: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8023BF50: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x8023BF54: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8023BF58: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8023BF5C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8023BF60: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x8023BF64: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x8023BF68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8023BF6C: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_8023BF70:
    // 0x8023BF70: jr          $ra
    // 0x8023BF74: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8023BF74: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8023BF78: nop

    // 0x8023BF7C: nop

;}
RECOMP_FUNC void func_8022C064_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C068: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C06C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C070: jal         0x8004F488
    // 0x8022C074: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8022C074: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022C078: lw          $a0, 0x514($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X514);
    // 0x8022C07C: jal         0x8004F4F8
    // 0x8022C080: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x8022C080: nop

    after_1:
    // 0x8022C084: jal         0x8004F4F8
    // 0x8022C088: lw          $a0, 0x518($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X518);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x8022C088: lw          $a0, 0x518($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X518);
    after_2:
    // 0x8022C08C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C090: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C094: jr          $ra
    // 0x8022C098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239550_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239554: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239558: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023955C: bne         $v0, $zero, L_8023957C
    if (ctx->r2 != 0) {
        // 0x80239560: nop
    
            goto L_8023957C;
    }
    // 0x80239560: nop

    // 0x80239564: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80239568: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023956C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239570: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239574: j           L_80239590
    // 0x80239578: lw          $v0, -0x7E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7E8);
        goto L_80239590;
    // 0x80239578: lw          $v0, -0x7E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7E8);
L_8023957C:
    // 0x8023957C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80239580: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239584: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239588: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023958C: lw          $v0, -0x7F0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7F0);
L_80239590:
    // 0x80239590: jalr        $v0
    // 0x80239594: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80239594: nop

    after_0:
    // 0x80239598: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023959C: jr          $ra
    // 0x802395A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802395A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802320B4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802320B4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802320B8: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x802320BC: lw          $a0, 0x98($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X98);
    // 0x802320C0: lui         $v1, 0x5
    ctx->r3 = S32(0X5 << 16);
    // 0x802320C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802320C8: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x802320CC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802320D0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x802320D4: bne         $v1, $v0, L_802320E8
    if (ctx->r3 != ctx->r2) {
        // 0x802320D8: nop
    
            goto L_802320E8;
    }
    // 0x802320D8: nop

    // 0x802320DC: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x802320E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802320E4: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
L_802320E8:
    // 0x802320E8: jr          $ra
    // 0x802320EC: nop

    TRACE_RETURN()
    return;
    // 0x802320EC: nop

;}
RECOMP_FUNC void func_80225F00_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F00: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225F04: bne         $v0, $zero, L_80225F24
    if (ctx->r2 != 0) {
        // 0x80225F08: addiu       $v1, $zero, 0xB
        ctx->r3 = ADD32(0, 0XB);
            goto L_80225F24;
    }
    // 0x80225F08: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x80225F0C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80225F10: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225F14: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225F18: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x80225F1C: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x80225F20: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
L_80225F24:
    // 0x80225F24: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225F28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225F2C: bne         $v1, $v0, L_80225F50
    if (ctx->r3 != ctx->r2) {
        // 0x80225F30: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_80225F50;
    }
    // 0x80225F30: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80225F34: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
    // 0x80225F38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225F3C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225F40: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
    // 0x80225F44: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225F48: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225F4C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80225F50:
    // 0x80225F50: bne         $v1, $v0, L_80225F68
    if (ctx->r3 != ctx->r2) {
        // 0x80225F54: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80225F68;
    }
    // 0x80225F54: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225F58: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x80225F5C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225F60: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x80225F64: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80225F68:
    // 0x80225F68: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225F6C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80225F70: bne         $v1, $v0, L_80225F94
    if (ctx->r3 != ctx->r2) {
        // 0x80225F74: addiu       $v0, $zero, 0x44
        ctx->r2 = ADD32(0, 0X44);
            goto L_80225F94;
    }
    // 0x80225F74: addiu       $v0, $zero, 0x44
    ctx->r2 = ADD32(0, 0X44);
    // 0x80225F78: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x80225F7C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225F80: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225F84: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x80225F88: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225F8C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225F90: addiu       $v0, $zero, 0x44
    ctx->r2 = ADD32(0, 0X44);
L_80225F94:
    // 0x80225F94: bne         $v1, $v0, L_80225FAC
    if (ctx->r3 != ctx->r2) {
        // 0x80225F98: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80225FAC;
    }
    // 0x80225F98: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80225F9C: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x80225FA0: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225FA4: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x80225FA8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80225FAC:
    // 0x80225FAC: jr          $ra
    // 0x80225FB0: nop

    TRACE_RETURN()
    return;
    // 0x80225FB0: nop

;}
RECOMP_FUNC void func_80230A40_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230A40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230A44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230A48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230A4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230A50: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230A54: bne         $v0, $zero, L_80230A78
    if (ctx->r2 != 0) {
        // 0x80230A58: addiu       $v0, $zero, 0x16
        ctx->r2 = ADD32(0, 0X16);
            goto L_80230A78;
    }
    // 0x80230A58: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80230A5C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x80230A60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230A64: jal         0x80050294
    // 0x80230A68: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230A68: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230A6C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230A70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230A74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230A78:
    // 0x80230A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230A7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230A80: jr          $ra
    // 0x80230A84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230A84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802309D4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802309D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802309D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802309DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802309E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802309E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802309E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802309EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802309F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802309F4: lw          $v0, -0x1190($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1190);
    // 0x802309F8: jalr        $v0
    // 0x802309FC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802309FC: nop

    after_0:
    // 0x80230A00: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80230A04: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80230A08: xori        $v1, $v0, 0x2
    ctx->r3 = ctx->r2 ^ 0X2;
    // 0x80230A0C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80230A10: xori        $v0, $v0, 0x16
    ctx->r2 = ctx->r2 ^ 0X16;
    // 0x80230A14: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80230A18: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230A1C: beq         $v1, $zero, L_80230A30
    if (ctx->r3 == 0) {
        // 0x80230A20: addiu       $a0, $zero, 0x90
        ctx->r4 = ADD32(0, 0X90);
            goto L_80230A30;
    }
    // 0x80230A20: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    // 0x80230A24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230A28: jal         0x8002A2F8
    // 0x80230A2C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x80230A2C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
L_80230A30:
    // 0x80230A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230A34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230A38: jr          $ra
    // 0x80230A3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230A3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E0D0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E0D0: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8022E0D4: lbu         $v1, 0xA($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0XA);
    // 0x8022E0D8: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x8022E0DC: addiu       $t1, $t1, 0x49B0
    ctx->r9 = ADD32(ctx->r9, 0X49B0);
    // 0x8022E0E0: beq         $v1, $zero, L_8022E0FC
    if (ctx->r3 == 0) {
        // 0x8022E0E4: addiu       $t0, $a3, 0x4E0
        ctx->r8 = ADD32(ctx->r7, 0X4E0);
            goto L_8022E0FC;
    }
    // 0x8022E0E4: addiu       $t0, $a3, 0x4E0
    ctx->r8 = ADD32(ctx->r7, 0X4E0);
    // 0x8022E0E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E0EC: beq         $v1, $v0, L_8022E10C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E0F0: nop
    
            goto L_8022E10C;
    }
    // 0x8022E0F0: nop

    // 0x8022E0F4: j           L_8022E22C
    // 0x8022E0F8: nop

        goto L_8022E22C;
    // 0x8022E0F8: nop

L_8022E0FC:
    // 0x8022E0FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E100: sb          $v0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r2;
    // 0x8022E104: sb          $zero, 0xAC($a3)
    MEM_B(0XAC, ctx->r7) = 0;
    // 0x8022E108: sh          $zero, 0x4E8($a3)
    MEM_H(0X4E8, ctx->r7) = 0;
L_8022E10C:
    // 0x8022E10C: lh          $a2, 0x14($t1)
    ctx->r6 = MEM_H(ctx->r9, 0X14);
    // 0x8022E110: lui         $t2, 0x8024
    ctx->r10 = S32(0X8024 << 16);
    // 0x8022E114: addiu       $t2, $t2, -0x14DC
    ctx->r10 = ADD32(ctx->r10, -0X14DC);
    // 0x8022E118: lh          $a0, 0x0($t2)
    ctx->r4 = MEM_H(ctx->r10, 0X0);
    // 0x8022E11C: lh          $a1, 0x18($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X18);
    // 0x8022E120: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022E124: lh          $v1, -0x14DA($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X14DA);
    // 0x8022E128: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022E12C: lh          $v0, -0x14D8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X14D8);
    // 0x8022E130: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x8022E134: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x8022E138: beq         $v0, $zero, L_8022E190
    if (ctx->r2 == 0) {
        // 0x8022E13C: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_8022E190;
    }
    // 0x8022E13C: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8022E140: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022E144: lh          $v0, -0x14D6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X14D6);
    // 0x8022E148: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022E14C: beq         $v0, $zero, L_8022E190
    if (ctx->r2 == 0) {
        // 0x8022E150: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022E190;
    }
    // 0x8022E150: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022E154: sb          $v0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r2;
    // 0x8022E158: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E15C: sb          $v0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r2;
    // 0x8022E160: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E164: sb          $v0, 0xAC($a3)
    MEM_B(0XAC, ctx->r7) = ctx->r2;
    // 0x8022E168: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x8022E16C: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8022E170: sh          $v1, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r3;
    // 0x8022E174: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022E178: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x8022E17C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E180: sh          $zero, 0x56($a3)
    MEM_H(0X56, ctx->r7) = 0;
    // 0x8022E184: sh          $v0, 0x3E($t0)
    MEM_H(0X3E, ctx->r8) = ctx->r2;
    // 0x8022E188: j           L_8022E228
    // 0x8022E18C: addiu       $v0, $t2, -0x70
    ctx->r2 = ADD32(ctx->r10, -0X70);
        goto L_8022E228;
    // 0x8022E18C: addiu       $v0, $t2, -0x70
    ctx->r2 = ADD32(ctx->r10, -0X70);
L_8022E190:
    // 0x8022E190: lh          $a2, 0x14($t1)
    ctx->r6 = MEM_H(ctx->r9, 0X14);
    // 0x8022E194: lui         $t2, 0x8024
    ctx->r10 = S32(0X8024 << 16);
    // 0x8022E198: addiu       $t2, $t2, -0x14D0
    ctx->r10 = ADD32(ctx->r10, -0X14D0);
    // 0x8022E19C: lh          $a0, 0x0($t2)
    ctx->r4 = MEM_H(ctx->r10, 0X0);
    // 0x8022E1A0: lh          $a1, 0x18($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X18);
    // 0x8022E1A4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022E1A8: lh          $v1, -0x14CE($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X14CE);
    // 0x8022E1AC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022E1B0: lh          $v0, -0x14CC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X14CC);
    // 0x8022E1B4: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x8022E1B8: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x8022E1BC: beq         $v0, $zero, L_8022E22C
    if (ctx->r2 == 0) {
        // 0x8022E1C0: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_8022E22C;
    }
    // 0x8022E1C0: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8022E1C4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022E1C8: lh          $v0, -0x14CA($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X14CA);
    // 0x8022E1CC: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022E1D0: beq         $v0, $zero, L_8022E22C
    if (ctx->r2 == 0) {
        // 0x8022E1D4: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022E22C;
    }
    // 0x8022E1D4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022E1D8: lhu         $v1, 0x18($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X18);
    // 0x8022E1DC: sb          $v0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r2;
    // 0x8022E1E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E1E4: sb          $v0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r2;
    // 0x8022E1E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E1EC: sb          $v0, 0xAC($a3)
    MEM_B(0XAC, ctx->r7) = ctx->r2;
    // 0x8022E1F0: addiu       $v1, $v1, 0x200
    ctx->r3 = ADD32(ctx->r3, 0X200);
    // 0x8022E1F4: sh          $v1, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r3;
    // 0x8022E1F8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E1FC: sw          $v1, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r3;
    // 0x8022E200: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x8022E204: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8022E208: sh          $v1, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r3;
    // 0x8022E20C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022E210: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x8022E214: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022E218: sh          $v0, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r2;
    // 0x8022E21C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E220: sh          $v0, 0x3E($t0)
    MEM_H(0X3E, ctx->r8) = ctx->r2;
    // 0x8022E224: addiu       $v0, $t2, -0x4C
    ctx->r2 = ADD32(ctx->r10, -0X4C);
L_8022E228:
    // 0x8022E228: sw          $v0, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->r2;
L_8022E22C:
    // 0x8022E22C: jr          $ra
    // 0x8022E230: nop

    TRACE_RETURN()
    return;
    // 0x8022E230: nop

;}
RECOMP_FUNC void func_80226428_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022642C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226430: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226434: bne         $v0, $zero, L_80226484
    if (ctx->r2 != 0) {
        // 0x80226438: nop
    
            goto L_80226484;
    }
    // 0x80226438: nop

    // 0x8022643C: jal         0x8004F144
    // 0x80226440: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80226440: nop

    after_0:
    // 0x80226444: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226448: beq         $v1, $zero, L_80226484
    if (ctx->r3 == 0) {
        // 0x8022644C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226484;
    }
    // 0x8022644C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226450: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226454: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226458: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022645C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80226460: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226464: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80226468: addiu       $v0, $zero, 0x1F4
    ctx->r2 = ADD32(0, 0X1F4);
    // 0x8022646C: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80226470: addiu       $v0, $zero, -0x1D50
    ctx->r2 = ADD32(0, -0X1D50);
    // 0x80226474: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80226478: addiu       $v0, $zero, 0xEC
    ctx->r2 = ADD32(0, 0XEC);
    // 0x8022647C: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x80226480: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_80226484:
    // 0x80226484: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226488: jr          $ra
    // 0x8022648C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022648C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239750_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239754: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239758: jal         0x8004F5C4
    // 0x8023975C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8023975C: nop

    after_0:
    // 0x80239760: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239764: jr          $ra
    // 0x80239768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023976C: nop

;}
RECOMP_FUNC void func_80235230_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235230: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235234: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235238: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023523C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235240: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235244: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235248: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8023524C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80235250: jal         0x8004D5D4
    // 0x80235254: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80235254: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80235258: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8023525C: jal         0x8002C678
    // 0x80235260: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_1;
    // 0x80235260: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80235264: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80235268: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023526C: jal         0x800319B4
    // 0x80235270: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80235270: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x80235274: jal         0x8003E6BC
    // 0x80235278: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_3;
    // 0x80235278: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    after_3:
    // 0x8023527C: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x80235280: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235284: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x80235288: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023528C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235290: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80235294: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235298: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023529C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802352A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802352A4: lw          $v0, 0x5088($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5088);
    // 0x802352A8: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x802352AC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x802352B0: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x802352B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802352B8: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x802352BC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802352C0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802352C4: addiu       $a0, $zero, -0x1001
    ctx->r4 = ADD32(0, -0X1001);
    // 0x802352C8: jal         0x80071A70
    // 0x802352CC: and         $a0, $v0, $a0
    ctx->r4 = ctx->r2 & ctx->r4;
    func_80071A70_4CE70(rdram, ctx);
        goto after_4;
    // 0x802352CC: and         $a0, $v0, $a0
    ctx->r4 = ctx->r2 & ctx->r4;
    after_4:
    // 0x802352D0: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x802352D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802352D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802352DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802352E0: jr          $ra
    // 0x802352E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802352E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227B68_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227B6C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227B70: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227B74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227B78: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227B7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227B80: lw          $v0, 0x33C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X33C);
    // 0x80227B84: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80227B88: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227B8C: beq         $v0, $zero, L_80227B98
    if (ctx->r2 == 0) {
        // 0x80227B90: addiu       $s2, $s1, 0x328
        ctx->r18 = ADD32(ctx->r17, 0X328);
            goto L_80227B98;
    }
    // 0x80227B90: addiu       $s2, $s1, 0x328
    ctx->r18 = ADD32(ctx->r17, 0X328);
    // 0x80227B94: sh          $zero, 0x330($s1)
    MEM_H(0X330, ctx->r17) = 0;
L_80227B98:
    // 0x80227B98: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80227B9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227BA0: beq         $v1, $v0, L_80227C54
    if (ctx->r3 == ctx->r2) {
        // 0x80227BA4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80227C54;
    }
    // 0x80227BA4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227BA8: beql        $v0, $zero, L_80227BC0
    if (ctx->r2 == 0) {
        // 0x80227BAC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227BC0;
    }
    goto skip_0;
    // 0x80227BAC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227BB0: beq         $v1, $zero, L_80227BD0
    if (ctx->r3 == 0) {
        // 0x80227BB4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227BD0;
    }
    // 0x80227BB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227BB8: j           L_80227E10
    // 0x80227BBC: nop

        goto L_80227E10;
    // 0x80227BBC: nop

L_80227BC0:
    // 0x80227BC0: beq         $v1, $v0, L_80227DE4
    if (ctx->r3 == ctx->r2) {
        // 0x80227BC4: nop
    
            goto L_80227DE4;
    }
    // 0x80227BC4: nop

    // 0x80227BC8: j           L_80227E10
    // 0x80227BCC: nop

        goto L_80227E10;
    // 0x80227BCC: nop

L_80227BD0:
    // 0x80227BD0: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x80227BD4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80227BD8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227BDC: jal         0x800324B4
    // 0x80227BE0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80227BE0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_0:
    // 0x80227BE4: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x80227BE8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227BEC: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x80227BF0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80227BF4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80227BF8: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x80227BFC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80227C00: jal         0x80032498
    // 0x80227C04: sh          $v0, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80227C04: sh          $v0, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r2;
    after_1:
    // 0x80227C08: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80227C0C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80227C10: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80227C14: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227C18: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x80227C1C: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80227C20: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x80227C24: sh          $v0, 0x32C($s1)
    MEM_H(0X32C, ctx->r17) = ctx->r2;
    // 0x80227C28: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80227C2C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80227C30: lh          $v1, 0x32E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X32E);
    // 0x80227C34: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80227C38: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80227C3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227C40: lhu         $v0, 0x328($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X328);
    // 0x80227C44: lbu         $v1, 0xA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XA);
    // 0x80227C48: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
    // 0x80227C4C: sh          $v0, 0x328($s1)
    MEM_H(0X328, ctx->r17) = ctx->r2;
    // 0x80227C50: sh          $v1, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r3;
L_80227C54:
    // 0x80227C54: lb          $v1, 0xA6($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA6);
    // 0x80227C58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227C5C: bne         $v1, $v0, L_80227C6C
    if (ctx->r3 != ctx->r2) {
        // 0x80227C60: addiu       $a0, $zero, 0xB5
        ctx->r4 = ADD32(0, 0XB5);
            goto L_80227C6C;
    }
    // 0x80227C60: addiu       $a0, $zero, 0xB5
    ctx->r4 = ADD32(0, 0XB5);
    // 0x80227C64: jal         0x8002A33C
    // 0x80227C68: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80227C68: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
L_80227C6C:
    // 0x80227C6C: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x80227C70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227C74: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x80227C78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227C7C: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227C80: bltz        $a0, L_80227C98
    if (SIGNED(ctx->r4) < 0) {
        // 0x80227C84: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_80227C98;
    }
    // 0x80227C84: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80227C88: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x80227C8C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227C90: beq         $v0, $zero, L_80227CB0
    if (ctx->r2 == 0) {
        // 0x80227C94: nop
    
            goto L_80227CB0;
    }
    // 0x80227C94: nop

L_80227C98:
    // 0x80227C98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227C9C: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
    // 0x80227CA0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80227CA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227CA8: j           L_80227DE4
    // 0x80227CAC: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_80227DE4;
    // 0x80227CAC: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_80227CB0:
    // 0x80227CB0: lh          $v0, 0x6E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6E);
    // 0x80227CB4: bgtzl       $v0, L_80227CC8
    if (SIGNED(ctx->r2) > 0) {
        // 0x80227CB8: slti        $v0, $a0, 0x64
        ctx->r2 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
            goto L_80227CC8;
    }
    goto skip_1;
    // 0x80227CB8: slti        $v0, $a0, 0x64
    ctx->r2 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
    skip_1:
    // 0x80227CBC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80227CC0: j           L_80227E0C
    // 0x80227CC4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_80227E0C;
    // 0x80227CC4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_80227CC8:
    // 0x80227CC8: beq         $v0, $zero, L_80227D40
    if (ctx->r2 == 0) {
        // 0x80227CCC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227D40;
    }
    // 0x80227CCC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227CD0: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80227CD4: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x80227CD8: lh          $s0, 0x16($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X16);
    // 0x80227CDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227CE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227CE4: jal         0x8003E934
    // 0x80227CE8: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x80227CE8: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    after_3:
    // 0x80227CEC: beq         $s0, $v0, L_80227D1C
    if (ctx->r16 == ctx->r2) {
        // 0x80227CF0: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80227D1C;
    }
    // 0x80227CF0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80227CF4: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80227CF8: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x80227CFC: lhu         $a0, 0x46($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X46);
    // 0x80227D00: lhu         $a1, 0x4E($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4E);
    // 0x80227D04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227D08: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227D0C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80227D10: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80227D14: j           L_80227D20
    // 0x80227D18: sh          $a0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r4;
        goto L_80227D20;
    // 0x80227D18: sh          $a0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r4;
L_80227D1C:
    // 0x80227D1C: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
L_80227D20:
    // 0x80227D20: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80227D24: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80227D28: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x80227D2C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80227D30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227D34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227D38: jal         0x8004DD04
    // 0x80227D3C: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_4;
    // 0x80227D3C: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    after_4:
L_80227D40:
    // 0x80227D40: jal         0x80040F30
    // 0x80227D44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80227D44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80227D48: beq         $v0, $zero, L_80227E10
    if (ctx->r2 == 0) {
        // 0x80227D4C: sw          $v0, 0x48($s2)
        MEM_W(0X48, ctx->r18) = ctx->r2;
            goto L_80227E10;
    }
    // 0x80227D4C: sw          $v0, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->r2;
    // 0x80227D50: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80227D54: beq         $v0, $zero, L_80227D64
    if (ctx->r2 == 0) {
        // 0x80227D58: addiu       $a0, $zero, 0xDE
        ctx->r4 = ADD32(0, 0XDE);
            goto L_80227D64;
    }
    // 0x80227D58: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    // 0x80227D5C: jal         0x8002A33C
    // 0x80227D60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80227D60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
L_80227D64:
    // 0x80227D64: lw          $v1, 0x48($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X48);
    // 0x80227D68: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x80227D6C: beql        $v0, $zero, L_80227D88
    if (ctx->r2 == 0) {
        // 0x80227D70: andi        $v0, $v1, 0x200
        ctx->r2 = ctx->r3 & 0X200;
            goto L_80227D88;
    }
    goto skip_2;
    // 0x80227D70: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    skip_2:
    // 0x80227D74: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80227D78: bltzl       $v0, L_80227D80
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227D7C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80227D80;
    }
    goto skip_3;
    // 0x80227D7C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_3:
L_80227D80:
    // 0x80227D80: j           L_80227D9C
    // 0x80227D84: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_80227D9C;
    // 0x80227D84: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_80227D88:
    // 0x80227D88: beq         $v0, $zero, L_80227DA0
    if (ctx->r2 == 0) {
        // 0x80227D8C: nop
    
            goto L_80227DA0;
    }
    // 0x80227D8C: nop

    // 0x80227D90: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80227D94: bltzl       $v0, L_80227D9C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227D98: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80227D9C;
    }
    goto skip_4;
    // 0x80227D98: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_4:
L_80227D9C:
    // 0x80227D9C: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80227DA0:
    // 0x80227DA0: lw          $v1, 0x48($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X48);
    // 0x80227DA4: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x80227DA8: beq         $v0, $zero, L_80227DC8
    if (ctx->r2 == 0) {
        // 0x80227DAC: andi        $v0, $v1, 0x800
        ctx->r2 = ctx->r3 & 0X800;
            goto L_80227DC8;
    }
    // 0x80227DAC: andi        $v0, $v1, 0x800
    ctx->r2 = ctx->r3 & 0X800;
    // 0x80227DB0: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80227DB4: bltzl       $v0, L_80227DBC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227DB8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80227DBC;
    }
    goto skip_5;
    // 0x80227DB8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_5:
L_80227DBC:
    // 0x80227DBC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227DC0: j           L_80227E10
    // 0x80227DC4: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
        goto L_80227E10;
    // 0x80227DC4: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
L_80227DC8:
    // 0x80227DC8: beq         $v0, $zero, L_80227E10
    if (ctx->r2 == 0) {
        // 0x80227DCC: nop
    
            goto L_80227E10;
    }
    // 0x80227DCC: nop

    // 0x80227DD0: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80227DD4: bltzl       $v0, L_80227DDC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227DD8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80227DDC;
    }
    goto skip_6;
    // 0x80227DD8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_6:
L_80227DDC:
    // 0x80227DDC: j           L_80227E10
    // 0x80227DE0: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
        goto L_80227E10;
    // 0x80227DE0: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
L_80227DE4:
    // 0x80227DE4: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x80227DE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227DEC: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x80227DF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227DF4: bgez        $v0, L_80227E10
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227DF8: nop
    
            goto L_80227E10;
    }
    // 0x80227DF8: nop

    // 0x80227DFC: sh          $zero, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = 0;
    // 0x80227E00: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80227E04: sh          $zero, 0x38($s2)
    MEM_H(0X38, ctx->r18) = 0;
    // 0x80227E08: ori         $v0, $v0, 0x41
    ctx->r2 = ctx->r2 | 0X41;
L_80227E0C:
    // 0x80227E0C: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_80227E10:
    // 0x80227E10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227E14: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227E18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227E1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227E20: jr          $ra
    // 0x80227E24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227E24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239AF0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239AF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239AF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239AF8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80239AFC: bne         $v0, $zero, L_80239B1C
    if (ctx->r2 != 0) {
        // 0x80239B00: nop
    
            goto L_80239B1C;
    }
    // 0x80239B00: nop

    // 0x80239B04: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80239B08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239B0C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239B10: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239B14: j           L_80239B30
    // 0x80239B18: lw          $v0, -0x798($at)
    ctx->r2 = MEM_W(ctx->r1, -0X798);
        goto L_80239B30;
    // 0x80239B18: lw          $v0, -0x798($at)
    ctx->r2 = MEM_W(ctx->r1, -0X798);
L_80239B1C:
    // 0x80239B1C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80239B20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239B24: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239B28: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239B2C: lw          $v0, -0x7A0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7A0);
L_80239B30:
    // 0x80239B30: jalr        $v0
    // 0x80239B34: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80239B34: nop

    after_0:
    // 0x80239B38: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239B3C: jr          $ra
    // 0x80239B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230824_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230824: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80230828: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8023082C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80230830: bne         $v1, $v0, L_80230848
    if (ctx->r3 != ctx->r2) {
        // 0x80230834: addiu       $v1, $zero, 0x1E
        ctx->r3 = ADD32(0, 0X1E);
            goto L_80230848;
    }
    // 0x80230834: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x80230838: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023083C: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x80230840: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230844: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80230848:
    // 0x80230848: jr          $ra
    // 0x8023084C: nop

    TRACE_RETURN()
    return;
    // 0x8023084C: nop

;}
RECOMP_FUNC void func_80228DE4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228DE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228DE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228DEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228DF4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228DF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228DFC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228E00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228E04: lw          $v0, -0x170C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X170C);
    // 0x80228E08: jalr        $v0
    // 0x80228E0C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228E0C: nop

    after_0:
    // 0x80228E10: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228E14: jal         0x8004DD04
    // 0x80228E18: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80228E18: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80228E1C: jal         0x8005044C
    // 0x80228E20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x80228E20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80228E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228E28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228E2C: jr          $ra
    // 0x80228E30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228E30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023062C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023062C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230630: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230634: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230638: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023063C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230640: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230644: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230648: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023064C: jal         0x80050294
    // 0x80230650: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230650: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    after_0:
    // 0x80230654: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230658: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023065C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230664: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230668: jr          $ra
    // 0x8023066C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023066C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023698C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023698C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236990: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236994: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236998: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023699C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802369A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802369A4: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x802369A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802369AC: beq         $v1, $v0, L_80236A4C
    if (ctx->r3 == ctx->r2) {
        // 0x802369B0: addiu       $s2, $s1, 0x2C
        ctx->r18 = ADD32(ctx->r17, 0X2C);
            goto L_80236A4C;
    }
    // 0x802369B0: addiu       $s2, $s1, 0x2C
    ctx->r18 = ADD32(ctx->r17, 0X2C);
    // 0x802369B4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802369B8: beql        $v0, $zero, L_802369D0
    if (ctx->r2 == 0) {
        // 0x802369BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802369D0;
    }
    goto skip_0;
    // 0x802369BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802369C0: beq         $v1, $zero, L_802369E0
    if (ctx->r3 == 0) {
        // 0x802369C4: lui         $a1, 0x80
        ctx->r5 = S32(0X80 << 16);
            goto L_802369E0;
    }
    // 0x802369C4: lui         $a1, 0x80
    ctx->r5 = S32(0X80 << 16);
    // 0x802369C8: j           L_80236B54
    // 0x802369CC: nop

        goto L_80236B54;
    // 0x802369CC: nop

L_802369D0:
    // 0x802369D0: beq         $v1, $v0, L_80236A7C
    if (ctx->r3 == ctx->r2) {
        // 0x802369D4: nop
    
            goto L_80236A7C;
    }
    // 0x802369D4: nop

    // 0x802369D8: j           L_80236B54
    // 0x802369DC: nop

        goto L_80236B54;
    // 0x802369DC: nop

L_802369E0:
    // 0x802369E0: ori         $a1, $a1, 0x8080
    ctx->r5 = ctx->r5 | 0X8080;
    // 0x802369E4: lhu         $v1, 0x2C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2C);
    // 0x802369E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802369EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802369F0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802369F4: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x802369F8: sw          $a1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r5;
    // 0x802369FC: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x80236A00: jal         0x80047B3C
    // 0x80236A04: sh          $v1, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r3;
    func_80047B3C_22F3C(rdram, ctx);
        goto after_0;
    // 0x80236A04: sh          $v1, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r3;
    after_0:
    // 0x80236A08: jal         0x8004F144
    // 0x80236A0C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80236A0C: nop

    after_1:
    // 0x80236A10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80236A14: beq         $s0, $zero, L_80236A4C
    if (ctx->r16 == 0) {
        // 0x80236A18: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_80236A4C;
    }
    // 0x80236A18: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80236A1C: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80236A20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80236A24: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80236A28: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80236A2C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80236A30: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80236A34: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80236A38: jal         0x8009A3B4
    // 0x80236A3C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80236A3C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_2:
    // 0x80236A40: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x80236A44: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80236A48: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
L_80236A4C:
    // 0x80236A4C: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80236A50: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236A54: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80236A58: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236A5C: bne         $v0, $zero, L_80236B54
    if (ctx->r2 != 0) {
        // 0x80236A60: lui         $v0, 0x2E80
        ctx->r2 = S32(0X2E80 << 16);
            goto L_80236B54;
    }
    // 0x80236A60: lui         $v0, 0x2E80
    ctx->r2 = S32(0X2E80 << 16);
    // 0x80236A64: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80236A68: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80236A6C: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x80236A70: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80236A74: sb          $v1, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r3;
    // 0x80236A78: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
L_80236A7C:
    // 0x80236A7C: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80236A80: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80236A84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236A88: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80236A8C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236A90: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236A94: bne         $v0, $v1, L_80236B08
    if (ctx->r2 != ctx->r3) {
        // 0x80236A98: lui         $v1, 0xFFDF
        ctx->r3 = S32(0XFFDF << 16);
            goto L_80236B08;
    }
    // 0x80236A98: lui         $v1, 0xFFDF
    ctx->r3 = S32(0XFFDF << 16);
    // 0x80236A9C: jal         0x8004F684
    // 0x80236AA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_3;
    // 0x80236AA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80236AA4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80236AA8: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x80236AAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236AB0: bne         $v1, $v0, L_80236ADC
    if (ctx->r3 != ctx->r2) {
        // 0x80236AB4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236ADC;
    }
    // 0x80236AB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236AB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236ABC: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80236AC0: jal         0x8007A290
    // 0x80236AC4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8007A290_55690(rdram, ctx);
        goto after_4;
    // 0x80236AC4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x80236AC8: lh          $a0, 0x46($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X46);
    // 0x80236ACC: jal         0x8006036C
    // 0x80236AD0: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80236AD0: nop

    after_5:
    // 0x80236AD4: j           L_80236B54
    // 0x80236AD8: nop

        goto L_80236B54;
    // 0x80236AD8: nop

L_80236ADC:
    // 0x80236ADC: bne         $v1, $v0, L_80236AEC
    if (ctx->r3 != ctx->r2) {
        // 0x80236AE0: nop
    
            goto L_80236AEC;
    }
    // 0x80236AE0: nop

    // 0x80236AE4: jal         0x8006036C
    // 0x80236AE8: lh          $a0, 0x46($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X46);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80236AE8: lh          $a0, 0x46($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X46);
    after_6:
L_80236AEC:
    // 0x80236AEC: lhu         $a2, 0x2($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X2);
    // 0x80236AF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236AF4: addiu       $a1, $a0, 0x38
    ctx->r5 = ADD32(ctx->r4, 0X38);
    // 0x80236AF8: jal         0x8007A290
    // 0x80236AFC: andi        $a2, $a2, 0x1
    ctx->r6 = ctx->r6 & 0X1;
    func_8007A290_55690(rdram, ctx);
        goto after_7;
    // 0x80236AFC: andi        $a2, $a2, 0x1
    ctx->r6 = ctx->r6 & 0X1;
    after_7:
    // 0x80236B00: j           L_80236B54
    // 0x80236B04: nop

        goto L_80236B54;
    // 0x80236B04: nop

L_80236B08:
    // 0x80236B08: ori         $v1, $v1, 0xDFE0
    ctx->r3 = ctx->r3 | 0XDFE0;
    // 0x80236B0C: lw          $v0, 0x40($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X40);
    // 0x80236B10: lb          $a2, 0xC($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XC);
    // 0x80236B14: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80236B18: addiu       $a1, $a1, -0xAAC
    ctx->r5 = ADD32(ctx->r5, -0XAAC);
    // 0x80236B1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236B20: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x80236B24: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x80236B28: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80236B2C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80236B30: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236B34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236B38: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x80236B3C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236B40: sw          $v1, -0xAA4($at)
    MEM_W(-0XAA4, ctx->r1) = ctx->r3;
    // 0x80236B44: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236B48: sw          $v1, -0xAA8($at)
    MEM_W(-0XAA8, ctx->r1) = ctx->r3;
    // 0x80236B4C: jal         0x80031DA8
    // 0x80236B50: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_8;
    // 0x80236B50: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    after_8:
L_80236B54:
    // 0x80236B54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80236B58: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80236B5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236B60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236B64: jr          $ra
    // 0x80236B68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236B68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227654_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227654: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227658: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022765C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227660: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227664: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227668: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x8022766C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80227670: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227674: beq         $v0, $zero, L_80227680
    if (ctx->r2 == 0) {
        // 0x80227678: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80227680;
    }
    // 0x80227678: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022767C: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_80227680:
    // 0x80227680: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227684: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80227688: beq         $v0, $zero, L_8022790C
    if (ctx->r2 == 0) {
        // 0x8022768C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022790C;
    }
    // 0x8022768C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227690: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227694: addu        $at, $at, $v0
    gpr jr_addend_8022769C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227698: lw          $v0, -0x268($at)
    ctx->r2 = ADD32(ctx->r1, -0X268);
    // 0x8022769C: jr          $v0
    // 0x802276A0: nop

    switch (jr_addend_8022769C >> 2) {
        case 0: goto L_802276A4; break;
        case 1: goto L_802276EC; break;
        case 2: goto L_80227710; break;
        case 3: goto L_80227770; break;
        case 4: goto L_8022778C; break;
        case 5: goto L_802278CC; break;
        default: switch_error(__func__, 0x8022769C, 0x8023FD98);
    }
    // 0x802276A0: nop

L_802276A4:
    // 0x802276A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802276A8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802276AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802276B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802276B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802276B8: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x802276BC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802276C0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802276C4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802276C8: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x802276CC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802276D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802276D4: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x802276D8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x802276DC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802276E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802276E4: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x802276E8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_802276EC:
    // 0x802276EC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802276F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802276F4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802276F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802276FC: bgez        $v0, L_8022790C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227700: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022790C;
    }
    // 0x80227700: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227704: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227708: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022770C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80227710:
    // 0x80227710: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227714: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227718: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022771C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227720: bgtz        $v0, L_8022790C
    if (SIGNED(ctx->r2) > 0) {
        // 0x80227724: addiu       $a0, $zero, 0xB4
        ctx->r4 = ADD32(0, 0XB4);
            goto L_8022790C;
    }
    // 0x80227724: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    // 0x80227728: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022772C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227730: jal         0x8002A33C
    // 0x80227734: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80227734: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227738: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022773C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80227740: beq         $v0, $zero, L_80227768
    if (ctx->r2 == 0) {
        // 0x80227744: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_80227768;
    }
    // 0x80227744: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80227748: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022774C: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80227750: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227754: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80227758: andi        $v1, $v1, 0xFFDF
    ctx->r3 = ctx->r3 & 0XFFDF;
    // 0x8022775C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227760: j           L_8022790C
    // 0x80227764: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
        goto L_8022790C;
    // 0x80227764: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_80227768:
    // 0x80227768: j           L_8022790C
    // 0x8022776C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022790C;
    // 0x8022776C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80227770:
    // 0x80227770: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80227774: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80227778: beq         $v0, $zero, L_8022778C
    if (ctx->r2 == 0) {
        // 0x8022777C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022778C;
    }
    // 0x8022777C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227780: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227784: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80227788: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_8022778C:
    // 0x8022778C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227790: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227794: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227798: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022779C: bgez        $v0, L_802277C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802277A0: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_802277C8;
    }
    // 0x802277A0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x802277A4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802277A8: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x802277AC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802277B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802277B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802277B8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802277BC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802277C0: j           L_802278CC
    // 0x802277C4: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
        goto L_802278CC;
    // 0x802277C4: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_802277C8:
    // 0x802277C8: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x802277CC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802277D0: beq         $v0, $zero, L_802277E4
    if (ctx->r2 == 0) {
        // 0x802277D4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802277E4;
    }
    // 0x802277D4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802277D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802277DC: j           L_8022790C
    // 0x802277E0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022790C;
    // 0x802277E0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802277E4:
    // 0x802277E4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802277E8: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x802277EC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802277F0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802277F4: jal         0x8004F820
    // 0x802277F8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802277F8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x802277FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227800: addiu       $a1, $zero, 0x300
    ctx->r5 = ADD32(0, 0X300);
    // 0x80227804: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80227808: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022780C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227810: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227814: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227818: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022781C: jal         0x8004DA90
    // 0x80227820: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80227820: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x80227824: jal         0x80040F30
    // 0x80227828: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80227828: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022782C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227830: jal         0x8003E934
    // 0x80227834: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x80227834: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_4:
    // 0x80227838: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022783C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80227840: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80227844: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227848: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022784C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80227850: bltz        $v0, L_80227868
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227854: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80227868;
    }
    // 0x80227854: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80227858: beq         $v0, $zero, L_80227878
    if (ctx->r2 == 0) {
        // 0x8022785C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80227878;
    }
    // 0x8022785C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227860: j           L_802278B4
    // 0x80227864: nop

        goto L_802278B4;
    // 0x80227864: nop

L_80227868:
    // 0x80227868: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022786C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80227870: bne         $v0, $zero, L_802278B4
    if (ctx->r2 != 0) {
        // 0x80227874: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802278B4;
    }
    // 0x80227874: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80227878:
    // 0x80227878: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022787C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80227880: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227884: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80227888: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022788C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80227890: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80227894: jal         0x8009A3B4
    // 0x80227898: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80227898: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022789C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802278A0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x802278A4: jal         0x8009A3B4
    // 0x802278A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802278A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x802278AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802278B0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_802278B4:
    // 0x802278B4: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x802278B8: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x802278BC: beq         $v0, $zero, L_8022790C
    if (ctx->r2 == 0) {
        // 0x802278C0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022790C;
    }
    // 0x802278C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802278C4: j           L_8022790C
    // 0x802278C8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022790C;
    // 0x802278C8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_802278CC:
    // 0x802278CC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802278D0: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x802278D4: beq         $v0, $zero, L_802278E4
    if (ctx->r2 == 0) {
        // 0x802278D8: nop
    
            goto L_802278E4;
    }
    // 0x802278D8: nop

    // 0x802278DC: jal         0x8004F418
    // 0x802278E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_7;
    // 0x802278E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_802278E4:
    // 0x802278E4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802278E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802278EC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802278F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802278F4: bgez        $v0, L_8022790C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802278F8: addiu       $v1, $zero, 0x1E
        ctx->r3 = ADD32(0, 0X1E);
            goto L_8022790C;
    }
    // 0x802278F8: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x802278FC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227900: sh          $v1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r3;
    // 0x80227904: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80227908: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022790C:
    // 0x8022790C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227910: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227914: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227918: jr          $ra
    // 0x8022791C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022791C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226694_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226694: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226698: bne         $v0, $zero, L_802266A8
    if (ctx->r2 != 0) {
        // 0x8022669C: lui         $v0, 0xFE40
        ctx->r2 = S32(0XFE40 << 16);
            goto L_802266A8;
    }
    // 0x8022669C: lui         $v0, 0xFE40
    ctx->r2 = S32(0XFE40 << 16);
    // 0x802266A0: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802266A4: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
L_802266A8:
    // 0x802266A8: jr          $ra
    // 0x802266AC: nop

    TRACE_RETURN()
    return;
    // 0x802266AC: nop

;}
RECOMP_FUNC void func_80238028_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238028: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8023802C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80238030: lbu         $v1, 0x2($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X2);
    // 0x80238034: lhu         $a0, 0x38($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X38);
    // 0x80238038: lhu         $a1, 0x4($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X4);
    // 0x8023803C: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80238040: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80238044: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80238048: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8023804C: sltu        $a0, $a0, $a1
    ctx->r4 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x80238050: beq         $a0, $zero, L_80238078
    if (ctx->r4 == 0) {
        // 0x80238054: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80238078;
    }
    // 0x80238054: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80238058: lbu         $v1, 0x3($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X3);
    // 0x8023805C: lhu         $v0, 0x3A($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X3A);
    // 0x80238060: lhu         $a0, 0x6($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X6);
    // 0x80238064: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80238068: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8023806C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80238070: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80238074: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
L_80238078:
    // 0x80238078: jr          $ra
    // 0x8023807C: nop

    TRACE_RETURN()
    return;
    // 0x8023807C: nop

;}
RECOMP_FUNC void func_80230564_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230568: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023056C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230574: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80230578: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023057C: sh          $v0, 0x49DC($at)
    MEM_H(0X49DC, ctx->r1) = ctx->r2;
    // 0x80230580: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80230584: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230588: sh          $v0, 0x49DE($at)
    MEM_H(0X49DE, ctx->r1) = ctx->r2;
    // 0x8023058C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80230590: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230594: sh          $v0, 0x49E0($at)
    MEM_H(0X49E0, ctx->r1) = ctx->r2;
    // 0x80230598: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023059C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802305A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802305A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802305A8: lw          $v0, -0x10F4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X10F4);
    // 0x802305AC: jalr        $v0
    // 0x802305B0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802305B0: nop

    after_0:
    // 0x802305B4: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802305B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802305BC: sh          $v0, 0x49C4($at)
    MEM_H(0X49C4, ctx->r1) = ctx->r2;
    // 0x802305C0: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x802305C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802305C8: sh          $v0, 0x49C6($at)
    MEM_H(0X49C6, ctx->r1) = ctx->r2;
    // 0x802305CC: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x802305D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802305D4: sh          $v0, 0x49C8($at)
    MEM_H(0X49C8, ctx->r1) = ctx->r2;
    // 0x802305D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802305DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802305E0: jr          $ra
    // 0x802305E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802305E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802396E4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802396E4: jr          $ra
    // 0x802396E8: nop

    TRACE_RETURN()
    return;
    // 0x802396E8: nop

;}
RECOMP_FUNC void func_8022E9F8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E9F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022E9FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022EA00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EA04: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022EA08: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022EA0C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EA10: beq         $v1, $zero, L_8022EA2C
    if (ctx->r3 == 0) {
        // 0x8022EA14: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022EA2C;
    }
    // 0x8022EA14: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022EA18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EA1C: beq         $v1, $v0, L_8022EA44
    if (ctx->r3 == ctx->r2) {
        // 0x8022EA20: nop
    
            goto L_8022EA44;
    }
    // 0x8022EA20: nop

    // 0x8022EA24: j           L_8022EAC8
    // 0x8022EA28: nop

        goto L_8022EAC8;
    // 0x8022EA28: nop

L_8022EA2C:
    // 0x8022EA2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EA30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022EA34: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022EA38: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022EA3C: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
    // 0x8022EA40: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
L_8022EA44:
    // 0x8022EA44: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EA48: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022EA4C: bne         $v0, $zero, L_8022EA64
    if (ctx->r2 != 0) {
        // 0x8022EA50: nop
    
            goto L_8022EA64;
    }
    // 0x8022EA50: nop

    // 0x8022EA54: jal         0x8006033C
    // 0x8022EA58: lhu         $a0, 0x3C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X3C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022EA58: lhu         $a0, 0x3C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X3C);
    after_0:
    // 0x8022EA5C: beq         $v0, $zero, L_8022EAC8
    if (ctx->r2 == 0) {
        // 0x8022EA60: nop
    
            goto L_8022EAC8;
    }
    // 0x8022EA60: nop

L_8022EA64:
    // 0x8022EA64: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x8022EA68: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022EA6C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022EA70: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EA74: bne         $v0, $zero, L_8022EAA0
    if (ctx->r2 != 0) {
        // 0x8022EA78: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022EAA0;
    }
    // 0x8022EA78: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022EA7C: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022EA80: bgez        $v0, L_8022EAAC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EA84: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022EAAC;
    }
    // 0x8022EA84: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022EA88: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022EA8C: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8022EA90: ori         $v0, $v0, 0xBD07
    ctx->r2 = ctx->r2 | 0XBD07;
    // 0x8022EA94: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022EA98: bne         $v0, $zero, L_8022EAB4
    if (ctx->r2 != 0) {
        // 0x8022EA9C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022EAB4;
    }
    // 0x8022EA9C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8022EAA0:
    // 0x8022EAA0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022EAA4: j           L_8022EAC8
    // 0x8022EAA8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022EAC8;
    // 0x8022EAA8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022EAAC:
    // 0x8022EAAC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022EAB0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022EAB4:
    // 0x8022EAB4: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022EAB8: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022EABC: beq         $v0, $zero, L_8022EAC8
    if (ctx->r2 == 0) {
        // 0x8022EAC0: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_8022EAC8;
    }
    // 0x8022EAC0: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8022EAC4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022EAC8:
    // 0x8022EAC8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022EACC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EAD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022EAD4: jr          $ra
    // 0x8022EAD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022EAD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231EB0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231EB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231EB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231EB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231EBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231EC0: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80231EC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231EC8: sh          $v0, 0x49DC($at)
    MEM_H(0X49DC, ctx->r1) = ctx->r2;
    // 0x80231ECC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80231ED0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231ED4: sh          $v0, 0x49DE($at)
    MEM_H(0X49DE, ctx->r1) = ctx->r2;
    // 0x80231ED8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80231EDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231EE0: sh          $v0, 0x49E0($at)
    MEM_H(0X49E0, ctx->r1) = ctx->r2;
    // 0x80231EE4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231EE8: beql        $v0, $zero, L_80231F3C
    if (ctx->r2 == 0) {
        // 0x80231EEC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231F3C;
    }
    goto skip_0;
    // 0x80231EEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x80231EF0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80231EF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231EF8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231EFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231F00: lw          $v0, -0xE10($at)
    ctx->r2 = MEM_W(ctx->r1, -0XE10);
    // 0x80231F04: jalr        $v0
    // 0x80231F08: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80231F08: nop

    after_0:
    // 0x80231F0C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80231F10: jal         0x8004DD04
    // 0x80231F14: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80231F14: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80231F18: jal         0x8005044C
    // 0x80231F1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x80231F1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80231F20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231F24: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80231F28: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x80231F2C: jal         0x8003B564
    // 0x80231F30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x80231F30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80231F34: j           L_80231FA8
    // 0x80231F38: nop

        goto L_80231FA8;
    // 0x80231F38: nop

L_80231F3C:
    // 0x80231F3C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80231F40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231F44: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231F48: jal         0x8004D5D4
    // 0x80231F4C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_4;
    // 0x80231F4C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_4:
    // 0x80231F50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231F54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231F58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231F5C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80231F60: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80231F64: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80231F68: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80231F6C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80231F70: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80231F74: jal         0x80050294
    // 0x80231F78: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80231F78: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_5:
    // 0x80231F7C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231F80: addiu       $v0, $v0, -0xE54
    ctx->r2 = ADD32(ctx->r2, -0XE54);
    // 0x80231F84: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231F88: sw          $v0, 0x100($at)
    MEM_W(0X100, ctx->r1) = ctx->r2;
    // 0x80231F8C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231F90: addiu       $v0, $v0, -0xE3C
    ctx->r2 = ADD32(ctx->r2, -0XE3C);
    // 0x80231F94: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231F98: sw          $v0, 0x104($at)
    MEM_W(0X104, ctx->r1) = ctx->r2;
    // 0x80231F9C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231FA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231FA4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80231FA8:
    // 0x80231FA8: jal         0x80231D48
    // 0x80231FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231D48_ovl2(rdram, ctx);
        goto after_6;
    // 0x80231FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80231FB0: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80231FB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231FB8: sh          $v0, 0x49C4($at)
    MEM_H(0X49C4, ctx->r1) = ctx->r2;
    // 0x80231FBC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80231FC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231FC4: sh          $v0, 0x49C6($at)
    MEM_H(0X49C6, ctx->r1) = ctx->r2;
    // 0x80231FC8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80231FCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231FD0: sh          $v0, 0x49C8($at)
    MEM_H(0X49C8, ctx->r1) = ctx->r2;
    // 0x80231FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231FD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231FDC: jr          $ra
    // 0x80231FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230F2C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230F2C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80230F30: lui         $a2, 0x7
    ctx->r6 = S32(0X7 << 16);
    // 0x80230F34: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80230F38: lw          $v1, 0x24($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X24);
    // 0x80230F3C: lw          $a0, 0x20($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X20);
    // 0x80230F40: lw          $a1, 0x98($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X98);
    // 0x80230F44: lui         $v0, 0xFFF7
    ctx->r2 = S32(0XFFF7 << 16);
    // 0x80230F48: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230F4C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80230F50: sw          $v1, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r3;
    // 0x80230F54: sw          $a0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r4;
    // 0x80230F58: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80230F5C: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80230F60: bne         $v1, $v0, L_80230F74
    if (ctx->r3 != ctx->r2) {
        // 0x80230F64: nop
    
            goto L_80230F74;
    }
    // 0x80230F64: nop

    // 0x80230F68: lbu         $v0, 0xA($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0XA);
    // 0x80230F6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230F70: sb          $v0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r2;
L_80230F74:
    // 0x80230F74: jr          $ra
    // 0x80230F78: nop

    TRACE_RETURN()
    return;
    // 0x80230F78: nop

;}
RECOMP_FUNC void func_80233B74_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233B78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233B7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233B80: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233B84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233B88: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80233B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233B90: beq         $v1, $v0, L_80233C00
    if (ctx->r3 == ctx->r2) {
        // 0x80233B94: addiu       $s1, $s0, 0xC0
        ctx->r17 = ADD32(ctx->r16, 0XC0);
            goto L_80233C00;
    }
    // 0x80233B94: addiu       $s1, $s0, 0xC0
    ctx->r17 = ADD32(ctx->r16, 0XC0);
    // 0x80233B98: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80233B9C: beql        $v0, $zero, L_80233BB4
    if (ctx->r2 == 0) {
        // 0x80233BA0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233BB4;
    }
    goto skip_0;
    // 0x80233BA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80233BA4: beq         $v1, $zero, L_80233BC4
    if (ctx->r3 == 0) {
        // 0x80233BA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233BC4;
    }
    // 0x80233BA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233BAC: j           L_80233CC4
    // 0x80233BB0: nop

        goto L_80233CC4;
    // 0x80233BB0: nop

L_80233BB4:
    // 0x80233BB4: beq         $v1, $v0, L_80233C68
    if (ctx->r3 == ctx->r2) {
        // 0x80233BB8: nop
    
            goto L_80233C68;
    }
    // 0x80233BB8: nop

    // 0x80233BBC: j           L_80233CC4
    // 0x80233BC0: nop

        goto L_80233CC4;
    // 0x80233BC0: nop

L_80233BC4:
    // 0x80233BC4: lw          $v1, 0xF4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF4);
    // 0x80233BC8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80233BCC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80233BD0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80233BD4: lhu         $a0, 0x56($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X56);
    // 0x80233BD8: lhu         $v1, 0xC0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC0);
    // 0x80233BDC: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80233BE0: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x80233BE4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80233BE8: sh          $v0, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r2;
    // 0x80233BEC: sb          $zero, 0xC8($s0)
    MEM_B(0XC8, ctx->r16) = 0;
    // 0x80233BF0: andi        $v1, $v1, 0xFFEF
    ctx->r3 = ctx->r3 & 0XFFEF;
    // 0x80233BF4: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x80233BF8: sh          $v1, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r3;
    // 0x80233BFC: sh          $a0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r4;
L_80233C00:
    // 0x80233C00: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80233C04: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x80233C08: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80233C0C: bltz        $v0, L_80233C60
    if (SIGNED(ctx->r2) < 0) {
        // 0x80233C10: sh          $a1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r5;
            goto L_80233C60;
    }
    // 0x80233C10: sh          $a1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r5;
    // 0x80233C14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233C18: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80233C1C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80233C20: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80233C24: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233C28: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80233C2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233C30: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80233C34: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80233C38: jal         0x80040F30
    // 0x80233C3C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x80233C3C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_0:
    // 0x80233C40: andi        $v0, $v0, 0x3F00
    ctx->r2 = ctx->r2 & 0X3F00;
    // 0x80233C44: bne         $v0, $zero, L_80233C64
    if (ctx->r2 != 0) {
        // 0x80233C48: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233C64;
    }
    // 0x80233C48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233C4C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80233C50: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80233C54: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233C58: beq         $v0, $zero, L_80233CC4
    if (ctx->r2 == 0) {
        // 0x80233C5C: nop
    
            goto L_80233CC4;
    }
    // 0x80233C5C: nop

L_80233C60:
    // 0x80233C60: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80233C64:
    // 0x80233C64: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80233C68:
    // 0x80233C68: jal         0x8004F144
    // 0x80233C6C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80233C6C: nop

    after_1:
    // 0x80233C70: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233C74: beq         $v1, $zero, L_80233C9C
    if (ctx->r3 == 0) {
        // 0x80233C78: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80233C9C;
    }
    // 0x80233C78: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80233C7C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80233C80: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80233C84: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233C88: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233C8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233C90: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80233C94: jal         0x8009A3B4
    // 0x80233C98: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80233C98: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_2:
L_80233C9C:
    // 0x80233C9C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233CA0: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80233CA4: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80233CA8: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x80233CAC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80233CB0: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80233CB4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80233CB8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80233CBC: andi        $v0, $v0, 0xFFA1
    ctx->r2 = ctx->r2 & 0XFFA1;
    // 0x80233CC0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80233CC4:
    // 0x80233CC4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233CC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233CCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233CD0: jr          $ra
    // 0x80233CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802358A0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802358A0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x802358A4: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x802358A8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802358AC: sw          $ra, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r31;
    // 0x802358B0: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x802358B4: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x802358B8: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x802358BC: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x802358C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802358C4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802358C8: addu        $at, $at, $v0
    gpr jr_addend_802358D0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802358CC: lw          $v0, -0xBB0($at)
    ctx->r2 = ADD32(ctx->r1, -0XBB0);
    // 0x802358D0: jr          $v0
    // 0x802358D4: nop

    switch (jr_addend_802358D0 >> 2) {
        case 0: goto L_802358D8; break;
        case 1: goto L_80235928; break;
        case 2: goto L_80235A3C; break;
        case 3: goto L_80235AF8; break;
        default: switch_error(__func__, 0x802358D0, 0x8023F450);
    }
    // 0x802358D4: nop

L_802358D8:
    // 0x802358D8: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x802358DC: bne         $v0, $zero, L_802358F8
    if (ctx->r2 != 0) {
        // 0x802358E0: lui         $v1, 0x9
        ctx->r3 = S32(0X9 << 16);
            goto L_802358F8;
    }
    // 0x802358E0: lui         $v1, 0x9
    ctx->r3 = S32(0X9 << 16);
    // 0x802358E4: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x802358E8: sw          $zero, 0x44($s2)
    MEM_W(0X44, ctx->r18) = 0;
    // 0x802358EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802358F0: j           L_80235908
    // 0x802358F4: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
        goto L_80235908;
    // 0x802358F4: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_802358F8:
    // 0x802358F8: lw          $v0, 0x44($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X44);
    // 0x802358FC: ori         $v1, $v1, 0x1A2B
    ctx->r3 = ctx->r3 | 0X1A2B;
    // 0x80235900: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235904: sw          $v0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r2;
L_80235908:
    // 0x80235908: addiu       $s0, $s2, 0x18
    ctx->r16 = ADD32(ctx->r18, 0X18);
    // 0x8023590C: jal         0x8002C654
    // 0x80235910: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80235910: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80235914: lh          $a0, 0x44($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X44);
    // 0x80235918: jal         0x800319B4
    // 0x8023591C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8023591C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80235920: j           L_80235B50
    // 0x80235924: nop

        goto L_80235B50;
    // 0x80235924: nop

L_80235928:
    // 0x80235928: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x8023592C: beq         $v0, $zero, L_8023593C
    if (ctx->r2 == 0) {
        // 0x80235930: nop
    
            goto L_8023593C;
    }
    // 0x80235930: nop

    // 0x80235934: jal         0x8004F684
    // 0x80235938: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x80235938: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
L_8023593C:
    // 0x8023593C: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x80235940: lw          $s3, -0x3A2C($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X3A2C);
    // 0x80235944: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x80235948: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023594C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x80235950: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235954: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80235958: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8023595C: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
    // 0x80235960: jal         0x80031428
    // 0x80235964: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    func_80031428_C828(rdram, ctx);
        goto after_3;
    // 0x80235964: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    after_3:
    // 0x80235968: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023596C: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x80235970: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80235974: jal         0x800306F0
    // 0x80235978: addiu       $a0, $s3, 0x2A0
    ctx->r4 = ADD32(ctx->r19, 0X2A0);
    func_800306F0_BAF0(rdram, ctx);
        goto after_4;
    // 0x80235978: addiu       $a0, $s3, 0x2A0
    ctx->r4 = ADD32(ctx->r19, 0X2A0);
    after_4:
    // 0x8023597C: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x80235980: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80235984: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x80235988: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8023598C: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x80235990: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x80235994: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x80235998: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x8023599C: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x802359A0: sw          $v0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->r2;
    // 0x802359A4: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x802359A8: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x802359AC: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x802359B0: sw          $v0, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r2;
    // 0x802359B4: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x802359B8: addiu       $a0, $s2, 0x18
    ctx->r4 = ADD32(ctx->r18, 0X18);
    // 0x802359BC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802359C0: sw          $v0, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->r2;
    // 0x802359C4: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x802359C8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802359CC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802359D0: jal         0x80031DA8
    // 0x802359D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x802359D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x802359D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802359DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802359E0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x802359E4: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x802359E8: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x802359EC: addiu       $v0, $zero, -0x140
    ctx->r2 = ADD32(0, -0X140);
    // 0x802359F0: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
    // 0x802359F4: jal         0x80031270
    // 0x802359F8: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_80031270_C670(rdram, ctx);
        goto after_6;
    // 0x802359F8: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_6:
    // 0x802359FC: lhu         $v0, 0x28($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X28);
    // 0x80235A00: lhu         $v1, 0x198($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X198);
    // 0x80235A04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235A08: sh          $v0, 0x38($s2)
    MEM_H(0X38, ctx->r18) = ctx->r2;
    // 0x80235A0C: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x80235A10: lhu         $v1, 0x19A($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X19A);
    // 0x80235A14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235A18: sh          $v0, 0x3A($s2)
    MEM_H(0X3A, ctx->r18) = ctx->r2;
    // 0x80235A1C: lhu         $v0, 0x2C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2C);
    // 0x80235A20: lhu         $a0, 0x19C($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X19C);
    // 0x80235A24: lui         $v1, 0x280
    ctx->r3 = S32(0X280 << 16);
    // 0x80235A28: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80235A2C: sw          $v1, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r3;
    // 0x80235A30: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80235A34: j           L_80235B50
    // 0x80235A38: sh          $v0, 0x3C($s2)
    MEM_H(0X3C, ctx->r18) = ctx->r2;
        goto L_80235B50;
    // 0x80235A38: sh          $v0, 0x3C($s2)
    MEM_H(0X3C, ctx->r18) = ctx->r2;
L_80235A3C:
    // 0x80235A3C: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x80235A40: lw          $s3, -0x3A2C($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X3A2C);
    // 0x80235A44: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80235A48: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x80235A4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235A50: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80235A54: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80235A58: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
    // 0x80235A5C: jal         0x80031428
    // 0x80235A60: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    func_80031428_C828(rdram, ctx);
        goto after_7;
    // 0x80235A60: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    after_7:
    // 0x80235A64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235A68: addiu       $s0, $s2, 0x18
    ctx->r16 = ADD32(ctx->r18, 0X18);
    // 0x80235A6C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80235A70: jal         0x800306F0
    // 0x80235A74: addiu       $a0, $s3, 0x2A0
    ctx->r4 = ADD32(ctx->r19, 0X2A0);
    func_800306F0_BAF0(rdram, ctx);
        goto after_8;
    // 0x80235A74: addiu       $a0, $s3, 0x2A0
    ctx->r4 = ADD32(ctx->r19, 0X2A0);
    after_8:
    // 0x80235A78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235A7C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80235A80: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x80235A84: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80235A88: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80235A8C: jal         0x80031DA8
    // 0x80235A90: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_9;
    // 0x80235A90: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_9:
    // 0x80235A94: lh          $v0, 0x1A0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X1A0);
    // 0x80235A98: lh          $v1, 0x1B8($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X1B8);
    // 0x80235A9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235AA0: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x80235AA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235AA8: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80235AAC: sh          $v0, 0x38($s2)
    MEM_H(0X38, ctx->r18) = ctx->r2;
    // 0x80235AB0: lh          $v0, 0x1A2($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X1A2);
    // 0x80235AB4: lh          $v1, 0x1BA($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X1BA);
    // 0x80235AB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235ABC: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x80235AC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235AC4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80235AC8: sh          $v0, 0x3A($s2)
    MEM_H(0X3A, ctx->r18) = ctx->r2;
    // 0x80235ACC: lh          $v0, 0x1A4($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X1A4);
    // 0x80235AD0: lh          $a0, 0x1BC($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1BC);
    // 0x80235AD4: lui         $v1, 0x280
    ctx->r3 = S32(0X280 << 16);
    // 0x80235AD8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80235ADC: sw          $v1, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r3;
    // 0x80235AE0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80235AE4: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x80235AE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235AEC: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80235AF0: j           L_80235B50
    // 0x80235AF4: sh          $v0, 0x3C($s2)
    MEM_H(0X3C, ctx->r18) = ctx->r2;
        goto L_80235B50;
    // 0x80235AF4: sh          $v0, 0x3C($s2)
    MEM_H(0X3C, ctx->r18) = ctx->r2;
L_80235AF8:
    // 0x80235AF8: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x80235AFC: lw          $s3, -0x3A2C($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X3A2C);
    // 0x80235B00: addiu       $s0, $s2, 0x18
    ctx->r16 = ADD32(ctx->r18, 0X18);
    // 0x80235B04: jal         0x8002C654
    // 0x80235B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_10;
    // 0x80235B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x80235B0C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80235B10: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235B14: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80235B18: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80235B1C: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
    // 0x80235B20: jal         0x80031428
    // 0x80235B24: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    func_80031428_C828(rdram, ctx);
        goto after_11;
    // 0x80235B24: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    after_11:
    // 0x80235B28: lhu         $v0, 0x180($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X180);
    // 0x80235B2C: addiu       $v0, $v0, -0x14
    ctx->r2 = ADD32(ctx->r2, -0X14);
    // 0x80235B30: sh          $v0, 0x38($s2)
    MEM_H(0X38, ctx->r18) = ctx->r2;
    // 0x80235B34: lhu         $v0, 0x182($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X182);
    // 0x80235B38: sh          $v0, 0x3A($s2)
    MEM_H(0X3A, ctx->r18) = ctx->r2;
    // 0x80235B3C: lhu         $v1, 0x184($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X184);
    // 0x80235B40: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x80235B44: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80235B48: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    // 0x80235B4C: sh          $v1, 0x3C($s2)
    MEM_H(0X3C, ctx->r18) = ctx->r3;
L_80235B50:
    // 0x80235B50: lw          $ra, 0x80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X80);
    // 0x80235B54: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x80235B58: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80235B5C: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x80235B60: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x80235B64: jr          $ra
    // 0x80235B68: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x80235B68: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8023824C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023824C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238250: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238254: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238258: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023825C: jal         0x8006033C
    // 0x80238260: addiu       $a0, $zero, 0x61F
    ctx->r4 = ADD32(0, 0X61F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80238260: addiu       $a0, $zero, 0x61F
    ctx->r4 = ADD32(0, 0X61F);
    after_0:
    // 0x80238264: beq         $v0, $zero, L_80238290
    if (ctx->r2 == 0) {
        // 0x80238268: addiu       $a0, $zero, 0x60A
        ctx->r4 = ADD32(0, 0X60A);
            goto L_80238290;
    }
    // 0x80238268: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    // 0x8023826C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80238270: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80238274: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80238278: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023827C: jal         0x8006036C
    // 0x80238280: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80238280: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    after_1:
    // 0x80238284: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    // 0x80238288: jal         0x8002A33C
    // 0x8023828C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8023828C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_2:
L_80238290:
    // 0x80238290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238294: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238298: jr          $ra
    // 0x8023829C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023829C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231820_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231824: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231828: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023182C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231830: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231834: bne         $v0, $zero, L_80231858
    if (ctx->r2 != 0) {
        // 0x80231838: addiu       $v0, $zero, 0x16
        ctx->r2 = ADD32(0, 0X16);
            goto L_80231858;
    }
    // 0x80231838: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8023183C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x80231840: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231844: jal         0x80050294
    // 0x80231848: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231848: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023184C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231850: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231854: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80231858:
    // 0x80231858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023185C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231860: jr          $ra
    // 0x80231864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236968_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023696C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236970: jal         0x8004F684
    // 0x80236974: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x80236974: nop

    after_0:
    // 0x80236978: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023697C: jr          $ra
    // 0x80236980: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236980: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230950_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230954: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230958: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023095C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230960: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230964: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230968: lw          $v0, -0x11C4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X11C4);
    // 0x8023096C: jalr        $v0
    // 0x80230970: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230970: nop

    after_0:
    // 0x80230974: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230978: jr          $ra
    // 0x8023097C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023097C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022670C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022670C: jr          $ra
    // 0x80226710: nop

    TRACE_RETURN()
    return;
    // 0x80226710: nop

    // 0x80226714: nop

    // 0x80226718: nop

    // 0x8022671C: nop

;}
RECOMP_FUNC void func_80225CB4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CB4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225CB8: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80225CBC: bne         $v0, $zero, L_80225CCC
    if (ctx->r2 != 0) {
        // 0x80225CC0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80225CCC;
    }
    // 0x80225CC0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225CC4: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80225CC8: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_80225CCC:
    // 0x80225CCC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225CD0: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80225CD4: bne         $v1, $v0, L_80225CF0
    if (ctx->r3 != ctx->r2) {
        // 0x80225CD8: addiu       $v0, $zero, 0xD2
        ctx->r2 = ADD32(0, 0XD2);
            goto L_80225CF0;
    }
    // 0x80225CD8: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x80225CDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225CE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225CE4: sb          $v0, -0x304D($at)
    MEM_B(-0X304D, ctx->r1) = ctx->r2;
    // 0x80225CE8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225CEC: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
L_80225CF0:
    // 0x80225CF0: bne         $v1, $v0, L_80225D00
    if (ctx->r3 != ctx->r2) {
        // 0x80225CF4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80225D00;
    }
    // 0x80225CF4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80225CF8: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80225CFC: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_80225D00:
    // 0x80225D00: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225D04: addiu       $v0, $zero, 0x136
    ctx->r2 = ADD32(0, 0X136);
    // 0x80225D08: bne         $v1, $v0, L_80225D24
    if (ctx->r3 != ctx->r2) {
        // 0x80225D0C: addiu       $v0, $zero, 0x172
        ctx->r2 = ADD32(0, 0X172);
            goto L_80225D24;
    }
    // 0x80225D0C: addiu       $v0, $zero, 0x172
    ctx->r2 = ADD32(0, 0X172);
    // 0x80225D10: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80225D14: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80225D18: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80225D1C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225D20: addiu       $v0, $zero, 0x172
    ctx->r2 = ADD32(0, 0X172);
L_80225D24:
    // 0x80225D24: bne         $v1, $v0, L_80225D34
    if (ctx->r3 != ctx->r2) {
        // 0x80225D28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225D34;
    }
    // 0x80225D28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225D2C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225D30: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_80225D34:
    // 0x80225D34: jr          $ra
    // 0x80225D38: nop

    TRACE_RETURN()
    return;
    // 0x80225D38: nop

;}
RECOMP_FUNC void func_8022ECA4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ECA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ECA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ECAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ECB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ECB4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ECB8: beq         $v1, $zero, L_8022ECD4
    if (ctx->r3 == 0) {
        // 0x8022ECBC: addiu       $a0, $s0, 0x4E0
        ctx->r4 = ADD32(ctx->r16, 0X4E0);
            goto L_8022ECD4;
    }
    // 0x8022ECBC: addiu       $a0, $s0, 0x4E0
    ctx->r4 = ADD32(ctx->r16, 0X4E0);
    // 0x8022ECC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ECC4: beq         $v1, $v0, L_8022ECF0
    if (ctx->r3 == ctx->r2) {
        // 0x8022ECC8: nop
    
            goto L_8022ECF0;
    }
    // 0x8022ECC8: nop

    // 0x8022ECCC: j           L_8022EE18
    // 0x8022ECD0: nop

        goto L_8022EE18;
    // 0x8022ECD0: nop

L_8022ECD4:
    // 0x8022ECD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ECD8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022ECDC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022ECE0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022ECE4: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022ECE8: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x8022ECEC: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
L_8022ECF0:
    // 0x8022ECF0: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022ECF4: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8022ECF8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022ECFC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022ED00: beq         $v0, $zero, L_8022ED1C
    if (ctx->r2 == 0) {
        // 0x8022ED04: lui         $v1, 0xFF
        ctx->r3 = S32(0XFF << 16);
            goto L_8022ED1C;
    }
    // 0x8022ED04: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022ED08: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x8022ED0C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022ED10: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022ED14: beq         $v0, $zero, L_8022ED34
    if (ctx->r2 == 0) {
        // 0x8022ED18: nop
    
            goto L_8022ED34;
    }
    // 0x8022ED18: nop

L_8022ED1C:
    // 0x8022ED1C: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022ED20: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022ED24: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022ED28: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022ED2C: j           L_8022EE18
    // 0x8022ED30: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
        goto L_8022EE18;
    // 0x8022ED30: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_8022ED34:
    // 0x8022ED34: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8022ED38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022ED3C: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022ED40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ED44: bgtzl       $v0, L_8022ED5C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022ED48: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022ED5C;
    }
    goto skip_0;
    // 0x8022ED48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022ED4C: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022ED50: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022ED54: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8022ED58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022ED5C:
    // 0x8022ED5C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ED60: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022ED64: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x8022ED68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022ED6C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022ED70: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022ED74: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022ED78: jal         0x8004DA90
    // 0x8022ED7C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022ED7C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022ED80: jal         0x80040F30
    // 0x8022ED84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022ED84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022ED88: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022ED8C: beq         $v0, $zero, L_8022EDA4
    if (ctx->r2 == 0) {
        // 0x8022ED90: nop
    
            goto L_8022EDA4;
    }
    // 0x8022ED90: nop

    // 0x8022ED94: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ED98: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022ED9C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EDA0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022EDA4:
    // 0x8022EDA4: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022EDA8: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022EDAC: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022EDB0: bltz        $v0, L_8022EDC8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022EDB4: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022EDC8;
    }
    // 0x8022EDB4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022EDB8: beq         $v0, $zero, L_8022EDD8
    if (ctx->r2 == 0) {
        // 0x8022EDBC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022EDD8;
    }
    // 0x8022EDBC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022EDC0: j           L_8022EE04
    // 0x8022EDC4: nop

        goto L_8022EE04;
    // 0x8022EDC4: nop

L_8022EDC8:
    // 0x8022EDC8: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022EDCC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022EDD0: bne         $v0, $zero, L_8022EE04
    if (ctx->r2 != 0) {
        // 0x8022EDD4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022EE04;
    }
    // 0x8022EDD4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022EDD8:
    // 0x8022EDD8: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022EDDC: jal         0x8009A3B4
    // 0x8022EDE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022EDE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022EDE4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022EDE8: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022EDEC: jal         0x8009A3B4
    // 0x8022EDF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022EDF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8022EDF4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EDF8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022EDFC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EE00: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022EE04:
    // 0x8022EE04: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x8022EE08: beq         $v0, $zero, L_8022EE18
    if (ctx->r2 == 0) {
        // 0x8022EE0C: addiu       $a0, $zero, 0xD5
        ctx->r4 = ADD32(0, 0XD5);
            goto L_8022EE18;
    }
    // 0x8022EE0C: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x8022EE10: jal         0x8002A33C
    // 0x8022EE14: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022EE14: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
L_8022EE18:
    // 0x8022EE18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EE1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EE20: jr          $ra
    // 0x8022EE24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EE24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022728C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022728C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227290: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227294: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022729C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802272A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802272A4: beq         $v1, $v0, L_8022730C
    if (ctx->r3 == ctx->r2) {
        // 0x802272A8: addiu       $a0, $s0, 0x328
        ctx->r4 = ADD32(ctx->r16, 0X328);
            goto L_8022730C;
    }
    // 0x802272A8: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x802272AC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802272B0: beql        $v0, $zero, L_802272C8
    if (ctx->r2 == 0) {
        // 0x802272B4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802272C8;
    }
    goto skip_0;
    // 0x802272B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802272B8: beq         $v1, $zero, L_802272D8
    if (ctx->r3 == 0) {
        // 0x802272BC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_802272D8;
    }
    // 0x802272BC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802272C0: j           L_80227398
    // 0x802272C4: nop

        goto L_80227398;
    // 0x802272C4: nop

L_802272C8:
    // 0x802272C8: beq         $v1, $v0, L_80227334
    if (ctx->r3 == ctx->r2) {
        // 0x802272CC: nop
    
            goto L_80227334;
    }
    // 0x802272CC: nop

    // 0x802272D0: j           L_80227398
    // 0x802272D4: nop

        goto L_80227398;
    // 0x802272D4: nop

L_802272D8:
    // 0x802272D8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802272DC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802272E0: beq         $v0, $zero, L_802272F0
    if (ctx->r2 == 0) {
        // 0x802272E4: sb          $v1, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r3;
            goto L_802272F0;
    }
    // 0x802272E4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802272E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802272EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802272F0:
    // 0x802272F0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802272F4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802272F8: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x802272FC: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80227300: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x80227304: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x80227308: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
L_8022730C:
    // 0x8022730C: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80227310: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227314: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x80227318: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022731C: bgez        $v0, L_80227398
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227320: nop
    
            goto L_80227398;
    }
    // 0x80227320: nop

    // 0x80227324: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80227328: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022732C: j           L_80227398
    // 0x80227330: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_80227398;
    // 0x80227330: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_80227334:
    // 0x80227334: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80227338: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022733C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80227340: andi        $v1, $v1, 0x20
    ctx->r3 = ctx->r3 & 0X20;
    // 0x80227344: beq         $v1, $zero, L_80227360
    if (ctx->r3 == 0) {
        // 0x80227348: sh          $v0, 0x328($s0)
        MEM_H(0X328, ctx->r16) = ctx->r2;
            goto L_80227360;
    }
    // 0x80227348: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x8022734C: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x80227350: jal         0x8006033C
    // 0x80227354: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80227354: nop

    after_0:
    // 0x80227358: j           L_80227384
    // 0x8022735C: nop

        goto L_80227384;
    // 0x8022735C: nop

L_80227360:
    // 0x80227360: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80227364: lui         $v0, 0x31
    ctx->r2 = S32(0X31 << 16);
    // 0x80227368: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022736C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80227370: beq         $v0, $zero, L_8022738C
    if (ctx->r2 == 0) {
        // 0x80227374: lui         $v1, 0xFF
        ctx->r3 = S32(0XFF << 16);
            goto L_8022738C;
    }
    // 0x80227374: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80227378: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x8022737C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80227380: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_80227384:
    // 0x80227384: beq         $v0, $zero, L_80227398
    if (ctx->r2 == 0) {
        // 0x80227388: nop
    
            goto L_80227398;
    }
    // 0x80227388: nop

L_8022738C:
    // 0x8022738C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227390: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80227394: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80227398:
    // 0x80227398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022739C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802273A0: jr          $ra
    // 0x802273A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802273A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
