#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023BA10_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BA10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023BA14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023BA18: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023BA1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023BA20: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023BA24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023BA28: lw          $v0, -0x328($at)
    ctx->r2 = MEM_W(ctx->r1, -0X328);
    // 0x8023BA2C: jalr        $v0
    // 0x8023BA30: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023BA30: nop

    after_0:
    // 0x8023BA34: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023BA38: jr          $ra
    // 0x8023BA3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023BA3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802266D4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266D4: jr          $ra
    // 0x802266D8: nop

    TRACE_RETURN()
    return;
    // 0x802266D8: nop

;}
RECOMP_FUNC void func_802352E8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802352E8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802352EC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x802352F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802352F4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802352F8: jal         0x8006033C
    // 0x802352FC: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802352FC: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_0:
    // 0x80235300: beq         $v0, $zero, L_80235354
    if (ctx->r2 == 0) {
        // 0x80235304: nop
    
            goto L_80235354;
    }
    // 0x80235304: nop

    // 0x80235308: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023530C: jal         0x8003E6BC
    // 0x80235310: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x80235310: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_1:
    // 0x80235314: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x80235318: bne         $v1, $v0, L_80235354
    if (ctx->r3 != ctx->r2) {
        // 0x8023531C: nop
    
            goto L_80235354;
    }
    // 0x8023531C: nop

    // 0x80235320: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x80235324: jal         0x8006033C
    // 0x80235328: addiu       $a0, $a0, 0x7E0
    ctx->r4 = ADD32(ctx->r4, 0X7E0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80235328: addiu       $a0, $a0, 0x7E0
    ctx->r4 = ADD32(ctx->r4, 0X7E0);
    after_2:
    // 0x8023532C: bne         $v0, $zero, L_80235354
    if (ctx->r2 != 0) {
        // 0x80235330: addiu       $a0, $zero, 0x7B2
        ctx->r4 = ADD32(0, 0X7B2);
            goto L_80235354;
    }
    // 0x80235330: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x80235334: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235338: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023533C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80235340: jal         0x8006036C
    // 0x80235344: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80235344: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    after_3:
    // 0x80235348: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x8023534C: jal         0x8002A33C
    // 0x80235350: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80235350: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_4:
L_80235354:
    // 0x80235354: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80235358: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023535C: bne         $v1, $v0, L_8023543C
    if (ctx->r3 != ctx->r2) {
        // 0x80235360: nop
    
            goto L_8023543C;
    }
    // 0x80235360: nop

    // 0x80235364: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235368: beq         $v0, $zero, L_8023543C
    if (ctx->r2 == 0) {
        // 0x8023536C: nop
    
            goto L_8023543C;
    }
    // 0x8023536C: nop

    // 0x80235370: jal         0x8006033C
    // 0x80235374: addiu       $a0, $zero, 0x7E1
    ctx->r4 = ADD32(0, 0X7E1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80235374: addiu       $a0, $zero, 0x7E1
    ctx->r4 = ADD32(0, 0X7E1);
    after_5:
    // 0x80235378: beq         $v0, $zero, L_8023543C
    if (ctx->r2 == 0) {
        // 0x8023537C: lui         $a1, 0x3EC0
        ctx->r5 = S32(0X3EC0 << 16);
            goto L_8023543C;
    }
    // 0x8023537C: lui         $a1, 0x3EC0
    ctx->r5 = S32(0X3EC0 << 16);
    // 0x80235380: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80235384: lhu         $v0, -0x2380($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2380);
    // 0x80235388: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8023538C: lw          $a0, -0x5858($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5858);
    // 0x80235390: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80235394: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235398: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8023539C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802353A0: sw          $a0, 0x480($at)
    MEM_W(0X480, ctx->r1) = ctx->r4;
    // 0x802353A4: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x802353A8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802353AC: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x802353B0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802353B4: sh          $v1, -0x2380($at)
    MEM_H(-0X2380, ctx->r1) = ctx->r3;
    // 0x802353B8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802353BC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x802353C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802353C4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802353C8: lbu         $v1, -0xCB0($at)
    ctx->r3 = MEM_BU(ctx->r1, -0XCB0);
    // 0x802353CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802353D0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802353D4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802353D8: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x802353DC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802353E0: addiu       $v0, $zero, 0x4F80
    ctx->r2 = ADD32(0, 0X4F80);
    // 0x802353E4: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x802353E8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x802353EC: addiu       $v0, $zero, -0x216
    ctx->r2 = ADD32(0, -0X216);
    // 0x802353F0: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x802353F4: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x802353F8: ori         $a1, $a1, 0xE0E0
    ctx->r5 = ctx->r5 | 0XE0E0;
    // 0x802353FC: addiu       $v0, $zero, 0x2BF0
    ctx->r2 = ADD32(0, 0X2BF0);
    // 0x80235400: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80235404: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x80235408: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x8023540C: lui         $v0, 0x25
    ctx->r2 = S32(0X25 << 16);
    // 0x80235410: ori         $v0, $v0, 0xE0FF
    ctx->r2 = ctx->r2 | 0XE0FF;
    // 0x80235414: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80235418: ori         $v0, $zero, 0xFFE0
    ctx->r2 = 0 | 0XFFE0;
    // 0x8023541C: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x80235420: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x80235424: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    // 0x80235428: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023542C: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    // 0x80235430: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x80235434: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80235438: sw          $v1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r3;
L_8023543C:
    // 0x8023543C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80235440: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80235444: jr          $ra
    // 0x80235448: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80235448: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80231B4C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231B4C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80231B50: lui         $v1, 0x30
    ctx->r3 = S32(0X30 << 16);
    // 0x80231B54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231B58: jr          $ra
    // 0x80231B5C: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80231B5C: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80228850_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228850: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228854: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228858: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022885C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228860: jal         0x8004EFE4
    // 0x80228864: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x80228864: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80228868: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022886C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80228870: beq         $v1, $zero, L_8022895C
    if (ctx->r3 == 0) {
        // 0x80228874: sw          $v1, 0x374($s0)
        MEM_W(0X374, ctx->r16) = ctx->r3;
            goto L_8022895C;
    }
    // 0x80228874: sw          $v1, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->r3;
    // 0x80228878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022887C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80228880: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x80228884: bne         $v0, $zero, L_802288E0
    if (ctx->r2 != 0) {
        // 0x80228888: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802288E0;
    }
    // 0x80228888: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022888C: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x80228890: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228894: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80228898: lw          $v0, 0x374($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X374);
    // 0x8022889C: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x802288A0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x802288A4: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x802288A8: lui         $v1, 0xFFC4
    ctx->r3 = S32(0XFFC4 << 16);
    // 0x802288AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802288B0: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x802288B4: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x802288B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802288BC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802288C0: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x802288C4: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x802288C8: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    // 0x802288CC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802288D0: jal         0x8002A33C
    // 0x802288D4: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802288D4: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    after_1:
    // 0x802288D8: j           L_80228908
    // 0x802288DC: nop

        goto L_80228908;
    // 0x802288DC: nop

L_802288E0:
    // 0x802288E0: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x802288E4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802288E8: lw          $v1, 0x374($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X374);
    // 0x802288EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802288F0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x802288F4: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x802288F8: lw          $a0, 0x374($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X374);
    // 0x802288FC: lui         $v1, 0xFFB0
    ctx->r3 = S32(0XFFB0 << 16);
    // 0x80228900: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228904: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_80228908:
    // 0x80228908: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x8022890C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80228910: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80228914: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x80228918: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8022891C: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80228920: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x80228924: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228928: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8022892C: lw          $a1, 0x4C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4C);
    // 0x80228930: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
    // 0x80228934: jal         0x8004DD04
    // 0x80228938: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80228938: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_2:
    // 0x8022893C: lw          $a1, 0x4C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4C);
    // 0x80228940: addiu       $a3, $zero, 0x6E0
    ctx->r7 = ADD32(0, 0X6E0);
    // 0x80228944: lh          $a2, 0x64($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X64);
    // 0x80228948: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    // 0x8022894C: addiu       $a1, $a1, 0x1C
    ctx->r5 = ADD32(ctx->r5, 0X1C);
    // 0x80228950: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80228954: jal         0x8004DBA0
    // 0x80228958: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x80228958: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
L_8022895C:
    // 0x8022895C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228960: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80228964: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228968: jr          $ra
    // 0x8022896C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022896C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802311F8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802311F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802311FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231200: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231204: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80231208: lw          $a0, 0xE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE0);
    // 0x8023120C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231210: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231214: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80231218: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8023121C: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x80231220: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80231224: beq         $v1, $v0, L_802312B0
    if (ctx->r3 == ctx->r2) {
        // 0x80231228: nop
    
            goto L_802312B0;
    }
    // 0x80231228: nop

    // 0x8023122C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80231230: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80231234: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x80231238: bne         $v1, $v0, L_802312B0
    if (ctx->r3 != ctx->r2) {
        // 0x8023123C: nop
    
            goto L_802312B0;
    }
    // 0x8023123C: nop

    // 0x80231240: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80231244: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80231248: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x8023124C: bne         $v1, $v0, L_802312B0
    if (ctx->r3 != ctx->r2) {
        // 0x80231250: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_802312B0;
    }
    // 0x80231250: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80231254: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80231258: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023125C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231260: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231264: lw          $v0, -0x1024($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1024);
    // 0x80231268: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023126C: sh          $zero, 0xD4($at)
    MEM_H(0XD4, ctx->r1) = 0;
    // 0x80231270: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231274: sw          $v0, 0xD0($at)
    MEM_W(0XD0, ctx->r1) = ctx->r2;
    // 0x80231278: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8023127C: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80231280: jal         0x8003B85C
    // 0x80231284: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80231284: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80231288: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8023128C: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80231290: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80231294: jal         0x8003B840
    // 0x80231298: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80231298: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8023129C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802312A0: lw          $v0, 0xE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XE0);
    // 0x802312A4: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x802312A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802312AC: sw          $v0, 0xE0($at)
    MEM_W(0XE0, ctx->r1) = ctx->r2;
L_802312B0:
    // 0x802312B0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802312B4: lw          $a0, 0xE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE4);
    // 0x802312B8: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802312BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802312C0: beq         $v1, $v0, L_80231344
    if (ctx->r3 == ctx->r2) {
        // 0x802312C4: nop
    
            goto L_80231344;
    }
    // 0x802312C4: nop

    // 0x802312C8: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x802312CC: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802312D0: bne         $v1, $v0, L_80231344
    if (ctx->r3 != ctx->r2) {
        // 0x802312D4: nop
    
            goto L_80231344;
    }
    // 0x802312D4: nop

    // 0x802312D8: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x802312DC: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x802312E0: bne         $v1, $v0, L_80231344
    if (ctx->r3 != ctx->r2) {
        // 0x802312E4: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80231344;
    }
    // 0x802312E4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x802312E8: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x802312EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802312F0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802312F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802312F8: lw          $v0, -0xFFC($at)
    ctx->r2 = MEM_W(ctx->r1, -0XFFC);
    // 0x802312FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231300: sh          $zero, 0xDC($at)
    MEM_H(0XDC, ctx->r1) = 0;
    // 0x80231304: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231308: sw          $v0, 0xD8($at)
    MEM_W(0XD8, ctx->r1) = ctx->r2;
    // 0x8023130C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80231310: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80231314: jal         0x8003B85C
    // 0x80231318: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80231318: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x8023131C: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80231320: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80231324: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80231328: jal         0x8003B840
    // 0x8023132C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8023132C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80231330: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231334: lw          $v0, 0xE4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XE4);
    // 0x80231338: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8023133C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231340: sw          $v0, 0xE4($at)
    MEM_W(0XE4, ctx->r1) = ctx->r2;
L_80231344:
    // 0x80231344: jal         0x802310D0
    // 0x80231348: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802310D0_ovl2(rdram, ctx);
        goto after_4;
    // 0x80231348: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023134C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231350: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231354: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231358: jr          $ra
    // 0x8023135C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023135C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226008_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226008: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022600C: bne         $v0, $zero, L_80226024
    if (ctx->r2 != 0) {
        // 0x80226010: addiu       $v1, $zero, 0xB
        ctx->r3 = ADD32(0, 0XB);
            goto L_80226024;
    }
    // 0x80226010: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x80226014: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80226018: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x8022601C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80226020: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80226024:
    // 0x80226024: jr          $ra
    // 0x80226028: nop

    TRACE_RETURN()
    return;
    // 0x80226028: nop

    // 0x8022602C: nop

;}
RECOMP_FUNC void func_80236E2C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236E2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236E30: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236E34: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236E38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236E3C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80236E40: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236E44: jal         0x8006033C
    // 0x80236E48: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80236E48: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_0:
    // 0x80236E4C: bne         $v0, $zero, L_80236F04
    if (ctx->r2 != 0) {
        // 0x80236E50: nop
    
            goto L_80236F04;
    }
    // 0x80236E50: nop

    // 0x80236E54: jal         0x8006033C
    // 0x80236E58: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80236E58: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    after_1:
    // 0x80236E5C: bne         $v0, $zero, L_80236F04
    if (ctx->r2 != 0) {
        // 0x80236E60: nop
    
            goto L_80236F04;
    }
    // 0x80236E60: nop

    // 0x80236E64: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80236E68: beq         $v1, $zero, L_80236E80
    if (ctx->r3 == 0) {
        // 0x80236E6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236E80;
    }
    // 0x80236E6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236E70: beq         $v1, $v0, L_80236EBC
    if (ctx->r3 == ctx->r2) {
        // 0x80236E74: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80236EBC;
    }
    // 0x80236E74: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80236E78: j           L_80236F04
    // 0x80236E7C: nop

        goto L_80236F04;
    // 0x80236E7C: nop

L_80236E80:
    // 0x80236E80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236E84: jal         0x80238028
    // 0x80236E88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_2;
    // 0x80236E88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80236E8C: beq         $v0, $zero, L_80236F04
    if (ctx->r2 == 0) {
        // 0x80236E90: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80236F04;
    }
    // 0x80236E90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80236E94: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80236E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236E9C: jal         0x800616FC
    // 0x80236EA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80236EA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_3:
    // 0x80236EA4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236EA8: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80236EAC: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x80236EB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236EB4: j           L_80236EEC
    // 0x80236EB8: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_80236EEC;
    // 0x80236EB8: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_80236EBC:
    // 0x80236EBC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236EC0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80236EC4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80236EC8: bne         $v0, $zero, L_80236F04
    if (ctx->r2 != 0) {
        // 0x80236ECC: nop
    
            goto L_80236F04;
    }
    // 0x80236ECC: nop

    // 0x80236ED0: jal         0x8006036C
    // 0x80236ED4: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80236ED4: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    after_4:
    // 0x80236ED8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236EDC: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80236EE0: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x80236EE4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80236EE8: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
L_80236EEC:
    // 0x80236EEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80236EF0: jal         0x8004CB2C
    // 0x80236EF4: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_5;
    // 0x80236EF4: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    after_5:
    // 0x80236EF8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80236EFC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80236F00: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80236F04:
    // 0x80236F04: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236F08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236F0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236F10: jr          $ra
    // 0x80236F14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236F14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023607C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023607C: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x80236080: lui         $v0, 0xFFFE
    ctx->r2 = S32(0XFFFE << 16);
    // 0x80236084: ori         $v0, $v0, 0xC000
    ctx->r2 = ctx->r2 | 0XC000;
    // 0x80236088: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023608C: lui         $v0, 0xFFCE
    ctx->r2 = S32(0XFFCE << 16);
    // 0x80236090: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80236094: bne         $v0, $zero, L_802360C4
    if (ctx->r2 != 0) {
        // 0x80236098: sra         $v0, $v1, 16
        ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
            goto L_802360C4;
    }
    // 0x80236098: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023609C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802360A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802360A4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802360A8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802360AC: lw          $v0, -0x3A04($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A04);
    // 0x802360B0: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x802360B4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802360B8: lw          $v0, -0x3A04($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A04);
    // 0x802360BC: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x802360C0: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
L_802360C4:
    // 0x802360C4: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    // 0x802360C8: jr          $ra
    // 0x802360CC: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802360CC: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80226648_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226648: jr          $ra
    // 0x8022664C: nop

    TRACE_RETURN()
    return;
    // 0x8022664C: nop

;}
RECOMP_FUNC void func_80231868_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023186C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231870: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231878: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023187C: bne         $v0, $zero, L_802318A0
    if (ctx->r2 != 0) {
        // 0x80231880: addiu       $v0, $zero, 0x17
        ctx->r2 = ADD32(0, 0X17);
            goto L_802318A0;
    }
    // 0x80231880: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x80231884: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x80231888: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023188C: jal         0x80050294
    // 0x80231890: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231890: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231894: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231898: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023189C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802318A0:
    // 0x802318A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802318A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802318A8: jr          $ra
    // 0x802318AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802318AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BB2C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BB2C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8023BB30: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8023BB34: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023BB38: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8023BB3C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x8023BB40: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8023BB44: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8023BB48: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8023BB4C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8023BB50: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8023BB54: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8023BB58: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8023BB5C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023BB60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023BB64: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023BB68: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x8023BB6C: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x8023BB70: lhu         $s5, -0x3EC($s5)
    ctx->r21 = MEM_HU(ctx->r21, -0X3EC);
    // 0x8023BB74: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x8023BB78: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x8023BB7C: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x8023BB80: lhu         $s6, -0x3EA($s6)
    ctx->r22 = MEM_HU(ctx->r22, -0X3EA);
    // 0x8023BB84: jal         0x800874D0
    // 0x8023BB88: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x8023BB88: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x8023BB8C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x8023BB90: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8023BB94: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x8023BB98: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023BB9C: addiu       $a0, $a0, 0x15C0
    ctx->r4 = ADD32(ctx->r4, 0X15C0);
    // 0x8023BBA0: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x8023BBA4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023BBA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023BBAC: lbu         $v1, -0x348($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X348);
    // 0x8023BBB0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8023BBB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BBB8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023BBBC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8023BBC0: jal         0x80086F94
    // 0x8023BBC4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x8023BBC4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x8023BBC8: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8023BBCC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023BBD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023BBD4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023BBD8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023BBDC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023BBE0: lhu         $v0, -0x3E8($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X3E8);
    // 0x8023BBE4: beq         $v0, $zero, L_8023BE00
    if (ctx->r2 == 0) {
        // 0x8023BBE8: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_8023BE00;
    }
    // 0x8023BBE8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_8023BBEC:
    // 0x8023BBEC: bgez        $s6, L_8023BBF8
    if (SIGNED(ctx->r22) >= 0) {
        // 0x8023BBF0: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_8023BBF8;
    }
    // 0x8023BBF0: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x8023BBF4: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_8023BBF8:
    // 0x8023BBF8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023BBFC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023BC00: beq         $v0, $zero, L_8023BEBC
    if (ctx->r2 == 0) {
        // 0x8023BC04: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8023BEBC;
    }
    // 0x8023BC04: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023BC08: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023BC0C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8023BC10: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x8023BC14: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x8023BC18: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023BC1C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8023BC20: jal         0x800874D0
    // 0x8023BC24: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x8023BC24: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x8023BC28: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023BC2C: jal         0x80087248
    // 0x8023BC30: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x8023BC30: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x8023BC34: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023BC38: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023BC3C: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x8023BC40: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x8023BC44: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023BC48: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023BC4C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8023BC50: jal         0x800874D0
    // 0x8023BC54: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x8023BC54: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x8023BC58: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023BC5C: jal         0x80087248
    // 0x8023BC60: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x8023BC60: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x8023BC64: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x8023BC68: bgez        $s5, L_8023BC74
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8023BC6C: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_8023BC74;
    }
    // 0x8023BC6C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8023BC70: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_8023BC74:
    // 0x8023BC74: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x8023BC78: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023BC7C: jal         0x800874D0
    // 0x8023BC80: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x8023BC80: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x8023BC84: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023BC88: jal         0x80087248
    // 0x8023BC8C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x8023BC8C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x8023BC90: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8023BC94: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x8023BC98: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x8023BC9C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8023BCA0: bnel        $v0, $zero, L_8023BBEC
    if (ctx->r2 != 0) {
        // 0x8023BCA4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8023BBEC;
    }
    goto skip_0;
    // 0x8023BCA4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x8023BCA8: beq         $a1, $zero, L_8023BDF8
    if (ctx->r5 == 0) {
        // 0x8023BCAC: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_8023BDF8;
    }
    // 0x8023BCAC: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x8023BCB0: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x8023BCB4: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x8023BCB8: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_8023BCBC:
    // 0x8023BCBC: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x8023BCC0: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x8023BCC4: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x8023BCC8: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x8023BCCC: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x8023BCD0: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x8023BCD4: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x8023BCD8: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023BCDC: mflo        $a3
    ctx->r7 = lo;
    // 0x8023BCE0: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x8023BCE4: nop

    // 0x8023BCE8: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x8023BCEC: bne         $a1, $zero, L_8023BCF8
    if (ctx->r5 != 0) {
        // 0x8023BCF0: nop
    
            goto L_8023BCF8;
    }
    // 0x8023BCF0: nop

    // 0x8023BCF4: break       7
    do_break(2149825780);
