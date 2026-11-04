#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80230110_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230114: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230118: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023011C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230120: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230124: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x80230128: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8023012C: jal         0x8002C654
    // 0x80230130: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80230130: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230138: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023013C: sh          $zero, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = 0;
    // 0x80230140: sh          $zero, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = 0;
    // 0x80230144: jal         0x8004D5D4
    // 0x80230148: sh          $zero, 0x30($s0)
    MEM_H(0X30, ctx->r16) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80230148: sh          $zero, 0x30($s0)
    MEM_H(0X30, ctx->r16) = 0;
    after_1:
    // 0x8023014C: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80230150: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x80230154: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80230158: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023015C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80230160: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230164: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80230168: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023016C: bne         $a0, $zero, L_8023017C
    if (ctx->r4 != 0) {
        // 0x80230170: sw          $v1, 0x40($s0)
        MEM_W(0X40, ctx->r16) = ctx->r3;
            goto L_8023017C;
    }
    // 0x80230170: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x80230174: j           L_8023018C
    // 0x80230178: addiu       $v0, $zero, 0x605
    ctx->r2 = ADD32(0, 0X605);
        goto L_8023018C;
    // 0x80230178: addiu       $v0, $zero, 0x605
    ctx->r2 = ADD32(0, 0X605);
L_8023017C:
    // 0x8023017C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230180: bne         $a0, $v0, L_8023018C
    if (ctx->r4 != ctx->r2) {
        // 0x80230184: addiu       $v0, $zero, 0x604
        ctx->r2 = ADD32(0, 0X604);
            goto L_8023018C;
    }
    // 0x80230184: addiu       $v0, $zero, 0x604
    ctx->r2 = ADD32(0, 0X604);
    // 0x80230188: addiu       $v0, $zero, 0x606
    ctx->r2 = ADD32(0, 0X606);
L_8023018C:
    // 0x8023018C: sh          $v0, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r2;
    // 0x80230190: jal         0x802301A8
    // 0x80230194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802301A8_ovl16(rdram, ctx);
        goto after_2;
    // 0x80230194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80230198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023019C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802301A0: jr          $ra
    // 0x802301A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802301A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A55C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A55C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A560: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A564: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A56C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A570: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A574: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A578: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A57C: lw          $v0, 0x41BC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X41BC);
    // 0x8022A580: jalr        $v0
    // 0x8022A584: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022A584: nop

    after_0:
    // 0x8022A588: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022A58C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A590: jal         0x8009A3B4
    // 0x8022A594: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A594: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022A598: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x8022A59C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022A5A0: beq         $v0, $zero, L_8022A5BC
    if (ctx->r2 == 0) {
        // 0x8022A5A4: nop
    
            goto L_8022A5BC;
    }
    // 0x8022A5A4: nop

    // 0x8022A5A8: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x8022A5AC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022A5B0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022A5B4: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022A5B8: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
L_8022A5BC:
    // 0x8022A5BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A5C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A5C4: jr          $ra
    // 0x8022A5C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A5C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226160_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226164: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226168: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022616C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80226170: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226178: jal         0x8009A3B4
    // 0x8022617C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022617C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80226180: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80226184: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80226188: jal         0x8009A3B4
    // 0x8022618C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022618C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80226190: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80226194: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80226198: jal         0x8009A3B4
    // 0x8022619C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022619C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802261A0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802261A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802261A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802261AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802261B0: lw          $v0, 0x4050($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4050);
    // 0x802261B4: jalr        $v0
    // 0x802261B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802261B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802261BC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802261C0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802261C4: beq         $v0, $zero, L_802261DC
    if (ctx->r2 == 0) {
        // 0x802261C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802261DC;
    }
    // 0x802261C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802261CC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802261D0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802261D4: jal         0x8003B564
    // 0x802261D8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x802261D8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_802261DC:
    // 0x802261DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802261E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802261E4: jr          $ra
    // 0x802261E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802261E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B284_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B284: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B288: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022B28C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B290: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022B294: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022B298: lh          $v0, 0xDA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XDA);
    // 0x8022B29C: bne         $v1, $v0, L_8022B33C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B2A0: addiu       $a0, $s0, 0xD0
        ctx->r4 = ADD32(ctx->r16, 0XD0);
            goto L_8022B33C;
    }
    // 0x8022B2A0: addiu       $a0, $s0, 0xD0
    ctx->r4 = ADD32(ctx->r16, 0XD0);
    // 0x8022B2A4: jal         0x800A3450
    // 0x8022B2A8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022B2A8: nop

    after_0:
    // 0x8022B2AC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022B2B0: slti        $v0, $v0, 0xE
    ctx->r2 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x8022B2B4: beq         $v0, $zero, L_8022B300
    if (ctx->r2 == 0) {
        // 0x8022B2B8: nop
    
            goto L_8022B300;
    }
    // 0x8022B2B8: nop

    // 0x8022B2BC: jal         0x800A3450
    // 0x8022B2C0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022B2C0: nop

    after_1:
    // 0x8022B2C4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022B2C8: sb          $v0, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = ctx->r2;
    // 0x8022B2CC: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022B2D0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B2D4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022B2D8: jal         0x800A3450
    // 0x8022B2DC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022B2DC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    after_2:
    // 0x8022B2E0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022B2E4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022B2E8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B2EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B2F0: lhu         $v0, 0x4254($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X4254);
    // 0x8022B2F4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B2F8: j           L_8022B328
    // 0x8022B2FC: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
        goto L_8022B328;
    // 0x8022B2FC: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
L_8022B300:
    // 0x8022B300: jal         0x800A3450
    // 0x8022B304: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022B304: nop

    after_3:
    // 0x8022B308: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022B30C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022B310: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022B314: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B318: lhu         $v1, 0x4254($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4254);
    // 0x8022B31C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B320: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B324: sh          $v1, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r3;
L_8022B328:
    // 0x8022B328: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022B32C: jal         0x8022AB18
    // 0x8022B330: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022AB18_ovl16(rdram, ctx);
        goto after_4;
    // 0x8022B330: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022B334: j           L_8022B398
    // 0x8022B338: nop

        goto L_8022B398;
    // 0x8022B338: nop

L_8022B33C:
    // 0x8022B33C: lh          $v0, 0x54($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X54);
    // 0x8022B340: beq         $v0, $zero, L_8022B368
    if (ctx->r2 == 0) {
        // 0x8022B344: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022B368;
    }
    // 0x8022B344: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B348: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022B34C: bne         $v0, $zero, L_8022B358
    if (ctx->r2 != 0) {
        // 0x8022B350: addiu       $v0, $v1, -0x20
        ctx->r2 = ADD32(ctx->r3, -0X20);
            goto L_8022B358;
    }
    // 0x8022B350: addiu       $v0, $v1, -0x20
    ctx->r2 = ADD32(ctx->r3, -0X20);
    // 0x8022B354: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
L_8022B358:
    // 0x8022B358: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8022B35C: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8022B360: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B364: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
L_8022B368:
    // 0x8022B368: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022B36C: lh          $v0, 0xA($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XA);
    // 0x8022B370: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022B374: beq         $v0, $zero, L_8022B384
    if (ctx->r2 == 0) {
        // 0x8022B378: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022B384;
    }
    // 0x8022B378: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022B37C: j           L_8022B388
    // 0x8022B380: addiu       $v0, $a0, -0x40
    ctx->r2 = ADD32(ctx->r4, -0X40);
        goto L_8022B388;
    // 0x8022B380: addiu       $v0, $a0, -0x40
    ctx->r2 = ADD32(ctx->r4, -0X40);
L_8022B384:
    // 0x8022B384: addiu       $v0, $a0, 0x40
    ctx->r2 = ADD32(ctx->r4, 0X40);
L_8022B388:
    // 0x8022B388: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022B38C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B390: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B394: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022B398:
    // 0x8022B398: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022B39C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022B3A0: jr          $ra
    // 0x8022B3A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B3A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225A9C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A9C: jr          $ra
    // 0x80225AA0: nop

    TRACE_RETURN()
    return;
    // 0x80225AA0: nop

;}
RECOMP_FUNC void func_80227DEC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227DEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227DF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227DF4: jal         0x8004F418
    // 0x80227DF8: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80227DF8: nop

    after_0:
    // 0x80227DFC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227E00: jr          $ra
    // 0x80227E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231180_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231180: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231184: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231188: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023118C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    // 0x80231190: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231194: jal         0x8006033C
    // 0x80231198: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80231198: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023119C: beq         $v0, $zero, L_8023120C
    if (ctx->r2 == 0) {
        // 0x802311A0: nop
    
            goto L_8023120C;
    }
    // 0x802311A0: nop

    // 0x802311A4: jal         0x8006033C
    // 0x802311A8: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802311A8: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_1:
    // 0x802311AC: bne         $v0, $zero, L_8023127C
    if (ctx->r2 != 0) {
        // 0x802311B0: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8023127C;
    }
    // 0x802311B0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802311B4: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x802311B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802311BC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802311C0: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x802311C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802311C8: jal         0x8002C678
    // 0x802311CC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_2;
    // 0x802311CC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_2:
    // 0x802311D0: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x802311D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802311D8: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x802311DC: jal         0x800319B4
    // 0x802311E0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x802311E0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_3:
    // 0x802311E4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802311E8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x802311EC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802311F0: jal         0x8006036C
    // 0x802311F4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x802311F4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_4:
    // 0x802311F8: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x802311FC: jal         0x8002A33C
    // 0x80231200: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80231200: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_5:
    // 0x80231204: j           L_8023127C
    // 0x80231208: nop

        goto L_8023127C;
    // 0x80231208: nop

L_8023120C:
    // 0x8023120C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80231210: jal         0x8003E6BC
    // 0x80231214: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_6;
    // 0x80231214: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_6:
    // 0x80231218: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x8023121C: beq         $v1, $v0, L_8023127C
    if (ctx->r3 == ctx->r2) {
        // 0x80231220: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8023127C;
    }
    // 0x80231220: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80231224: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80231228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023122C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80231230: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80231234: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231238: jal         0x8002C678
    // 0x8023123C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_7;
    // 0x8023123C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_7:
    // 0x80231240: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80231244: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231248: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x8023124C: jal         0x800319B4
    // 0x80231250: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_8;
    // 0x80231250: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_8:
    // 0x80231254: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80231258: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8023125C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231260: jal         0x8006036C
    // 0x80231264: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80231264: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_9:
    // 0x80231268: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x8023126C: jal         0x8002A33C
    // 0x80231270: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x80231270: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_10:
    // 0x80231274: jal         0x80060590
    // 0x80231278: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_80060590_3B990(rdram, ctx);
        goto after_11;
    // 0x80231278: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_11:
L_8023127C:
    // 0x8023127C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231280: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231284: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231288: jr          $ra
    // 0x8023128C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023128C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BB48_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BB48: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8022BB4C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8022BB50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BB54: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8022BB58: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x8022BB5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BB60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022BB64: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8022BB68: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022BB6C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022BB70: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x8022BB74: jal         0x800540D0
    // 0x8022BB78: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022BB78: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    after_0:
    // 0x8022BB7C: beql        $v0, $zero, L_8022BB84
    if (ctx->r2 == 0) {
        // 0x8022BB80: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8022BB84;
    }
    goto skip_0;
    // 0x8022BB80: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
L_8022BB84:
    // 0x8022BB84: lhu         $v0, 0xE0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE0);
    // 0x8022BB88: lh          $v1, 0xE2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE2);
    // 0x8022BB8C: lh          $a0, 0xE4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE4);
    // 0x8022BB90: addiu       $v0, $v0, 0x22
    ctx->r2 = ADD32(ctx->r2, 0X22);
    // 0x8022BB94: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022BB98: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022BB9C: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    // 0x8022BBA0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022BBA4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022BBA8: lw          $v0, 0x49D0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X49D0);
    // 0x8022BBAC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022BBB0: bgez        $v0, L_8022BBBC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BBB4: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_8022BBBC;
    }
    // 0x8022BBB4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8022BBB8: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
L_8022BBBC:
    // 0x8022BBBC: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022BBC0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022BBC4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022BBC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BBCC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BBD0: bltzl       $v0, L_8022BBEC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022BBD4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022BBEC;
    }
    goto skip_1;
    // 0x8022BBD4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x8022BBD8: slti        $v0, $v0, 0xA1
    ctx->r2 = SIGNED(ctx->r2) < 0XA1 ? 1 : 0;
    // 0x8022BBDC: beq         $v0, $zero, L_8022BBF8
    if (ctx->r2 == 0) {
        // 0x8022BBE0: nop
    
            goto L_8022BBF8;
    }
    // 0x8022BBE0: nop

    // 0x8022BBE4: j           L_8022BC0C
    // 0x8022BBE8: nop

        goto L_8022BC0C;
    // 0x8022BBE8: nop

L_8022BBEC:
    // 0x8022BBEC: slti        $v0, $v0, 0xA1
    ctx->r2 = SIGNED(ctx->r2) < 0XA1 ? 1 : 0;
    // 0x8022BBF0: bne         $v0, $zero, L_8022BC0C
    if (ctx->r2 != 0) {
        // 0x8022BBF4: nop
    
            goto L_8022BC0C;
    }
    // 0x8022BBF4: nop

L_8022BBF8:
    // 0x8022BBF8: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8022BBFC: bgtz        $v0, L_8022BC08
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022BC00: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_8022BC08;
    }
    // 0x8022BC00: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022BC04: addiu       $v0, $zero, -0xA0
    ctx->r2 = ADD32(0, -0XA0);
