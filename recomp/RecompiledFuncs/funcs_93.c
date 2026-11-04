#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022B43C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B43C: jr          $ra
    // 0x8022B440: nop

    TRACE_RETURN()
    return;
    // 0x8022B440: nop

;}
RECOMP_FUNC void func_80241DCC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241DCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80241DD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80241DD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80241DD8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80241DDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80241DE0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80241DE4: bne         $v0, $zero, L_80241E18
    if (ctx->r2 != 0) {
        // 0x80241DE8: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80241E18;
    }
    // 0x80241DE8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80241DEC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80241DF0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80241DF4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80241DF8: lbu         $a1, 0x1A70($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1A70);
    // 0x80241DFC: jal         0x80050294
    // 0x80241E00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80241E00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80241E04: sb          $zero, 0x15($s1)
    MEM_B(0X15, ctx->r17) = 0;
    // 0x80241E08: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80241E0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241E10: j           L_80241EBC
    // 0x80241E14: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80241EBC;
    // 0x80241E14: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80241E18:
    // 0x80241E18: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80241E1C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80241E20: bne         $v1, $v0, L_80241E3C
    if (ctx->r3 != ctx->r2) {
        // 0x80241E24: nop
    
            goto L_80241E3C;
    }
    // 0x80241E24: nop

    // 0x80241E28: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80241E2C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80241E30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241E34: j           L_80241EB4
    // 0x80241E38: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80241EB4;
    // 0x80241E38: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80241E3C:
    // 0x80241E3C: lbu         $v1, 0x15($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X15);
    // 0x80241E40: sltiu       $v0, $v1, 0x28
    ctx->r2 = ctx->r3 < 0X28 ? 1 : 0;
    // 0x80241E44: beq         $v0, $zero, L_80241EA8
    if (ctx->r2 == 0) {
        // 0x80241E48: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_80241EA8;
    }
    // 0x80241E48: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80241E4C: bne         $v0, $zero, L_80241E70
    if (ctx->r2 != 0) {
        // 0x80241E50: lui         $v0, 0xFFF9
        ctx->r2 = S32(0XFFF9 << 16);
            goto L_80241E70;
    }
    // 0x80241E50: lui         $v0, 0xFFF9
    ctx->r2 = S32(0XFFF9 << 16);
    // 0x80241E54: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x80241E58: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80241E5C: lui         $v1, 0xFFFC
    ctx->r3 = S32(0XFFFC << 16);
    // 0x80241E60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80241E64: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80241E68: j           L_80241E88
    // 0x80241E6C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_80241E88;
    // 0x80241E6C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80241E70:
    // 0x80241E70: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80241E74: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80241E78: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80241E7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241E80: addiu       $a0, $a0, -0x3
    ctx->r4 = ADD32(ctx->r4, -0X3);
    // 0x80241E84: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
L_80241E88:
    // 0x80241E88: sh          $a0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r4;
    // 0x80241E8C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80241E90: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x80241E94: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x80241E98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80241E9C: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x80241EA0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80241EA4: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
L_80241EA8:
    // 0x80241EA8: lbu         $v0, 0x15($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X15);
    // 0x80241EAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241EB0: sb          $v0, 0x15($s1)
    MEM_B(0X15, ctx->r17) = ctx->r2;
L_80241EB4:
    // 0x80241EB4: jal         0x8005044C
    // 0x80241EB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80241EB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80241EBC:
    // 0x80241EBC: lbu         $v0, 0x15($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X15);
    // 0x80241EC0: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x80241EC4: beq         $v0, $zero, L_80241EDC
    if (ctx->r2 == 0) {
        // 0x80241EC8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80241EDC;
    }
    // 0x80241EC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80241ECC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80241ED0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80241ED4: jal         0x8003B564
    // 0x80241ED8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_2;
    // 0x80241ED8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
L_80241EDC:
    // 0x80241EDC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80241EE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80241EE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80241EE8: jr          $ra
    // 0x80241EEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80241EEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024B370_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B370: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8024B374: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8024B378: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x8024B37C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8024B380: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8024B384: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8024B388: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8024B38C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8024B390: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8024B394: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8024B398: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8024B39C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8024B3A0: lb          $v0, 0xF($fp)
    ctx->r2 = MEM_B(ctx->r30, 0XF);
    // 0x8024B3A4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8024B3A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024B3AC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024B3B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024B3B4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024B3B8: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x8024B3BC: addu        $s5, $s5, $v1
    ctx->r21 = ADD32(ctx->r21, ctx->r3);
    // 0x8024B3C0: lw          $s5, 0x26A8($s5)
    ctx->r21 = MEM_W(ctx->r21, 0X26A8);
    // 0x8024B3C4: lh          $v0, 0x0($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X0);
    // 0x8024B3C8: lhu         $s0, 0x0($s5)
    ctx->r16 = MEM_HU(ctx->r21, 0X0);
    // 0x8024B3CC: beq         $v0, $zero, L_8024B4D4
    if (ctx->r2 == 0) {
        // 0x8024B3D0: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_8024B4D4;
    }
    // 0x8024B3D0: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x8024B3D4: addiu       $s2, $s5, 0x4
    ctx->r18 = ADD32(ctx->r21, 0X4);
L_8024B3D8:
    // 0x8024B3D8: lbu         $s1, 0x1($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0X1);
    // 0x8024B3DC: bne         $s1, $zero, L_8024B44C
    if (ctx->r17 != 0) {
        // 0x8024B3E0: nop
    
            goto L_8024B44C;
    }
    // 0x8024B3E0: nop

    // 0x8024B3E4: lhu         $s3, -0x2($s2)
    ctx->r19 = MEM_HU(ctx->r18, -0X2);
    // 0x8024B3E8: lbu         $s1, 0x0($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0X0);
    // 0x8024B3EC: jal         0x8004EFE4
    // 0x8024B3F0: addu        $s4, $s6, $zero
    ctx->r20 = ADD32(ctx->r22, 0);
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8024B3F0: addu        $s4, $s6, $zero
    ctx->r20 = ADD32(ctx->r22, 0);
    after_0:
    // 0x8024B3F4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024B3F8: beq         $v1, $zero, L_8024B4BC
    if (ctx->r3 == 0) {
        // 0x8024B3FC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8024B4BC;
    }
    // 0x8024B3FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8024B400: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
    // 0x8024B404: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x8024B408: sb          $a1, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r5;
    // 0x8024B40C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8024B410: sltiu       $v0, $s1, 0x4
    ctx->r2 = ctx->r17 < 0X4 ? 1 : 0;
    // 0x8024B414: sb          $s1, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r17;
    // 0x8024B418: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x8024B41C: sh          $s0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r16;
    // 0x8024B420: sh          $a1, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r5;
    // 0x8024B424: beq         $v0, $zero, L_8024B438
    if (ctx->r2 == 0) {
        // 0x8024B428: sh          $s3, 0x18($v1)
        MEM_H(0X18, ctx->r3) = ctx->r19;
            goto L_8024B438;
    }
    // 0x8024B428: sh          $s3, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r19;
    // 0x8024B42C: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x8024B430: j           L_8024B43C
    // 0x8024B434: sh          $a1, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r5;
        goto L_8024B43C;
    // 0x8024B434: sh          $a1, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r5;
L_8024B438:
    // 0x8024B438: sh          $zero, 0x56($v1)
    MEM_H(0X56, ctx->r3) = 0;
L_8024B43C:
    // 0x8024B43C: lbu         $v0, 0x1($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0X1);
    // 0x8024B440: sb          $s4, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r20;
    // 0x8024B444: j           L_8024B4BC
    // 0x8024B448: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_8024B4BC;
    // 0x8024B448: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8024B44C:
    // 0x8024B44C: lhu         $s3, 0x0($s5)
    ctx->r19 = MEM_HU(ctx->r21, 0X0);
    // 0x8024B450: lhu         $s4, -0x2($s2)
    ctx->r20 = MEM_HU(ctx->r18, -0X2);
    // 0x8024B454: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
    // 0x8024B458: jal         0x8004EFE4
    // 0x8024B45C: addu        $s7, $s6, $zero
    ctx->r23 = ADD32(ctx->r22, 0);
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x8024B45C: addu        $s7, $s6, $zero
    ctx->r23 = ADD32(ctx->r22, 0);
    after_1:
    // 0x8024B460: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8024B464: beq         $a0, $zero, L_8024B4BC
    if (ctx->r4 == 0) {
        // 0x8024B468: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8024B4BC;
    }
    // 0x8024B468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8024B46C: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8024B470: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x8024B474: sb          $a1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r5;
    // 0x8024B478: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8024B47C: sltiu       $v0, $s0, 0x4
    ctx->r2 = ctx->r16 < 0X4 ? 1 : 0;
    // 0x8024B480: sltiu       $v1, $s1, 0x1
    ctx->r3 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x8024B484: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024B488: sb          $s0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r16;
    // 0x8024B48C: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x8024B490: sh          $s3, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r19;
    // 0x8024B494: sh          $a1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r5;
    // 0x8024B498: beq         $v0, $zero, L_8024B4AC
    if (ctx->r2 == 0) {
        // 0x8024B49C: sh          $s4, 0x18($a0)
        MEM_H(0X18, ctx->r4) = ctx->r20;
            goto L_8024B4AC;
    }
    // 0x8024B49C: sh          $s4, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r20;
    // 0x8024B4A0: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x8024B4A4: j           L_8024B4B0
    // 0x8024B4A8: sh          $a1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r5;
        goto L_8024B4B0;
    // 0x8024B4A8: sh          $a1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r5;
L_8024B4AC:
    // 0x8024B4AC: sh          $zero, 0x56($a0)
    MEM_H(0X56, ctx->r4) = 0;
L_8024B4B0:
    // 0x8024B4B0: lbu         $v0, 0x1($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0X1);
    // 0x8024B4B4: sb          $s7, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r23;
    // 0x8024B4B8: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
L_8024B4BC:
    // 0x8024B4BC: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8024B4C0: addiu       $s5, $s5, 0x6
    ctx->r21 = ADD32(ctx->r21, 0X6);
    // 0x8024B4C4: lh          $v0, 0x0($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X0);
    // 0x8024B4C8: lhu         $s0, 0x0($s5)
    ctx->r16 = MEM_HU(ctx->r21, 0X0);
    // 0x8024B4CC: bne         $v0, $zero, L_8024B3D8
    if (ctx->r2 != 0) {
        // 0x8024B4D0: addiu       $s2, $s2, 0x6
        ctx->r18 = ADD32(ctx->r18, 0X6);
            goto L_8024B3D8;
    }
    // 0x8024B4D0: addiu       $s2, $s2, 0x6
    ctx->r18 = ADD32(ctx->r18, 0X6);
L_8024B4D4:
    // 0x8024B4D4: lb          $v0, 0xF($fp)
    ctx->r2 = MEM_B(ctx->r30, 0XF);
    // 0x8024B4D8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8024B4DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024B4E0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024B4E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024B4E8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024B4EC: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8024B4F0: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    // 0x8024B4F4: lw          $s1, 0x26AC($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X26AC);
    // 0x8024B4F8: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8024B4FC: lhu         $s0, 0x0($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X0);
    // 0x8024B500: beq         $v0, $zero, L_8024B560
    if (ctx->r2 == 0) {
        // 0x8024B504: addiu       $s6, $zero, 0x4
        ctx->r22 = ADD32(0, 0X4);
            goto L_8024B560;
    }
    // 0x8024B504: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x8024B508: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8024B50C: addiu       $s4, $zero, 0x1F
    ctx->r20 = ADD32(0, 0X1F);
    // 0x8024B510: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
L_8024B514:
    // 0x8024B514: jal         0x8004EFE4
    // 0x8024B518: lhu         $s2, 0x2($s1)
    ctx->r18 = MEM_HU(ctx->r17, 0X2);
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x8024B518: lhu         $s2, 0x2($s1)
    ctx->r18 = MEM_HU(ctx->r17, 0X2);
    after_2:
    // 0x8024B51C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024B520: beq         $v1, $zero, L_8024B554
    if (ctx->r3 == 0) {
        // 0x8024B524: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8024B554;
    }
    // 0x8024B524: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8024B528: sb          $s5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r21;
    // 0x8024B52C: sb          $s4, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r20;
    // 0x8024B530: sb          $s6, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r22;
    // 0x8024B534: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x8024B538: sh          $s0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r16;
    // 0x8024B53C: sh          $s3, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r19;
    // 0x8024B540: sh          $s2, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r18;
    // 0x8024B544: sh          $zero, 0x56($v1)
    MEM_H(0X56, ctx->r3) = 0;
    // 0x8024B548: lbu         $v0, 0x1($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0X1);
    // 0x8024B54C: sb          $zero, 0xF($v1)
    MEM_B(0XF, ctx->r3) = 0;
    // 0x8024B550: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8024B554:
    // 0x8024B554: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8024B558: bne         $v0, $zero, L_8024B514
    if (ctx->r2 != 0) {
        // 0x8024B55C: lhu         $s0, 0x0($s1)
        ctx->r16 = MEM_HU(ctx->r17, 0X0);
            goto L_8024B514;
    }
    // 0x8024B55C: lhu         $s0, 0x0($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X0);
L_8024B560:
    // 0x8024B560: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8024B564: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8024B568: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8024B56C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8024B570: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8024B574: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8024B578: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8024B57C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8024B580: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8024B584: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8024B588: jr          $ra
    // 0x8024B58C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8024B58C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8023E440_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E440: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023E444: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023E448: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023E44C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023E450: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023E454: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023E458: bne         $v0, $zero, L_8023E4C8
    if (ctx->r2 != 0) {
        // 0x8023E45C: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_8023E4C8;
    }
    // 0x8023E45C: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023E460: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023E464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E468: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8023E46C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E470: beq         $v1, $v0, L_8023E4B0
    if (ctx->r3 == ctx->r2) {
        // 0x8023E474: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023E4B0;
    }
    // 0x8023E474: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023E478: beql        $v0, $zero, L_8023E490
    if (ctx->r2 == 0) {
        // 0x8023E47C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8023E490;
    }
    goto skip_0;
    // 0x8023E47C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    skip_0:
    // 0x8023E480: beq         $v1, $zero, L_8023E4A0
    if (ctx->r3 == 0) {
        // 0x8023E484: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8023E4A0;
    }
    // 0x8023E484: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023E488: j           L_8023E4C0
    // 0x8023E48C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8023E4C0;
    // 0x8023E48C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8023E490:
    // 0x8023E490: beq         $v1, $v0, L_8023E4A8
    if (ctx->r3 == ctx->r2) {
        // 0x8023E494: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8023E4A8;
    }
    // 0x8023E494: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023E498: j           L_8023E4C0
    // 0x8023E49C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8023E4C0;
    // 0x8023E49C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8023E4A0:
    // 0x8023E4A0: j           L_8023E574
    // 0x8023E4A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8023E574;
    // 0x8023E4A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023E4A8:
    // 0x8023E4A8: j           L_8023E574
    // 0x8023E4AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8023E574;
    // 0x8023E4AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023E4B0:
    // 0x8023E4B0: addiu       $a0, $zero, 0xCF
    ctx->r4 = ADD32(0, 0XCF);
    // 0x8023E4B4: jal         0x8002A33C
    // 0x8023E4B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023E4B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8023E4BC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8023E4C0:
    // 0x8023E4C0: j           L_8023E574
    // 0x8023E4C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8023E574;
    // 0x8023E4C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023E4C8:
    // 0x8023E4C8: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8023E4CC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8023E4D0: beq         $v1, $zero, L_8023E4E8
    if (ctx->r3 == 0) {
        // 0x8023E4D4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8023E4E8;
    }
    // 0x8023E4D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023E4D8: beq         $v1, $v0, L_8023E514
    if (ctx->r3 == ctx->r2) {
        // 0x8023E4DC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023E514;
    }
    // 0x8023E4DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023E4E0: j           L_8023E530
    // 0x8023E4E4: nop

        goto L_8023E530;
    // 0x8023E4E4: nop

