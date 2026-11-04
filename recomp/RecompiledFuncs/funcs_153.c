#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80226688_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022668C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226690: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226698: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022669C: bne         $v0, $zero, L_802266B8
    if (ctx->r2 != 0) {
        // 0x802266A0: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_802266B8;
    }
    // 0x802266A0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802266A4: jal         0x80050294
    // 0x802266A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802266A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802266AC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802266B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802266B4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802266B8:
    // 0x802266B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802266BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802266C0: jr          $ra
    // 0x802266C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802266C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226D78_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226D7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226D80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226D88: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80226D8C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80226D90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226D94: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80226D98: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80226D9C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80226DA0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80226DA4: beq         $v1, $zero, L_80226DC4
    if (ctx->r3 == 0) {
        // 0x80226DA8: nop
    
            goto L_80226DC4;
    }
    // 0x80226DA8: nop

    // 0x80226DAC: jal         0x80227194
    // 0x80226DB0: nop

    func_80227194_ovl23(rdram, ctx);
        goto after_0;
    // 0x80226DB0: nop

    after_0:
    // 0x80226DB4: beq         $v0, $zero, L_80226DC4
    if (ctx->r2 == 0) {
        // 0x80226DB8: nop
    
            goto L_80226DC4;
    }
    // 0x80226DB8: nop

    // 0x80226DBC: jal         0x8004F62C
    // 0x80226DC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80226DC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80226DC4:
    // 0x80226DC4: jal         0x80226DDC
    // 0x80226DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226DDC_ovl23(rdram, ctx);
        goto after_2;
    // 0x80226DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226DD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226DD4: jr          $ra
    // 0x80226DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253B8_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253B8: jr          $ra
    // 0x802253BC: nop

    TRACE_RETURN()
    return;
    // 0x802253BC: nop

;}
RECOMP_FUNC void func_80225A7C_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A7C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225A80: bne         $v0, $zero, L_80225A94
    if (ctx->r2 != 0) {
        // 0x80225A84: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225A94;
    }
    // 0x80225A84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225A88: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80225A8C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225A90: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225A94:
    // 0x80225A94: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225A98: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
    // 0x80225A9C: bne         $v1, $v0, L_80225AB0
    if (ctx->r3 != ctx->r2) {
        // 0x80225AA0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80225AB0;
    }
    // 0x80225AA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225AA4: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80225AA8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225AAC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225AB0:
    // 0x80225AB0: jr          $ra
    // 0x80225AB4: nop

    TRACE_RETURN()
    return;
    // 0x80225AB4: nop

;}
RECOMP_FUNC void func_802262B8_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802262BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802262C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802262C4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802262C8: lw          $a0, 0x7FE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7FE0);
    // 0x802262CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802262D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802262D4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802262D8: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x802262DC: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x802262E0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802262E4: beq         $v1, $v0, L_80226378
    if (ctx->r3 == ctx->r2) {
        // 0x802262E8: nop
    
            goto L_80226378;
    }
    // 0x802262E8: nop

    // 0x802262EC: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x802262F0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802262F4: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x802262F8: bne         $v1, $v0, L_80226378
    if (ctx->r3 != ctx->r2) {
        // 0x802262FC: nop
    
            goto L_80226378;
    }
    // 0x802262FC: nop

    // 0x80226300: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80226304: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226308: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x8022630C: bne         $v1, $v0, L_80226378
    if (ctx->r3 != ctx->r2) {
        // 0x80226310: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80226378;
    }
    // 0x80226310: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80226314: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80226318: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022631C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226320: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226324: lw          $v0, 0x7B7C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7B7C);
    // 0x80226328: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022632C: sw          $v0, 0x7FD0($at)
    MEM_W(0X7FD0, ctx->r1) = ctx->r2;
    // 0x80226330: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80226334: lw          $v0, 0x7FD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FD0);
    // 0x80226338: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022633C: sh          $zero, 0x7FD4($at)
    MEM_H(0X7FD4, ctx->r1) = 0;
    // 0x80226340: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80226344: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80226348: jal         0x8003B85C
    // 0x8022634C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022634C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80226350: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80226354: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80226358: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022635C: jal         0x8003B840
    // 0x80226360: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80226360: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80226364: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80226368: lw          $v0, 0x7FE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FE0);
    // 0x8022636C: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80226370: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226374: sw          $v0, 0x7FE0($at)
    MEM_W(0X7FE0, ctx->r1) = ctx->r2;
L_80226378:
    // 0x80226378: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022637C: lw          $a0, 0x7FE4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7FE4);
    // 0x80226380: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80226384: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226388: beq         $v1, $v0, L_80226414
    if (ctx->r3 == ctx->r2) {
        // 0x8022638C: nop
    
            goto L_80226414;
    }
    // 0x8022638C: nop

    // 0x80226390: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80226394: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80226398: bne         $v1, $v0, L_80226414
    if (ctx->r3 != ctx->r2) {
        // 0x8022639C: nop
    
            goto L_80226414;
    }
    // 0x8022639C: nop

    // 0x802263A0: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x802263A4: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x802263A8: bne         $v1, $v0, L_80226414
    if (ctx->r3 != ctx->r2) {
        // 0x802263AC: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80226414;
    }
    // 0x802263AC: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x802263B0: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x802263B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802263B8: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x802263BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802263C0: lw          $v0, 0x7B7C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7B7C);
    // 0x802263C4: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x802263C8: sw          $v0, 0x7FD8($at)
    MEM_W(0X7FD8, ctx->r1) = ctx->r2;
    // 0x802263CC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x802263D0: lw          $v0, 0x7FD8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FD8);
    // 0x802263D4: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x802263D8: sh          $zero, 0x7FDC($at)
    MEM_H(0X7FDC, ctx->r1) = 0;
    // 0x802263DC: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802263E0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x802263E4: jal         0x8003B85C
    // 0x802263E8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802263E8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x802263EC: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x802263F0: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x802263F4: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x802263F8: jal         0x8003B840
    // 0x802263FC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802263FC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80226400: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80226404: lw          $v0, 0x7FE4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FE4);
    // 0x80226408: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8022640C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226410: sw          $v0, 0x7FE4($at)
    MEM_W(0X7FE4, ctx->r1) = ctx->r2;
L_80226414:
    // 0x80226414: jal         0x80226160
    // 0x80226418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226160_ovl23(rdram, ctx);
        goto after_4;
    // 0x80226418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022641C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226420: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226424: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226428: jr          $ra
    // 0x8022642C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022642C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802264F0_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802264F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802264F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802264FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226500: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226504: bne         $v0, $zero, L_80226520
    if (ctx->r2 != 0) {
        // 0x80226508: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80226520;
    }
    // 0x80226508: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022650C: jal         0x80050294
    // 0x80226510: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226510: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226514: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226518: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022651C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226520:
    // 0x80226520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226524: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226528: jr          $ra
    // 0x8022652C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022652C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225FE0_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225FE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225FE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225FEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225FF0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80225FF4: bne         $v0, $zero, L_80226048
    if (ctx->r2 != 0) {
        // 0x80225FF8: nop
    
            goto L_80226048;
    }
    // 0x80225FF8: nop

    // 0x80225FFC: jal         0x8004D5D4
    // 0x80226000: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226000: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80226004: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80226008: addiu       $v0, $v0, 0x79FC
    ctx->r2 = ADD32(ctx->r2, 0X79FC);
    // 0x8022600C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226010: sw          $v0, 0x7FC0($at)
    MEM_W(0X7FC0, ctx->r1) = ctx->r2;
    // 0x80226014: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80226018: addiu       $v0, $v0, 0x7A34
    ctx->r2 = ADD32(ctx->r2, 0X7A34);
    // 0x8022601C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226020: sw          $v0, 0x7FC4($at)
    MEM_W(0X7FC4, ctx->r1) = ctx->r2;
    // 0x80226024: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80226028: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022602C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226030: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226034: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226038: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022603C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80226040: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226044: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80226048:
    // 0x80226048: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022604C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226050: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226054: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226058: lw          $v0, 0x7A90($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7A90);
    // 0x8022605C: jalr        $v0
    // 0x80226060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80226060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226064: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80226068: bne         $v0, $zero, L_80226080
    if (ctx->r2 != 0) {
        // 0x8022606C: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80226080;
    }
    // 0x8022606C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80226070: jal         0x8004DD04
    // 0x80226074: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80226074: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80226078: jal         0x8005044C
    // 0x8022607C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x8022607C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80226080:
    // 0x80226080: jal         0x80225E68
    // 0x80226084: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80225E68_ovl23(rdram, ctx);
        goto after_4;
    // 0x80226084: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80226088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022608C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226090: jr          $ra
    // 0x80226094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225E68_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225E6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225E70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225E74: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80225E78: lw          $a0, 0x7FC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7FC0);
    // 0x80225E7C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225E80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225E84: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80225E88: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80225E8C: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x80225E90: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225E94: beq         $v1, $v0, L_80225F28
    if (ctx->r3 == ctx->r2) {
        // 0x80225E98: nop
    
            goto L_80225F28;
    }
    // 0x80225E98: nop

    // 0x80225E9C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80225EA0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225EA4: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x80225EA8: bne         $v1, $v0, L_80225F28
    if (ctx->r3 != ctx->r2) {
        // 0x80225EAC: nop
    
            goto L_80225F28;
    }
    // 0x80225EAC: nop

    // 0x80225EB0: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80225EB4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225EB8: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x80225EBC: bne         $v1, $v0, L_80225F28
    if (ctx->r3 != ctx->r2) {
        // 0x80225EC0: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80225F28;
    }
    // 0x80225EC0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80225EC4: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80225EC8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225ECC: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225ED0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225ED4: lw          $v0, 0x79A4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X79A4);
    // 0x80225ED8: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225EDC: sw          $v0, 0x7FB0($at)
    MEM_W(0X7FB0, ctx->r1) = ctx->r2;
    // 0x80225EE0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225EE4: lw          $v0, 0x7FB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FB0);
    // 0x80225EE8: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225EEC: sh          $zero, 0x7FB4($at)
    MEM_H(0X7FB4, ctx->r1) = 0;
    // 0x80225EF0: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80225EF4: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80225EF8: jal         0x8003B85C
    // 0x80225EFC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80225EFC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80225F00: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80225F04: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x80225F08: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x80225F0C: jal         0x8003B840
    // 0x80225F10: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80225F10: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80225F14: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225F18: lw          $v0, 0x7FC0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FC0);
    // 0x80225F1C: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80225F20: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225F24: sw          $v0, 0x7FC0($at)
    MEM_W(0X7FC0, ctx->r1) = ctx->r2;