L_8022BC08:
    // 0x8022BC08: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022BC0C:
    // 0x8022BC0C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022BC10: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x8022BC14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BC18: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022BC1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BC20: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x8022BC24: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    // 0x8022BC28: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022BC2C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022BC30: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022BC34: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022BC38: beq         $v0, $zero, L_8022BC48
    if (ctx->r2 == 0) {
        // 0x8022BC3C: nop
    
            goto L_8022BC48;
    }
    // 0x8022BC3C: nop

    // 0x8022BC40: sh          $a0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r4;
    // 0x8022BC44: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_8022BC48:
    // 0x8022BC48: lh          $v0, 0x12($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X12);
    // 0x8022BC4C: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x8022BC50: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BC54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BC58: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022BC5C: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    // 0x8022BC60: jal         0x800324B4
    // 0x8022BC64: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8022BC64: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022BC68: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022BC6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BC70: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022BC74: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BC78: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8022BC7C: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BC80: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022BC84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BC88: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022BC8C: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
    // 0x8022BC90: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8022BC94: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8022BC98: sh          $a0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r4;
    // 0x8022BC9C: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8022BCA0: lh          $v0, 0x20($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X20);
    // 0x8022BCA4: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8022BCA8: lh          $v0, 0x24($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X24);
    // 0x8022BCAC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x8022BCB0: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x8022BCB4: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x8022BCB8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8022BCBC: jal         0x8004F820
    // 0x8022BCC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022BCC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x8022BCC4: lhu         $a0, 0x66($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X66);
    // 0x8022BCC8: lhu         $v1, 0x44($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X44);
    // 0x8022BCCC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022BCD0: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8022BCD4: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x8022BCD8: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022BCDC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022BCE0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022BCE4: slti        $v1, $v1, 0xA1
    ctx->r3 = SIGNED(ctx->r3) < 0XA1 ? 1 : 0;
    // 0x8022BCE8: bne         $v1, $zero, L_8022BCF8
    if (ctx->r3 != 0) {
        // 0x8022BCEC: sh          $a0, 0x66($s0)
        MEM_H(0X66, ctx->r16) = ctx->r4;
            goto L_8022BCF8;
    }
    // 0x8022BCEC: sh          $a0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r4;
    // 0x8022BCF0: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022BCF4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022BCF8:
    // 0x8022BCF8: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x8022BCFC: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022BD00: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022BD04: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BD08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022BD0C: jal         0x8004DBA0
    // 0x8022BD10: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022BD10: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x8022BD14: jal         0x80040F30
    // 0x8022BD18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x8022BD18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022BD1C: bne         $v0, $zero, L_8022BDF8
    if (ctx->r2 != 0) {
        // 0x8022BD20: addiu       $a0, $s0, 0x66
        ctx->r4 = ADD32(ctx->r16, 0X66);
            goto L_8022BDF8;
    }
    // 0x8022BD20: addiu       $a0, $s0, 0x66
    ctx->r4 = ADD32(ctx->r16, 0X66);
    // 0x8022BD24: jal         0x8003E934
    // 0x8022BD28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_5;
    // 0x8022BD28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022BD2C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022BD30: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8022BD34: lh          $v1, 0x12($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X12);
    // 0x8022BD38: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022BD3C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BD40: beq         $v0, $v1, L_8022BE00
    if (ctx->r2 == ctx->r3) {
        // 0x8022BD44: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022BE00;
    }
    // 0x8022BD44: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022BD48: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    // 0x8022BD4C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BD50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BD54: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BD58: bltzl       $v0, L_8022BD74
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022BD5C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022BD74;
    }
    goto skip_2;
    // 0x8022BD5C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
    // 0x8022BD60: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8022BD64: beq         $v0, $zero, L_8022BD84
    if (ctx->r2 == 0) {
        // 0x8022BD68: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022BD84;
    }
    // 0x8022BD68: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022BD6C: j           L_8022BDA8
    // 0x8022BD70: sh          $a2, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r6;
        goto L_8022BDA8;
    // 0x8022BD70: sh          $a2, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r6;
L_8022BD74:
    // 0x8022BD74: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8022BD78: bnel        $v0, $zero, L_8022BDA8
    if (ctx->r2 != 0) {
        // 0x8022BD7C: sh          $a2, 0x12($s1)
        MEM_H(0X12, ctx->r17) = ctx->r6;
            goto L_8022BDA8;
    }
    goto skip_3;
    // 0x8022BD7C: sh          $a2, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r6;
    skip_3:
    // 0x8022BD80: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022BD84:
    // 0x8022BD84: bltz        $v0, L_8022BD9C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022BD88: nop
    
            goto L_8022BD9C;
    }
    // 0x8022BD88: nop

    // 0x8022BD8C: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8022BD90: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022BD94: j           L_8022BDA8
    // 0x8022BD98: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
        goto L_8022BDA8;
    // 0x8022BD98: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_8022BD9C:
    // 0x8022BD9C: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x8022BDA0: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x8022BDA4: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_8022BDA8:
    // 0x8022BDA8: lh          $v0, 0x12($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X12);
    // 0x8022BDAC: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x8022BDB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BDB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BDB8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022BDBC: jal         0x800324B4
    // 0x8022BDC0: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    func_800324B4_D8B4(rdram, ctx);
        goto after_6;
    // 0x8022BDC0: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    after_6:
    // 0x8022BDC4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022BDC8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BDCC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022BDD0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BDD4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022BDD8: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    // 0x8022BDDC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BDE0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022BDE4: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8022BDE8: jal         0x8004DD04
    // 0x8022BDEC: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_7;
    // 0x8022BDEC: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    after_7:
    // 0x8022BDF0: j           L_8022BE00
    // 0x8022BDF4: nop

        goto L_8022BE00;
    // 0x8022BDF4: nop

L_8022BDF8:
    // 0x8022BDF8: jal         0x800409D0
    // 0x8022BDFC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_800409D0_1BDD0(rdram, ctx);
        goto after_8;
    // 0x8022BDFC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_8:
L_8022BE00:
    // 0x8022BE00: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x8022BE04: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8022BE08: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8022BE0C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8022BE10: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8022BE14: jr          $ra
    // 0x8022BE18: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8022BE18: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8022E170_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E174: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E178: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022E17C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E180: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E184: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E188: lw          $v0, 0x4400($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4400);
    // 0x8022E18C: jalr        $v0
    // 0x8022E190: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E190: nop

    after_0:
    // 0x8022E194: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E198: jr          $ra
    // 0x8022E19C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E19C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FCBC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FCBC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022FCC0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022FCC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FCC8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022FCCC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022FCD0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FCD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FCD8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FCDC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FCE0: lw          $v0, 0x44BC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X44BC);
    // 0x8022FCE4: jalr        $v0
    // 0x8022FCE8: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FCE8: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    after_0:
    // 0x8022FCEC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022FCF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022FCF4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022FCF8: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x8022FCFC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022FD00: jal         0x80031600
    // 0x8022FD04: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x8022FD04: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_1:
    // 0x8022FD08: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022FD0C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022FD10: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022FD14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022FD18: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022FD1C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022FD20: jal         0x80031DA8
    // 0x8022FD24: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8022FD24: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x8022FD28: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022FD2C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022FD30: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022FD34: jr          $ra
    // 0x8022FD38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022FD38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022E3B0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E3B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E3B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E3B8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022E3BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E3C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E3C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E3C8: lw          $v0, 0x4434($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4434);
    // 0x8022E3CC: jalr        $v0
    // 0x8022E3D0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E3D0: nop

    after_0:
    // 0x8022E3D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E3D8: jr          $ra
    // 0x8022E3DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E3DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229554_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229554: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229558: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022955C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229560: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80229564: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229568: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022956C: lhu         $v0, 0x1DA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1DA);
    // 0x80229570: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80229574: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229578: beq         $v0, $zero, L_802295A4
    if (ctx->r2 == 0) {
        // 0x8022957C: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_802295A4;
    }
    // 0x8022957C: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x80229580: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80229584: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229588: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022958C: jal         0x80050294
    // 0x80229590: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80229590: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229594: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229598: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022959C: j           L_802295CC
    // 0x802295A0: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
        goto L_802295CC;
    // 0x802295A0: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
L_802295A4:
    // 0x802295A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802295A8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802295AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802295B0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x802295B4: jal         0x80050294
    // 0x802295B8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802295B8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x802295BC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802295C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802295C4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x802295C8: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
L_802295CC:
    // 0x802295CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802295D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802295D4: sb          $v0, 0x3F($s2)
    MEM_B(0X3F, ctx->r18) = ctx->r2;
    // 0x802295D8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802295DC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802295E0: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    // 0x802295E4: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x802295E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802295EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802295F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802295F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802295F8: jr          $ra
    // 0x802295FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802295FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802298F0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802298F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802298F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802298F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802298FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229900: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229904: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80229908: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022990C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229910: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229914: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229918: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022991C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80229920: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80229924: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229928: jal         0x800A3450
    // 0x8022992C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022992C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80229930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229934: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229938: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022993C: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80229940: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229944: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80229948: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022994C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80229950: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80229954: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80229958: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8022995C: jal         0x8004D5D4
    // 0x80229960: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80229960: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    after_1:
    // 0x80229964: addiu       $a0, $s0, 0x348
    ctx->r4 = ADD32(ctx->r16, 0X348);
    // 0x80229968: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8022996C: jal         0x800540BC
    // 0x80229970: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x80229970: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    after_2:
    // 0x80229974: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229978: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022997C: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80229980: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80229984: addiu       $v1, $v1, 0x417C
    ctx->r3 = ADD32(ctx->r3, 0X417C);
    // 0x80229988: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022998C: sw          $v1, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r3;
    // 0x80229990: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229994: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229998: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022999C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802299A0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802299A4: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x802299A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802299AC: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x802299B0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802299B4: lui         $v0, 0xFE00
    ctx->r2 = S32(0XFE00 << 16);
    // 0x802299B8: sb          $s1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r17;
    // 0x802299BC: sw          $zero, 0x358($s0)
    MEM_W(0X358, ctx->r16) = 0;
    // 0x802299C0: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x802299C4: sw          $zero, 0x368($s0)
    MEM_W(0X368, ctx->r16) = 0;
    // 0x802299C8: sw          $zero, 0x36C($s0)
    MEM_W(0X36C, ctx->r16) = 0;
    // 0x802299CC: sw          $zero, 0x370($s0)
    MEM_W(0X370, ctx->r16) = 0;
    // 0x802299D0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802299D4: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x802299D8: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x802299DC: jal         0x80050294
    // 0x802299E0: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x802299E0: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    after_3:
    // 0x802299E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802299E8: jal         0x8022A1C0
    // 0x802299EC: sb          $s1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r17;
    func_8022A1C0_ovl16(rdram, ctx);
        goto after_4;
    // 0x802299EC: sb          $s1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r17;
    after_4:
    // 0x802299F0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802299F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802299F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802299FC: jr          $ra
    // 0x80229A00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229A00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AA70_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AA74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AA78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AA7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AA80: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AA84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AA88: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022AA8C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022AA90: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022AA94: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022AA98: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022AA9C: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8022AAA0: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8022AAA4: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8022AAA8: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022AAAC: jal         0x8004D5D4
    // 0x8022AAB0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022AAB0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022AAB4: addiu       $a0, $s0, 0xDC
    ctx->r4 = ADD32(ctx->r16, 0XDC);
    // 0x8022AAB8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8022AABC: jal         0x800540BC
    // 0x8022AAC0: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022AAC0: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    after_1:
    // 0x8022AAC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AAC8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022AACC: addiu       $v0, $v0, 0x41EC
    ctx->r2 = ADD32(ctx->r2, 0X41EC);
    // 0x8022AAD0: sw          $v0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r2;
    // 0x8022AAD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AAD8: sb          $zero, 0x74($a0)
    MEM_B(0X74, ctx->r4) = 0;
    // 0x8022AADC: sb          $zero, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = 0;
    // 0x8022AAE0: sw          $zero, 0xEC($a0)
    MEM_W(0XEC, ctx->r4) = 0;
    // 0x8022AAE4: sw          $zero, 0xF0($a0)
    MEM_W(0XF0, ctx->r4) = 0;
    // 0x8022AAE8: sw          $zero, 0xFC($a0)
    MEM_W(0XFC, ctx->r4) = 0;
    // 0x8022AAEC: sw          $zero, 0x100($a0)
    MEM_W(0X100, ctx->r4) = 0;
    // 0x8022AAF0: sh          $zero, 0x10C($a0)
    MEM_H(0X10C, ctx->r4) = 0;
    // 0x8022AAF4: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x8022AAF8: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022AAFC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8022AB00: jal         0x8022AC84
    // 0x8022AB04: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    func_8022AC84_ovl16(rdram, ctx);
        goto after_2;
    // 0x8022AB04: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    after_2:
    // 0x8022AB08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AB0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AB10: jr          $ra
    // 0x8022AB14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AB14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E864_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E864: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022E868: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022E86C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E870: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E874: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E878: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E87C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022E880: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022E884: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E888: addiu       $s2, $s0, 0x2C
    ctx->r18 = ADD32(ctx->r16, 0X2C);
    // 0x8022E88C: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022E890: bne         $v1, $v0, L_8022E8A8
    if (ctx->r3 != ctx->r2) {
        // 0x8022E894: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8022E8A8;
    }
    // 0x8022E894: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022E898: jal         0x8006033C
    // 0x8022E89C: addiu       $a0, $zero, 0x64B
    ctx->r4 = ADD32(0, 0X64B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022E89C: addiu       $a0, $zero, 0x64B
    ctx->r4 = ADD32(0, 0X64B);
    after_0:
    // 0x8022E8A0: bne         $v0, $zero, L_8022EB74
    if (ctx->r2 != 0) {
        // 0x8022E8A4: nop
    
            goto L_8022EB74;
    }
    // 0x8022E8A4: nop

L_8022E8A8:
    // 0x8022E8A8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E8AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E8B0: beq         $v1, $v0, L_8022E8C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022E8B4: nop
    
            goto L_8022E8C8;
    }
    // 0x8022E8B4: nop

    // 0x8022E8B8: jal         0x8006033C
    // 0x8022E8BC: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022E8BC: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_1:
    // 0x8022E8C0: bne         $v0, $zero, L_8022E8D0
    if (ctx->r2 != 0) {
        // 0x8022E8C4: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8022E8D0;
    }
    // 0x8022E8C4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8022E8C8:
    // 0x8022E8C8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022E8CC: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
L_8022E8D0:
    // 0x8022E8D0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E8D4: bne         $v0, $zero, L_8022E998
    if (ctx->r2 != 0) {
        // 0x8022E8D8: nop
    
            goto L_8022E998;
    }
    // 0x8022E8D8: nop

    // 0x8022E8DC: lh          $v1, 0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X6);
    // 0x8022E8E0: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x8022E8E4: addiu       $v0, $v1, 0x620
    ctx->r2 = ADD32(ctx->r3, 0X620);
    // 0x8022E8E8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E8EC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022E8F0: beq         $v0, $zero, L_8022EB74
    if (ctx->r2 == 0) {
        // 0x8022E8F4: addiu       $v0, $v1, 0x9E0
        ctx->r2 = ADD32(ctx->r3, 0X9E0);
            goto L_8022EB74;
    }
    // 0x8022E8F4: addiu       $v0, $v1, 0x9E0
    ctx->r2 = ADD32(ctx->r3, 0X9E0);
    // 0x8022E8F8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E8FC: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E900: beq         $v0, $zero, L_8022EB74
    if (ctx->r2 == 0) {
        // 0x8022E904: nop
    
            goto L_8022EB74;
    }
    // 0x8022E904: nop

    // 0x8022E908: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x8022E90C: bne         $v0, $s0, L_8022EB74
    if (ctx->r2 != ctx->r16) {
        // 0x8022E910: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EB74;
    }
    // 0x8022E910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E914: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E918: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022E91C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022E920: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022E924: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022E928: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022E92C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8022E930: xori        $v0, $v1, 0xE
    ctx->r2 = ctx->r3 ^ 0XE;
    // 0x8022E934: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022E938: xori        $v1, $v1, 0x14
    ctx->r3 = ctx->r3 ^ 0X14;
    // 0x8022E93C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022E940: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022E944: beq         $v0, $zero, L_8022E95C
    if (ctx->r2 == 0) {
        // 0x8022E948: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022E95C;
    }
    // 0x8022E948: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022E94C: jal         0x800616FC
    // 0x8022E950: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x8022E950: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_2:
    // 0x8022E954: j           L_8022EB74
    // 0x8022E958: nop

        goto L_8022EB74;
    // 0x8022E958: nop

L_8022E95C:
    // 0x8022E95C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022E960: bne         $v0, $zero, L_8022E978
    if (ctx->r2 != 0) {
        // 0x8022E964: nop
    
            goto L_8022E978;
    }
    // 0x8022E964: nop

    // 0x8022E968: jal         0x800616FC
    // 0x8022E96C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8022E96C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_3:
    // 0x8022E970: j           L_8022EB74
    // 0x8022E974: nop

        goto L_8022EB74;
    // 0x8022E974: nop