L_8023BCF8:
    // 0x8023BCF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023BCFC: bne         $a1, $at, L_8023BD10
    if (ctx->r5 != ctx->r1) {
        // 0x8023BD00: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023BD10;
    }
    // 0x8023BD00: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023BD04: bne         $a3, $at, L_8023BD10
    if (ctx->r7 != ctx->r1) {
        // 0x8023BD08: nop
    
            goto L_8023BD10;
    }
    // 0x8023BD08: nop

    // 0x8023BD0C: break       6
    do_break(2149825804);
L_8023BD10:
    // 0x8023BD10: mflo        $a3
    ctx->r7 = lo;
    // 0x8023BD14: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x8023BD18: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x8023BD1C: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8023BD20: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8023BD24: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x8023BD28: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023BD2C: mflo        $v0
    ctx->r2 = lo;
    // 0x8023BD30: nop

    // 0x8023BD34: nop

    // 0x8023BD38: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8023BD3C: bne         $a1, $zero, L_8023BD48
    if (ctx->r5 != 0) {
        // 0x8023BD40: nop
    
            goto L_8023BD48;
    }
    // 0x8023BD40: nop

    // 0x8023BD44: break       7
    do_break(2149825860);
L_8023BD48:
    // 0x8023BD48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023BD4C: bne         $a1, $at, L_8023BD60
    if (ctx->r5 != ctx->r1) {
        // 0x8023BD50: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023BD60;
    }
    // 0x8023BD50: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023BD54: bne         $v0, $at, L_8023BD60
    if (ctx->r2 != ctx->r1) {
        // 0x8023BD58: nop
    
            goto L_8023BD60;
    }
    // 0x8023BD58: nop

    // 0x8023BD5C: break       6
    do_break(2149825884);
L_8023BD60:
    // 0x8023BD60: mflo        $v0
    ctx->r2 = lo;
    // 0x8023BD64: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8023BD68: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x8023BD6C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8023BD70: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8023BD74: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x8023BD78: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023BD7C: mflo        $v1
    ctx->r3 = lo;
    // 0x8023BD80: nop

    // 0x8023BD84: nop

    // 0x8023BD88: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x8023BD8C: bne         $a1, $zero, L_8023BD98
    if (ctx->r5 != 0) {
        // 0x8023BD90: nop
    
            goto L_8023BD98;
    }
    // 0x8023BD90: nop

    // 0x8023BD94: break       7
    do_break(2149825940);
L_8023BD98:
    // 0x8023BD98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023BD9C: bne         $a1, $at, L_8023BDB0
    if (ctx->r5 != ctx->r1) {
        // 0x8023BDA0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023BDB0;
    }
    // 0x8023BDA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023BDA4: bne         $v1, $at, L_8023BDB0
    if (ctx->r3 != ctx->r1) {
        // 0x8023BDA8: nop
    
            goto L_8023BDB0;
    }
    // 0x8023BDA8: nop

    // 0x8023BDAC: break       6
    do_break(2149825964);
L_8023BDB0:
    // 0x8023BDB0: mflo        $v1
    ctx->r3 = lo;
    // 0x8023BDB4: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x8023BDB8: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x8023BDBC: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x8023BDC0: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x8023BDC4: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x8023BDC8: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x8023BDCC: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x8023BDD0: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x8023BDD4: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x8023BDD8: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x8023BDDC: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x8023BDE0: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8023BDE4: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x8023BDE8: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x8023BDEC: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x8023BDF0: bne         $v0, $zero, L_8023BCBC
    if (ctx->r2 != 0) {
        // 0x8023BDF4: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_8023BCBC;
    }
    // 0x8023BDF4: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_8023BDF8:
    // 0x8023BDF8: j           L_8023BBEC
    // 0x8023BDFC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8023BBEC;
    // 0x8023BDFC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8023BE00:
    // 0x8023BE00: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x8023BE04: bne         $v0, $zero, L_8023BEBC
    if (ctx->r2 != 0) {
        // 0x8023BE08: nop
    
            goto L_8023BEBC;
    }
    // 0x8023BE08: nop

L_8023BE0C:
    // 0x8023BE0C: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x8023BE10: bltzl       $v0, L_8023BE18
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023BE14: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_8023BE18;
    }
    goto skip_1;
    // 0x8023BE14: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_8023BE18:
    // 0x8023BE18: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023BE1C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023BE20: beq         $v0, $zero, L_8023BEBC
    if (ctx->r2 == 0) {
        // 0x8023BE24: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8023BEBC;
    }
    // 0x8023BE24: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023BE28: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023BE2C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8023BE30: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x8023BE34: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x8023BE38: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023BE3C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8023BE40: jal         0x800874D0
    // 0x8023BE44: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x8023BE44: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x8023BE48: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023BE4C: jal         0x80087248
    // 0x8023BE50: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x8023BE50: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x8023BE54: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023BE58: bgez        $s5, L_8023BE64
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8023BE5C: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_8023BE64;
    }
    // 0x8023BE5C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x8023BE60: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_8023BE64:
    // 0x8023BE64: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8023BE68: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023BE6C: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x8023BE70: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x8023BE74: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023BE78: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023BE7C: jal         0x800874D0
    // 0x8023BE80: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x8023BE80: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x8023BE84: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023BE88: jal         0x80087248
    // 0x8023BE8C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x8023BE8C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x8023BE90: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8023BE94: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x8023BE98: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8023BE9C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8023BEA0: bnel        $v0, $zero, L_8023BE0C
    if (ctx->r2 != 0) {
        // 0x8023BEA4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8023BE0C;
    }
    goto skip_2;
    // 0x8023BEA4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x8023BEA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023BEAC: jal         0x80099F90
    // 0x8023BEB0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x8023BEB0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x8023BEB4: j           L_8023BE0C
    // 0x8023BEB8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8023BE0C;
    // 0x8023BEB8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8023BEBC:
    // 0x8023BEBC: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8023BEC0: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x8023BEC4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8023BEC8: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8023BECC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8023BED0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8023BED4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8023BED8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8023BEDC: jr          $ra
    // 0x8023BEE0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8023BEE0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80227E28_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227E2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227E30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227E34: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227E38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227E3C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227E40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E44: beq         $v1, $v0, L_80227E90
    if (ctx->r3 == ctx->r2) {
        // 0x80227E48: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80227E90;
    }
    // 0x80227E48: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80227E4C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227E50: beql        $v0, $zero, L_80227E68
    if (ctx->r2 == 0) {
        // 0x80227E54: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227E68;
    }
    goto skip_0;
    // 0x80227E54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227E58: beq         $v1, $zero, L_80227E78
    if (ctx->r3 == 0) {
        // 0x80227E5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227E78;
    }
    // 0x80227E5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E60: j           L_80227F04
    // 0x80227E64: nop

        goto L_80227F04;
    // 0x80227E64: nop

L_80227E68:
    // 0x80227E68: beq         $v1, $v0, L_80227EBC
    if (ctx->r3 == ctx->r2) {
        // 0x80227E6C: nop
    
            goto L_80227EBC;
    }
    // 0x80227E6C: nop

    // 0x80227E70: j           L_80227F04
    // 0x80227E74: nop

        goto L_80227F04;
    // 0x80227E74: nop

L_80227E78:
    // 0x80227E78: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227E7C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227E80: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227E84: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80227E88: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80227E8C: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_80227E90:
    // 0x80227E90: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227E94: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80227E98: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80227E9C: bgez        $v0, L_80227EB0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227EA0: sh          $v1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r3;
            goto L_80227EB0;
    }
    // 0x80227EA0: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x80227EA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227EA8: j           L_80227EBC
    // 0x80227EAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80227EBC;
    // 0x80227EAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227EB0:
    // 0x80227EB0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80227EB4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227EB8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80227EBC:
    // 0x80227EBC: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x80227EC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227EC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227EC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227ECC: sll         $a2, $a2, 23
    ctx->r6 = S32(ctx->r6 << 23);
    // 0x80227ED0: jal         0x8004DA90
    // 0x80227ED4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80227ED4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_0:
    // 0x80227ED8: jal         0x80040F30
    // 0x80227EDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80227EDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227EE0: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80227EE4: beq         $v0, $zero, L_80227F04
    if (ctx->r2 == 0) {
        // 0x80227EE8: nop
    
            goto L_80227F04;
    }
    // 0x80227EE8: nop

    // 0x80227EEC: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80227EF0: bgez        $v0, L_80227F04
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227EF4: nop
    
            goto L_80227F04;
    }
    // 0x80227EF4: nop

    // 0x80227EF8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227EFC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80227F00: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80227F04:
    // 0x80227F04: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227F08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227F0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F10: jr          $ra
    // 0x80227F14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227F14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802326C0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802326C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802326C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802326C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802326CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802326D0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802326D4: bne         $v0, $zero, L_802326F0
    if (ctx->r2 != 0) {
        // 0x802326D8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_802326F0;
    }
    // 0x802326D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802326DC: jal         0x80050294
    // 0x802326E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802326E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802326E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802326E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802326EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802326F0:
    // 0x802326F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802326F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802326F8: jr          $ra
    // 0x802326FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802326FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BD24_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BD24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022BD28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022BD2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BD30: addiu       $a0, $s0, 0x504
    ctx->r4 = ADD32(ctx->r16, 0X504);
    // 0x8022BD34: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022BD38: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022BD3C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022BD40: jal         0x800540D0
    // 0x8022BD44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022BD44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022BD48: beq         $v0, $zero, L_8022BD5C
    if (ctx->r2 == 0) {
        // 0x8022BD4C: nop
    
            goto L_8022BD5C;
    }
    // 0x8022BD4C: nop

    // 0x8022BD50: lhu         $v0, 0x4E0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E0);
    // 0x8022BD54: j           L_8022BD64
    // 0x8022BD58: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_8022BD64;
    // 0x8022BD58: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_8022BD5C:
    // 0x8022BD5C: lhu         $v0, 0x4E0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E0);
    // 0x8022BD60: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
L_8022BD64:
    // 0x8022BD64: sh          $v0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r2;
    // 0x8022BD68: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022BD6C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BD70: beq         $v0, $zero, L_8022BD80
    if (ctx->r2 == 0) {
        // 0x8022BD74: nop
    
            goto L_8022BD80;
    }
    // 0x8022BD74: nop

    // 0x8022BD78: jal         0x8022E234
    // 0x8022BD7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E234_ovl2(rdram, ctx);
        goto after_1;
    // 0x8022BD7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022BD80:
    // 0x8022BD80: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BD84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BD88: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BD8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BD90: lw          $v0, -0x15AC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X15AC);
    // 0x8022BD94: jalr        $v0
    // 0x8022BD98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022BD98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022BD9C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022BDA0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022BDA4: beq         $v0, $zero, L_8022BE7C
    if (ctx->r2 == 0) {
        // 0x8022BDA8: nop
    
            goto L_8022BE7C;
    }
    // 0x8022BDA8: nop

    // 0x8022BDAC: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022BDB0: bgtz        $v0, L_8022BDFC
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022BDB4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022BDFC;
    }
    // 0x8022BDB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BDB8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022BDBC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022BDC0: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x8022BDC4: bnel        $v0, $zero, L_8022BE70
    if (ctx->r2 != 0) {
        // 0x8022BDC8: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_8022BE70;
    }
    goto skip_0;
    // 0x8022BDC8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_0:
    // 0x8022BDCC: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022BDD0: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8022BDD4: bnel        $v0, $zero, L_8022BE70
    if (ctx->r2 != 0) {
        // 0x8022BDD8: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_8022BE70;
    }
    goto skip_1;
    // 0x8022BDD8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_1:
    // 0x8022BDDC: ori         $v0, $v1, 0x40
    ctx->r2 = ctx->r3 | 0X40;
    // 0x8022BDE0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022BDE4: jal         0x8006036C
    // 0x8022BDE8: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x8022BDE8: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_3:
    // 0x8022BDEC: jal         0x8004A0DC
    // 0x8022BDF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004A0DC_254DC(rdram, ctx);
        goto after_4;
    // 0x8022BDF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022BDF4: j           L_8022BE70
    // 0x8022BDF8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022BE70;
    // 0x8022BDF8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022BDFC:
    // 0x8022BDFC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BE00: beq         $v1, $v0, L_8022BE64
    if (ctx->r3 == ctx->r2) {
        // 0x8022BE04: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_8022BE64;
    }
    // 0x8022BE04: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8022BE08: beql        $v0, $zero, L_8022BE20
    if (ctx->r2 == 0) {
        // 0x8022BE0C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022BE20;
    }
    goto skip_2;
    // 0x8022BE0C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_2:
    // 0x8022BE10: beq         $v1, $zero, L_8022BE44
    if (ctx->r3 == 0) {
        // 0x8022BE14: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022BE44;
    }
    // 0x8022BE14: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BE18: j           L_8022BE54
    // 0x8022BE1C: nop

        goto L_8022BE54;
    // 0x8022BE1C: nop