L_8023E4E8:
    // 0x8023E4E8: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8023E4EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023E4F0: bne         $v1, $v0, L_8023E574
    if (ctx->r3 != ctx->r2) {
        // 0x8023E4F4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023E574;
    }
    // 0x8023E4F4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023E4F8: lhu         $v1, 0x440($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X440);
    // 0x8023E4FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023E500: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023E504: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x8023E508: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8023E50C: j           L_8023E574
    // 0x8023E510: sh          $v1, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r3;
        goto L_8023E574;
    // 0x8023E510: sh          $v1, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r3;
L_8023E514:
    // 0x8023E514: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8023E518: bne         $v1, $v0, L_8023E574
    if (ctx->r3 != ctx->r2) {
        // 0x8023E51C: nop
    
            goto L_8023E574;
    }
    // 0x8023E51C: nop

    // 0x8023E520: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023E524: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023E528: j           L_8023E574
    // 0x8023E52C: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
        goto L_8023E574;
    // 0x8023E52C: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
L_8023E530:
    // 0x8023E530: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023E534: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E538: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023E53C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023E540: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E544: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023E548: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023E54C: bne         $v0, $zero, L_8023E574
    if (ctx->r2 != 0) {
        // 0x8023E550: nop
    
            goto L_8023E574;
    }
    // 0x8023E550: nop

    // 0x8023E554: jal         0x8023F010
    // 0x8023E558: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023F010_ovl10(rdram, ctx);
        goto after_1;
    // 0x8023E558: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023E55C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023E560: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8023E564: bne         $v0, $zero, L_8023E574
    if (ctx->r2 != 0) {
        // 0x8023E568: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8023E574;
    }
    // 0x8023E568: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023E56C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023E570: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023E574:
    // 0x8023E574: lhu         $a2, 0x0($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X0);
    // 0x8023E578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E57C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8023E580: andi        $a2, $a2, 0x400
    ctx->r6 = ctx->r6 & 0X400;
    // 0x8023E584: sltu        $a2, $zero, $a2
    ctx->r6 = 0 < ctx->r6 ? 1 : 0;
    // 0x8023E588: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x8023E58C: andi        $a2, $a2, 0x6
    ctx->r6 = ctx->r6 & 0X6;
    // 0x8023E590: jal         0x8023F448
    // 0x8023E594: ori         $a2, $a2, 0x2
    ctx->r6 = ctx->r6 | 0X2;
    func_8023F448_ovl10(rdram, ctx);
        goto after_2;
    // 0x8023E594: ori         $a2, $a2, 0x2
    ctx->r6 = ctx->r6 | 0X2;
    after_2:
    // 0x8023E598: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023E59C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023E5A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023E5A4: jr          $ra
    // 0x8023E5A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023E5A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80248F4C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248F4C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80248F50: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80248F54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80248F58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80248F5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80248F60: bne         $v0, $s0, L_80248F78
    if (ctx->r2 != ctx->r16) {
        // 0x80248F64: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80248F78;
    }
    // 0x80248F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80248F68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248F6C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80248F70: j           L_80248FDC
    // 0x80248F74: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80248FDC;
    // 0x80248F74: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80248F78:
    // 0x80248F78: lw          $v1, 0x4C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4C);
    // 0x80248F7C: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80248F80: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80248F84: beq         $v0, $zero, L_80248FC4
    if (ctx->r2 == 0) {
        // 0x80248F88: nop
    
            goto L_80248FC4;
    }
    // 0x80248F88: nop

    // 0x80248F8C: jal         0x802495F4
    // 0x80248F90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802495F4_ovl10(rdram, ctx);
        goto after_0;
    // 0x80248F90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80248F94: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80248F98: beq         $v0, $zero, L_80248FA8
    if (ctx->r2 == 0) {
        // 0x80248F9C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80248FA8;
    }
    // 0x80248F9C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80248FA0: j           L_80248FDC
    // 0x80248FA4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80248FDC;
    // 0x80248FA4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80248FA8:
    // 0x80248FA8: jal         0x80249324
    // 0x80248FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80249324_ovl10(rdram, ctx);
        goto after_1;
    // 0x80248FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80248FB0: addiu       $a0, $zero, 0x13D
    ctx->r4 = ADD32(0, 0X13D);
    // 0x80248FB4: jal         0x8002A33C
    // 0x80248FB8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80248FB8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_2:
    // 0x80248FBC: j           L_80248FDC
    // 0x80248FC0: nop

        goto L_80248FDC;
    // 0x80248FC0: nop

L_80248FC4:
    // 0x80248FC4: bgez        $v1, L_80248FDC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80248FC8: nop
    
            goto L_80248FDC;
    }
    // 0x80248FC8: nop

    // 0x80248FCC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80248FD0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80248FD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80248FD8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80248FDC:
    // 0x80248FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80248FE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80248FE4: jr          $ra
    // 0x80248FE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80248FE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233650_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233650: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80233654: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80233658: beq         $v1, $zero, L_80233674
    if (ctx->r3 == 0) {
        // 0x8023365C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80233674;
    }
    // 0x8023365C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233664: beq         $v1, $v0, L_80233684
    if (ctx->r3 == ctx->r2) {
        // 0x80233668: nop
    
            goto L_80233684;
    }
    // 0x80233668: nop

    // 0x8023366C: j           L_80233698
    // 0x80233670: nop

        goto L_80233698;
    // 0x80233670: nop

L_80233674:
    // 0x80233674: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80233678: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8023367C: j           L_80233698
    // 0x80233680: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
        goto L_80233698;
    // 0x80233680: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_80233684:
    // 0x80233684: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80233688: bgez        $v0, L_80233698
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023368C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80233698;
    }
    // 0x8023368C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233690: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80233694: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
L_80233698:
    // 0x80233698: jr          $ra
    // 0x8023369C: nop

    TRACE_RETURN()
    return;
    // 0x8023369C: nop

;}
RECOMP_FUNC void func_802329A4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802329A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802329A8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802329AC: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x802329B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802329B4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802329B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802329BC: lw          $v0, 0x114C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X114C);
    // 0x802329C0: jalr        $v0
    // 0x802329C4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802329C4: nop

    after_0:
    // 0x802329C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802329CC: jr          $ra
    // 0x802329D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802329D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D414_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D414: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D418: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D41C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D420: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D424: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D428: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D42C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D430: beq         $v1, $v0, L_8022D4EC
    if (ctx->r3 == ctx->r2) {
        // 0x8022D434: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022D4EC;
    }
    // 0x8022D434: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022D438: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022D43C: beql        $v0, $zero, L_8022D454
    if (ctx->r2 == 0) {
        // 0x8022D440: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D454;
    }
    goto skip_0;
    // 0x8022D440: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022D444: beq         $v1, $zero, L_8022D46C
    if (ctx->r3 == 0) {
        // 0x8022D448: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022D46C;
    }
    // 0x8022D448: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D44C: j           L_8022D604
    // 0x8022D450: nop

        goto L_8022D604;
    // 0x8022D450: nop

L_8022D454:
    // 0x8022D454: beq         $v1, $v0, L_8022D548
    if (ctx->r3 == ctx->r2) {
        // 0x8022D458: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D548;
    }
    // 0x8022D458: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D45C: beq         $v1, $v0, L_8022D5D0
    if (ctx->r3 == ctx->r2) {
        // 0x8022D460: nop
    
            goto L_8022D5D0;
    }
    // 0x8022D460: nop

    // 0x8022D464: j           L_8022D604
    // 0x8022D468: nop

        goto L_8022D604;
    // 0x8022D468: nop

L_8022D46C:
    // 0x8022D46C: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022D470: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D474: lb          $a1, 0xC($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XC);
    // 0x8022D478: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022D47C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D480: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D484: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x8022D488: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D48C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022D490: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022D494: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x8022D498: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022D49C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022D4A0: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x8022D4A4: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022D4A8: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022D4AC: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8022D4B0: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
    // 0x8022D4B4: beq         $a1, $zero, L_8022D4EC
    if (ctx->r5 == 0) {
        // 0x8022D4B8: sh          $a0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r4;
            goto L_8022D4EC;
    }
    // 0x8022D4B8: sh          $a0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r4;
    // 0x8022D4BC: lw          $v0, 0x380($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X380);
    // 0x8022D4C0: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x8022D4C4: lw          $v1, 0x380($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X380);
    // 0x8022D4C8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D4CC: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8022D4D0: lw          $v1, 0x380($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X380);
    // 0x8022D4D4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022D4D8: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x8022D4DC: lw          $v1, 0x380($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X380);
    // 0x8022D4E0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D4E4: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    // 0x8022D4E8: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_8022D4EC:
    // 0x8022D4EC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D4F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D4F4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D4F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D4FC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D500: bltz        $v0, L_8022D530
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022D504: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_8022D530;
    }
    // 0x8022D504: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022D508: beq         $v0, $zero, L_8022D604
    if (ctx->r2 == 0) {
        // 0x8022D50C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D604;
    }
    // 0x8022D50C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D510: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022D514: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022D518: jal         0x8004DA90
    // 0x8022D51C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022D51C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022D520: jal         0x80040F30
    // 0x8022D524: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022D524: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022D528: j           L_8022D604
    // 0x8022D52C: nop

        goto L_8022D604;
    // 0x8022D52C: nop

L_8022D530:
    // 0x8022D530: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022D534: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D538: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D53C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D540: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x8022D544: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022D548:
    // 0x8022D548: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D54C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D550: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D554: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D558: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D55C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D560: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022D564: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022D568: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022D56C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022D570: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022D574: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022D578: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022D57C: jal         0x8004DA90
    // 0x8022D580: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022D580: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x8022D584: jal         0x80040F30
    // 0x8022D588: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022D588: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022D58C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D590: beq         $v1, $zero, L_8022D604
    if (ctx->r3 == 0) {
        // 0x8022D594: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_8022D604;
    }
    // 0x8022D594: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022D598: bnel        $v0, $zero, L_8022D5A0
    if (ctx->r2 != 0) {
        // 0x8022D59C: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022D5A0;
    }
    goto skip_1;
    // 0x8022D59C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_8022D5A0:
    // 0x8022D5A0: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022D5A4: beq         $v0, $zero, L_8022D604
    if (ctx->r2 == 0) {
        // 0x8022D5A8: nop
    
            goto L_8022D604;
    }
    // 0x8022D5A8: nop

    // 0x8022D5AC: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022D5B0: bgtz        $v0, L_8022D604
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022D5B4: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_8022D604;
    }
    // 0x8022D5B4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022D5B8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D5BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D5C0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D5C4: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x8022D5C8: j           L_8022D604
    // 0x8022D5CC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022D604;
    // 0x8022D5CC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022D5D0:
    // 0x8022D5D0: lhu         $v0, 0x34C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34C);
    // 0x8022D5D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D5D8: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022D5DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D5E0: bgez        $v0, L_8022D604
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D5E4: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8022D604;
    }
    // 0x8022D5E4: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022D5E8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022D5EC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022D5F0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022D5F4: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022D5F8: sb          $v1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r3;
    // 0x8022D5FC: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022D600: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022D604:
    // 0x8022D604: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D608: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D60C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022D610: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8022D614: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D618: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x8022D61C: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x8022D620: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022D624: bgtz        $v0, L_8022D640
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022D628: nop
    
            goto L_8022D640;
    }
    // 0x8022D628: nop

    // 0x8022D62C: bne         $v1, $zero, L_8022D640
    if (ctx->r3 != 0) {
        // 0x8022D630: nop
    
            goto L_8022D640;
    }
    // 0x8022D630: nop

    // 0x8022D634: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D638: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022D63C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022D640:
    // 0x8022D640: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D644: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D648: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D64C: jr          $ra
    // 0x8022D650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225980_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225980: jr          $ra
    // 0x80225984: nop

    TRACE_RETURN()
    return;
    // 0x80225984: nop

;}
RECOMP_FUNC void func_802284B4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802284B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802284B8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802284BC: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802284C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802284C4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802284C8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802284CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802284D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802284D4: lb          $v1, 0x2($s3)
    ctx->r3 = MEM_B(ctx->r19, 0X2);
    // 0x802284D8: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x802284DC: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x802284E0: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x802284E4: beq         $v0, $zero, L_802286B0
    if (ctx->r2 == 0) {
        // 0x802284E8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802286B0;
    }
    // 0x802284E8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802284EC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802284F0: addu        $at, $at, $v0
    gpr jr_addend_802284F8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802284F4: lw          $v0, 0x2B90($at)
    ctx->r2 = ADD32(ctx->r1, 0X2B90);
    // 0x802284F8: jr          $v0
    // 0x802284FC: nop

    switch (jr_addend_802284F8 >> 2) {
        case 0: goto L_80228500; break;
        case 1: goto L_80228524; break;
        case 2: goto L_80228558; break;
        case 3: goto L_80228594; break;
        case 4: goto L_80228618; break;
        case 5: goto L_80228640; break;
        case 6: goto L_80228678; break;
        default: switch_error(__func__, 0x802284F8, 0x80252B90);
    }
    // 0x802284FC: nop

L_80228500:
    // 0x80228500: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80228504: lw          $v1, 0x560C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X560C);
    // 0x80228508: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x8022850C: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80228510: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x80228514: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x80228518: addiu       $v1, $zero, 0x23
    ctx->r3 = ADD32(0, 0X23);
    // 0x8022851C: j           L_8022866C
    // 0x80228520: sh          $v1, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r3;
        goto L_8022866C;
    // 0x80228520: sh          $v1, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r3;
L_80228524:
    // 0x80228524: lhu         $v0, 0x8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8);
    // 0x80228528: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022852C: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
    // 0x80228530: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228534: bne         $v0, $zero, L_802286B0
    if (ctx->r2 != 0) {
        // 0x80228538: nop
    
            goto L_802286B0;
    }
    // 0x80228538: nop

    // 0x8022853C: jal         0x800600F8
    // 0x80228540: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_0;
    // 0x80228540: nop

    after_0:
    // 0x80228544: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80228548: jal         0x8022A350
    // 0x8022854C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8022A350_ovl10(rdram, ctx);
        goto after_1;
    // 0x8022854C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x80228550: j           L_80228668
    // 0x80228554: nop

        goto L_80228668;
    // 0x80228554: nop

L_80228558:
    // 0x80228558: jal         0x8006033C
    // 0x8022855C: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022855C: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_2:
    // 0x80228560: beq         $v0, $zero, L_802286B0
    if (ctx->r2 == 0) {
        // 0x80228564: nop
    
            goto L_802286B0;
    }
    // 0x80228564: nop

    // 0x80228568: jal         0x80060590
    // 0x8022856C: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x8022856C: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_3:
    // 0x80228570: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80228574: lw          $v1, 0x560C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X560C);
    // 0x80228578: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x8022857C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80228580: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x80228584: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x80228588: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8022858C: j           L_8022866C
    // 0x80228590: sh          $v1, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r3;
        goto L_8022866C;
    // 0x80228590: sh          $v1, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r3;