L_8022E978:
    // 0x8022E978: jal         0x8006033C
    // 0x8022E97C: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022E97C: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_4:
    // 0x8022E980: bne         $v0, $zero, L_8022EB74
    if (ctx->r2 != 0) {
        // 0x8022E984: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022EB74;
    }
    // 0x8022E984: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022E988: jal         0x800616FC
    // 0x8022E98C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8022E98C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_5:
    // 0x8022E990: j           L_8022EB74
    // 0x8022E994: nop

        goto L_8022EB74;
    // 0x8022E994: nop

L_8022E998:
    // 0x8022E998: bltz        $v1, L_8022EB74
    if (SIGNED(ctx->r3) < 0) {
        // 0x8022E99C: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8022EB74;
    }
    // 0x8022E99C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8022E9A0: bne         $v0, $zero, L_8022EB64
    if (ctx->r2 != 0) {
        // 0x8022E9A4: nop
    
            goto L_8022EB64;
    }
    // 0x8022E9A4: nop

    // 0x8022E9A8: jal         0x8006FF84
    // 0x8022E9AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_6;
    // 0x8022E9AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8022E9B0: beq         $v0, $zero, L_8022EB74
    if (ctx->r2 == 0) {
        // 0x8022E9B4: nop
    
            goto L_8022EB74;
    }
    // 0x8022E9B4: nop

    // 0x8022E9B8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8022E9BC: addiu       $a0, $a0, -0x3BC8
    ctx->r4 = ADD32(ctx->r4, -0X3BC8);
    // 0x8022E9C0: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8022E9C4: xori        $v1, $v0, 0xE
    ctx->r3 = ctx->r2 ^ 0XE;
    // 0x8022E9C8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022E9CC: xori        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 ^ 0X14;
    // 0x8022E9D0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022E9D4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022E9D8: bnel        $v1, $zero, L_8022E9F8
    if (ctx->r3 != 0) {
        // 0x8022E9DC: addiu       $a0, $zero, 0x178
        ctx->r4 = ADD32(0, 0X178);
            goto L_8022E9F8;
    }
    goto skip_0;
    // 0x8022E9DC: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    skip_0:
    // 0x8022E9E0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8022E9E4: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022E9E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E9EC: lui         $v1, 0x1300
    ctx->r3 = S32(0X1300 << 16);
    // 0x8022E9F0: bne         $v0, $v1, L_8022EA24
    if (ctx->r2 != ctx->r3) {
        // 0x8022E9F4: addiu       $a0, $zero, 0x178
        ctx->r4 = ADD32(0, 0X178);
            goto L_8022EA24;
    }
    // 0x8022E9F4: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
L_8022E9F8:
    // 0x8022E9F8: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022E9FC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022EA00: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022EA04: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022EA08: addiu       $v1, $zero, -0x61
    ctx->r3 = ADD32(0, -0X61);
    // 0x8022EA0C: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022EA10: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022EA14: jal         0x8002A33C
    // 0x8022EA18: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022EA18: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    after_7:
    // 0x8022EA1C: j           L_8022EB74
    // 0x8022EA20: nop

        goto L_8022EB74;
    // 0x8022EA20: nop

L_8022EA24:
    // 0x8022EA24: jal         0x8006033C
    // 0x8022EA28: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x8022EA28: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    after_8:
    // 0x8022EA2C: beq         $v0, $zero, L_8022EB64
    if (ctx->r2 == 0) {
        // 0x8022EA30: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8022EB64;
    }
    // 0x8022EA30: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022EA34: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022EA38: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022EA3C: bne         $v0, $v1, L_8022EB44
    if (ctx->r2 != ctx->r3) {
        // 0x8022EA40: addiu       $a0, $zero, 0x178
        ctx->r4 = ADD32(0, 0X178);
            goto L_8022EB44;
    }
    // 0x8022EA40: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    // 0x8022EA44: jal         0x8006FF84
    // 0x8022EA48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_9;
    // 0x8022EA48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8022EA4C: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022EA50: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022EA54: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x8022EA58: lhu         $a3, 0x56($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X56);
    // 0x8022EA5C: sh          $v1, 0x43A($s1)
    MEM_H(0X43A, ctx->r17) = ctx->r3;
    // 0x8022EA60: lbu         $v1, 0xBD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022EA64: sh          $v0, 0x438($s1)
    MEM_H(0X438, ctx->r17) = ctx->r2;
    // 0x8022EA68: sh          $a0, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = ctx->r4;
    // 0x8022EA6C: lh          $a0, 0x438($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X438);
    // 0x8022EA70: lh          $a1, 0x43A($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X43A);
    // 0x8022EA74: lh          $a2, 0x43C($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X43C);
    // 0x8022EA78: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x8022EA7C: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x8022EA80: sb          $zero, 0x448($s1)
    MEM_B(0X448, ctx->r17) = 0;
    // 0x8022EA84: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022EA88: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022EA8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EA90: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022EA94: sh          $a3, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r7;
    // 0x8022EA98: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8022EA9C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022EAA0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022EAA4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022EAA8: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    // 0x8022EAAC: sw          $a0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r4;
    // 0x8022EAB0: sw          $a1, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r5;
    // 0x8022EAB4: sw          $a2, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r6;
    // 0x8022EAB8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022EABC: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022EAC0: beq         $v0, $zero, L_8022EB30
    if (ctx->r2 == 0) {
        // 0x8022EAC4: addiu       $a0, $zero, 0x176
        ctx->r4 = ADD32(0, 0X176);
            goto L_8022EB30;
    }
    // 0x8022EAC4: addiu       $a0, $zero, 0x176
    ctx->r4 = ADD32(0, 0X176);
    // 0x8022EAC8: jal         0x8006033C
    // 0x8022EACC: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x8022EACC: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    after_10:
    // 0x8022EAD0: beq         $v0, $zero, L_8022EB00
    if (ctx->r2 == 0) {
        // 0x8022EAD4: addiu       $a0, $zero, 0x176
        ctx->r4 = ADD32(0, 0X176);
            goto L_8022EB00;
    }
    // 0x8022EAD4: addiu       $a0, $zero, 0x176
    ctx->r4 = ADD32(0, 0X176);
    // 0x8022EAD8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022EADC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022EAE0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022EAE4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EAE8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022EAEC: addiu       $v0, $zero, 0x7FF
    ctx->r2 = ADD32(0, 0X7FF);
    // 0x8022EAF0: jal         0x8002A33C
    // 0x8022EAF4: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_11;
    // 0x8022EAF4: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    after_11:
    // 0x8022EAF8: j           L_8022EB74
    // 0x8022EAFC: nop

        goto L_8022EB74;
    // 0x8022EAFC: nop

L_8022EB00:
    // 0x8022EB00: addiu       $a0, $zero, 0x6B
    ctx->r4 = ADD32(0, 0X6B);
    // 0x8022EB04: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022EB08: jal         0x8006036C
    // 0x8022EB0C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_12;
    // 0x8022EB0C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    after_12:
    // 0x8022EB10: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022EB14: jal         0x800616FC
    // 0x8022EB18: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_13;
    // 0x8022EB18: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_13:
    // 0x8022EB1C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022EB20: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022EB24: addiu       $v0, $zero, 0x7FF
    ctx->r2 = ADD32(0, 0X7FF);
    // 0x8022EB28: j           L_8022EB74
    // 0x8022EB2C: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
        goto L_8022EB74;
    // 0x8022EB2C: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
L_8022EB30:
    // 0x8022EB30: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022EB34: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022EB38: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022EB3C: j           L_8022EB54
    // 0x8022EB40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022EB54;
    // 0x8022EB40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022EB44:
    // 0x8022EB44: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022EB48: addiu       $v0, $zero, -0xC
    ctx->r2 = ADD32(0, -0XC);
    // 0x8022EB4C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022EB50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022EB54:
    // 0x8022EB54: jal         0x8002A33C
    // 0x8022EB58: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_14;
    // 0x8022EB58: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_14:
    // 0x8022EB5C: j           L_8022EB74
    // 0x8022EB60: nop

        goto L_8022EB74;
    // 0x8022EB60: nop

L_8022EB64:
    // 0x8022EB64: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022EB68: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022EB6C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8022EB70: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022EB74:
    // 0x8022EB74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EB78: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022EB7C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EB80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EB84: jr          $ra
    // 0x8022EB88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EB88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A468_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A468: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022A46C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022A470: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A474: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022A478: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A47C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A480: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022A484: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022A488: jal         0x8009A3B4
    // 0x8022A48C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022A48C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022A490: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A494: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022A498: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A49C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A4A0: addiu       $s2, $zero, 0x400
    ctx->r18 = ADD32(0, 0X400);
    // 0x8022A4A4: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x8022A4A8: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x8022A4AC: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022A4B0: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022A4B4: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022A4B8: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022A4BC: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022A4C0: sh          $s2, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r18;
    // 0x8022A4C4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022A4C8: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x8022A4CC: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8022A4D0: andi        $v0, $v0, 0xE00
    ctx->r2 = ctx->r2 & 0XE00;
    // 0x8022A4D4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8022A4D8: jal         0x8004D5D4
    // 0x8022A4DC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022A4DC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022A4E0: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022A4E4: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8022A4E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022A4EC: sh          $zero, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = 0;
    // 0x8022A4F0: jal         0x80031600
    // 0x8022A4F4: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x8022A4F4: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    after_2:
    // 0x8022A4F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A4FC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022A500: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022A504: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022A508: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022A50C: jal         0x80031DA8
    // 0x8022A510: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x8022A510: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022A514: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022A518: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022A51C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022A520: addiu       $v0, $v0, 0x41D4
    ctx->r2 = ADD32(ctx->r2, 0X41D4);
    // 0x8022A524: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022A528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A52C: sh          $s2, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r18;
    // 0x8022A530: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022A534: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A538: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A53C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022A540: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x8022A544: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A548: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022A54C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022A550: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022A554: jr          $ra
    // 0x8022A558: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022A558: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80228724_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228724: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228728: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022872C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228730: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228734: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x80228738: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022873C: beq         $v0, $zero, L_80228800
    if (ctx->r2 == 0) {
        // 0x80228740: addiu       $v1, $zero, 0x50
        ctx->r3 = ADD32(0, 0X50);
            goto L_80228800;
    }
    // 0x80228740: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x80228744: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228748: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022874C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80228750: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80228754: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80228758: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022875C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80228760: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228764: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x80228768: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022876C: bne         $v0, $zero, L_80228778
    if (ctx->r2 != 0) {
        // 0x80228770: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_80228778;
    }
    // 0x80228770: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80228774: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80228778:
    // 0x80228778: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022877C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228784: jal         0x80050294
    // 0x80228788: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228788: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022878C: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80228790: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x80228794: bne         $a0, $v0, L_802287DC
    if (ctx->r4 != ctx->r2) {
        // 0x80228798: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_802287DC;
    }
    // 0x80228798: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8022879C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802287A0: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x802287A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802287A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802287AC: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x802287B0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x802287B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802287B8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802287BC: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x802287C0: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x802287C4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802287C8: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x802287CC: jal         0x80050294
    // 0x802287D0: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802287D0: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_1:
    // 0x802287D4: j           L_802287F0
    // 0x802287D8: nop

        goto L_802287F0;
    // 0x802287D8: nop

L_802287DC:
    // 0x802287DC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802287E0: bne         $v0, $zero, L_802287EC
    if (ctx->r2 != 0) {
        // 0x802287E4: addiu       $v0, $v1, -0x80
        ctx->r2 = ADD32(ctx->r3, -0X80);
            goto L_802287EC;
    }
    // 0x802287E4: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x802287E8: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_802287EC:
    // 0x802287EC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_802287F0:
    // 0x802287F0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802287F4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802287F8: j           L_8022885C
    // 0x802287FC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022885C;
    // 0x802287FC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228800:
    // 0x80228800: lb          $v0, 0x385($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X385);
    // 0x80228804: beq         $v0, $zero, L_8022882C
    if (ctx->r2 == 0) {
        // 0x80228808: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022882C;
    }
    // 0x80228808: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022880C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228810: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228814: jal         0x8004DA90
    // 0x80228818: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80228818: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022881C: lbu         $v0, 0x385($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X385);
    // 0x80228820: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228824: j           L_8022885C
    // 0x80228828: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
        goto L_8022885C;
    // 0x80228828: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
L_8022882C:
    // 0x8022882C: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x80228830: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228834: beq         $v1, $v0, L_80228850
    if (ctx->r3 == ctx->r2) {
        // 0x80228838: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80228850;
    }
    // 0x80228838: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022883C: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80228840: jal         0x8004DA90
    // 0x80228844: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80228844: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80228848: j           L_8022885C
    // 0x8022884C: nop

        goto L_8022885C;
    // 0x8022884C: nop

L_80228850:
    // 0x80228850: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80228854: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80228858: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022885C:
    // 0x8022885C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228860: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228864: jr          $ra
    // 0x80228868: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228868: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802306E0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802306E0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802306E4: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802306E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802306EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802306F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802306F4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x802306F8: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x802306FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230700: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80230704: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80230708: addiu       $s4, $s0, 0x2C
    ctx->r20 = ADD32(ctx->r16, 0X2C);
    // 0x8023070C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80230710: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80230714: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80230718: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023071C: bne         $v1, $v0, L_8023074C
    if (ctx->r3 != ctx->r2) {
        // 0x80230720: sw          $s2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r18;
            goto L_8023074C;
    }
    // 0x80230720: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80230724: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80230728: addiu       $s2, $zero, 0x609
    ctx->r18 = ADD32(0, 0X609);
    // 0x8023072C: addiu       $s3, $zero, 0x60A
    ctx->r19 = ADD32(0, 0X60A);
    // 0x80230730: addiu       $s5, $zero, 0x60B
    ctx->r21 = ADD32(0, 0X60B);
    // 0x80230734: addiu       $v0, $zero, 0x52E
    ctx->r2 = ADD32(0, 0X52E);
    // 0x80230738: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x8023073C: addiu       $v0, $zero, 0x52F
    ctx->r2 = ADD32(0, 0X52F);
    // 0x80230740: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x80230744: j           L_802307A0
    // 0x80230748: addiu       $v0, $zero, 0x530
    ctx->r2 = ADD32(0, 0X530);
        goto L_802307A0;
    // 0x80230748: addiu       $v0, $zero, 0x530
    ctx->r2 = ADD32(0, 0X530);
L_8023074C:
    // 0x8023074C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80230750: bne         $v1, $v0, L_80230780
    if (ctx->r3 != ctx->r2) {
        // 0x80230754: addiu       $a0, $zero, 0x44
        ctx->r4 = ADD32(0, 0X44);
            goto L_80230780;
    }
    // 0x80230754: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x80230758: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x8023075C: addiu       $s2, $zero, 0x606
    ctx->r18 = ADD32(0, 0X606);
    // 0x80230760: addiu       $s3, $zero, 0x607
    ctx->r19 = ADD32(0, 0X607);
    // 0x80230764: addiu       $s5, $zero, 0x608
    ctx->r21 = ADD32(0, 0X608);
    // 0x80230768: addiu       $v0, $zero, 0x531
    ctx->r2 = ADD32(0, 0X531);
    // 0x8023076C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x80230770: addiu       $v0, $zero, 0x532
    ctx->r2 = ADD32(0, 0X532);
    // 0x80230774: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x80230778: j           L_802307A0
    // 0x8023077C: addiu       $v0, $zero, 0x533
    ctx->r2 = ADD32(0, 0X533);
        goto L_802307A0;
    // 0x8023077C: addiu       $v0, $zero, 0x533
    ctx->r2 = ADD32(0, 0X533);