L_8022BE20:
    // 0x8022BE20: beq         $v1, $v0, L_8022BE38
    if (ctx->r3 == ctx->r2) {
        // 0x8022BE24: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022BE38;
    }
    // 0x8022BE24: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022BE28: beq         $v1, $v0, L_8022BE44
    if (ctx->r3 == ctx->r2) {
        // 0x8022BE2C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022BE44;
    }
    // 0x8022BE2C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BE30: j           L_8022BE54
    // 0x8022BE34: nop

        goto L_8022BE54;
    // 0x8022BE34: nop

L_8022BE38:
    // 0x8022BE38: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022BE3C: j           L_8022BE6C
    // 0x8022BE40: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022BE6C;
    // 0x8022BE40: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BE44:
    // 0x8022BE44: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022BE48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BE4C: j           L_8022BE6C
    // 0x8022BE50: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_8022BE6C;
    // 0x8022BE50: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022BE54:
    // 0x8022BE54: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022BE58: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022BE5C: beql        $v0, $zero, L_8022BE6C
    if (ctx->r2 == 0) {
        // 0x8022BE60: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8022BE6C;
    }
    goto skip_3;
    // 0x8022BE60: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_3:
L_8022BE64:
    // 0x8022BE64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BE68: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BE6C:
    // 0x8022BE6C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022BE70:
    // 0x8022BE70: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022BE74: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022BE78: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022BE7C:
    // 0x8022BE7C: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8022BE80: beq         $v0, $zero, L_8022BE90
    if (ctx->r2 == 0) {
        // 0x8022BE84: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022BE90;
    }
    // 0x8022BE84: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BE88: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022BE8C: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_8022BE90:
    // 0x8022BE90: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022BE94: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BE98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BE9C: jr          $ra
    // 0x8022BEA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022BEA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225D3C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D3C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225D40: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    // 0x80225D44: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80225D48: bne         $v1, $v0, L_80225D68
    if (ctx->r3 != ctx->r2) {
        // 0x80225D4C: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_80225D68;
    }
    // 0x80225D4C: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80225D50: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80225D54: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x80225D58: lui         $v1, 0x50
    ctx->r3 = S32(0X50 << 16);
    // 0x80225D5C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80225D60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225D64: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_80225D68:
    // 0x80225D68: jr          $ra
    // 0x80225D6C: nop

    TRACE_RETURN()
    return;
    // 0x80225D6C: nop

;}
RECOMP_FUNC void func_8022812C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022812C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228130: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228134: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228138: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022813C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228140: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228148: beq         $v1, $v0, L_80228234
    if (ctx->r3 == ctx->r2) {
        // 0x8022814C: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80228234;
    }
    // 0x8022814C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80228150: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80228154: beql        $v0, $zero, L_8022816C
    if (ctx->r2 == 0) {
        // 0x80228158: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022816C;
    }
    goto skip_0;
    // 0x80228158: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022815C: beq         $v1, $zero, L_80228184
    if (ctx->r3 == 0) {
        // 0x80228160: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228184;
    }
    // 0x80228160: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228164: j           L_802283B0
    // 0x80228168: nop

        goto L_802283B0;
    // 0x80228168: nop

L_8022816C:
    // 0x8022816C: beq         $v1, $v0, L_80228244
    if (ctx->r3 == ctx->r2) {
        // 0x80228170: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80228244;
    }
    // 0x80228170: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228174: beq         $v1, $v0, L_80228360
    if (ctx->r3 == ctx->r2) {
        // 0x80228178: nop
    
            goto L_80228360;
    }
    // 0x80228178: nop

    // 0x8022817C: j           L_802283B0
    // 0x80228180: nop

        goto L_802283B0;
    // 0x80228180: nop

L_80228184:
    // 0x80228184: lhu         $v1, 0x328($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X328);
    // 0x80228188: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022818C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228190: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80228194: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228198: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022819C: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x802281A0: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x802281A4: beq         $a0, $zero, L_80228200
    if (ctx->r4 == 0) {
        // 0x802281A8: sh          $v1, 0x328($s0)
        MEM_H(0X328, ctx->r16) = ctx->r3;
            goto L_80228200;
    }
    // 0x802281A8: sh          $v1, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r3;
    // 0x802281AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802281B0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802281B4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802281B8: addiu       $v0, $v0, -0x1744
    ctx->r2 = ADD32(ctx->r2, -0X1744);
    // 0x802281BC: sw          $v0, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->r2;
    // 0x802281C0: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802281C4: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802281C8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802281CC: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x802281D0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802281D4: sh          $v0, 0x32A($s0)
    MEM_H(0X32A, ctx->r16) = ctx->r2;
    // 0x802281D8: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x802281DC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802281E0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802281E4: sh          $a0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r4;
    // 0x802281E8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x802281EC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802281F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802281F4: lbu         $v0, 0xB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB);
    // 0x802281F8: j           L_8022821C
    // 0x802281FC: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
        goto L_8022821C;
    // 0x802281FC: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
L_80228200:
    // 0x80228200: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228204: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228208: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022820C: addiu       $v0, $v0, -0x1750
    ctx->r2 = ADD32(ctx->r2, -0X1750);
    // 0x80228210: sw          $v0, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->r2;
    // 0x80228214: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80228218: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
L_8022821C:
    // 0x8022821C: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80228220: bgtz        $v0, L_80228234
    if (SIGNED(ctx->r2) > 0) {
        // 0x80228224: nop
    
            goto L_80228234;
    }
    // 0x80228224: nop

    // 0x80228228: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022822C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228230: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80228234:
    // 0x80228234: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80228238: bgez        $v0, L_80228244
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022823C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228244;
    }
    // 0x8022823C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228240: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228244:
    // 0x80228244: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x80228248: lw          $a2, 0x3C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X3C);
    // 0x8022824C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228250: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80228254: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x80228258: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022825C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228260: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80228264: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80228268: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8022826C: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80228270: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80228274: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80228278: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022827C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80228280: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80228284: jal         0x8004DA90
    // 0x80228288: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80228288: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022828C: jal         0x80040F30
    // 0x80228290: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80228290: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228294: beq         $v0, $zero, L_802283B0
    if (ctx->r2 == 0) {
        // 0x80228298: sw          $v0, 0x48($s1)
        MEM_W(0X48, ctx->r17) = ctx->r2;
            goto L_802283B0;
    }
    // 0x80228298: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x8022829C: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x802282A0: bnel        $v0, $zero, L_802282A8
    if (ctx->r2 != 0) {
        // 0x802282A4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_802282A8;
    }
    goto skip_1;
    // 0x802282A4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_802282A8:
    // 0x802282A8: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x802282AC: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x802282B0: beq         $v0, $zero, L_802283B0
    if (ctx->r2 == 0) {
        // 0x802282B4: addiu       $a0, $zero, 0xDE
        ctx->r4 = ADD32(0, 0XDE);
            goto L_802283B0;
    }
    // 0x802282B4: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    // 0x802282B8: jal         0x8002A33C
    // 0x802282BC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802282BC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802282C0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802282C4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x802282C8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802282CC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802282D0: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x802282D4: beq         $v0, $zero, L_8022832C
    if (ctx->r2 == 0) {
        // 0x802282D8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022832C;
    }
    // 0x802282D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802282DC: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802282E0: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x802282E4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802282E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802282EC: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x802282F0: beq         $a0, $zero, L_80228300
    if (ctx->r4 == 0) {
        // 0x802282F4: sb          $v0, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = ctx->r2;
            goto L_80228300;
    }
    // 0x802282F4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802282F8: j           L_80228304
    // 0x802282FC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80228304;
    // 0x802282FC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80228300:
    // 0x80228300: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80228304:
    // 0x80228304: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228308: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8022830C: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x80228310: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228314: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80228318: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022831C: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x80228320: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x80228324: j           L_802283B0
    // 0x80228328: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_802283B0;
    // 0x80228328: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022832C:
    // 0x8022832C: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80228330: bgtz        $v0, L_80228348
    if (SIGNED(ctx->r2) > 0) {
        // 0x80228334: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80228348;
    }
    // 0x80228334: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228338: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022833C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80228340: j           L_802283B0
    // 0x80228344: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_802283B0;
    // 0x80228344: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80228348:
    // 0x80228348: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022834C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80228350: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228354: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80228358: j           L_802283B0
    // 0x8022835C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_802283B0;
    // 0x8022835C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80228360:
    // 0x80228360: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x80228364: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228368: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022836C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228370: bgez        $v0, L_80228388
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228374: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80228388;
    }
    // 0x80228374: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228378: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022837C: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x80228380: j           L_802283B0
    // 0x80228384: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_802283B0;
    // 0x80228384: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_80228388:
    // 0x80228388: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022838C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228390: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228394: jal         0x8004F820
    // 0x80228398: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80228398: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x8022839C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802283A0: sh          $v0, 0x36C($s0)
    MEM_H(0X36C, ctx->r16) = ctx->r2;
    // 0x802283A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802283A8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802283AC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_802283B0:
    // 0x802283B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802283B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802283B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802283BC: jr          $ra
    // 0x802283C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802283C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802360D0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802360D0: jr          $ra
    // 0x802360D4: nop

    TRACE_RETURN()
    return;
    // 0x802360D4: nop

;}
RECOMP_FUNC void func_802366AC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802366AC: jr          $ra
    // 0x802366B0: nop

    TRACE_RETURN()
    return;
    // 0x802366B0: nop

;}
RECOMP_FUNC void func_8023336C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023336C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233374: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233378: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8023337C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80233380: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80233384: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x80233388: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x8023338C: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80233390: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80233394: jal         0x8009A3B4
    // 0x80233398: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233398: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8023339C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802333A0: jr          $ra
    // 0x802333A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802333A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802333A8: nop

    // 0x802333AC: nop

;}
RECOMP_FUNC void func_80226D04_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D04: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226D08: bne         $v0, $zero, L_80226D20
    if (ctx->r2 != 0) {
        // 0x80226D0C: nop
    
            goto L_80226D20;
    }
    // 0x80226D0C: nop

    // 0x80226D10: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80226D14: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80226D18: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80226D1C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80226D20:
    // 0x80226D20: jr          $ra
    // 0x80226D24: nop

    TRACE_RETURN()
    return;
    // 0x80226D24: nop

;}
RECOMP_FUNC void func_80231524_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231528: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023152C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231530: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80231534: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80231538: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023153C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231540: jal         0x8004DD04
    // 0x80231544: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80231544: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231548: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023154C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231550: jal         0x80050294
    // 0x80231554: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80231554: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80231558: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023155C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231560: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231568: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023156C: jr          $ra
    // 0x80231570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E9DC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E9DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E9E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E9E4: jal         0x8004F488
    // 0x8022E9E8: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8022E9E8: nop

    after_0:
    // 0x8022E9EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E9F0: jr          $ra
    // 0x8022E9F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E9F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234B20_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234B20: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80234B24: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80234B28: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x80234B2C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80234B30: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80234B34: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80234B38: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80234B3C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80234B40: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80234B44: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80234B48: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80234B4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80234B50: lw          $s7, 0x18($fp)
    ctx->r23 = MEM_W(ctx->r30, 0X18);
    // 0x80234B54: lw          $s4, 0x8($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X8);
    // 0x80234B58: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x80234B5C: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x80234B60: addiu       $s3, $s3, 0x160
    ctx->r19 = ADD32(ctx->r19, 0X160);
    // 0x80234B64: lb          $v1, 0x0($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X0);
    // 0x80234B68: addiu       $a3, $fp, 0x14
    ctx->r7 = ADD32(ctx->r30, 0X14);
    // 0x80234B6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234B70: beq         $v1, $v0, L_80234E7C
    if (ctx->r3 == ctx->r2) {
        // 0x80234B74: sw          $a3, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r7;
            goto L_80234E7C;
    }
    // 0x80234B74: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x80234B78: addiu       $s2, $s4, 0x10
    ctx->r18 = ADD32(ctx->r20, 0X10);
    // 0x80234B7C: addiu       $s5, $s4, 0xC
    ctx->r21 = ADD32(ctx->r20, 0XC);
L_80234B80:
    // 0x80234B80: jal         0x8006033C
    // 0x80234B84: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80234B84: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_0:
    // 0x80234B88: bnel        $v0, $zero, L_80234E64
    if (ctx->r2 != 0) {
        // 0x80234B8C: addiu       $s2, $s2, 0x18
        ctx->r18 = ADD32(ctx->r18, 0X18);
            goto L_80234E64;
    }
    goto skip_0;
    // 0x80234B8C: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
    skip_0:
    // 0x80234B90: lbu         $v1, -0xF($s2)
    ctx->r3 = MEM_BU(ctx->r18, -0XF);
    // 0x80234B94: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80234B98: beq         $v1, $v0, L_80234C90
    if (ctx->r3 == ctx->r2) {
        // 0x80234B9C: slti        $v0, $v1, 0x41
        ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
            goto L_80234C90;
    }
    // 0x80234B9C: slti        $v0, $v1, 0x41
    ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x80234BA0: beq         $v0, $zero, L_80234BB8
    if (ctx->r2 == 0) {
        // 0x80234BA4: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80234BB8;
    }
    // 0x80234BA4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80234BA8: beq         $v1, $v0, L_80234BD4
    if (ctx->r3 == ctx->r2) {
        // 0x80234BAC: nop
    
            goto L_80234BD4;
    }
    // 0x80234BAC: nop

    // 0x80234BB0: j           L_80234E64
    // 0x80234BB4: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
        goto L_80234E64;
    // 0x80234BB4: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_80234BB8:
    // 0x80234BB8: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80234BBC: beq         $v1, $v0, L_80234D4C
    if (ctx->r3 == ctx->r2) {
        // 0x80234BC0: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_80234D4C;
    }
    // 0x80234BC0: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80234BC4: beq         $v1, $v0, L_80234DF8
    if (ctx->r3 == ctx->r2) {
        // 0x80234BC8: nop
    
            goto L_80234DF8;
    }
    // 0x80234BC8: nop

    // 0x80234BCC: j           L_80234E64
    // 0x80234BD0: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
        goto L_80234E64;
    // 0x80234BD0: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_80234BD4:
    // 0x80234BD4: jal         0x8004EEAC
    // 0x80234BD8: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_1;
    // 0x80234BD8: nop

    after_1:
    // 0x80234BDC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80234BE0: beq         $s1, $zero, L_80234E60
    if (ctx->r17 == 0) {
        // 0x80234BE4: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_80234E60;
    }
    // 0x80234BE4: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x80234BE8: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80234BEC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80234BF0: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x80234BF4: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80234BF8: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x80234BFC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80234C00: lbu         $v0, -0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XC);
    // 0x80234C04: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x80234C08: lbu         $v0, -0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XB);
    // 0x80234C0C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x80234C10: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x80234C14: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80234C18: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x80234C1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234C20: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x80234C24: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80234C28: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x80234C2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234C30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234C34: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x80234C38: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80234C3C: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x80234C40: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80234C44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234C48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234C4C: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x80234C50: jal         0x8009A3B4
    // 0x80234C54: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234C54: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_2:
    // 0x80234C58: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80234C5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234C60: jal         0x8009A3B4
    // 0x80234C64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80234C64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80234C68: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x80234C6C: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x80234C70: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x80234C74: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80234C78: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x80234C7C: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x80234C80: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80234C84: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x80234C88: j           L_80234E54
    // 0x80234C8C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_80234E54;
    // 0x80234C8C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_80234C90:
    // 0x80234C90: jal         0x8004EF48
    // 0x80234C94: nop

    func_8004EF48_2A348(rdram, ctx);
        goto after_4;
    // 0x80234C94: nop

    after_4:
    // 0x80234C98: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80234C9C: beq         $s1, $zero, L_80234E60
    if (ctx->r17 == 0) {
        // 0x80234CA0: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_80234E60;
    }
    // 0x80234CA0: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x80234CA4: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80234CA8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80234CAC: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x80234CB0: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80234CB4: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x80234CB8: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80234CBC: lbu         $v0, -0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XC);
    // 0x80234CC0: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x80234CC4: lbu         $v0, -0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XB);
    // 0x80234CC8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x80234CCC: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x80234CD0: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80234CD4: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x80234CD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234CDC: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x80234CE0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80234CE4: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x80234CE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234CEC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234CF0: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x80234CF4: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80234CF8: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x80234CFC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80234D00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234D04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234D08: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x80234D0C: jal         0x8009A3B4
    // 0x80234D10: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80234D10: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_5:
    // 0x80234D14: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80234D18: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234D1C: jal         0x8009A3B4
    // 0x80234D20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80234D20: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80234D24: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x80234D28: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x80234D2C: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x80234D30: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80234D34: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x80234D38: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x80234D3C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80234D40: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x80234D44: j           L_80234E54
    // 0x80234D48: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_80234E54;
    // 0x80234D48: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_80234D4C:
    // 0x80234D4C: jal         0x8004EFE4
    // 0x80234D50: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_7;
    // 0x80234D50: nop

    after_7:
    // 0x80234D54: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80234D58: beq         $s1, $zero, L_80234E60
    if (ctx->r17 == 0) {
        // 0x80234D5C: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_80234E60;
    }
    // 0x80234D5C: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x80234D60: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80234D64: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80234D68: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x80234D6C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80234D70: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x80234D74: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80234D78: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x80234D7C: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80234D80: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x80234D84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234D88: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x80234D8C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80234D90: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x80234D94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234D98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234D9C: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x80234DA0: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80234DA4: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x80234DA8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80234DAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234DB0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234DB4: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x80234DB8: jal         0x8009A3B4
    // 0x80234DBC: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80234DBC: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_8:
    // 0x80234DC0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80234DC4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234DC8: jal         0x8009A3B4
    // 0x80234DCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80234DCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80234DD0: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x80234DD4: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x80234DD8: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x80234DDC: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80234DE0: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x80234DE4: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x80234DE8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80234DEC: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x80234DF0: j           L_80234E54
    // 0x80234DF4: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_80234E54;
    // 0x80234DF4: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_80234DF8:
    // 0x80234DF8: jal         0x8004F2C4
    // 0x80234DFC: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_10;
    // 0x80234DFC: nop

    after_10:
    // 0x80234E00: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80234E04: beq         $s0, $zero, L_80234E60
    if (ctx->r16 == 0) {
        // 0x80234E08: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_80234E60;
    }
    // 0x80234E08: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80234E0C: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80234E10: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80234E14: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x80234E18: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80234E1C: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x80234E20: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80234E24: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x80234E28: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80234E2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234E30: jal         0x8009A3B4
    // 0x80234E34: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80234E34: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_11:
    // 0x80234E38: lhu         $v0, -0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0X4);
    // 0x80234E3C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80234E40: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80234E44: lhu         $v0, -0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0X2);
    // 0x80234E48: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80234E4C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80234E50: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_80234E54:
    // 0x80234E54: sb          $v1, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r3;
    // 0x80234E58: sb          $s6, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r22;
    // 0x80234E5C: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