L_80225F28:
    // 0x80225F28: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80225F2C: lw          $a0, 0x7FC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7FC4);
    // 0x80225F30: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80225F34: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225F38: beq         $v1, $v0, L_80225FC4
    if (ctx->r3 == ctx->r2) {
        // 0x80225F3C: nop
    
            goto L_80225FC4;
    }
    // 0x80225F3C: nop

    // 0x80225F40: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80225F44: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80225F48: bne         $v1, $v0, L_80225FC4
    if (ctx->r3 != ctx->r2) {
        // 0x80225F4C: nop
    
            goto L_80225FC4;
    }
    // 0x80225F4C: nop

    // 0x80225F50: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80225F54: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80225F58: bne         $v1, $v0, L_80225FC4
    if (ctx->r3 != ctx->r2) {
        // 0x80225F5C: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80225FC4;
    }
    // 0x80225F5C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80225F60: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80225F64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225F68: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225F6C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225F70: lw          $v0, 0x79C8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X79C8);
    // 0x80225F74: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225F78: sw          $v0, 0x7FB8($at)
    MEM_W(0X7FB8, ctx->r1) = ctx->r2;
    // 0x80225F7C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225F80: lw          $v0, 0x7FB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FB8);
    // 0x80225F84: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225F88: sh          $zero, 0x7FBC($at)
    MEM_H(0X7FBC, ctx->r1) = 0;
    // 0x80225F8C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80225F90: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80225F94: jal         0x8003B85C
    // 0x80225F98: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80225F98: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x80225F9C: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80225FA0: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x80225FA4: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x80225FA8: jal         0x8003B840
    // 0x80225FAC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80225FAC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80225FB0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225FB4: lw          $v0, 0x7FC4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FC4);
    // 0x80225FB8: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80225FBC: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225FC0: sw          $v0, 0x7FC4($at)
    MEM_W(0X7FC4, ctx->r1) = ctx->r2;
L_80225FC4:
    // 0x80225FC4: jal         0x80225D10
    // 0x80225FC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80225D10_ovl23(rdram, ctx);
        goto after_4;
    // 0x80225FC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80225FCC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225FD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225FD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225FD8: jr          $ra
    // 0x80225FDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225FDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226530_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226534: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226538: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022653C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226540: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226544: bne         $v0, $zero, L_80226560
    if (ctx->r2 != 0) {
        // 0x80226548: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80226560;
    }
    // 0x80226548: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022654C: jal         0x80050294
    // 0x80226550: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226550: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226554: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226558: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022655C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226560:
    // 0x80226560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226564: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226568: jr          $ra
    // 0x8022656C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022656C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226708_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022670C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226710: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226718: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022671C: beq         $v1, $zero, L_80226734
    if (ctx->r3 == 0) {
        // 0x80226720: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226734;
    }
    // 0x80226720: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226724: beq         $v1, $v0, L_80226740
    if (ctx->r3 == ctx->r2) {
        // 0x80226728: nop
    
            goto L_80226740;
    }
    // 0x80226728: nop

    // 0x8022672C: j           L_8022676C
    // 0x80226730: nop

        goto L_8022676C;
    // 0x80226730: nop

L_80226734:
    // 0x80226734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226738: j           L_80226758
    // 0x8022673C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_80226758;
    // 0x8022673C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_80226740:
    // 0x80226740: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80226744: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226748: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022674C: bne         $v1, $v0, L_8022676C
    if (ctx->r3 != ctx->r2) {
        // 0x80226750: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022676C;
    }
    // 0x80226750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226754: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_80226758:
    // 0x80226758: jal         0x80050294
    // 0x8022675C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022675C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226760: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226764: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226768: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022676C:
    // 0x8022676C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226770: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226774: jr          $ra
    // 0x80226778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251B4_ovl23(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x802251D8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x802251DC: j           L_802251EC
    // 0x802251E0: addiu       $a1, $a1, 0x74F0
    ctx->r5 = ADD32(ctx->r5, 0X74F0);
        goto L_802251EC;
    // 0x802251E0: addiu       $a1, $a1, 0x74F0
    ctx->r5 = ADD32(ctx->r5, 0X74F0);
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
    // 0x802251F4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802251F8: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x802251FC: lb          $t0, 0x0($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X0);
    // 0x80225200: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80225204: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x80225208: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8022520C: addiu       $a2, $a2, 0xCB4
    ctx->r6 = ADD32(ctx->r6, 0XCB4);
    // 0x80225210: sll         $v0, $t0, 3
    ctx->r2 = S32(ctx->r8 << 3);
    // 0x80225214: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80225218: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x8022521C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225220: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x80225224: lbu         $a3, 0x3($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3);
    // 0x80225228: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8022522C: sh          $a3, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r7;
    // 0x80225230: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x80225234: lui         $t2, 0x7FE9
    ctx->r10 = S32(0X7FE9 << 16);
    // 0x80225238: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022523C: sb          $t1, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r9;
    // 0x80225240: lbu         $t3, 0x1($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X1);
    // 0x80225244: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225248: ori         $t2, $t2, 0xC000
    ctx->r10 = ctx->r10 | 0XC000;
    // 0x8022524C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80225250: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225254: sb          $zero, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = 0;
    // 0x80225258: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022525C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80225260: lw          $a0, 0x7480($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7480);
    // 0x80225264: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x80225268: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x8022526C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225270: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225274: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80225278: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8022527C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225280: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80225284: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225288: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x8022528C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225290: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225294: addu        $a3, $a3, $t3
    ctx->r7 = ADD32(ctx->r7, ctx->r11);
    // 0x80225298: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022529C: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x802252A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252A4: sb          $t3, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r11;
    // 0x802252A8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252AC: sb          $a3, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r7;
    // 0x802252B0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x802252B4: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x802252B8: lw          $v0, 0x74A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X74A0);
    // 0x802252BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252C0: jal         0x8004C790
    // 0x802252C4: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_1;
    // 0x802252C4: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_1:
    // 0x802252C8: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252CC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802252D0: addiu       $a0, $a0, 0x74C0
    ctx->r4 = ADD32(ctx->r4, 0X74C0);
    // 0x802252D4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252D8: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x802252DC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252E0: lw          $v1, 0x74E8($at)
    ctx->r3 = MEM_W(ctx->r1, 0X74E8);
    // 0x802252E4: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252E8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252EC: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252F0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x802252F4: addiu       $v0, $v0, 0x74A8
    ctx->r2 = ADD32(ctx->r2, 0X74A8);
    // 0x802252F8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252FC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225300: jal         0x80054FB8
    // 0x80225304: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_2;
    // 0x80225304: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_2:
    // 0x80225308: jal         0x8004A614
    // 0x8022530C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_3;
    // 0x8022530C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x80225310: jal         0x80225330
    // 0x80225314: nop

    func_80225330_ovl23(rdram, ctx);
        goto after_4;
    // 0x80225314: nop

    after_4:
    // 0x80225318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022531C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225320: jr          $ra
    // 0x80225324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225328: nop

    // 0x8022532C: nop

;}
RECOMP_FUNC void func_802268C0_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802268C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802268C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802268C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802268CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802268D0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802268D4: bne         $v0, $zero, L_802268F0
    if (ctx->r2 != 0) {
        // 0x802268D8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_802268F0;
    }
    // 0x802268D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802268DC: jal         0x80050294
    // 0x802268E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802268E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802268E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802268E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802268EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802268F0:
    // 0x802268F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802268F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802268F8: jr          $ra
    // 0x802268FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802268FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226118_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022611C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226120: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226128: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022612C: bne         $v0, $zero, L_80226148
    if (ctx->r2 != 0) {
        // 0x80226130: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_80226148;
    }
    // 0x80226130: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80226134: jal         0x80050294
    // 0x80226138: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226138: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022613C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226140: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226144: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226148:
    // 0x80226148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022614C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226150: jr          $ra
    // 0x80226154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80226158: nop

    // 0x8022615C: nop