L_80230780:
    // 0x80230780: addiu       $s2, $zero, 0x63E
    ctx->r18 = ADD32(0, 0X63E);
    // 0x80230784: addiu       $s3, $zero, 0x63F
    ctx->r19 = ADD32(0, 0X63F);
    // 0x80230788: addiu       $s5, $zero, 0x640
    ctx->r21 = ADD32(0, 0X640);
    // 0x8023078C: addiu       $v0, $zero, 0x534
    ctx->r2 = ADD32(0, 0X534);
    // 0x80230790: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x80230794: addiu       $v0, $zero, 0x535
    ctx->r2 = ADD32(0, 0X535);
    // 0x80230798: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x8023079C: addiu       $v0, $zero, 0x536
    ctx->r2 = ADD32(0, 0X536);
L_802307A0:
    // 0x802307A0: jal         0x8006033C
    // 0x802307A4: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802307A4: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    after_0:
    // 0x802307A8: bne         $v0, $zero, L_80230938
    if (ctx->r2 != 0) {
        // 0x802307AC: nop
    
            goto L_80230938;
    }
    // 0x802307AC: nop

    // 0x802307B0: jal         0x8006033C
    // 0x802307B4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802307B4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    after_1:
    // 0x802307B8: bnel        $v0, $zero, L_802307C0
    if (ctx->r2 != 0) {
        // 0x802307BC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802307C0;
    }
    goto skip_0;
    // 0x802307BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
L_802307C0:
    // 0x802307C0: lw          $a0, 0x4($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X4);
    // 0x802307C4: jal         0x8006033C
    // 0x802307C8: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802307C8: nop

    after_2:
    // 0x802307CC: bnel        $v0, $zero, L_802307D4
    if (ctx->r2 != 0) {
        // 0x802307D0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802307D4;
    }
    goto skip_1;
    // 0x802307D0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
L_802307D4:
    // 0x802307D4: lw          $a0, 0x8($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X8);
    // 0x802307D8: jal         0x8006033C
    // 0x802307DC: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x802307DC: nop

    after_3:
    // 0x802307E0: bnel        $v0, $zero, L_802307E8
    if (ctx->r2 != 0) {
        // 0x802307E4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802307E8;
    }
    goto skip_2;
    // 0x802307E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
L_802307E8:
    // 0x802307E8: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x802307EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802307F0: bne         $v1, $v0, L_8023085C
    if (ctx->r3 != ctx->r2) {
        // 0x802307F4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023085C;
    }
    // 0x802307F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802307F8: jal         0x8006036C
    // 0x802307FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x802307FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x80230800: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80230804: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80230808: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8023080C: bne         $v1, $v0, L_802308A4
    if (ctx->r3 != ctx->r2) {
        // 0x80230810: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_802308A4;
    }
    // 0x80230810: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80230814: jal         0x8006033C
    // 0x80230818: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80230818: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    after_5:
    // 0x8023081C: bne         $v0, $zero, L_80230898
    if (ctx->r2 != 0) {
        // 0x80230820: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_80230898;
    }
    // 0x80230820: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80230824: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230828: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023082C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230830: bne         $v0, $zero, L_80230898
    if (ctx->r2 != 0) {
        // 0x80230834: nop
    
            goto L_80230898;
    }
    // 0x80230834: nop

    // 0x80230838: jal         0x8006036C
    // 0x8023083C: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x8023083C: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    after_6:
    // 0x80230840: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80230844: jal         0x800616FC
    // 0x80230848: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_7;
    // 0x80230848: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_7:
    // 0x8023084C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230850: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230854: j           L_80230898
    // 0x80230858: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80230898;
    // 0x80230858: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023085C:
    // 0x8023085C: bne         $v1, $v0, L_80230874
    if (ctx->r3 != ctx->r2) {
        // 0x80230860: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80230874;
    }
    // 0x80230860: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230864: jal         0x8006036C
    // 0x80230868: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x80230868: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x8023086C: j           L_80230890
    // 0x80230870: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
        goto L_80230890;
    // 0x80230870: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_80230874:
    // 0x80230874: bne         $v1, $v0, L_80230898
    if (ctx->r3 != ctx->r2) {
        // 0x80230878: nop
    
            goto L_80230898;
    }
    // 0x80230878: nop

    // 0x8023087C: jal         0x8006036C
    // 0x80230880: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80230880: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_9:
    // 0x80230884: jal         0x8006036C
    // 0x80230888: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x80230888: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_10:
    // 0x8023088C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_80230890:
    // 0x80230890: jal         0x8006036C
    // 0x80230894: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x80230894: nop

    after_11:
L_80230898:
    // 0x80230898: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023089C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802308A0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_802308A4:
    // 0x802308A4: bne         $v1, $v0, L_802308C8
    if (ctx->r3 != ctx->r2) {
        // 0x802308A8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_802308C8;
    }
    // 0x802308A8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802308AC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802308B0: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802308B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802308B8: lui         $s6, 0x8023
    ctx->r22 = S32(0X8023 << 16);
    // 0x802308BC: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x802308C0: j           L_802308E8
    // 0x802308C4: lw          $s6, 0x4614($s6)
    ctx->r22 = MEM_W(ctx->r22, 0X4614);
        goto L_802308E8;
    // 0x802308C4: lw          $s6, 0x4614($s6)
    ctx->r22 = MEM_W(ctx->r22, 0X4614);
L_802308C8:
    // 0x802308C8: bne         $v1, $v0, L_802308E8
    if (ctx->r3 != ctx->r2) {
        // 0x802308CC: nop
    
            goto L_802308E8;
    }
    // 0x802308CC: nop

    // 0x802308D0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802308D4: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802308D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802308DC: lui         $s6, 0x8023
    ctx->r22 = S32(0X8023 << 16);
    // 0x802308E0: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x802308E4: lw          $s6, 0x4620($s6)
    ctx->r22 = MEM_W(ctx->r22, 0X4620);
L_802308E8:
    // 0x802308E8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802308EC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802308F0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x802308F4: bne         $v1, $v0, L_80230910
    if (ctx->r3 != ctx->r2) {
        // 0x802308F8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80230910;
    }
    // 0x802308F8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802308FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230900: jal         0x80230968
    // 0x80230904: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_80230968_ovl16(rdram, ctx);
        goto after_12;
    // 0x80230904: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_12:
    // 0x80230908: j           L_80230938
    // 0x8023090C: nop

        goto L_80230938;
    // 0x8023090C: nop

L_80230910:
    // 0x80230910: bne         $v1, $v0, L_80230940
    if (ctx->r3 != ctx->r2) {
        // 0x80230914: nop
    
            goto L_80230940;
    }
    // 0x80230914: nop

    // 0x80230918: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023091C: bne         $v0, $zero, L_80230940
    if (ctx->r2 != 0) {
        // 0x80230920: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230940;
    }
    // 0x80230920: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230924: jal         0x80230BB8
    // 0x80230928: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_80230BB8_ovl16(rdram, ctx);
        goto after_13;
    // 0x80230928: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_13:
    // 0x8023092C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230930: j           L_80230940
    // 0x80230934: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80230940;
    // 0x80230934: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80230938:
    // 0x80230938: jal         0x8004F684
    // 0x8023093C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_14;
    // 0x8023093C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
L_80230940:
    // 0x80230940: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80230944: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80230948: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8023094C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80230950: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80230954: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80230958: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023095C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230960: jr          $ra
    // 0x80230964: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80230964: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F144_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F144: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022F148: lb          $v1, 0x47CC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X47CC);
    // 0x8022F14C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F150: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F154: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F158: bne         $v1, $v0, L_8022F184
    if (ctx->r3 != ctx->r2) {
        // 0x8022F15C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022F184;
    }
    // 0x8022F15C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022F160: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F164: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022F168: bne         $v0, $zero, L_8022F184
    if (ctx->r2 != 0) {
        // 0x8022F16C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022F184;
    }
    // 0x8022F16C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022F170: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F174: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022F178: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F17C: jal         0x80070050
    // 0x8022F180: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_0;
    // 0x8022F180: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
L_8022F184:
    // 0x8022F184: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F188: jr          $ra
    // 0x8022F18C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F18C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B3A8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B3A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B3AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B3B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B3B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B3B8: lh          $v0, 0x54($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X54);
    // 0x8022B3BC: addiu       $a0, $s0, 0xD0
    ctx->r4 = ADD32(ctx->r16, 0XD0);
    // 0x8022B3C0: beq         $v0, $zero, L_8022B3E8
    if (ctx->r2 == 0) {
        // 0x8022B3C4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022B3E8;
    }
    // 0x8022B3C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B3C8: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022B3CC: bne         $v0, $zero, L_8022B3D8
    if (ctx->r2 != 0) {
        // 0x8022B3D0: addiu       $v0, $v1, -0x20
        ctx->r2 = ADD32(ctx->r3, -0X20);
            goto L_8022B3D8;
    }
    // 0x8022B3D0: addiu       $v0, $v1, -0x20
    ctx->r2 = ADD32(ctx->r3, -0X20);
    // 0x8022B3D4: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
L_8022B3D8:
    // 0x8022B3D8: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8022B3DC: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8022B3E0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B3E4: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
L_8022B3E8:
    // 0x8022B3E8: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8022B3EC: bne         $v0, $zero, L_8022B48C
    if (ctx->r2 != 0) {
        // 0x8022B3F0: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022B48C;
    }
    // 0x8022B3F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B3F4: jal         0x800A3450
    // 0x8022B3F8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022B3F8: nop

    after_0:
    // 0x8022B3FC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022B400: slti        $v0, $v0, 0xE
    ctx->r2 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x8022B404: beq         $v0, $zero, L_8022B450
    if (ctx->r2 == 0) {
        // 0x8022B408: nop
    
            goto L_8022B450;
    }
    // 0x8022B408: nop

    // 0x8022B40C: jal         0x800A3450
    // 0x8022B410: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022B410: nop

    after_1:
    // 0x8022B414: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022B418: sb          $v0, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = ctx->r2;
    // 0x8022B41C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022B420: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B424: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022B428: jal         0x800A3450
    // 0x8022B42C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022B42C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    after_2:
    // 0x8022B430: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022B434: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022B438: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B43C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B440: lhu         $v0, 0x4254($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X4254);
    // 0x8022B444: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B448: j           L_8022B478
    // 0x8022B44C: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
        goto L_8022B478;
    // 0x8022B44C: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
L_8022B450:
    // 0x8022B450: jal         0x800A3450
    // 0x8022B454: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022B454: nop

    after_3:
    // 0x8022B458: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022B45C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022B460: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022B464: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B468: lhu         $v1, 0x4254($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4254);
    // 0x8022B46C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B470: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B474: sh          $v1, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r3;
L_8022B478:
    // 0x8022B478: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022B47C: jal         0x8022AB18
    // 0x8022B480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022AB18_ovl16(rdram, ctx);
        goto after_4;
    // 0x8022B480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022B484: j           L_8022B4DC
    // 0x8022B488: nop

        goto L_8022B4DC;
    // 0x8022B488: nop

L_8022B48C:
    // 0x8022B48C: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022B490: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B494: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B498: bne         $v1, $v0, L_8022B4DC
    if (ctx->r3 != ctx->r2) {
        // 0x8022B49C: nop
    
            goto L_8022B4DC;
    }
    // 0x8022B49C: nop

    // 0x8022B4A0: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x8022B4A4: beq         $v0, $zero, L_8022B4DC
    if (ctx->r2 == 0) {
        // 0x8022B4A8: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8022B4DC;
    }
    // 0x8022B4A8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022B4AC: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8022B4B0: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8022B4B4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B4B8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022B4BC: sh          $v0, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = ctx->r2;
    // 0x8022B4C0: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022B4C4: sh          $v0, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r2;
    // 0x8022B4C8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B4CC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022B4D0: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8022B4D4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B4D8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022B4DC:
    // 0x8022B4DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B4E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B4E4: jr          $ra
    // 0x8022B4E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B4E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802281F8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281F8: lb          $v0, 0x385($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X385);
    // 0x802281FC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80228200: bne         $v0, $zero, L_80228214
    if (ctx->r2 != 0) {
        // 0x80228204: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80228214;
    }
    // 0x80228204: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228208: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022820C: j           L_8022821C
    // 0x80228210: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_8022821C;
    // 0x80228210: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80228214:
    // 0x80228214: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80228218: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_8022821C:
    // 0x8022821C: jr          $ra
    // 0x80228220: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80228220: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022AE08_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AE0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AE10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AE14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022AE18: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022AE1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AE20: lhu         $s2, 0x54($s0)
    ctx->r18 = MEM_HU(ctx->r16, 0X54);
    // 0x8022AE24: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022AE28: jal         0x80040F30
    // 0x8022AE2C: sw          $zero, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = 0;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x8022AE2C: sw          $zero, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = 0;
    after_0:
    // 0x8022AE30: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022AE34: beq         $v0, $zero, L_8022AE48
    if (ctx->r2 == 0) {
        // 0x8022AE38: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_8022AE48;
    }
    // 0x8022AE38: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x8022AE3C: lw          $v0, 0xF0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF0);
    // 0x8022AE40: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022AE44: sw          $v0, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->r2;
L_8022AE48:
    // 0x8022AE48: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8022AE4C: bnel        $v0, $zero, L_8022AEB8
    if (ctx->r2 != 0) {
        // 0x8022AE50: sh          $s2, 0x54($s0)
        MEM_H(0X54, ctx->r16) = ctx->r18;
            goto L_8022AEB8;
    }
    goto skip_0;
    // 0x8022AE50: sh          $s2, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r18;
    skip_0:
    // 0x8022AE54: jal         0x8003E934
    // 0x8022AE58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022AE58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022AE5C: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022AE60: beql        $v0, $v1, L_8022AEA0
    if (ctx->r2 == ctx->r3) {
        // 0x8022AE64: sh          $v0, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r2;
            goto L_8022AEA0;
    }
    goto skip_1;
    // 0x8022AE64: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    skip_1:
    // 0x8022AE68: lb          $v0, 0x75($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X75);
    // 0x8022AE6C: bne         $v0, $zero, L_8022AEA8
    if (ctx->r2 != 0) {
        // 0x8022AE70: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022AEA8;
    }
    // 0x8022AE70: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AE74: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022AE78: jal         0x8009A3B4
    // 0x8022AE7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022AE7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022AE80: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022AE84: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022AE88: jal         0x8009A3B4
    // 0x8022AE8C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022AE8C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8022AE90: lw          $v0, 0xF0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF0);
    // 0x8022AE94: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022AE98: j           L_8022AEA8
    // 0x8022AE9C: sw          $v0, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->r2;
        goto L_8022AEA8;
    // 0x8022AE9C: sw          $v0, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->r2;
L_8022AEA0:
    // 0x8022AEA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AEA4: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_8022AEA8:
    // 0x8022AEA8: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x8022AEAC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022AEB0: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022AEB4: sh          $s2, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r18;
L_8022AEB8:
    // 0x8022AEB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AEBC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022AEC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AEC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AEC8: jr          $ra
    // 0x8022AECC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AECC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227268_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227268: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022726C: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80227270: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227274: bne         $v0, $a0, L_80227284
    if (ctx->r2 != ctx->r4) {
        // 0x80227278: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80227284;
    }
    // 0x80227278: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022727C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227280: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
