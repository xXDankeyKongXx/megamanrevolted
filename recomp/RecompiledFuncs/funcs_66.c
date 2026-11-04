#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022A65C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A65C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A660: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A664: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022A668: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A66C: bne         $v1, $v0, L_8022A67C
    if (ctx->r3 != ctx->r2) {
        // 0x8022A670: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8022A67C;
    }
    // 0x8022A670: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A674: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8022A678: sh          $v0, 0x44($v1)
    MEM_H(0X44, ctx->r3) = ctx->r2;
L_8022A67C:
    // 0x8022A67C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A680: lw          $v0, 0x4DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4DE0);
    // 0x8022A684: lui         $v1, 0x5
    ctx->r3 = S32(0X5 << 16);
    // 0x8022A688: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A68C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A690: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8022A694: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A698: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A69C: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8022A6A0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022A6A4: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x8022A6A8: bne         $v1, $v0, L_8022A6FC
    if (ctx->r3 != ctx->r2) {
        // 0x8022A6AC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022A6FC;
    }
    // 0x8022A6AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022A6B0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022A6B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A6B8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022A6BC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A6C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A6C4: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8022A6C8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A6CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A6D0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022A6D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022A6D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A6DC: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x8022A6E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A6E4: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022A6E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A6EC: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8022A6F0: sb          $v1, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r3;
    // 0x8022A6F4: jal         0x800600F8
    // 0x8022A6F8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_0;
    // 0x8022A6F8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    after_0:
L_8022A6FC:
    // 0x8022A6FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A700: jr          $ra
    // 0x8022A704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B330_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B334: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B338: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B33C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022B340: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022B344: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B348: jal         0x8006FF84
    // 0x8022B34C: nop

    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022B34C: nop

    after_0:
    // 0x8022B350: beq         $v0, $zero, L_8022B3FC
    if (ctx->r2 == 0) {
        // 0x8022B354: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022B3FC;
    }
    // 0x8022B354: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B358: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022B35C: addiu       $v1, $v1, -0x420
    ctx->r3 = ADD32(ctx->r3, -0X420);
    // 0x8022B360: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_8022B364:
    // 0x8022B364: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x8022B368: beq         $v0, $zero, L_8022B37C
    if (ctx->r2 == 0) {
        // 0x8022B36C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8022B37C;
    }
    // 0x8022B36C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022B370: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x8022B374: beql        $v0, $a1, L_8022B38C
    if (ctx->r2 == ctx->r5) {
        // 0x8022B378: sw          $v1, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r3;
            goto L_8022B38C;
    }
    goto skip_0;
    // 0x8022B378: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    skip_0:
L_8022B37C:
    // 0x8022B37C: slti        $v0, $a0, 0x12
    ctx->r2 = SIGNED(ctx->r4) < 0X12 ? 1 : 0;
    // 0x8022B380: bne         $v0, $zero, L_8022B364
    if (ctx->r2 != 0) {
        // 0x8022B384: addiu       $v1, $v1, 0x3C8
        ctx->r3 = ADD32(ctx->r3, 0X3C8);
            goto L_8022B364;
    }
    // 0x8022B384: addiu       $v1, $v1, 0x3C8
    ctx->r3 = ADD32(ctx->r3, 0X3C8);
    // 0x8022B388: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