L_80234E60:
    // 0x80234E60: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_80234E64:
    // 0x80234E64: addiu       $s5, $s5, 0x18
    ctx->r21 = ADD32(ctx->r21, 0X18);
    // 0x80234E68: addiu       $s4, $s4, 0x18
    ctx->r20 = ADD32(ctx->r20, 0X18);
    // 0x80234E6C: lb          $v1, 0x0($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X0);
    // 0x80234E70: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234E74: bne         $v1, $v0, L_80234B80
    if (ctx->r3 != ctx->r2) {
        // 0x80234E78: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_80234B80;
    }
    // 0x80234E78: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_80234E7C:
    // 0x80234E7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234E80: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80234E84: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80234E88: sb          $v0, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r2;
    // 0x80234E8C: lhu         $v0, 0x2($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X2);
    // 0x80234E90: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
    // 0x80234E94: sb          $v0, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r2;
    // 0x80234E98: lhu         $v0, 0x0($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X0);
    // 0x80234E9C: sb          $v0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r2;
    // 0x80234EA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234EA4: sb          $v0, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r2;
    // 0x80234EA8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80234EAC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80234EB0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80234EB4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80234EB8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80234EBC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80234EC0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80234EC4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80234EC8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80234ECC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80234ED0: jr          $ra
    // 0x80234ED4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80234ED4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80234ED8: nop

    // 0x80234EDC: nop

;}
RECOMP_FUNC void func_802320F0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802320F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802320F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802320F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802320FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232100: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80232104: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80232108: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x8023210C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232110: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80232114: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80232118: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x8023211C: bne         $v1, $v0, L_8023213C
    if (ctx->r3 != ctx->r2) {
        // 0x80232120: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023213C;
    }
    // 0x80232120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80232128: jal         0x80050294
    // 0x8023212C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023212C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80232130: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232134: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232138: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023213C:
    // 0x8023213C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232140: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232144: jr          $ra
    // 0x80232148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228E3C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E3C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228E40: addiu       $v1, $zero, 0x1F4
    ctx->r3 = ADD32(0, 0X1F4);
    // 0x80228E44: sh          $v1, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r3;
    // 0x80228E48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228E4C: jr          $ra
    // 0x80228E50: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80228E50: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80235F74_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235F74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235F78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235F7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235F80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235F84: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80235F88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235F8C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235F90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235F94: lw          $v0, -0xB98($at)
    ctx->r2 = MEM_W(ctx->r1, -0XB98);
    // 0x80235F98: jalr        $v0
    // 0x80235F9C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235F9C: nop

    after_0:
    // 0x80235FA0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80235FA4: jal         0x8023B9F0
    // 0x80235FA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8023B9F0_ovl2(rdram, ctx);
        goto after_1;
    // 0x80235FA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x80235FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235FB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235FB4: jr          $ra
    // 0x80235FB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235FB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802364BC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802364BC: jr          $ra
    // 0x802364C0: nop

    TRACE_RETURN()
    return;
    // 0x802364C0: nop

;}
RECOMP_FUNC void func_8022C34C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C34C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C350: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C354: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C358: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C35C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C360: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x8022C364: addiu       $t0, $t0, 0x49B0
    ctx->r8 = ADD32(ctx->r8, 0X49B0);
    // 0x8022C368: beq         $v1, $zero, L_8022C384
    if (ctx->r3 == 0) {
        // 0x8022C36C: addiu       $a3, $s0, 0x4E0
        ctx->r7 = ADD32(ctx->r16, 0X4E0);
            goto L_8022C384;
    }
    // 0x8022C36C: addiu       $a3, $s0, 0x4E0
    ctx->r7 = ADD32(ctx->r16, 0X4E0);
    // 0x8022C370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C374: beq         $v1, $v0, L_8022C394
    if (ctx->r3 == ctx->r2) {
        // 0x8022C378: nop
    
            goto L_8022C394;
    }
    // 0x8022C378: nop

    // 0x8022C37C: j           L_8022C5AC
    // 0x8022C380: nop

        goto L_8022C5AC;
    // 0x8022C380: nop

L_8022C384:
    // 0x8022C384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C388: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C38C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C390: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
L_8022C394:
    // 0x8022C394: lh          $a2, 0x14($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X14);
    // 0x8022C398: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022C39C: lh          $a0, -0x1560($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1560);
    // 0x8022C3A0: lh          $a1, 0x18($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X18);
    // 0x8022C3A4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022C3A8: lh          $v1, -0x155E($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X155E);
    // 0x8022C3AC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C3B0: lh          $v0, -0x155C($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X155C);
    // 0x8022C3B4: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x8022C3B8: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x8022C3BC: beq         $v0, $zero, L_8022C3E8
    if (ctx->r2 == 0) {
        // 0x8022C3C0: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_8022C3E8;
    }
    // 0x8022C3C0: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8022C3C4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C3C8: lh          $v0, -0x155A($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X155A);
    // 0x8022C3CC: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022C3D0: beq         $v0, $zero, L_8022C3E8
    if (ctx->r2 == 0) {
        // 0x8022C3D4: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022C3E8;
    }
    // 0x8022C3D4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022C3D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C3DC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022C3E0: j           L_8022C5A8
    // 0x8022C3E4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_8022C5A8;
    // 0x8022C3E4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022C3E8:
    // 0x8022C3E8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8022C3EC: lh          $a2, 0x49C4($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X49C4);
    // 0x8022C3F0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022C3F4: lh          $a0, -0x14E8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X14E8);
    // 0x8022C3F8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C3FC: lh          $a1, 0x49C8($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X49C8);
    // 0x8022C400: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022C404: lh          $v1, -0x14E6($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X14E6);
    // 0x8022C408: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C40C: lh          $v0, -0x14E4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X14E4);
    // 0x8022C410: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x8022C414: sltu        $v0, $v0, $a2
    ctx->r2 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x8022C418: bne         $v0, $zero, L_8022C434
    if (ctx->r2 != 0) {
        // 0x8022C41C: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_8022C434;
    }
    // 0x8022C41C: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8022C420: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C424: lh          $v0, -0x14E2($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X14E2);
    // 0x8022C428: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x8022C42C: beq         $v0, $zero, L_8022C448
    if (ctx->r2 == 0) {
        // 0x8022C430: lui         $v0, 0xC
        ctx->r2 = S32(0XC << 16);
            goto L_8022C448;
    }
    // 0x8022C430: lui         $v0, 0xC
    ctx->r2 = S32(0XC << 16);
L_8022C434:
    // 0x8022C434: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022C438: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022C43C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022C440: j           L_8022C5AC
    // 0x8022C444: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022C5AC;
    // 0x8022C444: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022C448:
    // 0x8022C448: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022C44C: ori         $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 | 0X7FFF;
    // 0x8022C450: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022C454: bne         $v0, $zero, L_8022C4A0
    if (ctx->r2 != 0) {
        // 0x8022C458: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_8022C4A0;
    }
    // 0x8022C458: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C45C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022C460: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022C464: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x8022C468: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C46C: lh          $v1, 0x56($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X56);
    // 0x8022C470: addiu       $a3, $t0, 0x1C
    ctx->r7 = ADD32(ctx->r8, 0X1C);
    // 0x8022C474: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022C478: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C47C: jal         0x8004FAEC
    // 0x8022C480: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_0;
    // 0x8022C480: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022C484: bne         $v0, $zero, L_8022C5A4
    if (ctx->r2 != 0) {
        // 0x8022C488: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_8022C5A4;
    }
    // 0x8022C488: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022C48C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C490: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C494: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022C498: j           L_8022C5A8
    // 0x8022C49C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_8022C5A8;
    // 0x8022C49C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022C4A0:
    // 0x8022C4A0: lh          $v0, 0x3C($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X3C);
    // 0x8022C4A4: bne         $v0, $zero, L_8022C4F8
    if (ctx->r2 != 0) {
        // 0x8022C4A8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C4F8;
    }
    // 0x8022C4A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C4AC: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022C4B0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022C4B4: beq         $v0, $zero, L_8022C4F8
    if (ctx->r2 == 0) {
        // 0x8022C4B8: addiu       $a2, $zero, 0x400
        ctx->r6 = ADD32(0, 0X400);
            goto L_8022C4F8;
    }
    // 0x8022C4B8: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022C4BC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C4C0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022C4C4: lh          $v1, 0x56($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X56);
    // 0x8022C4C8: addiu       $a3, $t0, 0x1C
    ctx->r7 = ADD32(ctx->r8, 0X1C);
    // 0x8022C4CC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022C4D0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C4D4: jal         0x8004FAEC
    // 0x8022C4D8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x8022C4D8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022C4DC: bne         $v0, $zero, L_8022C5A4
    if (ctx->r2 != 0) {
        // 0x8022C4E0: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8022C5A4;
    }
    // 0x8022C4E0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022C4E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C4E8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C4EC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022C4F0: j           L_8022C5A8
    // 0x8022C4F4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_8022C5A8;
    // 0x8022C4F4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022C4F8:
    // 0x8022C4F8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022C4FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C500: jal         0x8004DA90
    // 0x8022C504: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022C504: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022C508: jal         0x80040F30
    // 0x8022C50C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022C50C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C510: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022C514: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022C518: bne         $v0, $zero, L_8022C528
    if (ctx->r2 != 0) {
        // 0x8022C51C: addiu       $a0, $zero, 0xC8
        ctx->r4 = ADD32(0, 0XC8);
            goto L_8022C528;
    }
    // 0x8022C51C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x8022C520: jal         0x8002A33C
    // 0x8022C524: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022C524: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
L_8022C528:
    // 0x8022C528: jal         0x8003E934
    // 0x8022C52C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_5;
    // 0x8022C52C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022C530: lh          $a2, 0x14($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X14);
    // 0x8022C534: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C538: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C53C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022C540: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022C544: lh          $a0, -0x1554($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1554);
    // 0x8022C548: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8022C54C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022C550: lh          $v1, -0x1552($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X1552);
    // 0x8022C554: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C558: lh          $v0, -0x1550($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1550);
    // 0x8022C55C: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x8022C560: sltu        $v0, $v0, $a2
    ctx->r2 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x8022C564: bne         $v0, $zero, L_8022C580
    if (ctx->r2 != 0) {
        // 0x8022C568: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_8022C580;
    }
    // 0x8022C568: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8022C56C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C570: lh          $v0, -0x154E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X154E);
    // 0x8022C574: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x8022C578: beq         $v0, $zero, L_8022C5AC
    if (ctx->r2 == 0) {
        // 0x8022C57C: nop
    
            goto L_8022C5AC;
    }
    // 0x8022C57C: nop

L_8022C580:
    // 0x8022C580: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C584: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022C588: jal         0x8009A3B4
    // 0x8022C58C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022C58C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022C590: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C594: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022C598: jal         0x8009A3B4
    // 0x8022C59C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022C59C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x8022C5A0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8022C5A4:
    // 0x8022C5A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C5A8:
    // 0x8022C5A8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022C5AC:
    // 0x8022C5AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C5B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C5B4: jr          $ra
    // 0x8022C5B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C5B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236410_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236414: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236418: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023641C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236420: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236424: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236428: lw          $v0, -0xB48($at)
    ctx->r2 = MEM_W(ctx->r1, -0XB48);
    // 0x8023642C: jalr        $v0
    // 0x80236430: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236430: nop

    after_0:
    // 0x80236434: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236438: jr          $ra
    // 0x8023643C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023643C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802300E0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802300E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802300E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802300E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802300EC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802300F0: addiu       $a0, $a0, 0xB0
    ctx->r4 = ADD32(ctx->r4, 0XB0);
    // 0x802300F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802300F8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x802300FC: beq         $v1, $zero, L_80230198
    if (ctx->r3 == 0) {
        // 0x80230100: nop
    
            goto L_80230198;
    }
    // 0x80230100: nop

    // 0x80230104: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230108: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x8023010C: lh          $v0, 0x2($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2);
    // 0x80230110: bgtz        $v0, L_80230128
    if (SIGNED(ctx->r2) > 0) {
        // 0x80230114: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80230128;
    }
    // 0x80230114: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230118: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8023011C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80230120: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230124: sh          $zero, 0xB4($at)
    MEM_H(0XB4, ctx->r1) = 0;
L_80230128:
    // 0x80230128: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023012C: lhu         $v0, 0xB4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB4);
    // 0x80230130: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80230134: lw          $v1, 0xB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB0);
    // 0x80230138: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023013C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230140: sh          $v0, 0xB4($at)
    MEM_H(0XB4, ctx->r1) = ctx->r2;
    // 0x80230144: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x80230148: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023014C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80230150: bne         $v0, $v1, L_80230198
    if (ctx->r2 != ctx->r3) {
        // 0x80230154: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80230198;
    }
    // 0x80230154: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80230158: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8023015C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80230160: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80230164: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230168: lw          $v0, 0xB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB0);
    // 0x8023016C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230170: sh          $zero, 0xB4($at)
    MEM_H(0XB4, ctx->r1) = 0;
    // 0x80230174: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80230178: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x8023017C: jal         0x8003B85C
    // 0x80230180: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80230180: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80230184: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80230188: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8023018C: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80230190: jal         0x8003B840
    // 0x80230194: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80230194: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80230198:
    // 0x80230198: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023019C: addiu       $a0, $a0, 0xB8
    ctx->r4 = ADD32(ctx->r4, 0XB8);
    // 0x802301A0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x802301A4: beq         $v1, $zero, L_80230240
    if (ctx->r3 == 0) {
        // 0x802301A8: nop
    
            goto L_80230240;
    }
    // 0x802301A8: nop

    // 0x802301AC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802301B0: lw          $v0, 0xB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB8);
    // 0x802301B4: lh          $v0, 0x2($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2);
    // 0x802301B8: bgtz        $v0, L_802301D0
    if (SIGNED(ctx->r2) > 0) {
        // 0x802301BC: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_802301D0;
    }
    // 0x802301BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802301C0: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x802301C4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x802301C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802301CC: sh          $zero, 0xBC($at)
    MEM_H(0XBC, ctx->r1) = 0;
L_802301D0:
    // 0x802301D0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802301D4: lhu         $v0, 0xBC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBC);
    // 0x802301D8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802301DC: lw          $v1, 0xB8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB8);
    // 0x802301E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802301E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802301E8: sh          $v0, 0xBC($at)
    MEM_H(0XBC, ctx->r1) = ctx->r2;
    // 0x802301EC: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x802301F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802301F4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802301F8: bne         $v0, $v1, L_80230240
    if (ctx->r2 != ctx->r3) {
        // 0x802301FC: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80230240;
    }
    // 0x802301FC: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80230200: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80230204: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80230208: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8023020C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230210: lw          $v0, 0xB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB8);
    // 0x80230214: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230218: sh          $zero, 0xBC($at)
    MEM_H(0XBC, ctx->r1) = 0;
    // 0x8023021C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80230220: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80230224: jal         0x8003B85C
    // 0x80230228: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80230228: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x8023022C: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80230230: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80230234: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80230238: jal         0x8003B840
    // 0x8023023C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8023023C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80230240:
    // 0x80230240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230244: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230248: jr          $ra
    // 0x8023024C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023024C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802264F8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264F8: jr          $ra
    // 0x802264FC: nop

    TRACE_RETURN()
    return;
    // 0x802264FC: nop