L_80227284:
    // 0x80227284: jal         0x8004F418
    // 0x80227288: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80227288: nop

    after_0:
    // 0x8022728C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227290: jr          $ra
    // 0x80227294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80227298: nop

    // 0x8022729C: nop

;}
RECOMP_FUNC void func_80226EB4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226EB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226EB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226EBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226EC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226EC4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226EC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226ECC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80226ED0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80226ED4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226ED8: jal         0x8004D5D4
    // 0x80226EDC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226EDC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226EE0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80226EE4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80226EE8: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80226EEC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226EF0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226EF4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226EF8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226EFC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80226F00: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80226F04: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80226F08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226F0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226F10: lbu         $a2, 0x8($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X8);
    // 0x80226F14: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226F18: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226F1C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80226F20: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226F24: addiu       $v0, $v0, 0x4090
    ctx->r2 = ADD32(ctx->r2, 0X4090);
    // 0x80226F28: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80226F2C: sb          $v1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r3;
    // 0x80226F30: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80226F34: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80226F38: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80226F3C: sh          $a2, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r6;
    // 0x80226F40: sh          $a2, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r6;
    // 0x80226F44: sh          $a2, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r6;
    // 0x80226F48: jal         0x80050294
    // 0x80226F4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80226F4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80226F50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226F54: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80226F58: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80226F5C: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x80226F60: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x80226F64: jal         0x80226F7C
    // 0x80226F68: sh          $v0, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r2;
    func_80226F7C_ovl16(rdram, ctx);
        goto after_2;
    // 0x80226F68: sh          $v0, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r2;
    after_2:
    // 0x80226F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226F70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226F74: jr          $ra
    // 0x80226F78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226F78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802281A4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802281A8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802281AC: lhu         $v1, 0x1DA($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1DA);
    // 0x802281B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802281B4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802281B8: sb          $a1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r5;
    // 0x802281BC: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x802281C0: beq         $v1, $zero, L_802281D4
    if (ctx->r3 == 0) {
        // 0x802281C4: sb          $v0, 0x385($a0)
        MEM_B(0X385, ctx->r4) = ctx->r2;
            goto L_802281D4;
    }
    // 0x802281C4: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
    // 0x802281C8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x802281CC: j           L_802281DC
    // 0x802281D0: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
        goto L_802281DC;
    // 0x802281D0: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
L_802281D4:
    // 0x802281D4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x802281D8: sb          $a1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r5;
L_802281DC:
    // 0x802281DC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x802281E0: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x802281E4: jal         0x80050294
    // 0x802281E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802281E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802281EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802281F0: jr          $ra
    // 0x802281F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802281F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225994_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225994: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225998: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022599C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802259A0: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x802259A4: beq         $v1, $v0, L_80225A80
    if (ctx->r3 == ctx->r2) {
        // 0x802259A8: slti        $v0, $v1, 0x3A
        ctx->r2 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
            goto L_80225A80;
    }
    // 0x802259A8: slti        $v0, $v1, 0x3A
    ctx->r2 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x802259AC: beq         $v0, $zero, L_802259F0
    if (ctx->r2 == 0) {
        // 0x802259B0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802259F0;
    }
    // 0x802259B0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802259B4: beq         $v1, $v0, L_80225A80
    if (ctx->r3 == ctx->r2) {
        // 0x802259B8: slti        $v0, $v1, 0xA
        ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
            goto L_80225A80;
    }
    // 0x802259B8: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x802259BC: beq         $v0, $zero, L_802259D4
    if (ctx->r2 == 0) {
        // 0x802259C0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802259D4;
    }
    // 0x802259C0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802259C4: beq         $v1, $v0, L_80225A38
    if (ctx->r3 == ctx->r2) {
        // 0x802259C8: nop
    
            goto L_80225A38;
    }
    // 0x802259C8: nop

    // 0x802259CC: j           L_80225A90
    // 0x802259D0: nop

        goto L_80225A90;
    // 0x802259D0: nop

L_802259D4:
    // 0x802259D4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802259D8: beq         $v1, $v0, L_80225A80
    if (ctx->r3 == ctx->r2) {
        // 0x802259DC: addiu       $v0, $zero, 0x29
        ctx->r2 = ADD32(0, 0X29);
            goto L_80225A80;
    }
    // 0x802259DC: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
    // 0x802259E0: beq         $v1, $v0, L_80225A80
    if (ctx->r3 == ctx->r2) {
        // 0x802259E4: nop
    
            goto L_80225A80;
    }
    // 0x802259E4: nop

    // 0x802259E8: j           L_80225A90
    // 0x802259EC: nop

        goto L_80225A90;
    // 0x802259EC: nop

L_802259F0:
    // 0x802259F0: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x802259F4: beq         $v1, $v0, L_80225A80
    if (ctx->r3 == ctx->r2) {
        // 0x802259F8: slti        $v0, $v1, 0x56
        ctx->r2 = SIGNED(ctx->r3) < 0X56 ? 1 : 0;
            goto L_80225A80;
    }
    // 0x802259F8: slti        $v0, $v1, 0x56
    ctx->r2 = SIGNED(ctx->r3) < 0X56 ? 1 : 0;
    // 0x802259FC: beq         $v0, $zero, L_80225A1C
    if (ctx->r2 == 0) {
        // 0x80225A00: addiu       $v0, $zero, 0x43
        ctx->r2 = ADD32(0, 0X43);
            goto L_80225A1C;
    }
    // 0x80225A00: addiu       $v0, $zero, 0x43
    ctx->r2 = ADD32(0, 0X43);
    // 0x80225A04: beq         $v1, $v0, L_80225A44
    if (ctx->r3 == ctx->r2) {
        // 0x80225A08: addiu       $v0, $zero, 0x48
        ctx->r2 = ADD32(0, 0X48);
            goto L_80225A44;
    }
    // 0x80225A08: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x80225A0C: beq         $v1, $v0, L_80225A80
    if (ctx->r3 == ctx->r2) {
        // 0x80225A10: nop
    
            goto L_80225A80;
    }
    // 0x80225A10: nop

    // 0x80225A14: j           L_80225A90
    // 0x80225A18: nop

        goto L_80225A90;
    // 0x80225A18: nop

L_80225A1C:
    // 0x80225A1C: addiu       $v0, $zero, 0x8D
    ctx->r2 = ADD32(0, 0X8D);
    // 0x80225A20: beq         $v1, $v0, L_80225A50
    if (ctx->r3 == ctx->r2) {
        // 0x80225A24: addiu       $v0, $zero, 0xCD
        ctx->r2 = ADD32(0, 0XCD);
            goto L_80225A50;
    }
    // 0x80225A24: addiu       $v0, $zero, 0xCD
    ctx->r2 = ADD32(0, 0XCD);
    // 0x80225A28: beq         $v1, $v0, L_80225A64
    if (ctx->r3 == ctx->r2) {
        // 0x80225A2C: nop
    
            goto L_80225A64;
    }
    // 0x80225A2C: nop

    // 0x80225A30: j           L_80225A90
    // 0x80225A34: nop

        goto L_80225A90;
    // 0x80225A34: nop

L_80225A38:
    // 0x80225A38: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80225A3C: j           L_80225A58
    // 0x80225A40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80225A58;
    // 0x80225A40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225A44:
    // 0x80225A44: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80225A48: j           L_80225A58
    // 0x80225A4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80225A58;
    // 0x80225A4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80225A50:
    // 0x80225A50: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80225A54: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80225A58:
    // 0x80225A58: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80225A5C: j           L_80225A90
    // 0x80225A60: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
        goto L_80225A90;
    // 0x80225A60: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_80225A64:
    // 0x80225A64: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80225A68: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80225A6C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80225A70: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80225A74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225A78: j           L_80225A90
    // 0x80225A7C: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
        goto L_80225A90;
    // 0x80225A7C: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_80225A80:
    // 0x80225A80: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80225A84: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    // 0x80225A88: jal         0x8002A33C
    // 0x80225A8C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80225A8C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
L_80225A90:
    // 0x80225A90: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225A94: jr          $ra
    // 0x80225A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232510_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232510: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80232514: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80232518: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023251C: bne         $v1, $v0, L_8023253C
    if (ctx->r3 != ctx->r2) {
        // 0x80232520: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023253C;
    }
    // 0x80232520: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232524: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80232528: lhu         $v1, -0x3AA4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3AA4);
    // 0x8023252C: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x80232530: bne         $v1, $v0, L_80232544
    if (ctx->r3 != ctx->r2) {
        // 0x80232534: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232544;
    }
    // 0x80232534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232538: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8023253C:
    // 0x8023253C: j           L_80232554
    // 0x80232540: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
        goto L_80232554;
    // 0x80232540: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80232544:
    // 0x80232544: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80232548: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8023254C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80232550: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
L_80232554:
    // 0x80232554: jr          $ra
    // 0x80232558: nop

    TRACE_RETURN()
    return;
    // 0x80232558: nop

;}
RECOMP_FUNC void func_8022E410_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E410: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022E414: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022E418: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E41C: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8022E420: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8022E424: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022E428: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022E42C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022E430: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022E434: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E438: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022E43C: jal         0x8002C654
    // 0x8022E440: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8022E440: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022E444: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8022E448: addiu       $a0, $s1, 0x30
    ctx->r4 = ADD32(ctx->r17, 0X30);
    // 0x8022E44C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E450: sh          $zero, 0x30($s1)
    MEM_H(0X30, ctx->r17) = 0;
    // 0x8022E454: sh          $zero, 0x34($s1)
    MEM_H(0X34, ctx->r17) = 0;
    // 0x8022E458: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022E45C: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022E460: jal         0x80031600
    // 0x8022E464: sh          $v0, 0x32($s1)
    MEM_H(0X32, ctx->r17) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x8022E464: sh          $v0, 0x32($s1)
    MEM_H(0X32, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022E468: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022E46C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022E470: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022E474: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022E478: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022E47C: bne         $v1, $v0, L_8022E490
    if (ctx->r3 != ctx->r2) {
        // 0x8022E480: addiu       $s3, $s1, 0x2C
        ctx->r19 = ADD32(ctx->r17, 0X2C);
            goto L_8022E490;
    }
    // 0x8022E480: addiu       $s3, $s1, 0x2C
    ctx->r19 = ADD32(ctx->r17, 0X2C);
    // 0x8022E484: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E488: j           L_8022E498
    // 0x8022E48C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_8022E498;
    // 0x8022E48C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022E490:
    // 0x8022E490: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E494: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
L_8022E498:
    // 0x8022E498: jal         0x8004D5D4
    // 0x8022E49C: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x8022E49C: nop

    after_2:
    // 0x8022E4A0: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x8022E4A4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8022E4A8: addiu       $a0, $a0, -0x3BC8
    ctx->r4 = ADD32(ctx->r4, -0X3BC8);
    // 0x8022E4AC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8022E4B0: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8022E4B4: xori        $v1, $v0, 0xE
    ctx->r3 = ctx->r2 ^ 0XE;
    // 0x8022E4B8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022E4BC: xori        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 ^ 0X14;
    // 0x8022E4C0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022E4C4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022E4C8: bne         $v1, $zero, L_8022E4E4
    if (ctx->r3 != 0) {
        // 0x8022E4CC: lui         $v1, 0xFFFF
        ctx->r3 = S32(0XFFFF << 16);
            goto L_8022E4E4;
    }
    // 0x8022E4CC: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022E4D0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8022E4D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E4D8: lui         $v1, 0x1300
    ctx->r3 = S32(0X1300 << 16);
    // 0x8022E4DC: bne         $v0, $v1, L_8022E704
    if (ctx->r2 != ctx->r3) {
        // 0x8022E4E0: nop
    
            goto L_8022E704;
    }
    // 0x8022E4E0: nop

L_8022E4E4:
    // 0x8022E4E4: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8022E4E8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E4EC: addiu       $v1, $v1, 0x441C
    ctx->r3 = ADD32(ctx->r3, 0X441C);
    // 0x8022E4F0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022E4F4: bne         $v0, $zero, L_8022E50C
    if (ctx->r2 != 0) {
        // 0x8022E4F8: sw          $v1, 0x10($s1)
        MEM_W(0X10, ctx->r17) = ctx->r3;
            goto L_8022E50C;
    }
    // 0x8022E4F8: sw          $v1, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r3;
    // 0x8022E4FC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022E500: lh          $v0, -0x3A84($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3A84);
    // 0x8022E504: beq         $v0, $zero, L_8022E550
    if (ctx->r2 == 0) {
        // 0x8022E508: nop
    
            goto L_8022E550;
    }
    // 0x8022E508: nop

L_8022E50C:
    // 0x8022E50C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022E510: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022E514: lb          $v1, 0x0($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X0);
    // 0x8022E518: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022E51C: bne         $v1, $v0, L_8022E52C
    if (ctx->r3 != ctx->r2) {
        // 0x8022E520: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022E52C;
    }
    // 0x8022E520: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022E524: j           L_8022E540
    // 0x8022E528: addiu       $v0, $zero, -0x181
    ctx->r2 = ADD32(0, -0X181);
        goto L_8022E540;
    // 0x8022E528: addiu       $v0, $zero, -0x181
    ctx->r2 = ADD32(0, -0X181);
L_8022E52C:
    // 0x8022E52C: beq         $v1, $v0, L_8022E53C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E530: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_8022E53C;
    }
    // 0x8022E530: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022E534: bne         $v1, $v0, L_8022E548
    if (ctx->r3 != ctx->r2) {
        // 0x8022E538: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022E548;
    }
    // 0x8022E538: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022E53C:
    // 0x8022E53C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8022E540:
    // 0x8022E540: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x8022E544: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022E548:
    // 0x8022E548: j           L_8022E7B8
    // 0x8022E54C: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
        goto L_8022E7B8;
    // 0x8022E54C: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