;}
RECOMP_FUNC void func_80226160_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226164: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226168: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022616C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80226170: addiu       $a1, $a1, 0x7FD0
    ctx->r5 = ADD32(ctx->r5, 0X7FD0);
    // 0x80226174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226178: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8022617C: beq         $a0, $zero, L_8022620C
    if (ctx->r4 == 0) {
        // 0x80226180: nop
    
            goto L_8022620C;
    }
    // 0x80226180: nop

    // 0x80226184: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80226188: lw          $v1, 0x7FD0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7FD0);
    // 0x8022618C: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x80226190: beq         $v0, $zero, L_8022620C
    if (ctx->r2 == 0) {
        // 0x80226194: nop
    
            goto L_8022620C;
    }
    // 0x80226194: nop

    // 0x80226198: bgez        $v0, L_802261A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022619C: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_802261A8;
    }
    // 0x8022619C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802261A0: j           L_802261D0
    // 0x802261A4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_802261D0;
    // 0x802261A4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_802261A8:
    // 0x802261A8: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x802261AC: lhu         $v0, 0x7FD4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7FD4);
    // 0x802261B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802261B4: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x802261B8: sh          $v0, 0x7FD4($at)
    MEM_H(0X7FD4, ctx->r1) = ctx->r2;
    // 0x802261BC: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x802261C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802261C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802261C8: bne         $v0, $v1, L_8022620C
    if (ctx->r2 != ctx->r3) {
        // 0x802261CC: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_8022620C;
    }
    // 0x802261CC: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_802261D0:
    // 0x802261D0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x802261D4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x802261D8: lw          $v0, 0x7FD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FD0);
    // 0x802261DC: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x802261E0: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x802261E4: sh          $zero, 0x7FD4($at)
    MEM_H(0X7FD4, ctx->r1) = 0;
    // 0x802261E8: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802261EC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x802261F0: jal         0x8003B85C
    // 0x802261F4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x802261F4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x802261F8: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x802261FC: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80226200: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80226204: jal         0x8003B840
    // 0x80226208: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80226208: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022620C:
    // 0x8022620C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80226210: addiu       $a1, $a1, 0x7FD8
    ctx->r5 = ADD32(ctx->r5, 0X7FD8);
    // 0x80226214: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80226218: beq         $a0, $zero, L_802262A8
    if (ctx->r4 == 0) {
        // 0x8022621C: nop
    
            goto L_802262A8;
    }
    // 0x8022621C: nop

    // 0x80226220: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80226224: lw          $v1, 0x7FD8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7FD8);
    // 0x80226228: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x8022622C: beq         $v0, $zero, L_802262A8
    if (ctx->r2 == 0) {
        // 0x80226230: nop
    
            goto L_802262A8;
    }
    // 0x80226230: nop

    // 0x80226234: bgez        $v0, L_80226244
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226238: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80226244;
    }
    // 0x80226238: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022623C: j           L_8022626C
    // 0x80226240: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_8022626C;
    // 0x80226240: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_80226244:
    // 0x80226244: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80226248: lhu         $v0, 0x7FDC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7FDC);
    // 0x8022624C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226250: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226254: sh          $v0, 0x7FDC($at)
    MEM_H(0X7FDC, ctx->r1) = ctx->r2;
    // 0x80226258: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x8022625C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226260: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226264: bne         $v0, $v1, L_802262A8
    if (ctx->r2 != ctx->r3) {
        // 0x80226268: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_802262A8;
    }
    // 0x80226268: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_8022626C:
    // 0x8022626C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80226270: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80226274: lw          $v0, 0x7FD8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FD8);
    // 0x80226278: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022627C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226280: sh          $zero, 0x7FDC($at)
    MEM_H(0X7FDC, ctx->r1) = 0;
    // 0x80226284: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80226288: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8022628C: jal         0x8003B85C
    // 0x80226290: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80226290: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80226294: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80226298: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022629C: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x802262A0: jal         0x8003B840
    // 0x802262A4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802262A4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_802262A8:
    // 0x802262A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802262AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802262B0: jr          $ra
    // 0x802262B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802262B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022533C_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022533C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225340: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225344: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80225348: lw          $v1, 0x753C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X753C);
    // 0x8022534C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225350: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225354: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225358: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022535C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80225360: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225364: jalr        $v0
    // 0x80225368: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225368: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x8022536C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225370: jr          $ra
    // 0x80225374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225510_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225514: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225518: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022551C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225520: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80225524: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80225528: beq         $v0, $zero, L_80225694
    if (ctx->r2 == 0) {
        // 0x8022552C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80225694;
    }
    // 0x8022552C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225530: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225534: addu        $at, $at, $v0
    gpr jr_addend_8022553C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225538: lw          $v0, 0x7F80($at)
    ctx->r2 = ADD32(ctx->r1, 0X7F80);
    // 0x8022553C: jr          $v0
    // 0x80225540: nop

    switch (jr_addend_8022553C >> 2) {
        case 0: goto L_80225544; break;
        case 1: goto L_80225598; break;
        case 2: goto L_802255B0; break;
        case 3: goto L_80225620; break;
        case 4: goto L_80225638; break;
        case 5: goto L_80225674; break;
        default: switch_error(__func__, 0x8022553C, 0x80227F80);
    }
    // 0x80225540: nop

L_80225544:
    // 0x80225544: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225548: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022554C: bne         $v0, $zero, L_80225694
    if (ctx->r2 != 0) {
        // 0x80225550: addiu       $a0, $zero, 0x56
        ctx->r4 = ADD32(0, 0X56);
            goto L_80225694;
    }
    // 0x80225550: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80225554: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80225558: addiu       $a2, $a2, 0x4430
    ctx->r6 = ADD32(ctx->r6, 0X4430);
    // 0x8022555C: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x80225560: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225564: lbu         $v1, 0x4468($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4468);
    // 0x80225568: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x8022556C: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x80225570: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x80225574: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225578: sb          $v1, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r3;
    // 0x8022557C: jal         0x8004CB2C
    // 0x80225580: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80225580: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80225584: jal         0x80036E48
    // 0x80225588: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_1;
    // 0x80225588: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x8022558C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225590: j           L_80225668
    // 0x80225594: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
        goto L_80225668;
    // 0x80225594: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
L_80225598:
    // 0x80225598: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8022559C: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x802255A0: bne         $v1, $v0, L_80225694
    if (ctx->r3 != ctx->r2) {
        // 0x802255A4: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_80225694;
    }
    // 0x802255A4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802255A8: j           L_8022565C
    // 0x802255AC: nop

        goto L_8022565C;
    // 0x802255AC: nop

L_802255B0:
    // 0x802255B0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802255B4: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802255B8: bne         $v0, $zero, L_80225694
    if (ctx->r2 != 0) {
        // 0x802255BC: nop
    
            goto L_80225694;
    }
    // 0x802255BC: nop

    // 0x802255C0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802255C4: addiu       $a1, $a1, 0x4468
    ctx->r5 = ADD32(ctx->r5, 0X4468);
    // 0x802255C8: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x802255CC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802255D0: lbu         $v1, 0x44A0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X44A0);
    // 0x802255D4: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x802255D8: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x802255DC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802255E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255E4: sb          $v1, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = ctx->r3;
    // 0x802255E8: jal         0x80036E48
    // 0x802255EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x802255EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x802255F0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802255F4: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x802255F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802255FC: jal         0x80076BFC
    // 0x80225600: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    func_80076BFC_51FFC(rdram, ctx);
        goto after_3;
    // 0x80225600: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    after_3:
    // 0x80225604: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80225608: lw          $a1, 0x2BB0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2BB0);
    // 0x8022560C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225610: jal         0x80061510
    // 0x80225614: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x80225614: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x80225618: j           L_80225694
    // 0x8022561C: nop

        goto L_80225694;
    // 0x8022561C: nop

L_80225620:
    // 0x80225620: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80225624: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x80225628: beq         $v1, $v0, L_80225664
    if (ctx->r3 == ctx->r2) {
        // 0x8022562C: nop
    
            goto L_80225664;
    }
    // 0x8022562C: nop

    // 0x80225630: j           L_80225694
    // 0x80225634: nop

        goto L_80225694;
    // 0x80225634: nop

L_80225638:
    // 0x80225638: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8022563C: addiu       $v0, $zero, 0x5DC
    ctx->r2 = ADD32(0, 0X5DC);
    // 0x80225640: beq         $v1, $v0, L_8022565C
    if (ctx->r3 == ctx->r2) {
        // 0x80225644: addiu       $a0, $zero, 0xB
        ctx->r4 = ADD32(0, 0XB);
            goto L_8022565C;
    }
    // 0x80225644: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80225648: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022564C: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80225650: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80225654: beq         $v0, $zero, L_80225694
    if (ctx->r2 == 0) {
        // 0x80225658: nop
    
            goto L_80225694;
    }
    // 0x80225658: nop

L_8022565C:
    // 0x8022565C: jal         0x80036E48
    // 0x80225660: nop

    func_80036E48_12248(rdram, ctx);
        goto after_5;
    // 0x80225660: nop

    after_5:
L_80225664:
    // 0x80225664: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
L_80225668:
    // 0x80225668: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022566C: j           L_80225694
    // 0x80225670: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80225694;
    // 0x80225670: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80225674:
    // 0x80225674: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225678: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022567C: bne         $v0, $zero, L_80225694
    if (ctx->r2 != 0) {
        // 0x80225680: nop
    
            goto L_80225694;
    }
    // 0x80225680: nop

    // 0x80225684: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225688: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022568C: jal         0x80061724
    // 0x80225690: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_80061724_3CB24(rdram, ctx);
        goto after_6;
    // 0x80225690: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_6:
L_80225694:
    // 0x80225694: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80225698: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022569C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x802256A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802256A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802256A8: jr          $ra
    // 0x802256AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802256AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C08_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C0C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225C10: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225C14: bne         $v0, $zero, L_80225CE4
    if (ctx->r2 != 0) {
        // 0x80225C18: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225CE4;
    }
    // 0x80225C18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225C1C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C20: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225C24: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80225C28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C2C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225C30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225C34: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C38: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225C3C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225C40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C44: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225C48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C4C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225C50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C54: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225C58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C5C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225C60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C64: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225C68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C6C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225C70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C74: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225C78: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80225C7C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225C80: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x80225C84: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225C88: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225C8C: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80225C90: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225C94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225C98: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225C9C: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x80225CA0: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225CA4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225CA8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225CAC: lw          $a1, 0x34($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X34);
    // 0x80225CB0: lbu         $v1, 0xA($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XA);
    // 0x80225CB4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225CB8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225CBC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225CC0: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225CC4: sb          $v1, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r3;
    // 0x80225CC8: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80225CCC: lbu         $v1, 0xA($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XA);
    // 0x80225CD0: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225CD4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225CD8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225CDC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225CE0: sb          $v1, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r3;
L_80225CE4:
    // 0x80225CE4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225CE8: addiu       $v0, $zero, 0x352
    ctx->r2 = ADD32(0, 0X352);
    // 0x80225CEC: bne         $v1, $v0, L_80225CFC
    if (ctx->r3 != ctx->r2) {
        // 0x80225CF0: nop
    
            goto L_80225CFC;
    }
    // 0x80225CF0: nop

    // 0x80225CF4: jal         0x80036E48
    // 0x80225CF8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x80225CF8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
L_80225CFC:
    // 0x80225CFC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225D00: jr          $ra
    // 0x80225D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225D08: nop

    // 0x80225D0C: nop

;}
RECOMP_FUNC void func_802269D0_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802269D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802269D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802269DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802269E0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802269E4: bne         $v0, $zero, L_80226A18
    if (ctx->r2 != 0) {
        // 0x802269E8: nop
    
            goto L_80226A18;
    }
    // 0x802269E8: nop

    // 0x802269EC: jal         0x8004D5D4
    // 0x802269F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802269F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x802269F4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802269F8: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x802269FC: sh          $v1, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r3;
    // 0x80226A00: sh          $v1, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r3;
    // 0x80226A04: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    // 0x80226A08: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80226A0C: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80226A10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226A14: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80226A18:
    // 0x80226A18: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226A1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226A20: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226A24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226A28: lw          $v0, 0x7C80($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7C80);
    // 0x80226A2C: jalr        $v0
    // 0x80226A30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80226A30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226A34: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80226A38: bne         $v0, $zero, L_80226A50
    if (ctx->r2 != 0) {
        // 0x80226A3C: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80226A50;
    }
    // 0x80226A3C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80226A40: jal         0x8004DD04
    // 0x80226A44: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80226A44: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80226A48: jal         0x8005044C
    // 0x80226A4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80226A4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80226A50:
    // 0x80226A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226A54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226A58: jr          $ra
    // 0x80226A5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226A5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226608_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022660C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226610: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226618: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022661C: bne         $v0, $zero, L_80226638
    if (ctx->r2 != 0) {
        // 0x80226620: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80226638;
    }
    // 0x80226620: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80226624: jal         0x80050294
    // 0x80226628: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226628: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022662C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226630: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226634: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226638:
    // 0x80226638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022663C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226640: jr          $ra
    // 0x80226644: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226644: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802266C8_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802266CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802266D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802266D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802266D8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802266DC: bne         $v0, $zero, L_802266F8
    if (ctx->r2 != 0) {
        // 0x802266E0: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_802266F8;
    }
    // 0x802266E0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802266E4: jal         0x80050294
    // 0x802266E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802266E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802266EC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802266F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802266F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802266F8:
    // 0x802266F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802266FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226700: jr          $ra
    // 0x80226704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226AB0_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226AB0: jr          $ra
    // 0x80226AB4: nop

    TRACE_RETURN()
    return;
    // 0x80226AB4: nop

;}
RECOMP_FUNC void func_80227040_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227044: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227048: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022704C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227050: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80227054: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80227058: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022705C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227060: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227064: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227068: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022706C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80227070: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80227074: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x80227078: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022707C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80227080: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80227084: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x80227088: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
    // 0x8022708C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227090: jal         0x80226F50
    // 0x80227094: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_80226F50_ovl24(rdram, ctx);
        goto after_0;
    // 0x80227094: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80227098: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8022709C: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x802270A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802270A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802270A8: jr          $ra
    // 0x802270AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802270AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227B08_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227B0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227B10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227B18: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227B1C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80227B20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227B24: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80227B28: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227B2C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80227B30: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80227B34: beq         $v1, $zero, L_80227B54
    if (ctx->r3 == 0) {
        // 0x80227B38: nop
    
            goto L_80227B54;
    }
    // 0x80227B38: nop

    // 0x80227B3C: jal         0x80227F24
    // 0x80227B40: nop

    func_80227F24_ovl24(rdram, ctx);
        goto after_0;
    // 0x80227B40: nop

    after_0:
    // 0x80227B44: beq         $v0, $zero, L_80227B54
    if (ctx->r2 == 0) {
        // 0x80227B48: nop
    
            goto L_80227B54;
    }
    // 0x80227B48: nop

    // 0x80227B4C: jal         0x8004F62C
    // 0x80227B50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80227B50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80227B54:
    // 0x80227B54: jal         0x80227B6C
    // 0x80227B58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227B6C_ovl24(rdram, ctx);
        goto after_2;
    // 0x80227B58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227B60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227B64: jr          $ra
    // 0x80227B68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227B68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022533C_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022533C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225340: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225344: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225348: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022534C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225350: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225354: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225358: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022535C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225360: lw          $v1, -0x7B48($at)
    ctx->r3 = MEM_W(ctx->r1, -0X7B48);
    // 0x80225364: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225368: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022536C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80225370: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225374: jalr        $v0
    // 0x80225378: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225378: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x8022537C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225380: jr          $ra
    // 0x80225384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225CE8_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CE8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225CEC: bne         $v0, $zero, L_80225D0C
    if (ctx->r2 != 0) {
        // 0x80225CF0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80225D0C;
    }
    // 0x80225CF0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225CF4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80225CF8: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80225CFC: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225D00: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225D04: ori         $a0, $a0, 0x3
    ctx->r4 = ctx->r4 | 0X3;
    // 0x80225D08: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
L_80225D0C:
    // 0x80225D0C: jr          $ra
    // 0x80225D10: nop

    TRACE_RETURN()
    return;
    // 0x80225D10: nop

;}
RECOMP_FUNC void func_80226D18_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226D1C: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80226D20: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x80226D24: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x80226D28: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x80226D2C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226D30: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80226D34: lw          $v0, -0x7598($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7598);
    // 0x80226D38: jr          $ra
    // 0x80226D3C: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80226D3C: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80226D90_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80226D94: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80226D98: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80226D9C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80226DA0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80226DA4: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80226DA8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x80226DAC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226DB0: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80226DB4: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x80226DB8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226DBC: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80226DC0: beq         $a0, $v0, L_80226DDC
    if (ctx->r4 == ctx->r2) {
        // 0x80226DC4: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80226DDC;
    }
    // 0x80226DC4: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80226DC8: bne         $a0, $v0, L_80226DD8
    if (ctx->r4 != ctx->r2) {
        // 0x80226DCC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80226DD8;
    }
    // 0x80226DCC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80226DD0: j           L_80226DDC
    // 0x80226DD4: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_80226DDC;
    // 0x80226DD4: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_80226DD8:
    // 0x80226DD8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80226DDC:
    // 0x80226DDC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80226DE0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80226DE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226DE8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80226DEC: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80226DF0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80226DF4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80226DF8: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80226DFC: beq         $a0, $v1, L_80226E24
    if (ctx->r4 == ctx->r3) {
        // 0x80226E00: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80226E24;
    }
    // 0x80226E00: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80226E04: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80226E08: jal         0x8003B85C
    // 0x80226E0C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80226E0C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80226E10: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80226E14: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80226E18: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80226E1C: jal         0x8003B840
    // 0x80226E20: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80226E20: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80226E24:
    // 0x80226E24: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x80226E28: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80226E2C: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80226E30: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80226E34: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80226E38: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x80226E3C: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80226E40: beq         $v1, $v0, L_80226E5C
    if (ctx->r3 == ctx->r2) {
        // 0x80226E44: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80226E5C;
    }
    // 0x80226E44: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80226E48: bne         $v1, $v0, L_80226E58
    if (ctx->r3 != ctx->r2) {
        // 0x80226E4C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80226E58;
    }
    // 0x80226E4C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80226E50: j           L_80226E5C
    // 0x80226E54: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_80226E5C;
    // 0x80226E54: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_80226E58:
    // 0x80226E58: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_80226E5C:
    // 0x80226E5C: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x80226E60: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80226E64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226E68: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80226E6C: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x80226E70: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80226E74: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80226E78: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80226E7C: beq         $a0, $v1, L_80226EA4
    if (ctx->r4 == ctx->r3) {
        // 0x80226E80: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80226EA4;
    }
    // 0x80226E80: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80226E84: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80226E88: jal         0x8003B85C
    // 0x80226E8C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80226E8C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x80226E90: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80226E94: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80226E98: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80226E9C: jal         0x8003B840
    // 0x80226EA0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80226EA0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80226EA4:
    // 0x80226EA4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80226EA8: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x80226EAC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80226EB0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80226EB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80226EB8: jr          $ra
    // 0x80226EBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80226EBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022652C_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022652C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226530: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226534: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022653C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226540: bne         $v0, $zero, L_8022655C
    if (ctx->r2 != 0) {
        // 0x80226544: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8022655C;
    }
    // 0x80226544: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226548: jal         0x80050294
    // 0x8022654C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022654C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226550: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226554: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226558: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022655C:
    // 0x8022655C: jal         0x8005044C
    // 0x80226560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80226560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226568: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022656C: jr          $ra
    // 0x80226570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80226574: nop

    // 0x80226578: nop

    // 0x8022657C: nop