;}
RECOMP_FUNC void func_80238440_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238444: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238448: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023844C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238450: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238454: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238458: lw          $v0, -0x870($at)
    ctx->r2 = MEM_W(ctx->r1, -0X870);
    // 0x8023845C: jalr        $v0
    // 0x80238460: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80238460: nop

    after_0:
    // 0x80238464: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238468: jr          $ra
    // 0x8023846C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023846C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B498_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B49C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B4A0: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022B4A4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8022B4A8: beq         $v1, $zero, L_8022B4C4
    if (ctx->r3 == 0) {
        // 0x8022B4AC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022B4C4;
    }
    // 0x8022B4AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B4B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B4B4: beq         $v1, $v0, L_8022B4C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022B4B8: nop
    
            goto L_8022B4C8;
    }
    // 0x8022B4B8: nop

    // 0x8022B4BC: j           L_8022B4E8
    // 0x8022B4C0: nop

        goto L_8022B4E8;
    // 0x8022B4C0: nop

L_8022B4C4:
    // 0x8022B4C4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022B4C8:
    // 0x8022B4C8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022B4CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B4D0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022B4D4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B4D8: bne         $v0, $zero, L_8022B4E8
    if (ctx->r2 != 0) {
        // 0x8022B4DC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B4E8;
    }
    // 0x8022B4DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B4E0: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x8022B4E4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_8022B4E8:
    // 0x8022B4E8: jal         0x8022B70C
    // 0x8022B4EC: nop

    func_8022B70C_ovl2(rdram, ctx);
        goto after_0;
    // 0x8022B4EC: nop

    after_0:
    // 0x8022B4F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B4F4: jr          $ra
    // 0x8022B4F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B4F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B544_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B548: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B54C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B554: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8023B558: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8023B55C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B560: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023B564: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023B568: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023B56C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023B570: beq         $v1, $zero, L_8023B590
    if (ctx->r3 == 0) {
        // 0x8023B574: nop
    
            goto L_8023B590;
    }
    // 0x8023B574: nop

    // 0x8023B578: jal         0x8023B95C
    // 0x8023B57C: nop

    func_8023B95C_ovl2(rdram, ctx);
        goto after_0;
    // 0x8023B57C: nop

    after_0:
    // 0x8023B580: beq         $v0, $zero, L_8023B590
    if (ctx->r2 == 0) {
        // 0x8023B584: nop
    
            goto L_8023B590;
    }
    // 0x8023B584: nop

    // 0x8023B588: jal         0x8004F5C4
    // 0x8023B58C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x8023B58C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023B590:
    // 0x8023B590: jal         0x8023B5A8
    // 0x8023B594: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023B5A8_ovl2(rdram, ctx);
        goto after_2;
    // 0x8023B594: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023B598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B59C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B5A0: jr          $ra
    // 0x8023B5A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B5A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239904_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239904: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239908: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023990C: jal         0x8004F5C4
    // 0x80239910: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80239910: nop

    after_0:
    // 0x80239914: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239918: jr          $ra
    // 0x8023991C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023991C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A4A8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A4A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A4AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A4B0: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023A4B4: bne         $v0, $zero, L_8023A520
    if (ctx->r2 != 0) {
        // 0x8023A4B8: nop
    
            goto L_8023A520;
    }
    // 0x8023A4B8: nop

    // 0x8023A4BC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023A4C0: bne         $v0, $zero, L_8023A518
    if (ctx->r2 != 0) {
        // 0x8023A4C4: nop
    
            goto L_8023A518;
    }
    // 0x8023A4C4: nop

    // 0x8023A4C8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8023A4CC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023A4D0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8023A4D4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023A4D8: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8023A4DC: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8023A4E0: bnel        $v1, $v0, L_8023A4F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023A4E4: lui         $v0, 0x3C88
        ctx->r2 = S32(0X3C88 << 16);
            goto L_8023A4F4;
    }
    goto skip_0;
    // 0x8023A4E4: lui         $v0, 0x3C88
    ctx->r2 = S32(0X3C88 << 16);
    skip_0:
    // 0x8023A4E8: lui         $v0, 0x3CC8
    ctx->r2 = S32(0X3CC8 << 16);
    // 0x8023A4EC: j           L_8023A4F8
    // 0x8023A4F0: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
        goto L_8023A4F8;
    // 0x8023A4F0: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
L_8023A4F4:
    // 0x8023A4F4: ori         $v0, $v0, 0x26
    ctx->r2 = ctx->r2 | 0X26;
L_8023A4F8:
    // 0x8023A4F8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x8023A4FC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023A500: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8023A504: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023A508: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x8023A50C: sh          $zero, 0x26($a0)
    MEM_H(0X26, ctx->r4) = 0;
    // 0x8023A510: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A514: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8023A518:
    // 0x8023A518: jal         0x8023A020
    // 0x8023A51C: nop

    func_8023A020_ovl2(rdram, ctx);
        goto after_0;
    // 0x8023A51C: nop

    after_0:
L_8023A520:
    // 0x8023A520: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A524: jr          $ra
    // 0x8023A528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237C34_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237C34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237C38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237C3C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237C40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237C44: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80237C48: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80237C4C: jal         0x8006033C
    // 0x80237C50: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80237C50: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_0:
    // 0x80237C54: bne         $v0, $zero, L_80237D2C
    if (ctx->r2 != 0) {
        // 0x80237C58: nop
    
            goto L_80237D2C;
    }
    // 0x80237C58: nop

    // 0x80237C5C: jal         0x8006033C
    // 0x80237C60: addiu       $a0, $zero, 0x61E
    ctx->r4 = ADD32(0, 0X61E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80237C60: addiu       $a0, $zero, 0x61E
    ctx->r4 = ADD32(0, 0X61E);
    after_1:
    // 0x80237C64: bne         $v0, $zero, L_80237D2C
    if (ctx->r2 != 0) {
        // 0x80237C68: nop
    
            goto L_80237D2C;
    }
    // 0x80237C68: nop

    // 0x80237C6C: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80237C70: beq         $v1, $zero, L_80237C88
    if (ctx->r3 == 0) {
        // 0x80237C74: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237C88;
    }
    // 0x80237C74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237C78: beq         $v1, $v0, L_80237CDC
    if (ctx->r3 == ctx->r2) {
        // 0x80237C7C: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80237CDC;
    }
    // 0x80237C7C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80237C80: j           L_80237D2C
    // 0x80237C84: nop

        goto L_80237D2C;
    // 0x80237C84: nop

L_80237C88:
    // 0x80237C88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237C8C: jal         0x80238028
    // 0x80237C90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_2;
    // 0x80237C90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80237C94: beq         $v0, $zero, L_80237D2C
    if (ctx->r2 == 0) {
        // 0x80237C98: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80237D2C;
    }
    // 0x80237C98: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80237C9C: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80237CA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237CA4: jal         0x800616FC
    // 0x80237CA8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80237CA8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_3:
    // 0x80237CAC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237CB0: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237CB4: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x80237CB8: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80237CBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237CC0: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80237CC4: jal         0x8004CB2C
    // 0x80237CC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_4;
    // 0x80237CC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80237CCC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80237CD0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237CD4: j           L_80237D2C
    // 0x80237CD8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
        goto L_80237D2C;
    // 0x80237CD8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80237CDC:
    // 0x80237CDC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237CE0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80237CE4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237CE8: bne         $v0, $zero, L_80237D2C
    if (ctx->r2 != 0) {
        // 0x80237CEC: nop
    
            goto L_80237D2C;
    }
    // 0x80237CEC: nop

    // 0x80237CF0: jal         0x8006036C
    // 0x80237CF4: addiu       $a0, $zero, 0x61E
    ctx->r4 = ADD32(0, 0X61E);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80237CF4: addiu       $a0, $zero, 0x61E
    ctx->r4 = ADD32(0, 0X61E);
    after_5:
    // 0x80237CF8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237CFC: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237D00: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x80237D04: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80237D08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237D0C: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80237D10: jal         0x8004CB2C
    // 0x80237D14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_6;
    // 0x80237D14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x80237D18: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80237D1C: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    // 0x80237D20: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237D24: jal         0x8006036C
    // 0x80237D28: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x80237D28: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_7:
L_80237D2C:
    // 0x80237D2C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237D30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237D34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237D38: jr          $ra
    // 0x80237D3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237D3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231B04_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231B04: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80231B08: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x80231B0C: lw          $a0, 0x98($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X98);
    // 0x80231B10: lui         $v1, 0xFFEC
    ctx->r3 = S32(0XFFEC << 16);
    // 0x80231B14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231B18: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80231B1C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80231B20: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80231B24: bne         $v1, $v0, L_80231B44
    if (ctx->r3 != ctx->r2) {
        // 0x80231B28: lui         $a0, 0x30
        ctx->r4 = S32(0X30 << 16);
            goto L_80231B44;
    }
    // 0x80231B28: lui         $a0, 0x30
    ctx->r4 = S32(0X30 << 16);
    // 0x80231B2C: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x80231B30: lw          $v1, 0x20($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X20);
    // 0x80231B34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231B38: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80231B3C: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x80231B40: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
L_80231B44:
    // 0x80231B44: jr          $ra
    // 0x80231B48: nop

    TRACE_RETURN()
    return;
    // 0x80231B48: nop

;}
RECOMP_FUNC void func_80225584_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225584: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80225588: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022558C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80225590: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80225594: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80225598: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022559C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802255A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802255A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802255A8: lbu         $v1, 0x4($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X4);
    // 0x802255AC: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x802255B0: beq         $v0, $zero, L_80225A54
    if (ctx->r2 == 0) {
        // 0x802255B4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80225A54;
    }
    // 0x802255B4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802255B8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802255BC: addu        $at, $at, $v0
    gpr jr_addend_802255C4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802255C0: lw          $v0, -0x2C8($at)
    ctx->r2 = ADD32(ctx->r1, -0X2C8);
    // 0x802255C4: jr          $v0
    // 0x802255C8: nop

    switch (jr_addend_802255C4 >> 2) {
        case 0: goto L_802255CC; break;
        case 1: goto L_802255E8; break;
        case 2: goto L_80225618; break;
        case 3: goto L_80225638; break;
        case 4: goto L_8022565C; break;
        case 5: goto L_80225688; break;
        case 6: goto L_8022577C; break;
        case 7: goto L_8022584C; break;
        default: switch_error(__func__, 0x802255C4, 0x8023FD38);
    }
    // 0x802255C8: nop

L_802255CC:
    // 0x802255CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802255D0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802255D4: bne         $v0, $zero, L_80225A54
    if (ctx->r2 != 0) {
        // 0x802255D8: nop
    
            goto L_80225A54;
    }
    // 0x802255D8: nop

    // 0x802255DC: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x802255E0: j           L_80225654
    // 0x802255E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225654;
    // 0x802255E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802255E8:
    // 0x802255E8: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802255EC: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x802255F0: jal         0x8006FF84
    // 0x802255F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802255F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802255F8: beq         $v0, $zero, L_80225A54
    if (ctx->r2 == 0) {
        // 0x802255FC: nop
    
            goto L_80225A54;
    }
    // 0x802255FC: nop

    // 0x80225600: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225604: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x80225608: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022560C: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x80225610: j           L_80225654
    // 0x80225614: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225654;
    // 0x80225614: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225618:
    // 0x80225618: jal         0x8002A4A4
    // 0x8022561C: nop

    func_8002A4A4_58A4(rdram, ctx);
        goto after_1;
    // 0x8022561C: nop

    after_1:
    // 0x80225620: lui         $a0, 0x105
    ctx->r4 = S32(0X105 << 16);
    // 0x80225624: jal         0x80036B1C
    // 0x80225628: ori         $a0, $a0, 0x2700
    ctx->r4 = ctx->r4 | 0X2700;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_2;
    // 0x80225628: ori         $a0, $a0, 0x2700
    ctx->r4 = ctx->r4 | 0X2700;
    after_2:
    // 0x8022562C: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x80225630: j           L_80225654
    // 0x80225634: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80225654;
    // 0x80225634: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225638:
    // 0x80225638: jal         0x80036B7C
    // 0x8022563C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_3;
    // 0x8022563C: nop

    after_3:
    // 0x80225640: beq         $v0, $zero, L_80225A54
    if (ctx->r2 == 0) {
        // 0x80225644: addiu       $v1, $zero, 0x37
        ctx->r3 = ADD32(0, 0X37);
            goto L_80225A54;
    }
    // 0x80225644: addiu       $v1, $zero, 0x37
    ctx->r3 = ADD32(0, 0X37);
    // 0x80225648: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x8022564C: sw          $v1, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r3;
    // 0x80225650: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225654:
    // 0x80225654: j           L_80225A54
    // 0x80225658: sb          $v0, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r2;
        goto L_80225A54;
    // 0x80225658: sb          $v0, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r2;
L_8022565C:
    // 0x8022565C: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x80225660: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225664: bne         $v0, $zero, L_80225A54
    if (ctx->r2 != 0) {
        // 0x80225668: sw          $v0, 0xC($s3)
        MEM_W(0XC, ctx->r19) = ctx->r2;
            goto L_80225A54;
    }
    // 0x80225668: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
    // 0x8022566C: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x80225670: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80225674: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225678: jal         0x80036E48
    // 0x8022567C: sb          $v0, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x8022567C: sb          $v0, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r2;
    after_4:
    // 0x80225680: j           L_80225A54
    // 0x80225684: nop

        goto L_80225A54;
    // 0x80225684: nop

L_80225688:
    // 0x80225688: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022568C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225690: jal         0x8005F6B4
    // 0x80225694: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_5;
    // 0x80225694: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80225698: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022569C: addiu       $v0, $v0, -0x2700
    ctx->r2 = ADD32(ctx->r2, -0X2700);
    // 0x802256A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802256A4: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802256A8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802256AC: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x802256B0: addiu       $s5, $s5, -0x22D5
    ctx->r21 = ADD32(ctx->r21, -0X22D5);
    // 0x802256B4: lui         $s4, 0x80
    ctx->r20 = S32(0X80 << 16);
    // 0x802256B8: ori         $s4, $s4, 0x8080
    ctx->r20 = ctx->r20 | 0X8080;
    // 0x802256BC: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x802256C0: addiu       $s2, $s2, -0x2840
    ctx->r18 = ADD32(ctx->r18, -0X2840);
L_802256C4:
    // 0x802256C4: jal         0x8005FA7C
    // 0x802256C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_6;
    // 0x802256C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x802256CC: beq         $s1, $zero, L_802256E4
    if (ctx->r17 == 0) {
        // 0x802256D0: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_802256E4;
    }
    // 0x802256D0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802256D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802256D8: jal         0x8004D5D4
    // 0x802256DC: addu        $a1, $s1, $s5
    ctx->r5 = ADD32(ctx->r17, ctx->r21);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_7;
    // 0x802256DC: addu        $a1, $s1, $s5
    ctx->r5 = ADD32(ctx->r17, ctx->r21);
    after_7:
    // 0x802256E0: sw          $s4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r20;
L_802256E4:
    // 0x802256E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802256E8: slti        $v0, $s1, 0x10
    ctx->r2 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x802256EC: bne         $v0, $zero, L_802256C4
    if (ctx->r2 != 0) {
        // 0x802256F0: addiu       $s2, $s2, 0x14
        ctx->r18 = ADD32(ctx->r18, 0X14);
            goto L_802256C4;
    }
    // 0x802256F0: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x802256F4: lw          $v1, 0x28($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X28);
    // 0x802256F8: lui         $v0, 0x28F
    ctx->r2 = S32(0X28F << 16);
    // 0x802256FC: ori         $v0, $v0, 0x8F8F
    ctx->r2 = ctx->r2 | 0X8F8F;
    // 0x80225700: sw          $v0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r2;
    // 0x80225704: lw          $v1, 0x60($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X60);
    // 0x80225708: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x8022570C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80225710: sw          $v0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r2;
    // 0x80225714: lw          $v0, 0x30($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X30);
    // 0x80225718: jal         0x8004F144
    // 0x8022571C: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x8022571C: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    after_8:
    // 0x80225720: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225724: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80225728: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022572C: sb          $v1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r3;
    // 0x80225730: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    // 0x80225734: addiu       $v1, $zero, -0x194
    ctx->r3 = ADD32(0, -0X194);
    // 0x80225738: sh          $v1, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = ctx->r3;
    // 0x8022573C: addiu       $v1, $zero, 0xE00
    ctx->r3 = ADD32(0, 0XE00);
    // 0x80225740: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80225744: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x80225748: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x8022574C: sh          $zero, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = 0;
    // 0x80225750: sh          $v1, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r3;
    // 0x80225754: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225758: sb          $zero, 0x61($at)
    MEM_B(0X61, ctx->r1) = 0;
    // 0x8022575C: lbu         $v1, 0x4($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X4);
    // 0x80225760: sw          $v0, 0x64($s3)
    MEM_W(0X64, ctx->r19) = ctx->r2;
    // 0x80225764: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225768: addiu       $v0, $v0, -0x2364
    ctx->r2 = ADD32(ctx->r2, -0X2364);
    // 0x8022576C: sw          $v0, 0xA4($s3)
    MEM_W(0XA4, ctx->r19) = ctx->r2;
    // 0x80225770: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225774: j           L_80225A54
    // 0x80225778: sb          $v1, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r3;
        goto L_80225A54;
    // 0x80225778: sb          $v1, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r3;