L_8022E550:
    // 0x8022E550: lh          $v1, 0x38($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X38);
    // 0x8022E554: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022E558: bne         $v1, $v0, L_8022E6AC
    if (ctx->r3 != ctx->r2) {
        // 0x8022E55C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022E6AC;
    }
    // 0x8022E55C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022E560: lh          $v1, 0x3C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X3C);
    // 0x8022E564: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x8022E568: bnel        $v1, $v0, L_8022E6B0
    if (ctx->r3 != ctx->r2) {
        // 0x8022E56C: sb          $zero, 0x9($s1)
        MEM_B(0X9, ctx->r17) = 0;
            goto L_8022E6B0;
    }
    goto skip_0;
    // 0x8022E56C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    skip_0:
    // 0x8022E570: sh          $a0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r4;
    // 0x8022E574: sh          $a0, 0x438($s2)
    MEM_H(0X438, ctx->r18) = ctx->r4;
    // 0x8022E578: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x8022E57C: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8022E580: sh          $v0, 0x43A($s2)
    MEM_H(0X43A, ctx->r18) = ctx->r2;
    // 0x8022E584: lhu         $a1, 0x3C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022E588: lh          $v0, 0x438($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X438);
    // 0x8022E58C: lh          $v1, 0x43A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X43A);
    // 0x8022E590: sh          $a1, 0x43C($s2)
    MEM_H(0X43C, ctx->r18) = ctx->r5;
    // 0x8022E594: lh          $a0, 0x43C($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X43C);
    // 0x8022E598: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E59C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E5A0: sw          $v0, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r2;
    // 0x8022E5A4: sh          $a1, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r5;
    // 0x8022E5A8: sw          $v1, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r3;
    // 0x8022E5AC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E5B0: sw          $a0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r4;
    // 0x8022E5B4: lhu         $v0, 0x6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X6);
    // 0x8022E5B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E5BC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022E5C0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E5C4: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8022E5C8: jal         0x8006FF84
    // 0x8022E5CC: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    func_8006FF84_4B384(rdram, ctx);
        goto after_3;
    // 0x8022E5CC: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    after_3:
    // 0x8022E5D0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022E5D4: bne         $v0, $v1, L_8022E7DC
    if (ctx->r2 != ctx->r3) {
        // 0x8022E5D8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022E7DC;
    }
    // 0x8022E5D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E5DC: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x8022E5E0: beq         $v1, $v0, L_8022E7DC
    if (ctx->r3 == ctx->r2) {
        // 0x8022E5E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022E7DC;
    }
    // 0x8022E5E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E5E8: lbu         $v1, 0xBD($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XBD);
    // 0x8022E5EC: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022E5F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E5F4: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022E5F8: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8022E5FC: sb          $v1, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r3;
    // 0x8022E600: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x8022E604: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x8022E608: sh          $v0, 0x438($s2)
    MEM_H(0X438, ctx->r18) = ctx->r2;
    // 0x8022E60C: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x8022E610: addiu       $s0, $s1, 0x38
    ctx->r16 = ADD32(ctx->r17, 0X38);
    // 0x8022E614: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8022E618: sh          $v0, 0x43A($s2)
    MEM_H(0X43A, ctx->r18) = ctx->r2;
    // 0x8022E61C: lhu         $a1, 0x3C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022E620: lh          $v0, 0x438($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X438);
    // 0x8022E624: lh          $v1, 0x43A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X43A);
    // 0x8022E628: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E62C: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x8022E630: sh          $zero, 0x440($s2)
    MEM_H(0X440, ctx->r18) = 0;
    // 0x8022E634: sh          $zero, 0x444($s2)
    MEM_H(0X444, ctx->r18) = 0;
    // 0x8022E638: sb          $zero, 0x448($s2)
    MEM_B(0X448, ctx->r18) = 0;
    // 0x8022E63C: sh          $a1, 0x43C($s2)
    MEM_H(0X43C, ctx->r18) = ctx->r5;
    // 0x8022E640: lh          $a0, 0x43C($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X43C);
    // 0x8022E644: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E648: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E64C: sw          $v0, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r2;
    // 0x8022E650: sh          $a1, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r5;
    // 0x8022E654: sw          $v1, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r3;
    // 0x8022E658: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E65C: sw          $a0, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r4;
    // 0x8022E660: lhu         $v0, 0x6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X6);
    // 0x8022E664: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022E668: addiu       $a1, $a1, 0x4410
    ctx->r5 = ADD32(ctx->r5, 0X4410);
    // 0x8022E66C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E670: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022E674: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E678: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8022E67C: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    // 0x8022E680: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022E684: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x8022E688: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E68C: jal         0x8003E964
    // 0x8022E690: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    func_8003E964_19D64(rdram, ctx);
        goto after_4;
    // 0x8022E690: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022E694: addiu       $a0, $zero, 0x176
    ctx->r4 = ADD32(0, 0X176);
    // 0x8022E698: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E69C: jal         0x8002A33C
    // 0x8022E6A0: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022E6A0: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_5:
    // 0x8022E6A4: j           L_8022E6F4
    // 0x8022E6A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022E6F4;
    // 0x8022E6A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E6AC:
    // 0x8022E6AC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_8022E6B0:
    // 0x8022E6B0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022E6B4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022E6B8: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022E6BC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022E6C0: bne         $v1, $v0, L_8022E6D0
    if (ctx->r3 != ctx->r2) {
        // 0x8022E6C4: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022E6D0;
    }
    // 0x8022E6C4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022E6C8: j           L_8022E6E4
    // 0x8022E6CC: addiu       $v0, $zero, -0x181
    ctx->r2 = ADD32(0, -0X181);
        goto L_8022E6E4;
    // 0x8022E6CC: addiu       $v0, $zero, -0x181
    ctx->r2 = ADD32(0, -0X181);
L_8022E6D0:
    // 0x8022E6D0: beq         $v1, $v0, L_8022E6E0
    if (ctx->r3 == ctx->r2) {
        // 0x8022E6D4: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_8022E6E0;
    }
    // 0x8022E6D4: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022E6D8: bne         $v1, $v0, L_8022E6EC
    if (ctx->r3 != ctx->r2) {
        // 0x8022E6DC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022E6EC;
    }
    // 0x8022E6DC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022E6E0:
    // 0x8022E6E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8022E6E4:
    // 0x8022E6E4: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x8022E6E8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022E6EC:
    // 0x8022E6EC: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x8022E6F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E6F4:
    // 0x8022E6F4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022E6F8: sh          $v0, -0x3A84($at)
    MEM_H(-0X3A84, ctx->r1) = ctx->r2;
    // 0x8022E6FC: j           L_8022E7BC
    // 0x8022E700: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
        goto L_8022E7BC;
    // 0x8022E700: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
L_8022E704:
    // 0x8022E704: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x8022E708: bne         $v0, $zero, L_8022E720
    if (ctx->r2 != 0) {
        // 0x8022E70C: nop
    
            goto L_8022E720;
    }
    // 0x8022E70C: nop

    // 0x8022E710: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022E714: addiu       $v0, $v0, 0x441C
    ctx->r2 = ADD32(ctx->r2, 0X441C);
    // 0x8022E718: j           L_8022E72C
    // 0x8022E71C: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
        goto L_8022E72C;
    // 0x8022E71C: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
L_8022E720:
    // 0x8022E720: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022E724: addiu       $v0, $v0, 0x4428
    ctx->r2 = ADD32(ctx->r2, 0X4428);
    // 0x8022E728: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
L_8022E72C:
    // 0x8022E72C: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x8022E730: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E734: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022E738: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x8022E73C: bne         $v1, $v0, L_8022E774
    if (ctx->r3 != ctx->r2) {
        // 0x8022E740: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_8022E774;
    }
    // 0x8022E740: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022E744: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022E748: lh          $v0, -0x3A7E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3A7E);
    // 0x8022E74C: beq         $v0, $zero, L_8022E768
    if (ctx->r2 == 0) {
        // 0x8022E750: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022E768;
    }
    // 0x8022E750: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E754: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x8022E758: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x8022E75C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022E760: j           L_8022E7B4
    // 0x8022E764: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
        goto L_8022E7B4;
    // 0x8022E764: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
L_8022E768:
    // 0x8022E768: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x8022E76C: j           L_8022E7B8
    // 0x8022E770: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
        goto L_8022E7B8;
    // 0x8022E770: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
L_8022E774:
    // 0x8022E774: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x8022E778: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x8022E77C: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022E780: bne         $v0, $zero, L_8022E794
    if (ctx->r2 != 0) {
        // 0x8022E784: nop
    
            goto L_8022E794;
    }
    // 0x8022E784: nop

    // 0x8022E788: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022E78C: j           L_8022E79C
    // 0x8022E790: lh          $v0, -0x3A82($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3A82);
        goto L_8022E79C;
    // 0x8022E790: lh          $v0, -0x3A82($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3A82);
L_8022E794:
    // 0x8022E794: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022E798: lh          $v0, -0x3A80($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3A80);
L_8022E79C:
    // 0x8022E79C: beq         $v0, $zero, L_8022E7B8
    if (ctx->r2 == 0) {
        // 0x8022E7A0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022E7B8;
    }
    // 0x8022E7A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E7A4: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8022E7A8: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
    // 0x8022E7AC: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022E7B0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_8022E7B4:
    // 0x8022E7B4: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8022E7B8:
    // 0x8022E7B8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
L_8022E7BC:
    // 0x8022E7BC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022E7C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E7C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022E7C8: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x8022E7CC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022E7D0: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    // 0x8022E7D4: jal         0x8022E7F8
    // 0x8022E7D8: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    func_8022E7F8_ovl16(rdram, ctx);
        goto after_6;
    // 0x8022E7D8: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    after_6:
L_8022E7DC:
    // 0x8022E7DC: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8022E7E0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8022E7E4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022E7E8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022E7EC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022E7F0: jr          $ra
    // 0x8022E7F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022E7F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022CAC0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CAC0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022CAC4: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x8022CAC8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8022CACC: bne         $v0, $zero, L_8022CB18
    if (ctx->r2 != 0) {
        // 0x8022CAD0: addiu       $a2, $a1, 0xD0
        ctx->r6 = ADD32(ctx->r5, 0XD0);
            goto L_8022CB18;
    }
    // 0x8022CAD0: addiu       $a2, $a1, 0xD0
    ctx->r6 = ADD32(ctx->r5, 0XD0);
    // 0x8022CAD4: lh          $v0, 0x54($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X54);
    // 0x8022CAD8: bne         $v0, $zero, L_8022CB74
    if (ctx->r2 != 0) {
        // 0x8022CADC: nop
    
            goto L_8022CB74;
    }
    // 0x8022CADC: nop

    // 0x8022CAE0: lbu         $v0, 0xFE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XFE);
    // 0x8022CAE4: lh          $v1, 0x4C($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4C);
    // 0x8022CAE8: lh          $a0, 0xF8($a1)
    ctx->r4 = MEM_H(ctx->r5, 0XF8);
    // 0x8022CAEC: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8022CAF0: sb          $v0, 0xFE($a1)
    MEM_B(0XFE, ctx->r5) = ctx->r2;
    // 0x8022CAF4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8022CAF8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022CAFC: bltzl       $v1, L_8022CB04
    if (SIGNED(ctx->r3) < 0) {
        // 0x8022CB00: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_8022CB04;
    }
    goto skip_0;
    // 0x8022CB00: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_0:
L_8022CB04:
    // 0x8022CB04: slti        $v1, $v1, 0x3
    ctx->r3 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8022CB08: bnel        $v1, $zero, L_8022CB6C
    if (ctx->r3 != 0) {
        // 0x8022CB0C: sh          $zero, 0x54($a1)
        MEM_H(0X54, ctx->r5) = 0;
            goto L_8022CB6C;
    }
    goto skip_1;
    // 0x8022CB0C: sh          $zero, 0x54($a1)
    MEM_H(0X54, ctx->r5) = 0;
    skip_1:
    // 0x8022CB10: j           L_8022CB74
    // 0x8022CB14: sh          $v0, 0xF8($a1)
    MEM_H(0XF8, ctx->r5) = ctx->r2;
        goto L_8022CB74;
    // 0x8022CB14: sh          $v0, 0xF8($a1)
    MEM_H(0XF8, ctx->r5) = ctx->r2;
L_8022CB18:
    // 0x8022CB18: lh          $v0, 0x5C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X5C);
    // 0x8022CB1C: lh          $v1, 0x54($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X54);
    // 0x8022CB20: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CB24: bltzl       $v0, L_8022CB2C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022CB28: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022CB2C;
    }
    goto skip_2;
    // 0x8022CB28: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_8022CB2C:
    // 0x8022CB2C: slti        $v0, $v0, 0x801
    ctx->r2 = SIGNED(ctx->r2) < 0X801 ? 1 : 0;
    // 0x8022CB30: bne         $v0, $zero, L_8022CB74
    if (ctx->r2 != 0) {
        // 0x8022CB34: nop
    
            goto L_8022CB74;
    }
    // 0x8022CB34: nop

    // 0x8022CB38: lbu         $v0, 0xFE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XFE);
    // 0x8022CB3C: lh          $v1, 0x4C($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4C);
    // 0x8022CB40: lh          $a0, 0xF8($a1)
    ctx->r4 = MEM_H(ctx->r5, 0XF8);
    // 0x8022CB44: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8022CB48: sb          $v0, 0xFE($a1)
    MEM_B(0XFE, ctx->r5) = ctx->r2;
    // 0x8022CB4C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8022CB50: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022CB54: bltzl       $v1, L_8022CB5C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8022CB58: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_8022CB5C;
    }
    goto skip_3;
    // 0x8022CB58: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_3:
L_8022CB5C:
    // 0x8022CB5C: slti        $v1, $v1, 0x3
    ctx->r3 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8022CB60: beql        $v1, $zero, L_8022CB74
    if (ctx->r3 == 0) {
        // 0x8022CB64: sh          $v0, 0xF8($a1)
        MEM_H(0XF8, ctx->r5) = ctx->r2;
            goto L_8022CB74;
    }
    goto skip_4;
    // 0x8022CB64: sh          $v0, 0xF8($a1)
    MEM_H(0XF8, ctx->r5) = ctx->r2;
    skip_4:
    // 0x8022CB68: sh          $zero, 0x54($a1)
    MEM_H(0X54, ctx->r5) = 0;
L_8022CB6C:
    // 0x8022CB6C: j           L_8022CBB4
    // 0x8022CB70: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
        goto L_8022CBB4;
    // 0x8022CB70: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_8022CB74:
    // 0x8022CB74: lbu         $v0, 0x2E($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X2E);
    // 0x8022CB78: beq         $v0, $zero, L_8022CB8C
    if (ctx->r2 == 0) {
        // 0x8022CB7C: nop
    
            goto L_8022CB8C;
    }
    // 0x8022CB7C: nop

    // 0x8022CB80: lhu         $v0, 0x4C($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4C);
    // 0x8022CB84: j           L_8022CB94
    // 0x8022CB88: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_8022CB94;
    // 0x8022CB88: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8022CB8C:
    // 0x8022CB8C: lhu         $v0, 0x4C($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4C);
    // 0x8022CB90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022CB94:
    // 0x8022CB94: sh          $v0, 0x4C($a1)
    MEM_H(0X4C, ctx->r5) = ctx->r2;
    // 0x8022CB98: lhu         $v1, 0x54($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X54);
    // 0x8022CB9C: lhu         $a0, 0x4C($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X4C);
    // 0x8022CBA0: lhu         $v0, 0x54($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X54);
    // 0x8022CBA4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022CBA8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022CBAC: sh          $v0, 0x5C($a1)
    MEM_H(0X5C, ctx->r5) = ctx->r2;
    // 0x8022CBB0: sh          $v1, 0x54($a1)
    MEM_H(0X54, ctx->r5) = ctx->r3;