L_80228594:
    // 0x80228594: lhu         $v0, 0x8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8);
    // 0x80228598: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022859C: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
    // 0x802285A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802285A4: bne         $v0, $zero, L_802286B0
    if (ctx->r2 != 0) {
        // 0x802285A8: addiu       $a2, $zero, 0x8
        ctx->r6 = ADD32(0, 0X8);
            goto L_802286B0;
    }
    // 0x802285A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802285AC: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x802285B0: lw          $s0, 0x55F8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X55F8);
    // 0x802285B4: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x802285B8: lw          $s1, 0x560C($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X560C);
    // 0x802285BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802285C0: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x802285C4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802285C8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802285CC: jal         0x8009A3B4
    // 0x802285D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802285D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_4:
    // 0x802285D4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802285D8: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x802285DC: jal         0x8009A3B4
    // 0x802285E0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802285E0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x802285E4: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x802285E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802285EC: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x802285F0: addiu       $v0, $v0, -0x18C
    ctx->r2 = ADD32(ctx->r2, -0X18C);
    // 0x802285F4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802285F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802285FC: jal         0x8004EC38
    // 0x80228600: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_6;
    // 0x80228600: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_6:
    // 0x80228604: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228608: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x8022860C: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80228610: j           L_8022866C
    // 0x80228614: sh          $v1, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r3;
        goto L_8022866C;
    // 0x80228614: sh          $v1, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r3;
L_80228618:
    // 0x80228618: lhu         $v0, 0x8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8);
    // 0x8022861C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228620: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
    // 0x80228624: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228628: bne         $v0, $zero, L_802286B0
    if (ctx->r2 != 0) {
        // 0x8022862C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802286B0;
    }
    // 0x8022862C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228630: jal         0x800616FC
    // 0x80228634: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_7;
    // 0x80228634: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x80228638: j           L_80228668
    // 0x8022863C: nop

        goto L_80228668;
    // 0x8022863C: nop

L_80228640:
    // 0x80228640: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228644: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228648: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022864C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228650: bne         $v0, $zero, L_802286B0
    if (ctx->r2 != 0) {
        // 0x80228654: nop
    
            goto L_802286B0;
    }
    // 0x80228654: nop

    // 0x80228658: jal         0x800600F8
    // 0x8022865C: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_8;
    // 0x8022865C: nop

    after_8:
    // 0x80228660: jal         0x8006036C
    // 0x80228664: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80228664: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_9:
L_80228668:
    // 0x80228668: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
L_8022866C:
    // 0x8022866C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228670: j           L_802286B0
    // 0x80228674: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
        goto L_802286B0;
    // 0x80228674: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
L_80228678:
    // 0x80228678: jal         0x8006033C
    // 0x8022867C: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x8022867C: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_10:
    // 0x80228680: beq         $v0, $zero, L_802286B0
    if (ctx->r2 == 0) {
        // 0x80228684: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802286B0;
    }
    // 0x80228684: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228688: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022868C: lw          $v1, 0x55F8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55F8);
    // 0x80228690: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x80228694: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80228698: lw          $v1, 0x560C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X560C);
    // 0x8022869C: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x802286A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802286A4: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x802286A8: jal         0x8022A398
    // 0x802286AC: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    func_8022A398_ovl10(rdram, ctx);
        goto after_11;
    // 0x802286AC: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    after_11:
L_802286B0:
    // 0x802286B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802286B4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802286B8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802286BC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802286C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802286C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802286C8: jr          $ra
    // 0x802286CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802286CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80239D78_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239D78: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239D7C: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80239D80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80239D84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80239D88: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80239D8C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80239D90: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80239D94: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80239D98: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80239D9C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80239DA0: bne         $v0, $s1, L_80239E84
    if (ctx->r2 != ctx->r17) {
        // 0x80239DA4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80239E84;
    }
    // 0x80239DA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239DA8: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80239DAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239DB0: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80239DB4: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x80239DB8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80239DBC: jal         0x8004F820
    // 0x80239DC0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80239DC0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x80239DC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239DC8: bgez        $v0, L_80239DF4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80239DCC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239DF4;
    }
    // 0x80239DCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239DD0: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80239DD4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80239DD8: jal         0x8004F820
    // 0x80239DDC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80239DDC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80239DE0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239DE4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80239DE8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80239DEC: j           L_80239E0C
    // 0x80239DF0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80239E0C;
    // 0x80239DF0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80239DF4:
    // 0x80239DF4: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80239DF8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80239DFC: jal         0x8004F820
    // 0x80239E00: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80239E00: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80239E04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239E08: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80239E0C:
    // 0x80239E0C: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x80239E10: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80239E14: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x80239E18: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x80239E1C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80239E20: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x80239E24: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80239E28: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x80239E2C: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x80239E30: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80239E34: addiu       $s0, $s0, 0x3500
    ctx->r16 = ADD32(ctx->r16, 0X3500);
    // 0x80239E38: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80239E3C: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x80239E40: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x80239E44: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80239E48: sw          $v0, 0x3504($at)
    MEM_W(0X3504, ctx->r1) = ctx->r2;
    // 0x80239E4C: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x80239E50: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x80239E54: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80239E58: sw          $v0, 0x3508($at)
    MEM_W(0X3508, ctx->r1) = ctx->r2;
    // 0x80239E5C: jal         0x8004EC38
    // 0x80239E60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x80239E60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x80239E64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239E68: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80239E6C: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80239E70: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80239E74: jal         0x80034FCC
    // 0x80239E78: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x80239E78: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x80239E7C: j           L_80239E88
    // 0x80239E80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80239E88;
    // 0x80239E80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80239E84:
    // 0x80239E84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80239E88:
    // 0x80239E88: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80239E8C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80239E90: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80239E94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80239E98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239E9C: jr          $ra
    // 0x80239EA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80239EA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8024B19C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B19C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024B1A0: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8024B1A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024B1A8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8024B1AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024B1B0: bne         $v0, $s0, L_8024B1C8
    if (ctx->r2 != ctx->r16) {
        // 0x8024B1B4: sw          $ra, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r31;
            goto L_8024B1C8;
    }
    // 0x8024B1B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8024B1B8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8024B1BC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024B1C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024B1C4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8024B1C8:
    // 0x8024B1C8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8024B1CC: addiu       $v0, $s0, 0x4C
    ctx->r2 = ADD32(ctx->r16, 0X4C);
    // 0x8024B1D0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8024B1D4: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8024B1D8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8024B1DC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8024B1E0: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8024B1E4: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8024B1E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8024B1EC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8024B1F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8024B1F4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8024B1F8: jal         0x80051E18
    // 0x8024B1FC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x8024B1FC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x8024B200: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8024B204: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8024B208: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8024B20C: jr          $ra
    // 0x8024B210: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8024B210: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80235940_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235940: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80235944: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80235948: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023594C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80235950: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80235954: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80235958: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8023595C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80235960: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x80235964: sw          $v0, 0x37C($s1)
    MEM_W(0X37C, ctx->r17) = ctx->r2;
    // 0x80235968: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8023596C: beq         $v0, $zero, L_80235D30
    if (ctx->r2 == 0) {
        // 0x80235970: addiu       $s0, $s1, 0x328
        ctx->r16 = ADD32(ctx->r17, 0X328);
            goto L_80235D30;
    }
    // 0x80235970: addiu       $s0, $s1, 0x328
    ctx->r16 = ADD32(ctx->r17, 0X328);
    // 0x80235974: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80235978: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023597C: addu        $at, $at, $v0
    gpr jr_addend_80235984 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235980: lw          $v0, 0x2F00($at)
    ctx->r2 = ADD32(ctx->r1, 0X2F00);
    // 0x80235984: jr          $v0
    // 0x80235988: nop

    switch (jr_addend_80235984 >> 2) {
        case 0: goto L_8023598C; break;
        case 1: goto L_802359F0; break;
        case 2: goto L_80235A38; break;
        case 3: goto L_80235B34; break;
        case 4: goto L_80235CCC; break;
        default: switch_error(__func__, 0x80235984, 0x80252F00);
    }
    // 0x80235988: nop

L_8023598C:
    // 0x8023598C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235990: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80235994: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80235998: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x8023599C: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x802359A0: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x802359A4: jal         0x800540B4
    // 0x802359A8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    func_800540B4_2F4B4(rdram, ctx);
        goto after_0;
    // 0x802359A8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802359AC: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x802359B0: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x802359B4: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802359B8: lw          $v1, 0x5644($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5644);
    // 0x802359BC: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x802359C0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802359C4: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x802359C8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802359CC: lw          $v1, 0x5648($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5648);
    // 0x802359D0: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x802359D4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802359D8: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x802359DC: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802359E0: lw          $v1, 0x564C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X564C);
    // 0x802359E4: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x802359E8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802359EC: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_802359F0:
    // 0x802359F0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x802359F4: lw          $a1, 0x54($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X54);
    // 0x802359F8: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802359FC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80235A00: jal         0x8004F820
    // 0x80235A04: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80235A04: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
    // 0x80235A08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235A0C: bgezl       $v0, L_80235A24
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235A10: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80235A24;
    }
    goto skip_0;
    // 0x80235A10: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    skip_0:
    // 0x80235A14: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235A18: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80235A1C: j           L_80235A2C
    // 0x80235A20: addiu       $v0, $s0, 0x40
    ctx->r2 = ADD32(ctx->r16, 0X40);
        goto L_80235A2C;
    // 0x80235A20: addiu       $v0, $s0, 0x40
    ctx->r2 = ADD32(ctx->r16, 0X40);
L_80235A24:
    // 0x80235A24: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80235A28: addiu       $v0, $s0, 0x42
    ctx->r2 = ADD32(ctx->r16, 0X42);
L_80235A2C:
    // 0x80235A2C: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x80235A30: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235A34: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80235A38:
    // 0x80235A38: lh          $a0, 0x3A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X3A);
    // 0x80235A3C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80235A40: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80235A44: lw          $a1, 0x54($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X54);
    // 0x80235A48: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80235A4C: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, 0X180);
    // 0x80235A50: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x80235A54: jal         0x8004F820
    // 0x80235A58: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80235A58: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    after_2:
    // 0x80235A5C: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80235A60: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80235A64: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80235A68: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x80235A6C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80235A70: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x80235A74: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x80235A78: lh          $a0, 0x3A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X3A);
    // 0x80235A7C: lw          $a1, 0x54($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X54);
    // 0x80235A80: lh          $a2, 0x0($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X0);
    // 0x80235A84: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80235A88: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, 0X180);
    // 0x80235A8C: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x80235A90: jal         0x8004F978
    // 0x80235A94: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    func_8004F978_2AD78(rdram, ctx);
        goto after_3;
    // 0x80235A94: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    after_3:
    // 0x80235A98: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x80235A9C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80235AA0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80235AA4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80235AA8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80235AAC: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x80235AB0: lh          $v0, 0x38($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X38);
    // 0x80235AB4: bne         $v0, $zero, L_80235D30
    if (ctx->r2 != 0) {
        // 0x80235AB8: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_80235D30;
    }
    // 0x80235AB8: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80235ABC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80235AC0: bltzl       $v0, L_80235ADC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80235AC4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80235ADC;
    }
    goto skip_1;
    // 0x80235AC4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x80235AC8: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80235ACC: bne         $v0, $zero, L_80235AE8
    if (ctx->r2 != 0) {
        // 0x80235AD0: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_80235AE8;
    }
    // 0x80235AD0: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80235AD4: j           L_80235D30
    // 0x80235AD8: nop

        goto L_80235D30;
    // 0x80235AD8: nop

L_80235ADC:
    // 0x80235ADC: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80235AE0: beq         $v0, $zero, L_80235D30
    if (ctx->r2 == 0) {
        // 0x80235AE4: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_80235D30;
    }
    // 0x80235AE4: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
L_80235AE8:
    // 0x80235AE8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80235AEC: bltzl       $v0, L_80235B08
    if (SIGNED(ctx->r2) < 0) {
        // 0x80235AF0: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80235B08;
    }
    goto skip_2;
    // 0x80235AF0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
    // 0x80235AF4: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80235AF8: beq         $v0, $zero, L_80235D30
    if (ctx->r2 == 0) {
        // 0x80235AFC: nop
    
            goto L_80235D30;
    }
    // 0x80235AFC: nop

    // 0x80235B00: j           L_80235B14
    // 0x80235B04: nop

        goto L_80235B14;
    // 0x80235B04: nop

L_80235B08:
    // 0x80235B08: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80235B0C: beq         $v0, $zero, L_80235D30
    if (ctx->r2 == 0) {
        // 0x80235B10: nop
    
            goto L_80235D30;
    }
    // 0x80235B10: nop

L_80235B14:
    // 0x80235B14: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80235B18: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80235B1C: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x80235B20: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80235B24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235B28: lbu         $v0, 0x1264($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1264);
    // 0x80235B2C: j           L_80235D30
    // 0x80235B30: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80235D30;
    // 0x80235B30: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80235B34:
    // 0x80235B34: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x80235B38: lh          $a0, 0x3A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X3A);
    // 0x80235B3C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80235B40: lw          $a1, 0x54($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X54);
    // 0x80235B44: lh          $a2, 0x0($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X0);
    // 0x80235B48: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80235B4C: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, 0X180);
    // 0x80235B50: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x80235B54: jal         0x8004F978
    // 0x80235B58: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    func_8004F978_2AD78(rdram, ctx);
        goto after_4;
    // 0x80235B58: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    after_4:
    // 0x80235B5C: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x80235B60: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80235B64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235B68: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80235B6C: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x80235B70: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80235B74: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235B78: lw          $v0, 0x565C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X565C);
    // 0x80235B7C: bne         $v0, $v1, L_80235C78
    if (ctx->r2 != ctx->r3) {
        // 0x80235B80: nop
    
            goto L_80235C78;
    }
    // 0x80235B80: nop

    // 0x80235B84: lh          $v0, 0x38($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X38);
    // 0x80235B88: bne         $v0, $zero, L_80235C78
    if (ctx->r2 != 0) {
        // 0x80235B8C: lui         $v0, 0xC7
        ctx->r2 = S32(0XC7 << 16);
            goto L_80235C78;
    }
    // 0x80235B8C: lui         $v0, 0xC7
    ctx->r2 = S32(0XC7 << 16);
    // 0x80235B90: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x80235B94: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80235B98: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80235B9C: bne         $v0, $zero, L_80235C78
    if (ctx->r2 != 0) {
        // 0x80235BA0: nop
    
            goto L_80235C78;
    }
    // 0x80235BA0: nop

    // 0x80235BA4: jal         0x8004EFE4
    // 0x80235BA8: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_5;
    // 0x80235BA8: nop

    after_5:
    // 0x80235BAC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235BB0: beq         $v1, $zero, L_80235C78
    if (ctx->r3 == 0) {
        // 0x80235BB4: sw          $v1, 0x50($s0)
        MEM_W(0X50, ctx->r16) = ctx->r3;
            goto L_80235C78;
    }
    // 0x80235BB4: sw          $v1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r3;
    // 0x80235BB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235BBC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80235BC0: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80235BC4: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x80235BC8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80235BCC: lh          $v1, 0x3A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X3A);
    // 0x80235BD0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235BD4: bne         $v1, $v0, L_80235BE8
    if (ctx->r3 != ctx->r2) {
        // 0x80235BD8: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_80235BE8;
    }
    // 0x80235BD8: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80235BDC: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80235BE0: j           L_80235BEC
    // 0x80235BE4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_80235BEC;
    // 0x80235BE4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_80235BE8:
    // 0x80235BE8: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
L_80235BEC:
    // 0x80235BEC: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80235BF0: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80235BF4: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80235BF8: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x80235BFC: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x80235C00: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80235C04: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80235C08: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x80235C0C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80235C10: sh          $v0, 0x66($v1)
    MEM_H(0X66, ctx->r3) = ctx->r2;
    // 0x80235C14: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
    // 0x80235C18: lh          $a1, 0x3A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X3A);
    // 0x80235C1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80235C20: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80235C24: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80235C28: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x80235C2C: jal         0x8009A3B4
    // 0x80235C30: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80235C30: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_6:
    // 0x80235C34: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80235C38: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x80235C3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235C40: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80235C44: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80235C48: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x80235C4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235C50: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80235C54: lw          $v1, 0x50($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X50);
    // 0x80235C58: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x80235C5C: addiu       $a0, $zero, 0xE3
    ctx->r4 = ADD32(0, 0XE3);
    // 0x80235C60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80235C64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235C68: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80235C6C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80235C70: jal         0x8002A33C
    // 0x80235C74: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80235C74: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    after_7:
L_80235C78:
    // 0x80235C78: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80235C7C: beq         $v0, $zero, L_80235C90
    if (ctx->r2 == 0) {
        // 0x80235C80: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80235C90;
    }
    // 0x80235C80: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235C84: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80235C88: j           L_80235D30
    // 0x80235C8C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80235D30;
    // 0x80235C8C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80235C90:
    // 0x80235C90: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80235C94: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235C98: lw          $v0, 0x565C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X565C);
    // 0x80235C9C: bne         $v0, $v1, L_80235CBC
    if (ctx->r2 != ctx->r3) {
        // 0x80235CA0: nop
    
            goto L_80235CBC;
    }
    // 0x80235CA0: nop

    // 0x80235CA4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80235CA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235CAC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80235CB0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80235CB4: j           L_80235D30
    // 0x80235CB8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80235D30;
    // 0x80235CB8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80235CBC:
    // 0x80235CBC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80235CC0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80235CC4: j           L_80235D24
    // 0x80235CC8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_80235D24;
    // 0x80235CC8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_80235CCC:
    // 0x80235CCC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80235CD0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235CD4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80235CD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235CDC: bgez        $v0, L_80235D30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235CE0: lui         $v0, 0x5555
        ctx->r2 = S32(0X5555 << 16);
            goto L_80235D30;
    }
    // 0x80235CE0: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x80235CE4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80235CE8: lw          $a0, 0x565C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X565C);
    // 0x80235CEC: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x80235CF0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80235CF4: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235CF8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80235CFC: sra         $v1, $a0, 31
    ctx->r3 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80235D00: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80235D04: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80235D08: mfhi        $t0
    ctx->r8 = hi;
    // 0x80235D0C: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x80235D10: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80235D14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235D18: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80235D1C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80235D20: sw          $a0, 0x565C($at)
    MEM_W(0X565C, ctx->r1) = ctx->r4;
L_80235D24:
    // 0x80235D24: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80235D28: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x80235D2C: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_80235D30:
    // 0x80235D30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80235D34: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80235D38: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80235D3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80235D40: jr          $ra
    // 0x80235D44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80235D44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8024B214_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B214: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024B218: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024B21C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024B220: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024B224: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024B228: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8024B22C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8024B230: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8024B234: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8024B238: beq         $v0, $zero, L_8024B324
    if (ctx->r2 == 0) {
        // 0x8024B23C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8024B324;
    }
    // 0x8024B23C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8024B240: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B244: addu        $at, $at, $v0
    gpr jr_addend_8024B24C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024B248: lw          $v0, 0x32E8($at)
    ctx->r2 = ADD32(ctx->r1, 0X32E8);
    // 0x8024B24C: jr          $v0
    // 0x8024B250: nop

    switch (jr_addend_8024B24C >> 2) {
        case 0: goto L_8024B254; break;
        case 1: goto L_8024B27C; break;
        case 2: goto L_8024B290; break;
        case 3: goto L_8024B2C8; break;
        case 4: goto L_8024B2FC; break;
        default: switch_error(__func__, 0x8024B24C, 0x802532E8);
    }
    // 0x8024B250: nop

L_8024B254:
    // 0x8024B254: jal         0x8006FF84
    // 0x8024B258: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8024B258: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8024B25C: beq         $v0, $zero, L_8024B324
    if (ctx->r2 == 0) {
        // 0x8024B260: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024B324;
    }
    // 0x8024B260: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024B264: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8024B268: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8024B26C: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x8024B270: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024B274: j           L_8024B2F0
    // 0x8024B278: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8024B2F0;
    // 0x8024B278: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8024B27C:
    // 0x8024B27C: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8024B280: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x8024B284: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024B288: j           L_8024B2F0
    // 0x8024B28C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8024B2F0;
    // 0x8024B28C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8024B290:
    // 0x8024B290: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8024B294: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x8024B298: bne         $v0, $zero, L_8024B2C0
    if (ctx->r2 != 0) {
        // 0x8024B29C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8024B2C0;
    }
    // 0x8024B29C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8024B2A0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8024B2A4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8024B2A8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024B2AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024B2B0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8024B2B4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8024B2B8: j           L_8024B324
    // 0x8024B2BC: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8024B324;
    // 0x8024B2BC: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8024B2C0:
    // 0x8024B2C0: j           L_8024B324
    // 0x8024B2C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8024B324;
    // 0x8024B2C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8024B2C8:
    // 0x8024B2C8: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x8024B2CC: bgez        $v0, L_8024B324
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8024B2D0: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8024B324;
    }
    // 0x8024B2D0: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8024B2D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8024B2D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8024B2DC: jal         0x800610AC
    // 0x8024B2E0: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8024B2E0: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    after_1:
    // 0x8024B2E4: jal         0x8006036C
    // 0x8024B2E8: addiu       $a0, $zero, 0x546
    ctx->r4 = ADD32(0, 0X546);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8024B2E8: addiu       $a0, $zero, 0x546
    ctx->r4 = ADD32(0, 0X546);
    after_2:
    // 0x8024B2EC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
L_8024B2F0:
    // 0x8024B2F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024B2F4: j           L_8024B324
    // 0x8024B2F8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8024B324;
    // 0x8024B2F8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024B2FC:
    // 0x8024B2FC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024B300: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024B304: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024B308: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024B30C: bne         $v0, $zero, L_8024B324
    if (ctx->r2 != 0) {
        // 0x8024B310: nop
    
            goto L_8024B324;
    }
    // 0x8024B310: nop

    // 0x8024B314: jal         0x80070050
    // 0x8024B318: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_3;
    // 0x8024B318: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8024B31C: jal         0x8004F684
    // 0x8024B320: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_4;
    // 0x8024B320: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8024B324:
    // 0x8024B324: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024B328: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024B32C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024B330: jr          $ra
    // 0x8024B334: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024B334: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802251B4_ovl10(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x802251C4: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802251C8: beq         $v0, $zero, L_802251E4
    if (ctx->r2 == 0) {
        // 0x802251CC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251E4;
    }
    // 0x802251CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251D4: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251D8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802251DC: j           L_802251EC
    // 0x802251E0: addiu       $a1, $a1, -0x1DA8
    ctx->r5 = ADD32(ctx->r5, -0X1DA8);
        goto L_802251EC;
    // 0x802251E0: addiu       $a1, $a1, -0x1DA8
    ctx->r5 = ADD32(ctx->r5, -0X1DA8);
L_802251E4:
    // 0x802251E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251EC:
    // 0x802251EC: jal         0x80037D80
    // 0x802251F0: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251F0: nop

    after_0:
    // 0x802251F4: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x802251F8: lb          $t1, -0x3BC7($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X3BC7);
    // 0x802251FC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80225200: addiu       $a0, $a0, 0xCB4
    ctx->r4 = ADD32(ctx->r4, 0XCB4);
    // 0x80225204: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x80225208: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022520C: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80225210: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225214: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x80225218: lbu         $a1, 0x3($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3);
    // 0x8022521C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225220: sh          $a1, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r5;
    // 0x80225224: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x80225228: lui         $a3, 0x7FE9
    ctx->r7 = S32(0X7FE9 << 16);
    // 0x8022522C: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x80225230: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225234: sb          $a2, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r6;
    // 0x80225238: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x8022523C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225240: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80225244: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80225248: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022524C: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225250: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225254: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225258: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022525C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225260: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225264: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225268: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022526C: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225270: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80225274: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225278: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x8022527C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225280: sb          $t0, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r8;
    // 0x80225284: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225288: sb          $a1, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r5;
    // 0x8022528C: beq         $t1, $zero, L_802252A4
    if (ctx->r9 == 0) {
        // 0x80225290: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802252A4;
    }
    // 0x80225290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225294: beq         $t1, $v0, L_80225368
    if (ctx->r9 == ctx->r2) {
        // 0x80225298: nop
    
            goto L_80225368;
    }
    // 0x80225298: nop

    // 0x8022529C: j           L_80225380
    // 0x802252A0: nop

        goto L_80225380;
    // 0x802252A0: nop

L_802252A4:
    // 0x802252A4: jal         0x8006033C
    // 0x802252A8: addiu       $a0, $zero, 0x208
    ctx->r4 = ADD32(0, 0X208);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802252A8: addiu       $a0, $zero, 0x208
    ctx->r4 = ADD32(0, 0X208);
    after_1:
    // 0x802252AC: beq         $v0, $zero, L_802252D4
    if (ctx->r2 == 0) {
        // 0x802252B0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802252D4;
    }
    // 0x802252B0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802252B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252B8: sb          $v0, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = ctx->r2;
    // 0x802252BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802252C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252C4: sb          $zero, 0x4B21($at)
    MEM_B(0X4B21, ctx->r1) = 0;
    // 0x802252C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252CC: j           L_8022530C
    // 0x802252D0: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
        goto L_8022530C;
    // 0x802252D0: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
L_802252D4:
    // 0x802252D4: jal         0x8006033C
    // 0x802252D8: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802252D8: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_2:
    // 0x802252DC: beq         $v0, $zero, L_80225304
    if (ctx->r2 == 0) {
        // 0x802252E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225304;
    }
    // 0x802252E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802252E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252E8: sb          $v0, 0x4B21($at)
    MEM_B(0X4B21, ctx->r1) = ctx->r2;
    // 0x802252EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802252F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252F4: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
    // 0x802252F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252FC: j           L_8022530C
    // 0x80225300: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
        goto L_8022530C;
    // 0x80225300: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
L_80225304:
    // 0x80225304: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225308: sb          $zero, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = 0;
L_8022530C:
    // 0x8022530C: jal         0x8006033C
    // 0x80225310: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80225310: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    after_3:
    // 0x80225314: beq         $v0, $zero, L_80225380
    if (ctx->r2 == 0) {
        // 0x80225318: nop
    
            goto L_80225380;
    }
    // 0x80225318: nop

    // 0x8022531C: jal         0x8006033C
    // 0x80225320: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225320: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    after_4:
    // 0x80225324: bne         $v0, $zero, L_80225380
    if (ctx->r2 != 0) {
        // 0x80225328: nop
    
            goto L_80225380;
    }
    // 0x80225328: nop

    // 0x8022532C: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80225330: addiu       $s0, $s0, -0x1DA4
    ctx->r16 = ADD32(ctx->r16, -0X1DA4);
    // 0x80225334: jal         0x8003E6BC
    // 0x80225338: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_5;
    // 0x80225338: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022533C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80225340: jal         0x80071ACC
    // 0x80225344: lui         $a1, 0xF
    ctx->r5 = S32(0XF << 16);
    func_80071ACC_4CECC(rdram, ctx);
        goto after_6;
    // 0x80225344: lui         $a1, 0xF
    ctx->r5 = S32(0XF << 16);
    after_6:
    // 0x80225348: jal         0x8003E6BC
    // 0x8022534C: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_7;
    // 0x8022534C: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    after_7:
    // 0x80225350: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80225354: lui         $a1, 0xF
    ctx->r5 = S32(0XF << 16);
    // 0x80225358: jal         0x80071ACC
    // 0x8022535C: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_8;
    // 0x8022535C: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    after_8:
    // 0x80225360: j           L_80225380
    // 0x80225364: nop

        goto L_80225380;
    // 0x80225364: nop

L_80225368:
    // 0x80225368: jal         0x8006033C
    // 0x8022536C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x8022536C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_9:
    // 0x80225370: bne         $v0, $zero, L_80225380
    if (ctx->r2 != 0) {
        // 0x80225374: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225380;
    }
    // 0x80225374: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225378: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022537C: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
L_80225380:
    // 0x80225380: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80225384: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x80225388: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8022538C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80225390: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x80225394: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225398: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022539C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802253A0: lw          $a0, -0x21B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X21B0);
    // 0x802253A4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802253A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802253AC: lw          $v0, -0x1F74($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1F74);
    // 0x802253B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802253B4: jal         0x8004C790
    // 0x802253B8: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_10;
    // 0x802253B8: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_10:
    // 0x802253BC: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802253C0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802253C4: addiu       $a0, $a0, -0x1F24
    ctx->r4 = ADD32(ctx->r4, -0X1F24);
    // 0x802253C8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802253CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802253D0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802253D4: lw          $v1, -0x1DBC($at)
    ctx->r3 = MEM_W(ctx->r1, -0X1DBC);
    // 0x802253D8: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802253DC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802253E0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802253E4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802253E8: addiu       $v0, $v0, -0x1F60
    ctx->r2 = ADD32(ctx->r2, -0X1F60);
    // 0x802253EC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802253F0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802253F4: jal         0x80054FB8
    // 0x802253F8: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_11;
    // 0x802253F8: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_11:
    // 0x802253FC: jal         0x8004A614
    // 0x80225400: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_12;
    // 0x80225400: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_12:
    // 0x80225404: jal         0x8022AD50
    // 0x80225408: nop

    func_8022AD50_ovl10(rdram, ctx);
        goto after_13;
    // 0x80225408: nop

    after_13:
    // 0x8022540C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225410: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225414: jr          $ra
    // 0x80225418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022541C: nop

;}
RECOMP_FUNC void func_8024CF84_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024CF84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024CF88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024CF8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024CF90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024CF94: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8024CF98: blez        $v0, L_8024D014
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8024CF9C: nop
    
            goto L_8024D014;
    }
    // 0x8024CF9C: nop

    // 0x8024CFA0: jal         0x800A3450
    // 0x8024CFA4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8024CFA4: nop

    after_0:
    // 0x8024CFA8: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x8024CFAC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8024CFB0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024CFB4: jal         0x800A3450
    // 0x8024CFB8: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8024CFB8: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x8024CFBC: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x8024CFC0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8024CFC4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024CFC8: jal         0x800A3450
    // 0x8024CFCC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024CFCC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x8024CFD0: lui         $a3, 0xFFFE
    ctx->r7 = S32(0XFFFE << 16);
    // 0x8024CFD4: lbu         $a2, 0xE($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XE);
    // 0x8024CFD8: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x8024CFDC: ori         $a3, $a3, 0xFEFF
    ctx->r7 = ctx->r7 | 0XFEFF;
    // 0x8024CFE0: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x8024CFE4: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x8024CFE8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8024CFEC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8024CFF0: addiu       $v1, $v1, -0xA
    ctx->r3 = ADD32(ctx->r3, -0XA);
    // 0x8024CFF4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024CFF8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8024CFFC: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x8024D000: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x8024D004: sh          $a0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r4;
    // 0x8024D008: sw          $a1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r5;
    // 0x8024D00C: j           L_8024D01C
    // 0x8024D010: sb          $a2, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r6;
        goto L_8024D01C;
    // 0x8024D010: sb          $a2, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r6;