L_8022577C:
    // 0x8022577C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80225780: lbu         $v1, 0x60($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X60);
    // 0x80225784: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225788: bne         $v1, $v0, L_802257CC
    if (ctx->r3 != ctx->r2) {
        // 0x8022578C: nop
    
            goto L_802257CC;
    }
    // 0x8022578C: nop

    // 0x80225790: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80225794: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80225798: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022579C: beq         $v0, $zero, L_802257B4
    if (ctx->r2 == 0) {
        // 0x802257A0: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_802257B4;
    }
    // 0x802257A0: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x802257A4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802257A8: lw          $v0, 0x9E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9E4);
    // 0x802257AC: j           L_802257C4
    // 0x802257B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_802257C4;
    // 0x802257B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_802257B4:
    // 0x802257B4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802257B8: lw          $v0, 0x9E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9E4);
    // 0x802257BC: lui         $v1, 0xFFFE
    ctx->r3 = S32(0XFFFE << 16);
    // 0x802257C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_802257C4:
    // 0x802257C4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802257C8: sw          $v0, 0x9E4($at)
    MEM_W(0X9E4, ctx->r1) = ctx->r2;
L_802257CC:
    // 0x802257CC: lbu         $v1, 0x8($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X8);
    // 0x802257D0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802257D4: beq         $v1, $v0, L_802257EC
    if (ctx->r3 == ctx->r2) {
        // 0x802257D8: nop
    
            goto L_802257EC;
    }
    // 0x802257D8: nop

    // 0x802257DC: lw          $v0, 0xA4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XA4);
    // 0x802257E0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802257E4: jalr        $v0
    // 0x802257E8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x802257E8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_9:
L_802257EC:
    // 0x802257EC: jal         0x8005FB90
    // 0x802257F0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_10;
    // 0x802257F0: nop

    after_10:
    // 0x802257F4: jal         0x80060018
    // 0x802257F8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_11;
    // 0x802257F8: nop

    after_11:
    // 0x802257FC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225800: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225804: bne         $v0, $zero, L_80225974
    if (ctx->r2 != 0) {
        // 0x80225808: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_80225974;
    }
    // 0x80225808: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022580C: lbu         $v1, 0x9($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X9);
    // 0x80225810: bne         $v1, $v0, L_80225824
    if (ctx->r3 != ctx->r2) {
        // 0x80225814: addiu       $v0, $zero, 0x2C
        ctx->r2 = ADD32(0, 0X2C);
            goto L_80225824;
    }
    // 0x80225814: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x80225818: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x8022581C: beq         $v1, $v0, L_80225834
    if (ctx->r3 == ctx->r2) {
        // 0x80225820: nop
    
            goto L_80225834;
    }
    // 0x80225820: nop

L_80225824:
    // 0x80225824: jal         0x8006072C
    // 0x80225828: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_12;
    // 0x80225828: nop

    after_12:
    // 0x8022582C: beq         $v0, $zero, L_80225974
    if (ctx->r2 == 0) {
        // 0x80225830: nop
    
            goto L_80225974;
    }
    // 0x80225830: nop

L_80225834:
    // 0x80225834: jal         0x80036E48
    // 0x80225838: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_13;
    // 0x80225838: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_13:
    // 0x8022583C: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x80225840: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225844: j           L_80225974
    // 0x80225848: sb          $v0, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r2;
        goto L_80225974;
    // 0x80225848: sb          $v0, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r2;
L_8022584C:
    // 0x8022584C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80225850: lbu         $v1, 0x60($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X60);
    // 0x80225854: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225858: bne         $v1, $v0, L_8022589C
    if (ctx->r3 != ctx->r2) {
        // 0x8022585C: nop
    
            goto L_8022589C;
    }
    // 0x8022585C: nop

    // 0x80225860: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80225864: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80225868: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022586C: beq         $v0, $zero, L_80225884
    if (ctx->r2 == 0) {
        // 0x80225870: lui         $v1, 0x2
        ctx->r3 = S32(0X2 << 16);
            goto L_80225884;
    }
    // 0x80225870: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x80225874: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80225878: lw          $v0, 0x9E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9E4);
    // 0x8022587C: j           L_80225894
    // 0x80225880: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_80225894;
    // 0x80225880: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80225884:
    // 0x80225884: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80225888: lw          $v0, 0x9E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9E4);
    // 0x8022588C: lui         $v1, 0xFFFE
    ctx->r3 = S32(0XFFFE << 16);
    // 0x80225890: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80225894:
    // 0x80225894: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225898: sw          $v0, 0x9E4($at)
    MEM_W(0X9E4, ctx->r1) = ctx->r2;
L_8022589C:
    // 0x8022589C: lbu         $v1, 0x8($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X8);
    // 0x802258A0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802258A4: beq         $v1, $v0, L_802258BC
    if (ctx->r3 == ctx->r2) {
        // 0x802258A8: nop
    
            goto L_802258BC;
    }
    // 0x802258A8: nop

    // 0x802258AC: lw          $v0, 0xA4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XA4);
    // 0x802258B0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802258B4: jalr        $v0
    // 0x802258B8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_14;
    // 0x802258B8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_14:
L_802258BC:
    // 0x802258BC: jal         0x8005FB90
    // 0x802258C0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_15;
    // 0x802258C0: nop

    after_15:
    // 0x802258C4: jal         0x80060018
    // 0x802258C8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_16;
    // 0x802258C8: nop

    after_16:
    // 0x802258CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802258D0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802258D4: bne         $v0, $zero, L_80225974
    if (ctx->r2 != 0) {
        // 0x802258D8: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80225974;
    }
    // 0x802258D8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802258DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802258E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258E4: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802258E8: addiu       $v0, $zero, 0xB06
    ctx->r2 = ADD32(0, 0XB06);
    // 0x802258EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258F0: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x802258F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802258F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258FC: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80225900: addiu       $v0, $zero, -0x12E1
    ctx->r2 = ADD32(0, -0X12E1);
    // 0x80225904: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225908: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8022590C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225910: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225914: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x80225918: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022591C: sb          $zero, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = 0;
    // 0x80225920: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225924: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225928: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022592C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225930: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225934: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225938: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022593C: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x80225940: jal         0x80060590
    // 0x80225944: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_80060590_3B990(rdram, ctx);
        goto after_17;
    // 0x80225944: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_17:
    // 0x80225948: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022594C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80225950: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225954: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80225958: jal         0x80070050
    // 0x8022595C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_18;
    // 0x8022595C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    after_18:
    // 0x80225960: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225964: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225968: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022596C: jal         0x80036B00
    // 0x80225970: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
    func_80036B00_11F00(rdram, ctx);
        goto after_19;
    // 0x80225970: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
    after_19:
L_80225974:
    // 0x80225974: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225978: lbu         $v0, 0x61($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X61);
    // 0x8022597C: beq         $v0, $zero, L_80225A54
    if (ctx->r2 == 0) {
        // 0x80225980: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80225A54;
    }
    // 0x80225980: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225984: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x80225988: lbu         $a3, 0x65($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X65);
    // 0x8022598C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225990: lbu         $a0, 0x62($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X62);
    // 0x80225994: lui         $t0, 0x8024
    ctx->r8 = S32(0X8024 << 16);
    // 0x80225998: lbu         $t0, 0x63($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X63);
    // 0x8022599C: lui         $t1, 0x8024
    ctx->r9 = S32(0X8024 << 16);
    // 0x802259A0: lbu         $t1, 0x64($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X64);
    // 0x802259A4: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x802259A8: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x802259AC: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x802259B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802259B4: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x802259B8: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x802259BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802259C0: sll         $a3, $a3, 5
    ctx->r7 = S32(ctx->r7 << 5);
    // 0x802259C4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x802259C8: sb          $a0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r4;
    // 0x802259CC: sb          $t0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r8;
    // 0x802259D0: sb          $t1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r9;
    // 0x802259D4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802259D8: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x802259DC: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x802259E0: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x802259E4: ori         $a3, $a3, 0xF
    ctx->r7 = ctx->r7 | 0XF;
    // 0x802259E8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x802259EC: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x802259F0: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x802259F4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802259F8: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x802259FC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80225A00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80225A04: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x80225A08: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225A0C: sw          $s1, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r17;
    // 0x80225A10: jal         0x8003055C
    // 0x80225A14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_20;
    // 0x80225A14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_20:
    // 0x80225A18: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225A1C: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80225A20: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80225A24: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x80225A28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80225A2C: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x80225A30: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225A34: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80225A38: jal         0x8002FD30
    // 0x80225A3C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_21;
    // 0x80225A3C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_21:
    // 0x80225A40: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225A44: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80225A48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80225A4C: jal         0x8002FD30
    // 0x80225A50: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_22;
    // 0x80225A50: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_22:
L_80225A54:
    // 0x80225A54: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80225A58: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80225A5C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80225A60: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80225A64: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80225A68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80225A6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80225A70: jr          $ra
    // 0x80225A74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80225A74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80231604_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231604: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231608: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023160C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231610: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80231614: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80231618: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8023161C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231620: jal         0x8004DD04
    // 0x80231624: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80231624: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231628: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023162C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231630: jal         0x80050294
    // 0x80231634: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80231634: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80231638: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023163C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231640: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231648: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023164C: jr          $ra
    // 0x80231650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230C70_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230C70: jr          $ra
    // 0x80230C74: nop

    TRACE_RETURN()
    return;
    // 0x80230C74: nop

;}
RECOMP_FUNC void func_802283C4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802283C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802283C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802283CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802283D0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802283D4: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x802283D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802283DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802283E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802283E4: jal         0x8004EC38
    // 0x802283E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x802283E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x802283EC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802283F0: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x802283F4: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x802283F8: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802283FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80228400: beq         $a0, $zero, L_8022841C
    if (ctx->r4 == 0) {
        // 0x80228404: sh          $v0, 0x36E($s0)
        MEM_H(0X36E, ctx->r16) = ctx->r2;
            goto L_8022841C;
    }
    // 0x80228404: sh          $v0, 0x36E($s0)
    MEM_H(0X36E, ctx->r16) = ctx->r2;
    // 0x80228408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022840C: beq         $a0, $v0, L_80228434
    if (ctx->r4 == ctx->r2) {
        // 0x80228410: nop
    
            goto L_80228434;
    }
    // 0x80228410: nop

    // 0x80228414: j           L_80228604
    // 0x80228418: nop

        goto L_80228604;
    // 0x80228418: nop

L_8022841C:
    // 0x8022841C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228420: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228424: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228428: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022842C: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80228430: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_80228434:
    // 0x80228434: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80228438: lui         $v0, 0x48
    ctx->r2 = S32(0X48 << 16);
    // 0x8022843C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80228440: beq         $v0, $zero, L_80228458
    if (ctx->r2 == 0) {
        // 0x80228444: addiu       $s2, $s0, 0x14
        ctx->r18 = ADD32(ctx->r16, 0X14);
            goto L_80228458;
    }
    // 0x80228444: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80228448: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022844C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80228450: bne         $v0, $zero, L_802285E4
    if (ctx->r2 != 0) {
        // 0x80228454: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802285E4;
    }
    // 0x80228454: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80228458:
    // 0x80228458: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022845C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228460: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228464: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228468: jal         0x8004F820
    // 0x8022846C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022846C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x80228470: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228474: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x80228478: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022847C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228480: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228484: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228488: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022848C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228490: jal         0x8004DA90
    // 0x80228494: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80228494: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x80228498: jal         0x80040F30
    // 0x8022849C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022849C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802284A0: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x802284A4: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x802284A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802284AC: bne         $v1, $v0, L_802284BC
    if (ctx->r3 != ctx->r2) {
        // 0x802284B0: addiu       $a0, $zero, 0xB0
        ctx->r4 = ADD32(0, 0XB0);
            goto L_802284BC;
    }
    // 0x802284B0: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    // 0x802284B4: jal         0x8002A33C
    // 0x802284B8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x802284B8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
L_802284BC:
    // 0x802284BC: jal         0x8003E934
    // 0x802284C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_5;
    // 0x802284C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802284C4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802284C8: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x802284CC: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x802284D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802284D4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802284D8: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x802284DC: bltz        $v0, L_802284F4
    if (SIGNED(ctx->r2) < 0) {
        // 0x802284E0: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_802284F4;
    }
    // 0x802284E0: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802284E4: beq         $v0, $zero, L_80228504
    if (ctx->r2 == 0) {
        // 0x802284E8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80228504;
    }
    // 0x802284E8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802284EC: j           L_80228528
    // 0x802284F0: nop

        goto L_80228528;
    // 0x802284F0: nop

L_802284F4:
    // 0x802284F4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x802284F8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802284FC: bne         $v0, $zero, L_80228528
    if (ctx->r2 != 0) {
        // 0x80228500: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80228528;
    }
    // 0x80228500: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80228504:
    // 0x80228504: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80228508: jal         0x8009A3B4
    // 0x8022850C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022850C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80228510: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228514: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80228518: jal         0x8009A3B4
    // 0x8022851C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022851C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x80228520: j           L_80228538
    // 0x80228524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80228538;
    // 0x80228524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228528:
    // 0x80228528: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022852C: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80228530: beq         $v0, $zero, L_8022854C
    if (ctx->r2 == 0) {
        // 0x80228534: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022854C;
    }
    // 0x80228534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228538:
    // 0x80228538: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022853C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228540: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80228544: j           L_80228604
    // 0x80228548: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80228604;
    // 0x80228548: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022854C:
    // 0x8022854C: lh          $v0, 0x36($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X36);
    // 0x80228550: bne         $v0, $zero, L_80228580
    if (ctx->r2 != 0) {
        // 0x80228554: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_80228580;
    }
    // 0x80228554: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80228558: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022855C: ori         $v0, $v0, 0x1FFF
    ctx->r2 = ctx->r2 | 0X1FFF;
    // 0x80228560: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80228564: bne         $v0, $zero, L_80228580
    if (ctx->r2 != 0) {
        // 0x80228568: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80228580;
    }
    // 0x80228568: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022856C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228570: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80228574: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228578: j           L_80228600
    // 0x8022857C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
        goto L_80228600;
    // 0x8022857C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
L_80228580:
    // 0x80228580: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x80228584: bne         $v0, $zero, L_802285F0
    if (ctx->r2 != 0) {
        // 0x80228588: lui         $v0, 0x11
        ctx->r2 = S32(0X11 << 16);
            goto L_802285F0;
    }
    // 0x80228588: lui         $v0, 0x11
    ctx->r2 = S32(0X11 << 16);
    // 0x8022858C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80228590: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80228594: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80228598: bne         $v0, $zero, L_802285F0
    if (ctx->r2 != 0) {
        // 0x8022859C: nop
    
            goto L_802285F0;
    }
    // 0x8022859C: nop

    // 0x802285A0: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x802285A4: bltzl       $v0, L_802285C0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802285A8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_802285C0;
    }
    goto skip_0;
    // 0x802285A8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x802285AC: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x802285B0: beq         $v0, $zero, L_802285F0
    if (ctx->r2 == 0) {
        // 0x802285B4: nop
    
            goto L_802285F0;
    }
    // 0x802285B4: nop

    // 0x802285B8: j           L_802285CC
    // 0x802285BC: nop

        goto L_802285CC;
    // 0x802285BC: nop

L_802285C0:
    // 0x802285C0: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x802285C4: beq         $v0, $zero, L_802285F0
    if (ctx->r2 == 0) {
        // 0x802285C8: nop
    
            goto L_802285F0;
    }
    // 0x802285C8: nop

L_802285CC:
    // 0x802285CC: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x802285D0: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x802285D4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802285D8: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x802285DC: beq         $v0, $zero, L_802285F0
    if (ctx->r2 == 0) {
        // 0x802285E0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802285F0;
    }
    // 0x802285E0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802285E4:
    // 0x802285E4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802285E8: j           L_80228604
    // 0x802285EC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80228604;
    // 0x802285EC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802285F0:
    // 0x802285F0: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x802285F4: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x802285F8: bne         $v0, $zero, L_80228604
    if (ctx->r2 != 0) {
        // 0x802285FC: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_80228604;
    }
    // 0x802285FC: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
L_80228600:
    // 0x80228600: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80228604:
    // 0x80228604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228608: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022860C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228610: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228614: jr          $ra
    // 0x80228618: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228618: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802380B0_ovl2(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x802380C0: jal         0x8006033C
    // 0x802380C4: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802380C4: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_0:
    // 0x802380C8: beq         $v0, $zero, L_802380E0
    if (ctx->r2 == 0) {
        // 0x802380CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802380E0;
    }
    // 0x802380CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802380D0: jal         0x8004F684
    // 0x802380D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x802380D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802380D8: j           L_80238168
    // 0x802380DC: nop

        goto L_80238168;
    // 0x802380DC: nop