L_8022B38C:
    // 0x8022B38C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022B390: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x8022B394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B398: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022B39C: sb          $v0, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = ctx->r2;
    // 0x8022B3A0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B3A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022B3A8: sb          $v0, -0x3B9F($at)
    MEM_B(-0X3B9F, ctx->r1) = ctx->r2;
    // 0x8022B3AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022B3B0: sb          $zero, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = 0;
    // 0x8022B3B4: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8022B3B8: andi        $v1, $v1, 0xBF
    ctx->r3 = ctx->r3 & 0XBF;
    // 0x8022B3BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B3C0: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x8022B3C4: jal         0x8006036C
    // 0x8022B3C8: addiu       $a0, $zero, 0x318
    ctx->r4 = ADD32(0, 0X318);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x8022B3C8: addiu       $a0, $zero, 0x318
    ctx->r4 = ADD32(0, 0X318);
    after_1:
    // 0x8022B3CC: jal         0x8006036C
    // 0x8022B3D0: addiu       $a0, $zero, 0x319
    ctx->r4 = ADD32(0, 0X319);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8022B3D0: addiu       $a0, $zero, 0x319
    ctx->r4 = ADD32(0, 0X319);
    after_2:
    // 0x8022B3D4: jal         0x8006036C
    // 0x8022B3D8: addiu       $a0, $zero, 0x31A
    ctx->r4 = ADD32(0, 0X31A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x8022B3D8: addiu       $a0, $zero, 0x31A
    ctx->r4 = ADD32(0, 0X31A);
    after_3:
    // 0x8022B3DC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B3E0: sb          $zero, 0x7440($at)
    MEM_B(0X7440, ctx->r1) = 0;
    // 0x8022B3E4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B3E8: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022B3EC: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x8022B3F0: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x8022B3F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B3F8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B3FC:
    // 0x8022B3FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B400: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B404: jr          $ra
    // 0x8022B408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023D50C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D50C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D510: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023D514: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023D518: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023D51C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023D520: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023D524: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023D528: addiu       $s0, $s0, 0x75C0
    ctx->r16 = ADD32(ctx->r16, 0X75C0);
    // 0x8023D52C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_8023D530:
    // 0x8023D530: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8023D534: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8023D538: jal         0x8004F5C4
    // 0x8023D53C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8023D53C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_0:
    // 0x8023D540: slti        $v0, $s1, 0x6
    ctx->r2 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x8023D544: bne         $v0, $zero, L_8023D530
    if (ctx->r2 != 0) {
        // 0x8023D548: nop
    
            goto L_8023D530;
    }
    // 0x8023D548: nop

    // 0x8023D54C: jal         0x8004F62C
    // 0x8023D550: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8023D550: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8023D554: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D558: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023D55C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023D560: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023D564: jr          $ra
    // 0x8023D568: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023D568: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238B30_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238B30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238B34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238B38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238B3C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238B40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238B44: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80238B48: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238B4C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238B50: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238B54: lw          $v0, 0x6140($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6140);
    // 0x80238B58: jalr        $v0
    // 0x80238B5C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80238B5C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    after_0:
    // 0x80238B60: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80238B64: bne         $v0, $zero, L_80238B78
    if (ctx->r2 != 0) {
        // 0x80238B68: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238B78;
    }
    // 0x80238B68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238B6C: jal         0x8005044C
    // 0x80238B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80238B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80238B74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80238B78:
    // 0x80238B78: jal         0x802395D4
    // 0x80238B7C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802395D4_ovl5(rdram, ctx);
        goto after_2;
    // 0x80238B7C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80238B80: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238B84: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238B88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238B8C: jr          $ra
    // 0x80238B90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238B90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229954_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229954: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229958: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022995C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80229960: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229964: bne         $v1, $v0, L_80229980
    if (ctx->r3 != ctx->r2) {
        // 0x80229968: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80229980;
    }
    // 0x80229968: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022996C: jal         0x800616FC
    // 0x80229970: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80229970: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80229974: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x80229978: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022997C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_80229980:
    // 0x80229980: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229984: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229988: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022998C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229990: bne         $v0, $zero, L_802299A0
    if (ctx->r2 != 0) {
        // 0x80229994: nop
    
            goto L_802299A0;
    }
    // 0x80229994: nop

    // 0x80229998: jal         0x800600F8
    // 0x8022999C: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x8022999C: nop

    after_1:
L_802299A0:
    // 0x802299A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802299A4: jr          $ra
    // 0x802299A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802299A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227840_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227844: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227848: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022784C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80227850: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80227854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227858: jal         0x8006FF84
    // 0x8022785C: nop

    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022785C: nop

    after_0:
    // 0x80227860: beq         $v0, $zero, L_802278F8
    if (ctx->r2 == 0) {
        // 0x80227864: nop
    
            goto L_802278F8;
    }
    // 0x80227864: nop

    // 0x80227868: jal         0x8006033C
    // 0x8022786C: addiu       $a0, $zero, 0x626
    ctx->r4 = ADD32(0, 0X626);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022786C: addiu       $a0, $zero, 0x626
    ctx->r4 = ADD32(0, 0X626);
    after_1:
    // 0x80227870: beq         $v0, $zero, L_80227880
    if (ctx->r2 == 0) {
        // 0x80227874: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80227880;
    }
    // 0x80227874: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227878: j           L_802278F0
    // 0x8022787C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_802278F0;
    // 0x8022787C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80227880:
    // 0x80227880: jal         0x8006033C
    // 0x80227884: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80227884: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_2:
    // 0x80227888: beq         $v0, $zero, L_802278B0
    if (ctx->r2 == 0) {
        // 0x8022788C: nop
    
            goto L_802278B0;
    }
    // 0x8022788C: nop

    // 0x80227890: jal         0x8006033C
    // 0x80227894: addiu       $a0, $zero, 0x62A
    ctx->r4 = ADD32(0, 0X62A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80227894: addiu       $a0, $zero, 0x62A
    ctx->r4 = ADD32(0, 0X62A);
    after_3:
    // 0x80227898: bne         $v0, $zero, L_802278B0
    if (ctx->r2 != 0) {
        // 0x8022789C: nop
    
            goto L_802278B0;
    }
    // 0x8022789C: nop

    // 0x802278A0: jal         0x8006036C
    // 0x802278A4: addiu       $a0, $zero, 0x62A
    ctx->r4 = ADD32(0, 0X62A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x802278A4: addiu       $a0, $zero, 0x62A
    ctx->r4 = ADD32(0, 0X62A);
    after_4:
    // 0x802278A8: j           L_802278EC
    // 0x802278AC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_802278EC;
    // 0x802278AC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_802278B0:
    // 0x802278B0: jal         0x8006033C
    // 0x802278B4: addiu       $a0, $zero, 0x623
    ctx->r4 = ADD32(0, 0X623);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x802278B4: addiu       $a0, $zero, 0x623
    ctx->r4 = ADD32(0, 0X623);
    after_5:
    // 0x802278B8: beq         $v0, $zero, L_802278C4
    if (ctx->r2 == 0) {
        // 0x802278BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802278C4;
    }
    // 0x802278BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802278C0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802278C4:
    // 0x802278C4: jal         0x8006033C
    // 0x802278C8: addiu       $a0, $zero, 0x624
    ctx->r4 = ADD32(0, 0X624);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x802278C8: addiu       $a0, $zero, 0x624
    ctx->r4 = ADD32(0, 0X624);
    after_6:
    // 0x802278CC: beq         $v0, $zero, L_802278D8
    if (ctx->r2 == 0) {
        // 0x802278D0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802278D8;
    }
    // 0x802278D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802278D4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802278D8:
    // 0x802278D8: jal         0x8006033C
    // 0x802278DC: addiu       $a0, $zero, 0x625
    ctx->r4 = ADD32(0, 0X625);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x802278DC: addiu       $a0, $zero, 0x625
    ctx->r4 = ADD32(0, 0X625);
    after_7:
    // 0x802278E0: beq         $v0, $zero, L_802278EC
    if (ctx->r2 == 0) {
        // 0x802278E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802278EC;
    }
    // 0x802278E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802278E8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802278EC:
    // 0x802278EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802278F0:
    // 0x802278F0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x802278F4: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
L_802278F8:
    // 0x802278F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802278FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227900: jr          $ra
    // 0x80227904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80241384_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241384: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80241388: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8024138C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80241390: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80241394: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80241398: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8024139C: lw          $v0, 0xB8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB8);
    // 0x802413A0: lw          $a0, 0x2DC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2DC);
    // 0x802413A4: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x802413A8: addiu       $s2, $v0, 0x2C8
    ctx->r18 = ADD32(ctx->r2, 0X2C8);
    // 0x802413AC: srl         $v0, $a0, 1
    ctx->r2 = S32(U32(ctx->r4) >> 1);
    // 0x802413B0: bne         $v0, $v1, L_802413E4
    if (ctx->r2 != ctx->r3) {
        // 0x802413B4: andi        $v0, $a0, 0x1
        ctx->r2 = ctx->r4 & 0X1;
            goto L_802413E4;
    }
    // 0x802413B4: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x802413B8: beq         $v0, $zero, L_802413E4
    if (ctx->r2 == 0) {
        // 0x802413BC: nop
    
            goto L_802413E4;
    }
    // 0x802413BC: nop

    // 0x802413C0: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x802413C4: jal         0x8002C69C
    // 0x802413C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C69C_7A9C(rdram, ctx);
        goto after_0;
    // 0x802413C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802413CC: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
    // 0x802413D0: jal         0x80031600
    // 0x802413D4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x802413D4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x802413D8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802413DC: jal         0x80030834
    // 0x802413E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80030834_BC34(rdram, ctx);
        goto after_2;
    // 0x802413E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_802413E4:
    // 0x802413E4: lbu         $a0, 0x3($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X3);
    // 0x802413E8: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802413EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802413F0: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x802413F4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x802413F8: bne         $v1, $zero, L_80241408
    if (ctx->r3 != 0) {
        // 0x802413FC: nop
    
            goto L_80241408;
    }
    // 0x802413FC: nop

    // 0x80241400: jal         0x8004F4F8
    // 0x80241404: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_3;
    // 0x80241404: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_80241408:
    // 0x80241408: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8024140C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80241410: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80241414: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80241418: jr          $ra
    // 0x8024141C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8024141C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80230884_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230884: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230888: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023088C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230890: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230894: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023089C: jal         0x8009A3B4
    // 0x802308A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802308A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802308A4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802308A8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802308AC: jal         0x8009A3B4
    // 0x802308B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802308B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802308B4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802308B8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802308BC: jal         0x8009A3B4
    // 0x802308C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802308C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802308C4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802308C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802308CC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802308D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802308D4: lw          $v0, 0x5C64($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5C64);
    // 0x802308D8: jalr        $v0
    // 0x802308DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802308DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802308E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802308E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802308E8: jr          $ra
    // 0x802308EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802308EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226E60_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E60: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80226E64: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80226E68: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80226E6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226E70: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226E74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226E78: jr          $ra
    // 0x80226E7C: sb          $zero, 0x73D0($at)
    MEM_B(0X73D0, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80226E7C: sb          $zero, 0x73D0($at)
    MEM_B(0X73D0, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8023CDB0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CDB0: lbu         $v0, 0xDE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDE);
    // 0x8023CDB4: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x8023CDB8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023CDBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CDC0: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8023CDC4: lbu         $v1, 0xDF($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XDF);
    // 0x8023CDC8: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x8023CDCC: bne         $v0, $zero, L_8023CE78
    if (ctx->r2 != 0) {
        // 0x8023CDD0: andi        $a2, $a1, 0xE0
        ctx->r6 = ctx->r5 & 0XE0;
            goto L_8023CE78;
    }
    // 0x8023CDD0: andi        $a2, $a1, 0xE0
    ctx->r6 = ctx->r5 & 0XE0;
    // 0x8023CDD4: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8023CDD8: beq         $v0, $zero, L_8023CE4C
    if (ctx->r2 == 0) {
        // 0x8023CDDC: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_8023CE4C;
    }
    // 0x8023CDDC: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8023CDE0: lh          $v0, 0x44($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X44);
    // 0x8023CDE4: bne         $v0, $zero, L_8023CE78
    if (ctx->r2 != 0) {
        // 0x8023CDE8: sh          $zero, 0xE0($a0)
        MEM_H(0XE0, ctx->r4) = 0;
            goto L_8023CE78;
    }
    // 0x8023CDE8: sh          $zero, 0xE0($a0)
    MEM_H(0XE0, ctx->r4) = 0;
    // 0x8023CDEC: andi        $v0, $a1, 0x80
    ctx->r2 = ctx->r5 & 0X80;
    // 0x8023CDF0: beq         $v0, $zero, L_8023CE38
    if (ctx->r2 == 0) {
        // 0x8023CDF4: andi        $v1, $a2, 0xFF
        ctx->r3 = ctx->r6 & 0XFF;
            goto L_8023CE38;
    }
    // 0x8023CDF4: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x8023CDF8: lbu         $v0, 0xDF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDF);
    // 0x8023CDFC: ori         $v0, $v0, 0x60
    ctx->r2 = ctx->r2 | 0X60;
    // 0x8023CE00: sb          $v0, 0xDF($a0)
    MEM_B(0XDF, ctx->r4) = ctx->r2;
    // 0x8023CE04: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023CE08: bne         $v1, $v0, L_8023CE1C
    if (ctx->r3 != ctx->r2) {
        // 0x8023CE0C: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_8023CE1C;
    }
    // 0x8023CE0C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8023CE10: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023CE14: j           L_8023CE44
    // 0x8023CE18: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
        goto L_8023CE44;
    // 0x8023CE18: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
L_8023CE1C:
    // 0x8023CE1C: bne         $v1, $v0, L_8023CE30
    if (ctx->r3 != ctx->r2) {
        // 0x8023CE20: addiu       $v0, $zero, 0xF0
        ctx->r2 = ADD32(0, 0XF0);
            goto L_8023CE30;
    }
    // 0x8023CE20: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8023CE24: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023CE28: j           L_8023CE44
    // 0x8023CE2C: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
        goto L_8023CE44;
    // 0x8023CE2C: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
L_8023CE30:
    // 0x8023CE30: j           L_8023CE44
    // 0x8023CE34: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
        goto L_8023CE44;
    // 0x8023CE34: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
L_8023CE38:
    // 0x8023CE38: lbu         $v0, 0xDF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDF);
    // 0x8023CE3C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8023CE40: sb          $v0, 0xDF($a0)
    MEM_B(0XDF, ctx->r4) = ctx->r2;
L_8023CE44:
    // 0x8023CE44: j           L_8023CE78
    // 0x8023CE48: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
        goto L_8023CE78;
    // 0x8023CE48: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
L_8023CE4C:
    // 0x8023CE4C: bne         $v0, $zero, L_8023CE78
    if (ctx->r2 != 0) {
        // 0x8023CE50: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_8023CE78;
    }
    // 0x8023CE50: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8023CE54: bne         $v0, $zero, L_8023CE74
    if (ctx->r2 != 0) {
        // 0x8023CE58: addiu       $v0, $zero, 0x140
        ctx->r2 = ADD32(0, 0X140);
            goto L_8023CE74;
    }
    // 0x8023CE58: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8023CE5C: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023CE60: lw          $v1, 0xD4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD4);
    // 0x8023CE64: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023CE68: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CE6C: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x8023CE70: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
L_8023CE74:
    // 0x8023CE74: sh          $v0, 0xE0($a0)
    MEM_H(0XE0, ctx->r4) = ctx->r2;
L_8023CE78:
    // 0x8023CE78: jr          $ra
    // 0x8023CE7C: nop

    TRACE_RETURN()
    return;
    // 0x8023CE7C: nop

;}
RECOMP_FUNC void func_802302F4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802302F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802302F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802302FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230300: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230304: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230308: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023030C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80230310: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80230314: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80230318: beq         $v0, $zero, L_802304D4
    if (ctx->r2 == 0) {
        // 0x8023031C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802304D4;
    }
    // 0x8023031C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80230320: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230324: addu        $at, $at, $v0
    gpr jr_addend_8023032C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230328: lw          $v0, 0x7188($at)
    ctx->r2 = ADD32(ctx->r1, 0X7188);
    // 0x8023032C: jr          $v0
    // 0x80230330: nop

    switch (jr_addend_8023032C >> 2) {
        case 0: goto L_80230334; break;
        case 1: goto L_802303F4; break;
        case 2: goto L_80230410; break;
        case 3: goto L_80230478; break;
        case 4: goto L_802304A4; break;
        default: switch_error(__func__, 0x8023032C, 0x80247188);
    }
    // 0x80230330: nop

L_80230334:
    // 0x80230334: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80230338: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023033C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230340: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80230344: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80230348: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023034C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80230350: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80230354: jal         0x8004D5D4
    // 0x80230358: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80230358: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8023035C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230360: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80230364: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230368: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8023036C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80230370: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230374: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230378: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023037C: addiu       $v0, $v0, 0x5C50
    ctx->r2 = ADD32(ctx->r2, 0X5C50);
    // 0x80230380: jal         0x8003E934
    // 0x80230384: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80230384: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x80230388: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023038C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80230390: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230394: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80230398: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023039C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x802303A0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802303A4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802303A8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802303AC: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x802303B0: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x802303B4: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x802303B8: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802303BC: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x802303C0: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x802303C4: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x802303C8: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x802303CC: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x802303D0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802303D4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802303D8: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x802303DC: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x802303E0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802303E4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802303E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802303EC: j           L_802304D4
    // 0x802303F0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_802304D4;
    // 0x802303F0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_802303F4:
    // 0x802303F4: jal         0x80230680
    // 0x802303F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230680_ovl5(rdram, ctx);
        goto after_2;
    // 0x802303F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802303FC: beq         $v0, $zero, L_802304D8
    if (ctx->r2 == 0) {
        // 0x80230400: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802304D8;
    }
    // 0x80230400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230404: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230408: j           L_802304D0
    // 0x8023040C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802304D0;
    // 0x8023040C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230410:
    // 0x80230410: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230414: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80230418: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023041C: jal         0x8004F820
    // 0x80230420: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80230420: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x80230424: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230428: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023042C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230430: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230434: bne         $v0, $zero, L_802304D4
    if (ctx->r2 != 0) {
        // 0x80230438: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802304D4;
    }
    // 0x80230438: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023043C: jal         0x8003516C
    // 0x80230440: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_4;
    // 0x80230440: nop

    after_4:
    // 0x80230444: bne         $v0, $zero, L_802304D8
    if (ctx->r2 != 0) {
        // 0x80230448: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802304D8;
    }
    // 0x80230448: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023044C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230450: jal         0x800616FC
    // 0x80230454: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x80230454: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_5:
    // 0x80230458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023045C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80230460: jal         0x80050294
    // 0x80230464: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80230464: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80230468: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023046C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230470: j           L_802304D0
    // 0x80230474: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802304D0;
    // 0x80230474: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230478:
    // 0x80230478: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023047C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230480: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230484: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230488: bne         $v0, $zero, L_802304D8
    if (ctx->r2 != 0) {
        // 0x8023048C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802304D8;
    }
    // 0x8023048C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230490: jal         0x80034E3C
    // 0x80230494: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_7;
    // 0x80230494: nop

    after_7:
    // 0x80230498: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023049C: j           L_802304D0
    // 0x802304A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802304D0;
    // 0x802304A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802304A4:
    // 0x802304A4: jal         0x8003516C
    // 0x802304A8: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_8;
    // 0x802304A8: nop

    after_8:
    // 0x802304AC: bne         $v0, $zero, L_802304D8
    if (ctx->r2 != 0) {
        // 0x802304B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802304D8;
    }
    // 0x802304B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802304B4: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x802304B8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802304BC: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x802304C0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802304C4: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x802304C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802304CC: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_802304D0:
    // 0x802304D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802304D4:
    // 0x802304D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802304D8:
    // 0x802304D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802304DC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802304E0: jal         0x80047284
    // 0x802304E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x802304E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x802304E8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802304EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802304F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802304F4: jr          $ra
    // 0x802304F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802304F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C578_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C578: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C57C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C580: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C584: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C588: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C58C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C590: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C594: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022C598: beq         $v1, $v0, L_8022C610
    if (ctx->r3 == ctx->r2) {
        // 0x8022C59C: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022C610;
    }
    // 0x8022C59C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022C5A0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C5A4: beql        $v0, $zero, L_8022C5BC
    if (ctx->r2 == 0) {
        // 0x8022C5A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C5BC;
    }
    goto skip_0;
    // 0x8022C5A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C5AC: beq         $v1, $zero, L_8022C5D4
    if (ctx->r3 == 0) {
        // 0x8022C5B0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022C5D4;
    }
    // 0x8022C5B0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022C5B4: j           L_8022C724
    // 0x8022C5B8: nop

        goto L_8022C724;
    // 0x8022C5B8: nop

L_8022C5BC:
    // 0x8022C5BC: beq         $v1, $v0, L_8022C670
    if (ctx->r3 == ctx->r2) {
        // 0x8022C5C0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C670;
    }
    // 0x8022C5C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C5C4: beq         $v1, $v0, L_8022C6FC
    if (ctx->r3 == ctx->r2) {
        // 0x8022C5C8: nop
    
            goto L_8022C6FC;
    }
    // 0x8022C5C8: nop

    // 0x8022C5CC: j           L_8022C724
    // 0x8022C5D0: nop

        goto L_8022C724;
    // 0x8022C5D0: nop

L_8022C5D4:
    // 0x8022C5D4: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C5D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C5DC: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x8022C5E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C5E4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022C5E8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C5EC: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x8022C5F0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022C5F4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022C5F8: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022C5FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C600: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022C604: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x8022C608: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022C60C: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
L_8022C610:
    // 0x8022C610: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C614: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C618: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C61C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C620: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C624: bltz        $v0, L_8022C654
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C628: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_8022C654;
    }
    // 0x8022C628: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022C62C: beq         $v0, $zero, L_8022C724
    if (ctx->r2 == 0) {
        // 0x8022C630: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C724;
    }
    // 0x8022C630: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C634: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022C638: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022C63C: jal         0x8004DA90
    // 0x8022C640: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022C640: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022C644: jal         0x80040F30
    // 0x8022C648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022C648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022C64C: j           L_8022C724
    // 0x8022C650: nop

        goto L_8022C724;
    // 0x8022C650: nop

L_8022C654:
    // 0x8022C654: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022C658: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C65C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C660: addiu       $v1, $zero, 0x22
    ctx->r3 = ADD32(0, 0X22);
    // 0x8022C664: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022C668: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C66C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C670:
    // 0x8022C670: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C678: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C67C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C680: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022C684: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C688: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022C68C: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022C690: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022C694: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022C698: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022C69C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022C6A0: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022C6A4: jal         0x8004DA90
    // 0x8022C6A8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022C6A8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x8022C6AC: jal         0x80040F30
    // 0x8022C6B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022C6B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C6B4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C6B8: beq         $v1, $zero, L_8022C724
    if (ctx->r3 == 0) {
        // 0x8022C6BC: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_8022C724;
    }
    // 0x8022C6BC: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022C6C0: bnel        $v0, $zero, L_8022C6C8
    if (ctx->r2 != 0) {
        // 0x8022C6C4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022C6C8;
    }
    goto skip_1;
    // 0x8022C6C4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_8022C6C8:
    // 0x8022C6C8: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022C6CC: beq         $v0, $zero, L_8022C724
    if (ctx->r2 == 0) {
        // 0x8022C6D0: nop
    
            goto L_8022C724;
    }
    // 0x8022C6D0: nop

    // 0x8022C6D4: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022C6D8: bgtz        $v0, L_8022C724
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C6DC: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_8022C724;
    }
    // 0x8022C6DC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022C6E0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C6E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C6E8: addiu       $v1, $zero, 0x23
    ctx->r3 = ADD32(0, 0X23);
    // 0x8022C6EC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022C6F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C6F4: j           L_8022C724
    // 0x8022C6F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022C724;
    // 0x8022C6F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C6FC:
    // 0x8022C6FC: lhu         $v0, 0x34C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34C);
    // 0x8022C700: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C704: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022C708: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C70C: bgez        $v0, L_8022C724
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C710: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8022C724;
    }
    // 0x8022C710: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022C714: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C718: sb          $v1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r3;
    // 0x8022C71C: ori         $v0, $v0, 0x109
    ctx->r2 = ctx->r2 | 0X109;
    // 0x8022C720: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022C724:
    // 0x8022C724: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C728: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C72C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C730: jr          $ra
    // 0x8022C734: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C734: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023C120_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C120: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023C124: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C128: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023C12C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023C130: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8023C134: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8023C138: addiu       $a0, $a0, -0x3C18
    ctx->r4 = ADD32(ctx->r4, -0X3C18);
    // 0x8023C13C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023C140: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023C144: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8023C148: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8023C14C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023C150: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023C154: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023C158: beq         $v1, $v0, L_8023C1D0
    if (ctx->r3 == ctx->r2) {
        // 0x8023C15C: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_8023C1D0;
    }
    // 0x8023C15C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023C160: slti        $v0, $v1, 0x7
    ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x8023C164: beq         $v0, $zero, L_8023C17C
    if (ctx->r2 == 0) {
        // 0x8023C168: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023C17C;
    }
    // 0x8023C168: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023C16C: beq         $v1, $v0, L_8023C198
    if (ctx->r3 == ctx->r2) {
        // 0x8023C170: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8023C198;
    }
    // 0x8023C170: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023C174: j           L_8023C21C
    // 0x8023C178: nop

        goto L_8023C21C;
    // 0x8023C178: nop