L_8024D014:
    // 0x8024D014: jal         0x8004F5C4
    // 0x8024D018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x8024D018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8024D01C:
    // 0x8024D01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024D020: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024D024: jr          $ra
    // 0x8024D028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024D028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024C794_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024C798: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024C79C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024C7A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024C7A4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8024C7A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024C7AC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024C7B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024C7B4: lw          $v0, 0x2768($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2768);
    // 0x8024C7B8: jalr        $v0
    // 0x8024C7BC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024C7BC: nop

    after_0:
    // 0x8024C7C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8024C7C4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8024C7C8: addiu       $a1, $a1, 0x49DC
    ctx->r5 = ADD32(ctx->r5, 0X49DC);
    // 0x8024C7CC: jal         0x8009A3B4
    // 0x8024C7D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8024C7D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8024C7D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024C7D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024C7DC: jr          $ra
    // 0x8024C7E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024C7E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B6C8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B6C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B6CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B6D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B6D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B6D8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B6DC: bne         $v0, $zero, L_8022B6F4
    if (ctx->r2 != 0) {
        // 0x8022B6E0: nop
    
            goto L_8022B6F4;
    }
    // 0x8022B6E0: nop

    // 0x8022B6E4: jal         0x80229F50
    // 0x8022B6E8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80229F50_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B6E8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_0:
    // 0x8022B6EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B6F0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B6F4:
    // 0x8022B6F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B6F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B6FC: jr          $ra
    // 0x8022B700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236870_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236870: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80236874: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80236878: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023687C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80236880: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80236884: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80236888: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8023688C: bnel        $v0, $zero, L_802368A8
    if (ctx->r2 != 0) {
        // 0x80236890: addiu       $a0, $s1, 0x2C
        ctx->r4 = ADD32(ctx->r17, 0X2C);
            goto L_802368A8;
    }
    goto skip_0;
    // 0x80236890: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    skip_0:
    // 0x80236894: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80236898: lw          $v0, 0x1270($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1270);
    // 0x8023689C: jalr        $v0
    // 0x802368A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802368A0: nop

    after_0:
    // 0x802368A4: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
L_802368A8:
    // 0x802368A8: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x802368AC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802368B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802368B4: jal         0x8009A3B4
    // 0x802368B8: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802368B8: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_1:
    // 0x802368BC: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x802368C0: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x802368C4: jal         0x8009A3B4
    // 0x802368C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802368C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x802368CC: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x802368D0: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x802368D4: jal         0x8009A3B4
    // 0x802368D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802368D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802368DC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802368E0: jal         0x800A3450
    // 0x802368E4: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x802368E4: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_4:
    // 0x802368E8: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x802368EC: sh          $v0, 0x30A($s1)
    MEM_H(0X30A, ctx->r17) = ctx->r2;
    // 0x802368F0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802368F4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802368F8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802368FC: lw          $v0, 0x1270($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1270);
    // 0x80236900: jalr        $v0
    // 0x80236904: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80236904: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80236908: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8023690C: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80236910: beq         $v0, $a1, L_8023692C
    if (ctx->r2 == ctx->r5) {
        // 0x80236914: addiu       $s2, $s1, 0x308
        ctx->r18 = ADD32(ctx->r17, 0X308);
            goto L_8023692C;
    }
    // 0x80236914: addiu       $s2, $s1, 0x308
    ctx->r18 = ADD32(ctx->r17, 0X308);
    // 0x80236918: lb          $a2, 0x350($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X350);
    // 0x8023691C: jal         0x800502EC
    // 0x80236920: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_6;
    // 0x80236920: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80236924: j           L_80236934
    // 0x80236928: nop

        goto L_80236934;
    // 0x80236928: nop

L_8023692C:
    // 0x8023692C: jal         0x800504EC
    // 0x80236930: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_7;
    // 0x80236930: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
L_80236934:
    // 0x80236934: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80236938: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x8023693C: beq         $v0, $zero, L_80236958
    if (ctx->r2 == 0) {
        // 0x80236940: sb          $zero, 0x48($s2)
        MEM_B(0X48, ctx->r18) = 0;
            goto L_80236958;
    }
    // 0x80236940: sb          $zero, 0x48($s2)
    MEM_B(0X48, ctx->r18) = 0;
    // 0x80236944: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80236948: lhu         $v1, 0x4E($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X4E);
    // 0x8023694C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80236950: j           L_80236968
    // 0x80236954: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
        goto L_80236968;
    // 0x80236954: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
L_80236958:
    // 0x80236958: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x8023695C: lhu         $v1, 0x4E($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X4E);
    // 0x80236960: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236964: sra         $v0, $v0, 18
    ctx->r2 = S32(SIGNED(ctx->r2) >> 18);
L_80236968:
    // 0x80236968: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023696C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80236970: sh          $v1, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = ctx->r3;
    // 0x80236974: lhu         $v0, 0x4E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4E);
    // 0x80236978: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023697C: sh          $v0, -0x3D80($at)
    MEM_H(-0X3D80, ctx->r1) = ctx->r2;
    // 0x80236980: lhu         $v0, 0x4E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4E);
    // 0x80236984: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236988: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023698C: sh          $v0, -0x3D70($at)
    MEM_H(-0X3D70, ctx->r1) = ctx->r2;
    // 0x80236990: jal         0x80051248
    // 0x80236994: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_8;
    // 0x80236994: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x80236998: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023699C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802369A0: beq         $v0, $zero, L_802369B8
    if (ctx->r2 == 0) {
        // 0x802369A4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802369B8;
    }
    // 0x802369A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802369A8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802369AC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802369B0: jal         0x8003B564
    // 0x802369B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x802369B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
L_802369B8:
    // 0x802369B8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802369BC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802369C0: beql        $v0, $zero, L_80236A38
    if (ctx->r2 == 0) {
        // 0x802369C4: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_80236A38;
    }
    goto skip_1;
    // 0x802369C4: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_1:
    // 0x802369C8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802369CC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802369D0: beq         $v0, $zero, L_80236A34
    if (ctx->r2 == 0) {
        // 0x802369D4: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_80236A34;
    }
    // 0x802369D4: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x802369D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802369DC: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x802369E0: jal         0x8009A3B4
    // 0x802369E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x802369E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x802369E8: lhu         $v0, 0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XE);
    // 0x802369EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802369F0: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x802369F4: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x802369F8: sh          $v0, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r2;
    // 0x802369FC: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80236A00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236A04: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x80236A08: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80236A0C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80236A10: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x80236A14: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80236A18: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80236A1C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80236A20: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x80236A24: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80236A28: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80236A2C: jal         0x80051E18
    // 0x80236A30: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_11;
    // 0x80236A30: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_11:
L_80236A34:
    // 0x80236A34: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_80236A38:
    // 0x80236A38: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80236A3C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80236A40: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80236A44: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80236A48: jr          $ra
    // 0x80236A4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80236A4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023125C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023125C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80231260: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231264: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231268: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023126C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80231270: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80231274: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231278: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x8023127C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80231280: addiu       $v0, $v0, 0xFF8
    ctx->r2 = ADD32(ctx->r2, 0XFF8);
    // 0x80231284: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x80231288: jal         0x800A3450
    // 0x8023128C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8023128C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80231290: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80231294: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80231298: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x8023129C: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x802312A0: addiu       $s0, $s0, 0x1038
    ctx->r16 = ADD32(ctx->r16, 0X1038);
    // 0x802312A4: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x802312A8: beq         $v1, $zero, L_802312C4
    if (ctx->r3 == 0) {
        // 0x802312AC: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_802312C4;
    }
    // 0x802312AC: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x802312B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802312B4: beq         $v1, $v0, L_802312E4
    if (ctx->r3 == ctx->r2) {
        // 0x802312B8: nop
    
            goto L_802312E4;
    }
    // 0x802312B8: nop

    // 0x802312BC: j           L_802312F8
    // 0x802312C0: nop

        goto L_802312F8;
    // 0x802312C0: nop

L_802312C4:
    // 0x802312C4: jal         0x802332A8
    // 0x802312C8: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_802332A8_ovl10(rdram, ctx);
        goto after_1;
    // 0x802312C8: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x802312CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802312D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802312D4: jal         0x802332E8
    // 0x802312D8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_802332E8_ovl10(rdram, ctx);
        goto after_2;
    // 0x802312D8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x802312DC: j           L_80231350
    // 0x802312E0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_80231350;
    // 0x802312E0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_802312E4:
    // 0x802312E4: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x802312E8: jal         0x80233298
    // 0x802312EC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_80233298_ovl10(rdram, ctx);
        goto after_3;
    // 0x802312EC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x802312F0: j           L_80231350
    // 0x802312F4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_80231350;
    // 0x802312F4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_802312F8:
    // 0x802312F8: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x802312FC: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x80231300: bne         $v1, $v0, L_80231310
    if (ctx->r3 != ctx->r2) {
        // 0x80231304: nop
    
            goto L_80231310;
    }
    // 0x80231304: nop

    // 0x80231308: j           L_80231350
    // 0x8023130C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_80231350;
    // 0x8023130C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_80231310:
    // 0x80231310: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80231314: jal         0x802332A8
    // 0x80231318: nop

    func_802332A8_ovl10(rdram, ctx);
        goto after_4;
    // 0x80231318: nop

    after_4:
    // 0x8023131C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80231320: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80231324: beq         $v0, $zero, L_80231338
    if (ctx->r2 == 0) {
        // 0x80231328: nop
    
            goto L_80231338;
    }
    // 0x80231328: nop

    // 0x8023132C: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80231330: j           L_80231348
    // 0x80231334: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_80231348;
    // 0x80231334: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80231338:
    // 0x80231338: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8023133C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80231340: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231344: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80231348:
    // 0x80231348: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x8023134C: addiu       $s0, $s0, 0x1058
    ctx->r16 = ADD32(ctx->r16, 0X1058);
L_80231350:
    // 0x80231350: jal         0x800A3450
    // 0x80231354: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80231354: nop

    after_5:
    // 0x80231358: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8023135C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80231360: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80231364: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80231368: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8023136C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80231370: beq         $v1, $v0, L_80231388
    if (ctx->r3 == ctx->r2) {
        // 0x80231374: nop
    
            goto L_80231388;
    }
    // 0x80231374: nop

    // 0x80231378: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023137C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231380: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80231384: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80231388:
    // 0x80231388: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023138C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80231390: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80231394: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231398: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023139C: jr          $ra
    // 0x802313A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802313A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80244580_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244580: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80244584: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80244588: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024458C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80244590: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80244594: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x80244598: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8024459C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802445A0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802445A4: jal         0x8009A3B4
    // 0x802445A8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802445A8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x802445AC: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x802445B0: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x802445B4: jal         0x8009A3B4
    // 0x802445B8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802445B8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802445BC: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x802445C0: addiu       $s0, $s1, 0x54
    ctx->r16 = ADD32(ctx->r17, 0X54);
    // 0x802445C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802445C8: jal         0x8009A3B4
    // 0x802445CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802445CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802445D0: jal         0x800A3450
    // 0x802445D4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802445D4: nop

    after_3:
    // 0x802445D8: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x802445DC: sh          $v0, 0xC2($s1)
    MEM_H(0XC2, ctx->r17) = ctx->r2;
    // 0x802445E0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802445E4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802445E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802445EC: lw          $v0, 0x2080($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2080);
    // 0x802445F0: jalr        $v0
    // 0x802445F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x802445F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x802445F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802445FC: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x80244600: jal         0x80031600
    // 0x80244604: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x80244604: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80244608: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024460C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80244610: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80244614: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80244618: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8024461C: jal         0x80031DA8
    // 0x80244620: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x80244620: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_6:
    // 0x80244624: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80244628: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8024462C: beq         $v0, $zero, L_80244664
    if (ctx->r2 == 0) {
        // 0x80244630: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80244664;
    }
    // 0x80244630: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80244634: lhu         $v0, 0x58($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X58);
    // 0x80244638: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8024463C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80244640: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80244644: sra         $v1, $v0, 22
    ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80244648: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8024464C: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x80244650: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
    // 0x80244654: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80244658: addiu       $v0, $zero, 0x2C0
    ctx->r2 = ADD32(0, 0X2C0);
    // 0x8024465C: jal         0x8003B564
    // 0x80244660: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x80244660: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    after_7:
L_80244664:
    // 0x80244664: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80244668: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024466C: beq         $v0, $zero, L_802446E0
    if (ctx->r2 == 0) {
        // 0x80244670: nop
    
            goto L_802446E0;
    }
    // 0x80244670: nop

    // 0x80244674: lhu         $v0, 0xC0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC0);
    // 0x80244678: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8024467C: beq         $v0, $zero, L_802446E0
    if (ctx->r2 == 0) {
        // 0x80244680: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_802446E0;
    }
    // 0x80244680: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80244684: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80244688: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8024468C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80244690: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80244694: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80244698: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8024469C: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x802446A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802446A4: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x802446A8: addiu       $v0, $s1, 0xC8
    ctx->r2 = ADD32(ctx->r17, 0XC8);
    // 0x802446AC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802446B0: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x802446B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802446B8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802446BC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802446C0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802446C4: jal         0x80051E18
    // 0x802446C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_8;
    // 0x802446C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_8:
    // 0x802446CC: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x802446D0: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x802446D4: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x802446D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802446DC: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
L_802446E0:
    // 0x802446E0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802446E4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x802446E8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x802446EC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802446F0: jr          $ra
    // 0x802446F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x802446F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80229B98_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229B98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229B9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229BA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229BA4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229BA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229BAC: lb          $v1, 0x2($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2);
    // 0x80229BB0: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80229BB4: lw          $s1, 0x55FC($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X55FC);
    // 0x80229BB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229BBC: beq         $v1, $v0, L_80229C14
    if (ctx->r3 == ctx->r2) {
        // 0x80229BC0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80229C14;
    }
    // 0x80229BC0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229BC4: beql        $v0, $zero, L_80229BDC
    if (ctx->r2 == 0) {
        // 0x80229BC8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229BDC;
    }
    goto skip_0;
    // 0x80229BC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80229BCC: beq         $v1, $zero, L_80229BF4
    if (ctx->r3 == 0) {
        // 0x80229BD0: nop
    
            goto L_80229BF4;
    }
    // 0x80229BD0: nop

    // 0x80229BD4: j           L_80229C90
    // 0x80229BD8: nop

        goto L_80229C90;
    // 0x80229BD8: nop

L_80229BDC:
    // 0x80229BDC: beq         $v1, $v0, L_80229C34
    if (ctx->r3 == ctx->r2) {
        // 0x80229BE0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229C34;
    }
    // 0x80229BE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229BE4: beq         $v1, $v0, L_80229C68
    if (ctx->r3 == ctx->r2) {
        // 0x80229BE8: nop
    
            goto L_80229C68;
    }
    // 0x80229BE8: nop

    // 0x80229BEC: j           L_80229C90
    // 0x80229BF0: nop

        goto L_80229C90;
    // 0x80229BF0: nop

