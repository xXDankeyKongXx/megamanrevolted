#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80226A9C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A9C: jr          $ra
    // 0x80226AA0: nop

    TRACE_RETURN()
    return;
    // 0x80226AA0: nop

;}
RECOMP_FUNC void func_8022F1C4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F1C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F1C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F1CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F1D0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F1D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F1D8: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022F1DC: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022F1E0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F1E4: jal         0x8004FA7C
    // 0x8022F1E8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022F1E8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022F1EC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022F1F0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022F1F4: beq         $v0, $zero, L_8022F288
    if (ctx->r2 == 0) {
        // 0x8022F1F8: nop
    
            goto L_8022F288;
    }
    // 0x8022F1F8: nop

    // 0x8022F1FC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F200: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022F204: bne         $v0, $zero, L_8022F288
    if (ctx->r2 != 0) {
        // 0x8022F208: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F288;
    }
    // 0x8022F208: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F20C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022F210: beq         $v1, $v0, L_8022F228
    if (ctx->r3 == ctx->r2) {
        // 0x8022F214: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F228;
    }
    // 0x8022F214: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F218: beq         $v1, $v0, L_8022F258
    if (ctx->r3 == ctx->r2) {
        // 0x8022F21C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F258;
    }
    // 0x8022F21C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F220: j           L_8022F27C
    // 0x8022F224: nop

        goto L_8022F27C;
    // 0x8022F224: nop

L_8022F228:
    // 0x8022F228: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F22C: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022F230: bne         $v0, $zero, L_8022F27C
    if (ctx->r2 != 0) {
        // 0x8022F234: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F27C;
    }
    // 0x8022F234: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F238: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022F23C: bne         $v0, $zero, L_8022F27C
    if (ctx->r2 != 0) {
        // 0x8022F240: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F27C;
    }
    // 0x8022F240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F244: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022F248: bne         $v1, $v0, L_8022F27C
    if (ctx->r3 != ctx->r2) {
        // 0x8022F24C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F27C;
    }
    // 0x8022F24C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F250: j           L_8022F27C
    // 0x8022F254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022F27C;
    // 0x8022F254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022F258:
    // 0x8022F258: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F25C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022F260: beq         $v0, $zero, L_8022F278
    if (ctx->r2 == 0) {
        // 0x8022F264: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022F278;
    }
    // 0x8022F264: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022F268: bne         $v0, $zero, L_8022F27C
    if (ctx->r2 != 0) {
        // 0x8022F26C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F27C;
    }
    // 0x8022F26C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F270: j           L_8022F27C
    // 0x8022F274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022F27C;
    // 0x8022F274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022F278:
    // 0x8022F278: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022F27C:
    // 0x8022F27C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022F280: beq         $v0, $zero, L_8022F2AC
    if (ctx->r2 == 0) {
        // 0x8022F284: nop
    
            goto L_8022F2AC;
    }
    // 0x8022F284: nop

L_8022F288:
    // 0x8022F288: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022F28C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F290: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022F294: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F298: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022F29C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F2A0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022F2A4: j           L_8022F2BC
    // 0x8022F2A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022F2BC;
    // 0x8022F2A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F2AC:
    // 0x8022F2AC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F2B0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022F2B4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F2B8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022F2BC:
    // 0x8022F2BC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F2C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F2C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F2C8: jr          $ra
    // 0x8022F2CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F2CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022ACE4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ACE4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022ACE8: bne         $v0, $zero, L_8022AD04
    if (ctx->r2 != 0) {
        // 0x8022ACEC: nop
    
            goto L_8022AD04;
    }
    // 0x8022ACEC: nop

    // 0x8022ACF0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022ACF4: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8022ACF8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022ACFC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022AD00: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_8022AD04:
    // 0x8022AD04: jr          $ra
    // 0x8022AD08: nop

    TRACE_RETURN()
    return;
    // 0x8022AD08: nop

;}
RECOMP_FUNC void func_80226198_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226198: jr          $ra
    // 0x8022619C: nop

    TRACE_RETURN()
    return;
    // 0x8022619C: nop

;}
RECOMP_FUNC void func_8024C2A4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C2A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024C2A8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024C2AC: jal         0x8004F5C4
    // 0x8024C2B0: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8024C2B0: nop

    after_0:
    // 0x8024C2B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024C2B8: jr          $ra
    // 0x8024C2BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024C2BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229BAC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229BAC: lw          $a1, 0x10($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X10);
    // 0x80229BB0: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80229BB4: beq         $a1, $zero, L_80229BCC
    if (ctx->r5 == 0) {
        // 0x80229BB8: addiu       $v0, $zero, 0x96
        ctx->r2 = ADD32(0, 0X96);
            goto L_80229BCC;
    }
    // 0x80229BB8: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80229BBC: beq         $a1, $v0, L_80229BD4
    if (ctx->r5 == ctx->r2) {
        // 0x80229BC0: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_80229BD4;
    }
    // 0x80229BC0: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80229BC4: j           L_80229BE8
    // 0x80229BC8: nop

        goto L_80229BE8;
    // 0x80229BC8: nop

L_80229BCC:
    // 0x80229BCC: j           L_80229BE8
    // 0x80229BD0: sb          $zero, 0x6($a0)
    MEM_B(0X6, ctx->r4) = 0;
        goto L_80229BE8;
    // 0x80229BD0: sb          $zero, 0x6($a0)
    MEM_B(0X6, ctx->r4) = 0;
L_80229BD4:
    // 0x80229BD4: sh          $v0, 0x44($v1)
    MEM_H(0X44, ctx->r3) = ctx->r2;
    // 0x80229BD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229BDC: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80229BE0: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80229BE4: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_80229BE8:
    // 0x80229BE8: jr          $ra
    // 0x80229BEC: nop

    TRACE_RETURN()
    return;
    // 0x80229BEC: nop