L_8023C17C:
    // 0x8023C17C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023C180: beq         $v1, $v0, L_8023C204
    if (ctx->r3 == ctx->r2) {
        // 0x8023C184: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_8023C204;
    }
    // 0x8023C184: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8023C188: beq         $v1, $v0, L_8023C21C
    if (ctx->r3 == ctx->r2) {
        // 0x8023C18C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8023C21C;
    }
    // 0x8023C18C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023C190: j           L_8023C21C
    // 0x8023C194: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_8023C21C;
    // 0x8023C194: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8023C198:
    // 0x8023C198: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023C19C: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x8023C1A0: bne         $v1, $zero, L_8023C1B0
    if (ctx->r3 != 0) {
        // 0x8023C1A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023C1B0;
    }
    // 0x8023C1A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C1A8: j           L_8023C220
    // 0x8023C1AC: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
        goto L_8023C220;
    // 0x8023C1AC: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
L_8023C1B0:
    // 0x8023C1B0: bne         $v1, $v0, L_8023C1C0
    if (ctx->r3 != ctx->r2) {
        // 0x8023C1B4: slti        $v0, $v1, 0x8
        ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
            goto L_8023C1C0;
    }
    // 0x8023C1B4: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x8023C1B8: j           L_8023C21C
    // 0x8023C1BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023C21C;
    // 0x8023C1BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023C1C0:
    // 0x8023C1C0: bne         $v0, $zero, L_8023C21C
    if (ctx->r2 != 0) {
        // 0x8023C1C4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023C21C;
    }
    // 0x8023C1C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023C1C8: j           L_8023C21C
    // 0x8023C1CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8023C21C;
    // 0x8023C1CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8023C1D0:
    // 0x8023C1D0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023C1D4: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x8023C1D8: bne         $v1, $zero, L_8023C1E8
    if (ctx->r3 != 0) {
        // 0x8023C1DC: slti        $v0, $v1, 0x6
        ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_8023C1E8;
    }
    // 0x8023C1DC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8023C1E0: j           L_8023C21C
    // 0x8023C1E4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8023C21C;
    // 0x8023C1E4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8023C1E8:
    // 0x8023C1E8: bne         $v0, $zero, L_8023C21C
    if (ctx->r2 != 0) {
        // 0x8023C1EC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023C21C;
    }
    // 0x8023C1EC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023C1F0: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x8023C1F4: bne         $v0, $zero, L_8023C21C
    if (ctx->r2 != 0) {
        // 0x8023C1F8: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8023C21C;
    }
    // 0x8023C1F8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023C1FC: j           L_8023C21C
    // 0x8023C200: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8023C21C;
    // 0x8023C200: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8023C204:
    // 0x8023C204: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023C208: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x8023C20C: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8023C210: bne         $v0, $zero, L_8023C21C
    if (ctx->r2 != 0) {
        // 0x8023C214: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8023C21C;
    }
    // 0x8023C214: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023C218: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8023C21C:
    // 0x8023C21C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_8023C220:
    // 0x8023C220: lb          $v0, 0x51($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X51);
    // 0x8023C224: beq         $v0, $zero, L_8023C230
    if (ctx->r2 == 0) {
        // 0x8023C228: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8023C230;
    }
    // 0x8023C228: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023C22C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_8023C230:
    // 0x8023C230: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023C234: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023C238: bne         $v1, $v0, L_8023C250
    if (ctx->r3 != ctx->r2) {
        // 0x8023C23C: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_8023C250;
    }
    // 0x8023C23C: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8023C240: jal         0x8004F684
    // 0x8023C244: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8023C244: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023C248: j           L_8023C314
    // 0x8023C24C: nop

        goto L_8023C314;
    // 0x8023C24C: nop

L_8023C250:
    // 0x8023C250: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C254: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C258: lh          $v0, 0x65C0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X65C0);
    // 0x8023C25C: blez        $v0, L_8023C308
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023C260: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8023C308;
    }
    // 0x8023C260: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023C264: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
    // 0x8023C268: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x8023C26C: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x8023C270: addiu       $s4, $s4, -0x2100
    ctx->r20 = ADD32(ctx->r20, -0X2100);
    // 0x8023C274: lui         $s2, 0xEA0
    ctx->r18 = S32(0XEA0 << 16);
    // 0x8023C278: ori         $s2, $s2, 0xEA0F
    ctx->r18 = ctx->r18 | 0XEA0F;
    // 0x8023C27C: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8023C280: addiu       $s3, $s3, 0x7560
    ctx->r19 = ADD32(ctx->r19, 0X7560);
L_8023C284:
    // 0x8023C284: jal         0x8004EFE4
    // 0x8023C288: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x8023C288: nop

    after_1:
    // 0x8023C28C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8023C290: beq         $a1, $zero, L_8023C2D8
    if (ctx->r5 == 0) {
        // 0x8023C294: subu        $v0, $a1, $s4
        ctx->r2 = SUB32(ctx->r5, ctx->r20);
            goto L_8023C2D8;
    }
    // 0x8023C294: subu        $v0, $a1, $s4
    ctx->r2 = SUB32(ctx->r5, ctx->r20);
    // 0x8023C298: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8023C29C: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023C2A0: sb          $s6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r22;
    // 0x8023C2A4: sb          $s5, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r21;
    // 0x8023C2A8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023C2AC: sb          $s1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r17;
    // 0x8023C2B0: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8023C2B4: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8023C2B8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C2BC: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x8023C2C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023C2C4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8023C2C8: mfhi        $a2
    ctx->r6 = hi;
    // 0x8023C2CC: srl         $v1, $a2, 1
    ctx->r3 = S32(U32(ctx->r6) >> 1);
    // 0x8023C2D0: sb          $v1, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r3;
    // 0x8023C2D4: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_8023C2D8:
    // 0x8023C2D8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023C2DC: addiu       $v1, $s1, 0x1
    ctx->r3 = ADD32(ctx->r17, 0X1);
    // 0x8023C2E0: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x8023C2E4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023C2E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C2EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C2F0: lh          $v0, 0x65C0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X65C0);
    // 0x8023C2F4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023C2F8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023C2FC: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023C300: bne         $v1, $zero, L_8023C284
    if (ctx->r3 != 0) {
        // 0x8023C304: nop
    
            goto L_8023C284;
    }
    // 0x8023C304: nop

L_8023C308:
    // 0x8023C308: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023C30C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C310: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023C314:
    // 0x8023C314: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023C318: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8023C31C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8023C320: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023C324: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023C328: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023C32C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023C330: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C334: jr          $ra
    // 0x8023C338: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023C338: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022E5D8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E5D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E5DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E5E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E5E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E5E8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E5EC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E5F0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022E5F4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E5F8: jal         0x8022F588
    // 0x8022E5FC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8022F588_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022E5FC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022E600: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E608: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022E60C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E610: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E618: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E61C: jr          $ra
    // 0x8022E620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023DE84_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DE84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023DE88: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023DE8C: jal         0x8023E010
    // 0x8023DE90: nop

    func_8023E010_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023DE90: nop

    after_0:
    // 0x8023DE94: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023DE98: jr          $ra
    // 0x8023DE9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023DE9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802418EC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802418EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802418F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802418F4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802418F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802418FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80241900: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80241904: sltiu       $v0, $v1, 0x30
    ctx->r2 = ctx->r3 < 0X30 ? 1 : 0;
    // 0x80241908: beq         $v0, $zero, L_802419E4
    if (ctx->r2 == 0) {
        // 0x8024190C: andi        $v0, $v1, 0xF
        ctx->r2 = ctx->r3 & 0XF;
            goto L_802419E4;
    }
    // 0x8024190C: andi        $v0, $v1, 0xF
    ctx->r2 = ctx->r3 & 0XF;
    // 0x80241910: bne         $v0, $zero, L_802419C8
    if (ctx->r2 != 0) {
        // 0x80241914: nop
    
            goto L_802419C8;
    }
    // 0x80241914: nop

    // 0x80241918: jal         0x8004F144
    // 0x8024191C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8024191C: nop

    after_0:
    // 0x80241920: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80241924: beq         $s0, $zero, L_802419C8
    if (ctx->r16 == 0) {
        // 0x80241928: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802419C8;
    }
    // 0x80241928: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024192C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80241930: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80241934: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80241938: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8024193C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80241940: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80241944: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241948: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8024194C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80241950: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80241954: jal         0x800A3450
    // 0x80241958: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80241958: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x8024195C: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80241960: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80241964: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241968: jal         0x800A3450
    // 0x8024196C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024196C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80241970: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80241974: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80241978: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024197C: jal         0x800A3450
    // 0x80241980: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80241980: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x80241984: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x80241988: ori         $a1, $a1, 0x4E
    ctx->r5 = ctx->r5 | 0X4E;
    // 0x8024198C: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x80241990: lui         $v1, 0x2E40
    ctx->r3 = S32(0X2E40 << 16);
    // 0x80241994: ori         $v1, $v1, 0x4040
    ctx->r3 = ctx->r3 | 0X4040;
    // 0x80241998: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x8024199C: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x802419A0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802419A4: sw          $a1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r5;
    // 0x802419A8: sb          $v1, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r3;
    // 0x802419AC: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x802419B0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802419B4: jal         0x800A3450
    // 0x802419B8: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x802419B8: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    after_4:
    // 0x802419BC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802419C0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x802419C4: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_802419C8:
    // 0x802419C8: jal         0x800A3450
    // 0x802419CC: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x802419CC: nop

    after_5:
    // 0x802419D0: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802419D4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802419D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802419DC: j           L_802419EC
    // 0x802419E0: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_802419EC;
    // 0x802419E0: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_802419E4:
    // 0x802419E4: jal         0x8004F5C4
    // 0x802419E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_6;
    // 0x802419E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_802419EC:
    // 0x802419EC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802419F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802419F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802419F8: jr          $ra
    // 0x802419FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802419FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227AF0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227AF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227AF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227AF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227AFC: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x80227B00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227B04: jal         0x8004CB2C
    // 0x80227B08: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80227B08: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80227B0C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227B10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227B14: jal         0x8005F6B4
    // 0x80227B18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x80227B18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80227B1C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80227B20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227B24: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227B28: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227B2C: lw          $v0, 0x433C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X433C);
    // 0x80227B30: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80227B34: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80227B38: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80227B3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227B40: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227B44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227B48: lw          $v0, 0x4350($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4350);
    // 0x80227B4C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80227B50: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80227B54: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80227B58: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x80227B5C: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x80227B60: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227B64: lbu         $a1, 0x4A6D($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4A6D);
    // 0x80227B68: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80227B6C: addiu       $a0, $a0, 0x3F1C
    ctx->r4 = ADD32(ctx->r4, 0X3F1C);
    // 0x80227B70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227B74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227B78: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80227B7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227B80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227B84: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80227B88: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227B8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227B90: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80227B94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227B98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227B9C: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80227BA0: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x80227BA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227BA8: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80227BAC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80227BB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227BB4: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80227BB8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227BBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227BC0: sh          $zero, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = 0;
    // 0x80227BC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227BC8: sw          $zero, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = 0;
    // 0x80227BCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227BD0: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80227BD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227BD8: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80227BDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227BE0: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80227BE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227BE8: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x80227BEC: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80227BF0: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80227BF4: sb          $v1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r3;
    // 0x80227BF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227BFC: jal         0x8005FA7C
    // 0x80227C00: sb          $a1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r5;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80227C00: sb          $a1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r5;
    after_2:
    // 0x80227C04: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x80227C08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227C0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80227C10: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80227C14: jal         0x800739B0
    // 0x80227C18: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_800739B0_4EDB0(rdram, ctx);
        goto after_3;
    // 0x80227C18: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_3:
    // 0x80227C1C: jal         0x80227450
    // 0x80227C20: addiu       $a0, $zero, 0x160
    ctx->r4 = ADD32(0, 0X160);
    func_80227450_ovl5(rdram, ctx);
        goto after_4;
    // 0x80227C20: addiu       $a0, $zero, 0x160
    ctx->r4 = ADD32(0, 0X160);
    after_4:
    // 0x80227C24: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80227C28: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80227C2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C30: jal         0x8005FB90
    // 0x80227C34: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_8005FB90_3AF90(rdram, ctx);
        goto after_5;
    // 0x80227C34: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_5:
    // 0x80227C38: jal         0x80060018
    // 0x80227C3C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_6;
    // 0x80227C3C: nop

    after_6:
    // 0x80227C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227C44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227C48: jr          $ra
    // 0x80227C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233264_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233264: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80233268: lh          $v0, 0x330($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X330);
    // 0x8023326C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80233270: sb          $zero, 0xAC($a1)
    MEM_B(0XAC, ctx->r5) = 0;
    // 0x80233274: beq         $v0, $zero, L_802332A4
    if (ctx->r2 == 0) {
        // 0x80233278: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_802332A4;
    }
    // 0x80233278: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8023327C: lb          $a0, 0x365($a1)
    ctx->r4 = MEM_B(ctx->r5, 0X365);
    // 0x80233280: lhu         $v1, 0x56($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X56);
    // 0x80233284: addiu       $v0, $a2, -0x1
    ctx->r2 = ADD32(ctx->r6, -0X1);
    // 0x80233288: sh          $v0, 0x330($a1)
    MEM_H(0X330, ctx->r5) = ctx->r2;
    // 0x8023328C: sh          $zero, 0x44($a1)
    MEM_H(0X44, ctx->r5) = 0;
    // 0x80233290: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x80233294: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80233298: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023329C: j           L_802332B0
    // 0x802332A0: sh          $v1, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r3;
        goto L_802332B0;
    // 0x802332A0: sh          $v1, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r3;