L_80229BF4:
    // 0x80229BF4: jal         0x8006033C
    // 0x80229BF8: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80229BF8: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_0:
    // 0x80229BFC: beq         $v0, $zero, L_80229C90
    if (ctx->r2 == 0) {
        // 0x80229C00: nop
    
            goto L_80229C90;
    }
    // 0x80229C00: nop

    // 0x80229C04: jal         0x80060590
    // 0x80229C08: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x80229C08: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_1:
    // 0x80229C0C: j           L_80229C50
    // 0x80229C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80229C50;
    // 0x80229C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229C14:
    // 0x80229C14: jal         0x8006033C
    // 0x80229C18: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80229C18: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_2:
    // 0x80229C1C: beq         $v0, $zero, L_80229C90
    if (ctx->r2 == 0) {
        // 0x80229C20: nop
    
            goto L_80229C90;
    }
    // 0x80229C20: nop

    // 0x80229C24: jal         0x80060590
    // 0x80229C28: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80229C28: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_3:
    // 0x80229C2C: j           L_80229C50
    // 0x80229C30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80229C50;
    // 0x80229C30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229C34:
    // 0x80229C34: jal         0x8006033C
    // 0x80229C38: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80229C38: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_4:
    // 0x80229C3C: beq         $v0, $zero, L_80229C90
    if (ctx->r2 == 0) {
        // 0x80229C40: nop
    
            goto L_80229C90;
    }
    // 0x80229C40: nop

    // 0x80229C44: jal         0x80060590
    // 0x80229C48: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x80229C48: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_5:
    // 0x80229C4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80229C50:
    // 0x80229C50: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80229C54: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80229C58: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229C5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229C60: j           L_80229C90
    // 0x80229C64: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
        goto L_80229C90;
    // 0x80229C64: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_80229C68:
    // 0x80229C68: jal         0x8006033C
    // 0x80229C6C: addiu       $a0, $zero, 0x61A
    ctx->r4 = ADD32(0, 0X61A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80229C6C: addiu       $a0, $zero, 0x61A
    ctx->r4 = ADD32(0, 0X61A);
    after_6:
    // 0x80229C70: beq         $v0, $zero, L_80229C90
    if (ctx->r2 == 0) {
        // 0x80229C74: nop
    
            goto L_80229C90;
    }
    // 0x80229C74: nop

    // 0x80229C78: jal         0x8022A170
    // 0x80229C7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8022A170_ovl10(rdram, ctx);
        goto after_7;
    // 0x80229C7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x80229C80: jal         0x8022A398
    // 0x80229C84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8022A398_ovl10(rdram, ctx);
        goto after_8;
    // 0x80229C84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x80229C88: jal         0x8006036C
    // 0x80229C8C: addiu       $a0, $zero, 0x61D
    ctx->r4 = ADD32(0, 0X61D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80229C8C: addiu       $a0, $zero, 0x61D
    ctx->r4 = ADD32(0, 0X61D);
    after_9:
L_80229C90:
    // 0x80229C90: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229C94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229C98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229C9C: jr          $ra
    // 0x80229CA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229CA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023CF14_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CF14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023CF18: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023CF1C: jal         0x8004F418
    // 0x8023CF20: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8023CF20: nop

    after_0:
    // 0x8023CF24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023CF28: jr          $ra
    // 0x8023CF2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023CF2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239928_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239928: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x8023992C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239930: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x80239934: beq         $v1, $v0, L_8023996C
    if (ctx->r3 == ctx->r2) {
        // 0x80239938: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023996C;
    }
    // 0x80239938: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023993C: beql        $v0, $zero, L_80239954
    if (ctx->r2 == 0) {
        // 0x80239940: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80239954;
    }
    goto skip_0;
    // 0x80239940: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80239944: beq         $v1, $zero, L_80239964
    if (ctx->r3 == 0) {
        // 0x80239948: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_80239964;
    }
    // 0x80239948: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8023994C: j           L_802399AC
    // 0x80239950: nop

        goto L_802399AC;
    // 0x80239950: nop

L_80239954:
    // 0x80239954: beq         $v1, $v0, L_80239998
    if (ctx->r3 == ctx->r2) {
        // 0x80239958: nop
    
            goto L_80239998;
    }
    // 0x80239958: nop

    // 0x8023995C: j           L_802399AC
    // 0x80239960: nop

        goto L_802399AC;
    // 0x80239960: nop

L_80239964:
    // 0x80239964: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80239968: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_8023996C:
    // 0x8023996C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239970: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80239974: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x80239978: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023997C: beq         $v0, $zero, L_802399AC
    if (ctx->r2 == 0) {
        // 0x80239980: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_802399AC;
    }
    // 0x80239980: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80239984: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80239988: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8023998C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239990: j           L_802399AC
    // 0x80239994: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_802399AC;
    // 0x80239994: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80239998:
    // 0x80239998: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8023999C: bgez        $v0, L_802399AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802399A0: addiu       $v0, $a1, -0x1
        ctx->r2 = ADD32(ctx->r5, -0X1);
            goto L_802399AC;
    }
    // 0x802399A0: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x802399A4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802399A8: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_802399AC:
    // 0x802399AC: jr          $ra
    // 0x802399B0: nop

    TRACE_RETURN()
    return;
    // 0x802399B0: nop

;}
RECOMP_FUNC void func_8022F9AC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F9AC: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x8022F9B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F9B4: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x8022F9B8: beq         $v1, $v0, L_8022F9E8
    if (ctx->r3 == ctx->r2) {
        // 0x8022F9BC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022F9E8;
    }
    // 0x8022F9BC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022F9C0: beq         $v0, $zero, L_8022FA08
    if (ctx->r2 == 0) {
        // 0x8022F9C4: nop
    
            goto L_8022FA08;
    }
    // 0x8022F9C4: nop

    // 0x8022F9C8: bne         $v1, $zero, L_8022FA08
    if (ctx->r3 != 0) {
        // 0x8022F9CC: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8022FA08;
    }
    // 0x8022F9CC: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8022F9D0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022F9D4: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022F9D8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022F9DC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022F9E0: j           L_8022FA08
    // 0x8022F9E4: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
        goto L_8022FA08;
    // 0x8022F9E4: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
L_8022F9E8:
    // 0x8022F9E8: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022F9EC: bgez        $v0, L_8022FA08
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F9F0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022FA08;
    }
    // 0x8022F9F0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022F9F4: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022F9F8: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x8022F9FC: sb          $v0, 0x110($a0)
    MEM_B(0X110, ctx->r4) = ctx->r2;
    // 0x8022FA00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022FA04: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
L_8022FA08:
    // 0x8022FA08: jr          $ra
    // 0x8022FA0C: nop

    TRACE_RETURN()
    return;
    // 0x8022FA0C: nop

;}
RECOMP_FUNC void func_80229AB4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229AB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229AB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229ABC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229AC0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229AC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229AC8: lb          $v1, 0x2($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2);
    // 0x80229ACC: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80229AD0: lw          $s0, 0x55F8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X55F8);
    // 0x80229AD4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80229AD8: beq         $v0, $zero, L_80229B84
    if (ctx->r2 == 0) {
        // 0x80229ADC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80229B84;
    }
    // 0x80229ADC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229AE0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229AE4: addu        $at, $at, $v0
    gpr jr_addend_80229AEC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229AE8: lw          $v0, 0x2CE0($at)
    ctx->r2 = ADD32(ctx->r1, 0X2CE0);
    // 0x80229AEC: jr          $v0
    // 0x80229AF0: nop

    switch (jr_addend_80229AEC >> 2) {
        case 0: goto L_80229AF4; break;
        case 1: goto L_80229B14; break;
        case 2: goto L_80229B34; break;
        case 3: goto L_80229B54; break;
        case 4: goto L_80229B84; break;
        default: switch_error(__func__, 0x80229AEC, 0x80252CE0);
    }
    // 0x80229AF0: nop

L_80229AF4:
    // 0x80229AF4: jal         0x8006033C
    // 0x80229AF8: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80229AF8: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_0:
    // 0x80229AFC: beq         $v0, $zero, L_80229B84
    if (ctx->r2 == 0) {
        // 0x80229B00: nop
    
            goto L_80229B84;
    }
    // 0x80229B00: nop

    // 0x80229B04: jal         0x80060590
    // 0x80229B08: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x80229B08: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_1:
    // 0x80229B0C: j           L_80229B70
    // 0x80229B10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80229B70;
    // 0x80229B10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229B14:
    // 0x80229B14: jal         0x8006033C
    // 0x80229B18: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80229B18: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_2:
    // 0x80229B1C: beq         $v0, $zero, L_80229B84
    if (ctx->r2 == 0) {
        // 0x80229B20: nop
    
            goto L_80229B84;
    }
    // 0x80229B20: nop

    // 0x80229B24: jal         0x80060590
    // 0x80229B28: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80229B28: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_3:
    // 0x80229B2C: j           L_80229B74
    // 0x80229B30: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80229B74;
    // 0x80229B30: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80229B34:
    // 0x80229B34: jal         0x8006033C
    // 0x80229B38: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80229B38: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_4:
    // 0x80229B3C: beq         $v0, $zero, L_80229B84
    if (ctx->r2 == 0) {
        // 0x80229B40: nop
    
            goto L_80229B84;
    }
    // 0x80229B40: nop

    // 0x80229B44: jal         0x80060590
    // 0x80229B48: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x80229B48: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_5:
    // 0x80229B4C: j           L_80229B70
    // 0x80229B50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80229B70;
    // 0x80229B50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80229B54:
    // 0x80229B54: jal         0x8006033C
    // 0x80229B58: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80229B58: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_6:
    // 0x80229B5C: beq         $v0, $zero, L_80229B84
    if (ctx->r2 == 0) {
        // 0x80229B60: nop
    
            goto L_80229B84;
    }
    // 0x80229B60: nop

    // 0x80229B64: jal         0x80060590
    // 0x80229B68: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_80060590_3B990(rdram, ctx);
        goto after_7;
    // 0x80229B68: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_7:
    // 0x80229B6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80229B70:
    // 0x80229B70: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229B74:
    // 0x80229B74: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80229B78: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80229B7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229B80: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
L_80229B84:
    // 0x80229B84: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229B88: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229B8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229B90: jr          $ra
    // 0x80229B94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229B94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023CFB4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CFB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023CFB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023CFBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023CFC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023CFC4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023CFC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023CFCC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023CFD0: jal         0x8004D5D4
    // 0x8023CFD4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023CFD4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023CFD8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8023CFDC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8023CFE0: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8023CFE4: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x8023CFE8: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8023CFEC: lhu         $a2, 0x54($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X54);
    // 0x8023CFF0: lhu         $a3, 0x56($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X56);
    // 0x8023CFF4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023CFF8: lhu         $t0, 0x58($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X58);
    // 0x8023CFFC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D000: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023D004: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x8023D008: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023D00C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8023D010: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x8023D014: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023D018: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8023D01C: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x8023D020: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8023D024: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8023D028: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023D02C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8023D030: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8023D034: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023D038: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8023D03C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8023D040: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023D044: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023D048: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023D04C: sh          $a1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r5;
    // 0x8023D050: sh          $a2, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r6;
    // 0x8023D054: sh          $a3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r7;
    // 0x8023D058: sh          $t0, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r8;
    // 0x8023D05C: sh          $v1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r3;
    // 0x8023D060: sh          $a0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r4;
    // 0x8023D064: sw          $t1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r9;
    // 0x8023D068: sw          $t2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r10;
    // 0x8023D06C: sw          $t3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r11;
    // 0x8023D070: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023D074: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x8023D078: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023D07C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D080: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8023D084: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8023D088: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8023D08C: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8023D090: jal         0x80050294
    // 0x8023D094: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8023D094: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    after_1:
    // 0x8023D098: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023D09C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8023D0A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D0A4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023D0A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023D0AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023D0B0: jr          $ra
    // 0x8023D0B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023D0B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802271DC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802271DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802271E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802271E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802271E8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802271EC: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802271F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802271F4: jal         0x8006072C
    // 0x802271F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8006072C_3BB2C(rdram, ctx);
        goto after_0;
    // 0x802271F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802271FC: beq         $v0, $zero, L_80227208
    if (ctx->r2 == 0) {
        // 0x80227200: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227208;
    }
    // 0x80227200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227204: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80227208:
    // 0x80227208: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8022720C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80227210: beq         $v0, $zero, L_80227404
    if (ctx->r2 == 0) {
        // 0x80227214: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80227404;
    }
    // 0x80227214: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227218: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022721C: addu        $at, $at, $v0
    gpr jr_addend_80227224 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227220: lw          $v0, 0x2B08($at)
    ctx->r2 = ADD32(ctx->r1, 0X2B08);
    // 0x80227224: jr          $v0
    // 0x80227228: nop

    switch (jr_addend_80227224 >> 2) {
        case 0: goto L_8022722C; break;
        case 1: goto L_80227244; break;
        case 2: goto L_8022726C; break;
        case 3: goto L_80227294; break;
        case 4: goto L_802273A4; break;
        default: switch_error(__func__, 0x80227224, 0x80252B08);
    }
    // 0x80227228: nop

L_8022722C:
    // 0x8022722C: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80227230: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227234: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80227238: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022723C: j           L_8022739C
    // 0x80227240: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022739C;
    // 0x80227240: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80227244:
    // 0x80227244: jal         0x8004A1AC
    // 0x80227248: nop

    func_8004A1AC_255AC(rdram, ctx);
        goto after_1;
    // 0x80227248: nop

    after_1:
    // 0x8022724C: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80227250: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80227254: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80227258: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022725C: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80227260: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80227264: j           L_80227398
    // 0x80227268: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_80227398;
    // 0x80227268: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8022726C:
    // 0x8022726C: jal         0x802275D8
    // 0x80227270: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802275D8_ovl10(rdram, ctx);
        goto after_2;
    // 0x80227270: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227274: jal         0x80227828
    // 0x80227278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227828_ovl10(rdram, ctx);
        goto after_3;
    // 0x80227278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022727C: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80227280: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227284: beq         $v1, $v0, L_802273EC
    if (ctx->r3 == ctx->r2) {
        // 0x80227288: nop
    
            goto L_802273EC;
    }
    // 0x80227288: nop

    // 0x8022728C: j           L_802273FC
    // 0x80227290: nop

        goto L_802273FC;
    // 0x80227290: nop

L_80227294:
    // 0x80227294: jal         0x80036B7C
    // 0x80227298: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_4;
    // 0x80227298: nop

    after_4:
    // 0x8022729C: beq         $v0, $zero, L_802273FC
    if (ctx->r2 == 0) {
        // 0x802272A0: nop
    
            goto L_802273FC;
    }
    // 0x802272A0: nop

    // 0x802272A4: jal         0x80060170
    // 0x802272A8: nop

    func_80060170_3B570(rdram, ctx);
        goto after_5;
    // 0x802272A8: nop

    after_5:
    // 0x802272AC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802272B0: addiu       $v0, $v0, -0x1094
    ctx->r2 = ADD32(ctx->r2, -0X1094);
    // 0x802272B4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802272B8: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802272BC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802272C0: addiu       $v0, $v0, -0xE30
    ctx->r2 = ADD32(ctx->r2, -0XE30);
    // 0x802272C4: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x802272C8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802272CC: lbu         $a0, 0xBD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XBD);
    // 0x802272D0: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x802272D4: sh          $v0, 0x438($s1)
    MEM_H(0X438, ctx->r17) = ctx->r2;
    // 0x802272D8: lh          $a1, 0x438($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X438);
    // 0x802272DC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x802272E0: sh          $t0, 0x43A($s1)
    MEM_H(0X43A, ctx->r17) = ctx->r8;
    // 0x802272E4: lh          $a2, 0x43A($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X43A);
    // 0x802272E8: addiu       $v0, $zero, 0x1900
    ctx->r2 = ADD32(0, 0X1900);
    // 0x802272EC: sh          $v0, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = ctx->r2;
    // 0x802272F0: lh          $a3, 0x43C($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X43C);
    // 0x802272F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802272F8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802272FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227300: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80227304: addiu       $v0, $zero, 0x940
    ctx->r2 = ADD32(0, 0X940);
    // 0x80227308: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    // 0x8022730C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80227310: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x80227314: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x80227318: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x8022731C: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80227320: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x80227324: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80227328: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022732C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80227330: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80227334: sb          $a0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r4;
    // 0x80227338: sw          $a1, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r5;
    // 0x8022733C: sw          $a2, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r6;
    // 0x80227340: sw          $a3, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r7;
    // 0x80227344: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80227348: addiu       $v1, $zero, -0x1C0
    ctx->r3 = ADD32(0, -0X1C0);
    // 0x8022734C: sh          $v1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r3;
    // 0x80227350: lh          $a0, 0x14($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X14);
    // 0x80227354: sh          $t0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r8;
    // 0x80227358: lh          $a1, 0x16($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X16);
    // 0x8022735C: addiu       $v1, $zero, 0x1978
    ctx->r3 = ADD32(0, 0X1978);
    // 0x80227360: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x80227364: lh          $a2, 0x18($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X18);
    // 0x80227368: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
    // 0x8022736C: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x80227370: sh          $v1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r3;
    // 0x80227374: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227378: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022737C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80227380: sw          $a0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r4;
    // 0x80227384: sw          $a1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r5;
    // 0x80227388: sw          $a2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r6;
    // 0x8022738C: sh          $zero, 0x58($v0)
    MEM_H(0X58, ctx->r2) = 0;
    // 0x80227390: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227394: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