;}
RECOMP_FUNC void func_8023B464_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B468: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B46C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B474: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B478: bne         $v0, $zero, L_8023B4BC
    if (ctx->r2 != 0) {
        // 0x8023B47C: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8023B4BC;
    }
    // 0x8023B47C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B480: sb          $zero, 0x8($a1)
    MEM_B(0X8, ctx->r5) = 0;
    // 0x8023B484: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B488: lw          $v0, 0x45D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X45D8);
    // 0x8023B48C: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
    // 0x8023B490: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x8023B494: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8023B498: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B49C: lw          $v0, 0x4658($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4658);
    // 0x8023B4A0: sb          $zero, 0xB($a1)
    MEM_B(0XB, ctx->r5) = 0;
    // 0x8023B4A4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x8023B4A8: jal         0x80050294
    // 0x8023B4AC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023B4AC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x8023B4B0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B4B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B4B8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023B4BC:
    // 0x8023B4BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B4C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B4C4: jr          $ra
    // 0x8023B4C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B4C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A9D8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A9D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A9DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A9E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A9E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A9E8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023A9EC: beq         $v0, $zero, L_8023AA28
    if (ctx->r2 == 0) {
        // 0x8023A9F0: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_8023AA28;
    }
    // 0x8023A9F0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8023A9F4: jal         0x80050294
    // 0x8023A9F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023A9F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023A9FC: jal         0x800A3450
    // 0x8023AA00: sw          $zero, 0x510($s0)
    MEM_W(0X510, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8023AA00: sw          $zero, 0x510($s0)
    MEM_W(0X510, ctx->r16) = 0;
    after_1:
    // 0x8023AA04: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023AA08: bne         $v0, $zero, L_8023AA14
    if (ctx->r2 != 0) {
        // 0x8023AA0C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8023AA14;
    }
    // 0x8023AA0C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023AA10: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
L_8023AA14:
    // 0x8023AA14: sh          $v0, 0x51A($s0)
    MEM_H(0X51A, ctx->r16) = ctx->r2;
    // 0x8023AA18: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023AA1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AA20: j           L_8023AA44
    // 0x8023AA24: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023AA44;
    // 0x8023AA24: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023AA28:
    // 0x8023AA28: jal         0x8005044C
    // 0x8023AA2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x8023AA2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023AA30: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8023AA34: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8023AA38: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8023AA3C: jal         0x8004DA90
    // 0x8023AA40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8023AA40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8023AA44:
    // 0x8023AA44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023AA48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023AA4C: jr          $ra
    // 0x8023AA50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AA50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F2D0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F2D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F2D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F2D8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022F2DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F2E0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022F2E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F2E8: lw          $v0, 0x37D0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X37D0);
    // 0x8022F2EC: jalr        $v0
    // 0x8022F2F0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F2F0: nop

    after_0:
    // 0x8022F2F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F2F8: jr          $ra
    // 0x8022F2FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F2FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024C9C4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C9C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024C9C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024C9CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024C9D0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024C9D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024C9D8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8024C9DC: beq         $v1, $zero, L_8024C9F4
    if (ctx->r3 == 0) {
        // 0x8024C9E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024C9F4;
    }
    // 0x8024C9E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024C9E4: beq         $v1, $v0, L_8024CD3C
    if (ctx->r3 == ctx->r2) {
        // 0x8024C9E8: nop
    
            goto L_8024CD3C;
    }
    // 0x8024C9E8: nop

    // 0x8024C9EC: j           L_8024CD44
    // 0x8024C9F0: nop

        goto L_8024CD44;
    // 0x8024C9F0: nop

L_8024C9F4:
    // 0x8024C9F4: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x8024C9F8: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x8024C9FC: lhu         $v0, 0x1E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E);
    // 0x8024CA00: lw          $a2, 0x28($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X28);
    // 0x8024CA04: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x8024CA08: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x8024CA0C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8024CA10: srl         $v1, $a1, 4
    ctx->r3 = S32(U32(ctx->r5) >> 4);
    // 0x8024CA14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024CA18: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x8024CA1C: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x8024CA20: lhu         $v1, 0x26($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X26);
    // 0x8024CA24: lh          $a0, 0x1E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X1E);
    // 0x8024CA28: sw          $a1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r5;
    // 0x8024CA2C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8024CA30: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
    // 0x8024CA34: slti        $a0, $a0, 0x111
    ctx->r4 = SIGNED(ctx->r4) < 0X111 ? 1 : 0;
    // 0x8024CA38: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8024CA3C: beq         $a0, $zero, L_8024CA54
    if (ctx->r4 == 0) {
        // 0x8024CA40: sh          $v1, 0x26($s0)
        MEM_H(0X26, ctx->r16) = ctx->r3;
            goto L_8024CA54;
    }
    // 0x8024CA40: sh          $v1, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r3;
    // 0x8024CA44: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
    // 0x8024CA48: slti        $v0, $v0, 0x161
    ctx->r2 = SIGNED(ctx->r2) < 0X161 ? 1 : 0;
    // 0x8024CA4C: bne         $v0, $zero, L_8024CA64
    if (ctx->r2 != 0) {
        // 0x8024CA50: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8024CA64;
    }
    // 0x8024CA50: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8024CA54:
    // 0x8024CA54: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8024CA58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024CA5C: j           L_8024CD44
    // 0x8024CA60: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8024CD44;
    // 0x8024CA60: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8024CA64:
    // 0x8024CA64: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8024CA68: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8024CA6C: sb          $v0, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r2;
    // 0x8024CA70: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8024CA74: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x8024CA78: jal         0x80032498
    // 0x8024CA7C: lhu         $a0, 0x26($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X26);
    func_80032498_D898(rdram, ctx);
        goto after_0;
    // 0x8024CA7C: lhu         $a0, 0x26($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X26);
    after_0:
    // 0x8024CA80: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8024CA84: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024CA88: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024CA8C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024CA90: lbu         $v1, 0x5902($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5902);
    // 0x8024CA94: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024CA98: mflo        $v0
    ctx->r2 = lo;
    // 0x8024CA9C: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x8024CAA0: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8024CAA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CAA8: sh          $v1, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r3;
    // 0x8024CAAC: jal         0x800324B4
    // 0x8024CAB0: lhu         $a0, 0x26($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X26);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8024CAB0: lhu         $a0, 0x26($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X26);
    after_1:
    // 0x8024CAB4: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8024CAB8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024CABC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024CAC0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024CAC4: lbu         $v1, 0x5903($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5903);
    // 0x8024CAC8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024CACC: mflo        $v0
    ctx->r2 = lo;
    // 0x8024CAD0: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x8024CAD4: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8024CAD8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CADC: sh          $v1, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r3;
    // 0x8024CAE0: lhu         $a0, 0x26($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X26);
    // 0x8024CAE4: jal         0x80032498
    // 0x8024CAE8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x8024CAE8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_2:
    // 0x8024CAEC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8024CAF0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024CAF4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024CAF8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024CAFC: lbu         $v1, 0x5902($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5902);
    // 0x8024CB00: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024CB04: mflo        $v0
    ctx->r2 = lo;
    // 0x8024CB08: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x8024CB0C: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8024CB10: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CB14: sh          $v1, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r3;
    // 0x8024CB18: lhu         $a0, 0x26($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X26);
    // 0x8024CB1C: jal         0x800324B4
    // 0x8024CB20: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x8024CB20: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_3:
    // 0x8024CB24: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8024CB28: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024CB2C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024CB30: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024CB34: lbu         $v1, 0x5903($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5903);
    // 0x8024CB38: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024CB3C: mflo        $v0
    ctx->r2 = lo;
    // 0x8024CB40: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x8024CB44: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8024CB48: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CB4C: sh          $v1, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r3;
    // 0x8024CB50: lhu         $a0, 0x26($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X26);
    // 0x8024CB54: jal         0x80032498
    // 0x8024CB58: addiu       $a0, $a0, 0xC00
    ctx->r4 = ADD32(ctx->r4, 0XC00);
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x8024CB58: addiu       $a0, $a0, 0xC00
    ctx->r4 = ADD32(ctx->r4, 0XC00);
    after_4:
    // 0x8024CB5C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8024CB60: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024CB64: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024CB68: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024CB6C: lbu         $v1, 0x5902($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5902);
    // 0x8024CB70: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024CB74: mflo        $v0
    ctx->r2 = lo;
    // 0x8024CB78: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x8024CB7C: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8024CB80: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CB84: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    // 0x8024CB88: lhu         $a0, 0x26($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X26);
    // 0x8024CB8C: jal         0x800324B4
    // 0x8024CB90: addiu       $a0, $a0, 0xC00
    ctx->r4 = ADD32(ctx->r4, 0XC00);
    func_800324B4_D8B4(rdram, ctx);
        goto after_5;
    // 0x8024CB90: addiu       $a0, $a0, 0xC00
    ctx->r4 = ADD32(ctx->r4, 0XC00);
    after_5:
    // 0x8024CB94: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8024CB98: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024CB9C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024CBA0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024CBA4: lbu         $v1, 0x5903($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5903);
    // 0x8024CBA8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024CBAC: mflo        $v0
    ctx->r2 = lo;
    // 0x8024CBB0: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x8024CBB4: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8024CBB8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CBBC: sh          $v1, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r3;
    // 0x8024CBC0: lhu         $a0, 0x26($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X26);
    // 0x8024CBC4: jal         0x80032498
    // 0x8024CBC8: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_6;
    // 0x8024CBC8: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_6:
    // 0x8024CBCC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8024CBD0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024CBD4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024CBD8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024CBDC: lbu         $v1, 0x5902($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5902);
    // 0x8024CBE0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024CBE4: mflo        $v0
    ctx->r2 = lo;
    // 0x8024CBE8: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x8024CBEC: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8024CBF0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CBF4: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    // 0x8024CBF8: lhu         $a0, 0x26($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X26);
    // 0x8024CBFC: jal         0x800324B4
    // 0x8024CC00: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_7;
    // 0x8024CC00: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_7:
    // 0x8024CC04: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8024CC08: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024CC0C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024CC10: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024CC14: lbu         $v1, 0x5903($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5903);
    // 0x8024CC18: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024CC1C: mflo        $v0
    ctx->r2 = lo;
    // 0x8024CC20: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x8024CC24: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8024CC28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CC2C: sh          $v1, 0x22($s1)
    MEM_H(0X22, ctx->r17) = ctx->r3;
    // 0x8024CC30: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8024CC34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024CC38: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024CC3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024CC40: lbu         $v0, 0x5900($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5900);
    // 0x8024CC44: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x8024CC48: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8024CC4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024CC50: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024CC54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024CC58: lbu         $v0, 0x5901($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5901);
    // 0x8024CC5C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8024CC60: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8024CC64: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8024CC68: lbu         $a0, 0xD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XD);
    // 0x8024CC6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024CC70: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8024CC74: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8024CC78: lbu         $a1, 0x5902($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X5902);
    // 0x8024CC7C: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8024CC80: sb          $a0, 0x15($s1)
    MEM_B(0X15, ctx->r17) = ctx->r4;
    // 0x8024CC84: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8024CC88: sb          $v0, 0x1C($s1)
    MEM_B(0X1C, ctx->r17) = ctx->r2;
    // 0x8024CC8C: sb          $v1, 0x14($s1)
    MEM_B(0X14, ctx->r17) = ctx->r3;
    // 0x8024CC90: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8024CC94: lbu         $v1, 0xD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XD);
    // 0x8024CC98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024CC9C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024CCA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024CCA4: lbu         $v0, 0x5903($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5903);
    // 0x8024CCA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CCAC: sb          $v1, 0x1D($s1)
    MEM_B(0X1D, ctx->r17) = ctx->r3;
    // 0x8024CCB0: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8024CCB4: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8024CCB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024CCBC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024CCC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024CCC4: lbu         $v0, 0x5902($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X5902);
    // 0x8024CCC8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CCCC: sb          $v1, 0x24($s1)
    MEM_B(0X24, ctx->r17) = ctx->r3;
    // 0x8024CCD0: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8024CCD4: lbu         $v1, 0xD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XD);
    // 0x8024CCD8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024CCDC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024CCE0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024CCE4: lbu         $a0, 0x5903($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X5903);
    // 0x8024CCE8: addiu       $v0, $zero, 0x3E40
    ctx->r2 = ADD32(0, 0X3E40);
    // 0x8024CCEC: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
    // 0x8024CCF0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8024CCF4: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8024CCF8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8024CCFC: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x8024CD00: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8024CD04: sb          $v1, 0x25($s1)
    MEM_B(0X25, ctx->r17) = ctx->r3;
    // 0x8024CD08: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x8024CD0C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x8024CD10: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8024CD14: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8024CD18: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8024CD1C: jal         0x8002FD30
    // 0x8024CD20: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_8;
    // 0x8024CD20: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_8:
    // 0x8024CD24: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8024CD28: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8024CD2C: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x8024CD30: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8024CD34: j           L_8024CD44
    // 0x8024CD38: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
        goto L_8024CD44;
    // 0x8024CD38: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
L_8024CD3C:
    // 0x8024CD3C: jal         0x8004F5C4
    // 0x8024CD40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_9;
    // 0x8024CD40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_8024CD44:
    // 0x8024CD44: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024CD48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024CD4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024CD50: jr          $ra
    // 0x8024CD54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024CD54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023EBAC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023EBAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023EBB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023EBB4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023EBB8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023EBBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023EBC0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023EBC4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8023EBC8: beq         $v1, $zero, L_8023EBE4
    if (ctx->r3 == 0) {
        // 0x8023EBCC: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_8023EBE4;
    }
    // 0x8023EBCC: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023EBD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023EBD4: beq         $v1, $v0, L_8023EC98
    if (ctx->r3 == ctx->r2) {
        // 0x8023EBD8: nop
    
            goto L_8023EC98;
    }
    // 0x8023EBD8: nop

    // 0x8023EBDC: j           L_8023ED78
    // 0x8023EBE0: nop

        goto L_8023ED78;
    // 0x8023EBE0: nop

L_8023EBE4:
    // 0x8023EBE4: lhu         $a0, 0x440($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X440);
    // 0x8023EBE8: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8023EBEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023EBF0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023EBF4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8023EBF8: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x8023EBFC: lw          $a1, 0x3C60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3C60);
    // 0x8023EC00: addiu       $v0, $zero, -0x60
    ctx->r2 = ADD32(0, -0X60);
    // 0x8023EC04: sh          $v0, 0x490($s0)
    MEM_H(0X490, ctx->r16) = ctx->r2;
    // 0x8023EC08: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x8023EC0C: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x8023EC10: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023EC14: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8023EC18: sh          $a0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r4;
    // 0x8023EC1C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8023EC20: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8023EC24: sb          $zero, 0x493($s0)
    MEM_B(0X493, ctx->r16) = 0;
    // 0x8023EC28: sb          $zero, 0x492($s0)
    MEM_B(0X492, ctx->r16) = 0;
    // 0x8023EC2C: jal         0x8004EFE4
    // 0x8023EC30: sh          $v0, 0x448($s0)
    MEM_H(0X448, ctx->r16) = ctx->r2;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8023EC30: sh          $v0, 0x448($s0)
    MEM_H(0X448, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023EC34: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023EC38: beq         $v1, $zero, L_8023EC90
    if (ctx->r3 == 0) {
        // 0x8023EC3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023EC90;
    }
    // 0x8023EC3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023EC40: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023EC44: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
    // 0x8023EC48: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023EC4C: addiu       $v0, $zero, 0xFD
    ctx->r2 = ADD32(0, 0XFD);
    // 0x8023EC50: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8023EC54: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8023EC58: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x8023EC5C: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x8023EC60: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8023EC64: addiu       $v0, $zero, 0x700
    ctx->r2 = ADD32(0, 0X700);
    // 0x8023EC68: sh          $v0, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r2;
    // 0x8023EC6C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023EC70: sh          $v0, 0x2E($v1)
    MEM_H(0X2E, ctx->r3) = ctx->r2;
    // 0x8023EC74: sh          $v0, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r2;
    // 0x8023EC78: addiu       $v0, $zero, 0x500
    ctx->r2 = ADD32(0, 0X500);
    // 0x8023EC7C: sh          $v0, 0x32($v1)
    MEM_H(0X32, ctx->r3) = ctx->r2;
    // 0x8023EC80: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023EC84: sh          $zero, 0x2C($v1)
    MEM_H(0X2C, ctx->r3) = 0;
    // 0x8023EC88: sb          $v0, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r2;
    // 0x8023EC8C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_8023EC90:
    // 0x8023EC90: jal         0x80036B58
    // 0x8023EC94: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x8023EC94: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
L_8023EC98:
    // 0x8023EC98: jal         0x8003E934
    // 0x8023EC9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8023EC9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023ECA0: lhu         $a2, 0x50($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X50);
    // 0x8023ECA4: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8023ECA8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023ECAC: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8023ECB0: sh          $a2, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r6;
    // 0x8023ECB4: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8023ECB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023ECBC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023ECC0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023ECC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023ECC8: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x8023ECCC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023ECD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023ECD4: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8023ECD8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023ECDC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023ECE0: jal         0x8004DA90
    // 0x8023ECE4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8023ECE4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_3:
    // 0x8023ECE8: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x8023ECEC: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x8023ECF0: bne         $v1, $v0, L_8023ED68
    if (ctx->r3 != ctx->r2) {
        // 0x8023ECF4: nop
    
            goto L_8023ED68;
    }
    // 0x8023ECF4: nop

    // 0x8023ECF8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023ECFC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023ED00: beq         $v0, $zero, L_8023ED10
    if (ctx->r2 == 0) {
        // 0x8023ED04: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023ED10;
    }
    // 0x8023ED04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023ED08: lw          $v1, 0x68($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X68);
    // 0x8023ED0C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8023ED10:
    // 0x8023ED10: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023ED14: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x8023ED18: beq         $v0, $zero, L_8023ED28
    if (ctx->r2 == 0) {
        // 0x8023ED1C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023ED28;
    }
    // 0x8023ED1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023ED20: lw          $v1, 0x6C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X6C);
    // 0x8023ED24: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8023ED28:
    // 0x8023ED28: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023ED2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023ED30: andi        $v0, $v0, 0xFE7F
    ctx->r2 = ctx->r2 & 0XFE7F;
    // 0x8023ED34: jal         0x8004F488
    // 0x8023ED38: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    func_8004F488_2A888(rdram, ctx);
        goto after_4;
    // 0x8023ED38: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    after_4:
    // 0x8023ED3C: lw          $a0, 0x58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X58);
    // 0x8023ED40: jal         0x8004F4F8
    // 0x8023ED44: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_5;
    // 0x8023ED44: nop

    after_5:
    // 0x8023ED48: jal         0x8004F4F8
    // 0x8023ED4C: lw          $a0, 0x5C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X5C);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_6;
    // 0x8023ED4C: lw          $a0, 0x5C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X5C);
    after_6:
    // 0x8023ED50: jal         0x8004F4F8
    // 0x8023ED54: lw          $a0, 0x60($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X60);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_7;
    // 0x8023ED54: lw          $a0, 0x60($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X60);
    after_7:
    // 0x8023ED58: jal         0x8004F4F8
    // 0x8023ED5C: lw          $a0, 0x64($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X64);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_8;
    // 0x8023ED5C: lw          $a0, 0x64($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X64);
    after_8:
    // 0x8023ED60: jal         0x8006036C
    // 0x8023ED64: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x8023ED64: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    after_9:
L_8023ED68:
    // 0x8023ED68: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023ED6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023ED70: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8023ED74: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023ED78:
    // 0x8023ED78: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023ED7C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023ED80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023ED84: jr          $ra
    // 0x8023ED88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023ED88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80244840_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244840: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80244844: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80244848: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024484C: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x80244850: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80244854: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80244858: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8024485C: bne         $v1, $v0, L_80244890
    if (ctx->r3 != ctx->r2) {
        // 0x80244860: addiu       $v0, $zero, 0xFE
        ctx->r2 = ADD32(0, 0XFE);
            goto L_80244890;
    }
    // 0x80244860: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x80244864: lui         $a0, 0x280
    ctx->r4 = S32(0X280 << 16);
    // 0x80244868: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8024486C: ori         $a0, $a0, 0x8080
    ctx->r4 = ctx->r4 | 0X8080;
    // 0x80244870: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80244874: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80244878: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8024487C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80244880: sw          $a0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r4;
    // 0x80244884: ori         $v1, $v1, 0x26
    ctx->r3 = ctx->r3 | 0X26;
    // 0x80244888: j           L_802449D0
    // 0x8024488C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
        goto L_802449D0;
    // 0x8024488C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_80244890:
    // 0x80244890: bne         $v1, $v0, L_802448B0
    if (ctx->r3 != ctx->r2) {
        // 0x80244894: addiu       $v0, $zero, 0xFD
        ctx->r2 = ADD32(0, 0XFD);
            goto L_802448B0;
    }
    // 0x80244894: addiu       $v0, $zero, 0xFD
    ctx->r2 = ADD32(0, 0XFD);
    // 0x80244898: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8024489C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802448A0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802448A4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x802448A8: j           L_802449D0
    // 0x802448AC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
        goto L_802449D0;
    // 0x802448AC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
L_802448B0:
    // 0x802448B0: bne         $v1, $v0, L_802448C4
    if (ctx->r3 != ctx->r2) {
        // 0x802448B4: addiu       $v0, $zero, 0xFC
        ctx->r2 = ADD32(0, 0XFC);
            goto L_802448C4;
    }
    // 0x802448B4: addiu       $v0, $zero, 0xFC
    ctx->r2 = ADD32(0, 0XFC);
    // 0x802448B8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802448BC: j           L_802449D0
    // 0x802448C0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_802449D0;
    // 0x802448C0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_802448C4:
    // 0x802448C4: bne         $v1, $v0, L_802448E0
    if (ctx->r3 != ctx->r2) {
        // 0x802448C8: addiu       $a0, $s1, 0xD0
        ctx->r4 = ADD32(ctx->r17, 0XD0);
            goto L_802448E0;
    }
    // 0x802448C8: addiu       $a0, $s1, 0xD0
    ctx->r4 = ADD32(ctx->r17, 0XD0);
    // 0x802448CC: jal         0x80054A90
    // 0x802448D0: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    func_80054A90_2FE90(rdram, ctx);
        goto after_0;
    // 0x802448D0: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    after_0:
    // 0x802448D4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802448D8: j           L_802449D0
    // 0x802448DC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_802449D0;
    // 0x802448DC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_802448E0:
    // 0x802448E0: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802448E4: addiu       $a1, $s1, 0x44
    ctx->r5 = ADD32(ctx->r17, 0X44);
    // 0x802448E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802448EC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802448F0: addiu       $v0, $v0, 0x4C20
    ctx->r2 = ADD32(ctx->r2, 0X4C20);
    // 0x802448F4: sw          $zero, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = 0;
    // 0x802448F8: sw          $zero, 0xC4($s1)
    MEM_W(0XC4, ctx->r17) = 0;
    // 0x802448FC: sw          $zero, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = 0;
    // 0x80244900: sw          $zero, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = 0;
    // 0x80244904: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    // 0x80244908: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x8024490C: jal         0x8009A3B4
    // 0x80244910: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80244910: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    after_1:
    // 0x80244914: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80244918: jal         0x8004D5D4
    // 0x8024491C: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x8024491C: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    after_2:
    // 0x80244920: lw          $a1, 0xD8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XD8);
    // 0x80244924: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80244928: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024492C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80244930: jal         0x8009A3B4
    // 0x80244934: addiu       $a1, $a1, 0x1F8
    ctx->r5 = ADD32(ctx->r5, 0X1F8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80244934: addiu       $a1, $a1, 0x1F8
    ctx->r5 = ADD32(ctx->r5, 0X1F8);
    after_3:
    // 0x80244938: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8024493C: lhu         $t0, 0x14($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X14);
    // 0x80244940: lhu         $t1, 0x16($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X16);
    // 0x80244944: lhu         $t2, 0x18($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X18);
    // 0x80244948: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8024494C: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80244950: lh          $a3, 0x18($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X18);
    // 0x80244954: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80244958: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8024495C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80244960: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80244964: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80244968: sh          $t0, 0xAC($s1)
    MEM_H(0XAC, ctx->r17) = ctx->r8;
    // 0x8024496C: sh          $t1, 0xAE($s1)
    MEM_H(0XAE, ctx->r17) = ctx->r9;
    // 0x80244970: sh          $t2, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r10;
    // 0x80244974: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80244978: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8024497C: jal         0x8009A3B4
    // 0x80244980: sw          $a3, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80244980: sw          $a3, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r7;
    after_4:
    // 0x80244984: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80244988: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8024498C: jal         0x8009A3B4
    // 0x80244990: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80244990: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80244994: lui         $a1, 0x280
    ctx->r5 = S32(0X280 << 16);
    // 0x80244998: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8024499C: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x802449A0: ori         $a1, $a1, 0x8080
    ctx->r5 = ctx->r5 | 0X8080;
    // 0x802449A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802449A8: sw          $a1, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r5;
    // 0x802449AC: sh          $zero, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = 0;
    // 0x802449B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802449B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802449B8: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x802449BC: jal         0x8024511C
    // 0x802449C0: sb          $v1, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r3;
    func_8024511C_ovl28(rdram, ctx);
        goto after_6;
    // 0x802449C0: sb          $v1, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r3;
    after_6:
    // 0x802449C4: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    // 0x802449C8: jal         0x8002A33C
    // 0x802449CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x802449CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
L_802449D0:
    // 0x802449D0: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x802449D4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x802449D8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802449DC: jr          $ra
    // 0x802449E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x802449E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80247700_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247700: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80247704: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80247708: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8024770C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80247710: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80247714: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80247718: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x8024771C: beq         $v1, $zero, L_80247734
    if (ctx->r3 == 0) {
        // 0x80247720: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80247734;
    }
    // 0x80247720: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80247724: beq         $v1, $v0, L_80247764
    if (ctx->r3 == ctx->r2) {
        // 0x80247728: nop
    
            goto L_80247764;
    }
    // 0x80247728: nop

    // 0x8024772C: j           L_802478B4
    // 0x80247730: nop

        goto L_802478B4;
    // 0x80247730: nop

L_80247734:
    // 0x80247734: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80247738: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8024773C: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
    // 0x80247740: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80247744: jal         0x8004D5D4
    // 0x80247748: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80247748: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    after_0:
    // 0x8024774C: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x80247750: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80247754: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80247758: sw          $v1, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r3;
    // 0x8024775C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247760: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_80247764:
    // 0x80247764: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x80247768: bne         $v1, $zero, L_802477EC
    if (ctx->r3 != 0) {
        // 0x8024776C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802477EC;
    }
    // 0x8024776C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80247770: lbu         $a0, 0xC($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XC);
    // 0x80247774: jal         0x80053ED8
    // 0x80247778: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_1;
    // 0x80247778: nop

    after_1:
    // 0x8024777C: addiu       $a0, $s2, 0x18
    ctx->r4 = ADD32(ctx->r18, 0X18);
    // 0x80247780: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80247784: addiu       $s0, $s1, 0x1E8
    ctx->r16 = ADD32(ctx->r17, 0X1E8);
    // 0x80247788: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8024778C: jal         0x8009A3B4
    // 0x80247790: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80247790: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
    // 0x80247794: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247798: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x8024779C: lw          $v0, 0x4C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4C);
    // 0x802477A0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802477A4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x802477A8: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    // 0x802477AC: addiu       $v0, $v0, 0x5DC
    ctx->r2 = ADD32(ctx->r2, 0X5DC);
    // 0x802477B0: jal         0x80031270
    // 0x802477B4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    func_80031270_C670(rdram, ctx);
        goto after_3;
    // 0x802477B4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    after_3:
    // 0x802477B8: lhu         $v0, 0x28($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X28);
    // 0x802477BC: lhu         $v1, 0x180($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X180);
    // 0x802477C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802477C4: sh          $v0, 0x38($s2)
    MEM_H(0X38, ctx->r18) = ctx->r2;
    // 0x802477C8: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x802477CC: lhu         $v1, 0x182($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X182);
    // 0x802477D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802477D4: sh          $v0, 0x3A($s2)
    MEM_H(0X3A, ctx->r18) = ctx->r2;
    // 0x802477D8: lhu         $v0, 0x2C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2C);
    // 0x802477DC: lhu         $v1, 0x184($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X184);
    // 0x802477E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802477E4: j           L_802478B4
    // 0x802477E8: sh          $v0, 0x3C($s2)
    MEM_H(0X3C, ctx->r18) = ctx->r2;
        goto L_802478B4;
    // 0x802477E8: sh          $v0, 0x3C($s2)
    MEM_H(0X3C, ctx->r18) = ctx->r2;
L_802477EC:
    // 0x802477EC: beq         $v1, $v0, L_802477FC
    if (ctx->r3 == ctx->r2) {
        // 0x802477F0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802477FC;
    }
    // 0x802477F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802477F4: bne         $v1, $v0, L_80247878
    if (ctx->r3 != ctx->r2) {
        // 0x802477F8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80247878;
    }
    // 0x802477F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802477FC:
    // 0x802477FC: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x80247800: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80247804: addiu       $s0, $s2, 0x18
    ctx->r16 = ADD32(ctx->r18, 0X18);
    // 0x80247808: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8024780C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80247810: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x80247814: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
    // 0x80247818: jal         0x80031600
    // 0x8024781C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x8024781C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_4:
    // 0x80247820: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247824: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80247828: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8024782C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80247830: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80247834: jal         0x80031DA8
    // 0x80247838: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x80247838: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x8024783C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247840: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x80247844: lw          $v0, 0x4C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4C);
    // 0x80247848: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8024784C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x80247850: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    // 0x80247854: jal         0x80031270
    // 0x80247858: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    func_80031270_C670(rdram, ctx);
        goto after_6;
    // 0x80247858: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    after_6:
    // 0x8024785C: lhu         $v0, 0x28($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X28);
    // 0x80247860: sh          $v0, 0x38($s2)
    MEM_H(0X38, ctx->r18) = ctx->r2;
    // 0x80247864: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x80247868: sh          $v0, 0x3A($s2)
    MEM_H(0X3A, ctx->r18) = ctx->r2;
    // 0x8024786C: lhu         $v0, 0x2C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2C);
    // 0x80247870: j           L_802478B4
    // 0x80247874: sh          $v0, 0x3C($s2)
    MEM_H(0X3C, ctx->r18) = ctx->r2;
        goto L_802478B4;
    // 0x80247874: sh          $v0, 0x3C($s2)
    MEM_H(0X3C, ctx->r18) = ctx->r2;
L_80247878:
    // 0x80247878: bne         $v1, $v0, L_802478B4
    if (ctx->r3 != ctx->r2) {
        // 0x8024787C: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_802478B4;
    }
    // 0x8024787C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80247880: addiu       $s0, $s2, 0x18
    ctx->r16 = ADD32(ctx->r18, 0X18);
    // 0x80247884: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80247888: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x8024788C: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
    // 0x80247890: jal         0x80031600
    // 0x80247894: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_7;
    // 0x80247894: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    after_7:
    // 0x80247898: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024789C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802478A0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802478A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802478A8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802478AC: jal         0x80031DA8
    // 0x802478B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_8;
    // 0x802478B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_8:
L_802478B4:
    // 0x802478B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802478B8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802478BC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802478C0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802478C4: jr          $ra
    // 0x802478C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802478C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802478CC: nop

;}
RECOMP_FUNC void func_80227774_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227774: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227778: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022777C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227780: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227784: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227788: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8022778C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80227790: beq         $v1, $s1, L_802277FC
    if (ctx->r3 == ctx->r17) {
        // 0x80227794: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802277FC;
    }
    // 0x80227794: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227798: beql        $v0, $zero, L_802277B0
    if (ctx->r2 == 0) {
        // 0x8022779C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802277B0;
    }
    goto skip_0;
    // 0x8022779C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802277A0: beq         $v1, $zero, L_802277C0
    if (ctx->r3 == 0) {
        // 0x802277A4: nop
    
            goto L_802277C0;
    }
    // 0x802277A4: nop

    // 0x802277A8: j           L_80227864
    // 0x802277AC: nop

        goto L_80227864;
    // 0x802277AC: nop

L_802277B0:
    // 0x802277B0: beq         $v1, $v0, L_80227814
    if (ctx->r3 == ctx->r2) {
        // 0x802277B4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80227814;
    }
    // 0x802277B4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802277B8: j           L_80227864
    // 0x802277BC: nop

        goto L_80227864;
    // 0x802277BC: nop

L_802277C0:
    // 0x802277C0: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802277C4: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802277C8: jalr        $v0
    // 0x802277CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802277CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802277D0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802277D4: lw          $v0, 0x63A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63A0);
    // 0x802277D8: andi        $v0, $v0, 0x81
    ctx->r2 = ctx->r2 & 0X81;
    // 0x802277DC: bne         $v0, $s1, L_8022785C
    if (ctx->r2 != ctx->r17) {
        // 0x802277E0: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_8022785C;
    }
    // 0x802277E0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802277E4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802277E8: lw          $v0, 0x63A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63A0);
    // 0x802277EC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802277F0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802277F4: j           L_80227844
    // 0x802277F8: sw          $v0, 0x63A0($at)
    MEM_W(0X63A0, ctx->r1) = ctx->r2;
        goto L_80227844;
    // 0x802277F8: sw          $v0, 0x63A0($at)
    MEM_W(0X63A0, ctx->r1) = ctx->r2;
L_802277FC:
    // 0x802277FC: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80227800: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80227804: jalr        $v0
    // 0x80227808: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80227808: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022780C: j           L_8022785C
    // 0x80227810: nop

        goto L_8022785C;
    // 0x80227810: nop

L_80227814:
    // 0x80227814: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80227818: beq         $v1, $v0, L_8022784C
    if (ctx->r3 == ctx->r2) {
        // 0x8022781C: nop
    
            goto L_8022784C;
    }
    // 0x8022781C: nop

    // 0x80227820: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80227824: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80227828: jalr        $v0
    // 0x8022782C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022782C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227830: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227834: lw          $v0, 0x63A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63A0);
    // 0x80227838: andi        $v0, $v0, 0x81
    ctx->r2 = ctx->r2 & 0X81;
    // 0x8022783C: bne         $v0, $s1, L_8022785C
    if (ctx->r2 != ctx->r17) {
        // 0x80227840: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_8022785C;
    }
    // 0x80227840: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_80227844:
    // 0x80227844: jal         0x80036E48
    // 0x80227848: nop

    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x80227848: nop

    after_3:
L_8022784C:
    // 0x8022784C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80227850: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80227854: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227858: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022785C:
    // 0x8022785C: jal         0x8005FB90
    // 0x80227860: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_4;
    // 0x80227860: nop

    after_4:
L_80227864:
    // 0x80227864: jal         0x8006072C
    // 0x80227868: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_5;
    // 0x80227868: nop

    after_5:
    // 0x8022786C: beq         $v0, $zero, L_80227888
    if (ctx->r2 == 0) {
        // 0x80227870: nop
    
            goto L_80227888;
    }
    // 0x80227870: nop

    // 0x80227874: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227878: lw          $v0, 0x63A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63A0);
    // 0x8022787C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80227880: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227884: sw          $v0, 0x63A0($at)
    MEM_W(0X63A0, ctx->r1) = ctx->r2;
L_80227888:
    // 0x80227888: jal         0x80060018
    // 0x8022788C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_6;
    // 0x8022788C: nop

    after_6:
    // 0x80227890: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227894: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227898: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022789C: jr          $ra
    // 0x802278A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802278A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E9F4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E9F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E9F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E9FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EA00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EA04: jal         0x8022FEF8
    // 0x8022EA08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022FEF8_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022EA08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8022EA0C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EA10: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022EA14: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022EA18: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022EA1C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022EA20: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022EA24: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022EA28: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022EA2C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022EA30: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x8022EA34: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x8022EA38: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x8022EA3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EA40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EA44: jr          $ra
    // 0x8022EA48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EA48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C538_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C538: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023C53C: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8023C540: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x8023C544: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x8023C548: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x8023C54C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023C550: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8023C554: lw          $v0, 0x4814($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4814);
    // 0x8023C558: jr          $ra
    // 0x8023C55C: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8023C55C: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_802408B8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802408B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802408BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802408C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802408C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802408C8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802408CC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802408D0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802408D4: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x802408D8: beq         $v0, $zero, L_802408F8
    if (ctx->r2 == 0) {
        // 0x802408DC: addiu       $s2, $s0, 0x440
        ctx->r18 = ADD32(ctx->r16, 0X440);
            goto L_802408F8;
    }
    // 0x802408DC: addiu       $s2, $s0, 0x440
    ctx->r18 = ADD32(ctx->r16, 0X440);
    // 0x802408E0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802408E4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802408E8: addu        $at, $at, $v0
    gpr jr_addend_802408F0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802408EC: lw          $v0, 0x6118($at)
    ctx->r2 = ADD32(ctx->r1, 0X6118);
    // 0x802408F0: jr          $v0
    // 0x802408F4: nop

    switch (jr_addend_802408F0 >> 2) {
        case 0: goto L_802408F8; break;
        case 1: goto L_80240914; break;
        case 2: goto L_8024096C; break;
        case 3: goto L_802409F8; break;
        case 4: goto L_80240AB8; break;
        case 5: goto L_80240AE0; break;
        case 6: goto L_80240B00; break;
        case 7: goto L_80240B00; break;
        case 8: goto L_80240B00; break;
        default: switch_error(__func__, 0x802408F0, 0x80256118);
    }
    // 0x802408F4: nop

L_802408F8:
    // 0x802408F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802408FC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80240900: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80240904: jal         0x8009A3B4
    // 0x80240908: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80240908: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8024090C: j           L_80240AD0
    // 0x80240910: nop

        goto L_80240AD0;
    // 0x80240910: nop

L_80240914:
    // 0x80240914: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80240918: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024091C: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80240920: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80240924: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80240928: jal         0x8004F820
    // 0x8024092C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8024092C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x80240930: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80240934: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80240938: beq         $v1, $zero, L_80240950
    if (ctx->r3 == 0) {
        // 0x8024093C: addiu       $a0, $zero, 0x1F1
        ctx->r4 = ADD32(0, 0X1F1);
            goto L_80240950;
    }
    // 0x8024093C: addiu       $a0, $zero, 0x1F1
    ctx->r4 = ADD32(0, 0X1F1);
    // 0x80240940: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80240944: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80240948: j           L_80240B00
    // 0x8024094C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80240B00;
    // 0x8024094C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80240950:
    // 0x80240950: jal         0x8002A33C
    // 0x80240954: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80240954: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80240958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024095C: sh          $v0, 0x98($s2)
    MEM_H(0X98, ctx->r18) = ctx->r2;
    // 0x80240960: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80240964: j           L_80240ACC
    // 0x80240968: sb          $v0, 0x9A($s2)
    MEM_B(0X9A, ctx->r18) = ctx->r2;
        goto L_80240ACC;
    // 0x80240968: sb          $v0, 0x9A($s2)
    MEM_B(0X9A, ctx->r18) = ctx->r2;
L_8024096C:
    // 0x8024096C: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80240970: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80240974: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80240978: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8024097C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80240980: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80240984: jal         0x8004F820
    // 0x80240988: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80240988: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_3:
    // 0x8024098C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80240990: lbu         $a0, 0xA4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA4);
    // 0x80240994: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80240998: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8024099C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802409A0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802409A4: lbu         $v0, 0x49F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X49F8);
    // 0x802409A8: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x802409AC: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x802409B0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802409B4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802409B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802409BC: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x802409C0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802409C4: bgez        $a0, L_80240B00
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802409C8: sw          $v1, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r3;
            goto L_80240B00;
    }
    // 0x802409C8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802409CC: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    // 0x802409D0: jal         0x8002A33C
    // 0x802409D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x802409D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x802409D8: addiu       $a0, $zero, 0x1F2
    ctx->r4 = ADD32(0, 0X1F2);
    // 0x802409DC: jal         0x8002A33C
    // 0x802409E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x802409E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x802409E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802409E8: sh          $v0, 0x98($s2)
    MEM_H(0X98, ctx->r18) = ctx->r2;
    // 0x802409EC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802409F0: j           L_80240ACC
    // 0x802409F4: sb          $v0, 0x9A($s2)
    MEM_B(0X9A, ctx->r18) = ctx->r2;
        goto L_80240ACC;
    // 0x802409F4: sb          $v0, 0x9A($s2)
    MEM_B(0X9A, ctx->r18) = ctx->r2;
L_802409F8:
    // 0x802409F8: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x802409FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80240A00: bne         $v1, $v0, L_80240A10
    if (ctx->r3 != ctx->r2) {
        // 0x80240A04: addiu       $a0, $zero, 0x1F3
        ctx->r4 = ADD32(0, 0X1F3);
            goto L_80240A10;
    }
    // 0x80240A04: addiu       $a0, $zero, 0x1F3
    ctx->r4 = ADD32(0, 0X1F3);
    // 0x80240A08: jal         0x8002A33C
    // 0x80240A0C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80240A0C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
L_80240A10:
    // 0x80240A10: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80240A14: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x80240A18: sltiu       $v0, $v0, 0x9
    ctx->r2 = ctx->r2 < 0X9 ? 1 : 0;
    // 0x80240A1C: beq         $v0, $zero, L_80240A9C
    if (ctx->r2 == 0) {
        // 0x80240A20: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_80240A9C;
    }
    // 0x80240A20: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80240A24: bne         $v0, $zero, L_80240A9C
    if (ctx->r2 != 0) {
        // 0x80240A28: nop
    
            goto L_80240A9C;
    }
    // 0x80240A28: nop

    // 0x80240A2C: jal         0x8004EFE4
    // 0x80240A30: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_7;
    // 0x80240A30: nop

    after_7:
    // 0x80240A34: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80240A38: beq         $s1, $zero, L_80240A9C
    if (ctx->r17 == 0) {
        // 0x80240A3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80240A9C;
    }
    // 0x80240A3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240A40: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80240A44: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80240A48: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80240A4C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80240A50: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80240A54: lh          $v0, 0x1D8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1D8);
    // 0x80240A58: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80240A5C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80240A60: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80240A64: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80240A68: lh          $v0, 0x1DC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1DC);
    // 0x80240A6C: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80240A70: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80240A74: addiu       $a1, $s1, 0x44
    ctx->r5 = ADD32(ctx->r17, 0X44);
    // 0x80240A78: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80240A7C: jal         0x80032308
    // 0x80240A80: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80032308_D708(rdram, ctx);
        goto after_8;
    // 0x80240A80: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_8:
    // 0x80240A84: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80240A88: addiu       $a1, $s0, 0x1D8
    ctx->r5 = ADD32(ctx->r16, 0X1D8);
    // 0x80240A8C: jal         0x8009A3B4
    // 0x80240A90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80240A90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80240A94: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x80240A98: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_80240A9C:
    // 0x80240A9C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80240AA0: bgez        $v0, L_80240B00
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80240AA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80240B00;
    }
    // 0x80240AA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240AA8: sh          $v0, 0x98($s2)
    MEM_H(0X98, ctx->r18) = ctx->r2;
    // 0x80240AAC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80240AB0: j           L_80240ACC
    // 0x80240AB4: sb          $v0, 0x9A($s2)
    MEM_B(0X9A, ctx->r18) = ctx->r2;
        goto L_80240ACC;
    // 0x80240AB4: sb          $v0, 0x9A($s2)
    MEM_B(0X9A, ctx->r18) = ctx->r2;