L_802380E0:
    // 0x802380E0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802380E4: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x802380E8: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802380EC: jal         0x8004D5D4
    // 0x802380F0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x802380F0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_2:
    // 0x802380F4: jal         0x8002C678
    // 0x802380F8: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    func_8002C678_7A78(rdram, ctx);
        goto after_3;
    // 0x802380F8: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    after_3:
    // 0x802380FC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80238100: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80238104: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80238108: beq         $v1, $zero, L_8023811C
    if (ctx->r3 == 0) {
        // 0x8023810C: sw          $v0, 0x40($s0)
        MEM_W(0X40, ctx->r16) = ctx->r2;
            goto L_8023811C;
    }
    // 0x8023810C: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80238110: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80238114: j           L_80238160
    // 0x80238118: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80238160;
    // 0x80238118: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023811C:
    // 0x8023811C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80238120: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238124: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80238128: jal         0x8003E6BC
    // 0x8023812C: sh          $zero, 0x20($s0)
    MEM_H(0X20, ctx->r16) = 0;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_4;
    // 0x8023812C: sh          $zero, 0x20($s0)
    MEM_H(0X20, ctx->r16) = 0;
    after_4:
    // 0x80238130: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80238134: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238138: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023813C: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x80238140: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80238144: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238148: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x8023814C: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x80238150: ori         $a0, $a0, 0x500
    ctx->r4 = ctx->r4 | 0X500;
    // 0x80238154: jal         0x80071A70
    // 0x80238158: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    func_80071A70_4CE70(rdram, ctx);
        goto after_5;
    // 0x80238158: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    after_5:
    // 0x8023815C: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
L_80238160:
    // 0x80238160: jal         0x80060590
    // 0x80238164: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_80060590_3B990(rdram, ctx);
        goto after_6;
    // 0x80238164: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_6:
L_80238168:
    // 0x80238168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023816C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238170: jr          $ra
    // 0x80238174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231360_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231364: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231368: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023136C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231370: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80231374: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231378: sh          $v0, 0x49DC($at)
    MEM_H(0X49DC, ctx->r1) = ctx->r2;
    // 0x8023137C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80231380: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231384: sh          $v0, 0x49DE($at)
    MEM_H(0X49DE, ctx->r1) = ctx->r2;
    // 0x80231388: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023138C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231390: sh          $v0, 0x49E0($at)
    MEM_H(0X49E0, ctx->r1) = ctx->r2;
    // 0x80231394: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231398: beql        $v0, $zero, L_8023140C
    if (ctx->r2 == 0) {
        // 0x8023139C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023140C;
    }
    goto skip_0;
    // 0x8023139C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x802313A0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802313A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802313A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802313AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802313B0: lw          $v0, -0xEC4($at)
    ctx->r2 = MEM_W(ctx->r1, -0XEC4);
    // 0x802313B4: jalr        $v0
    // 0x802313B8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802313B8: nop

    after_0:
    // 0x802313BC: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802313C0: bne         $v0, $zero, L_802313D8
    if (ctx->r2 != 0) {
        // 0x802313C4: nop
    
            goto L_802313D8;
    }
    // 0x802313C4: nop

    // 0x802313C8: jal         0x8005044C
    // 0x802313CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802313CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802313D0: j           L_802313EC
    // 0x802313D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802313EC;
    // 0x802313D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802313D8:
    // 0x802313D8: jal         0x80051770
    // 0x802313DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_2;
    // 0x802313DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802313E0: jal         0x80051248
    // 0x802313E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_3;
    // 0x802313E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802313E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802313EC:
    // 0x802313EC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x802313F0: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x802313F4: jal         0x8003B564
    // 0x802313F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x802313F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x802313FC: jal         0x802311F8
    // 0x80231400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802311F8_ovl2(rdram, ctx);
        goto after_5;
    // 0x80231400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80231404: j           L_8023147C
    // 0x80231408: nop

        goto L_8023147C;
    // 0x80231408: nop

L_8023140C:
    // 0x8023140C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80231410: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231414: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231418: jal         0x8004D5D4
    // 0x8023141C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_6;
    // 0x8023141C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_6:
    // 0x80231420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231424: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231428: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023142C: jal         0x80050294
    // 0x80231430: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80231430: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_7:
    // 0x80231434: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231438: addiu       $v0, $v0, -0xFC0
    ctx->r2 = ADD32(ctx->r2, -0XFC0);
    // 0x8023143C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231440: sw          $v0, 0xE0($at)
    MEM_W(0XE0, ctx->r1) = ctx->r2;
    // 0x80231444: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231448: addiu       $v0, $v0, -0xF6C
    ctx->r2 = ADD32(ctx->r2, -0XF6C);
    // 0x8023144C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231450: sw          $v0, 0xE4($at)
    MEM_W(0XE4, ctx->r1) = ctx->r2;
    // 0x80231454: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80231458: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023145C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80231460: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80231464: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80231468: addiu       $v0, $zero, 0x2108
    ctx->r2 = ADD32(0, 0X2108);
    // 0x8023146C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231470: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80231474: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231478: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8023147C:
    // 0x8023147C: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80231480: beq         $v1, $zero, L_802314CC
    if (ctx->r3 == 0) {
        // 0x80231484: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802314CC;
    }
    // 0x80231484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231488: bne         $v1, $v0, L_802314CC
    if (ctx->r3 != ctx->r2) {
        // 0x8023148C: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_802314CC;
    }
    // 0x8023148C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80231490: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80231494: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231498: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023149C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802314A0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802314A4: bne         $v0, $v1, L_802314CC
    if (ctx->r2 != ctx->r3) {
        // 0x802314A8: addiu       $v1, $zero, 0x4210
        ctx->r3 = ADD32(0, 0X4210);
            goto L_802314CC;
    }
    // 0x802314A8: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x802314AC: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x802314B0: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802314B4: addiu       $v0, $v0, 0x421
    ctx->r2 = ADD32(ctx->r2, 0X421);
    // 0x802314B8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802314BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802314C0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802314C4: beql        $v0, $v1, L_802314CC
    if (ctx->r2 == ctx->r3) {
        // 0x802314C8: sb          $zero, 0xB($s0)
        MEM_B(0XB, ctx->r16) = 0;
            goto L_802314CC;
    }
    goto skip_1;
    // 0x802314C8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    skip_1:
L_802314CC:
    // 0x802314CC: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802314D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802314D4: sh          $v0, 0x49C4($at)
    MEM_H(0X49C4, ctx->r1) = ctx->r2;
    // 0x802314D8: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x802314DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802314E0: sh          $v0, 0x49C6($at)
    MEM_H(0X49C6, ctx->r1) = ctx->r2;
    // 0x802314E4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x802314E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802314EC: sh          $v0, 0x49C8($at)
    MEM_H(0X49C8, ctx->r1) = ctx->r2;
    // 0x802314F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802314F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802314F8: jr          $ra
    // 0x802314FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802314FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232CF4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232CF4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80232CF8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80232CFC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80232D00: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80232D04: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80232D08: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80232D0C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80232D10: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80232D14: lw          $v1, 0x9C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X9C);
    // 0x80232D18: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80232D1C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80232D20: beq         $v0, $zero, L_80232D8C
    if (ctx->r2 == 0) {
        // 0x80232D24: nop
    
            goto L_80232D8C;
    }
    // 0x80232D24: nop

    // 0x80232D28: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80232D2C: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x80232D30: jal         0x800324B4
    // 0x80232D34: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80232D34: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x80232D38: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232D3C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80232D40: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80232D44: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x80232D48: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80232D4C: sh          $v0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r2;
    // 0x80232D50: jal         0x80032498
    // 0x80232D54: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80232D54: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x80232D58: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232D5C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80232D60: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80232D64: sh          $v0, 0x48($s4)
    MEM_H(0X48, ctx->r20) = ctx->r2;
    // 0x80232D68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232D6C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80232D70: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x80232D74: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80232D78: sh          $zero, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = 0;
    // 0x80232D7C: sh          $v0, 0x4E($s4)
    MEM_H(0X4E, ctx->r20) = ctx->r2;
    // 0x80232D80: sh          $zero, 0x50($s4)
    MEM_H(0X50, ctx->r20) = 0;
    // 0x80232D84: j           L_80232DB4
    // 0x80232D88: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_80232DB4;
    // 0x80232D88: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_80232D8C:
    // 0x80232D8C: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x80232D90: beq         $v0, $zero, L_80232DAC
    if (ctx->r2 == 0) {
        // 0x80232D94: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_80232DAC;
    }
    // 0x80232D94: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
L_80232D98:
    // 0x80232D98: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80232D9C: beq         $v0, $zero, L_80232DB4
    if (ctx->r2 == 0) {
        // 0x80232DA0: nop
    
            goto L_80232DB4;
    }
    // 0x80232DA0: nop

    // 0x80232DA4: j           L_80232F0C
    // 0x80232DA8: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_80232F0C;
    // 0x80232DA8: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_80232DAC:
    // 0x80232DAC: j           L_80232D98
    // 0x80232DB0: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
        goto L_80232D98;
    // 0x80232DB0: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
L_80232DB4:
    // 0x80232DB4: lw          $v0, 0x44($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X44);
    // 0x80232DB8: bne         $v0, $zero, L_80232DCC
    if (ctx->r2 != 0) {
        // 0x80232DBC: sw          $zero, 0x9C($s4)
        MEM_W(0X9C, ctx->r20) = 0;
            goto L_80232DCC;
    }
    // 0x80232DBC: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
    // 0x80232DC0: lh          $v0, 0x48($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X48);
    // 0x80232DC4: beq         $v0, $zero, L_80232E44
    if (ctx->r2 == 0) {
        // 0x80232DC8: addiu       $s2, $s4, 0x34
        ctx->r18 = ADD32(ctx->r20, 0X34);
            goto L_80232E44;
    }
    // 0x80232DC8: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_80232DCC:
    // 0x80232DCC: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x80232DD0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80232DD4: beq         $v0, $zero, L_80232E10
    if (ctx->r2 == 0) {
        // 0x80232DD8: nop
    
            goto L_80232E10;
    }
    // 0x80232DD8: nop

    // 0x80232DDC: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80232DE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232DE4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232DE8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232DEC: lhu         $v1, -0xDA8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0XDA8);
    // 0x80232DF0: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80232DF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232DF8: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x80232DFC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232E00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232E04: lhu         $v0, -0xDA6($at)
    ctx->r2 = MEM_HU(ctx->r1, -0XDA6);
    // 0x80232E08: j           L_80232E40
    // 0x80232E0C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
        goto L_80232E40;
    // 0x80232E0C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_80232E10:
    // 0x80232E10: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80232E14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232E18: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232E1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232E20: lhu         $v1, -0xDC0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0XDC0);
    // 0x80232E24: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80232E28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232E2C: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x80232E30: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232E34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232E38: lhu         $v0, -0xDBE($at)
    ctx->r2 = MEM_HU(ctx->r1, -0XDBE);
    // 0x80232E3C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_80232E40:
    // 0x80232E40: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_80232E44:
    // 0x80232E44: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80232E48: addiu       $s3, $s4, 0x1C
    ctx->r19 = ADD32(ctx->r20, 0X1C);
    // 0x80232E4C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80232E50: jal         0x8009A3B4
    // 0x80232E54: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80232E54: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80232E58: addiu       $s0, $s4, 0x2C
    ctx->r16 = ADD32(ctx->r20, 0X2C);
    // 0x80232E5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232E60: addiu       $s1, $s4, 0x14
    ctx->r17 = ADD32(ctx->r20, 0X14);
    // 0x80232E64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80232E68: jal         0x8009A3B4
    // 0x80232E6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80232E6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80232E70: jal         0x80233230
    // 0x80232E74: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80233230_ovl2(rdram, ctx);
        goto after_4;
    // 0x80232E74: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_4:
    // 0x80232E78: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80232E7C: jal         0x8004DD04
    // 0x80232E80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x80232E80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80232E84: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80232E88: jal         0x8004DD04
    // 0x80232E8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x80232E8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80232E90: jal         0x80233078
    // 0x80232E94: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80233078_ovl2(rdram, ctx);
        goto after_7;
    // 0x80232E94: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_7:
    // 0x80232E98: lhu         $v1, 0x14($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X14);
    // 0x80232E9C: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x80232EA0: lhu         $a0, 0x18($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X18);
    // 0x80232EA4: lb          $a1, 0xD($s4)
    ctx->r5 = MEM_B(ctx->r20, 0XD);
    // 0x80232EA8: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x80232EAC: sh          $v0, 0x92($s4)
    MEM_H(0X92, ctx->r20) = ctx->r2;
    // 0x80232EB0: slti        $v0, $a1, 0x1E
    ctx->r2 = SIGNED(ctx->r5) < 0X1E ? 1 : 0;
    // 0x80232EB4: sh          $v1, 0x90($s4)
    MEM_H(0X90, ctx->r20) = ctx->r3;
    // 0x80232EB8: beq         $v0, $zero, L_80232F0C
    if (ctx->r2 == 0) {
        // 0x80232EBC: sh          $a0, 0x94($s4)
        MEM_H(0X94, ctx->r20) = ctx->r4;
            goto L_80232F0C;
    }
    // 0x80232EBC: sh          $a0, 0x94($s4)
    MEM_H(0X94, ctx->r20) = ctx->r4;
    // 0x80232EC0: slti        $v0, $a1, 0xF
    ctx->r2 = SIGNED(ctx->r5) < 0XF ? 1 : 0;
    // 0x80232EC4: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80232EC8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232ECC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80232ED0: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80232ED4: beq         $v0, $zero, L_80232EFC
    if (ctx->r2 == 0) {
        // 0x80232ED8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80232EFC;
    }
    // 0x80232ED8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80232EDC: lbu         $v1, 0x8F($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X8F);
    // 0x80232EE0: bnel        $v1, $v0, L_80232EF4
    if (ctx->r3 != ctx->r2) {
        // 0x80232EE4: lui         $v0, 0x2CFF
        ctx->r2 = S32(0X2CFF << 16);
            goto L_80232EF4;
    }
    goto skip_0;
    // 0x80232EE4: lui         $v0, 0x2CFF
    ctx->r2 = S32(0X2CFF << 16);
    skip_0:
    // 0x80232EE8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80232EEC: j           L_80232EF8
    // 0x80232EF0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_80232EF8;
    // 0x80232EF0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80232EF4:
    // 0x80232EF4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
L_80232EF8:
    // 0x80232EF8: sw          $v0, 0x8C($s4)
    MEM_W(0X8C, ctx->r20) = ctx->r2;
L_80232EFC:
    // 0x80232EFC: lbu         $v0, 0xD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XD);
    // 0x80232F00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232F04: j           L_80232F30
    // 0x80232F08: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
        goto L_80232F30;
    // 0x80232F08: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
L_80232F0C:
    // 0x80232F0C: jal         0x8004F144
    // 0x80232F10: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x80232F10: nop

    after_8:
    // 0x80232F14: beq         $v0, $zero, L_80232F24
    if (ctx->r2 == 0) {
        // 0x80232F18: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80232F24;
    }
    // 0x80232F18: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80232F1C: jal         0x80233320
    // 0x80232F20: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80233320_ovl2(rdram, ctx);
        goto after_9;
    // 0x80232F20: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_9:
L_80232F24:
    // 0x80232F24: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
    // 0x80232F28: jal         0x8004F4F8
    // 0x80232F2C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_10;
    // 0x80232F2C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
L_80232F30:
    // 0x80232F30: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80232F34: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80232F38: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80232F3C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80232F40: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80232F44: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80232F48: jr          $ra
    // 0x80232F4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80232F4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80233230_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233230: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80233234: lhu         $v0, 0x44($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X44);
    // 0x80233238: lhu         $v1, 0x4C($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X4C);
    // 0x8023323C: lhu         $a0, 0x4E($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X4E);
    // 0x80233240: lhu         $a1, 0x50($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X50);
    // 0x80233244: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233248: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
    // 0x8023324C: lhu         $v0, 0x46($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X46);
    // 0x80233250: lhu         $v1, 0x48($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X48);
    // 0x80233254: lh          $a2, 0x44($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X44);
    // 0x80233258: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023325C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80233260: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
    // 0x80233264: slti        $v0, $a2, -0x6000
    ctx->r2 = SIGNED(ctx->r6) < -0X6000 ? 1 : 0;
    // 0x80233268: beq         $v0, $zero, L_80233278
    if (ctx->r2 == 0) {
        // 0x8023326C: sh          $v1, 0x48($a3)
        MEM_H(0X48, ctx->r7) = ctx->r3;
            goto L_80233278;
    }
    // 0x8023326C: sh          $v1, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r3;
    // 0x80233270: j           L_80233284
    // 0x80233274: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
        goto L_80233284;
    // 0x80233274: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
L_80233278:
    // 0x80233278: slti        $v0, $a2, 0x6001
    ctx->r2 = SIGNED(ctx->r6) < 0X6001 ? 1 : 0;
    // 0x8023327C: bne         $v0, $zero, L_80233288
    if (ctx->r2 != 0) {
        // 0x80233280: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80233288;
    }
    // 0x80233280: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80233284:
    // 0x80233284: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