L_8022CBB4:
    // 0x8022CBB4: jr          $ra
    // 0x8022CBB8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8022CBB8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_802329D8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802329D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802329DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802329E0: jal         0x8006033C
    // 0x802329E4: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802329E4: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_0:
    // 0x802329E8: beq         $v0, $zero, L_80232A14
    if (ctx->r2 == 0) {
        // 0x802329EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232A14;
    }
    // 0x802329EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802329F0: jal         0x8006033C
    // 0x802329F4: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802329F4: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_1:
    // 0x802329F8: beq         $v0, $zero, L_80232A14
    if (ctx->r2 == 0) {
        // 0x802329FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232A14;
    }
    // 0x802329FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232A00: jal         0x8006033C
    // 0x80232A04: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80232A04: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_2:
    // 0x80232A08: bne         $v0, $zero, L_80232A14
    if (ctx->r2 != 0) {
        // 0x80232A0C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80232A14;
    }
    // 0x80232A0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80232A10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80232A14:
    // 0x80232A14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232A18: jr          $ra
    // 0x80232A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F2E4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F2E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F2E8: lb          $v0, 0x4A26($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4A26);
    // 0x8022F2EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F2F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F2F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F2F8: beq         $v0, $zero, L_8022F340
    if (ctx->r2 == 0) {
        // 0x8022F2FC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022F340;
    }
    // 0x8022F2FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F300: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F304: lw          $v0, 0x4A70($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4A70);
    // 0x8022F308: bne         $v0, $s0, L_8022F344
    if (ctx->r2 != ctx->r16) {
        // 0x8022F30C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F344;
    }
    // 0x8022F30C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F310: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    // 0x8022F314: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022F318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F31C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022F320: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F324: jal         0x8002A33C
    // 0x8022F328: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022F328: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F32C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F330: jal         0x8004D5D4
    // 0x8022F334: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022F334: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    after_1:
    // 0x8022F338: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022F33C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022F340:
    // 0x8022F340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022F344:
    // 0x8022F344: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022F348: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022F34C: jal         0x80047284
    // 0x8022F350: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x8022F350: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022F354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F358: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F35C: jr          $ra
    // 0x8022F360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802325A8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802325A8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802325AC: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x802325B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802325B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802325B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802325BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802325C0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802325C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802325C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802325CC: bne         $v1, $v0, L_802325E8
    if (ctx->r3 != ctx->r2) {
        // 0x802325D0: sw          $s2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r18;
            goto L_802325E8;
    }
    // 0x802325D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802325D4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802325D8: lhu         $v1, -0x3AA4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3AA4);
    // 0x802325DC: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x802325E0: bne         $v1, $v0, L_802325FC
    if (ctx->r3 != ctx->r2) {
        // 0x802325E4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802325FC;
    }
    // 0x802325E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802325E8:
    // 0x802325E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802325EC: j           L_802326E8
    // 0x802325F0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_802326E8;
    // 0x802325F0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_802325F4:
    // 0x802325F4: j           L_80232664
    // 0x802325F8: sb          $s0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r16;
        goto L_80232664;
    // 0x802325F8: sb          $s0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r16;
L_802325FC:
    // 0x802325FC: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80232600: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232604: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x80232608: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023260C: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80232610: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80232614: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232618: lhu         $v0, 0x49C8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C8);
    // 0x8023261C: lui         $s2, 0x8023
    ctx->r18 = S32(0X8023 << 16);
    // 0x80232620: addiu       $s2, $s2, 0x4B00
    ctx->r18 = ADD32(ctx->r18, 0X4B00);
    // 0x80232624: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232628: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023262C: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80232630: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80232634:
    // 0x80232634: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80232638: sra         $a1, $a1, 22
    ctx->r5 = S32(SIGNED(ctx->r5) >> 22);
    // 0x8023263C: jal         0x80232970
    // 0x80232640: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    func_80232970_ovl16(rdram, ctx);
        goto after_0;
    // 0x80232640: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    after_0:
    // 0x80232644: bne         $v0, $zero, L_802325F4
    if (ctx->r2 != 0) {
        // 0x80232648: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_802325F4;
    }
    // 0x80232648: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8023264C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80232650: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80232654: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80232658: slti        $v0, $v0, 0x6
    ctx->r2 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x8023265C: bne         $v0, $zero, L_80232634
    if (ctx->r2 != 0) {
        // 0x80232660: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80232634;
    }
    // 0x80232660: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80232664:
    // 0x80232664: lb          $v1, 0xC($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XC);
    // 0x80232668: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023266C: beq         $v1, $v0, L_802326E8
    if (ctx->r3 == ctx->r2) {
        // 0x80232670: nop
    
            goto L_802326E8;
    }
    // 0x80232670: nop

    // 0x80232674: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80232678: lhu         $v0, -0x3AA4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3AA4);
    // 0x8023267C: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x80232680: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80232684: bne         $v0, $zero, L_802326E8
    if (ctx->r2 != 0) {
        // 0x80232688: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802326E8;
    }
    // 0x80232688: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023268C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232690: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232694: lw          $v0, 0x4AE8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4AE8);
    // 0x80232698: jalr        $v0
    // 0x8023269C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023269C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x802326A0: beq         $v0, $zero, L_802326E8
    if (ctx->r2 == 0) {
        // 0x802326A4: nop
    
            goto L_802326E8;
    }
    // 0x802326A4: nop

    // 0x802326A8: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x802326AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802326B0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802326B4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802326B8: jal         0x8006033C
    // 0x802326BC: lw          $a0, 0x4B18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4B18);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802326BC: lw          $a0, 0x4B18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4B18);
    after_2:
    // 0x802326C0: bne         $v0, $zero, L_802326E8
    if (ctx->r2 != 0) {
        // 0x802326C4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802326E8;
    }
    // 0x802326C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802326C8: lb          $v1, 0xC($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XC);
    // 0x802326CC: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x802326D0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802326D4: bne         $v0, $zero, L_802326E0
    if (ctx->r2 != 0) {
        // 0x802326D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802326E0;
    }
    // 0x802326D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802326DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802326E0:
    // 0x802326E0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802326E4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_802326E8:
    // 0x802326E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802326EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802326F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802326F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802326F8: jr          $ra
    // 0x802326FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802326FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229CBC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229CBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229CC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229CC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229CCC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80229CD0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80229CD4: jal         0x8004DA90
    // 0x80229CD8: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80229CD8: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    after_0:
    // 0x80229CDC: jal         0x8022A270
    // 0x80229CE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A270_ovl16(rdram, ctx);
        goto after_1;
    // 0x80229CE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229CE4: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80229CE8: beq         $v0, $zero, L_80229CF8
    if (ctx->r2 == 0) {
        // 0x80229CEC: nop
    
            goto L_80229CF8;
    }
    // 0x80229CEC: nop

    // 0x80229CF0: jal         0x8022A220
    // 0x80229CF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A220_ovl16(rdram, ctx);
        goto after_2;
    // 0x80229CF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80229CF8:
    // 0x80229CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229CFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229D00: jr          $ra
    // 0x80229D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231878_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231878: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8023187C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80231880: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x80231884: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80231888: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x8023188C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80231890: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x80231894: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80231898: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x8023189C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802318A0: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x802318A4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802318A8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802318AC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802318B0: jal         0x800A3450
    // 0x802318B4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x802318B4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x802318B8: andi        $s2, $v0, 0xFFF
    ctx->r18 = ctx->r2 & 0XFFF;
    // 0x802318BC: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x802318C0: div         $zero, $v0, $s6
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r22)));
    // 0x802318C4: bne         $s6, $zero, L_802318D0
    if (ctx->r22 != 0) {
        // 0x802318C8: nop
    
            goto L_802318D0;
    }
    // 0x802318C8: nop

    // 0x802318CC: break       7
    do_break(2149783756);
L_802318D0:
    // 0x802318D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802318D4: bne         $s6, $at, L_802318E8
    if (ctx->r22 != ctx->r1) {
        // 0x802318D8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802318E8;
    }
    // 0x802318D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802318DC: bne         $v0, $at, L_802318E8
    if (ctx->r2 != ctx->r1) {
        // 0x802318E0: nop
    
            goto L_802318E8;
    }
    // 0x802318E0: nop

    // 0x802318E4: break       6
    do_break(2149783780);
L_802318E8:
    // 0x802318E8: mflo        $t0
    ctx->r8 = lo;
    // 0x802318EC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x802318F0: nop

    // 0x802318F4: blez        $s6, L_80231A24
    if (SIGNED(ctx->r22) <= 0) {
        // 0x802318F8: sw          $t0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r8;
            goto L_80231A24;
    }
    // 0x802318F8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802318FC: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x80231900: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x80231904: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231908: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023190C: sll         $fp, $s5, 4
    ctx->r30 = S32(ctx->r21 << 4);
L_80231910:
    // 0x80231910: jal         0x8004F144
    // 0x80231914: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80231914: nop

    after_1:
    // 0x80231918: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023191C: beq         $s0, $zero, L_80231A00
    if (ctx->r16 == 0) {
        // 0x80231920: lui         $v1, 0x2E80
        ctx->r3 = S32(0X2E80 << 16);
            goto L_80231A00;
    }
    // 0x80231920: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80231924: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80231928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023192C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231930: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80231934: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231938: sb          $s7, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r23;
    // 0x8023193C: sb          $s5, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r21;
    // 0x80231940: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x80231944: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x80231948: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8023194C: lhu         $v0, 0x2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X2);
    // 0x80231950: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80231954: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x80231958: beq         $s7, $zero, L_8023198C
    if (ctx->r23 == 0) {
        // 0x8023195C: sh          $v0, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r2;
            goto L_8023198C;
    }
    // 0x8023195C: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80231960: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80231964: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80231968: addiu       $v0, $v0, 0x4A30
    ctx->r2 = ADD32(ctx->r2, 0X4A30);
    // 0x8023196C: addu        $s1, $t0, $v0
    ctx->r17 = ADD32(ctx->r8, ctx->r2);
    // 0x80231970: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80231974: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80231978: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x8023197C: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x80231980: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x80231984: j           L_802319B0
    // 0x80231988: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
        goto L_802319B0;
    // 0x80231988: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
L_8023198C:
    // 0x8023198C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80231990: addiu       $v0, $v0, 0x4990
    ctx->r2 = ADD32(ctx->r2, 0X4990);
    // 0x80231994: addu        $s1, $fp, $v0
    ctx->r17 = ADD32(ctx->r30, ctx->r2);
    // 0x80231998: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x8023199C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x802319A0: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x802319A4: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x802319A8: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x802319AC: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
L_802319B0:
    // 0x802319B0: jal         0x800324B4
    // 0x802319B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x802319B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x802319B8: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x802319BC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802319C0: mflo        $v0
    ctx->r2 = lo;
    // 0x802319C4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802319C8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802319CC: jal         0x80032498
    // 0x802319D0: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x802319D0: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    after_3:
    // 0x802319D4: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x802319D8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802319DC: mflo        $v0
    ctx->r2 = lo;
    // 0x802319E0: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802319E4: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x802319E8: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x802319EC: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
    // 0x802319F0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802319F4: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x802319F8: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x802319FC: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80231A00:
    // 0x80231A00: jal         0x800A3450
    // 0x80231A04: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80231A04: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_4:
    // 0x80231A08: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80231A0C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231A10: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80231A14: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x80231A18: slt         $v0, $s3, $s6
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80231A1C: bne         $v0, $zero, L_80231910
    if (ctx->r2 != 0) {
        // 0x80231A20: nop
    
            goto L_80231910;
    }
    // 0x80231A20: nop

L_80231A24:
    // 0x80231A24: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80231A28: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80231A2C: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80231A30: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80231A34: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80231A38: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80231A3C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80231A40: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80231A44: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80231A48: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80231A4C: jr          $ra
    // 0x80231A50: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80231A50: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80230388_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230388: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023038C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80230390: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230394: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230398: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8023039C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802303A0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x802303A4: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x802303A8: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x802303AC: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x802303B0: jal         0x8004D5D4
    // 0x802303B4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802303B4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802303B8: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x802303BC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802303C0: addiu       $a0, $zero, 0x62D
    ctx->r4 = ADD32(0, 0X62D);
    // 0x802303C4: jal         0x8006033C
    // 0x802303C8: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802303C8: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    after_1:
    // 0x802303CC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802303D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802303D4: bne         $v1, $v0, L_802303E4
    if (ctx->r3 != ctx->r2) {
        // 0x802303D8: nop
    
            goto L_802303E4;
    }
    // 0x802303D8: nop

    // 0x802303DC: jal         0x8006036C
    // 0x802303E0: addiu       $a0, $zero, 0x62D
    ctx->r4 = ADD32(0, 0X62D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x802303E0: addiu       $a0, $zero, 0x62D
    ctx->r4 = ADD32(0, 0X62D);
    after_2:
L_802303E4:
    // 0x802303E4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802303E8: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x802303EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802303F0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802303F4: jal         0x8003E6BC
    // 0x802303F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_3;
    // 0x802303F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_3:
    // 0x802303FC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80230400: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230404: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230408: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x8023040C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80230410: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230414: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x80230418: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x8023041C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80230420: jal         0x80071A70
    // 0x80230424: lw          $a0, 0x4500($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4500);
    func_80071A70_4CE70(rdram, ctx);
        goto after_4;
    // 0x80230424: lw          $a0, 0x4500($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4500);
    after_4:
    // 0x80230428: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x8023042C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230430: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80230434: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230438: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023043C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230440: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230444: jr          $ra
    // 0x80230448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A5E8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A5E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A5EC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022A5F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A5F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022A5F8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A5FC: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x8022A600: addiu       $t0, $t0, 0x49B0
    ctx->r8 = ADD32(ctx->r8, 0X49B0);
    // 0x8022A604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A608: beq         $v1, $v0, L_8022A658
    if (ctx->r3 == ctx->r2) {
        // 0x8022A60C: addiu       $a1, $s0, 0xC0
        ctx->r5 = ADD32(ctx->r16, 0XC0);
            goto L_8022A658;
    }
    // 0x8022A60C: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x8022A610: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022A614: beql        $v0, $zero, L_8022A62C
    if (ctx->r2 == 0) {
        // 0x8022A618: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A62C;
    }
    goto skip_0;
    // 0x8022A618: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022A61C: beq         $v1, $zero, L_8022A63C
    if (ctx->r3 == 0) {
        // 0x8022A620: addiu       $v1, $zero, 0x3C
        ctx->r3 = ADD32(0, 0X3C);
            goto L_8022A63C;
    }
    // 0x8022A620: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x8022A624: j           L_8022A74C
    // 0x8022A628: nop

        goto L_8022A74C;
    // 0x8022A628: nop

L_8022A62C:
    // 0x8022A62C: beq         $v1, $v0, L_8022A6AC
    if (ctx->r3 == ctx->r2) {
        // 0x8022A630: nop
    
            goto L_8022A6AC;
    }
    // 0x8022A630: nop

    // 0x8022A634: j           L_8022A74C
    // 0x8022A638: nop

        goto L_8022A74C;
    // 0x8022A638: nop

L_8022A63C:
    // 0x8022A63C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A640: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A644: sh          $v1, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r3;
    // 0x8022A648: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022A64C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A650: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022A654: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
L_8022A658:
    // 0x8022A658: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022A65C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A660: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022A664: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A668: bgez        $v0, L_8022A690
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A66C: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022A690;
    }
    // 0x8022A66C: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8022A670: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A674: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8022A678: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022A67C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A680: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A684: sh          $a0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r4;
    // 0x8022A688: j           L_8022A6AC
    // 0x8022A68C: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
        goto L_8022A6AC;
    // 0x8022A68C: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
L_8022A690:
    // 0x8022A690: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022A694: lh          $v1, 0x46($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X46);
    // 0x8022A698: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8022A69C: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x8022A6A0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A6A4: j           L_8022A74C
    // 0x8022A6A8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
        goto L_8022A74C;
    // 0x8022A6A8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
L_8022A6AC:
    // 0x8022A6AC: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x8022A6B0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A6B4: beql        $v1, $v0, L_8022A6BC
    if (ctx->r3 == ctx->r2) {
        // 0x8022A6B8: sh          $zero, 0x4($a1)
        MEM_H(0X4, ctx->r5) = 0;
            goto L_8022A6BC;
    }
    goto skip_1;
    // 0x8022A6B8: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
    skip_1:
L_8022A6BC:
    // 0x8022A6BC: lh          $v0, 0x54($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X54);
    // 0x8022A6C0: beq         $v0, $zero, L_8022A6D4
    if (ctx->r2 == 0) {
        // 0x8022A6C4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A6D4;
    }
    // 0x8022A6C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A6C8: addiu       $v0, $v1, -0x10
    ctx->r2 = ADD32(ctx->r3, -0X10);
    // 0x8022A6CC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A6D0: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
L_8022A6D4:
    // 0x8022A6D4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A6D8: lh          $v1, 0x58($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X58);
    // 0x8022A6DC: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8022A6E0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A6E4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022A6E8: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022A6EC: beq         $v1, $v0, L_8022A700
    if (ctx->r3 == ctx->r2) {
        // 0x8022A6F0: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022A700;
    }
    // 0x8022A6F0: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022A6F4: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x8022A6F8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A6FC: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
L_8022A700:
    // 0x8022A700: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x8022A704: lh          $a0, 0x46($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X46);
    // 0x8022A708: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022A70C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022A710: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A714: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x8022A718: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A71C: mflo        $a0
    ctx->r4 = lo;
    // 0x8022A720: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8022A724: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022A728: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8022A72C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A730: sra         $a0, $a0, 12
    ctx->r4 = S32(SIGNED(ctx->r4) >> 12);
    // 0x8022A734: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022A738: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022A73C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022A740: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A744: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022A748: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_8022A74C:
    // 0x8022A74C: lh          $a3, 0x14($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X14);
    // 0x8022A750: lh          $a2, 0x14($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X14);
    // 0x8022A754: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022A758: lh          $a0, 0x16($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X16);
    // 0x8022A75C: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8022A760: lh          $v1, 0x18($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X18);
    // 0x8022A764: subu        $a3, $a3, $a2
    ctx->r7 = SUB32(ctx->r7, ctx->r6);
    // 0x8022A768: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022A76C: bltzl       $v0, L_8022A774
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A770: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022A774;
    }
    goto skip_2;
    // 0x8022A770: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_8022A774:
    // 0x8022A774: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8022A778: beq         $v0, $zero, L_8022A7C4
    if (ctx->r2 == 0) {
        // 0x8022A77C: subu        $v1, $a1, $v1
        ctx->r3 = SUB32(ctx->r5, ctx->r3);
            goto L_8022A7C4;
    }
    // 0x8022A77C: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x8022A780: nop

    // 0x8022A784: mult        $a3, $a3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A788: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A78C: nop

    // 0x8022A790: nop

    // 0x8022A794: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A798: mflo        $v1
    ctx->r3 = lo;
    // 0x8022A79C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A7A0: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x8022A7A4: beq         $v0, $zero, L_8022A7C4
    if (ctx->r2 == 0) {
        // 0x8022A7A8: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_8022A7C4;
    }
    // 0x8022A7A8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8022A7AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A7B0: jal         0x8002A2F8
    // 0x8022A7B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x8022A7B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022A7B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A7BC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A7C0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022A7C4:
    // 0x8022A7C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022A7C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022A7CC: jr          $ra
    // 0x8022A7D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A7D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022E7F8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E7F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E7FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E800: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E808: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E80C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E810: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E814: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E818: lw          $v0, 0x4460($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4460);
    // 0x8022E81C: jalr        $v0
    // 0x8022E820: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E820: nop

    after_0:
    // 0x8022E824: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E828: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022E82C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022E830: jal         0x80047284
    // 0x8022E834: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_1;
    // 0x8022E834: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022E838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E83C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E840: jr          $ra
    // 0x8022E844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B98C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B98C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B990: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B994: jal         0x8004F4F8
    // 0x8022B998: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022B998: nop

    after_0:
    // 0x8022B99C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B9A0: jr          $ra
    // 0x8022B9A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B9A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022B9A8: nop

    // 0x8022B9AC: nop

;}
RECOMP_FUNC void func_8023031C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023031C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230320: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230324: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023032C: jal         0x8006033C
    // 0x80230330: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80230330: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    after_0:
    // 0x80230334: bne         $v0, $zero, L_80230348
    if (ctx->r2 != 0) {
        // 0x80230338: nop
    
            goto L_80230348;
    }
    // 0x80230338: nop

    // 0x8023033C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230340: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80230344: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80230348:
    // 0x80230348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023034C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230350: jr          $ra
    // 0x80230354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802269A8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802269AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802269B0: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x802269B4: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x802269B8: beq         $v1, $zero, L_802269D4
    if (ctx->r3 == 0) {
        // 0x802269BC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_802269D4;
    }
    // 0x802269BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802269C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802269C4: beq         $v1, $v0, L_802269D8
    if (ctx->r3 == ctx->r2) {
        // 0x802269C8: nop
    
            goto L_802269D8;
    }
    // 0x802269C8: nop

    // 0x802269CC: j           L_802269F8
    // 0x802269D0: nop

        goto L_802269F8;
    // 0x802269D0: nop

L_802269D4:
    // 0x802269D4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_802269D8:
    // 0x802269D8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802269DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802269E0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802269E4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802269E8: bne         $v0, $zero, L_802269F8
    if (ctx->r2 != 0) {
        // 0x802269EC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802269F8;
    }
    // 0x802269EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802269F0: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x802269F4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_802269F8:
    // 0x802269F8: jal         0x80226C1C
    // 0x802269FC: nop

    func_80226C1C_ovl16(rdram, ctx);
        goto after_0;
    // 0x802269FC: nop

    after_0:
    // 0x80226A00: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226A04: jr          $ra
    // 0x80226A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E3E0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E3E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E3E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E3E8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022E3EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E3F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E3F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E3F8: lw          $v0, 0x4454($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4454);
    // 0x8022E3FC: jalr        $v0
    // 0x8022E400: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E400: nop

    after_0:
    // 0x8022E404: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E408: jr          $ra
    // 0x8022E40C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E40C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023226C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023226C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80232270: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80232274: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80232278: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023227C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80232280: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80232284: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80232288: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023228C: lbu         $s3, 0x3($s4)
    ctx->r19 = MEM_BU(ctx->r20, 0X3);
    // 0x80232290: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x80232294: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80232298: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x8023229C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802322A0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x802322A4: lhu         $a0, 0x4A8A($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X4A8A);
    // 0x802322A8: jal         0x8006033C
    // 0x802322AC: lbu         $s1, 0xA($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0XA);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802322AC: lbu         $s1, 0xA($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0XA);
    after_0:
    // 0x802322B0: beq         $v0, $zero, L_802324B4
    if (ctx->r2 == 0) {
        // 0x802322B4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802324B4;
    }
    // 0x802322B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802322B8: lb          $v1, 0xC($s4)
    ctx->r3 = MEM_B(ctx->r20, 0XC);
    // 0x802322BC: beq         $v1, $v0, L_80232388
    if (ctx->r3 == ctx->r2) {
        // 0x802322C0: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80232388;
    }
    // 0x802322C0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802322C4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802322C8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x802322CC: lhu         $v0, 0x4A80($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A80);
    // 0x802322D0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x802322D4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802322D8: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x802322DC: lhu         $v1, 0x4A82($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A82);
    // 0x802322E0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802322E4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x802322E8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802322EC: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x802322F0: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x802322F4: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x802322F8: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x802322FC: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80232300: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80232304: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x80232308: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x8023230C: lh          $a2, 0x4A82($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X4A82);
    // 0x80232310: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80232314: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x80232318: lh          $a1, 0x4A80($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X4A80);
    // 0x8023231C: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x80232320: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80232324: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80232328: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8023232C: jal         0x8002FDF4
    // 0x80232330: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_1;
    // 0x80232330: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    after_1:
    // 0x80232334: beq         $s1, $zero, L_80232384
    if (ctx->r17 == 0) {
        // 0x80232338: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80232384;
    }
    // 0x80232338: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023233C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80232340: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80232344: lhu         $v0, 0x4A82($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A82);
    // 0x80232348: sh          $s2, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r18;
    // 0x8023234C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80232350: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80232354: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x80232358: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8023235C: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x80232360: lh          $a2, 0x4A82($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X4A82);
    // 0x80232364: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80232368: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8023236C: lh          $a1, 0x4A80($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X4A80);
    // 0x80232370: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80232374: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80232378: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8023237C: jal         0x8002FDF4
    // 0x80232380: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_2;
    // 0x80232380: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    after_2:
L_80232384:
    // 0x80232384: lb          $v1, 0xC($s4)
    ctx->r3 = MEM_B(ctx->r20, 0XC);
L_80232388:
    // 0x80232388: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023238C: beq         $v1, $v0, L_80232464
    if (ctx->r3 == ctx->r2) {
        // 0x80232390: sra         $s1, $s1, 1
        ctx->r17 = S32(SIGNED(ctx->r17) >> 1);
            goto L_80232464;
    }
    // 0x80232390: sra         $s1, $s1, 1
    ctx->r17 = S32(SIGNED(ctx->r17) >> 1);
    // 0x80232394: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x80232398: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8023239C: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x802323A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802323A4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x802323A8: lhu         $v0, 0x4A84($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A84);
    // 0x802323AC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x802323B0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802323B4: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x802323B8: lhu         $v1, 0x4A86($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A86);
    // 0x802323BC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802323C0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x802323C4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802323C8: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x802323CC: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x802323D0: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x802323D4: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x802323D8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802323DC: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x802323E0: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x802323E4: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x802323E8: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x802323EC: lh          $a2, 0x4A86($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X4A86);
    // 0x802323F0: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802323F4: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x802323F8: lh          $a1, 0x4A84($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X4A84);
    // 0x802323FC: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x80232400: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80232404: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80232408: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8023240C: jal         0x8002FDF4
    // 0x80232410: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_3;
    // 0x80232410: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    after_3:
    // 0x80232414: beq         $s1, $zero, L_80232464
    if (ctx->r17 == 0) {
        // 0x80232418: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80232464;
    }
    // 0x80232418: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023241C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80232420: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80232424: lhu         $v0, 0x4A86($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A86);
    // 0x80232428: sh          $s2, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r18;
    // 0x8023242C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80232430: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80232434: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x80232438: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8023243C: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x80232440: lh          $a2, 0x4A86($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X4A86);
    // 0x80232444: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80232448: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8023244C: lh          $a1, 0x4A84($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X4A84);
    // 0x80232450: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80232454: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80232458: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8023245C: jal         0x8002FDF4
    // 0x80232460: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_4;
    // 0x80232460: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    after_4:
L_80232464:
    // 0x80232464: lbu         $v0, 0xB($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XB);
    // 0x80232468: beq         $v0, $zero, L_80232490
    if (ctx->r2 == 0) {
        // 0x8023246C: sll         $v0, $s3, 1
        ctx->r2 = S32(ctx->r19 << 1);
            goto L_80232490;
    }
    // 0x8023246C: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x80232470: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80232474: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232478: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8023247C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232480: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232484: lbu         $v0, 0x4A89($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4A89);
    // 0x80232488: j           L_802324AC
    // 0x8023248C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
        goto L_802324AC;
    // 0x8023248C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_80232490:
    // 0x80232490: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80232494: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232498: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8023249C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802324A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802324A4: lbu         $v0, 0x4A89($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4A89);
    // 0x802324A8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
L_802324AC:
    // 0x802324AC: andi        $v1, $v1, 0x3F
    ctx->r3 = ctx->r3 & 0X3F;
    // 0x802324B0: sb          $v1, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r3;
L_802324B4:
    // 0x802324B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802324B8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802324BC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802324C0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802324C4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802324C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802324CC: jr          $ra
    // 0x802324D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802324D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802324D4: nop

    // 0x802324D8: nop

    // 0x802324DC: nop

;}
RECOMP_FUNC void func_802297A8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802297A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802297AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802297B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802297B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802297B8: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x802297BC: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x802297C0: bne         $a0, $v0, L_8022980C
    if (ctx->r4 != ctx->r2) {
        // 0x802297C4: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8022980C;
    }
    // 0x802297C4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x802297C8: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x802297CC: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x802297D0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x802297D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802297D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802297DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802297E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802297E4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802297E8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802297EC: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x802297F0: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x802297F4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802297F8: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x802297FC: jal         0x80050294
    // 0x80229800: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80229800: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229804: j           L_80229820
    // 0x80229808: nop

        goto L_80229820;
    // 0x80229808: nop

L_8022980C:
    // 0x8022980C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80229810: bne         $v0, $zero, L_8022981C
    if (ctx->r2 != 0) {
        // 0x80229814: addiu       $v0, $v1, -0x80
        ctx->r2 = ADD32(ctx->r3, -0X80);
            goto L_8022981C;
    }
    // 0x80229814: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x80229818: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_8022981C:
    // 0x8022981C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80229820:
    // 0x80229820: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229824: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229828: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022982C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229830: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229834: jr          $ra
    // 0x80229838: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229838: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CE58_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE58: jr          $ra
    // 0x8022CE5C: nop

    TRACE_RETURN()
    return;
    // 0x8022CE5C: nop

;}
RECOMP_FUNC void func_802300E0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802300E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802300E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802300E8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802300EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802300F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802300F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802300F8: lw          $v0, 0x44E0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X44E0);
    // 0x802300FC: jalr        $v0
    // 0x80230100: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230100: nop

    after_0:
    // 0x80230104: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230108: jr          $ra
    // 0x8023010C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023010C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AA40_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AA44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022AA48: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022AA4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AA50: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AA54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AA58: lw          $v0, 0x41E0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X41E0);
    // 0x8022AA5C: jalr        $v0
    // 0x8022AA60: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022AA60: nop

    after_0:
    // 0x8022AA64: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022AA68: jr          $ra
    // 0x8022AA6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AA6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228A10_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228A14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228A18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228A1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228A20: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228A24: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x80228A28: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228A2C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228A30: jal         0x8004F820
    // 0x80228A34: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228A34: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80228A38: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228A3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228A40: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228A44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228A48: bne         $v0, $zero, L_80228A9C
    if (ctx->r2 != 0) {
        // 0x80228A4C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80228A9C;
    }
    // 0x80228A4C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80228A50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228A54: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228A58: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228A5C: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x80228A60: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228A64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228A68: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228A6C: jal         0x80050294
    // 0x80228A70: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80228A70: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_1:
    // 0x80228A74: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80228A78: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80228A7C: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80228A80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228A84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228A88: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80228A8C: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x80228A90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228A94: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228A98: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
L_80228A9C:
    // 0x80228A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228AA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228AA4: jr          $ra
    // 0x80228AA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228AA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232250_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232250: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80232254: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80232258: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8023225C: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x80232260: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232264: jr          $ra
    // 0x80232268: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80232268: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022F998_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F998: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F99C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F9A0: jal         0x8004F684
    // 0x8022F9A4: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8022F9A4: nop

    after_0:
    // 0x8022F9A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F9AC: jr          $ra
    // 0x8022F9B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F9B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802289E0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802289E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802289E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802289E8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802289EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802289F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802289F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802289F8: lw          $v0, 0x4130($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4130);
    // 0x802289FC: jalr        $v0
    // 0x80228A00: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228A00: nop

    after_0:
    // 0x80228A04: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228A08: jr          $ra
    // 0x80228A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