L_80240AB8:
    // 0x80240AB8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80240ABC: bgez        $v0, L_80240B00
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80240AC0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80240B00;
    }
    // 0x80240AC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240AC4: sh          $v0, 0x98($s2)
    MEM_H(0X98, ctx->r18) = ctx->r2;
    // 0x80240AC8: sb          $zero, 0x9A($s2)
    MEM_B(0X9A, ctx->r18) = 0;
L_80240ACC:
    // 0x80240ACC: sb          $zero, 0x9B($s2)
    MEM_B(0X9B, ctx->r18) = 0;
L_80240AD0:
    // 0x80240AD0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80240AD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240AD8: j           L_80240B00
    // 0x80240ADC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80240B00;
    // 0x80240ADC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80240AE0:
    // 0x80240AE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240AE4: jal         0x80241E88
    // 0x80240AE8: addiu       $a1, $zero, -0x5
    ctx->r5 = ADD32(0, -0X5);
    func_80241E88_ovl28(rdram, ctx);
        goto after_10;
    // 0x80240AE8: addiu       $a1, $zero, -0x5
    ctx->r5 = ADD32(0, -0X5);
    after_10:
    // 0x80240AEC: beq         $v0, $zero, L_80240B00
    if (ctx->r2 == 0) {
        // 0x80240AF0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80240B00;
    }
    // 0x80240AF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240AF4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80240AF8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80240AFC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80240B00:
    // 0x80240B00: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80240B04: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80240B08: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80240B0C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80240B10: jr          $ra
    // 0x80240B14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80240B14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022FA7C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA7C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022FA80: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8022FA84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FA88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FA8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FA90: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FA94: bne         $v1, $v0, L_8022FABC
    if (ctx->r3 != ctx->r2) {
        // 0x8022FA98: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022FABC;
    }
    // 0x8022FA98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FA9C: jal         0x80061724
    // 0x8022FAA0: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x8022FAA0: nop

    after_0:
    // 0x8022FAA4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022FAA8: jal         0x800616FC
    // 0x8022FAAC: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022FAAC: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_1:
    // 0x8022FAB0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022FAB4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FAB8: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022FABC:
    // 0x8022FABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FAC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FAC4: jr          $ra
    // 0x8022FAC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FAC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024A710_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A710: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024A714: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8024A718: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024A71C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8024A720: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8024A724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024A728: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8024A72C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8024A730: sb          $v0, 0x40($s0)
    MEM_B(0X40, ctx->r16) = ctx->r2;
    // 0x8024A734: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x8024A738: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x8024A73C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8024A740: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024A744: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024A748: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8024A74C: sh          $zero, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = 0;
    // 0x8024A750: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8024A754: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8024A758: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8024A75C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8024A760: jal         0x800A3450
    // 0x8024A764: sh          $v1, 0x42($s0)
    MEM_H(0X42, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8024A764: sh          $v1, 0x42($s0)
    MEM_H(0X42, ctx->r16) = ctx->r3;
    after_0:
    // 0x8024A768: lui         $v1, 0x3D08
    ctx->r3 = S32(0X3D08 << 16);
    // 0x8024A76C: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x8024A770: lhu         $a2, 0x1E($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X1E);
    // 0x8024A774: lhu         $a3, 0x20($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X20);
    // 0x8024A778: lbu         $a1, 0x40($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X40);
    // 0x8024A77C: ori         $v1, $v1, 0x2E
    ctx->r3 = ctx->r3 | 0X2E;
    // 0x8024A780: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024A784: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x8024A788: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8024A78C: sb          $v0, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r2;
    // 0x8024A790: sh          $a0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r4;
    // 0x8024A794: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x8024A798: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x8024A79C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8024A7A0: lbu         $v1, 0x41($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X41);
    // 0x8024A7A4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8024A7A8: lbu         $v0, 0x41($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X41);
    // 0x8024A7AC: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x8024A7B0: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x8024A7B4: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x8024A7B8: sw          $a0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r4;
    // 0x8024A7BC: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x8024A7C0: lui         $a1, 0x6800
    ctx->r5 = S32(0X6800 << 16);
    // 0x8024A7C4: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8024A7C8: sh          $a2, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r6;
    // 0x8024A7CC: sh          $a3, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r7;
    // 0x8024A7D0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8024A7D4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A7D8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8024A7DC: lbu         $v1, 0x5220($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X5220);
    // 0x8024A7E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8024A7E4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024A7E8: sb          $v1, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r3;
    // 0x8024A7EC: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024A7F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024A7F4: lbu         $v1, 0x5221($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5221);
    // 0x8024A7F8: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8024A7FC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8024A800: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x8024A804: addiu       $v0, $s0, 0x30
    ctx->r2 = ADD32(ctx->r16, 0X30);
    // 0x8024A808: sb          $v1, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r3;
    // 0x8024A80C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8024A810: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8024A814: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8024A818: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8024A81C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x8024A820: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8024A824: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8024A828: jal         0x80051E18
    // 0x8024A82C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x8024A82C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x8024A830: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8024A834: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8024A838: jr          $ra
    // 0x8024A83C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8024A83C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022AAB0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AAB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AAB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AAB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AABC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022AAC0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AAC4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022AAC8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022AACC: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022AAD0: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022AAD4: beq         $v1, $v0, L_8022AC0C
    if (ctx->r3 == ctx->r2) {
        // 0x8022AAD8: slti        $v0, $v1, 0x2E
        ctx->r2 = SIGNED(ctx->r3) < 0X2E ? 1 : 0;
            goto L_8022AC0C;
    }
    // 0x8022AAD8: slti        $v0, $v1, 0x2E
    ctx->r2 = SIGNED(ctx->r3) < 0X2E ? 1 : 0;
    // 0x8022AADC: beq         $v0, $zero, L_8022AAF4
    if (ctx->r2 == 0) {
        // 0x8022AAE0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AAF4;
    }
    // 0x8022AAE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AAE4: beq         $v1, $v0, L_8022AB10
    if (ctx->r3 == ctx->r2) {
        // 0x8022AAE8: addiu       $a0, $zero, 0x1A
        ctx->r4 = ADD32(0, 0X1A);
            goto L_8022AB10;
    }
    // 0x8022AAE8: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x8022AAEC: j           L_8022AC34
    // 0x8022AAF0: nop

        goto L_8022AC34;
    // 0x8022AAF0: nop

L_8022AAF4:
    // 0x8022AAF4: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x8022AAF8: beq         $v1, $v0, L_8022AC1C
    if (ctx->r3 == ctx->r2) {
        // 0x8022AAFC: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_8022AC1C;
    }
    // 0x8022AAFC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022AB00: beq         $v1, $v0, L_8022AC2C
    if (ctx->r3 == ctx->r2) {
        // 0x8022AB04: nop
    
            goto L_8022AC2C;
    }
    // 0x8022AB04: nop

    // 0x8022AB08: j           L_8022AC34
    // 0x8022AB0C: nop

        goto L_8022AC34;
    // 0x8022AB0C: nop

L_8022AB10:
    // 0x8022AB10: jal         0x80036340
    // 0x8022AB14: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80036340_11740(rdram, ctx);
        goto after_0;
    // 0x8022AB14: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8022AB18: jal         0x8021D9D0
    // 0x8022AB1C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_8021D9D0(rdram, ctx);
        goto after_1;
    // 0x8022AB1C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_1:
    // 0x8022AB20: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AB24: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x8022AB28: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022AB2C: jal         0x8004F684
    // 0x8022AB30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x8022AB30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022AB34: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022AB38: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022AB3C: lbu         $a1, 0x4A6D($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4A6D);
    // 0x8022AB40: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AB44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AB48: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022AB4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AB50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AB54: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022AB58: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022AB5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AB60: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x8022AB64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022AB68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AB6C: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022AB70: addiu       $v0, $zero, 0x640
    ctx->r2 = ADD32(0, 0X640);
    // 0x8022AB74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AB78: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8022AB7C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022AB80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AB84: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8022AB88: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8022AB8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AB90: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8022AB94: lui         $v0, 0x640
    ctx->r2 = S32(0X640 << 16);
    // 0x8022AB98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AB9C: sb          $zero, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = 0;
    // 0x8022ABA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABA4: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8022ABA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABAC: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8022ABB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABB4: sh          $zero, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = 0;
    // 0x8022ABB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABBC: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8022ABC0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022ABC4: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022ABC8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x8022ABCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABD0: sb          $a1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r5;
    // 0x8022ABD4: jal         0x8022B750
    // 0x8022ABD8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8022B750_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022ABD8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_3:
    // 0x8022ABDC: jal         0x8022B784
    // 0x8022ABE0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8022B784_ovl28(rdram, ctx);
        goto after_4;
    // 0x8022ABE0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_4:
    // 0x8022ABE4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022ABE8: addiu       $a0, $a0, 0x2074
    ctx->r4 = ADD32(ctx->r4, 0X2074);
    // 0x8022ABEC: addiu       $v0, $zero, 0x87
    ctx->r2 = ADD32(0, 0X87);
    // 0x8022ABF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABF4: jal         0x8005FA7C
    // 0x8022ABF8: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x8022ABF8: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    after_5:
    // 0x8022ABFC: jal         0x8022B6D0
    // 0x8022AC00: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_8022B6D0_ovl28(rdram, ctx);
        goto after_6;
    // 0x8022AC00: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_6:
    // 0x8022AC04: j           L_8022AC34
    // 0x8022AC08: nop

        goto L_8022AC34;
    // 0x8022AC08: nop

L_8022AC0C:
    // 0x8022AC0C: jal         0x8022B784
    // 0x8022AC10: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_8022B784_ovl28(rdram, ctx);
        goto after_7;
    // 0x8022AC10: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_7:
    // 0x8022AC14: j           L_8022AC34
    // 0x8022AC18: nop

        goto L_8022AC34;
    // 0x8022AC18: nop

L_8022AC1C:
    // 0x8022AC1C: jal         0x8022B784
    // 0x8022AC20: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8022B784_ovl28(rdram, ctx);
        goto after_8;
    // 0x8022AC20: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_8:
    // 0x8022AC24: j           L_8022AC34
    // 0x8022AC28: nop

        goto L_8022AC34;
    // 0x8022AC28: nop

L_8022AC2C:
    // 0x8022AC2C: jal         0x8022B750
    // 0x8022AC30: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8022B750_ovl28(rdram, ctx);
        goto after_9;
    // 0x8022AC30: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_9:
L_8022AC34:
    // 0x8022AC34: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AC38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AC3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AC40: jr          $ra
    // 0x8022AC44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AC44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023AA9C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AA9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AAA0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023AAA4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023AAA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023AAAC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023AAB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023AAB4: lw          $v0, 0x45B4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X45B4);
    // 0x8023AAB8: jalr        $v0
    // 0x8023AABC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023AABC: nop

    after_0:
    // 0x8023AAC0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023AAC4: jr          $ra
    // 0x8023AAC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AAC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228BDC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228BDC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80228BE0: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80228BE4: lw          $a3, 0x24($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X24);
    // 0x80228BE8: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80228BEC: beq         $v1, $v0, L_80228CF8
    if (ctx->r3 == ctx->r2) {
        // 0x80228BF0: slti        $v0, $v1, 0x51
        ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
            goto L_80228CF8;
    }
    // 0x80228BF0: slti        $v0, $v1, 0x51
    ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
    // 0x80228BF4: beql        $v0, $zero, L_80228C0C
    if (ctx->r2 == 0) {
        // 0x80228BF8: addiu       $v0, $zero, 0x6E
        ctx->r2 = ADD32(0, 0X6E);
            goto L_80228C0C;
    }
    goto skip_0;
    // 0x80228BF8: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    skip_0:
    // 0x80228BFC: beql        $v1, $zero, L_80228C1C
    if (ctx->r3 == 0) {
        // 0x80228C00: sb          $zero, 0x6($a1)
        MEM_B(0X6, ctx->r5) = 0;
            goto L_80228C1C;
    }
    goto skip_1;
    // 0x80228C00: sb          $zero, 0x6($a1)
    MEM_B(0X6, ctx->r5) = 0;
    skip_1:
    // 0x80228C04: j           L_80228CFC
    // 0x80228C08: nop

        goto L_80228CFC;
    // 0x80228C08: nop

L_80228C0C:
    // 0x80228C0C: beq         $v1, $v0, L_80228CF4
    if (ctx->r3 == ctx->r2) {
        // 0x80228C10: addiu       $v0, $zero, -0x18
        ctx->r2 = ADD32(0, -0X18);
            goto L_80228CF4;
    }
    // 0x80228C10: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x80228C14: j           L_80228CFC
    // 0x80228C18: nop

        goto L_80228CFC;
    // 0x80228C18: nop

L_80228C1C:
    // 0x80228C1C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80228C20: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80228C24: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80228C28: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228C2C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C30: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80228C34: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80228C38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C3C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80228C40: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80228C44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C48: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80228C4C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228C50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C54: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80228C58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C5C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80228C60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C64: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80228C68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C6C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80228C70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C74: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80228C78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C7C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80228C80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228C84: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80228C88: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80228C8C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80228C90: lw          $v1, 0x28($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X28);
    // 0x80228C94: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80228C98: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228C9C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80228CA0: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x80228CA4: sh          $zero, 0x14($a3)
    MEM_H(0X14, ctx->r7) = 0;
    // 0x80228CA8: lh          $a0, 0x14($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X14);
    // 0x80228CAC: addiu       $v0, $zero, -0x12C
    ctx->r2 = ADD32(0, -0X12C);
    // 0x80228CB0: sh          $v0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r2;
    // 0x80228CB4: lh          $a1, 0x16($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X16);
    // 0x80228CB8: addiu       $v0, $zero, -0x96
    ctx->r2 = ADD32(0, -0X96);
    // 0x80228CBC: sh          $v0, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r2;
    // 0x80228CC0: lh          $a2, 0x18($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X18);
    // 0x80228CC4: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x80228CC8: sh          $zero, 0x44($a3)
    MEM_H(0X44, ctx->r7) = 0;
    // 0x80228CCC: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
    // 0x80228CD0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80228CD4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80228CD8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80228CDC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80228CE0: sb          $v1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r3;
    // 0x80228CE4: sw          $a0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r4;
    // 0x80228CE8: sw          $a1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r5;
    // 0x80228CEC: j           L_80228CFC
    // 0x80228CF0: sw          $a2, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r6;
        goto L_80228CFC;
    // 0x80228CF0: sw          $a2, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r6;
L_80228CF4:
    // 0x80228CF4: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
L_80228CF8:
    // 0x80228CF8: sh          $zero, 0x46($a3)
    MEM_H(0X46, ctx->r7) = 0;
L_80228CFC:
    // 0x80228CFC: jr          $ra
    // 0x80228D00: nop

    TRACE_RETURN()
    return;
    // 0x80228D00: nop

;}
RECOMP_FUNC void func_80229A34_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A34: jr          $ra
    // 0x80229A38: nop

    TRACE_RETURN()
    return;
    // 0x80229A38: nop