;}
RECOMP_FUNC void func_802264DC_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802264E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802264E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802264E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802264EC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802264F0: bne         $v0, $zero, L_8022650C
    if (ctx->r2 != 0) {
        // 0x802264F4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8022650C;
    }
    // 0x802264F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802264F8: jal         0x80050294
    // 0x802264FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802264FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226500: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226504: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226508: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022650C:
    // 0x8022650C: jal         0x80051770
    // 0x80226510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_1;
    // 0x80226510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226514: jal         0x80051248
    // 0x80226518: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_2;
    // 0x80226518: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022651C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226520: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226524: jr          $ra
    // 0x80226528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253C8_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253C8: jr          $ra
    // 0x802253CC: nop

    TRACE_RETURN()
    return;
    // 0x802253CC: nop

;}
RECOMP_FUNC void func_802261A0_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802261A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802261A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802261AC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802261B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802261B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802261B8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802261BC: jal         0x8009A3B4
    // 0x802261C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802261C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x802261C4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802261C8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802261CC: jal         0x8009A3B4
    // 0x802261D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802261D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802261D4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802261D8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802261DC: jal         0x8009A3B4
    // 0x802261E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802261E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802261E4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802261E8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802261EC: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802261F0: bne         $v1, $zero, L_80226260
    if (ctx->r3 != 0) {
        // 0x802261F4: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_80226260;
    }
    // 0x802261F4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802261F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802261FC: jal         0x8004D5D4
    // 0x80226200: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80226200: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x80226204: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226208: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022620C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226210: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226214: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226218: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022621C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226220: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226224: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80226228: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022622C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80226230: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80226234: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80226238: sh          $zero, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = 0;
    // 0x8022623C: jal         0x8022635C
    // 0x80226240: sh          $zero, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = 0;
    func_8022635C_ovl24(rdram, ctx);
        goto after_4;
    // 0x80226240: sh          $zero, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = 0;
    after_4:
    // 0x80226244: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226248: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022624C: jal         0x80226384
    // 0x80226250: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80226384_ovl24(rdram, ctx);
        goto after_5;
    // 0x80226250: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80226254: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226258: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022625C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80226260:
    // 0x80226260: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226264: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226268: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022626C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226270: lw          $v0, -0x7644($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7644);
    // 0x80226274: jalr        $v0
    // 0x80226278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80226278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022627C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226280: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80226284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226288: bne         $v1, $v0, L_80226348
    if (ctx->r3 != ctx->r2) {
        // 0x8022628C: nop
    
            goto L_80226348;
    }
    // 0x8022628C: nop

    // 0x80226290: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226294: lbu         $v0, -0x3A47($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A47);
    // 0x80226298: beql        $v0, $zero, L_802262B0
    if (ctx->r2 == 0) {
        // 0x8022629C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802262B0;
    }
    goto skip_0;
    // 0x8022629C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    skip_0:
    // 0x802262A0: beq         $v0, $v1, L_802262F0
    if (ctx->r2 == ctx->r3) {
        // 0x802262A4: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_802262F0;
    }
    // 0x802262A4: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802262A8: j           L_80226334
    // 0x802262AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80226334;
    // 0x802262AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802262B0:
    // 0x802262B0: lh          $v1, 0x4E0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4E0);
    // 0x802262B4: bne         $v1, $v0, L_80226334
    if (ctx->r3 != ctx->r2) {
        // 0x802262B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226334;
    }
    // 0x802262B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802262BC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802262C0: lbu         $v0, -0x3A46($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A46);
    // 0x802262C4: bne         $v0, $zero, L_802262E0
    if (ctx->r2 != 0) {
        // 0x802262C8: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_802262E0;
    }
    // 0x802262C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802262CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802262D0: jal         0x80226384
    // 0x802262D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80226384_ovl24(rdram, ctx);
        goto after_7;
    // 0x802262D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x802262D8: j           L_80226324
    // 0x802262DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80226324;
    // 0x802262DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802262E0:
    // 0x802262E0: jal         0x80226384
    // 0x802262E4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80226384_ovl24(rdram, ctx);
        goto after_8;
    // 0x802262E4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_8:
    // 0x802262E8: j           L_80226324
    // 0x802262EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80226324;
    // 0x802262EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802262F0:
    // 0x802262F0: lh          $v1, 0x4E0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4E0);
    // 0x802262F4: beq         $v1, $v0, L_8022630C
    if (ctx->r3 == ctx->r2) {
        // 0x802262F8: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8022630C;
    }
    // 0x802262F8: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802262FC: beq         $v1, $v0, L_80226324
    if (ctx->r3 == ctx->r2) {
        // 0x80226300: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226324;
    }
    // 0x80226300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226304: j           L_80226330
    // 0x80226308: nop

        goto L_80226330;
    // 0x80226308: nop

L_8022630C:
    // 0x8022630C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226310: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226314: jal         0x80226384
    // 0x80226318: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80226384_ovl24(rdram, ctx);
        goto after_9;
    // 0x80226318: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8022631C: j           L_80226334
    // 0x80226320: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80226334;
    // 0x80226320: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80226324:
    // 0x80226324: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226328: jal         0x8022635C
    // 0x8022632C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8022635C_ovl24(rdram, ctx);
        goto after_10;
    // 0x8022632C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
L_80226330:
    // 0x80226330: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80226334:
    // 0x80226334: jal         0x802263AC
    // 0x80226338: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802263AC_ovl24(rdram, ctx);
        goto after_11;
    // 0x80226338: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_11:
    // 0x8022633C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226340: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226344: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80226348:
    // 0x80226348: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022634C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226350: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226354: jr          $ra
    // 0x80226358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226EC0_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226EC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226EC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226ED0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226ED4: bne         $v0, $zero, L_80226EF0
    if (ctx->r2 != 0) {
        // 0x80226ED8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80226EF0;
    }
    // 0x80226ED8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226EDC: jal         0x80050294
    // 0x80226EE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226EE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226EE4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226EE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226EEC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226EF0:
    // 0x80226EF0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226EF4: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80226EF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226EFC: bne         $v1, $v0, L_80226F34
    if (ctx->r3 != ctx->r2) {
        // 0x80226F00: nop
    
            goto L_80226F34;
    }
    // 0x80226F00: nop

    // 0x80226F04: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226F08: lbu         $v0, -0x3A47($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A47);
    // 0x80226F0C: bne         $v0, $v1, L_80226F24
    if (ctx->r2 != ctx->r3) {
        // 0x80226F10: nop
    
            goto L_80226F24;
    }
    // 0x80226F10: nop

    // 0x80226F14: jal         0x8005044C
    // 0x80226F18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80226F18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226F1C: j           L_80226F34
    // 0x80226F20: nop

        goto L_80226F34;
    // 0x80226F20: nop

L_80226F24:
    // 0x80226F24: jal         0x80051770
    // 0x80226F28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_2;
    // 0x80226F28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226F2C: jal         0x80051248
    // 0x80226F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_3;
    // 0x80226F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80226F34:
    // 0x80226F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226F38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226F3C: jr          $ra
    // 0x80226F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80226F44: nop

    // 0x80226F48: nop

    // 0x80226F4C: nop

;}
RECOMP_FUNC void func_802266F0_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802266F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802266F8: jal         0x8004F418
    // 0x802266FC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802266FC: nop

    after_0:
    // 0x80226700: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226704: jr          $ra
    // 0x80226708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022670C: nop

;}
RECOMP_FUNC void func_8022575C_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022575C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225760: bne         $v0, $zero, L_802257F0
    if (ctx->r2 != 0) {
        // 0x80225764: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802257F0;
    }
    // 0x80225764: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225768: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022576C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225770: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80225774: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225778: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022577C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225780: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225784: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225788: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022578C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225790: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225794: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225798: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x8022579C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802257A0: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802257A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802257A8: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802257AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802257B0: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802257B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802257B8: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802257BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802257C0: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x802257C4: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x802257C8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802257CC: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x802257D0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802257D4: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x802257D8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802257DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802257E0: sb          $a0, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r4;
    // 0x802257E4: sb          $a0, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r4;
    // 0x802257E8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802257EC: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_802257F0:
    // 0x802257F0: jr          $ra
    // 0x802257F4: nop

    TRACE_RETURN()
    return;
    // 0x802257F4: nop

;}
RECOMP_FUNC void func_802270D0_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802270D0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802270D4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802270D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802270DC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802270E0: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x802270E4: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x802270E8: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x802270EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802270F0: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x802270F4: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x802270F8: lh          $a1, 0x34($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X34);
    // 0x802270FC: lhu         $v1, 0x2C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2C);
    // 0x80227100: addiu       $a0, $a0, -0x147A
    ctx->r4 = ADD32(ctx->r4, -0X147A);
    // 0x80227104: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    // 0x80227108: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022710C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227110: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x80227114: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x80227118: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022711C: andi        $a0, $v1, 0xFFF
    ctx->r4 = ctx->r3 & 0XFFF;
    // 0x80227120: bgez        $v0, L_80227138
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227124: sh          $a0, 0x2C($s0)
        MEM_H(0X2C, ctx->r16) = ctx->r4;
            goto L_80227138;
    }
    // 0x80227124: sh          $a0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r4;
    // 0x80227128: jal         0x8004F5C4
    // 0x8022712C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022712C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80227130: j           L_802271D4
    // 0x80227134: nop

        goto L_802271D4;
    // 0x80227134: nop