L_802332A4:
    // 0x802332A4: lhu         $v0, 0x32C($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X32C);
    // 0x802332A8: ori         $v0, $v0, 0x41
    ctx->r2 = ctx->r2 | 0X41;
    // 0x802332AC: sh          $v0, 0x32C($a1)
    MEM_H(0X32C, ctx->r5) = ctx->r2;
L_802332B0:
    // 0x802332B0: jr          $ra
    // 0x802332B4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802332B4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80227A90_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227A94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227A98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227A9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227AA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227AA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227AA8: jal         0x80036B00
    // 0x80227AAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x80227AAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227AB0: jal         0x80054578
    // 0x80227AB4: nop

    func_80054578_2F978(rdram, ctx);
        goto after_1;
    // 0x80227AB4: nop

    after_1:
    // 0x80227AB8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80227ABC: jal         0x80070050
    // 0x80227AC0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_2;
    // 0x80227AC0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_2:
    // 0x80227AC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227AC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227ACC: jal         0x80034844
    // 0x80227AD0: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_3;
    // 0x80227AD0: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_3:
    // 0x80227AD4: jal         0x80060590
    // 0x80227AD8: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    func_80060590_3B990(rdram, ctx);
        goto after_4;
    // 0x80227AD8: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    after_4:
    // 0x80227ADC: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80227AE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227AE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227AE8: jr          $ra
    // 0x80227AEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227AEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B430_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B434: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B438: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023B43C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B440: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B444: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B448: lw          $v0, 0x6490($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6490);
    // 0x8023B44C: jalr        $v0
    // 0x8023B450: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023B450: nop

    after_0:
    // 0x8023B454: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B458: jr          $ra
    // 0x8023B45C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B45C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802378AC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802378AC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802378B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802378B4: jr          $ra
    // 0x802378B8: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802378B8: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80227450_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227450: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80227454: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80227458: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x8022745C: andi        $v0, $s6, 0x2
    ctx->r2 = ctx->r22 & 0X2;
    // 0x80227460: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80227464: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80227468: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022746C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80227470: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227474: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227478: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022747C: beq         $v0, $zero, L_802274E8
    if (ctx->r2 == 0) {
        // 0x80227480: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802274E8;
    }
    // 0x80227480: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227484: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80227488: addiu       $s1, $s1, -0x420
    ctx->r17 = ADD32(ctx->r17, -0X420);
    // 0x8022748C: lui         $s4, 0x801E
    ctx->r20 = S32(0X801E << 16);
    // 0x80227490: lw          $s4, -0x714C($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X714C);
    // 0x80227494: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80227498: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022749C: addiu       $s3, $s3, 0x4378
    ctx->r19 = ADD32(ctx->r19, 0X4378);
    // 0x802274A0: addiu       $s0, $s1, 0x3C0
    ctx->r16 = ADD32(ctx->r17, 0X3C0);
L_802274A4:
    // 0x802274A4: sllv        $v0, $s4, $s2
    ctx->r2 = S32(ctx->r20 << (ctx->r18 & 31));
    // 0x802274A8: bgezl       $v0, L_802274D8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802274AC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802274D8;
    }
    goto skip_0;
    // 0x802274AC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x802274B0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802274B4: beql        $v0, $zero, L_802274D8
    if (ctx->r2 == 0) {
        // 0x802274B8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802274D8;
    }
    goto skip_1;
    // 0x802274B8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x802274BC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x802274C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802274C4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x802274C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802274CC: jalr        $v0
    // 0x802274D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802274D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x802274D4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_802274D8:
    // 0x802274D8: addiu       $s0, $s0, 0x3C8
    ctx->r16 = ADD32(ctx->r16, 0X3C8);
    // 0x802274DC: slti        $v0, $s2, 0x12
    ctx->r2 = SIGNED(ctx->r18) < 0X12 ? 1 : 0;
    // 0x802274E0: bne         $v0, $zero, L_802274A4
    if (ctx->r2 != 0) {
        // 0x802274E4: addiu       $s1, $s1, 0x3C8
        ctx->r17 = ADD32(ctx->r17, 0X3C8);
            goto L_802274A4;
    }
    // 0x802274E4: addiu       $s1, $s1, 0x3C8
    ctx->r17 = ADD32(ctx->r17, 0X3C8);
L_802274E8:
    // 0x802274E8: andi        $v0, $s6, 0x4
    ctx->r2 = ctx->r22 & 0X4;
    // 0x802274EC: beq         $v0, $zero, L_8022755C
    if (ctx->r2 == 0) {
        // 0x802274F0: andi        $v0, $s6, 0x8
        ctx->r2 = ctx->r22 & 0X8;
            goto L_8022755C;
    }
    // 0x802274F0: andi        $v0, $s6, 0x8
    ctx->r2 = ctx->r22 & 0X8;
    // 0x802274F4: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x802274F8: addiu       $s1, $s1, -0x5F40
    ctx->r17 = ADD32(ctx->r17, -0X5F40);
    // 0x802274FC: lui         $s4, 0x801E
    ctx->r20 = S32(0X801E << 16);
    // 0x80227500: lw          $s4, -0x7798($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X7798);
    // 0x80227504: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80227508: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022750C: addiu       $s3, $s3, 0x4378
    ctx->r19 = ADD32(ctx->r19, 0X4378);
    // 0x80227510: addiu       $s0, $s1, 0x5A4
    ctx->r16 = ADD32(ctx->r17, 0X5A4);
L_80227514:
    // 0x80227514: sllv        $v0, $s4, $s2
    ctx->r2 = S32(ctx->r20 << (ctx->r18 & 31));
    // 0x80227518: bgezl       $v0, L_80227548
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022751C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80227548;
    }
    goto skip_2;
    // 0x8022751C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x80227520: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80227524: beql        $v0, $zero, L_80227548
    if (ctx->r2 == 0) {
        // 0x80227528: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80227548;
    }
    goto skip_3;
    // 0x80227528: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_3:
    // 0x8022752C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80227530: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227534: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80227538: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022753C: jalr        $v0
    // 0x80227540: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80227540: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80227544: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80227548:
    // 0x80227548: addiu       $s0, $s0, 0x5AC
    ctx->r16 = ADD32(ctx->r16, 0X5AC);
    // 0x8022754C: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x80227550: bne         $v0, $zero, L_80227514
    if (ctx->r2 != 0) {
        // 0x80227554: addiu       $s1, $s1, 0x5AC
        ctx->r17 = ADD32(ctx->r17, 0X5AC);
            goto L_80227514;
    }
    // 0x80227554: addiu       $s1, $s1, 0x5AC
    ctx->r17 = ADD32(ctx->r17, 0X5AC);
    // 0x80227558: andi        $v0, $s6, 0x8
    ctx->r2 = ctx->r22 & 0X8;
L_8022755C:
    // 0x8022755C: beq         $v0, $zero, L_802275CC
    if (ctx->r2 == 0) {
        // 0x80227560: andi        $v0, $s6, 0x10
        ctx->r2 = ctx->r22 & 0X10;
            goto L_802275CC;
    }
    // 0x80227560: andi        $v0, $s6, 0x10
    ctx->r2 = ctx->r22 & 0X10;
    // 0x80227564: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80227568: addiu       $s1, $s1, 0x59A0
    ctx->r17 = ADD32(ctx->r17, 0X59A0);
    // 0x8022756C: lui         $s4, 0x801C
    ctx->r20 = S32(0X801C << 16);
    // 0x80227570: lw          $s4, -0x3FB0($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X3FB0);
    // 0x80227574: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80227578: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022757C: addiu       $s3, $s3, 0x4378
    ctx->r19 = ADD32(ctx->r19, 0X4378);
    // 0x80227580: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
L_80227584:
    // 0x80227584: sllv        $v0, $s4, $s2
    ctx->r2 = S32(ctx->r20 << (ctx->r18 & 31));
    // 0x80227588: bgezl       $v0, L_802275B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022758C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802275B8;
    }
    goto skip_4;
    // 0x8022758C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_4:
    // 0x80227590: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80227594: beql        $v0, $zero, L_802275B8
    if (ctx->r2 == 0) {
        // 0x80227598: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802275B8;
    }
    goto skip_5;
    // 0x80227598: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_5:
    // 0x8022759C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x802275A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802275A4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x802275A8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802275AC: jalr        $v0
    // 0x802275B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x802275B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x802275B4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_802275B8:
    // 0x802275B8: addiu       $s0, $s0, 0x118
    ctx->r16 = ADD32(ctx->r16, 0X118);
    // 0x802275BC: slti        $v0, $s2, 0x10
    ctx->r2 = SIGNED(ctx->r18) < 0X10 ? 1 : 0;
    // 0x802275C0: bne         $v0, $zero, L_80227584
    if (ctx->r2 != 0) {
        // 0x802275C4: addiu       $s1, $s1, 0x118
        ctx->r17 = ADD32(ctx->r17, 0X118);
            goto L_80227584;
    }
    // 0x802275C4: addiu       $s1, $s1, 0x118
    ctx->r17 = ADD32(ctx->r17, 0X118);
    // 0x802275C8: andi        $v0, $s6, 0x10
    ctx->r2 = ctx->r22 & 0X10;
L_802275CC:
    // 0x802275CC: beq         $v0, $zero, L_8022764C
    if (ctx->r2 == 0) {
        // 0x802275D0: andi        $v0, $s6, 0x20
        ctx->r2 = ctx->r22 & 0X20;
            goto L_8022764C;
    }
    // 0x802275D0: andi        $v0, $s6, 0x20
    ctx->r2 = ctx->r22 & 0X20;
    // 0x802275D4: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x802275D8: addiu       $s1, $s1, -0x2100
    ctx->r17 = ADD32(ctx->r17, -0X2100);
    // 0x802275DC: lui         $s4, 0x801E
    ctx->r20 = S32(0X801E << 16);
    // 0x802275E0: lw          $s4, -0x781C($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X781C);
    // 0x802275E4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x802275E8: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x802275EC: addiu       $s3, $s3, 0x4378
    ctx->r19 = ADD32(ctx->r19, 0X4378);
    // 0x802275F0: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
L_802275F4:
    // 0x802275F4: sllv        $v0, $s4, $s2
    ctx->r2 = S32(ctx->r20 << (ctx->r18 & 31));
    // 0x802275F8: bltz        $v0, L_80227610
    if (SIGNED(ctx->r2) < 0) {
        // 0x802275FC: nop
    
            goto L_80227610;
    }
    // 0x802275FC: nop

    // 0x80227600: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80227604: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80227608: beql        $v0, $zero, L_80227638
    if (ctx->r2 == 0) {
        // 0x8022760C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80227638;
    }
    goto skip_6;
    // 0x8022760C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_6:
L_80227610:
    // 0x80227610: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80227614: beql        $v0, $zero, L_80227638
    if (ctx->r2 == 0) {
        // 0x80227618: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80227638;
    }
    goto skip_7;
    // 0x80227618: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_7:
    // 0x8022761C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80227620: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227624: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80227628: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022762C: jalr        $v0
    // 0x80227630: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80227630: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80227634: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80227638:
    // 0x80227638: addiu       $s0, $s0, 0x118
    ctx->r16 = ADD32(ctx->r16, 0X118);
    // 0x8022763C: slti        $v0, $s2, 0x20
    ctx->r2 = SIGNED(ctx->r18) < 0X20 ? 1 : 0;
    // 0x80227640: bne         $v0, $zero, L_802275F4
    if (ctx->r2 != 0) {
        // 0x80227644: addiu       $s1, $s1, 0x118
        ctx->r17 = ADD32(ctx->r17, 0X118);
            goto L_802275F4;
    }
    // 0x80227644: addiu       $s1, $s1, 0x118
    ctx->r17 = ADD32(ctx->r17, 0X118);
    // 0x80227648: andi        $v0, $s6, 0x20
    ctx->r2 = ctx->r22 & 0X20;
L_8022764C:
    // 0x8022764C: beq         $v0, $zero, L_802276E4
    if (ctx->r2 == 0) {
        // 0x80227650: andi        $v0, $s6, 0x40
        ctx->r2 = ctx->r22 & 0X40;
            goto L_802276E4;
    }
    // 0x80227650: andi        $v0, $s6, 0x40
    ctx->r2 = ctx->r22 & 0X40;
    // 0x80227654: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x80227658: addiu       $s3, $s3, -0x2290
    ctx->r19 = ADD32(ctx->r19, -0X2290);
    // 0x8022765C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80227660: lui         $s7, 0x8024
    ctx->r23 = S32(0X8024 << 16);
    // 0x80227664: addiu       $s7, $s7, 0x4378
    ctx->r23 = ADD32(ctx->r23, 0X4378);
    // 0x80227668: lui         $s5, 0x801C
    ctx->r21 = S32(0X801C << 16);
    // 0x8022766C: addiu       $s5, $s5, -0x3F64
    ctx->r21 = ADD32(ctx->r21, -0X3F64);
L_80227670:
    // 0x80227670: lw          $s4, 0x0($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X0);
    // 0x80227674: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80227678: addiu       $s0, $s3, 0x4C
    ctx->r16 = ADD32(ctx->r19, 0X4C);
L_8022767C:
    // 0x8022767C: sllv        $v0, $s4, $s1
    ctx->r2 = S32(ctx->r20 << (ctx->r17 & 31));
    // 0x80227680: bgezl       $v0, L_802276C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227684: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802276C0;
    }
    goto skip_8;
    // 0x80227684: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_8:
    // 0x80227688: lbu         $v0, -0x4A($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X4A);
    // 0x8022768C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x80227690: bnel        $v0, $zero, L_802276C0
    if (ctx->r2 != 0) {
        // 0x80227694: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802276C0;
    }
    goto skip_9;
    // 0x80227694: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_9:
    // 0x80227698: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022769C: beql        $v0, $zero, L_802276C0
    if (ctx->r2 == 0) {
        // 0x802276A0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802276C0;
    }
    goto skip_10;
    // 0x802276A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_10:
    // 0x802276A4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x802276A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802276AC: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x802276B0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802276B4: jalr        $v0
    // 0x802276B8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x802276B8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
    // 0x802276BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802276C0:
    // 0x802276C0: addiu       $s0, $s0, 0x58
    ctx->r16 = ADD32(ctx->r16, 0X58);
    // 0x802276C4: slti        $v0, $s1, 0x20
    ctx->r2 = SIGNED(ctx->r17) < 0X20 ? 1 : 0;
    // 0x802276C8: bne         $v0, $zero, L_8022767C
    if (ctx->r2 != 0) {
        // 0x802276CC: addiu       $s3, $s3, 0x58
        ctx->r19 = ADD32(ctx->r19, 0X58);
            goto L_8022767C;
    }
    // 0x802276CC: addiu       $s3, $s3, 0x58
    ctx->r19 = ADD32(ctx->r19, 0X58);
    // 0x802276D0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x802276D4: slti        $v0, $s2, 0x2
    ctx->r2 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x802276D8: bne         $v0, $zero, L_80227670
    if (ctx->r2 != 0) {
        // 0x802276DC: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_80227670;
    }
    // 0x802276DC: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x802276E0: andi        $v0, $s6, 0x40
    ctx->r2 = ctx->r22 & 0X40;
L_802276E4:
    // 0x802276E4: beq         $v0, $zero, L_8022777C
    if (ctx->r2 == 0) {
        // 0x802276E8: andi        $v0, $s6, 0x100
        ctx->r2 = ctx->r22 & 0X100;
            goto L_8022777C;
    }
    // 0x802276E8: andi        $v0, $s6, 0x100
    ctx->r2 = ctx->r22 & 0X100;
    // 0x802276EC: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x802276F0: addiu       $s3, $s3, -0x2290
    ctx->r19 = ADD32(ctx->r19, -0X2290);
    // 0x802276F4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x802276F8: lui         $s7, 0x8024
    ctx->r23 = S32(0X8024 << 16);
    // 0x802276FC: addiu       $s7, $s7, 0x4378
    ctx->r23 = ADD32(ctx->r23, 0X4378);
    // 0x80227700: lui         $s5, 0x801C
    ctx->r21 = S32(0X801C << 16);
    // 0x80227704: addiu       $s5, $s5, -0x3F64
    ctx->r21 = ADD32(ctx->r21, -0X3F64);
L_80227708:
    // 0x80227708: lw          $s4, 0x0($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X0);
    // 0x8022770C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80227710: addiu       $s0, $s3, 0x4C
    ctx->r16 = ADD32(ctx->r19, 0X4C);
L_80227714:
    // 0x80227714: sllv        $v0, $s4, $s1
    ctx->r2 = S32(ctx->r20 << (ctx->r17 & 31));
    // 0x80227718: bgezl       $v0, L_80227758
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022771C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80227758;
    }
    goto skip_11;
    // 0x8022771C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_11:
    // 0x80227720: lbu         $v0, -0x4A($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X4A);
    // 0x80227724: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x80227728: beql        $v0, $zero, L_80227758
    if (ctx->r2 == 0) {
        // 0x8022772C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80227758;
    }
    goto skip_12;
    // 0x8022772C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_12:
    // 0x80227730: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80227734: beql        $v0, $zero, L_80227758
    if (ctx->r2 == 0) {
        // 0x80227738: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80227758;
    }
    goto skip_13;
    // 0x80227738: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_13:
    // 0x8022773C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80227740: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227744: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x80227748: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022774C: jalr        $v0
    // 0x80227750: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80227750: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_5:
    // 0x80227754: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80227758:
    // 0x80227758: addiu       $s0, $s0, 0x58
    ctx->r16 = ADD32(ctx->r16, 0X58);
    // 0x8022775C: slti        $v0, $s1, 0x20
    ctx->r2 = SIGNED(ctx->r17) < 0X20 ? 1 : 0;
    // 0x80227760: bne         $v0, $zero, L_80227714
    if (ctx->r2 != 0) {
        // 0x80227764: addiu       $s3, $s3, 0x58
        ctx->r19 = ADD32(ctx->r19, 0X58);
            goto L_80227714;
    }
    // 0x80227764: addiu       $s3, $s3, 0x58
    ctx->r19 = ADD32(ctx->r19, 0X58);
    // 0x80227768: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8022776C: slti        $v0, $s2, 0x2
    ctx->r2 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x80227770: bne         $v0, $zero, L_80227708
    if (ctx->r2 != 0) {
        // 0x80227774: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_80227708;
    }
    // 0x80227774: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x80227778: andi        $v0, $s6, 0x100
    ctx->r2 = ctx->r22 & 0X100;
L_8022777C:
    // 0x8022777C: beq         $v0, $zero, L_802277E4
    if (ctx->r2 == 0) {
        // 0x80227780: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_802277E4;
    }
    // 0x80227780: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80227784: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80227788: addiu       $s1, $s1, 0x6B70
    ctx->r17 = ADD32(ctx->r17, 0X6B70);
    // 0x8022778C: lui         $s4, 0x801E
    ctx->r20 = S32(0X801E << 16);
    // 0x80227790: lw          $s4, -0x72C8($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X72C8);
    // 0x80227794: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x80227798: addiu       $s3, $s3, 0x4378
    ctx->r19 = ADD32(ctx->r19, 0X4378);
    // 0x8022779C: addiu       $s0, $s1, 0x54
    ctx->r16 = ADD32(ctx->r17, 0X54);
L_802277A0:
    // 0x802277A0: sllv        $v0, $s4, $s2
    ctx->r2 = S32(ctx->r20 << (ctx->r18 & 31));
    // 0x802277A4: bgezl       $v0, L_802277D4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802277A8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802277D4;
    }
    goto skip_14;
    // 0x802277A8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_14:
    // 0x802277AC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802277B0: beql        $v0, $zero, L_802277D4
    if (ctx->r2 == 0) {
        // 0x802277B4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802277D4;
    }
    goto skip_15;
    // 0x802277B4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_15:
    // 0x802277B8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x802277BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802277C0: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x802277C4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802277C8: jalr        $v0
    // 0x802277CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x802277CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x802277D0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_802277D4:
    // 0x802277D4: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x802277D8: slti        $v0, $s2, 0x20
    ctx->r2 = SIGNED(ctx->r18) < 0X20 ? 1 : 0;
    // 0x802277DC: bne         $v0, $zero, L_802277A0
    if (ctx->r2 != 0) {
        // 0x802277E0: addiu       $s1, $s1, 0x5C
        ctx->r17 = ADD32(ctx->r17, 0X5C);
            goto L_802277A0;
    }
    // 0x802277E0: addiu       $s1, $s1, 0x5C
    ctx->r17 = ADD32(ctx->r17, 0X5C);
L_802277E4:
    // 0x802277E4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x802277E8: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x802277EC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x802277F0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802277F4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802277F8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802277FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227800: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227804: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227808: jr          $ra
    // 0x8022780C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022780C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80228AD4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228AD4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228AD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228ADC: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80228AE0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228AE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228AE8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80228AEC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228AF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228AF4: sb          $a0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r4;
    // 0x80228AF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228AFC: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80228B00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B04: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80228B08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B0C: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80228B10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B14: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80228B18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B1C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80228B20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B24: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80228B28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B2C: jr          $ra
    // 0x80228B30: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80228B30: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80228B34: nop

    // 0x80228B38: nop

    // 0x80228B3C: nop

;}
RECOMP_FUNC void func_80238A08_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238A08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238A0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238A10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238A14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80238A18: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80238A1C: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80238A20: jal         0x8004DA90
    // 0x80238A24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80238A24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80238A28: jal         0x8003E810
    // 0x80238A2C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_1;
    // 0x80238A2C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80238A30: beq         $v0, $zero, L_80238A48
    if (ctx->r2 == 0) {
        // 0x80238A34: nop
    
            goto L_80238A48;
    }
    // 0x80238A34: nop

    // 0x80238A38: jal         0x8004F418
    // 0x80238A3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x80238A3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80238A40: j           L_80238AD0
    // 0x80238A44: nop

        goto L_80238AD0;
    // 0x80238A44: nop

L_80238A48:
    // 0x80238A48: jal         0x8003E934
    // 0x80238A4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x80238A4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80238A50: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80238A54: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x80238A58: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80238A5C: lh          $a3, 0x16($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X16);
    // 0x80238A60: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80238A64: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238A68: addiu       $v0, $a0, -0x64
    ctx->r2 = ADD32(ctx->r4, -0X64);
    // 0x80238A6C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80238A70: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80238A74: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238A78: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80238A7C: lhu         $v1, 0x6130($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X6130);
    // 0x80238A80: slt         $v0, $v0, $a3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80238A84: beq         $v0, $zero, L_80238AA4
    if (ctx->r2 == 0) {
        // 0x80238A88: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_80238AA4;
    }
    // 0x80238A88: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x80238A8C: addiu       $v0, $v1, -0x64
    ctx->r2 = ADD32(ctx->r3, -0X64);
    // 0x80238A90: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80238A94: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80238A98: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x80238A9C: j           L_80238AD0
    // 0x80238AA0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80238AD0;
    // 0x80238AA0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80238AA4:
    // 0x80238AA4: addiu       $v0, $a0, -0x190
    ctx->r2 = ADD32(ctx->r4, -0X190);
    // 0x80238AA8: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80238AAC: beq         $v0, $zero, L_80238AC8
    if (ctx->r2 == 0) {
        // 0x80238AB0: addiu       $v0, $v1, -0x190
        ctx->r2 = ADD32(ctx->r3, -0X190);
            goto L_80238AC8;
    }
    // 0x80238AB0: addiu       $v0, $v1, -0x190
    ctx->r2 = ADD32(ctx->r3, -0X190);
    // 0x80238AB4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80238AB8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80238ABC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80238AC0: j           L_80238AD0
    // 0x80238AC4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80238AD0;
    // 0x80238AC4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80238AC8:
    // 0x80238AC8: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x80238ACC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