;}
RECOMP_FUNC void func_80229950_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229954: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229958: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022995C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229960: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80229964: bne         $v1, $zero, L_802299E0
    if (ctx->r3 != 0) {
        // 0x80229968: slti        $v0, $v1, 0x40
        ctx->r2 = SIGNED(ctx->r3) < 0X40 ? 1 : 0;
            goto L_802299E0;
    }
    // 0x80229968: slti        $v0, $v1, 0x40
    ctx->r2 = SIGNED(ctx->r3) < 0X40 ? 1 : 0;
    // 0x8022996C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80229970: addiu       $a0, $a0, 0x19B4
    ctx->r4 = ADD32(ctx->r4, 0X19B4);
    // 0x80229974: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229978: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022997C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80229980: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80229984: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229988: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022998C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229990: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229994: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80229998: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022999C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802299A0: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802299A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802299A8: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802299AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802299B0: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802299B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802299B8: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802299BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802299C0: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802299C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802299C8: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802299CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802299D0: jal         0x8005FA7C
    // 0x802299D4: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x802299D4: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    after_0:
    // 0x802299D8: j           L_80229A24
    // 0x802299DC: nop

        goto L_80229A24;
    // 0x802299DC: nop

L_802299E0:
    // 0x802299E0: beq         $v0, $zero, L_80229A0C
    if (ctx->r2 == 0) {
        // 0x802299E4: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80229A0C;
    }
    // 0x802299E4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802299E8: lw          $v1, 0x9C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9C);
    // 0x802299EC: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x802299F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802299F4: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x802299F8: lw          $v1, 0x98($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X98);
    // 0x802299FC: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x80229A00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229A04: j           L_80229A24
    // 0x80229A08: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
        goto L_80229A24;
    // 0x80229A08: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_80229A0C:
    // 0x80229A0C: bne         $v1, $v0, L_80229A24
    if (ctx->r3 != ctx->r2) {
        // 0x80229A10: nop
    
            goto L_80229A24;
    }
    // 0x80229A10: nop

    // 0x80229A14: jal         0x8004F5C4
    // 0x80229A18: lw          $a0, 0x9C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X9C);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80229A18: lw          $a0, 0x9C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X9C);
    after_1:
    // 0x80229A1C: jal         0x8004F5C4
    // 0x80229A20: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x80229A20: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    after_2:
L_80229A24:
    // 0x80229A24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229A28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229A2C: jr          $ra
    // 0x80229A30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229A30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80249934_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249938: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024993C: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80249940: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80249944: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249948: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024994C: lw          $v0, 0x51C4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X51C4);
    // 0x80249950: jalr        $v0
    // 0x80249954: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80249954: nop

    after_0:
    // 0x80249958: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024995C: jr          $ra
    // 0x80249960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80249960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C690_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C690: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023C694: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C698: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023C69C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023C6A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023C6A4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023C6A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023C6AC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023C6B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C6B4: lw          $v0, 0x4850($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4850);
    // 0x8023C6B8: jalr        $v0
    // 0x8023C6BC: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023C6BC: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    after_0:
    // 0x8023C6C0: lh          $v0, 0x4BA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4BA);
    // 0x8023C6C4: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8023C6C8: beql        $v0, $zero, L_8023C728
    if (ctx->r2 == 0) {
        // 0x8023C6CC: sw          $zero, 0x18($s1)
        MEM_W(0X18, ctx->r17) = 0;
            goto L_8023C728;
    }
    goto skip_0;
    // 0x8023C6CC: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    skip_0:
    // 0x8023C6D0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023C6D4: lh          $v0, 0x4A1E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A1E);
    // 0x8023C6D8: bgtz        $v0, L_8023C718
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023C6DC: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_8023C718;
    }
    // 0x8023C6DC: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8023C6E0: lw          $v0, 0x440($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X440);
    // 0x8023C6E4: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x8023C6E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023C6EC: bne         $v0, $zero, L_8023C70C
    if (ctx->r2 != 0) {
        // 0x8023C6F0: addiu       $a0, $zero, 0x1E9
        ctx->r4 = ADD32(0, 0X1E9);
            goto L_8023C70C;
    }
    // 0x8023C6F0: addiu       $a0, $zero, 0x1E9
    ctx->r4 = ADD32(0, 0X1E9);
    // 0x8023C6F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023C6F8: sh          $v0, 0x4BA($s0)
    MEM_H(0X4BA, ctx->r16) = ctx->r2;
    // 0x8023C6FC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023C700: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023C704: jal         0x8002A33C
    // 0x8023C708: sh          $v0, 0x4B8($s0)
    MEM_H(0X4B8, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023C708: sh          $v0, 0x4B8($s0)
    MEM_H(0X4B8, ctx->r16) = ctx->r2;
    after_1:
L_8023C70C:
    // 0x8023C70C: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023C710: j           L_8023C720
    // 0x8023C714: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
        goto L_8023C720;
    // 0x8023C714: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
L_8023C718:
    // 0x8023C718: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023C71C: andi        $v0, $v0, 0xFDFF
    ctx->r2 = ctx->r2 & 0XFDFF;
L_8023C720:
    // 0x8023C720: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
    // 0x8023C724: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
L_8023C728:
    // 0x8023C728: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023C72C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023C730: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C734: jr          $ra
    // 0x8023C738: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023C738: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226B78_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B78: jr          $ra
    // 0x80226B7C: nop

    TRACE_RETURN()
    return;
    // 0x80226B7C: nop

;}
RECOMP_FUNC void func_8024AF78_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024AF78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024AF7C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024AF80: jal         0x8004F5C4
    // 0x8024AF84: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8024AF84: nop

    after_0:
    // 0x8024AF88: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024AF8C: jr          $ra
    // 0x8024AF90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024AF90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A720_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A720: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A724: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A728: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A72C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A730: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022A734: bne         $v0, $zero, L_8022A780
    if (ctx->r2 != 0) {
        // 0x8022A738: nop
    
            goto L_8022A780;
    }
    // 0x8022A738: nop

    // 0x8022A73C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8022A740:
    // 0x8022A740: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x8022A744: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x8022A748: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022A74C: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    // 0x8022A750: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8022A754: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022A758: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A75C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8022A760: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A764: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8022A768: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022A76C: bne         $v0, $zero, L_8022A740
    if (ctx->r2 != 0) {
        // 0x8022A770: sb          $v1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r3;
            goto L_8022A740;
    }
    // 0x8022A770: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8022A774: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022A778: sb          $zero, 0x63F0($at)
    MEM_B(0X63F0, ctx->r1) = 0;
    // 0x8022A77C: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
L_8022A780:
    // 0x8022A780: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022A784: bne         $v0, $zero, L_8022A7A8
    if (ctx->r2 != 0) {
        // 0x8022A788: nop
    
            goto L_8022A7A8;
    }
    // 0x8022A788: nop

    // 0x8022A78C: jal         0x8022B884
    // 0x8022A790: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8022B884_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022A790: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8022A794: beq         $v0, $zero, L_8022A7A8
    if (ctx->r2 == 0) {
        // 0x8022A798: nop
    
            goto L_8022A7A8;
    }
    // 0x8022A798: nop

    // 0x8022A79C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022A7A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A7A4: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_8022A7A8:
    // 0x8022A7A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A7AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A7B0: jr          $ra
    // 0x8022A7B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A7B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236918_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023691C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236920: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80236924: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80236928: beq         $v1, $a3, L_80236978
    if (ctx->r3 == ctx->r7) {
        // 0x8023692C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80236978;
    }
    // 0x8023692C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80236930: beql        $v0, $zero, L_80236948
    if (ctx->r2 == 0) {
        // 0x80236934: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236948;
    }
    goto skip_0;
    // 0x80236934: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80236938: beq         $v1, $zero, L_80236960
    if (ctx->r3 == 0) {
        // 0x8023693C: addiu       $v0, $zero, 0x3F
        ctx->r2 = ADD32(0, 0X3F);
            goto L_80236960;
    }
    // 0x8023693C: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x80236940: j           L_80236A4C
    // 0x80236944: nop

        goto L_80236A4C;
    // 0x80236944: nop

L_80236948:
    // 0x80236948: beq         $v1, $v0, L_80236998
    if (ctx->r3 == ctx->r2) {
        // 0x8023694C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80236998;
    }
    // 0x8023694C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236950: beq         $v1, $v0, L_80236A2C
    if (ctx->r3 == ctx->r2) {
        // 0x80236954: addiu       $v0, $zero, 0x22
        ctx->r2 = ADD32(0, 0X22);
            goto L_80236A2C;
    }
    // 0x80236954: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x80236958: j           L_80236A4C
    // 0x8023695C: nop

        goto L_80236A4C;
    // 0x8023695C: nop

L_80236960:
    // 0x80236960: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80236964: bne         $v1, $v0, L_80236A4C
    if (ctx->r3 != ctx->r2) {
        // 0x80236968: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80236A4C;
    }
    // 0x80236968: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023696C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80236970: j           L_80236A1C
    // 0x80236974: sh          $zero, 0x2($a2)
    MEM_H(0X2, ctx->r6) = 0;
        goto L_80236A1C;
    // 0x80236974: sh          $zero, 0x2($a2)
    MEM_H(0X2, ctx->r6) = 0;
L_80236978:
    // 0x80236978: lbu         $v1, 0xA4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA4);
    // 0x8023697C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80236980: bne         $v1, $v0, L_80236A4C
    if (ctx->r3 != ctx->r2) {
        // 0x80236984: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80236A4C;
    }
    // 0x80236984: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80236988: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8023698C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80236990: j           L_80236A1C
    // 0x80236994: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
        goto L_80236A1C;
    // 0x80236994: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
L_80236998:
    // 0x80236998: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023699C: sb          $v0, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r2;
    // 0x802369A0: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x802369A4: addiu       $v0, $zero, 0x7D
    ctx->r2 = ADD32(0, 0X7D);
    // 0x802369A8: beq         $a1, $v0, L_802369F4
    if (ctx->r5 == ctx->r2) {
        // 0x802369AC: slti        $v0, $a1, 0x7E
        ctx->r2 = SIGNED(ctx->r5) < 0X7E ? 1 : 0;
            goto L_802369F4;
    }
    // 0x802369AC: slti        $v0, $a1, 0x7E
    ctx->r2 = SIGNED(ctx->r5) < 0X7E ? 1 : 0;
    // 0x802369B0: beq         $v0, $zero, L_802369C8
    if (ctx->r2 == 0) {
        // 0x802369B4: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_802369C8;
    }
    // 0x802369B4: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x802369B8: beq         $a1, $v0, L_802369E4
    if (ctx->r5 == ctx->r2) {
        // 0x802369BC: addu        $a1, $a2, $zero
        ctx->r5 = ADD32(ctx->r6, 0);
            goto L_802369E4;
    }
    // 0x802369BC: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x802369C0: j           L_80236A4C
    // 0x802369C4: nop

        goto L_80236A4C;
    // 0x802369C4: nop

L_802369C8:
    // 0x802369C8: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x802369CC: beq         $a1, $v0, L_80236A08
    if (ctx->r5 == ctx->r2) {
        // 0x802369D0: addiu       $v0, $zero, 0xA4
        ctx->r2 = ADD32(0, 0XA4);
            goto L_80236A08;
    }
    // 0x802369D0: addiu       $v0, $zero, 0xA4
    ctx->r2 = ADD32(0, 0XA4);
    // 0x802369D4: beq         $a1, $v0, L_80236A1C
    if (ctx->r5 == ctx->r2) {
        // 0x802369D8: nop
    
            goto L_80236A1C;
    }
    // 0x802369D8: nop

    // 0x802369DC: j           L_80236A4C
    // 0x802369E0: nop

        goto L_80236A4C;
    // 0x802369E0: nop

L_802369E4:
    // 0x802369E4: jal         0x80236A60
    // 0x802369E8: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_80236A60_ovl28(rdram, ctx);
        goto after_0;
    // 0x802369E8: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_0:
    // 0x802369EC: j           L_80236A4C
    // 0x802369F0: nop

        goto L_80236A4C;
    // 0x802369F0: nop

L_802369F4:
    // 0x802369F4: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x802369F8: jal         0x80236A60
    // 0x802369FC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80236A60_ovl28(rdram, ctx);
        goto after_1;
    // 0x802369FC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x80236A00: j           L_80236A4C
    // 0x80236A04: nop

        goto L_80236A4C;
    // 0x80236A04: nop

L_80236A08:
    // 0x80236A08: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236A0C: jal         0x80236A60
    // 0x80236A10: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80236A60_ovl28(rdram, ctx);
        goto after_2;
    // 0x80236A10: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x80236A14: j           L_80236A4C
    // 0x80236A18: nop

        goto L_80236A4C;
    // 0x80236A18: nop

L_80236A1C:
    // 0x80236A1C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80236A20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236A24: j           L_80236A4C
    // 0x80236A28: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_80236A4C;
    // 0x80236A28: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80236A2C:
    // 0x80236A2C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80236A30: bne         $v1, $v0, L_80236A4C
    if (ctx->r3 != ctx->r2) {
        // 0x80236A34: nop
    
            goto L_80236A4C;
    }
    // 0x80236A34: nop

    // 0x80236A38: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80236A3C: bne         $v0, $a3, L_80236A4C
    if (ctx->r2 != ctx->r7) {
        // 0x80236A40: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80236A4C;
    }
    // 0x80236A40: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80236A44: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80236A48: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_80236A4C:
    // 0x80236A4C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236A50: jr          $ra
    // 0x80236A54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236A54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228114_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228118: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022811C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80228120: bne         $v0, $zero, L_80228198
    if (ctx->r2 != 0) {
        // 0x80228124: nop
    
            goto L_80228198;
    }
    // 0x80228124: nop

    // 0x80228128: jal         0x8004F684
    // 0x8022812C: lw          $a0, 0x28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28);
    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8022812C: lw          $a0, 0x28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28);
    after_0:
    // 0x80228130: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228134: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228138: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022813C: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80228140: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228144: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80228148: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022814C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228150: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80228154: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022815C: sb          $zero, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = 0;
    // 0x80228160: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228164: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80228168: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022816C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80228170: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228174: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80228178: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022817C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80228180: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228184: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80228188: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022818C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80228190: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228194: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
L_80228198:
    // 0x80228198: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022819C: jr          $ra
    // 0x802281A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802281A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236B88_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236B88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236B8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236B90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236B94: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236B98: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236B9C: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80236BA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236BA4: beq         $a0, $v0, L_80236C14
    if (ctx->r4 == ctx->r2) {
        // 0x80236BA8: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_80236C14;
    }
    // 0x80236BA8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80236BAC: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80236BB0: beql        $v0, $zero, L_80236BC8
    if (ctx->r2 == 0) {
        // 0x80236BB4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236BC8;
    }
    goto skip_0;
    // 0x80236BB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80236BB8: beq         $a0, $zero, L_80236BD8
    if (ctx->r4 == 0) {
        // 0x80236BBC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236BD8;
    }
    // 0x80236BBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236BC0: j           L_80236DD8
    // 0x80236BC4: nop

        goto L_80236DD8;
    // 0x80236BC4: nop

L_80236BC8:
    // 0x80236BC8: beq         $a0, $v0, L_80236D2C
    if (ctx->r4 == ctx->r2) {
        // 0x80236BCC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80236D2C;
    }
    // 0x80236BCC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80236BD0: j           L_80236DD8
    // 0x80236BD4: nop

        goto L_80236DD8;
    // 0x80236BD4: nop

L_80236BD8:
    // 0x80236BD8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236BDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236BE0: jal         0x80237D60
    // 0x80236BE4: sb          $zero, 0x12($s1)
    MEM_B(0X12, ctx->r17) = 0;
    func_80237D60_ovl28(rdram, ctx);
        goto after_0;
    // 0x80236BE4: sb          $zero, 0x12($s1)
    MEM_B(0X12, ctx->r17) = 0;
    after_0:
    // 0x80236BE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236BEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236BF0: jal         0x80237D88
    // 0x80236BF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80237D88_ovl28(rdram, ctx);
        goto after_1;
    // 0x80236BF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80236BF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236BFC: jal         0x80237EE0
    // 0x80236C00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80237EE0_ovl28(rdram, ctx);
        goto after_2;
    // 0x80236C00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80236C04: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80236C08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236C0C: j           L_80236DD8
    // 0x80236C10: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80236DD8;
    // 0x80236C10: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80236C14:
    // 0x80236C14: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80236C18: bne         $v1, $a0, L_80236C3C
    if (ctx->r3 != ctx->r4) {
        // 0x80236C1C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236C3C;
    }
    // 0x80236C1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236C20: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80236C24: beq         $a1, $v1, L_80236CE8
    if (ctx->r5 == ctx->r3) {
        // 0x80236C28: addiu       $v0, $zero, 0x23
        ctx->r2 = ADD32(0, 0X23);
            goto L_80236CE8;
    }
    // 0x80236C28: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x80236C2C: bne         $a1, $v0, L_80236D1C
    if (ctx->r5 != ctx->r2) {
        // 0x80236C30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236D1C;
    }
    // 0x80236C30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236C34: j           L_80236CD8
    // 0x80236C38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
        goto L_80236CD8;
    // 0x80236C38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_80236C3C:
    // 0x80236C3C: bne         $v1, $v0, L_80236D1C
    if (ctx->r3 != ctx->r2) {
        // 0x80236C40: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236D1C;
    }
    // 0x80236C40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236C44: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80236C48: addiu       $v0, $zero, 0x87
    ctx->r2 = ADD32(0, 0X87);
    // 0x80236C4C: beq         $a1, $v0, L_80236CD4
    if (ctx->r5 == ctx->r2) {
        // 0x80236C50: slti        $v0, $a1, 0x88
        ctx->r2 = SIGNED(ctx->r5) < 0X88 ? 1 : 0;
            goto L_80236CD4;
    }
    // 0x80236C50: slti        $v0, $a1, 0x88
    ctx->r2 = SIGNED(ctx->r5) < 0X88 ? 1 : 0;
    // 0x80236C54: beq         $v0, $zero, L_80236C90
    if (ctx->r2 == 0) {
        // 0x80236C58: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_80236C90;
    }
    // 0x80236C58: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80236C5C: beq         $a1, $v0, L_80236CD4
    if (ctx->r5 == ctx->r2) {
        // 0x80236C60: slti        $v0, $a1, 0x42
        ctx->r2 = SIGNED(ctx->r5) < 0X42 ? 1 : 0;
            goto L_80236CD4;
    }
    // 0x80236C60: slti        $v0, $a1, 0x42
    ctx->r2 = SIGNED(ctx->r5) < 0X42 ? 1 : 0;
    // 0x80236C64: beq         $v0, $zero, L_80236C7C
    if (ctx->r2 == 0) {
        // 0x80236C68: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80236C7C;
    }
    // 0x80236C68: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80236C6C: beq         $a1, $v0, L_80236CF0
    if (ctx->r5 == ctx->r2) {
        // 0x80236C70: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_80236CF0;
    }
    // 0x80236C70: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236C74: j           L_80236D18
    // 0x80236C78: nop

        goto L_80236D18;
    // 0x80236C78: nop

L_80236C7C:
    // 0x80236C7C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80236C80: beq         $a1, $v0, L_80236CEC
    if (ctx->r5 == ctx->r2) {
        // 0x80236C84: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236CEC;
    }
    // 0x80236C84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236C88: j           L_80236D18
    // 0x80236C8C: nop

        goto L_80236D18;
    // 0x80236C8C: nop

L_80236C90:
    // 0x80236C90: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x80236C94: beq         $a1, $v0, L_80236CD0
    if (ctx->r5 == ctx->r2) {
        // 0x80236C98: slti        $v0, $a1, 0xE7
        ctx->r2 = SIGNED(ctx->r5) < 0XE7 ? 1 : 0;
            goto L_80236CD0;
    }
    // 0x80236C98: slti        $v0, $a1, 0xE7
    ctx->r2 = SIGNED(ctx->r5) < 0XE7 ? 1 : 0;
    // 0x80236C9C: beq         $v0, $zero, L_80236CB4
    if (ctx->r2 == 0) {
        // 0x80236CA0: addiu       $v0, $zero, 0xD2
        ctx->r2 = ADD32(0, 0XD2);
            goto L_80236CB4;
    }
    // 0x80236CA0: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x80236CA4: beq         $a1, $v0, L_80236CEC
    if (ctx->r5 == ctx->r2) {
        // 0x80236CA8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236CEC;
    }
    // 0x80236CA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236CAC: j           L_80236D18
    // 0x80236CB0: nop

        goto L_80236D18;
    // 0x80236CB0: nop