L_80233288:
    // 0x80233288: lh          $v1, 0x46($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X46);
    // 0x8023328C: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x80233290: bne         $v0, $zero, L_802332A4
    if (ctx->r2 != 0) {
        // 0x80233294: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_802332A4;
    }
    // 0x80233294: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x80233298: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x8023329C: bne         $v0, $zero, L_802332A8
    if (ctx->r2 != 0) {
        // 0x802332A0: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_802332A8;
    }
    // 0x802332A0: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_802332A4:
    // 0x802332A4: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
L_802332A8:
    // 0x802332A8: lh          $v1, 0x48($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X48);
    // 0x802332AC: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x802332B0: bne         $v0, $zero, L_802332C4
    if (ctx->r2 != 0) {
        // 0x802332B4: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_802332C4;
    }
    // 0x802332B4: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x802332B8: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x802332BC: bne         $v0, $zero, L_802332C8
    if (ctx->r2 != 0) {
        // 0x802332C0: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_802332C8;
    }
    // 0x802332C0: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_802332C4:
    // 0x802332C4: sh          $v0, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r2;
L_802332C8:
    // 0x802332C8: lh          $v0, 0x44($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X44);
    // 0x802332CC: lw          $v1, 0x1C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X1C);
    // 0x802332D0: lh          $a0, 0x46($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X46);
    // 0x802332D4: lw          $a1, 0x20($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X20);
    // 0x802332D8: lhu         $a2, 0x18($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X18);
    // 0x802332DC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802332E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802332E4: lh          $v0, 0x48($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X48);
    // 0x802332E8: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x802332EC: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x802332F0: sw          $v1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r3;
    // 0x802332F4: lw          $v1, 0x24($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X24);
    // 0x802332F8: lhu         $a0, 0x14($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X14);
    // 0x802332FC: sw          $a1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r5;
    // 0x80233300: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x80233304: sh          $a2, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r6;
    // 0x80233308: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023330C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233310: sw          $v1, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r3;
    // 0x80233314: sh          $a0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r4;
    // 0x80233318: jr          $ra
    // 0x8023331C: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8023331C: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
;}
RECOMP_FUNC void func_8023A83C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A83C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023A840: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023A844: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023A848: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023A84C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8023A850: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023A854: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023A858: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023A85C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8023A860: bne         $v0, $zero, L_8023A878
    if (ctx->r2 != 0) {
        // 0x8023A864: lui         $v1, 0x1
        ctx->r3 = S32(0X1 << 16);
            goto L_8023A878;
    }
    // 0x8023A864: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x8023A868: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8023A86C: sw          $v1, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r3;
    // 0x8023A870: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A874: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8023A878:
    // 0x8023A878: lh          $v0, 0x28($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X28);
    // 0x8023A87C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8023A880: lh          $v0, 0x2C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2C);
    // 0x8023A884: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023A888: lh          $v0, 0x30($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X30);
    // 0x8023A88C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8023A890: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8023A894: beq         $v1, $zero, L_8023A8AC
    if (ctx->r3 == 0) {
        // 0x8023A898: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023A8AC;
    }
    // 0x8023A898: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A89C: beq         $v1, $v0, L_8023A9B8
    if (ctx->r3 == ctx->r2) {
        // 0x8023A8A0: nop
    
            goto L_8023A9B8;
    }
    // 0x8023A8A0: nop

    // 0x8023A8A4: j           L_8023ABA0
    // 0x8023A8A8: nop

        goto L_8023ABA0;
    // 0x8023A8A8: nop

L_8023A8AC:
    // 0x8023A8AC: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x8023A8B0: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x8023A8B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A8B8: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x8023A8BC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023A8C0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023A8C4: bne         $v0, $v1, L_8023A8D8
    if (ctx->r2 != ctx->r3) {
        // 0x8023A8C8: nop
    
            goto L_8023A8D8;
    }
    // 0x8023A8C8: nop

    // 0x8023A8CC: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8023A8D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A8D4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8023A8D8:
    // 0x8023A8D8: lhu         $s2, 0x38($s1)
    ctx->r18 = MEM_HU(ctx->r17, 0X38);
    // 0x8023A8DC: jal         0x8004F144
    // 0x8023A8E0: lhu         $s3, 0x3A($s1)
    ctx->r19 = MEM_HU(ctx->r17, 0X3A);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023A8E0: lhu         $s3, 0x3A($s1)
    ctx->r19 = MEM_HU(ctx->r17, 0X3A);
    after_0:
    // 0x8023A8E4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023A8E8: beq         $s0, $zero, L_8023ABA0
    if (ctx->r16 == 0) {
        // 0x8023A8EC: lui         $a0, 0x3D48
        ctx->r4 = S32(0X3D48 << 16);
            goto L_8023ABA0;
    }
    // 0x8023A8EC: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x8023A8F0: ori         $a0, $a0, 0x2E
    ctx->r4 = ctx->r4 | 0X2E;
    // 0x8023A8F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023A8F8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023A8FC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023A900: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023A904: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023A908: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8023A90C: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8023A910: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8023A914: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023A918: jal         0x800A3450
    // 0x8023A91C: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8023A91C: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    after_1:
    // 0x8023A920: lui         $v1, 0x2E20
    ctx->r3 = S32(0X2E20 << 16);
    // 0x8023A924: ori         $v1, $v1, 0x2020
    ctx->r3 = ctx->r3 | 0X2020;
    // 0x8023A928: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023A92C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023A930: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8023A934: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x8023A938: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023A93C: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x8023A940: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x8023A944: jal         0x800A3450
    // 0x8023A948: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8023A948: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    after_2:
    // 0x8023A94C: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8023A950: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023A954: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A958: jal         0x800A3450
    // 0x8023A95C: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8023A95C: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x8023A960: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8023A964: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023A968: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A96C: jal         0x800A3450
    // 0x8023A970: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8023A970: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    after_4:
    // 0x8023A974: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8023A978: lh          $a0, 0x10($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X10);
    // 0x8023A97C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023A980: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A984: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023A988: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x8023A98C: sw          $a0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r4;
    // 0x8023A990: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x8023A994: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A998: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x8023A99C: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x8023A9A0: sh          $s2, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r18;
    // 0x8023A9A4: sh          $s3, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r19;
    // 0x8023A9A8: sw          $s1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r17;
    // 0x8023A9AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A9B0: j           L_8023ABA0
    // 0x8023A9B4: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
        goto L_8023ABA0;
    // 0x8023A9B4: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
L_8023A9B8:
    // 0x8023A9B8: lhu         $s3, 0x38($s1)
    ctx->r19 = MEM_HU(ctx->r17, 0X38);
    // 0x8023A9BC: lhu         $s4, 0x3A($s1)
    ctx->r20 = MEM_HU(ctx->r17, 0X3A);
    // 0x8023A9C0: jal         0x8004F144
    // 0x8023A9C4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    func_8004F144_2A544(rdram, ctx);
        goto after_5;
    // 0x8023A9C4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    after_5:
    // 0x8023A9C8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023A9CC: beq         $s0, $zero, L_8023AA94
    if (ctx->r16 == 0) {
        // 0x8023A9D0: lui         $v1, 0x3D48
        ctx->r3 = S32(0X3D48 << 16);
            goto L_8023AA94;
    }
    // 0x8023A9D0: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8023A9D4: ori         $v1, $v1, 0x2E
    ctx->r3 = ctx->r3 | 0X2E;
    // 0x8023A9D8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023A9DC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023A9E0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023A9E4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023A9E8: sb          $s2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r18;
    // 0x8023A9EC: sb          $s2, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r18;
    // 0x8023A9F0: sb          $s2, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r18;
    // 0x8023A9F4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023A9F8: jal         0x800A3450
    // 0x8023A9FC: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8023A9FC: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    after_6:
    // 0x8023AA00: lui         $v1, 0x2E20
    ctx->r3 = S32(0X2E20 << 16);
    // 0x8023AA04: ori         $v1, $v1, 0x2020
    ctx->r3 = ctx->r3 | 0X2020;
    // 0x8023AA08: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023AA0C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023AA10: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8023AA14: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x8023AA18: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023AA1C: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x8023AA20: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x8023AA24: jal         0x800A3450
    // 0x8023AA28: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x8023AA28: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    after_7:
    // 0x8023AA2C: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8023AA30: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023AA34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AA38: jal         0x800A3450
    // 0x8023AA3C: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x8023AA3C: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_8:
    // 0x8023AA40: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8023AA44: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023AA48: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AA4C: jal         0x800A3450
    // 0x8023AA50: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_9;
    // 0x8023AA50: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    after_9:
    // 0x8023AA54: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8023AA58: lh          $a0, 0x10($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X10);
    // 0x8023AA5C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023AA60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AA64: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023AA68: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x8023AA6C: sw          $a0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r4;
    // 0x8023AA70: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x8023AA74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023AA78: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x8023AA7C: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x8023AA80: sh          $s3, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r19;
    // 0x8023AA84: sh          $s4, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r20;
    // 0x8023AA88: sw          $s1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r17;
    // 0x8023AA8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023AA90: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
L_8023AA94:
    // 0x8023AA94: lhu         $s3, 0x38($s1)
    ctx->r19 = MEM_HU(ctx->r17, 0X38);
    // 0x8023AA98: jal         0x8004F144
    // 0x8023AA9C: lhu         $s4, 0x3A($s1)
    ctx->r20 = MEM_HU(ctx->r17, 0X3A);
    func_8004F144_2A544(rdram, ctx);
        goto after_10;
    // 0x8023AA9C: lhu         $s4, 0x3A($s1)
    ctx->r20 = MEM_HU(ctx->r17, 0X3A);
    after_10:
    // 0x8023AAA0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023AAA4: beq         $s0, $zero, L_8023AB6C
    if (ctx->r16 == 0) {
        // 0x8023AAA8: lui         $v1, 0x3D48
        ctx->r3 = S32(0X3D48 << 16);
            goto L_8023AB6C;
    }
    // 0x8023AAA8: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8023AAAC: ori         $v1, $v1, 0x2E
    ctx->r3 = ctx->r3 | 0X2E;
    // 0x8023AAB0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023AAB4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023AAB8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023AABC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023AAC0: sb          $s2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r18;
    // 0x8023AAC4: sb          $s2, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r18;
    // 0x8023AAC8: sb          $s2, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r18;
    // 0x8023AACC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023AAD0: jal         0x800A3450
    // 0x8023AAD4: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x8023AAD4: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    after_11:
    // 0x8023AAD8: lui         $v1, 0x2E20
    ctx->r3 = S32(0X2E20 << 16);
    // 0x8023AADC: ori         $v1, $v1, 0x2020
    ctx->r3 = ctx->r3 | 0X2020;
    // 0x8023AAE0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023AAE4: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023AAE8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8023AAEC: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x8023AAF0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023AAF4: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x8023AAF8: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x8023AAFC: jal         0x800A3450
    // 0x8023AB00: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_12;
    // 0x8023AB00: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    after_12:
    // 0x8023AB04: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8023AB08: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023AB0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AB10: jal         0x800A3450
    // 0x8023AB14: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_13;
    // 0x8023AB14: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_13:
    // 0x8023AB18: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8023AB1C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023AB20: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AB24: jal         0x800A3450
    // 0x8023AB28: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_14;
    // 0x8023AB28: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    after_14:
    // 0x8023AB2C: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8023AB30: lh          $a0, 0x10($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X10);
    // 0x8023AB34: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023AB38: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AB3C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023AB40: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x8023AB44: sw          $a0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r4;
    // 0x8023AB48: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x8023AB4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023AB50: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x8023AB54: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x8023AB58: sh          $s3, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r19;
    // 0x8023AB5C: sh          $s4, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r20;
    // 0x8023AB60: sw          $s1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r17;
    // 0x8023AB64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023AB68: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
L_8023AB6C:
    // 0x8023AB6C: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x8023AB70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AB74: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x8023AB78: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x8023AB7C: lb          $a0, 0xE($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XE);
    // 0x8023AB80: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x8023AB84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AB88: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x8023AB8C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023AB90: bne         $a0, $v0, L_8023ABA0
    if (ctx->r4 != ctx->r2) {
        // 0x8023AB94: nop
    
            goto L_8023ABA0;
    }
    // 0x8023AB94: nop

    // 0x8023AB98: jal         0x8004F5C4
    // 0x8023AB9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_15;
    // 0x8023AB9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
L_8023ABA0:
    // 0x8023ABA0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023ABA4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023ABA8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023ABAC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023ABB0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023ABB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023ABB8: jr          $ra
    // 0x8023ABBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023ABBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80236C50_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236C50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236C54: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80236C58: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80236C5C: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x80236C60: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80236C64: addiu       $a0, $a0, -0x90C
    ctx->r4 = ADD32(ctx->r4, -0X90C);
    // 0x80236C68: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80236C6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236C70: beq         $v1, $v0, L_80236CDC
    if (ctx->r3 == ctx->r2) {
        // 0x80236C74: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80236CDC;
    }
    // 0x80236C74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236C78: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80236C7C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_80236C80:
    // 0x80236C80: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80236C84: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x80236C88: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80236C8C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80236C90: beq         $v0, $zero, L_80236CBC
    if (ctx->r2 == 0) {
        // 0x80236C94: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80236CBC;
    }
    // 0x80236C94: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80236C98: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x80236C9C: beq         $v0, $a2, L_80236CC0
    if (ctx->r2 == ctx->r6) {
        // 0x80236CA0: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_80236CC0;
    }
    // 0x80236CA0: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80236CA4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80236CA8: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
L_80236CAC:
    // 0x80236CAC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80236CB0: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x80236CB4: bnel        $v0, $a0, L_80236CAC
    if (ctx->r2 != ctx->r4) {
        // 0x80236CB8: sw          $zero, 0x8($v1)
        MEM_W(0X8, ctx->r3) = 0;
            goto L_80236CAC;
    }
    goto skip_0;
    // 0x80236CB8: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    skip_0:
L_80236CBC:
    // 0x80236CBC: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
L_80236CC0:
    // 0x80236CC0: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80236CC4: sra         $v1, $v1, 14
    ctx->r3 = S32(SIGNED(ctx->r3) >> 14);
    // 0x80236CC8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236CCC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80236CD0: lw          $v1, -0x90C($at)
    ctx->r3 = MEM_W(ctx->r1, -0X90C);
    // 0x80236CD4: bne         $v1, $a2, L_80236C80
    if (ctx->r3 != ctx->r6) {
        // 0x80236CD8: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_80236C80;
    }
    // 0x80236CD8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_80236CDC:
    // 0x80236CDC: jr          $ra
    // 0x80236CE0: nop

    TRACE_RETURN()
    return;
    // 0x80236CE0: nop

;}
RECOMP_FUNC void func_80232C00_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232C00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232C04: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80232C08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232C0C: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x80232C10: ori         $a3, $a3, 0xE
    ctx->r7 = ctx->r7 | 0XE;
    // 0x80232C14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80232C18: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x80232C1C: lhu         $a1, 0x20($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X20);
    // 0x80232C20: lhu         $a2, 0x24($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X24);
    // 0x80232C24: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80232C28: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80232C2C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80232C30: sw          $a3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r7;
    // 0x80232C34: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
    // 0x80232C38: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80232C3C: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x80232C40: sh          $a0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r4;
    // 0x80232C44: sh          $a1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r5;
    // 0x80232C48: sh          $a1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r5;
    // 0x80232C4C: sh          $a2, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r6;
    // 0x80232C50: beq         $v0, $zero, L_80232C8C
    if (ctx->r2 == 0) {
        // 0x80232C54: sh          $a2, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r6;
            goto L_80232C8C;
    }
    // 0x80232C54: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    // 0x80232C58: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80232C5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232C60: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232C64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232C68: lhu         $v1, -0xDA8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0XDA8);
    // 0x80232C6C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80232C70: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232C74: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80232C78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232C7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232C80: lhu         $v0, -0xDA6($at)
    ctx->r2 = MEM_HU(ctx->r1, -0XDA6);
    // 0x80232C84: j           L_80232CBC
    // 0x80232C88: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80232CBC;
    // 0x80232C88: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80232C8C:
    // 0x80232C8C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80232C90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232C94: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232C98: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232C9C: lhu         $v1, -0xDC0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0XDC0);
    // 0x80232CA0: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80232CA4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232CA8: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80232CAC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232CB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232CB4: lhu         $v0, -0xDBE($at)
    ctx->r2 = MEM_HU(ctx->r1, -0XDBE);
    // 0x80232CB8: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80232CBC:
    // 0x80232CBC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80232CC0: jal         0x8004F144
    // 0x80232CC4: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80232CC4: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    after_0:
    // 0x80232CC8: beq         $v0, $zero, L_80232CD8
    if (ctx->r2 == 0) {
        // 0x80232CCC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232CD8;
    }
    // 0x80232CCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232CD0: jal         0x80233320
    // 0x80232CD4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80233320_ovl2(rdram, ctx);
        goto after_1;
    // 0x80232CD4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
L_80232CD8:
    // 0x80232CD8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80232CDC: jal         0x8004F4F8
    // 0x80232CE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80232CE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80232CE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80232CE8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80232CEC: jr          $ra
    // 0x80232CF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232CF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