L_80227398:
    // 0x80227398: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022739C:
    // 0x8022739C: j           L_802273FC
    // 0x802273A0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_802273FC;
    // 0x802273A0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_802273A4:
    // 0x802273A4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802273A8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802273AC: beq         $v1, $v0, L_802273EC
    if (ctx->r3 == ctx->r2) {
        // 0x802273B0: nop
    
            goto L_802273EC;
    }
    // 0x802273B0: nop

    // 0x802273B4: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802273B8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802273BC: jalr        $v0
    // 0x802273C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x802273C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x802273C4: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x802273C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802273CC: bne         $v1, $v0, L_802273FC
    if (ctx->r3 != ctx->r2) {
        // 0x802273D0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802273FC;
    }
    // 0x802273D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802273D4: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802273D8: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x802273DC: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x802273E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802273E4: j           L_802273FC
    // 0x802273E8: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
        goto L_802273FC;
    // 0x802273E8: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
L_802273EC:
    // 0x802273EC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802273F0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x802273F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802273F8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802273FC:
    // 0x802273FC: jal         0x8005FB90
    // 0x80227400: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_7;
    // 0x80227400: nop

    after_7:
L_80227404:
    // 0x80227404: jal         0x80060018
    // 0x80227408: nop

    func_80060018_3B418(rdram, ctx);
        goto after_8;
    // 0x80227408: nop

    after_8:
    // 0x8022740C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227410: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227414: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227418: jr          $ra
    // 0x8022741C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022741C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023319C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023319C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802331A0: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x802331A4: bne         $a1, $a0, L_802331F8
    if (ctx->r5 != ctx->r4) {
        // 0x802331A8: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_802331F8;
    }
    // 0x802331A8: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x802331AC: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x802331B0: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x802331B4: bne         $v1, $v0, L_802331C4
    if (ctx->r3 != ctx->r2) {
        // 0x802331B8: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_802331C4;
    }
    // 0x802331B8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802331BC: j           L_802331E0
    // 0x802331C0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_802331E0;
    // 0x802331C0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802331C4:
    // 0x802331C4: bne         $v1, $v0, L_802331D4
    if (ctx->r3 != ctx->r2) {
        // 0x802331C8: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_802331D4;
    }
    // 0x802331C8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802331CC: j           L_802331E0
    // 0x802331D0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_802331E0;
    // 0x802331D0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_802331D4:
    // 0x802331D4: bne         $v1, $v0, L_802331E0
    if (ctx->r3 != ctx->r2) {
        // 0x802331D8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802331E0;
    }
    // 0x802331D8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802331DC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802331E0:
    // 0x802331E0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802331E4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x802331E8: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x802331EC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x802331F0: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x802331F4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_802331F8:
    // 0x802331F8: jr          $ra
    // 0x802331FC: nop

    TRACE_RETURN()
    return;
    // 0x802331FC: nop

;}
RECOMP_FUNC void func_8022B4B4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B4B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B4B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B4BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B4C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B4C4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B4C8: bne         $v0, $zero, L_8022B4E0
    if (ctx->r2 != 0) {
        // 0x8022B4CC: nop
    
            goto L_8022B4E0;
    }
    // 0x8022B4CC: nop

    // 0x8022B4D0: jal         0x80229F50
    // 0x8022B4D4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_80229F50_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B4D4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x8022B4D8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B4DC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B4E0:
    // 0x8022B4E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B4E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B4E8: jr          $ra
    // 0x8022B4EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B4EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234B30_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234B34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234B38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234B3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234B40: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80234B44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80234B48: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80234B4C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80234B50: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80234B54: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80234B58: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80234B5C: jal         0x8004D5D4
    // 0x80234B60: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80234B60: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80234B64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234B68: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80234B6C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80234B70: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80234B74: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80234B78: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80234B7C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80234B80: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80234B84: addiu       $v0, $v0, 0x11F0
    ctx->r2 = ADD32(ctx->r2, 0X11F0);
    // 0x80234B88: jal         0x8003E934
    // 0x80234B8C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80234B8C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x80234B90: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80234B94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234B98: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80234B9C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80234BA0: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80234BA4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80234BA8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80234BAC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80234BB0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80234BB4: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80234BB8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80234BBC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80234BC0: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x80234BC4: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x80234BC8: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80234BCC: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x80234BD0: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80234BD4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80234BD8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80234BDC: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80234BE0: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x80234BE4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80234BE8: jal         0x800A3450
    // 0x80234BEC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80234BEC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x80234BF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234BF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80234BF8: jal         0x80050294
    // 0x80234BFC: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80234BFC: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    after_3:
    // 0x80234C00: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80234C04: lbu         $a2, 0x8($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X8);
    // 0x80234C08: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x80234C0C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234C10: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234C14: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x80234C18: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x80234C1C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80234C20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234C24: sb          $zero, 0xFF($s0)
    MEM_B(0XFF, ctx->r16) = 0;
    // 0x80234C28: sb          $zero, 0x103($s0)
    MEM_B(0X103, ctx->r16) = 0;
    // 0x80234C2C: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x80234C30: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80234C34: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x80234C38: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80234C3C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234C40: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80234C44: jal         0x8002A33C
    // 0x80234C48: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80234C48: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    after_4:
    // 0x80234C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234C50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234C54: jr          $ra
    // 0x80234C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80240904_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240904: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80240908: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024090C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80240910: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80240914: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80240918: bne         $v0, $zero, L_80240934
    if (ctx->r2 != 0) {
        // 0x8024091C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80240934;
    }
    // 0x8024091C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80240920: jal         0x80050294
    // 0x80240924: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80240924: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80240928: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8024092C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240930: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_80240934:
    // 0x80240934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80240938: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024093C: jr          $ra
    // 0x80240940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80240940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024A8F0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A8F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024A8F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024A8F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024A8FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024A900: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8024A904: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024A908: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A90C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024A910: lw          $v0, 0x2410($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2410);
    // 0x8024A914: jalr        $v0
    // 0x8024A918: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024A918: nop

    after_0:
    // 0x8024A91C: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8024A920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024A924: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024A928: jr          $ra
    // 0x8024A92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024A92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AC88_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AC88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AC8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AC90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AC94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AC98: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022AC9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ACA0: bne         $v1, $v0, L_8022ACD4
    if (ctx->r3 != ctx->r2) {
        // 0x8022ACA4: addiu       $v0, $zero, 0x3D
        ctx->r2 = ADD32(0, 0X3D);
            goto L_8022ACD4;
    }
    // 0x8022ACA4: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x8022ACA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022ACAC: jal         0x800616FC
    // 0x8022ACB0: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022ACB0: addiu       $a1, $zero, 0x79
    ctx->r5 = ADD32(0, 0X79);
    after_0:
    // 0x8022ACB4: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022ACB8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022ACBC: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022ACC0: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022ACC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ACC8: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8022ACCC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022ACD0: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
L_8022ACD4:
    // 0x8022ACD4: bne         $v1, $v0, L_8022ACE4
    if (ctx->r3 != ctx->r2) {
        // 0x8022ACD8: nop
    
            goto L_8022ACE4;
    }
    // 0x8022ACD8: nop

    // 0x8022ACDC: jal         0x800600F8
    // 0x8022ACE0: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x8022ACE0: nop

    after_1:
L_8022ACE4:
    // 0x8022ACE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022ACE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ACEC: jr          $ra
    // 0x8022ACF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ACF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802332A8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802332A8: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x802332AC: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x802332B0: beq         $a0, $v0, L_802332D4
    if (ctx->r4 == ctx->r2) {
        // 0x802332B4: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_802332D4;
    }
    // 0x802332B4: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x802332B8: bne         $v0, $zero, L_802332E0
    if (ctx->r2 != 0) {
        // 0x802332BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802332E0;
    }
    // 0x802332BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802332C0: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x802332C4: beq         $v0, $zero, L_802332DC
    if (ctx->r2 == 0) {
        // 0x802332C8: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_802332DC;
    }
    // 0x802332C8: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x802332CC: bne         $v0, $zero, L_802332E0
    if (ctx->r2 != 0) {
        // 0x802332D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802332E0;
    }
    // 0x802332D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802332D4:
    // 0x802332D4: j           L_802332E0
    // 0x802332D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_802332E0;
    // 0x802332D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802332DC:
    // 0x802332DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802332E0:
    // 0x802332E0: jr          $ra
    // 0x802332E4: nop

    TRACE_RETURN()
    return;
    // 0x802332E4: nop

;}
RECOMP_FUNC void func_80242124_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242124: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80242128: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8024212C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80242130: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80242134: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80242138: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8024213C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80242140: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80242144: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80242148: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x8024214C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80242150: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80242154: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80242158: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x8024215C: beq         $v1, $v0, L_80242178
    if (ctx->r3 == ctx->r2) {
        // 0x80242160: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80242178;
    }
    // 0x80242160: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80242164: bne         $v1, $v0, L_80242174
    if (ctx->r3 != ctx->r2) {
        // 0x80242168: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80242174;
    }
    // 0x80242168: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8024216C: j           L_80242178
    // 0x80242170: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
        goto L_80242178;
    // 0x80242170: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_80242174:
    // 0x80242174: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80242178:
    // 0x80242178: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8024217C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80242180: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80242184: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80242188: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8024218C: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x80242190: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80242194: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80242198: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024219C: beq         $a0, $v1, L_802421C4
    if (ctx->r4 == ctx->r3) {
        // 0x802421A0: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_802421C4;
    }
    // 0x802421A0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802421A4: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x802421A8: jal         0x8003B85C
    // 0x802421AC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x802421AC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x802421B0: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x802421B4: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x802421B8: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x802421BC: jal         0x8003B840
    // 0x802421C0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x802421C0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_802421C4:
    // 0x802421C4: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x802421C8: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x802421CC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802421D0: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x802421D4: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802421D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802421DC: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x802421E0: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x802421E4: beq         $v1, $v0, L_80242200
    if (ctx->r3 == ctx->r2) {
        // 0x802421E8: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80242200;
    }
    // 0x802421E8: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x802421EC: bne         $v1, $v0, L_802421FC
    if (ctx->r3 != ctx->r2) {
        // 0x802421F0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802421FC;
    }
    // 0x802421F0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802421F4: j           L_80242200
    // 0x802421F8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80242200;
    // 0x802421F8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802421FC:
    // 0x802421FC: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_80242200:
    // 0x80242200: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x80242204: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80242208: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024220C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80242210: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80242214: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x80242218: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8024221C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80242220: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80242224: beq         $a0, $v1, L_8024224C
    if (ctx->r4 == ctx->r3) {
        // 0x80242228: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8024224C;
    }
    // 0x80242228: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8024222C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80242230: jal         0x8003B85C
    // 0x80242234: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80242234: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x80242238: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8024223C: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x80242240: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x80242244: jal         0x8003B840
    // 0x80242248: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80242248: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_8024224C:
    // 0x8024224C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80242250: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80242254: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80242258: jr          $ra
    // 0x8024225C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8024225C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80249DE0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249DE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80249DE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80249DE8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80249DEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80249DF0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80249DF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80249DF8: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80249DFC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80249E00: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249E04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80249E08: lh          $v0, 0x23A0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X23A0);
    // 0x80249E0C: blez        $v0, L_80249E60
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80249E10: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80249E60;
    }
    // 0x80249E10: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80249E14: lui         $s2, 0x8025
    ctx->r18 = S32(0X8025 << 16);
    // 0x80249E18: addiu       $s2, $s2, 0x3580
    ctx->r18 = ADD32(ctx->r18, 0X3580);
    // 0x80249E1C: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_80249E20:
    // 0x80249E20: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x80249E24: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80249E28: jal         0x8004F4F8
    // 0x80249E2C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80249E2C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_0:
    // 0x80249E30: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80249E34: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x80249E38: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80249E3C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80249E40: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249E44: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80249E48: lh          $v1, 0x23A0($at)
    ctx->r3 = MEM_H(ctx->r1, 0X23A0);
    // 0x80249E4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80249E50: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80249E54: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80249E58: bne         $v0, $zero, L_80249E20
    if (ctx->r2 != 0) {
        // 0x80249E5C: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_80249E20;
    }
    // 0x80249E5C: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_80249E60:
    // 0x80249E60: jal         0x8004F684
    // 0x80249E64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x80249E64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80249E68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80249E6C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80249E70: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80249E74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249E78: jr          $ra
    // 0x80249E7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80249E7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024292C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024292C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242930: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80242934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80242938: jal         0x8004F144
    // 0x8024293C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8024293C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80242940: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80242944: beql        $a1, $zero, L_80242978
    if (ctx->r5 == 0) {
        // 0x80242948: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_80242978;
    }
    goto skip_0;
    // 0x80242948: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x8024294C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80242950: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80242954: beq         $v0, $zero, L_8024296C
    if (ctx->r2 == 0) {
        // 0x80242958: nop
    
            goto L_8024296C;
    }
    // 0x80242958: nop

    // 0x8024295C: jal         0x80242990
    // 0x80242960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80242990_ovl10(rdram, ctx);
        goto after_1;
    // 0x80242960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80242964: j           L_80242978
    // 0x80242968: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_80242978;
    // 0x80242968: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8024296C:
    // 0x8024296C: jal         0x802429D0
    // 0x80242970: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802429D0_ovl10(rdram, ctx);
        goto after_2;
    // 0x80242970: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80242974: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80242978:
    // 0x80242978: jal         0x8004F4F8
    // 0x8024297C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_3;
    // 0x8024297C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80242980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242984: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80242988: jr          $ra
    // 0x8024298C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024298C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022682C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022682C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226830: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226834: bne         $v0, $zero, L_80226840
    if (ctx->r2 != 0) {
        // 0x80226838: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_80226840;
    }
    // 0x80226838: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022683C: sh          $v0, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r2;
L_80226840:
    // 0x80226840: jr          $ra
    // 0x80226844: nop

    TRACE_RETURN()
    return;
    // 0x80226844: nop

;}
RECOMP_FUNC void func_8023C45C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C45C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8023C460: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8023C464: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023C468: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8023C46C: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8023C470: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8023C474: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023C478: andi        $v0, $v0, 0x60
    ctx->r2 = ctx->r2 & 0X60;
    // 0x8023C47C: beq         $v0, $zero, L_8023C4A0
    if (ctx->r2 == 0) {
        // 0x8023C480: addu        $s2, $a0, $zero
        ctx->r18 = ADD32(ctx->r4, 0);
            goto L_8023C4A0;
    }
    // 0x8023C480: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023C484: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023C488: lh          $a1, 0x56($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X56);
    // 0x8023C48C: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    // 0x8023C490: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023C494: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023C498: j           L_8023C4B4
    // 0x8023C49C: addiu       $a1, $a1, 0x80
    ctx->r5 = ADD32(ctx->r5, 0X80);
        goto L_8023C4B4;
    // 0x8023C49C: addiu       $a1, $a1, 0x80
    ctx->r5 = ADD32(ctx->r5, 0X80);