L_80238AD0:
    // 0x80238AD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80238AD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238AD8: jr          $ra
    // 0x80238ADC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238ADC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802289E8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802289E8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802289EC: bne         $v0, $zero, L_80228A04
    if (ctx->r2 != 0) {
        // 0x802289F0: addiu       $v1, $zero, 0xC
        ctx->r3 = ADD32(0, 0XC);
            goto L_80228A04;
    }
    // 0x802289F0: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x802289F4: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x802289F8: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802289FC: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80228A00: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_80228A04:
    // 0x80228A04: jr          $ra
    // 0x80228A08: nop

    TRACE_RETURN()
    return;
    // 0x80228A08: nop

;}
RECOMP_FUNC void func_8022F260_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F264: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F268: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022F26C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F270: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F274: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F278: lw          $v0, 0x5BE8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5BE8);
    // 0x8022F27C: jalr        $v0
    // 0x8022F280: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F280: nop

    after_0:
    // 0x8022F284: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F288: jr          $ra
    // 0x8022F28C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F28C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BBA0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BBA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BBA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BBA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BBAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BBB0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022BBB4: bne         $v0, $zero, L_8022BBD4
    if (ctx->r2 != 0) {
        // 0x8022BBB8: nop
    
            goto L_8022BBD4;
    }
    // 0x8022BBB8: nop

    // 0x8022BBBC: lbu         $a0, 0x6($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X6);
    // 0x8022BBC0: jal         0x80060590
    // 0x8022BBC4: addiu       $a0, $a0, 0x243
    ctx->r4 = ADD32(ctx->r4, 0X243);
    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x8022BBC4: addiu       $a0, $a0, 0x243
    ctx->r4 = ADD32(ctx->r4, 0X243);
    after_0:
    // 0x8022BBC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022BBCC: jal         0x800616FC
    // 0x8022BBD0: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022BBD0: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    after_1:
L_8022BBD4:
    // 0x8022BBD4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022BBD8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022BBDC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022BBE0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022BBE4: bne         $v0, $zero, L_8022BBFC
    if (ctx->r2 != 0) {
        // 0x8022BBE8: nop
    
            goto L_8022BBFC;
    }
    // 0x8022BBE8: nop

    // 0x8022BBEC: jal         0x80036E48
    // 0x8022BBF0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x8022BBF0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_2:
    // 0x8022BBF4: jal         0x800600F8
    // 0x8022BBF8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_3;
    // 0x8022BBF8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    after_3:
L_8022BBFC:
    // 0x8022BBFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BC00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BC04: jr          $ra
    // 0x8022BC08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BC08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231784_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231784: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231788: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023178C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231790: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231794: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231798: lh          $a0, 0x5E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X5E);
    // 0x8023179C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802317A0: jal         0x8004FA7C
    // 0x802317A4: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802317A4: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_0:
    // 0x802317A8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802317AC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802317B0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802317B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802317B8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802317BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802317C0: bne         $v0, $zero, L_80231814
    if (ctx->r2 != 0) {
        // 0x802317C4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80231814;
    }
    // 0x802317C4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802317C8: jal         0x8003516C
    // 0x802317CC: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x802317CC: nop

    after_1:
    // 0x802317D0: bne         $v0, $zero, L_80231814
    if (ctx->r2 != 0) {
        // 0x802317D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231814;
    }
    // 0x802317D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802317D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802317DC: jal         0x80050294
    // 0x802317E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x802317E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x802317E4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802317E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802317EC: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x802317F0: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802317F4: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x802317F8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802317FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231800: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80231804: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231808: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x8023180C: j           L_8023181C
    // 0x80231810: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8023181C;
    // 0x80231810: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80231814:
    // 0x80231814: jal         0x8005044C
    // 0x80231818: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80231818: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8023181C:
    // 0x8023181C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231820: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231824: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231828: jr          $ra
    // 0x8023182C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023182C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237310_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237314: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237318: jal         0x8004F418
    // 0x8023731C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8023731C: nop

    after_0:
    // 0x80237320: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237324: jr          $ra
    // 0x80237328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023732C: nop

;}
RECOMP_FUNC void func_8022863C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022863C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228640: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80228644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228648: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022864C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228650: bne         $v0, $zero, L_802286E4
    if (ctx->r2 != 0) {
        // 0x80228654: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802286E4;
    }
    // 0x80228654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228658: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8022865C: beq         $v1, $zero, L_80228674
    if (ctx->r3 == 0) {
        // 0x80228660: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228674;
    }
    // 0x80228660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228664: beq         $v1, $v0, L_802286CC
    if (ctx->r3 == ctx->r2) {
        // 0x80228668: nop
    
            goto L_802286CC;
    }
    // 0x80228668: nop

    // 0x8022866C: j           L_802286E4
    // 0x80228670: nop

        goto L_802286E4;
    // 0x80228670: nop

L_80228674:
    // 0x80228674: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228678: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022867C: jal         0x80036B00
    // 0x80228680: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x80228680: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228684: addiu       $a0, $zero, 0x7E
    ctx->r4 = ADD32(0, 0X7E);
    // 0x80228688: jal         0x8004CB2C
    // 0x8022868C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x8022868C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_1:
    // 0x80228690: jal         0x80054578
    // 0x80228694: nop

    func_80054578_2F978(rdram, ctx);
        goto after_2;
    // 0x80228694: nop

    after_2:
    // 0x80228698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022869C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802286A0: jal         0x80034844
    // 0x802286A4: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_3;
    // 0x802286A4: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_3:
    // 0x802286A8: jal         0x80228AD4
    // 0x802286AC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80228AD4_ovl5(rdram, ctx);
        goto after_4;
    // 0x802286AC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x802286B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802286B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802286B8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802286BC: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802286C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802286C4: j           L_802286E4
    // 0x802286C8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_802286E4;
    // 0x802286C8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_802286CC:
    // 0x802286CC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802286D0: addiu       $v1, $v1, 0x4430
    ctx->r3 = ADD32(ctx->r3, 0X4430);
    // 0x802286D4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802286D8: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x802286DC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802286E0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802286E4:
    // 0x802286E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802286E8: beq         $v0, $zero, L_80228700
    if (ctx->r2 == 0) {
        // 0x802286EC: nop
    
            goto L_80228700;
    }
    // 0x802286EC: nop

    // 0x802286F0: jal         0x8005FB90
    // 0x802286F4: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_5;
    // 0x802286F4: nop

    after_5:
    // 0x802286F8: jal         0x80060018
    // 0x802286FC: nop

    func_80060018_3B418(rdram, ctx);
        goto after_6;
    // 0x802286FC: nop

    after_6:
L_80228700:
    // 0x80228700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228704: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228708: jr          $ra
    // 0x8022870C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022870C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802272D4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802272D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802272DC: jal         0x8005FB90
    // 0x802272E0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x802272E0: nop

    after_0:
    // 0x802272E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802272E8: jr          $ra
    // 0x802272EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802272EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B7A0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B7A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B7A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B7A8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023B7AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B7B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B7B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B7B8: lw          $v0, 0x64D0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X64D0);
    // 0x8023B7BC: jalr        $v0
    // 0x8023B7C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023B7C0: nop

    after_0:
    // 0x8023B7C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B7C8: jr          $ra
    // 0x8023B7CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B7CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B694_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B694: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B698: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B69C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023B6A0: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8023B6A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B6A8: jal         0x8003E6BC
    // 0x8023B6AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8023B6AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023B6B0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B6B4: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8023B6B8: jal         0x8003E6BC
    // 0x8023B6BC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8023B6BC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8023B6C0: bne         $s0, $v0, L_8023B6E8
    if (ctx->r16 != ctx->r2) {
        // 0x8023B6C4: nop
    
            goto L_8023B6E8;
    }
    // 0x8023B6C4: nop

    // 0x8023B6C8: jal         0x8006033C
    // 0x8023B6CC: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8023B6CC: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x8023B6D0: bne         $v0, $zero, L_8023B6E8
    if (ctx->r2 != 0) {
        // 0x8023B6D4: nop
    
            goto L_8023B6E8;
    }
    // 0x8023B6D4: nop

    // 0x8023B6D8: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8023B6DC: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8023B6E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B6E4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8023B6E8:
    // 0x8023B6E8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B6EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B6F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B6F4: jr          $ra
    // 0x8023B6F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B6F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230AD0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230AD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230AD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230ADC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230AE0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230AE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230AE8: jal         0x8009A3B4
    // 0x80230AEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230AEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80230AF0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230AF4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230AF8: jal         0x8009A3B4
    // 0x80230AFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230AFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230B00: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80230B04: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80230B08: jal         0x8009A3B4
    // 0x80230B0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230B0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230B10: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80230B14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230B18: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230B1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230B20: lw          $v0, 0x5C70($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5C70);
    // 0x80230B24: jalr        $v0
    // 0x80230B28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80230B28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80230B2C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230B30: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230B34: beq         $v0, $zero, L_80230B4C
    if (ctx->r2 == 0) {
        // 0x80230B38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230B4C;
    }
    // 0x80230B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230B3C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80230B40: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80230B44: jal         0x8003B564
    // 0x80230B48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80230B48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80230B4C:
    // 0x80230B4C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80230B50: beq         $v0, $zero, L_80230B68
    if (ctx->r2 == 0) {
        // 0x80230B54: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80230B68;
    }
    // 0x80230B54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230B58: jal         0x8005044C
    // 0x80230B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80230B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80230B60: j           L_80230B6C
    // 0x80230B64: nop

        goto L_80230B6C;
    // 0x80230B64: nop

L_80230B68:
    // 0x80230B68: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80230B6C:
    // 0x80230B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230B70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230B74: jr          $ra
    // 0x80230B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023CEB0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CEB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023CEB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023CEB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023CEBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023CEC0: jal         0x80071A70
    // 0x8023CEC4: lui         $a0, 0x20
    ctx->r4 = S32(0X20 << 16);
    func_80071A70_4CE70(rdram, ctx);
        goto after_0;
    // 0x8023CEC4: lui         $a0, 0x20
    ctx->r4 = S32(0X20 << 16);
    after_0:
    // 0x8023CEC8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CECC: sw          $zero, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = 0;
    // 0x8023CED0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023CED4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023CED8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023CEDC: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8023CEE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023CEE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023CEE8: jr          $ra
    // 0x8023CEEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023CEEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023157C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023157C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231580: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231584: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023158C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80231590: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231594: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231598: jal         0x8004D5D4
    // 0x8023159C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023159C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802315A0: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802315A4: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802315A8: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x802315AC: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x802315B0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802315B4: lhu         $a2, 0x54($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X54);
    // 0x802315B8: lhu         $a3, 0x56($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X56);
    // 0x802315BC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802315C0: lhu         $t0, 0x58($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X58);
    // 0x802315C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802315C8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802315CC: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x802315D0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802315D4: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802315D8: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x802315DC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802315E0: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x802315E4: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x802315E8: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x802315EC: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x802315F0: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802315F4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802315F8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802315FC: addiu       $v0, $v0, 0x5CB8
    ctx->r2 = ADD32(ctx->r2, 0X5CB8);
    // 0x80231600: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80231604: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80231608: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8023160C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80231610: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80231614: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80231618: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023161C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231620: sh          $a1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r5;
    // 0x80231624: sh          $a2, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r6;
    // 0x80231628: sh          $a3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r7;
    // 0x8023162C: sh          $t0, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r8;
    // 0x80231630: sh          $v1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r3;
    // 0x80231634: sh          $a0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r4;
    // 0x80231638: sw          $t1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r9;
    // 0x8023163C: sw          $t2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r10;
    // 0x80231640: sw          $t3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r11;
    // 0x80231644: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80231648: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x8023164C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231650: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231654: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80231658: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8023165C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80231660: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80231664: jal         0x80050294
    // 0x80231668: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80231668: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023166C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231670: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80231674: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231678: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023167C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231680: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231684: jr          $ra
    // 0x80231688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239590_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239590: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80239594: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80239598: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
    // 0x8023959C: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x802395A0: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x802395A4: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x802395A8: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x802395AC: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x802395B0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802395B4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802395B8: lw          $v0, 0x6344($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6344);
    // 0x802395BC: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x802395C0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802395C4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802395C8: lw          $v0, 0x63B0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63B0);
    // 0x802395CC: jr          $ra
    // 0x802395D0: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802395D0: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022FD00_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FD00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FD04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FD08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FD0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FD10: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FD14: bnel        $v0, $zero, L_8022FD68
    if (ctx->r2 != 0) {
        // 0x8022FD18: addiu       $a0, $s0, 0x2C
        ctx->r4 = ADD32(ctx->r16, 0X2C);
            goto L_8022FD68;
    }
    goto skip_0;
    // 0x8022FD18: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    skip_0:
    // 0x8022FD1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FD20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FD24: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022FD28: jal         0x8004D5FC
    // 0x8022FD2C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x8022FD2C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FD30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FD34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FD38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FD3C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022FD40: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022FD44: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022FD48: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022FD4C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022FD50: jal         0x80050294
    // 0x8022FD54: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022FD54: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022FD58: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FD5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FD60: j           L_8022FD9C
    // 0x8022FD64: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022FD9C;
    // 0x8022FD64: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022FD68:
    // 0x8022FD68: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022FD6C: jal         0x8009A3B4
    // 0x8022FD70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022FD70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022FD74: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022FD78: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022FD7C: jal         0x8009A3B4
    // 0x8022FD80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022FD80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8022FD84: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022FD88: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022FD8C: jal         0x8009A3B4
    // 0x8022FD90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022FD90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022FD94: jal         0x8005044C
    // 0x8022FD98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022FD98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8022FD9C:
    // 0x8022FD9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FDA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FDA4: jr          $ra
    // 0x8022FDA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FDA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022FDAC: nop