L_80236CB4:
    // 0x80236CB4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80236CB8: beq         $a1, $v0, L_80236CE8
    if (ctx->r5 == ctx->r2) {
        // 0x80236CBC: addiu       $v0, $zero, 0x12C
        ctx->r2 = ADD32(0, 0X12C);
            goto L_80236CE8;
    }
    // 0x80236CBC: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x80236CC0: beq         $a1, $v0, L_80236D00
    if (ctx->r5 == ctx->r2) {
        // 0x80236CC4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236D00;
    }
    // 0x80236CC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236CC8: j           L_80236D18
    // 0x80236CCC: nop

        goto L_80236D18;
    // 0x80236CCC: nop

L_80236CD0:
    // 0x80236CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236CD4:
    // 0x80236CD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_80236CD8:
    // 0x80236CD8: jal         0x80237D88
    // 0x80236CDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80237D88_ovl28(rdram, ctx);
        goto after_3;
    // 0x80236CDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80236CE0: j           L_80236D1C
    // 0x80236CE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80236D1C;
    // 0x80236CE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236CE8:
    // 0x80236CE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236CEC:
    // 0x80236CEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_80236CF0:
    // 0x80236CF0: jal         0x80237D88
    // 0x80236CF4: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_80237D88_ovl28(rdram, ctx);
        goto after_4;
    // 0x80236CF4: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_4:
    // 0x80236CF8: j           L_80236D1C
    // 0x80236CFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80236D1C;
    // 0x80236CFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236D00:
    // 0x80236D00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236D04: jal         0x80237D88
    // 0x80236D08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80237D88_ovl28(rdram, ctx);
        goto after_5;
    // 0x80236D08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80236D0C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80236D10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236D14: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80236D18:
    // 0x80236D18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236D1C:
    // 0x80236D1C: jal         0x80237EE0
    // 0x80236D20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80237EE0_ovl28(rdram, ctx);
        goto after_6;
    // 0x80236D20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80236D24: j           L_80236DD8
    // 0x80236D28: nop

        goto L_80236DD8;
    // 0x80236D28: nop

L_80236D2C:
    // 0x80236D2C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80236D30: bne         $v1, $v0, L_80236DD8
    if (ctx->r3 != ctx->r2) {
        // 0x80236D34: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236DD8;
    }
    // 0x80236D34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236D38: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80236D3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236D40: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80236D44: jal         0x8004D5D4
    // 0x80236D48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_7;
    // 0x80236D48: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_7:
    // 0x80236D4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236D50: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236D54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80236D58: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80236D5C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80236D60: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80236D64: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80236D68: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80236D6C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80236D70: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80236D74: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80236D78: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80236D7C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80236D80: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80236D84: jal         0x80237D60
    // 0x80236D88: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80237D60_ovl28(rdram, ctx);
        goto after_8;
    // 0x80236D88: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_8:
    // 0x80236D8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236D90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80236D94: jal         0x80237D88
    // 0x80236D98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80237D88_ovl28(rdram, ctx);
        goto after_9;
    // 0x80236D98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x80236D9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236DA0: jal         0x80237DB0
    // 0x80236DA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80237DB0_ovl28(rdram, ctx);
        goto after_10;
    // 0x80236DA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_10:
    // 0x80236DA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236DAC: sb          $v0, 0x12($s1)
    MEM_B(0X12, ctx->r17) = ctx->r2;
    // 0x80236DB0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80236DB4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236DB8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80236DBC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80236DC0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80236DC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236DC8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236DCC: lh          $a2, 0x2($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X2);
    // 0x80236DD0: jal         0x80050294
    // 0x80236DD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_11;
    // 0x80236DD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
L_80236DD8:
    // 0x80236DD8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236DDC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236DE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236DE4: jr          $ra
    // 0x80236DE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236DE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023FE28_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023FE28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023FE2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023FE30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023FE34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023FE38: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023FE3C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023FE40: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023FE44: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8023FE48: beq         $v0, $zero, L_8023FE68
    if (ctx->r2 == 0) {
        // 0x8023FE4C: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_8023FE68;
    }
    // 0x8023FE4C: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023FE50: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023FE54: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023FE58: addu        $at, $at, $v0
    gpr jr_addend_8023FE60 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023FE5C: lw          $v0, 0x60B0($at)
    ctx->r2 = ADD32(ctx->r1, 0X60B0);
    // 0x8023FE60: jr          $v0
    // 0x8023FE64: nop

    switch (jr_addend_8023FE60 >> 2) {
        case 0: goto L_8023FE68; break;
        case 1: goto L_8023FE84; break;
        case 2: goto L_8023FEF0; break;
        case 3: goto L_8023FF64; break;
        case 4: goto L_8023FF98; break;
        case 5: goto L_80240080; break;
        case 6: goto L_8024009C; break;
        case 7: goto L_80240154; break;
        case 8: goto L_80240188; break;
        default: switch_error(__func__, 0x8023FE60, 0x802560B0);
    }
    // 0x8023FE64: nop

L_8023FE68:
    // 0x8023FE68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023FE6C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023FE70: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023FE74: jal         0x8009A3B4
    // 0x8023FE78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023FE78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8023FE7C: j           L_80240178
    // 0x8023FE80: nop

        goto L_80240178;
    // 0x8023FE80: nop

L_8023FE84:
    // 0x8023FE84: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8023FE88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023FE8C: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8023FE90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023FE94: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x8023FE98: jal         0x8004F820
    // 0x8023FE9C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8023FE9C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x8023FEA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023FEA4: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023FEA8: bne         $a0, $zero, L_80240144
    if (ctx->r4 != 0) {
        // 0x8023FEAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80240144;
    }
    // 0x8023FEAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FEB0: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x8023FEB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FEB8: sb          $v0, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = ctx->r2;
    // 0x8023FEBC: jal         0x800A3450
    // 0x8023FEC0: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8023FEC0: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
    after_2:
    // 0x8023FEC4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023FEC8: bne         $v0, $zero, L_8023FEE0
    if (ctx->r2 != 0) {
        // 0x8023FECC: addiu       $a0, $zero, 0x1EB
        ctx->r4 = ADD32(0, 0X1EB);
            goto L_8023FEE0;
    }
    // 0x8023FECC: addiu       $a0, $zero, 0x1EB
    ctx->r4 = ADD32(0, 0X1EB);
    // 0x8023FED0: addiu       $a0, $zero, 0x1FC
    ctx->r4 = ADD32(0, 0X1FC);
    // 0x8023FED4: jal         0x8002A33C
    // 0x8023FED8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8023FED8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8023FEDC: addiu       $a0, $zero, 0x1EB
    ctx->r4 = ADD32(0, 0X1EB);
L_8023FEE0:
    // 0x8023FEE0: jal         0x8002A33C
    // 0x8023FEE4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8023FEE4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
    // 0x8023FEE8: j           L_80240178
    // 0x8023FEEC: nop

        goto L_80240178;
    // 0x8023FEEC: nop

L_8023FEF0:
    // 0x8023FEF0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023FEF4: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8023FEF8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023FEFC: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023FF00: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x8023FF04: jal         0x8004F820
    // 0x8023FF08: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8023FF08: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_5:
    // 0x8023FF0C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023FF10: lbu         $a0, 0xA4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA4);
    // 0x8023FF14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023FF18: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023FF1C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023FF20: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023FF24: lbu         $v0, 0x49CC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X49CC);
    // 0x8023FF28: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8023FF2C: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8023FF30: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023FF34: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023FF38: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023FF3C: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8023FF40: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023FF44: bgez        $a0, L_80240198
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8023FF48: sw          $v1, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r3;
            goto L_80240198;
    }
    // 0x8023FF48: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8023FF4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FF50: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x8023FF54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023FF58: sb          $v0, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = ctx->r2;
    // 0x8023FF5C: j           L_80240178
    // 0x8023FF60: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
        goto L_80240178;
    // 0x8023FF60: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
L_8023FF64:
    // 0x8023FF64: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023FF68: bgez        $v0, L_80240198
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023FF6C: addiu       $a0, $zero, 0x1EC
        ctx->r4 = ADD32(0, 0X1EC);
            goto L_80240198;
    }
    // 0x8023FF6C: addiu       $a0, $zero, 0x1EC
    ctx->r4 = ADD32(0, 0X1EC);
    // 0x8023FF70: jal         0x8002A33C
    // 0x8023FF74: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8023FF74: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x8023FF78: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023FF7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023FF80: sh          $v1, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r3;
    // 0x8023FF84: sb          $v0, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = ctx->r2;
    // 0x8023FF88: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
    // 0x8023FF8C: sh          $v1, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r3;
    // 0x8023FF90: j           L_80240178
    // 0x8023FF94: sh          $zero, 0xC8($s1)
    MEM_H(0XC8, ctx->r17) = 0;
        goto L_80240178;
    // 0x8023FF94: sh          $zero, 0xC8($s1)
    MEM_H(0XC8, ctx->r17) = 0;
L_8023FF98:
    // 0x8023FF98: lhu         $v0, 0xC8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC8);
    // 0x8023FF9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023FFA0: sh          $v0, 0xC8($s1)
    MEM_H(0XC8, ctx->r17) = ctx->r2;
    // 0x8023FFA4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023FFA8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023FFAC: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x8023FFB0: beq         $v0, $zero, L_8023FFDC
    if (ctx->r2 == 0) {
        // 0x8023FFB4: addiu       $a3, $zero, 0x20
        ctx->r7 = ADD32(0, 0X20);
            goto L_8023FFDC;
    }
    // 0x8023FFB4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8023FFB8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023FFBC: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8023FFC0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023FFC4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023FFC8: jal         0x8004F820
    // 0x8023FFCC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_7;
    // 0x8023FFCC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_7:
    // 0x8023FFD0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023FFD4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023FFD8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8023FFDC:
    // 0x8023FFDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023FFE0: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x8023FFE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023FFE8: jal         0x8004DA90
    // 0x8023FFEC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_8;
    // 0x8023FFEC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x8023FFF0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8023FFF4: jal         0x80241758
    // 0x8023FFF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80241758_ovl28(rdram, ctx);
        goto after_9;
    // 0x8023FFF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8023FFFC: bne         $v0, $zero, L_80240018
    if (ctx->r2 != 0) {
        // 0x80240000: addiu       $a0, $zero, 0x1ED
        ctx->r4 = ADD32(0, 0X1ED);
            goto L_80240018;
    }
    // 0x80240000: addiu       $a0, $zero, 0x1ED
    ctx->r4 = ADD32(0, 0X1ED);
    // 0x80240004: jal         0x8002A33C
    // 0x80240008: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x80240008: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_10:
    // 0x8024000C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80240010: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240014: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80240018:
    // 0x80240018: jal         0x8004F144
    // 0x8024001C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_11;
    // 0x8024001C: nop

    after_11:
    // 0x80240020: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80240024: beq         $s1, $zero, L_80240198
    if (ctx->r17 == 0) {
        // 0x80240028: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80240198;
    }
    // 0x80240028: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8024002C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80240030: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x80240034: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80240038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024003C: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80240040: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x80240044: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    // 0x80240048: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8024004C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80240050: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80240054: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80240058: beq         $v0, $zero, L_80240068
    if (ctx->r2 == 0) {
        // 0x8024005C: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_80240068;
    }
    // 0x8024005C: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80240060: j           L_8024006C
    // 0x80240064: addiu       $a1, $s0, 0x1D8
    ctx->r5 = ADD32(ctx->r16, 0X1D8);
        goto L_8024006C;
    // 0x80240064: addiu       $a1, $s0, 0x1D8
    ctx->r5 = ADD32(ctx->r16, 0X1D8);
L_80240068:
    // 0x80240068: addiu       $a1, $s0, 0x1F8
    ctx->r5 = ADD32(ctx->r16, 0X1F8);
L_8024006C:
    // 0x8024006C: jal         0x8009A3B4
    // 0x80240070: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80240070: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
    // 0x80240074: addiu       $v0, $zero, -0x1F
    ctx->r2 = ADD32(0, -0X1F);
    // 0x80240078: j           L_80240198
    // 0x8024007C: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
        goto L_80240198;
    // 0x8024007C: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
L_80240080:
    // 0x80240080: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240084: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x80240088: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8024008C: sb          $v0, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = ctx->r2;
    // 0x80240090: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
    // 0x80240094: j           L_80240178
    // 0x80240098: sh          $zero, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = 0;
        goto L_80240178;
    // 0x80240098: sh          $zero, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = 0;
L_8024009C:
    // 0x8024009C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x802400A0: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x802400A4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802400A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802400AC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802400B0: slti        $v0, $v0, -0x32
    ctx->r2 = SIGNED(ctx->r2) < -0X32 ? 1 : 0;
    // 0x802400B4: beq         $v0, $zero, L_802400C0
    if (ctx->r2 == 0) {
        // 0x802400B8: addiu       $v0, $zero, -0x33
        ctx->r2 = ADD32(0, -0X33);
            goto L_802400C0;
    }
    // 0x802400B8: addiu       $v0, $zero, -0x33
    ctx->r2 = ADD32(0, -0X33);
    // 0x802400BC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
L_802400C0:
    // 0x802400C0: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x802400C4: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x802400C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802400CC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802400D0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802400D4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x802400D8: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x802400DC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x802400E0: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x802400E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802400E8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802400EC: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x802400F0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x802400F4: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x802400F8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802400FC: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80240100: jal         0x8004F820
    // 0x80240104: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_13;
    // 0x80240104: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_13:
    // 0x80240108: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8024010C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80240110: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80240114: sltiu       $v0, $a0, 0x1
    ctx->r2 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x80240118: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x8024011C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80240120: beq         $v1, $zero, L_80240144
    if (ctx->r3 == 0) {
        // 0x80240124: addiu       $v0, $zero, -0x33
        ctx->r2 = ADD32(0, -0X33);
            goto L_80240144;
    }
    // 0x80240124: addiu       $v0, $zero, -0x33
    ctx->r2 = ADD32(0, -0X33);
    // 0x80240128: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8024012C: bne         $v1, $v0, L_80240144
    if (ctx->r3 != ctx->r2) {
        // 0x80240130: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80240144;
    }
    // 0x80240130: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240134: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    // 0x80240138: sb          $zero, 0x9A($s1)
    MEM_B(0X9A, ctx->r17) = 0;
    // 0x8024013C: j           L_80240178
    // 0x80240140: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
        goto L_80240178;
    // 0x80240140: sb          $zero, 0x9B($s1)
    MEM_B(0X9B, ctx->r17) = 0;
L_80240144:
    // 0x80240144: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80240148: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024014C: j           L_80240198
    // 0x80240150: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80240198;
    // 0x80240150: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80240154:
    // 0x80240154: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240158: addiu       $a1, $zero, -0x1E0
    ctx->r5 = ADD32(0, -0X1E0);
    // 0x8024015C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80240160: jal         0x8004DA90
    // 0x80240164: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_14;
    // 0x80240164: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_14:
    // 0x80240168: jal         0x80241840
    // 0x8024016C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_80241840_ovl28(rdram, ctx);
        goto after_15;
    // 0x8024016C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_15:
    // 0x80240170: beq         $v0, $zero, L_80240198
    if (ctx->r2 == 0) {
        // 0x80240174: nop
    
            goto L_80240198;
    }
    // 0x80240174: nop

L_80240178:
    // 0x80240178: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8024017C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240180: j           L_80240198
    // 0x80240184: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80240198;
    // 0x80240184: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80240188:
    // 0x80240188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024018C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80240190: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80240194: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80240198:
    // 0x80240198: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8024019C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802401A0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802401A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802401A8: jr          $ra
    // 0x802401AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802401AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022B6D0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B6D0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022B6D4: lhu         $v1, 0x4DE8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4DE8);
    // 0x8022B6D8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B6DC: lhu         $a1, 0x4DEA($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X4DEA);
    // 0x8022B6E0: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8022B6E4: lhu         $a2, 0x4DEC($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X4DEC);
    // 0x8022B6E8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022B6EC: lhu         $a3, 0x4DF2($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X4DF2);
    // 0x8022B6F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B6F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B6F8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022B6FC: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8022B700: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B704: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022B708: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B70C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B710: sb          $a0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r4;
    // 0x8022B714: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B718: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022B71C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B720: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022B724: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B728: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8022B72C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B730: sh          $v1, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r3;
    // 0x8022B734: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B738: sh          $a1, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r5;
    // 0x8022B73C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B740: sh          $a2, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r6;
    // 0x8022B744: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B748: jr          $ra
    // 0x8022B74C: sh          $a3, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x8022B74C: sh          $a3, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r7;