L_8023C4A0:
    // 0x8023C4A0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023C4A4: lh          $a1, 0x56($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X56);
    // 0x8023C4A8: addiu       $a2, $zero, 0x1800
    ctx->r6 = ADD32(0, 0X1800);
    // 0x8023C4AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023C4B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_8023C4B4:
    // 0x8023C4B4: jal         0x8004DC2C
    // 0x8023C4B8: nop

    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x8023C4B8: nop

    after_0:
    // 0x8023C4BC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8023C4C0: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x8023C4C4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023C4C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C4CC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8023C4D0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8023C4D4: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x8023C4D8: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8023C4DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023C4E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C4E4: jal         0x8004DD04
    // 0x8023C4E8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8023C4E8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x8023C4EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023C4F0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023C4F4: addiu       $a1, $a1, 0x17CC
    ctx->r5 = ADD32(ctx->r5, 0X17CC);
    // 0x8023C4F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023C4FC: jal         0x8003E964
    // 0x8023C500: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    func_8003E964_19D64(rdram, ctx);
        goto after_2;
    // 0x8023C500: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    after_2:
    // 0x8023C504: slti        $v0, $v0, -0x27F
    ctx->r2 = SIGNED(ctx->r2) < -0X27F ? 1 : 0;
    // 0x8023C508: bne         $v0, $zero, L_8023C514
    if (ctx->r2 != 0) {
        // 0x8023C50C: addiu       $a1, $zero, -0x4C0
        ctx->r5 = ADD32(0, -0X4C0);
            goto L_8023C514;
    }
    // 0x8023C50C: addiu       $a1, $zero, -0x4C0
    ctx->r5 = ADD32(0, -0X4C0);
    // 0x8023C510: addiu       $a1, $zero, -0x340
    ctx->r5 = ADD32(0, -0X340);
L_8023C514:
    // 0x8023C514: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x8023C518: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8023C51C: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C520: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023C524: beq         $v0, $zero, L_8023C570
    if (ctx->r2 == 0) {
        // 0x8023C528: slt         $v0, $v1, $a0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_8023C570;
    }
    // 0x8023C528: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8023C52C: lh          $v0, 0x12($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X12);
    // 0x8023C530: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023C534: slti        $v0, $v0, 0x18
    ctx->r2 = SIGNED(ctx->r2) < 0X18 ? 1 : 0;
    // 0x8023C538: beql        $v0, $zero, L_8023C54C
    if (ctx->r2 == 0) {
        // 0x8023C53C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8023C54C;
    }
    goto skip_0;
    // 0x8023C53C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    skip_0:
    // 0x8023C540: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8023C544: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
    // 0x8023C548: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8023C54C:
    // 0x8023C54C: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8023C550: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x8023C554: lhu         $v1, 0x12($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X12);
    // 0x8023C558: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023C55C: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8023C560: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C564: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C568: j           L_8023C5B4
    // 0x8023C56C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
        goto L_8023C5B4;
    // 0x8023C56C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
L_8023C570:
    // 0x8023C570: beq         $v0, $zero, L_8023C5C4
    if (ctx->r2 == 0) {
        // 0x8023C574: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8023C5C4;
    }
    // 0x8023C574: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023C578: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8023C57C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023C580: slti        $v0, $v0, 0x18
    ctx->r2 = SIGNED(ctx->r2) < 0X18 ? 1 : 0;
    // 0x8023C584: beq         $v0, $zero, L_8023C590
    if (ctx->r2 == 0) {
        // 0x8023C588: addiu       $v0, $v1, 0x8
        ctx->r2 = ADD32(ctx->r3, 0X8);
            goto L_8023C590;
    }
    // 0x8023C588: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8023C58C: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
L_8023C590:
    // 0x8023C590: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023C594: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
    // 0x8023C598: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x8023C59C: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x8023C5A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C5A4: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8023C5A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C5AC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C5B0: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
L_8023C5B4:
    // 0x8023C5B4: bnel        $v0, $zero, L_8023C5CC
    if (ctx->r2 != 0) {
        // 0x8023C5B8: sh          $a1, 0x16($s2)
        MEM_H(0X16, ctx->r18) = ctx->r5;
            goto L_8023C5CC;
    }
    goto skip_1;
    // 0x8023C5B8: sh          $a1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r5;
    skip_1:
    // 0x8023C5BC: j           L_8023C5CC
    // 0x8023C5C0: nop

        goto L_8023C5CC;
    // 0x8023C5C0: nop

L_8023C5C4:
    // 0x8023C5C4: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8023C5C8: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_8023C5CC:
    // 0x8023C5CC: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x8023C5D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C5D4: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x8023C5D8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8023C5DC: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8023C5E0: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8023C5E4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8023C5E8: jr          $ra
    // 0x8023C5EC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8023C5EC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8024AFC0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024AFC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024AFC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024AFC8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024AFCC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024AFD0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024AFD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024AFD8: lw          $v0, 0x2560($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2560);
    // 0x8024AFDC: jalr        $v0
    // 0x8024AFE0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024AFE0: nop

    after_0:
    // 0x8024AFE4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024AFE8: jr          $ra
    // 0x8024AFEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024AFEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B0BC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B0BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B0C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B0C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B0C8: jal         0x8003516C
    // 0x8023B0CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x8023B0CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8023B0D0: bne         $v0, $zero, L_8023B118
    if (ctx->r2 != 0) {
        // 0x8023B0D4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8023B118;
    }
    // 0x8023B0D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023B0D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023B0DC: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8023B0E0: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x8023B0E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B0E8: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8023B0EC: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023B0F0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8023B0F4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023B0F8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023B0FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B100: lw          $v0, 0x173C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X173C);
    // 0x8023B104: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023B108: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023B10C: sb          $zero, -0x3A4F($at)
    MEM_B(-0X3A4F, ctx->r1) = 0;
    // 0x8023B110: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023B114: sb          $zero, -0x3A50($at)
    MEM_B(-0X3A50, ctx->r1) = 0;
L_8023B118:
    // 0x8023B118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B11C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B120: jr          $ra
    // 0x8023B124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80249DAC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249DB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80249DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249DB8: jal         0x80249E88
    // 0x80249DBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80249E88_ovl10(rdram, ctx);
        goto after_0;
    // 0x80249DBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80249DC0: jal         0x80249EF8
    // 0x80249DC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80249EF8_ovl10(rdram, ctx);
        goto after_1;
    // 0x80249DC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80249DC8: jal         0x8024A76C
    // 0x80249DCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024A76C_ovl10(rdram, ctx);
        goto after_2;
    // 0x80249DCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80249DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80249DD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249DD8: jr          $ra
    // 0x80249DDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80249DDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C574_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C574: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C578: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C57C: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x8022C580: beq         $v0, $zero, L_8022C590
    if (ctx->r2 == 0) {
        // 0x8022C584: nop
    
            goto L_8022C590;
    }
    // 0x8022C584: nop

    // 0x8022C588: lw          $v0, 0x380($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X380);
    // 0x8022C58C: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
L_8022C590:
    // 0x8022C590: jal         0x8004F418
    // 0x8022C594: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022C594: nop

    after_0:
    // 0x8022C598: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C59C: jr          $ra
    // 0x8022C5A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C5A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80242348_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242348: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024234C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80242350: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80242354: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80242358: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8024235C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80242360: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80242364: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80242368: addiu       $s4, $zero, 0xB
    ctx->r20 = ADD32(0, 0XB);
    // 0x8024236C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80242370: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_80242374:
    // 0x80242374: jal         0x8004F144
    // 0x80242378: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80242378: nop

    after_0:
    // 0x8024237C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80242380: beql        $s0, $zero, L_80242410
    if (ctx->r16 == 0) {
        // 0x80242384: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80242410;
    }
    goto skip_0;
    // 0x80242384: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80242388: sb          $s3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r19;
    // 0x8024238C: sb          $s4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r20;
    // 0x80242390: sb          $s3, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r19;
    // 0x80242394: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80242398: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8024239C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802423A0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802423A4: lbu         $v0, 0x1B80($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1B80);
    // 0x802423A8: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x802423AC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802423B0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802423B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802423B8: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x802423BC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802423C0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802423C4: lbu         $v0, 0x1B88($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1B88);
    // 0x802423C8: lhu         $v1, 0x16($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X16);
    // 0x802423CC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802423D0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802423D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802423D8: addiu       $v1, $v1, -0x78
    ctx->r3 = ADD32(ctx->r3, -0X78);
    // 0x802423DC: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x802423E0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802423E4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802423E8: lbu         $v0, 0x1B90($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1B90);
    // 0x802423EC: lhu         $v1, 0x18($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X18);
    // 0x802423F0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802423F4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802423F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802423FC: jal         0x800A3450
    // 0x80242400: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80242400: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_1:
    // 0x80242404: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80242408: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8024240C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80242410:
    // 0x80242410: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x80242414: bne         $v0, $zero, L_80242374
    if (ctx->r2 != 0) {
        // 0x80242418: nop
    
            goto L_80242374;
    }
    // 0x80242418: nop

    // 0x8024241C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80242420: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80242424: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80242428: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8024242C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80242430: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80242434: jr          $ra
    // 0x80242438: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80242438: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80242C7C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242C7C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80242C80: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80242C84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80242C88: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80242C8C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80242C90: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80242C94: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80242C98: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80242C9C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80242CA0: jal         0x8009A3B4
    // 0x80242CA4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80242CA4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    after_0:
    // 0x80242CA8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80242CAC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80242CB0: jal         0x8009A3B4
    // 0x80242CB4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80242CB4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80242CB8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80242CBC: addiu       $s2, $s0, 0x54
    ctx->r18 = ADD32(ctx->r16, 0X54);
    // 0x80242CC0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80242CC4: jal         0x8009A3B4
    // 0x80242CC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80242CC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80242CCC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80242CD0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80242CD4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80242CD8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80242CDC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80242CE0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80242CE4: lw          $v0, 0x201C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X201C);
    // 0x80242CE8: jalr        $v0
    // 0x80242CEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80242CEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80242CF0: jal         0x8003ECF0
    // 0x80242CF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_4;
    // 0x80242CF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80242CF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80242CFC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80242D00: jal         0x802435E8
    // 0x80242D04: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_802435E8_ovl10(rdram, ctx);
        goto after_5;
    // 0x80242D04: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_5:
    // 0x80242D08: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80242D0C: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80242D10: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80242D14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80242D18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80242D1C: jal         0x8009A3B4
    // 0x80242D20: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80242D20: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_6:
    // 0x80242D24: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80242D28: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80242D2C: jal         0x80031600
    // 0x80242D30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_7;
    // 0x80242D30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80242D34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80242D38: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80242D3C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80242D40: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80242D44: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80242D48: jal         0x80031DA8
    // 0x80242D4C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_8;
    // 0x80242D4C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_8:
    // 0x80242D50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80242D54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80242D58: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80242D5C: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x80242D60: jal         0x80047284
    // 0x80242D64: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x80242D64: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_9:
    // 0x80242D68: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80242D6C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80242D70: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80242D74: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80242D78: jr          $ra
    // 0x80242D7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80242D7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F6A0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F6A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F6A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F6A8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022F6AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F6B0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022F6B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F6B8: lw          $v0, 0x984($at)
    ctx->r2 = MEM_W(ctx->r1, 0X984);
    // 0x8022F6BC: jalr        $v0
    // 0x8022F6C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F6C0: nop

    after_0:
    // 0x8022F6C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F6C8: jr          $ra
    // 0x8022F6CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F6CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233334_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233334: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80233338: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8023333C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233340: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80233344: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80233348: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8023334C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80233350: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x80233354: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80233358: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8023335C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80233360: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80233364: jal         0x8004DC2C
    // 0x80233368: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x80233368: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x8023336C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80233370: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x80233374: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80233378: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x8023337C: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x80233380: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80233384: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80233388: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8023338C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80233390: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x80233394: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80233398: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8023339C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x802333A0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x802333A4: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x802333A8: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x802333AC: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x802333B0: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x802333B4: beq         $a0, $zero, L_802333C4
    if (ctx->r4 == 0) {
        // 0x802333B8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802333C4;
    }
    // 0x802333B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802333BC: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x802333C0: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_802333C4:
    // 0x802333C4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x802333C8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802333CC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802333D0: jr          $ra
    // 0x802333D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802333D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802333D8: nop

    // 0x802333DC: nop

;}
RECOMP_FUNC void func_802444F0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802444F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802444F4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x802444F8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802444FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80244500: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80244504: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80244508: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8024450C: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x80244510: bne         $v0, $zero, L_8024451C
    if (ctx->r2 != 0) {
        // 0x80244514: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024451C;
    }
    // 0x80244514: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80244518: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
L_8024451C:
    // 0x8024451C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80244520: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x80244524: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    // 0x80244528: jal         0x8009A3B4
    // 0x8024452C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8024452C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80244530: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80244534: jr          $ra
    // 0x80244538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80244538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E4F0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E4F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E4F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E4F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E4FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E500: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022E504: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E508: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022E50C: jal         0x8004D5D4
    // 0x8022E510: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022E510: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022E514: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x8022E518: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E51C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022E520: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022E524: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022E528: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022E52C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022E530: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022E534: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E538: addiu       $v0, $zero, 0x10E
    ctx->r2 = ADD32(0, 0X10E);
    // 0x8022E53C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022E540: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022E544: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022E548: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022E54C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022E550: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022E554: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022E558: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022E55C: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x8022E560: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    // 0x8022E564: jal         0x800540BC
    // 0x8022E568: sh          $zero, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022E568: sh          $zero, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = 0;
    after_1:
    // 0x8022E56C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E570: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022E574: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022E578: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
    // 0x8022E57C: sh          $v1, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = ctx->r3;
    // 0x8022E580: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E584: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022E588: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022E58C: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E590: lbu         $v1, 0x18($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X18);
    // 0x8022E594: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022E598: addiu       $v0, $v0, 0x920
    ctx->r2 = ADD32(ctx->r2, 0X920);
    // 0x8022E59C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022E5A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E5A4: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022E5A8: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022E5AC: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022E5B0: beq         $a0, $v0, L_8022E5FC
    if (ctx->r4 == ctx->r2) {
        // 0x8022E5B4: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022E5FC;
    }
    // 0x8022E5B4: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022E5B8: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8022E5BC: beql        $v0, $zero, L_8022E5D4
    if (ctx->r2 == 0) {
        // 0x8022E5C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E5D4;
    }
    goto skip_0;
    // 0x8022E5C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022E5C4: beq         $a0, $zero, L_8022E5E4
    if (ctx->r4 == 0) {
        // 0x8022E5C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E5E4;
    }
    // 0x8022E5C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E5CC: j           L_8022E650
    // 0x8022E5D0: nop

        goto L_8022E650;
    // 0x8022E5D0: nop

L_8022E5D4:
    // 0x8022E5D4: beq         $a0, $v0, L_8022E630
    if (ctx->r4 == ctx->r2) {
        // 0x8022E5D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E630;
    }
    // 0x8022E5D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E5DC: j           L_8022E650
    // 0x8022E5E0: nop

        goto L_8022E650;
    // 0x8022E5E0: nop

L_8022E5E4:
    // 0x8022E5E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E5E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E5EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E5F0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E5F4: j           L_8022E648
    // 0x8022E5F8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022E648;
    // 0x8022E5F8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022E5FC:
    // 0x8022E5FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E600: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E604: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E60C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E610: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E614: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022E618: jal         0x80050294
    // 0x8022E61C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022E61C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_2:
    // 0x8022E620: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022E624: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x8022E628: j           L_8022E650
    // 0x8022E62C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_8022E650;
    // 0x8022E62C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022E630:
    // 0x8022E630: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E634: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E63C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E640: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E644: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022E648:
    // 0x8022E648: jal         0x80050294
    // 0x8022E64C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022E64C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
L_8022E650:
    // 0x8022E650: jal         0x8022E668
    // 0x8022E654: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E668_ovl10(rdram, ctx);
        goto after_4;
    // 0x8022E654: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022E658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E65C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E660: jr          $ra
    // 0x8022E664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