;}
RECOMP_FUNC void func_80241C44_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241C44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80241C48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80241C4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80241C50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80241C54: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80241C58: blez        $v0, L_80241CD4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80241C5C: nop
    
            goto L_80241CD4;
    }
    // 0x80241C5C: nop

    // 0x80241C60: jal         0x800A3450
    // 0x80241C64: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80241C64: nop

    after_0:
    // 0x80241C68: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80241C6C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80241C70: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241C74: jal         0x800A3450
    // 0x80241C78: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80241C78: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80241C7C: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80241C80: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80241C84: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241C88: jal         0x800A3450
    // 0x80241C8C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80241C8C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80241C90: lui         $a3, 0xFFFE
    ctx->r7 = S32(0XFFFE << 16);
    // 0x80241C94: lbu         $a2, 0xE($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XE);
    // 0x80241C98: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80241C9C: ori         $a3, $a3, 0xFEFF
    ctx->r7 = ctx->r7 | 0XFEFF;
    // 0x80241CA0: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x80241CA4: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x80241CA8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80241CAC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80241CB0: addiu       $v1, $v1, -0xA
    ctx->r3 = ADD32(ctx->r3, -0XA);
    // 0x80241CB4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241CB8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80241CBC: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x80241CC0: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80241CC4: sh          $a0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r4;
    // 0x80241CC8: sw          $a1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r5;
    // 0x80241CCC: j           L_80241CDC
    // 0x80241CD0: sb          $a2, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r6;
        goto L_80241CDC;
    // 0x80241CD0: sb          $a2, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r6;
L_80241CD4:
    // 0x80241CD4: jal         0x8004F5C4
    // 0x80241CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x80241CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80241CDC:
    // 0x80241CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80241CE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80241CE4: jr          $ra
    // 0x80241CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80241CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226BEC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80226BF0: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80226BF4: sra         $a0, $a0, 21
    ctx->r4 = S32(SIGNED(ctx->r4) >> 21);
    // 0x80226BF8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226BFC: addiu       $v0, $v0, 0x3C00
    ctx->r2 = ADD32(ctx->r2, 0X3C00);
    // 0x80226C00: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226C04: addu        $s2, $a0, $v0
    ctx->r18 = ADD32(ctx->r4, ctx->r2);
    // 0x80226C08: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80226C0C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80226C10: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80226C14: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226C18: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226C1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226C20: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80226C24: beq         $v0, $zero, L_80226CBC
    if (ctx->r2 == 0) {
        // 0x80226C28: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80226CBC;
    }
    // 0x80226C28: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80226C2C: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x80226C30: addiu       $s5, $s5, 0x7948
    ctx->r21 = ADD32(ctx->r21, 0X7948);
    // 0x80226C34: lui         $s4, 0x801C
    ctx->r20 = S32(0X801C << 16);
    // 0x80226C38: addiu       $s4, $s4, -0x3A2C
    ctx->r20 = ADD32(ctx->r20, -0X3A2C);
    // 0x80226C3C: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x80226C40: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_80226C44:
    // 0x80226C44: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226C48: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x80226C4C: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80226C50: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80226C54: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80226C58: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80226C5C: jal         0x8005FA7C
    // 0x80226C60: lbu         $s0, 0x0($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80226C60: lbu         $s0, 0x0($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X0);
    after_0:
    // 0x80226C64: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x80226C68: addu        $v0, $v1, $s4
    ctx->r2 = ADD32(ctx->r3, ctx->r20);
    // 0x80226C6C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80226C70: addu        $v1, $v1, $s5
    ctx->r3 = ADD32(ctx->r3, ctx->r21);
    // 0x80226C74: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80226C78: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80226C7C: srlv        $s0, $s3, $s0
    ctx->r16 = S32(U32(ctx->r19) >> (ctx->r16 & 31));
    // 0x80226C80: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x80226C84: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    // 0x80226C88: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226C8C: lw          $v1, 0x3310($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3310);
    // 0x80226C90: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x80226C94: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80226C98: or          $v1, $v1, $s0
    ctx->r3 = ctx->r3 | ctx->r16;
    // 0x80226C9C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226CA0: sw          $v1, 0x3310($at)
    MEM_W(0X3310, ctx->r1) = ctx->r3;
    // 0x80226CA4: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x80226CA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226CAC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226CB0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80226CB4: bne         $v0, $zero, L_80226C44
    if (ctx->r2 != 0) {
        // 0x80226CB8: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_80226C44;
    }
    // 0x80226CB8: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_80226CBC:
    // 0x80226CBC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80226CC0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80226CC4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80226CC8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226CCC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226CD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226CD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226CD8: jr          $ra
    // 0x80226CDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80226CDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023B460_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B464: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B468: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B46C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B470: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023B474: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8023B478: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023B47C: jal         0x8002C654
    // 0x8023B480: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8023B480: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023B484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B488: jal         0x8004D5D4
    // 0x8023B48C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8023B48C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x8023B490: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023B494: lui         $v1, 0x280
    ctx->r3 = S32(0X280 << 16);
    // 0x8023B498: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023B49C: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x8023B4A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B4A4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023B4A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B4AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B4B0: jr          $ra
    // 0x8023B4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F7A4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F7A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F7A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F7AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F7B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F7B4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F7B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F7BC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F7C0: jal         0x8004D5D4
    // 0x8022F7C4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022F7C4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F7C8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022F7CC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022F7D0: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x8022F7D4: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x8022F7D8: lhu         $a2, 0x16($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X16);
    // 0x8022F7DC: lhu         $a3, 0x18($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X18);
    // 0x8022F7E0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022F7E4: lhu         $t0, 0x54($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X54);
    // 0x8022F7E8: lhu         $t1, 0x56($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F7EC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022F7F0: lhu         $t2, 0x58($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X58);
    // 0x8022F7F4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F7F8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022F7FC: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022F800: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F804: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022F808: lw          $t3, 0x1C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C);
    // 0x8022F80C: lw          $t4, 0x20($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X20);
    // 0x8022F810: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022F814: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022F818: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022F81C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F820: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022F824: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022F828: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022F82C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022F830: sh          $a0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r4;
    // 0x8022F834: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F838: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F83C: sh          $a1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r5;
    // 0x8022F840: sh          $a2, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r6;
    // 0x8022F844: sh          $a3, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r7;
    // 0x8022F848: sh          $t0, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r8;
    // 0x8022F84C: sh          $t1, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r9;
    // 0x8022F850: sh          $t2, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r10;
    // 0x8022F854: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F858: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x8022F85C: sw          $t3, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r11;
    // 0x8022F860: sw          $t4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r12;
    // 0x8022F864: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022F868: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x8022F86C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F870: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F874: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022F878: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8022F87C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8022F880: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8022F884: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F888: jal         0x80050294
    // 0x8022F88C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022F88C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022F890: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F894: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022F898: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F89C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F8A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F8A8: jr          $ra
    // 0x8022F8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237F70_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237F70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237F74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237F78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237F80: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x80237F84: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80237F88: lui         $v1, 0xFFC0
    ctx->r3 = S32(0XFFC0 << 16);
    // 0x80237F8C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80237F90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237F94: jal         0x8004DD04
    // 0x80237F98: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80237F98: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_0:
    // 0x80237F9C: jal         0x8005044C
    // 0x80237FA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80237FA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237FA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237FAC: jr          $ra
    // 0x80237FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023591C_ovl5(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80235930: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80235934: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80235938: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8023593C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80235940: beq         $v0, $zero, L_80235A50
    if (ctx->r2 == 0) {
        // 0x80235944: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80235A50;
    }
    // 0x80235944: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80235948: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023594C: addu        $at, $at, $v0
    gpr jr_addend_80235954 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235950: lw          $v0, 0x72F0($at)
    ctx->r2 = ADD32(ctx->r1, 0X72F0);
    // 0x80235954: jr          $v0
    // 0x80235958: nop

    switch (jr_addend_80235954 >> 2) {
        case 0: goto L_8023595C; break;
        case 1: goto L_80235970; break;
        case 2: goto L_8023598C; break;
        case 3: goto L_802359F4; break;
        case 4: goto L_80235A20; break;
        default: switch_error(__func__, 0x80235954, 0x802472F0);
    }
    // 0x80235958: nop

L_8023595C:
    // 0x8023595C: jal         0x80235A78
    // 0x80235960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80235A78_ovl5(rdram, ctx);
        goto after_0;
    // 0x80235960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80235964: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235968: j           L_80235A4C
    // 0x8023596C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80235A4C;
    // 0x8023596C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80235970:
    // 0x80235970: jal         0x80235B2C
    // 0x80235974: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80235B2C_ovl5(rdram, ctx);
        goto after_1;
    // 0x80235974: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80235978: beq         $v0, $zero, L_80235A54
    if (ctx->r2 == 0) {
        // 0x8023597C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235A54;
    }
    // 0x8023597C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235980: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235984: j           L_80235A4C
    // 0x80235988: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80235A4C;
    // 0x80235988: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023598C:
    // 0x8023598C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80235990: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80235994: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80235998: jal         0x8004F820
    // 0x8023599C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8023599C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x802359A0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802359A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802359A8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802359AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802359B0: bne         $v0, $zero, L_80235A50
    if (ctx->r2 != 0) {
        // 0x802359B4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80235A50;
    }
    // 0x802359B4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802359B8: jal         0x8003516C
    // 0x802359BC: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x802359BC: nop

    after_3:
    // 0x802359C0: bne         $v0, $zero, L_80235A54
    if (ctx->r2 != 0) {
        // 0x802359C4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235A54;
    }
    // 0x802359C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802359C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802359CC: jal         0x800616FC
    // 0x802359D0: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x802359D0: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    after_4:
    // 0x802359D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802359D8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802359DC: jal         0x80050294
    // 0x802359E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x802359E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x802359E4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802359E8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802359EC: j           L_80235A4C
    // 0x802359F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80235A4C;
    // 0x802359F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802359F4:
    // 0x802359F4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802359F8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802359FC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80235A00: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80235A04: bne         $v0, $zero, L_80235A54
    if (ctx->r2 != 0) {
        // 0x80235A08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235A54;
    }
    // 0x80235A08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235A0C: jal         0x80034E3C
    // 0x80235A10: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_6;
    // 0x80235A10: nop

    after_6:
    // 0x80235A14: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235A18: j           L_80235A4C
    // 0x80235A1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80235A4C;
    // 0x80235A1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80235A20:
    // 0x80235A20: jal         0x8003516C
    // 0x80235A24: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_7;
    // 0x80235A24: nop

    after_7:
    // 0x80235A28: bne         $v0, $zero, L_80235A54
    if (ctx->r2 != 0) {
        // 0x80235A2C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235A54;
    }
    // 0x80235A2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235A30: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80235A34: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80235A38: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80235A3C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80235A40: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80235A44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235A48: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_80235A4C:
    // 0x80235A4C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80235A50:
    // 0x80235A50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80235A54:
    // 0x80235A54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80235A58: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80235A5C: jal         0x80047284
    // 0x80235A60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_8;
    // 0x80235A60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x80235A64: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235A68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235A6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235A70: jr          $ra
    // 0x80235A74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235A74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230680_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230680: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230684: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80230688: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023068C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230690: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230694: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80230698: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8023069C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x802306A0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802306A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802306A8: bne         $v0, $s1, L_8023078C
    if (ctx->r2 != ctx->r17) {
        // 0x802306AC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8023078C;
    }
    // 0x802306AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802306B0: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x802306B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802306B8: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802306BC: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x802306C0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802306C4: jal         0x8004F820
    // 0x802306C8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802306C8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x802306CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802306D0: bgez        $v0, L_802306FC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802306D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802306FC;
    }
    // 0x802306D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802306D8: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802306DC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802306E0: jal         0x8004F820
    // 0x802306E4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802306E4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x802306E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802306EC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802306F0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802306F4: j           L_80230714
    // 0x802306F8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80230714;
    // 0x802306F8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_802306FC:
    // 0x802306FC: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80230700: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80230704: jal         0x8004F820
    // 0x80230708: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80230708: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8023070C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230710: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80230714:
    // 0x80230714: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x80230718: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8023071C: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x80230720: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x80230724: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80230728: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8023072C: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80230730: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x80230734: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x80230738: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023073C: addiu       $s0, $s0, 0x7460
    ctx->r16 = ADD32(ctx->r16, 0X7460);
    // 0x80230740: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80230744: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x80230748: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8023074C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230750: sw          $v0, 0x7464($at)
    MEM_W(0X7464, ctx->r1) = ctx->r2;
    // 0x80230754: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x80230758: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x8023075C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230760: sw          $v0, 0x7468($at)
    MEM_W(0X7468, ctx->r1) = ctx->r2;
    // 0x80230764: jal         0x8004EC38
    // 0x80230768: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x80230768: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8023076C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230770: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80230774: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80230778: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8023077C: jal         0x80034FCC
    // 0x80230780: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x80230780: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x80230784: j           L_80230790
    // 0x80230788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80230790;
    // 0x80230788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023078C:
    // 0x8023078C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80230790:
    // 0x80230790: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80230794: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80230798: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023079C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802307A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802307A4: jr          $ra
    // 0x802307A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802307A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225950_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225954: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225958: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022595C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225960: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225964: bne         $v0, $zero, L_802259C0
    if (ctx->r2 != 0) {
        // 0x80225968: nop
    
            goto L_802259C0;
    }
    // 0x80225968: nop

    // 0x8022596C: jal         0x80226BEC
    // 0x80225970: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80226BEC_ovl5(rdram, ctx);
        goto after_0;
    // 0x80225970: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80225974: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225978: jal         0x8003E87C
    // 0x8022597C: addiu       $a0, $a0, 0x30C0
    ctx->r4 = ADD32(ctx->r4, 0X30C0);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_1;
    // 0x8022597C: addiu       $a0, $a0, 0x30C0
    ctx->r4 = ADD32(ctx->r4, 0X30C0);
    after_1:
    // 0x80225980: addiu       $v1, $zero, 0x4B
    ctx->r3 = ADD32(0, 0X4B);
    // 0x80225984: bne         $v0, $v1, L_80225990
    if (ctx->r2 != ctx->r3) {
        // 0x80225988: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80225990;
    }
    // 0x80225988: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022598C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_80225990:
    // 0x80225990: jal         0x80226D28
    // 0x80225994: nop

    func_80226D28_ovl5(rdram, ctx);
        goto after_2;
    // 0x80225994: nop

    after_2:
    // 0x80225998: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022599C: jal         0x8003E87C
    // 0x802259A0: addiu       $a0, $a0, 0x30D0
    ctx->r4 = ADD32(ctx->r4, 0X30D0);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_3;
    // 0x802259A0: addiu       $a0, $a0, 0x30D0
    ctx->r4 = ADD32(ctx->r4, 0X30D0);
    after_3:
    // 0x802259A4: addiu       $v1, $zero, 0x4B
    ctx->r3 = ADD32(0, 0X4B);
    // 0x802259A8: beq         $v0, $v1, L_802259BC
    if (ctx->r2 == ctx->r3) {
        // 0x802259AC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802259BC;
    }
    // 0x802259AC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802259B0: jal         0x80226D28
    // 0x802259B4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80226D28_ovl5(rdram, ctx);
        goto after_4;
    // 0x802259B4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_4:
    // 0x802259B8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802259BC:
    // 0x802259BC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802259C0:
    // 0x802259C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802259C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802259C8: jr          $ra
    // 0x802259CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802259CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EB78_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EB7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EB80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EB84: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EB88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EB8C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022EB90: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022EB94: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x8022EB98: jal         0x8004FA7C
    // 0x8022EB9C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022EB9C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022EBA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022EBA4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022EBA8: beq         $v0, $zero, L_8022EC3C
    if (ctx->r2 == 0) {
        // 0x8022EBAC: nop
    
            goto L_8022EC3C;
    }
    // 0x8022EBAC: nop

    // 0x8022EBB0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022EBB4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022EBB8: bne         $v0, $zero, L_8022EC3C
    if (ctx->r2 != 0) {
        // 0x8022EBBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EC3C;
    }
    // 0x8022EBBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EBC0: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022EBC4: beq         $v1, $v0, L_8022EBDC
    if (ctx->r3 == ctx->r2) {
        // 0x8022EBC8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022EBDC;
    }
    // 0x8022EBC8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022EBCC: beq         $v1, $v0, L_8022EC0C
    if (ctx->r3 == ctx->r2) {
        // 0x8022EBD0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022EC0C;
    }
    // 0x8022EBD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022EBD4: j           L_8022EC30
    // 0x8022EBD8: nop

        goto L_8022EC30;
    // 0x8022EBD8: nop