L_80227138:
    // 0x80227138: jal         0x80032498
    // 0x8022713C: nop

    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8022713C: nop

    after_1:
    // 0x80227140: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80227144: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227148: mflo        $v0
    ctx->r2 = lo;
    // 0x8022714C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80227150: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x80227154: jal         0x800324B4
    // 0x80227158: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80227158: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    after_2:
    // 0x8022715C: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80227160: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227164: mflo        $v0
    ctx->r2 = lo;
    // 0x80227168: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022716C: sh          $zero, 0x34($sp)
    MEM_H(0X34, ctx->r29) = 0;
    // 0x80227170: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80227174: jal         0x8002C654
    // 0x80227178: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_3;
    // 0x80227178: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022717C: lh          $a0, 0x30($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X30);
    // 0x80227180: jal         0x800319B4
    // 0x80227184: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x80227184: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x80227188: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022718C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80227190: jal         0x80031270
    // 0x80227194: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80031270_C670(rdram, ctx);
        goto after_5;
    // 0x80227194: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_5:
    // 0x80227198: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x8022719C: lhu         $v1, 0x38($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X38);
    // 0x802271A0: lhu         $v0, 0x1C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1C);
    // 0x802271A4: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x802271A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802271AC: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x802271B0: lhu         $v0, 0x1E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X1E);
    // 0x802271B4: lhu         $v1, 0x3A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X3A);
    // 0x802271B8: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x802271BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802271C0: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x802271C4: lhu         $v0, 0x20($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X20);
    // 0x802271C8: lhu         $v1, 0x3C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X3C);
    // 0x802271CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802271D0: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_802271D4:
    // 0x802271D4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802271D8: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x802271DC: jr          $ra
    // 0x802271E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x802271E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_802273D0_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802273D0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802273D4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x802273D8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802273DC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802273E0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x802273E4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802273E8: lw          $s1, 0x28($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X28);
    // 0x802273EC: lhu         $v0, 0x2C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2C);
    // 0x802273F0: lhu         $s0, 0x56($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X56);
    // 0x802273F4: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x802273F8: lhu         $v0, 0x2E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2E);
    // 0x802273FC: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x80227400: lhu         $v0, 0x30($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X30);
    // 0x80227404: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80227408: jal         0x8002C654
    // 0x8022740C: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8022740C: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x80227410: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80227414: sra         $a0, $s0, 16
    ctx->r4 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80227418: jal         0x800319B4
    // 0x8022741C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8022741C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x80227420: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80227424: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80227428: jal         0x80031270
    // 0x8022742C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x8022742C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x80227430: lh          $v1, 0x1C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1C);
    // 0x80227434: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x80227438: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022743C: sh          $v0, 0x1C($s2)
    MEM_H(0X1C, ctx->r18) = ctx->r2;
    // 0x80227440: lh          $v1, 0x20($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X20);
    // 0x80227444: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x80227448: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022744C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
    // 0x80227450: lh          $a0, 0x24($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X24);
    // 0x80227454: lhu         $v1, 0x26($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X26);
    // 0x80227458: lhu         $v0, 0x3C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3C);
    // 0x8022745C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227460: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227464: sh          $v1, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r3;
    // 0x80227468: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8022746C: sh          $v0, 0x20($s2)
    MEM_H(0X20, ctx->r18) = ctx->r2;
    // 0x80227470: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227474: beql        $v1, $v0, L_8022747C
    if (ctx->r3 == ctx->r2) {
        // 0x80227478: sh          $zero, 0x26($s2)
        MEM_H(0X26, ctx->r18) = 0;
            goto L_8022747C;
    }
    goto skip_0;
    // 0x80227478: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    skip_0:
L_8022747C:
    // 0x8022747C: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80227480: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227484: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80227488: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022748C: lbu         $v1, -0x7560($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X7560);
    // 0x80227490: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80227494: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227498: sb          $v1, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r3;
    // 0x8022749C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802274A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802274A4: lbu         $v1, -0x755F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X755F);
    // 0x802274A8: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x802274AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802274B0: sb          $v1, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r3;
    // 0x802274B4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802274B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802274BC: lhu         $v0, -0x755E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X755E);
    // 0x802274C0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x802274C4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802274C8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x802274CC: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x802274D0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x802274D4: jr          $ra
    // 0x802274D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x802274D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80226F50_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226F54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226F58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226F60: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226F64: bne         $v0, $zero, L_80226FD8
    if (ctx->r2 != 0) {
        // 0x80226F68: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226FD8;
    }
    // 0x80226F68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F6C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226F70: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80226F74: bnel        $v1, $v0, L_80226FBC
    if (ctx->r3 != ctx->r2) {
        // 0x80226F78: sb          $zero, 0xC($s0)
        MEM_B(0XC, ctx->r16) = 0;
            goto L_80226FBC;
    }
    goto skip_0;
    // 0x80226F78: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    skip_0:
    // 0x80226F7C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226F80: lbu         $v0, -0x3A47($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A47);
    // 0x80226F84: bne         $v0, $v1, L_80226FD8
    if (ctx->r2 != ctx->r3) {
        // 0x80226F88: addiu       $a1, $s0, 0xC
        ctx->r5 = ADD32(ctx->r16, 0XC);
            goto L_80226FD8;
    }
    // 0x80226F88: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x80226F8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F90: jal         0x8004D5D4
    // 0x80226F94: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226F94: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226F98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226F9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226FA0: jal         0x80050294
    // 0x80226FA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80226FA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80226FA8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226FAC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80226FB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226FB4: j           L_80226FD8
    // 0x80226FB8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80226FD8;
    // 0x80226FB8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80226FBC:
    // 0x80226FBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226FC0: jal         0x8004D5D4
    // 0x80226FC4: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x80226FC4: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    after_2:
    // 0x80226FC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226FCC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226FD0: jal         0x80050294
    // 0x80226FD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80226FD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
L_80226FD8:
    // 0x80226FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226FDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226FE0: jr          $ra
    // 0x80226FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227A80_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227A84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227A88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227A90: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80227A94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227A98: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227A9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227AA0: lw          $v0, -0x7368($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7368);
    // 0x80227AA4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80227AA8: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80227AAC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80227AB0: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80227AB4: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80227AB8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80227ABC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80227AC0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80227AC4: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80227AC8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80227ACC: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80227AD0: jal         0x80227F24
    // 0x80227AD4: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_80227F24_ovl24(rdram, ctx);
        goto after_0;
    // 0x80227AD4: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227AD8: beq         $v0, $zero, L_80227AEC
    if (ctx->r2 == 0) {
        // 0x80227ADC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227AEC;
    }
    // 0x80227ADC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227AE0: jal         0x8004F62C
    // 0x80227AE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80227AE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227AE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227AEC:
    // 0x80227AEC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227AF0: jal         0x80227B6C
    // 0x80227AF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227B6C_ovl24(rdram, ctx);
        goto after_2;
    // 0x80227AF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227AFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227B00: jr          $ra
    // 0x80227B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226FE8_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226FEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226FF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226FF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226FF8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226FFC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227000: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227004: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227008: lw          $v0, -0x7580($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7580);
    // 0x8022700C: jalr        $v0
    // 0x80227010: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227010: nop

    after_0:
    // 0x80227014: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80227018: jal         0x8004DD04
    // 0x8022701C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8022701C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80227020: jal         0x800504EC
    // 0x80227024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_2;
    // 0x80227024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227028: jal         0x8005129C
    // 0x8022702C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_3;
    // 0x8022702C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80227030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227034: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227038: jr          $ra
    // 0x8022703C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022703C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225DA4_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DA4: jr          $ra
    // 0x80225DA8: nop

    TRACE_RETURN()
    return;
    // 0x80225DA8: nop