;}
RECOMP_FUNC void func_8024D7E0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D7E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024D7E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024D7E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024D7EC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8024D7F0: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8024D7F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024D7F8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8024D7FC: addiu       $a1, $a1, 0x6380
    ctx->r5 = ADD32(ctx->r5, 0X6380);
    // 0x8024D800: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8024D804: jal         0x8009A3B4
    // 0x8024D808: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8024D808: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x8024D80C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8024D810: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024D814: beq         $v1, $v0, L_8024D878
    if (ctx->r3 == ctx->r2) {
        // 0x8024D818: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024D878;
    }
    // 0x8024D818: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024D81C: beql        $v0, $zero, L_8024D834
    if (ctx->r2 == 0) {
        // 0x8024D820: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024D834;
    }
    goto skip_0;
    // 0x8024D820: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024D824: beq         $v1, $zero, L_8024D84C
    if (ctx->r3 == 0) {
        // 0x8024D828: nop
    
            goto L_8024D84C;
    }
    // 0x8024D828: nop

    // 0x8024D82C: j           L_8024D910
    // 0x8024D830: nop

        goto L_8024D910;
    // 0x8024D830: nop

L_8024D834:
    // 0x8024D834: beq         $v1, $v0, L_8024D8A8
    if (ctx->r3 == ctx->r2) {
        // 0x8024D838: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024D8A8;
    }
    // 0x8024D838: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024D83C: beq         $v1, $v0, L_8024D8E0
    if (ctx->r3 == ctx->r2) {
        // 0x8024D840: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8024D8E0;
    }
    // 0x8024D840: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024D844: j           L_8024D910
    // 0x8024D848: nop

        goto L_8024D910;
    // 0x8024D848: nop

L_8024D84C:
    // 0x8024D84C: jal         0x8006033C
    // 0x8024D850: addiu       $a0, $zero, 0x6D
    ctx->r4 = ADD32(0, 0X6D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8024D850: addiu       $a0, $zero, 0x6D
    ctx->r4 = ADD32(0, 0X6D);
    after_1:
    // 0x8024D854: bne         $v0, $zero, L_8024D90C
    if (ctx->r2 != 0) {
        // 0x8024D858: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024D90C;
    }
    // 0x8024D858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024D85C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024D860: jal         0x8024DD2C
    // 0x8024D864: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8024DD2C_ovl28(rdram, ctx);
        goto after_2;
    // 0x8024D864: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8024D868: beq         $v0, $zero, L_8024D910
    if (ctx->r2 == 0) {
        // 0x8024D86C: nop
    
            goto L_8024D910;
    }
    // 0x8024D86C: nop

    // 0x8024D870: j           L_8024D8D0
    // 0x8024D874: nop

        goto L_8024D8D0;
    // 0x8024D874: nop

L_8024D878:
    // 0x8024D878: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024D87C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024D880: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024D884: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024D888: bne         $v0, $zero, L_8024D910
    if (ctx->r2 != 0) {
        // 0x8024D88C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8024D910;
    }
    // 0x8024D88C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024D890: jal         0x8024DD2C
    // 0x8024D894: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8024DD2C_ovl28(rdram, ctx);
        goto after_3;
    // 0x8024D894: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8024D898: bne         $v0, $zero, L_8024D8D0
    if (ctx->r2 != 0) {
        // 0x8024D89C: nop
    
            goto L_8024D8D0;
    }
    // 0x8024D89C: nop

    // 0x8024D8A0: j           L_8024D910
    // 0x8024D8A4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8024D910;
    // 0x8024D8A4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8024D8A8:
    // 0x8024D8A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024D8AC: jal         0x800616FC
    // 0x8024D8B0: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x8024D8B0: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    after_4:
    // 0x8024D8B4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8024D8B8: addiu       $v1, $v1, 0x4A6D
    ctx->r3 = ADD32(ctx->r3, 0X4A6D);
    // 0x8024D8BC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8024D8C0: addiu       $a0, $zero, 0x6D
    ctx->r4 = ADD32(0, 0X6D);
    // 0x8024D8C4: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8024D8C8: jal         0x8006036C
    // 0x8024D8CC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x8024D8CC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_5:
L_8024D8D0:
    // 0x8024D8D0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024D8D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024D8D8: j           L_8024D910
    // 0x8024D8DC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8024D910;
    // 0x8024D8DC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024D8E0:
    // 0x8024D8E0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024D8E4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024D8E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024D8EC: bne         $v0, $zero, L_8024D910
    if (ctx->r2 != 0) {
        // 0x8024D8F0: nop
    
            goto L_8024D910;
    }
    // 0x8024D8F0: nop

    // 0x8024D8F4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024D8F8: addiu       $v0, $v0, 0x4A6D
    ctx->r2 = ADD32(ctx->r2, 0X4A6D);
    // 0x8024D8FC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8024D900: andi        $v1, $v1, 0xBF
    ctx->r3 = ctx->r3 & 0XBF;
    // 0x8024D904: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8024D908: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024D90C:
    // 0x8024D90C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8024D910:
    // 0x8024D910: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8024D914: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024D918: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024D91C: jr          $ra
    // 0x8024D920: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8024D920: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226BC4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226BC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226BCC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80226BD0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226BD4: jal         0x800A3450
    // 0x80226BD8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80226BD8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80226BDC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80226BE0: addiu       $a0, $a0, 0x1138
    ctx->r4 = ADD32(ctx->r4, 0X1138);
    // 0x80226BE4: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
    // 0x80226BE8: subu        $v1, $v1, $s0
    ctx->r3 = SUB32(ctx->r3, ctx->r16);
    // 0x80226BEC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80226BF0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80226BF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226BF8: lbu         $a3, 0x0($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0X0);
    // 0x80226BFC: beq         $a3, $zero, L_80226CC0
    if (ctx->r7 == 0) {
        // 0x80226C00: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_80226CC0;
    }
    // 0x80226C00: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80226C04: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x80226C08: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x80226C0C: andi        $v1, $a3, 0x7F
    ctx->r3 = ctx->r7 & 0X7F;
    // 0x80226C10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226C14: srl         $a3, $a3, 7
    ctx->r7 = S32(U32(ctx->r7) >> 7);
    // 0x80226C18: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80226C1C: sll         $a3, $a3, 5
    ctx->r7 = S32(ctx->r7 << 5);
    // 0x80226C20: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x80226C24: lbu         $a0, 0x7($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X7);
    // 0x80226C28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226C2C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226C30: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80226C34: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    // 0x80226C38: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
    // 0x80226C3C: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x80226C40: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80226C44: sb          $a0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r4;
    // 0x80226C48: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80226C4C: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x80226C50: ori         $a3, $a3, 0xF
    ctx->r7 = ctx->r7 | 0XF;
    // 0x80226C54: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80226C58: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80226C5C: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80226C60: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80226C64: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x80226C68: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80226C6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80226C70: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x80226C74: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80226C78: sw          $s1, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r17;
    // 0x80226C7C: jal         0x8003055C
    // 0x80226C80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_1;
    // 0x80226C80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80226C84: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226C88: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80226C8C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80226C90: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x80226C94: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80226C98: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x80226C9C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80226CA0: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80226CA4: jal         0x8002FD30
    // 0x80226CA8: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_2;
    // 0x80226CA8: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_2:
    // 0x80226CAC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226CB0: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80226CB4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226CB8: jal         0x8002FD30
    // 0x80226CBC: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_3;
    // 0x80226CBC: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_3:
L_80226CC0:
    // 0x80226CC0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226CC4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80226CC8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226CCC: jr          $ra
    // 0x80226CD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226CD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80226CD4: nop

    // 0x80226CD8: nop

    // 0x80226CDC: nop

;}
RECOMP_FUNC void func_802314A0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802314A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802314A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802314A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802314AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802314B0: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x802314B4: jal         0x8006033C
    // 0x802314B8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802314B8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_0:
    // 0x802314BC: bne         $v0, $zero, L_802314D8
    if (ctx->r2 != 0) {
        // 0x802314C0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802314D8;
    }
    // 0x802314C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802314C4: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x802314C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802314CC: bne         $v1, $v0, L_802314D8
    if (ctx->r3 != ctx->r2) {
        // 0x802314D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802314D8;
    }
    // 0x802314D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802314D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802314D8:
    // 0x802314D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802314DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802314E0: jr          $ra
    // 0x802314E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802314E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237D88_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237D88: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80237D8C: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80237D90: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x80237D94: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x80237D98: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x80237D9C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80237DA0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80237DA4: lw          $v0, 0x406C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X406C);
    // 0x80237DA8: jr          $ra
    // 0x80237DAC: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80237DAC: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80249E98_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249E98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249E9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80249EA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249EA4: jal         0x8004F2C4
    // 0x80249EA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x80249EA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80249EAC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80249EB0: beq         $v1, $zero, L_80249EEC
    if (ctx->r3 == 0) {
        // 0x80249EB4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80249EEC;
    }
    // 0x80249EB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80249EB8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80249EBC: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x80249EC0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80249EC4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80249EC8: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80249ECC: lhu         $v0, 0x38($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X38);
    // 0x80249ED0: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x80249ED4: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x80249ED8: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x80249EDC: lhu         $v0, 0x3C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3C);
    // 0x80249EE0: sw          $s0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r16;
    // 0x80249EE4: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
    // 0x80249EE8: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
L_80249EEC:
    // 0x80249EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80249EF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249EF4: jr          $ra
    // 0x80249EF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80249EF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80249EFC: nop

;}
RECOMP_FUNC void func_8024734C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024734C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80247350: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80247354: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80247358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024735C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80247360: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80247364: beq         $v0, $zero, L_8024741C
    if (ctx->r2 == 0) {
        // 0x80247368: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8024741C;
    }
    // 0x80247368: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8024736C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247370: addu        $at, $at, $v0
    gpr jr_addend_80247378 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80247374: lw          $v0, 0x62D0($at)
    ctx->r2 = ADD32(ctx->r1, 0X62D0);
    // 0x80247378: jr          $v0
    // 0x8024737C: nop

    switch (jr_addend_80247378 >> 2) {
        case 0: goto L_80247380; break;
        case 1: goto L_802473AC; break;
        case 2: goto L_802473D4; break;
        case 3: goto L_802473F8; break;
        case 4: goto L_8024741C; break;
        default: switch_error(__func__, 0x80247378, 0x802562D0);
    }
    // 0x8024737C: nop

L_80247380:
    // 0x80247380: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80247384: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80247388: bne         $v1, $v0, L_8024741C
    if (ctx->r3 != ctx->r2) {
        // 0x8024738C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8024741C;
    }
    // 0x8024738C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80247390: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80247394: bne         $v1, $v0, L_8024741C
    if (ctx->r3 != ctx->r2) {
        // 0x80247398: nop
    
            goto L_8024741C;
    }
    // 0x80247398: nop

    // 0x8024739C: jal         0x802476B0
    // 0x802473A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802476B0_ovl28(rdram, ctx);
        goto after_0;
    // 0x802473A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802473A4: j           L_80247410
    // 0x802473A8: nop

        goto L_80247410;
    // 0x802473A8: nop

L_802473AC:
    // 0x802473AC: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x802473B0: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x802473B4: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x802473B8: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
    // 0x802473BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802473C0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802473C4: beq         $v0, $v1, L_80247410
    if (ctx->r2 == ctx->r3) {
        // 0x802473C8: nop
    
            goto L_80247410;
    }
    // 0x802473C8: nop

    // 0x802473CC: j           L_8024741C
    // 0x802473D0: nop

        goto L_8024741C;
    // 0x802473D0: nop

L_802473D4:
    // 0x802473D4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802473D8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802473DC: bne         $v1, $v0, L_8024741C
    if (ctx->r3 != ctx->r2) {
        // 0x802473E0: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8024741C;
    }
    // 0x802473E0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802473E4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802473E8: beq         $v1, $v0, L_80247410
    if (ctx->r3 == ctx->r2) {
        // 0x802473EC: nop
    
            goto L_80247410;
    }
    // 0x802473EC: nop

    // 0x802473F0: j           L_8024741C
    // 0x802473F4: nop

        goto L_8024741C;
    // 0x802473F4: nop

L_802473F8:
    // 0x802473F8: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x802473FC: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80247400: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
    // 0x80247404: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80247408: bne         $v0, $zero, L_8024741C
    if (ctx->r2 != 0) {
        // 0x8024740C: nop
    
            goto L_8024741C;
    }
    // 0x8024740C: nop

L_80247410:
    // 0x80247410: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80247414: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247418: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024741C:
    // 0x8024741C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247420: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80247424: jr          $ra
    // 0x80247428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80247428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228D04_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228D04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228D08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228D0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228D10: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228D14: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228D18: lbu         $a0, 0x6($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X6);
    // 0x80228D1C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80228D20: beq         $v1, $zero, L_80228D3C
    if (ctx->r3 == 0) {
        // 0x80228D24: nop
    
            goto L_80228D3C;
    }
    // 0x80228D24: nop

    // 0x80228D28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228D2C: beq         $v1, $v0, L_80228D64
    if (ctx->r3 == ctx->r2) {
        // 0x80228D30: nop
    
            goto L_80228D64;
    }
    // 0x80228D30: nop

    // 0x80228D34: j           L_80228E04
    // 0x80228D38: nop

        goto L_80228E04;
    // 0x80228D38: nop

L_80228D3C:
    // 0x80228D3C: jal         0x8004F684
    // 0x80228D40: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x80228D40: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_0:
    // 0x80228D44: jal         0x8004F418
    // 0x80228D48: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80228D48: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_1:
    // 0x80228D4C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80228D50: jal         0x8005FA7C
    // 0x80228D54: addiu       $a0, $a0, 0x19DC
    ctx->r4 = ADD32(ctx->r4, 0X19DC);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80228D54: addiu       $a0, $a0, 0x19DC
    ctx->r4 = ADD32(ctx->r4, 0X19DC);
    after_2:
    // 0x80228D58: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80228D5C: j           L_80228E00
    // 0x80228D60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228E00;
    // 0x80228D60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228D64:
    // 0x80228D64: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80228D68: slti        $v0, $v0, 0x96
    ctx->r2 = SIGNED(ctx->r2) < 0X96 ? 1 : 0;
    // 0x80228D6C: beq         $v0, $zero, L_80228DFC
    if (ctx->r2 == 0) {
        // 0x80228D70: addiu       $v0, $zero, -0xF9
        ctx->r2 = ADD32(0, -0XF9);
            goto L_80228DFC;
    }
    // 0x80228D70: addiu       $v0, $zero, -0xF9
    ctx->r2 = ADD32(0, -0XF9);
    // 0x80228D74: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80228D78: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x80228D7C: addiu       $s0, $zero, -0x12
    ctx->r16 = ADD32(0, -0X12);
    // 0x80228D80: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80228D84: sh          $s1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r17;
    // 0x80228D88: jal         0x8003E6BC
    // 0x80228D8C: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_3;
    // 0x80228D8C: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    after_3:
    // 0x80228D90: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80228D94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228D98: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80228D9C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80228DA0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228DA4: lhu         $v0, 0x5080($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5080);
    // 0x80228DA8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80228DAC: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80228DB0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80228DB4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80228DB8: sh          $v0, 0x5080($at)
    MEM_H(0X5080, ctx->r1) = ctx->r2;
    // 0x80228DBC: addiu       $v0, $zero, 0xF9
    ctx->r2 = ADD32(0, 0XF9);
    // 0x80228DC0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80228DC4: sh          $s1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r17;
    // 0x80228DC8: jal         0x8003E6BC
    // 0x80228DCC: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_4;
    // 0x80228DCC: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    after_4:
    // 0x80228DD0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80228DD4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228DD8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80228DDC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80228DE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228DE4: lhu         $v0, 0x5080($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5080);
    // 0x80228DE8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80228DEC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80228DF0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80228DF4: j           L_80228E04
    // 0x80228DF8: sh          $v0, 0x5080($at)
    MEM_H(0X5080, ctx->r1) = ctx->r2;
        goto L_80228E04;
    // 0x80228DF8: sh          $v0, 0x5080($at)
    MEM_H(0X5080, ctx->r1) = ctx->r2;
L_80228DFC:
    // 0x80228DFC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
L_80228E00:
    // 0x80228E00: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80228E04:
    // 0x80228E04: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228E08: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80228E0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228E10: jr          $ra
    // 0x80228E14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228E14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023B0D8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B0D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B0DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B0E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B0E4: jal         0x8005044C
    // 0x8023B0E8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x8023B0E8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8023B0EC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B0F0: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8023B0F4: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8023B0F8: beq         $v1, $v0, L_8023B19C
    if (ctx->r3 == ctx->r2) {
        // 0x8023B0FC: slti        $v0, $v1, 0x79
        ctx->r2 = SIGNED(ctx->r3) < 0X79 ? 1 : 0;
            goto L_8023B19C;
    }
    // 0x8023B0FC: slti        $v0, $v1, 0x79
    ctx->r2 = SIGNED(ctx->r3) < 0X79 ? 1 : 0;
    // 0x8023B100: beq         $v0, $zero, L_8023B138
    if (ctx->r2 == 0) {
        // 0x8023B104: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_8023B138;
    }
    // 0x8023B104: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8023B108: beq         $v1, $v0, L_8023B188
    if (ctx->r3 == ctx->r2) {
        // 0x8023B10C: slti        $v0, $v1, 0x29
        ctx->r2 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
            goto L_8023B188;
    }
    // 0x8023B10C: slti        $v0, $v1, 0x29
    ctx->r2 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x8023B110: beql        $v0, $zero, L_8023B128
    if (ctx->r2 == 0) {
        // 0x8023B114: addiu       $v0, $zero, 0x6E
        ctx->r2 = ADD32(0, 0X6E);
            goto L_8023B128;
    }
    goto skip_0;
    // 0x8023B114: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    skip_0:
    // 0x8023B118: beql        $v1, $zero, L_8023B170
    if (ctx->r3 == 0) {
        // 0x8023B11C: sb          $zero, 0x8($s0)
        MEM_B(0X8, ctx->r16) = 0;
            goto L_8023B170;
    }
    goto skip_1;
    // 0x8023B11C: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    skip_1:
    // 0x8023B120: j           L_8023B1D4
    // 0x8023B124: nop

        goto L_8023B1D4;
    // 0x8023B124: nop