L_8022EBDC:
    // 0x8022EBDC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EBE0: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022EBE4: bne         $v0, $zero, L_8022EC30
    if (ctx->r2 != 0) {
        // 0x8022EBE8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022EC30;
    }
    // 0x8022EBE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022EBEC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022EBF0: bne         $v0, $zero, L_8022EC30
    if (ctx->r2 != 0) {
        // 0x8022EBF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EC30;
    }
    // 0x8022EBF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EBF8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022EBFC: bne         $v1, $v0, L_8022EC30
    if (ctx->r3 != ctx->r2) {
        // 0x8022EC00: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022EC30;
    }
    // 0x8022EC00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022EC04: j           L_8022EC30
    // 0x8022EC08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022EC30;
    // 0x8022EC08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022EC0C:
    // 0x8022EC0C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EC10: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022EC14: beq         $v0, $zero, L_8022EC2C
    if (ctx->r2 == 0) {
        // 0x8022EC18: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022EC2C;
    }
    // 0x8022EC18: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022EC1C: bne         $v0, $zero, L_8022EC30
    if (ctx->r2 != 0) {
        // 0x8022EC20: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022EC30;
    }
    // 0x8022EC20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022EC24: j           L_8022EC30
    // 0x8022EC28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022EC30;
    // 0x8022EC28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022EC2C:
    // 0x8022EC2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022EC30:
    // 0x8022EC30: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022EC34: beq         $v0, $zero, L_8022EC60
    if (ctx->r2 == 0) {
        // 0x8022EC38: nop
    
            goto L_8022EC60;
    }
    // 0x8022EC38: nop

L_8022EC3C:
    // 0x8022EC3C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022EC40: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EC44: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022EC48: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022EC4C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022EC50: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022EC54: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022EC58: j           L_8022EC70
    // 0x8022EC5C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022EC70;
    // 0x8022EC5C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022EC60:
    // 0x8022EC60: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EC64: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022EC68: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EC6C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022EC70:
    // 0x8022EC70: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022EC74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EC78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EC7C: jr          $ra
    // 0x8022EC80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EC80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802353C4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802353C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802353C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802353CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802353D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802353D4: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x802353D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802353DC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802353E0: beq         $v1, $v0, L_80235408
    if (ctx->r3 == ctx->r2) {
        // 0x802353E4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80235408;
    }
    // 0x802353E4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802353E8: beq         $v0, $zero, L_8023545C
    if (ctx->r2 == 0) {
        // 0x802353EC: nop
    
            goto L_8023545C;
    }
    // 0x802353EC: nop

    // 0x802353F0: bne         $v1, $zero, L_8023545C
    if (ctx->r3 != 0) {
        // 0x802353F4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023545C;
    }
    // 0x802353F4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802353F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802353FC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80235400: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80235404: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80235408:
    // 0x80235408: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8023540C: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x80235410: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80235414: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80235418: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023541C: addiu       $a1, $a1, 0x5ED4
    ctx->r5 = ADD32(ctx->r5, 0X5ED4);
    // 0x80235420: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80235424: jal         0x8004F820
    // 0x80235428: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80235428: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8023542C: lhu         $v1, 0x352($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X352);
    // 0x80235430: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235434: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80235438: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023543C: bne         $v0, $zero, L_8023545C
    if (ctx->r2 != 0) {
        // 0x80235440: sh          $v1, 0x352($s0)
        MEM_H(0X352, ctx->r16) = ctx->r3;
            goto L_8023545C;
    }
    // 0x80235440: sh          $v1, 0x352($s0)
    MEM_H(0X352, ctx->r16) = ctx->r3;
    // 0x80235444: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80235448: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    // 0x8023544C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80235450: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235454: jal         0x8006036C
    // 0x80235458: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80235458: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_1:
L_8023545C:
    // 0x8023545C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235460: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235464: jr          $ra
    // 0x80235468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B608_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B608: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023B60C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8023B610: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023B614: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8023B618: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023B61C: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023B620: beq         $v0, $zero, L_8023B674
    if (ctx->r2 == 0) {
        // 0x8023B624: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8023B674;
    }
    // 0x8023B624: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023B628: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023B62C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B630: jal         0x8002C678
    // 0x8023B634: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8023B634: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x8023B638: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023B63C: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x8023B640: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8023B644: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8023B648: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B64C: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8023B650: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023B654: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8023B658: mfhi        $a2
    ctx->r6 = hi;
    // 0x8023B65C: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8023B660: nop

    // 0x8023B664: jal         0x800319B4
    // 0x8023B668: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8023B668: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x8023B66C: j           L_8023B680
    // 0x8023B670: nop

        goto L_8023B680;
    // 0x8023B670: nop

L_8023B674:
    // 0x8023B674: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8023B678: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B67C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8023B680:
    // 0x8023B680: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8023B684: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8023B688: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023B68C: jr          $ra
    // 0x8023B690: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023B690: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80226888_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226888: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022688C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226890: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226894: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226898: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022689C: lb          $v1, 0x2($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2);
    // 0x802268A0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802268A4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802268A8: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x802268AC: beq         $v0, $zero, L_802269C8
    if (ctx->r2 == 0) {
        // 0x802268B0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802269C8;
    }
    // 0x802268B0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802268B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802268B8: addu        $at, $at, $v0
    gpr jr_addend_802268C0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802268BC: lw          $v0, 0x6F40($at)
    ctx->r2 = ADD32(ctx->r1, 0X6F40);
    // 0x802268C0: jr          $v0
    // 0x802268C4: nop

    switch (jr_addend_802268C0 >> 2) {
        case 0: goto L_802268C8; break;
        case 1: goto L_802268D4; break;
        case 2: goto L_80226930; break;
        case 3: goto L_80226958; break;
        case 4: goto L_80226984; break;
        case 5: goto L_802269C8; break;
        default: switch_error(__func__, 0x802268C0, 0x80246F40);
    }
    // 0x802268C4: nop

L_802268C8:
    // 0x802268C8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802268CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802268D0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_802268D4:
    // 0x802268D4: lbu         $v1, 0xBD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XBD);
    // 0x802268D8: addiu       $a0, $s1, 0x428
    ctx->r4 = ADD32(ctx->r17, 0X428);
    // 0x802268DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802268E0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802268E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802268E8: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802268EC: lui         $v0, 0x258
    ctx->r2 = S32(0X258 << 16);
    // 0x802268F0: sw          $v0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r2;
    // 0x802268F4: lui         $v0, 0xFCFF
    ctx->r2 = S32(0XFCFF << 16);
    // 0x802268F8: sw          $v0, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r2;
    // 0x802268FC: lui         $v0, 0x834
    ctx->r2 = S32(0X834 << 16);
    // 0x80226900: addiu       $a1, $s1, 0x438
    ctx->r5 = ADD32(ctx->r17, 0X438);
    // 0x80226904: sw          $v0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r2;
    // 0x80226908: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8022690C: jal         0x8004DD04
    // 0x80226910: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80226910: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    after_0:
    // 0x80226914: addiu       $v0, $zero, 0x990
    ctx->r2 = ADD32(0, 0X990);
    // 0x80226918: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    // 0x8022691C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80226920: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x80226924: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x80226928: j           L_802269A8
    // 0x8022692C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_802269A8;
    // 0x8022692C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_80226930:
    // 0x80226930: jal         0x8006033C
    // 0x80226934: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80226934: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_1:
    // 0x80226938: beq         $v0, $zero, L_802269C8
    if (ctx->r2 == 0) {
        // 0x8022693C: nop
    
            goto L_802269C8;
    }
    // 0x8022693C: nop

    // 0x80226940: jal         0x80060590
    // 0x80226944: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x80226944: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_2:
    // 0x80226948: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022694C: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80226950: j           L_802269AC
    // 0x80226954: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
        goto L_802269AC;
    // 0x80226954: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
L_80226958:
    // 0x80226958: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8022695C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226960: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80226964: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226968: bne         $v0, $zero, L_802269C8
    if (ctx->r2 != 0) {
        // 0x8022696C: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_802269C8;
    }
    // 0x8022696C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80226970: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x80226974: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80226978: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8022697C: j           L_802269AC
    // 0x80226980: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
        goto L_802269AC;
    // 0x80226980: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
L_80226984:
    // 0x80226984: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80226988: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022698C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80226990: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226994: bne         $v0, $zero, L_802269B8
    if (ctx->r2 != 0) {
        // 0x80226998: addiu       $a0, $zero, 0x608
        ctx->r4 = ADD32(0, 0X608);
            goto L_802269B8;
    }
    // 0x80226998: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    // 0x8022699C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802269A0: jal         0x80060590
    // 0x802269A4: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x802269A4: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    after_3:
L_802269A8:
    // 0x802269A8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
L_802269AC:
    // 0x802269AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802269B0: j           L_802269C8
    // 0x802269B4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
        goto L_802269C8;
    // 0x802269B4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_802269B8:
    // 0x802269B8: lhu         $v0, 0x442($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X442);
    // 0x802269BC: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x802269C0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802269C4: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
L_802269C8:
    // 0x802269C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802269CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802269D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802269D4: jr          $ra
    // 0x802269D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802269D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