;}
RECOMP_FUNC void func_80226D68_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226D6C: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80226D70: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x80226D74: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x80226D78: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x80226D7C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226D80: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80226D84: lw          $v0, -0x7590($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7590);
    // 0x80226D88: jr          $ra
    // 0x80226D8C: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80226D8C: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80226B20_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226B24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226B28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226B2C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80226B30: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226B34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226B38: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226B3C: jal         0x8009A3B4
    // 0x80226B40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80226B40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80226B44: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80226B48: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80226B4C: jal         0x8009A3B4
    // 0x80226B50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226B50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80226B54: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80226B58: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80226B5C: jal         0x8009A3B4
    // 0x80226B60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80226B60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80226B64: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226B68: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80226B6C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80226B70: bne         $v1, $zero, L_80226BE0
    if (ctx->r3 != 0) {
        // 0x80226B74: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_80226BE0;
    }
    // 0x80226B74: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80226B78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226B7C: jal         0x8004D5D4
    // 0x80226B80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80226B80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x80226B84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226B88: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226B8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226B90: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226B94: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226B98: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226B9C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226BA0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226BA4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80226BA8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226BAC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80226BB0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80226BB4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80226BB8: sh          $zero, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = 0;
    // 0x80226BBC: jal         0x80226CF0
    // 0x80226BC0: sh          $zero, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = 0;
    func_80226CF0_ovl24(rdram, ctx);
        goto after_4;
    // 0x80226BC0: sh          $zero, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = 0;
    after_4:
    // 0x80226BC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226BC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226BCC: jal         0x80226D18
    // 0x80226BD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80226D18_ovl24(rdram, ctx);
        goto after_5;
    // 0x80226BD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80226BD4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226BD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226BDC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80226BE0:
    // 0x80226BE0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226BE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226BE8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226BEC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226BF0: lw          $v0, -0x7588($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7588);
    // 0x80226BF4: jalr        $v0
    // 0x80226BF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80226BF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80226BFC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226C00: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80226C04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C08: bne         $v1, $v0, L_80226CDC
    if (ctx->r3 != ctx->r2) {
        // 0x80226C0C: nop
    
            goto L_80226CDC;
    }
    // 0x80226C0C: nop

    // 0x80226C10: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226C14: lbu         $v0, -0x3A47($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A47);
    // 0x80226C18: beql        $v0, $zero, L_80226C30
    if (ctx->r2 == 0) {
        // 0x80226C1C: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80226C30;
    }
    goto skip_0;
    // 0x80226C1C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    skip_0:
    // 0x80226C20: beq         $v0, $v1, L_80226C74
    if (ctx->r2 == ctx->r3) {
        // 0x80226C24: addiu       $v0, $zero, 0xAA
        ctx->r2 = ADD32(0, 0XAA);
            goto L_80226C74;
    }
    // 0x80226C24: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x80226C28: j           L_80226CC8
    // 0x80226C2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80226CC8;
    // 0x80226C2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80226C30:
    // 0x80226C30: lh          $v1, 0x4E0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4E0);
    // 0x80226C34: beq         $v1, $v0, L_80226C4C
    if (ctx->r3 == ctx->r2) {
        // 0x80226C38: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_80226C4C;
    }
    // 0x80226C38: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80226C3C: beq         $v1, $v0, L_80226CB8
    if (ctx->r3 == ctx->r2) {
        // 0x80226C40: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226CB8;
    }
    // 0x80226C40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226C44: j           L_80226CC4
    // 0x80226C48: nop

        goto L_80226CC4;
    // 0x80226C48: nop

L_80226C4C:
    // 0x80226C4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226C50: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226C54: jal         0x80226D18
    // 0x80226C58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80226D18_ovl24(rdram, ctx);
        goto after_7;
    // 0x80226C58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80226C5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226C60: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226C64: jal         0x80226CF0
    // 0x80226C68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80226CF0_ovl24(rdram, ctx);
        goto after_8;
    // 0x80226C68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x80226C6C: j           L_80226CC8
    // 0x80226C70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80226CC8;
    // 0x80226C70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80226C74:
    // 0x80226C74: lh          $v1, 0x4E0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4E0);
    // 0x80226C78: beq         $v1, $v0, L_80226C90
    if (ctx->r3 == ctx->r2) {
        // 0x80226C7C: addiu       $v0, $zero, 0xDC
        ctx->r2 = ADD32(0, 0XDC);
            goto L_80226C90;
    }
    // 0x80226C7C: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x80226C80: beq         $v1, $v0, L_80226CB8
    if (ctx->r3 == ctx->r2) {
        // 0x80226C84: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226CB8;
    }
    // 0x80226C84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226C88: j           L_80226CC4
    // 0x80226C8C: nop

        goto L_80226CC4;
    // 0x80226C8C: nop

L_80226C90:
    // 0x80226C90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226C94: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226C98: jal         0x80226D68
    // 0x80226C9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80226D68_ovl24(rdram, ctx);
        goto after_9;
    // 0x80226C9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80226CA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226CA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226CA8: jal         0x80226D40
    // 0x80226CAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80226D40_ovl24(rdram, ctx);
        goto after_10;
    // 0x80226CAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x80226CB0: j           L_80226CC8
    // 0x80226CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80226CC8;
    // 0x80226CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80226CB8:
    // 0x80226CB8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226CBC: jal         0x80226D18
    // 0x80226CC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80226D18_ovl24(rdram, ctx);
        goto after_11;
    // 0x80226CC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
L_80226CC4:
    // 0x80226CC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80226CC8:
    // 0x80226CC8: jal         0x80226D90
    // 0x80226CCC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80226D90_ovl24(rdram, ctx);
        goto after_12;
    // 0x80226CCC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_12:
    // 0x80226CD0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226CD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226CD8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80226CDC:
    // 0x80226CDC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226CE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226CE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226CE8: jr          $ra
    // 0x80226CEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226CEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227700_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227700: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227704: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227708: lbu         $s0, 0x3B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X3B);
    // 0x8022770C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227710: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227714: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227718: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8022771C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227720: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80227724: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80227728: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022772C: jal         0x8004F144
    // 0x80227730: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80227730: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    after_0:
    // 0x80227734: bne         $v0, $zero, L_80227744
    if (ctx->r2 != 0) {
        // 0x80227738: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80227744;
    }
    // 0x80227738: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022773C: j           L_80227768
    // 0x80227740: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80227768;
    // 0x80227740: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80227744:
    // 0x80227744: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80227748: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022774C: sb          $v1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r3;
    // 0x80227750: sb          $s0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r16;
    // 0x80227754: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x80227758: sw          $s1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r17;
    // 0x8022775C: sh          $s2, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r18;
    // 0x80227760: sh          $s3, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r19;
    // 0x80227764: sh          $s4, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r20;
L_80227768:
    // 0x80227768: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022776C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80227770: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227774: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227778: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022777C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227780: jr          $ra
    // 0x80227784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227784: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802271E4_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802271E4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802271E8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x802271EC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802271F0: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x802271F4: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x802271F8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x802271FC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80227200: lw          $s0, 0x28($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X28);
    // 0x80227204: lhu         $v0, 0x2C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2C);
    // 0x80227208: lhu         $s3, 0x56($s0)
    ctx->r19 = MEM_HU(ctx->r16, 0X56);
    // 0x8022720C: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x80227210: lhu         $v0, 0x2E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2E);
    // 0x80227214: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x80227218: lhu         $v0, 0x30($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X30);
    // 0x8022721C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80227220: jal         0x8002C654
    // 0x80227224: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80227224: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x80227228: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x8022722C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80227230: jal         0x800319B4
    // 0x80227234: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80227234: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x80227238: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022723C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80227240: jal         0x80031270
    // 0x80227244: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x80227244: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x80227248: lh          $v1, 0x1C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1C);
    // 0x8022724C: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x80227250: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227254: sh          $v0, 0x1C($s2)
    MEM_H(0X1C, ctx->r18) = ctx->r2;
    // 0x80227258: lh          $a0, 0x20($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X20);
    // 0x8022725C: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x80227260: lw          $a1, 0x34($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X34);
    // 0x80227264: lui         $v1, 0x8F
    ctx->r3 = S32(0X8F << 16);
    // 0x80227268: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022726C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
    // 0x80227270: lh          $a0, 0x24($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X24);
    // 0x80227274: lhu         $v0, 0x3C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3C);
    // 0x80227278: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022727C: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80227280: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227284: bne         $v1, $zero, L_802272B8
    if (ctx->r3 != 0) {
        // 0x80227288: sh          $v0, 0x20($s2)
        MEM_H(0X20, ctx->r18) = ctx->r2;
            goto L_802272B8;
    }
    // 0x80227288: sh          $v0, 0x20($s2)
    MEM_H(0X20, ctx->r18) = ctx->r2;
    // 0x8022728C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80227290: ori         $v0, $v0, 0x70A3
    ctx->r2 = ctx->r2 | 0X70A3;
    // 0x80227294: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80227298: sw          $v0, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->r2;
    // 0x8022729C: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
    // 0x802272A0: lw          $a0, 0x3C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X3C);
    // 0x802272A4: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x802272A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802272AC: addiu       $a0, $a0, -0x147A
    ctx->r4 = ADD32(ctx->r4, -0X147A);
    // 0x802272B0: sw          $v0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r2;
    // 0x802272B4: sw          $a0, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->r4;