L_8023B128:
    // 0x8023B128: beql        $v1, $v0, L_8023B1C4
    if (ctx->r3 == ctx->r2) {
        // 0x8023B12C: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_8023B1C4;
    }
    goto skip_2;
    // 0x8023B12C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_2:
    // 0x8023B130: j           L_8023B1D4
    // 0x8023B134: nop

        goto L_8023B1D4;
    // 0x8023B134: nop

L_8023B138:
    // 0x8023B138: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x8023B13C: beq         $v1, $v0, L_8023B1B0
    if (ctx->r3 == ctx->r2) {
        // 0x8023B140: slti        $v0, $v1, 0x105
        ctx->r2 = SIGNED(ctx->r3) < 0X105 ? 1 : 0;
            goto L_8023B1B0;
    }
    // 0x8023B140: slti        $v0, $v1, 0x105
    ctx->r2 = SIGNED(ctx->r3) < 0X105 ? 1 : 0;
    // 0x8023B144: beq         $v0, $zero, L_8023B15C
    if (ctx->r2 == 0) {
        // 0x8023B148: addiu       $v0, $zero, 0xE6
        ctx->r2 = ADD32(0, 0XE6);
            goto L_8023B15C;
    }
    // 0x8023B148: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x8023B14C: beql        $v1, $v0, L_8023B1C4
    if (ctx->r3 == ctx->r2) {
        // 0x8023B150: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_8023B1C4;
    }
    goto skip_3;
    // 0x8023B150: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_3:
    // 0x8023B154: j           L_8023B1D4
    // 0x8023B158: nop

        goto L_8023B1D4;
    // 0x8023B158: nop

L_8023B15C:
    // 0x8023B15C: addiu       $v0, $zero, 0x17C
    ctx->r2 = ADD32(0, 0X17C);
    // 0x8023B160: beql        $v1, $v0, L_8023B1C4
    if (ctx->r3 == ctx->r2) {
        // 0x8023B164: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_8023B1C4;
    }
    goto skip_4;
    // 0x8023B164: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_4:
    // 0x8023B168: j           L_8023B1D4
    // 0x8023B16C: nop

        goto L_8023B1D4;
    // 0x8023B16C: nop

L_8023B170:
    // 0x8023B170: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B174: lw          $v0, 0x45DC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X45DC);
    // 0x8023B178: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023B17C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023B180: j           L_8023B1C4
    // 0x8023B184: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_8023B1C4;
    // 0x8023B184: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_8023B188:
    // 0x8023B188: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023B18C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B190: lw          $v0, 0x4668($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4668);
    // 0x8023B194: j           L_8023B1D0
    // 0x8023B198: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_8023B1D0;
    // 0x8023B198: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023B19C:
    // 0x8023B19C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023B1A0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B1A4: lw          $v0, 0x4668($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4668);
    // 0x8023B1A8: j           L_8023B1D0
    // 0x8023B1AC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_8023B1D0;
    // 0x8023B1AC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023B1B0:
    // 0x8023B1B0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023B1B4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B1B8: lw          $v0, 0x4668($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4668);
    // 0x8023B1BC: j           L_8023B1D0
    // 0x8023B1C0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_8023B1D0;
    // 0x8023B1C0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023B1C4:
    // 0x8023B1C4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B1C8: lw          $v0, 0x465C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X465C);
    // 0x8023B1CC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023B1D0:
    // 0x8023B1D0: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_8023B1D4:
    // 0x8023B1D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B1D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B1DC: jr          $ra
    // 0x8023B1E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B1E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A4A4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A4A4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022A4A8: bne         $v0, $zero, L_8022A4C4
    if (ctx->r2 != 0) {
        // 0x8022A4AC: nop
    
            goto L_8022A4C4;
    }
    // 0x8022A4AC: nop

    // 0x8022A4B0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022A4B4: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8022A4B8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022A4BC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022A4C0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_8022A4C4:
    // 0x8022A4C4: jr          $ra
    // 0x8022A4C8: nop

    TRACE_RETURN()
    return;
    // 0x8022A4C8: nop

;}
RECOMP_FUNC void func_8022E18C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E18C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E190: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E194: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E19C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022E1A0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E1A4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022E1A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E1AC: bne         $v0, $zero, L_8022E1D4
    if (ctx->r2 != 0) {
        // 0x8022E1B0: nop
    
            goto L_8022E1D4;
    }
    // 0x8022E1B0: nop

    // 0x8022E1B4: jal         0x8022FE10
    // 0x8022E1B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FE10_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022E1B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022E1BC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E1C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E1C4: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8022E1C8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022E1CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022E1D0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022E1D4:
    // 0x8022E1D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E1D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E1DC: jr          $ra
    // 0x8022E1E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E1E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232060_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232060: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232064: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232068: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023206C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232070: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80232074: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232078: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023207C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232080: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232084: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80232088: jal         0x8004F820
    // 0x8023208C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8023208C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_0:
    // 0x80232090: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80232094: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x80232098: sltiu       $a1, $v1, 0x1
    ctx->r5 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8023209C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802320A0: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x802320A4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802320A8: bne         $v1, $v0, L_802320B4
    if (ctx->r3 != ctx->r2) {
        // 0x802320AC: sh          $a0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r4;
            goto L_802320B4;
    }
    // 0x802320AC: sh          $a0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r4;
    // 0x802320B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802320B4:
    // 0x802320B4: beq         $a1, $zero, L_802320C4
    if (ctx->r5 == 0) {
        // 0x802320B8: addiu       $a0, $zero, 0x196
        ctx->r4 = ADD32(0, 0X196);
            goto L_802320C4;
    }
    // 0x802320B8: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    // 0x802320BC: jal         0x8002A33C
    // 0x802320C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802320C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
L_802320C4:
    // 0x802320C4: lhu         $v0, 0x380($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X380);
    // 0x802320C8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802320CC: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x802320D0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x802320D4: bne         $v0, $zero, L_80232124
    if (ctx->r2 != 0) {
        // 0x802320D8: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80232124;
    }
    // 0x802320D8: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802320DC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802320E0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802320E4: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x802320E8: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x802320EC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802320F0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802320F4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802320F8: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x802320FC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80232100: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80232104: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80232108: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023210C: lbu         $v1, 0xA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XA);
    // 0x80232110: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232114: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232118: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x8023211C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80232120: sw          $v1, 0x378($s0)
    MEM_W(0X378, ctx->r16) = ctx->r3;
L_80232124:
    // 0x80232124: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232128: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023212C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232130: jr          $ra
    // 0x80232134: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232134: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D33C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D33C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D340: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D344: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D348: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D34C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D350: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D354: beq         $v1, $zero, L_8022D370
    if (ctx->r3 == 0) {
        // 0x8022D358: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022D370;
    }
    // 0x8022D358: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022D35C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D360: beq         $v1, $v0, L_8022D3B4
    if (ctx->r3 == ctx->r2) {
        // 0x8022D364: nop
    
            goto L_8022D3B4;
    }
    // 0x8022D364: nop

    // 0x8022D368: j           L_8022D4A4
    // 0x8022D36C: nop

        goto L_8022D4A4;
    // 0x8022D36C: nop

L_8022D370:
    // 0x8022D370: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D374: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D378: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D37C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D380: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D384: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022D388: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022D38C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022D390: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022D394: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022D398: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022D39C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D3A0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022D3A4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022D3A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D3AC: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022D3B0: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
L_8022D3B4:
    // 0x8022D3B4: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022D3B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D3BC: bne         $v1, $v0, L_8022D3CC
    if (ctx->r3 != ctx->r2) {
        // 0x8022D3C0: addiu       $a0, $zero, 0xB5
        ctx->r4 = ADD32(0, 0XB5);
            goto L_8022D3CC;
    }
    // 0x8022D3C0: addiu       $a0, $zero, 0xB5
    ctx->r4 = ADD32(0, 0XB5);
    // 0x8022D3C4: jal         0x8002A33C
    // 0x8022D3C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022D3C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_8022D3CC:
    // 0x8022D3CC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022D3D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D3D4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022D3D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D3DC: bgtz        $v0, L_8022D3F8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022D3E0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D3F8;
    }
    // 0x8022D3E0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D3E4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D3E8: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x8022D3EC: sh          $v1, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r3;
    // 0x8022D3F0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022D3F4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022D3F8:
    // 0x8022D3F8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D3FC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D400: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022D404: jal         0x8004F820
    // 0x8022D408: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022D408: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x8022D40C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D410: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x8022D414: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022D418: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D41C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D420: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D424: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D428: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D42C: jal         0x8004DA90
    // 0x8022D430: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022D430: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022D434: jal         0x80040F30
    // 0x8022D438: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022D438: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022D43C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D440: jal         0x8003E934
    // 0x8022D444: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022D444: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022D448: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022D44C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022D450: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022D454: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D458: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022D45C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022D460: bltz        $v0, L_8022D478
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022D464: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022D478;
    }
    // 0x8022D464: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022D468: beq         $v0, $zero, L_8022D488
    if (ctx->r2 == 0) {
        // 0x8022D46C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D488;
    }
    // 0x8022D46C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D470: j           L_8022D4A4
    // 0x8022D474: nop

        goto L_8022D4A4;
    // 0x8022D474: nop

L_8022D478:
    // 0x8022D478: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022D47C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022D480: bne         $v0, $zero, L_8022D4A4
    if (ctx->r2 != 0) {
        // 0x8022D484: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D4A4;
    }
    // 0x8022D484: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022D488:
    // 0x8022D488: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022D48C: jal         0x8009A3B4
    // 0x8022D490: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022D490: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022D494: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022D498: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022D49C: jal         0x8009A3B4
    // 0x8022D4A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022D4A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
L_8022D4A4:
    // 0x8022D4A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D4A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D4AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D4B0: jr          $ra
    // 0x8022D4B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D4B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024BE90_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024BE90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024BE94: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8024BE98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024BE9C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8024BEA0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024BEA4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BEA8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024BEAC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024BEB0: lw          $v0, 0x544C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X544C);
    // 0x8024BEB4: jalr        $v0
    // 0x8024BEB8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024BEB8: nop

    after_0:
    // 0x8024BEBC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8024BEC0: lb          $v0, -0x3BBD($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BBD);
    // 0x8024BEC4: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8024BEC8: bne         $v0, $zero, L_8024BEF4
    if (ctx->r2 != 0) {
        // 0x8024BECC: nop
    
            goto L_8024BEF4;
    }
    // 0x8024BECC: nop

    // 0x8024BED0: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8024BED4: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024BED8: addiu       $v1, $v1, 0x5438
    ctx->r3 = ADD32(ctx->r3, 0X5438);
    // 0x8024BEDC: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x8024BEE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BEE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024BEE8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024BEEC: j           L_8024BF18
    // 0x8024BEF0: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
        goto L_8024BF18;
    // 0x8024BEF0: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
L_8024BEF4:
    // 0x8024BEF4: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8024BEF8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024BEFC: addiu       $v1, $v1, 0x5438
    ctx->r3 = ADD32(ctx->r3, 0X5438);
    // 0x8024BF00: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x8024BF04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BF08: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024BF0C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024BF10: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8024BF14: addiu       $a2, $v0, 0x20
    ctx->r6 = ADD32(ctx->r2, 0X20);
L_8024BF18:
    // 0x8024BF18: lhu         $v1, 0x3E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3E);
    // 0x8024BF1C: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x8024BF20: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8024BF24: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024BF28: addiu       $v0, $v0, 0x64B0
    ctx->r2 = ADD32(ctx->r2, 0X64B0);
    // 0x8024BF2C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8024BF30: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x8024BF34: or          $v0, $a2, $v0
    ctx->r2 = ctx->r6 | ctx->r2;
    // 0x8024BF38: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8024BF3C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8024BF40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8024BF44: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8024BF48: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8024BF4C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8024BF50: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024BF54: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x8024BF58: sra         $a1, $v1, 16
    ctx->r5 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024BF5C: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x8024BF60: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8024BF64: jal         0x80051E18
    // 0x8024BF68: sra         $a1, $a1, 1
    ctx->r5 = S32(SIGNED(ctx->r5) >> 1);
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x8024BF68: sra         $a1, $a1, 1
    ctx->r5 = S32(SIGNED(ctx->r5) >> 1);
    after_1:
    // 0x8024BF6C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8024BF70: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8024BF74: jr          $ra
    // 0x8024BF78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8024BF78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023FABC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023FABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023FAC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023FAC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023FAC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023FACC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023FAD0: beq         $v1, $zero, L_8023FAE0
    if (ctx->r3 == 0) {
        // 0x8023FAD4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023FAE0;
    }
    // 0x8023FAD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FAD8: beq         $v1, $v0, L_8023FB44
    if (ctx->r3 == ctx->r2) {
        // 0x8023FADC: nop
    
            goto L_8023FB44;
    }
    // 0x8023FADC: nop

L_8023FAE0:
    // 0x8023FAE0: jal         0x8004EFE4
    // 0x8023FAE4: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8023FAE4: nop

    after_0:
    // 0x8023FAE8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023FAEC: beq         $v1, $zero, L_8023FB2C
    if (ctx->r3 == 0) {
        // 0x8023FAF0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023FB2C;
    }
    // 0x8023FAF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FAF4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023FAF8: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
    // 0x8023FAFC: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023FB00: addiu       $v0, $zero, 0xFC
    ctx->r2 = ADD32(0, 0XFC);
    // 0x8023FB04: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8023FB08: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023FB0C: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x8023FB10: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8023FB14: addiu       $v0, $zero, 0x500
    ctx->r2 = ADD32(0, 0X500);
    // 0x8023FB18: sh          $v0, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r2;
    // 0x8023FB1C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023FB20: sh          $zero, 0x14($v1)
    MEM_H(0X14, ctx->r3) = 0;
    // 0x8023FB24: sb          $v0, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r2;
    // 0x8023FB28: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_8023FB2C:
    // 0x8023FB2C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023FB30: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x8023FB34: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x8023FB38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023FB3C: j           L_8023FB6C
    // 0x8023FB40: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023FB6C;
    // 0x8023FB40: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023FB44:
    // 0x8023FB44: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023FB48: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023FB4C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8023FB50: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023FB54: bne         $v0, $zero, L_8023FB6C
    if (ctx->r2 != 0) {
        // 0x8023FB58: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023FB6C;
    }
    // 0x8023FB58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FB5C: sh          $zero, 0x4DE($s0)
    MEM_H(0X4DE, ctx->r16) = 0;
    // 0x8023FB60: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023FB64: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023FB68: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023FB6C:
    // 0x8023FB6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023FB70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023FB74: jr          $ra
    // 0x8023FB78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023FB78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80248414_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248414: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80248418: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8024841C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80248420: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80248424: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80248428: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8024842C: jal         0x8002C654
    // 0x80248430: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80248430: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80248434: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80248438: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8024843C: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80248440: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80248444: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80248448: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8024844C: jal         0x80031DA8
    // 0x80248450: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_1;
    // 0x80248450: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x80248454: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80248458: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8024845C: jal         0x800319B4
    // 0x80248460: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80248460: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_2:
    // 0x80248464: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80248468: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8024846C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80248470: jr          $ra
    // 0x80248474: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80248474: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80248478: nop

    // 0x8024847C: nop

;}
RECOMP_FUNC void func_80226AA4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226AA4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226AA8: bne         $v0, $zero, L_80226AE8
    if (ctx->r2 != 0) {
        // 0x80226AAC: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80226AE8;
    }
    // 0x80226AAC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80226AB0: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80226AB4: sh          $v1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r3;
    // 0x80226AB8: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x80226ABC: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x80226AC0: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80226AC4: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x80226AC8: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80226ACC: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x80226AD0: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x80226AD4: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x80226AD8: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x80226ADC: sh          $zero, 0x58($v0)
    MEM_H(0X58, ctx->r2) = 0;
    // 0x80226AE0: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x80226AE4: sh          $v1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r3;
L_80226AE8:
    // 0x80226AE8: jr          $ra
    // 0x80226AEC: nop

    TRACE_RETURN()
    return;
    // 0x80226AEC: nop

;}