L_802272B8:
    // 0x802272B8: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x802272BC: lh          $v1, 0x34($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X34);
    // 0x802272C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802272C4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802272C8: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x802272CC: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x802272D0: sh          $v1, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r3;
    // 0x802272D4: lhu         $v1, 0x26($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X26);
    // 0x802272D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802272DC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802272E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802272E4: lbu         $v0, -0x7570($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X7570);
    // 0x802272E8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802272EC: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x802272F0: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x802272F4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802272F8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802272FC: lbu         $v1, -0x756F($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X756F);
    // 0x80227300: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227304: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
    // 0x80227308: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022730C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80227310: sb          $v1, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r3;
    // 0x80227314: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80227318: bne         $v0, $v1, L_802273B4
    if (ctx->r2 != ctx->r3) {
        // 0x8022731C: nop
    
            goto L_802273B4;
    }
    // 0x8022731C: nop

    // 0x80227320: jal         0x8004F144
    // 0x80227324: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80227324: nop

    after_3:
    // 0x80227328: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022732C: beq         $s1, $zero, L_802273B0
    if (ctx->r17 == 0) {
        // 0x80227330: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_802273B0;
    }
    // 0x80227330: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80227334: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227338: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x8022733C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80227340: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x80227344: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80227348: jal         0x800A3450
    // 0x8022734C: sb          $v1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022734C: sb          $v1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r3;
    after_4:
    // 0x80227350: jal         0x800A3450
    // 0x80227354: andi        $s0, $v0, 0xFFF
    ctx->r16 = ctx->r2 & 0XFFF;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80227354: andi        $s0, $v0, 0xFFF
    ctx->r16 = ctx->r2 & 0XFFF;
    after_5:
    // 0x80227358: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022735C: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    // 0x80227360: lui         $v1, 0x3C48
    ctx->r3 = S32(0X3C48 << 16);
    // 0x80227364: ori         $v1, $v1, 0x2E
    ctx->r3 = ctx->r3 | 0X2E;
    // 0x80227368: lui         $a0, 0x2E20
    ctx->r4 = S32(0X2E20 << 16);
    // 0x8022736C: ori         $a0, $a0, 0x2020
    ctx->r4 = ctx->r4 | 0X2020;
    // 0x80227370: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
    // 0x80227374: addiu       $v1, $zero, 0x12
    ctx->r3 = ADD32(0, 0X12);
    // 0x80227378: sh          $v1, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r3;
    // 0x8022737C: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80227380: sb          $v1, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r3;
    // 0x80227384: addiu       $v1, $zero, 0xA0
    ctx->r3 = ADD32(0, 0XA0);
    // 0x80227388: sw          $a0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r4;
    // 0x8022738C: sb          $v1, 0x23($s1)
    MEM_B(0X23, ctx->r17) = ctx->r3;
    // 0x80227390: sw          $s2, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r18;
    // 0x80227394: sh          $s0, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r16;
    // 0x80227398: sh          $v0, 0x2E($s1)
    MEM_H(0X2E, ctx->r17) = ctx->r2;
    // 0x8022739C: sh          $s3, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r19;
    // 0x802273A0: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
    // 0x802273A4: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x802273A8: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    // 0x802273AC: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
L_802273B0:
    // 0x802273B0: sb          $zero, 0xE($s2)
    MEM_B(0XE, ctx->r18) = 0;
L_802273B4:
    // 0x802273B4: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x802273B8: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x802273BC: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x802273C0: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x802273C4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x802273C8: jr          $ra
    // 0x802273CC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x802273CC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_802278DC_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802278E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802278E4: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x802278E8: bne         $v0, $zero, L_80227910
    if (ctx->r2 != 0) {
        // 0x802278EC: nop
    
            goto L_80227910;
    }
    // 0x802278EC: nop

    // 0x802278F0: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802278F4: bne         $v0, $zero, L_80227900
    if (ctx->r2 != 0) {
        // 0x802278F8: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80227900;
    }
    // 0x802278F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802278FC: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80227900:
    // 0x80227900: jal         0x802274DC
    // 0x80227904: nop

    func_802274DC_ovl24(rdram, ctx);
        goto after_0;
    // 0x80227904: nop

    after_0:
    // 0x80227908: j           L_80227994
    // 0x8022790C: nop

        goto L_80227994;
    // 0x8022790C: nop

L_80227910:
    // 0x80227910: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80227914: bne         $v0, $zero, L_80227934
    if (ctx->r2 != 0) {
        // 0x80227918: nop
    
            goto L_80227934;
    }
    // 0x80227918: nop

    // 0x8022791C: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80227920: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80227924: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227928: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022792C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80227930: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
L_80227934:
    // 0x80227934: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x80227938: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022793C: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    // 0x80227940: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227944: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80227948: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022794C: bne         $v1, $v0, L_80227964
    if (ctx->r3 != ctx->r2) {
        // 0x80227950: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80227964;
    }
    // 0x80227950: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227954: jal         0x8004F5C4
    // 0x80227958: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80227958: nop

    after_1:
    // 0x8022795C: j           L_80227994
    // 0x80227960: nop

        goto L_80227994;
    // 0x80227960: nop

L_80227964:
    // 0x80227964: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80227968: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022796C: lw          $v1, -0x7550($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7550);
    // 0x80227970: lhu         $v0, 0x24($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X24);
    // 0x80227974: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80227978: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x8022797C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80227980: sltiu       $v0, $v0, 0x121
    ctx->r2 = ctx->r2 < 0X121 ? 1 : 0;
    // 0x80227984: bne         $v0, $zero, L_80227994
    if (ctx->r2 != 0) {
        // 0x80227988: sw          $v1, 0x18($a0)
        MEM_W(0X18, ctx->r4) = ctx->r3;
            goto L_80227994;
    }
    // 0x80227988: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x8022798C: addiu       $v0, $zero, 0x120
    ctx->r2 = ADD32(0, 0X120);
    // 0x80227990: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
L_80227994:
    // 0x80227994: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227998: jr          $ra
    // 0x8022799C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022799C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226AB8_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226AB8: jr          $ra
    // 0x80226ABC: nop

    TRACE_RETURN()
    return;
    // 0x80226ABC: nop

;}
RECOMP_FUNC void func_80227788_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022778C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227790: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80227794: bne         $v0, $zero, L_80227820
    if (ctx->r2 != 0) {
        // 0x80227798: nop
    
            goto L_80227820;
    }
    // 0x80227798: nop

    // 0x8022779C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802277A0: bne         $v0, $zero, L_80227810
    if (ctx->r2 != 0) {
        // 0x802277A4: nop
    
            goto L_80227810;
    }
    // 0x802277A4: nop

    // 0x802277A8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802277AC: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x802277B0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802277B4: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x802277B8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802277BC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802277C0: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x802277C4: bnel        $v1, $v0, L_802277D8
    if (ctx->r3 != ctx->r2) {
        // 0x802277C8: lui         $v0, 0x3C88
        ctx->r2 = S32(0X3C88 << 16);
            goto L_802277D8;
    }
    goto skip_0;
    // 0x802277C8: lui         $v0, 0x3C88
    ctx->r2 = S32(0X3C88 << 16);
    skip_0:
    // 0x802277CC: lui         $v0, 0x3CC8
    ctx->r2 = S32(0X3CC8 << 16);
    // 0x802277D0: j           L_802277DC
    // 0x802277D4: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
        goto L_802277DC;
    // 0x802277D4: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
L_802277D8:
    // 0x802277D8: ori         $v0, $v0, 0x26
    ctx->r2 = ctx->r2 | 0X26;
L_802277DC:
    // 0x802277DC: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x802277E0: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x802277E4: lui         $v0, 0x2E80
    ctx->r2 = S32(0X2E80 << 16);
    // 0x802277E8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802277EC: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x802277F0: lui         $v0, 0xA
    ctx->r2 = S32(0XA << 16);
    // 0x802277F4: sw          $v0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r2;
    // 0x802277F8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x802277FC: sh          $zero, 0x26($a0)
    MEM_H(0X26, ctx->r4) = 0;
    // 0x80227800: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x80227804: sw          $v0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r2;
    // 0x80227808: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022780C: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
L_80227810:
    // 0x80227810: jal         0x802271E4
    // 0x80227814: nop

    func_802271E4_ovl24(rdram, ctx);
        goto after_0;
    // 0x80227814: nop

    after_0:
    // 0x80227818: j           L_8022784C
    // 0x8022781C: nop

        goto L_8022784C;
    // 0x8022781C: nop

L_80227820:
    // 0x80227820: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80227824: bne         $v0, $zero, L_80227844
    if (ctx->r2 != 0) {
        // 0x80227828: nop
    
            goto L_80227844;
    }
    // 0x80227828: nop

    // 0x8022782C: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80227830: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80227834: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227838: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022783C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80227840: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
L_80227844:
    // 0x80227844: jal         0x802270D0
    // 0x80227848: nop

    func_802270D0_ovl24(rdram, ctx);
        goto after_1;
    // 0x80227848: nop

    after_1:
L_8022784C:
    // 0x8022784C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227850: jr          $ra
    // 0x80227854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226190_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226190: jr          $ra
    // 0x80226194: nop

    TRACE_RETURN()
    return;
    // 0x80226194: nop

    // 0x80226198: nop

    // 0x8022619C: nop

;}
RECOMP_FUNC void func_8022582C_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022582C: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x80225830: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225834: beq         $v1, $v0, L_802258E4
    if (ctx->r3 == ctx->r2) {
        // 0x80225838: nop
    
            goto L_802258E4;
    }
    // 0x80225838: nop

    // 0x8022583C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225840: bne         $v0, $zero, L_802258E4
    if (ctx->r2 != 0) {
        // 0x80225844: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802258E4;
    }
    // 0x80225844: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225848: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022584C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225850: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80225854: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225858: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022585C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225860: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225864: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80225868: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022586C: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225870: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225874: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225878: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022587C: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225880: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225884: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225888: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022588C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225890: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225894: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225898: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022589C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x802258A0: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802258A4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802258A8: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x802258AC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802258B0: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x802258B4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x802258B8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802258BC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802258C0: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x802258C4: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x802258C8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802258CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802258D0: sb          $a0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r4;
    // 0x802258D4: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802258D8: sb          $a0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r4;
    // 0x802258DC: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x802258E0: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_802258E4:
    // 0x802258E4: jr          $ra
    // 0x802258E8: nop

    TRACE_RETURN()
    return;
    // 0x802258E8: nop

;}
RECOMP_FUNC void func_8022635C_ovl24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022635C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226360: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80226364: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x80226368: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x8022636C: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80226370: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226374: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80226378: lw          $v0, -0x7664($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7664);
    // 0x8022637C: jr          $ra
    // 0x80226380: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80226380: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
