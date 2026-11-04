#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80228488_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228488: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022848C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80228490: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228494: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80228498: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8022849C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802284A0: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802284A4: jal         0x80229774
    // 0x802284A8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_80229774_ovl29(rdram, ctx);
        goto after_0;
    // 0x802284A8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x802284AC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802284B0: beq         $v0, $zero, L_802284E0
    if (ctx->r2 == 0) {
        // 0x802284B4: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_802284E0;
    }
    // 0x802284B4: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x802284B8: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802284BC: bne         $v1, $v0, L_80228608
    if (ctx->r3 != ctx->r2) {
        // 0x802284C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228608;
    }
    // 0x802284C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802284C4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802284C8: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x802284CC: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x802284D0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802284D4: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x802284D8: j           L_8022860C
    // 0x802284DC: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_8022860C;
    // 0x802284DC: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_802284E0:
    // 0x802284E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802284E4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802284E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802284EC: jal         0x8004DA90
    // 0x802284F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802284F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802284F4: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x802284F8: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x802284FC: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x80228500: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x80228504: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x80228508: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022850C: beq         $v0, $zero, L_8022851C
    if (ctx->r2 == 0) {
        // 0x80228510: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8022851C;
    }
    // 0x80228510: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x80228514: j           L_8022852C
    // 0x80228518: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8022852C;
    // 0x80228518: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8022851C:
    // 0x8022851C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80228520: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80228524: beq         $v0, $zero, L_8022855C
    if (ctx->r2 == 0) {
        // 0x80228528: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_8022855C;
    }
    // 0x80228528: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_8022852C:
    // 0x8022852C: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x80228530: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x80228534: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80228538: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022853C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228540: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228544: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80228548: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022854C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80228550: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x80228554: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80228558: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_8022855C:
    // 0x8022855C: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x80228560: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x80228564: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80228568: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x8022856C: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x80228570: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80228574: beq         $v0, $zero, L_80228588
    if (ctx->r2 == 0) {
        // 0x80228578: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_80228588;
    }
    // 0x80228578: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8022857C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228580: j           L_8022859C
    // 0x80228584: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_8022859C;
    // 0x80228584: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_80228588:
    // 0x80228588: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022858C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80228590: beq         $v0, $zero, L_802285CC
    if (ctx->r2 == 0) {
        // 0x80228594: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_802285CC;
    }
    // 0x80228594: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80228598: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_8022859C:
    // 0x8022859C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802285A0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802285A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802285A8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802285AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802285B0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802285B4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802285B8: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802285BC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802285C0: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x802285C4: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x802285C8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_802285CC:
    // 0x802285CC: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802285D0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802285D4: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x802285D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802285DC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802285E0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802285E4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802285E8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802285EC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x802285F0: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802285F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802285F8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x802285FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228600: bne         $v0, $zero, L_8022860C
    if (ctx->r2 != 0) {
        // 0x80228604: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022860C;
    }
    // 0x80228604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228608:
    // 0x80228608: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022860C:
    // 0x8022860C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80228610: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80228614: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80228618: jr          $ra
    // 0x8022861C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022861C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80227A14_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227A18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227A1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227A20: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227A24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227A28: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80227A2C: bgez        $v0, L_80227A50
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227A30: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80227A50;
    }
    // 0x80227A30: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80227A34: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227A38: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80227A3C: beq         $a0, $v0, L_80227A50
    if (ctx->r4 == ctx->r2) {
        // 0x80227A40: nop
    
            goto L_80227A50;
    }
    // 0x80227A40: nop

    // 0x80227A44: jal         0x802296D8
    // 0x80227A48: nop

    func_802296D8_ovl29(rdram, ctx);
        goto after_0;
    // 0x80227A48: nop

    after_0:
    // 0x80227A4C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227A50:
    // 0x80227A50: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80227A54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227A58: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80227A5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227A60: bne         $v0, $zero, L_80227ACC
    if (ctx->r2 != 0) {
        // 0x80227A64: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80227ACC;
    }
    // 0x80227A64: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80227A68: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227A6C: bne         $a0, $v0, L_80227A84
    if (ctx->r4 != ctx->r2) {
        // 0x80227A70: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80227A84;
    }
    // 0x80227A70: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80227A74: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227A78: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80227A7C: j           L_80227A9C
    // 0x80227A80: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80227A9C;
    // 0x80227A80: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227A84:
    // 0x80227A84: jal         0x802296E8
    // 0x80227A88: nop

    func_802296E8_ovl29(rdram, ctx);
        goto after_1;
    // 0x80227A88: nop

    after_1:
    // 0x80227A8C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227A90: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227A94: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227A98: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80227A9C:
    // 0x80227A9C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80227AA0: beq         $v0, $zero, L_80227AB4
    if (ctx->r2 == 0) {
        // 0x80227AA4: nop
    
            goto L_80227AB4;
    }
    // 0x80227AA4: nop

    // 0x80227AA8: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80227AAC: j           L_80227AC4
    // 0x80227AB0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_80227AC4;
    // 0x80227AB0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80227AB4:
    // 0x80227AB4: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80227AB8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227ABC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227AC0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80227AC4:
    // 0x80227AC4: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x80227AC8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_80227ACC:
    // 0x80227ACC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227AD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227AD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227AD8: jr          $ra
    // 0x80227ADC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227ADC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D540_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D540: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D544: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D548: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D54C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D550: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D554: lh          $a0, 0x4E4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4E4);
    // 0x8022D558: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022D55C: jal         0x8004FA7C
    // 0x8022D560: lh          $a2, 0x4E6($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X4E6);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022D560: lh          $a2, 0x4E6($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X4E6);
    after_0:
    // 0x8022D564: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022D568: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022D56C: beq         $v0, $zero, L_8022D584
    if (ctx->r2 == 0) {
        // 0x8022D570: nop
    
            goto L_8022D584;
    }
    // 0x8022D570: nop

    // 0x8022D574: jal         0x8006033C
    // 0x8022D578: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022D578: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    after_1:
    // 0x8022D57C: beq         $v0, $zero, L_8022D5A4
    if (ctx->r2 == 0) {
        // 0x8022D580: nop
    
            goto L_8022D5A4;
    }
    // 0x8022D580: nop

L_8022D584:
    // 0x8022D584: lbu         $a0, 0x4E2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4E2);
    // 0x8022D588: lhu         $v1, 0x4E0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E0);
    // 0x8022D58C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D590: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022D594: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022D598: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x8022D59C: j           L_8022D5B4
    // 0x8022D5A0: sh          $v1, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r3;
        goto L_8022D5B4;
    // 0x8022D5A0: sh          $v1, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r3;
L_8022D5A4:
    // 0x8022D5A4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D5A8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022D5AC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D5B0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022D5B4:
    // 0x8022D5B4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D5B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D5BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D5C0: jr          $ra
    // 0x8022D5C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D5C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022639C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022639C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802263A0: bne         $v0, $zero, L_802263F0
    if (ctx->r2 != 0) {
        // 0x802263A4: lui         $v0, 0xF092
        ctx->r2 = S32(0XF092 << 16);
            goto L_802263F0;
    }
    // 0x802263A4: lui         $v0, 0xF092
    ctx->r2 = S32(0XF092 << 16);
    // 0x802263A8: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802263AC: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x802263B0: lui         $v0, 0xFD12
    ctx->r2 = S32(0XFD12 << 16);
    // 0x802263B4: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x802263B8: addiu       $v0, $zero, 0x320
    ctx->r2 = ADD32(0, 0X320);
    // 0x802263BC: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x802263C0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802263C4: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x802263C8: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x802263CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802263D0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802263D4: lui         $v0, 0xF060
    ctx->r2 = S32(0XF060 << 16);
    // 0x802263D8: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x802263DC: lui         $v0, 0xFD44
    ctx->r2 = S32(0XFD44 << 16);
    // 0x802263E0: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x802263E4: addiu       $v0, $zero, 0x258
    ctx->r2 = ADD32(0, 0X258);
    // 0x802263E8: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802263EC: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
L_802263F0:
    // 0x802263F0: jr          $ra
    // 0x802263F4: nop

    TRACE_RETURN()
    return;
    // 0x802263F4: nop

;}
RECOMP_FUNC void func_8022A608_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A608: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A60C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A610: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A614: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A618: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022A61C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A620: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022A624: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022A628: jal         0x8004DA90
    // 0x8022A62C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022A62C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022A630: jal         0x8003E810
    // 0x8022A634: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_1;
    // 0x8022A634: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022A638: bne         $v0, $zero, L_8022A654
    if (ctx->r2 != 0) {
        // 0x8022A63C: nop
    
            goto L_8022A654;
    }
    // 0x8022A63C: nop

    // 0x8022A640: jal         0x80040F30
    // 0x8022A644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022A644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A648: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8022A64C: j           L_8022A660
    // 0x8022A650: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022A660;
    // 0x8022A650: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022A654:
    // 0x8022A654: jal         0x8004F418
    // 0x8022A658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8022A658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A65C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A660:
    // 0x8022A660: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A664: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A668: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A66C: jr          $ra
    // 0x8022A670: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A670: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DB58_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DB58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DB5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DB60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DB64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DB68: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DB6C: bnel        $v0, $zero, L_8022DB90
    if (ctx->r2 != 0) {
        // 0x8022DB70: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DB90;
    }
    goto skip_0;
    // 0x8022DB70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022DB74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022DB78: jal         0x80050294
    // 0x8022DB7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022DB7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022DB80: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DB84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DB88: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022DB8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022DB90:
    // 0x8022DB90: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    // 0x8022DB94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DB98: jal         0x8004DA90
    // 0x8022DB9C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022DB9C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022DBA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DBA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DBA8: jr          $ra
    // 0x8022DBAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DBAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226268_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226268: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022626C: bne         $v0, $zero, L_80226290
    if (ctx->r2 != 0) {
        // 0x80226270: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226290;
    }
    // 0x80226270: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226274: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226278: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022627C: lui         $v0, 0xF042
    ctx->r2 = S32(0XF042 << 16);
    // 0x80226280: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80226284: lui         $v0, 0xFF38
    ctx->r2 = S32(0XFF38 << 16);
    // 0x80226288: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x8022628C: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
L_80226290:
    // 0x80226290: jr          $ra
    // 0x80226294: nop

    TRACE_RETURN()
    return;
    // 0x80226294: nop

;}
RECOMP_FUNC void func_8022DCB0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DCB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DCB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DCB8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022DCBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DCC0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DCC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DCC8: lw          $v0, 0x15E0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X15E0);
    // 0x8022DCCC: jalr        $v0
    // 0x8022DCD0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022DCD0: nop

    after_0:
    // 0x8022DCD4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DCD8: jr          $ra
    // 0x8022DCDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DCDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A2EC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A2EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A2F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A2F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A2F8: lhu         $v1, 0x362($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X362);
    // 0x8022A2FC: bne         $a1, $zero, L_8022A32C
    if (ctx->r5 != 0) {
        // 0x8022A300: addiu       $s0, $a0, 0x348
        ctx->r16 = ADD32(ctx->r4, 0X348);
            goto L_8022A32C;
    }
    // 0x8022A300: addiu       $s0, $a0, 0x348
    ctx->r16 = ADD32(ctx->r4, 0X348);
    // 0x8022A304: jal         0x800A3450
    // 0x8022A308: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A308: nop

    after_0:
    // 0x8022A30C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022A310: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022A314: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A318: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A31C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022A320: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022A324: j           L_8022A350
    // 0x8022A328: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_8022A350;
    // 0x8022A328: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_8022A32C:
    // 0x8022A32C: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x8022A330: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x8022A334: bnel        $v0, $zero, L_8022A33C
    if (ctx->r2 != 0) {
        // 0x8022A338: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022A33C;
    }
    goto skip_0;
    // 0x8022A338: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_8022A33C:
    // 0x8022A33C: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
    // 0x8022A340: beq         $v0, $zero, L_8022A350
    if (ctx->r2 == 0) {
        // 0x8022A344: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022A350;
    }
    // 0x8022A344: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022A348: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A34C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_8022A350:
    // 0x8022A350: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8022A354: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x8022A358: sh          $zero, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = 0;
    // 0x8022A35C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A360: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A364: jr          $ra
    // 0x8022A368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B420_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B424: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B428: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B42C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022B430: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B438: jal         0x8009A3B4
    // 0x8022B43C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B43C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022B440: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022B444: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022B448: jal         0x8009A3B4
    // 0x8022B44C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B44C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022B450: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022B454: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022B458: jal         0x8009A3B4
    // 0x8022B45C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022B45C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022B460: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B464: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B468: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B46C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B470: lw          $v0, 0x1330($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1330);
    // 0x8022B474: jalr        $v0
    // 0x8022B478: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022B478: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B47C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B480: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022B484: beq         $v0, $zero, L_8022B49C
    if (ctx->r2 == 0) {
        // 0x8022B488: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B49C;
    }
    // 0x8022B488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B48C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022B490: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022B494: jal         0x8003B564
    // 0x8022B498: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022B498: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022B49C:
    // 0x8022B49C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B4A0: beq         $v0, $zero, L_8022B4B8
    if (ctx->r2 == 0) {
        // 0x8022B4A4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022B4B8;
    }
    // 0x8022B4A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B4A8: jal         0x8005044C
    // 0x8022B4AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022B4AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022B4B0: j           L_8022B4BC
    // 0x8022B4B4: nop

        goto L_8022B4BC;
    // 0x8022B4B4: nop

L_8022B4B8:
    // 0x8022B4B8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B4BC:
    // 0x8022B4BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B4C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B4C4: jr          $ra
    // 0x8022B4C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B4C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B1D0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B1D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B1D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B1D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B1DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B1E0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B1E4: bne         $v0, $zero, L_8022B200
    if (ctx->r2 != 0) {
        // 0x8022B1E8: addiu       $a1, $zero, 0x14
        ctx->r5 = ADD32(0, 0X14);
            goto L_8022B200;
    }
    // 0x8022B1E8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8022B1EC: jal         0x80050294
    // 0x8022B1F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022B1F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022B1F4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B1F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B1FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B200:
    // 0x8022B200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B204: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B208: jr          $ra
    // 0x8022B20C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B20C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228DE4_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228DE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228DE8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228DEC: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80228DF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228DF4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228DF8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228DFC: lw          $v0, 0x11FC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X11FC);
    // 0x80228E00: jalr        $v0
    // 0x80228E04: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228E04: nop

    after_0:
    // 0x80228E08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228E0C: jr          $ra
    // 0x80228E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A470_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A470: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A474: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022A478: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A47C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A480: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A484: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022A488: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022A48C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022A490: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022A494: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A498: bne         $v0, $s1, L_8022A57C
    if (ctx->r2 != ctx->r17) {
        // 0x8022A49C: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8022A57C;
    }
    // 0x8022A49C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A4A0: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022A4A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A4A8: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022A4AC: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x8022A4B0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A4B4: jal         0x8004F820
    // 0x8022A4B8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022A4B8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x8022A4BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A4C0: bgez        $v0, L_8022A4EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A4C4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A4EC;
    }
    // 0x8022A4C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A4C8: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022A4CC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A4D0: jal         0x8004F820
    // 0x8022A4D4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022A4D4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022A4D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A4DC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A4E0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022A4E4: j           L_8022A504
    // 0x8022A4E8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022A504;
    // 0x8022A4E8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022A4EC:
    // 0x8022A4EC: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022A4F0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A4F4: jal         0x8004F820
    // 0x8022A4F8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022A4F8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022A4FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A500: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022A504:
    // 0x8022A504: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x8022A508: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8022A50C: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x8022A510: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x8022A514: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022A518: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8022A51C: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8022A520: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x8022A524: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x8022A528: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022A52C: addiu       $s0, $s0, 0x1AE0
    ctx->r16 = ADD32(ctx->r16, 0X1AE0);
    // 0x8022A530: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8022A534: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x8022A538: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022A53C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A540: sw          $v0, 0x1AE4($at)
    MEM_W(0X1AE4, ctx->r1) = ctx->r2;
    // 0x8022A544: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x8022A548: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x8022A54C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A550: sw          $v0, 0x1AE8($at)
    MEM_W(0X1AE8, ctx->r1) = ctx->r2;
    // 0x8022A554: jal         0x8004EC38
    // 0x8022A558: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8022A558: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022A55C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A560: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022A564: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022A568: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022A56C: jal         0x80034FCC
    // 0x8022A570: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x8022A570: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x8022A574: j           L_8022A580
    // 0x8022A578: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022A580;
    // 0x8022A578: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A57C:
    // 0x8022A57C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022A580:
    // 0x8022A580: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A584: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A588: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A58C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A590: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A594: jr          $ra
    // 0x8022A598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022769C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022769C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802276A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802276A4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802276A8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802276AC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802276B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802276B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802276B8: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x802276BC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802276C0: addiu       $v0, $v0, 0x10A8
    ctx->r2 = ADD32(ctx->r2, 0X10A8);
    // 0x802276C4: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x802276C8: jal         0x800A3450
    // 0x802276CC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x802276CC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x802276D0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802276D4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x802276D8: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x802276DC: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x802276E0: addiu       $s0, $s0, 0x10E8
    ctx->r16 = ADD32(ctx->r16, 0X10E8);
    // 0x802276E4: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x802276E8: beq         $v1, $zero, L_80227704
    if (ctx->r3 == 0) {
        // 0x802276EC: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80227704;
    }
    // 0x802276EC: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x802276F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802276F4: beq         $v1, $v0, L_80227724
    if (ctx->r3 == ctx->r2) {
        // 0x802276F8: nop
    
            goto L_80227724;
    }
    // 0x802276F8: nop

    // 0x802276FC: j           L_80227738
    // 0x80227700: nop

        goto L_80227738;
    // 0x80227700: nop

L_80227704:
    // 0x80227704: jal         0x802296E8
    // 0x80227708: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_802296E8_ovl29(rdram, ctx);
        goto after_1;
    // 0x80227708: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x8022770C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227710: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227714: jal         0x80229728
    // 0x80227718: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_80229728_ovl29(rdram, ctx);
        goto after_2;
    // 0x80227718: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022771C: j           L_80227790
    // 0x80227720: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_80227790;
    // 0x80227720: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80227724:
    // 0x80227724: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80227728: jal         0x802296D8
    // 0x8022772C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_802296D8_ovl29(rdram, ctx);
        goto after_3;
    // 0x8022772C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x80227730: j           L_80227790
    // 0x80227734: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_80227790;
    // 0x80227734: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_80227738:
    // 0x80227738: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x8022773C: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x80227740: bne         $v1, $v0, L_80227750
    if (ctx->r3 != ctx->r2) {
        // 0x80227744: nop
    
            goto L_80227750;
    }
    // 0x80227744: nop

    // 0x80227748: j           L_80227790
    // 0x8022774C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_80227790;
    // 0x8022774C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_80227750:
    // 0x80227750: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80227754: jal         0x802296E8
    // 0x80227758: nop

    func_802296E8_ovl29(rdram, ctx);
        goto after_4;
    // 0x80227758: nop

    after_4:
    // 0x8022775C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80227760: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80227764: beq         $v0, $zero, L_80227778
    if (ctx->r2 == 0) {
        // 0x80227768: nop
    
            goto L_80227778;
    }
    // 0x80227768: nop

    // 0x8022776C: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80227770: j           L_80227788
    // 0x80227774: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_80227788;
    // 0x80227774: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80227778:
    // 0x80227778: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8022777C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227780: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227784: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80227788:
    // 0x80227788: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022778C: addiu       $s0, $s0, 0x1108
    ctx->r16 = ADD32(ctx->r16, 0X1108);
L_80227790:
    // 0x80227790: jal         0x800A3450
    // 0x80227794: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80227794: nop

    after_5:
    // 0x80227798: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022779C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802277A0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802277A4: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x802277A8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x802277AC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802277B0: beq         $v1, $v0, L_802277C8
    if (ctx->r3 == ctx->r2) {
        // 0x802277B4: nop
    
            goto L_802277C8;
    }
    // 0x802277B4: nop

    // 0x802277B8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802277BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802277C0: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x802277C4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802277C8:
    // 0x802277C8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802277CC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802277D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802277D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802277D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802277DC: jr          $ra
    // 0x802277E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802277E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226540_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226540: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226544: bne         $v0, $zero, L_80226568
    if (ctx->r2 != 0) {
        // 0x80226548: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226568;
    }
    // 0x80226548: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022654C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226550: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226554: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226558: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x8022655C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226560: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226564: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226568:
    // 0x80226568: jr          $ra
    // 0x8022656C: nop

    TRACE_RETURN()
    return;
    // 0x8022656C: nop

;}
RECOMP_FUNC void func_8022B104_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B104: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B108: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B10C: jal         0x8004F418
    // 0x8022B110: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022B110: nop

    after_0:
    // 0x8022B114: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B118: jr          $ra
    // 0x8022B11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BE8C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BE8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022BE90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022BE94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BE98: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022BE9C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022BEA0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022BEA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022BEA8: lw          $v0, 0x354($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X354);
    // 0x8022BEAC: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022BEB0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022BEB4: beq         $v0, $zero, L_8022BECC
    if (ctx->r2 == 0) {
        // 0x8022BEB8: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022BECC;
    }
    // 0x8022BEB8: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022BEBC: jal         0x80060D38
    // 0x8022BEC0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80060D38_3C138(rdram, ctx);
        goto after_0;
    // 0x8022BEC0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8022BEC4: j           L_8022BEDC
    // 0x8022BEC8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8022BEDC;
    // 0x8022BEC8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022BECC:
    // 0x8022BECC: jal         0x8022C860
    // 0x8022BED0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C860_ovl29(rdram, ctx);
        goto after_1;
    // 0x8022BED0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022BED4: beq         $v0, $zero, L_8022BEE8
    if (ctx->r2 == 0) {
        // 0x8022BED8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022BEE8;
    }
    // 0x8022BED8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022BEDC:
    // 0x8022BEDC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022BEE0: j           L_8022C18C
    // 0x8022BEE4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022C18C;
    // 0x8022BEE4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022BEE8:
    // 0x8022BEE8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022BEEC: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022BEF0: jal         0x8004DDE8
    // 0x8022BEF4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_2;
    // 0x8022BEF4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022BEF8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BEFC: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x8022BF00: sltiu       $v0, $v1, 0x15
    ctx->r2 = ctx->r3 < 0X15 ? 1 : 0;
    // 0x8022BF04: beq         $v0, $zero, L_8022C18C
    if (ctx->r2 == 0) {
        // 0x8022BF08: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022C18C;
    }
    // 0x8022BF08: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022BF0C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BF10: addu        $at, $at, $v0
    gpr jr_addend_8022BF18 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BF14: lw          $v0, 0x19A8($at)
    ctx->r2 = ADD32(ctx->r1, 0X19A8);
    // 0x8022BF18: jr          $v0
    // 0x8022BF1C: nop

    switch (jr_addend_8022BF18 >> 2) {
        case 0: goto L_8022BF20; break;
        case 1: goto L_8022BF3C; break;
        case 2: goto L_8022C098; break;
        case 3: goto L_8022C13C; break;
        case 4: goto L_8022C18C; break;
        case 5: goto L_8022C18C; break;
        case 6: goto L_8022C18C; break;
        case 7: goto L_8022C18C; break;
        case 8: goto L_8022C18C; break;
        case 9: goto L_8022C18C; break;
        case 10: goto L_8022C0C8; break;
        case 11: goto L_8022C100; break;
        case 12: goto L_8022C18C; break;
        case 13: goto L_8022C18C; break;
        case 14: goto L_8022C18C; break;
        case 15: goto L_8022C114; break;
        case 16: goto L_8022C18C; break;
        case 17: goto L_8022C18C; break;
        case 18: goto L_8022C18C; break;
        case 19: goto L_8022C18C; break;
        case 20: goto L_8022C15C; break;
        default: switch_error(__func__, 0x8022BF18, 0x802319A8);
    }
    // 0x8022BF1C: nop

L_8022BF20:
    // 0x8022BF20: jal         0x800A3450
    // 0x8022BF24: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022BF24: nop

    after_3:
    // 0x8022BF28: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022BF2C: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022BF30: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BF34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BF38: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BF3C:
    // 0x8022BF3C: jal         0x8022CA04
    // 0x8022BF40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022CA04_ovl29(rdram, ctx);
        goto after_4;
    // 0x8022BF40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022BF44: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022BF48: beq         $v0, $zero, L_8022C18C
    if (ctx->r2 == 0) {
        // 0x8022BF4C: nop
    
            goto L_8022C18C;
    }
    // 0x8022BF4C: nop

    // 0x8022BF50: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x8022BF54: sltiu       $v0, $v0, 0x12C
    ctx->r2 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x8022BF58: beq         $v0, $zero, L_8022BF7C
    if (ctx->r2 == 0) {
        // 0x8022BF5C: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_8022BF7C;
    }
    // 0x8022BF5C: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8022BF60: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022BF64: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022BF68: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022BF6C: beq         $v0, $v1, L_8022BFA4
    if (ctx->r2 == ctx->r3) {
        // 0x8022BF70: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BFA4;
    }
    // 0x8022BF70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BF74: j           L_8022BF98
    // 0x8022BF78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8022BF98;
    // 0x8022BF78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8022BF7C:
    // 0x8022BF7C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022BF80: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8022BF84: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022BF88: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022BF8C: beq         $v0, $v1, L_8022BFA4
    if (ctx->r2 == ctx->r3) {
        // 0x8022BF90: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BFA4;
    }
    // 0x8022BF90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BF94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022BF98:
    // 0x8022BF98: jal         0x80050294
    // 0x8022BF9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022BF9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022BFA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022BFA4:
    // 0x8022BFA4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022BFA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BFAC: jal         0x8004DA90
    // 0x8022BFB0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x8022BFB0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x8022BFB4: jal         0x80040F30
    // 0x8022BFB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_7;
    // 0x8022BFB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022BFBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BFC0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022BFC4: jal         0x8022C914
    // 0x8022BFC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8022C914_ovl29(rdram, ctx);
        goto after_8;
    // 0x8022BFC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_8:
    // 0x8022BFCC: lb          $s2, 0xD($s0)
    ctx->r18 = MEM_B(ctx->r16, 0XD);
    // 0x8022BFD0: beq         $s2, $zero, L_8022C028
    if (ctx->r18 == 0) {
        // 0x8022BFD4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C028;
    }
    // 0x8022BFD4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BFD8: jal         0x8004DE68
    // 0x8022BFDC: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    func_8004DE68_29268(rdram, ctx);
        goto after_9;
    // 0x8022BFDC: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    after_9:
    // 0x8022BFE0: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8022BFE4: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x8022BFE8: beq         $v0, $zero, L_8022C028
    if (ctx->r2 == 0) {
        // 0x8022BFEC: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_8022C028;
    }
    // 0x8022BFEC: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8022BFF0: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022BFF4: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022BFF8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022BFFC: beq         $v0, $v1, L_8022C010
    if (ctx->r2 == ctx->r3) {
        // 0x8022C000: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C010;
    }
    // 0x8022C000: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C004: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022C008: jal         0x80050294
    // 0x8022C00C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x8022C00C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
L_8022C010:
    // 0x8022C010: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022C014: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022C018: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x8022C01C: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022C020: j           L_8022C188
    // 0x8022C024: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8022C188;
    // 0x8022C024: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8022C028:
    // 0x8022C028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C02C: jal         0x8022C7EC
    // 0x8022C030: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8022C7EC_ovl29(rdram, ctx);
        goto after_11;
    // 0x8022C030: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_11:
    // 0x8022C034: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C038: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022C03C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C040: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C044: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C048: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C04C: jal         0x8022C99C
    // 0x8022C050: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8022C99C_ovl29(rdram, ctx);
        goto after_12;
    // 0x8022C050: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_12:
    // 0x8022C054: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8022C058: bne         $v0, $zero, L_8022C18C
    if (ctx->r2 != 0) {
        // 0x8022C05C: nop
    
            goto L_8022C18C;
    }
    // 0x8022C05C: nop

    // 0x8022C060: lh          $v0, 0x4($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X4);
    // 0x8022C064: bne         $v0, $zero, L_8022C08C
    if (ctx->r2 != 0) {
        // 0x8022C068: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C08C;
    }
    // 0x8022C068: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C06C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C070: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C074: jal         0x800A3450
    // 0x8022C078: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_13;
    // 0x8022C078: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_13:
    // 0x8022C07C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022C080: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C084: j           L_8022C18C
    // 0x8022C088: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
        goto L_8022C18C;
    // 0x8022C088: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_8022C08C:
    // 0x8022C08C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C090: j           L_8022C18C
    // 0x8022C094: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
        goto L_8022C18C;
    // 0x8022C094: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_8022C098:
    // 0x8022C098: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022C09C: bgez        $v0, L_8022C13C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C0A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C13C;
    }
    // 0x8022C0A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C0A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C0A8: jal         0x80050294
    // 0x8022C0AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_14;
    // 0x8022C0AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
    // 0x8022C0B0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C0B4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022C0B8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022C0BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C0C0: j           L_8022C13C
    // 0x8022C0C4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C13C;
    // 0x8022C0C4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C0C8:
    // 0x8022C0C8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C0CC: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022C0D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C0D4: jal         0x8004F820
    // 0x8022C0D8: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    func_8004F820_2AC20(rdram, ctx);
        goto after_15;
    // 0x8022C0D8: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    after_15:
    // 0x8022C0DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C0E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C0E4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C0E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C0EC: bne         $v0, $zero, L_8022C18C
    if (ctx->r2 != 0) {
        // 0x8022C0F0: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022C18C;
    }
    // 0x8022C0F0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022C0F4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C0F8: j           L_8022C188
    // 0x8022C0FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022C188;
    // 0x8022C0FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022C100:
    // 0x8022C100: jal         0x8022CA04
    // 0x8022C104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022CA04_ovl29(rdram, ctx);
        goto after_16;
    // 0x8022C104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x8022C108: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C10C: beq         $v0, $zero, L_8022C18C
    if (ctx->r2 == 0) {
        // 0x8022C110: nop
    
            goto L_8022C18C;
    }
    // 0x8022C110: nop

L_8022C114:
    // 0x8022C114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C118: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022C11C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C120: jal         0x8004DA90
    // 0x8022C124: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_17;
    // 0x8022C124: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_17:
    // 0x8022C128: jal         0x80040F30
    // 0x8022C12C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_18;
    // 0x8022C12C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_18:
    // 0x8022C130: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C134: jal         0x8022C914
    // 0x8022C138: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8022C914_ovl29(rdram, ctx);
        goto after_19;
    // 0x8022C138: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_19:
L_8022C13C:
    // 0x8022C13C: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8022C140: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C144: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022C148: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C14C: beql        $v0, $zero, L_8022C18C
    if (ctx->r2 == 0) {
        // 0x8022C150: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8022C18C;
    }
    goto skip_0;
    // 0x8022C150: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
    // 0x8022C154: j           L_8022C18C
    // 0x8022C158: nop

        goto L_8022C18C;
    // 0x8022C158: nop

L_8022C15C:
    // 0x8022C15C: lh          $a0, 0x2($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X2);
    // 0x8022C160: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022C164: jal         0x8004FA7C
    // 0x8022C168: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_20;
    // 0x8022C168: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_20:
    // 0x8022C16C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C170: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C174: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C178: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C17C: bne         $v0, $zero, L_8022C18C
    if (ctx->r2 != 0) {
        // 0x8022C180: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022C18C;
    }
    // 0x8022C180: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022C184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C188:
    // 0x8022C188: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C18C:
    // 0x8022C18C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022C190: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022C194: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022C198: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C19C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C1A0: jr          $ra
    // 0x8022C1A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022C1A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022AC38_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AC38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AC3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AC40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AC44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AC48: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AC4C: bne         $v0, $zero, L_8022AC68
    if (ctx->r2 != 0) {
        // 0x8022AC50: addiu       $a1, $zero, 0x19
        ctx->r5 = ADD32(0, 0X19);
            goto L_8022AC68;
    }
    // 0x8022AC50: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8022AC54: jal         0x80050294
    // 0x8022AC58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022AC58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022AC5C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AC60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AC64: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022AC68:
    // 0x8022AC68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AC6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AC70: jr          $ra
    // 0x8022AC74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AC74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C94_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225C9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225CA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225CA4: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225CA8: beq         $v1, $zero, L_80225CC0
    if (ctx->r3 == 0) {
        // 0x80225CAC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225CC0;
    }
    // 0x80225CAC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225CB0: beq         $v1, $v0, L_80225D58
    if (ctx->r3 == ctx->r2) {
        // 0x80225CB4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225D58;
    }
    // 0x80225CB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225CB8: j           L_80225D4C
    // 0x80225CBC: nop

        goto L_80225D4C;
    // 0x80225CBC: nop

L_80225CC0:
    // 0x80225CC0: jal         0x8006033C
    // 0x80225CC4: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225CC4: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    after_0:
    // 0x80225CC8: beq         $v0, $zero, L_80225CD8
    if (ctx->r2 == 0) {
        // 0x80225CCC: nop
    
            goto L_80225CD8;
    }
    // 0x80225CCC: nop

    // 0x80225CD0: jal         0x80225DFC
    // 0x80225CD4: nop

    func_80225DFC_ovl29(rdram, ctx);
        goto after_1;
    // 0x80225CD4: nop

    after_1:
L_80225CD8:
    // 0x80225CD8: jal         0x8006033C
    // 0x80225CDC: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225CDC: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_2:
    // 0x80225CE0: beq         $v0, $zero, L_80225D18
    if (ctx->r2 == 0) {
        // 0x80225CE4: nop
    
            goto L_80225D18;
    }
    // 0x80225CE4: nop

    // 0x80225CE8: jal         0x8006033C
    // 0x80225CEC: addiu       $a0, $zero, 0x249
    ctx->r4 = ADD32(0, 0X249);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80225CEC: addiu       $a0, $zero, 0x249
    ctx->r4 = ADD32(0, 0X249);
    after_3:
    // 0x80225CF0: bne         $v0, $zero, L_80225D18
    if (ctx->r2 != 0) {
        // 0x80225CF4: nop
    
            goto L_80225D18;
    }
    // 0x80225CF4: nop

    // 0x80225CF8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225CFC: jal         0x8005FB30
    // 0x80225D00: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_4;
    // 0x80225D00: addiu       $a0, $a0, 0x590
    ctx->r4 = ADD32(ctx->r4, 0X590);
    after_4:
    // 0x80225D04: jal         0x8006036C
    // 0x80225D08: addiu       $a0, $zero, 0x249
    ctx->r4 = ADD32(0, 0X249);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80225D08: addiu       $a0, $zero, 0x249
    ctx->r4 = ADD32(0, 0X249);
    after_5:
    // 0x80225D0C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225D10: j           L_80225D4C
    // 0x80225D14: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_80225D4C;
    // 0x80225D14: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225D18:
    // 0x80225D18: jal         0x8006033C
    // 0x80225D1C: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80225D1C: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    after_6:
    // 0x80225D20: beq         $v0, $zero, L_80225D4C
    if (ctx->r2 == 0) {
        // 0x80225D24: nop
    
            goto L_80225D4C;
    }
    // 0x80225D24: nop

    // 0x80225D28: jal         0x8006033C
    // 0x80225D2C: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80225D2C: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    after_7:
    // 0x80225D30: bne         $v0, $zero, L_80225D4C
    if (ctx->r2 != 0) {
        // 0x80225D34: nop
    
            goto L_80225D4C;
    }
    // 0x80225D34: nop

    // 0x80225D38: jal         0x8006036C
    // 0x80225D3C: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x80225D3C: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    after_8:
    // 0x80225D40: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225D44: jal         0x8005FB30
    // 0x80225D48: addiu       $a0, $a0, 0x48C
    ctx->r4 = ADD32(ctx->r4, 0X48C);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_9;
    // 0x80225D48: addiu       $a0, $a0, 0x48C
    ctx->r4 = ADD32(ctx->r4, 0X48C);
    after_9:
L_80225D4C:
    // 0x80225D4C: jal         0x8006036C
    // 0x80225D50: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x80225D50: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_10:
    // 0x80225D54: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80225D58:
    // 0x80225D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225D5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225D60: jr          $ra
    // 0x80225D64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225D64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802258A0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802258A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802258AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802258B0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802258B4: bne         $v0, $zero, L_802258D0
    if (ctx->r2 != 0) {
        // 0x802258B8: nop
    
            goto L_802258D0;
    }
    // 0x802258B8: nop

    // 0x802258BC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802258C0: jal         0x800607C4
    // 0x802258C4: addiu       $a0, $a0, 0x3EC
    ctx->r4 = ADD32(ctx->r4, 0X3EC);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802258C4: addiu       $a0, $a0, 0x3EC
    ctx->r4 = ADD32(ctx->r4, 0X3EC);
    after_0:
    // 0x802258C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802258CC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802258D0:
    // 0x802258D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802258D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802258D8: jr          $ra
    // 0x802258DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802258DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226C30_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226C34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226C38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226C3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226C40: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80226C44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C48: beq         $v1, $v0, L_80226C88
    if (ctx->r3 == ctx->r2) {
        // 0x80226C4C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226C88;
    }
    // 0x80226C4C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226C50: beql        $v0, $zero, L_80226C68
    if (ctx->r2 == 0) {
        // 0x80226C54: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226C68;
    }
    goto skip_0;
    // 0x80226C54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226C58: beq         $v1, $zero, L_80226C78
    if (ctx->r3 == 0) {
        // 0x80226C5C: nop
    
            goto L_80226C78;
    }
    // 0x80226C5C: nop

    // 0x80226C60: j           L_80226D1C
    // 0x80226C64: nop

        goto L_80226D1C;
    // 0x80226C64: nop

L_80226C68:
    // 0x80226C68: beq         $v1, $v0, L_80226CB0
    if (ctx->r3 == ctx->r2) {
        // 0x80226C6C: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80226CB0;
    }
    // 0x80226C6C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80226C70: j           L_80226D1C
    // 0x80226C74: nop

        goto L_80226D1C;
    // 0x80226C74: nop

L_80226C78:
    // 0x80226C78: jal         0x80036E48
    // 0x80226C7C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x80226C7C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80226C80: j           L_80226CA0
    // 0x80226C84: nop

        goto L_80226CA0;
    // 0x80226C84: nop

L_80226C88:
    // 0x80226C88: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226C8C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226C90: bne         $v0, $zero, L_80226D1C
    if (ctx->r2 != 0) {
        // 0x80226C94: nop
    
            goto L_80226D1C;
    }
    // 0x80226C94: nop

    // 0x80226C98: jal         0x8006036C
    // 0x80226C9C: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80226C9C: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    after_1:
L_80226CA0:
    // 0x80226CA0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226CA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226CA8: j           L_80226D1C
    // 0x80226CAC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_80226D1C;
    // 0x80226CAC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226CB0:
    // 0x80226CB0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226CB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CB8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226CBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226CC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CC4: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226CC8: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80226CCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CD0: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80226CD4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226CD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CDC: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80226CE0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226CE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CE8: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80226CEC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226CF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CF4: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x80226CF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CFC: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226D00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226D04: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226D08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226D0C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226D10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226D14: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x80226D18: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80226D1C:
    // 0x80226D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226D20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226D24: jr          $ra
    // 0x80226D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225758_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225758: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022575C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225760: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225764: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225768: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022576C: bne         $v0, $zero, L_80225788
    if (ctx->r2 != 0) {
        // 0x80225770: nop
    
            goto L_80225788;
    }
    // 0x80225770: nop

    // 0x80225774: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225778: jal         0x800607C4
    // 0x8022577C: addiu       $a0, $a0, 0x404
    ctx->r4 = ADD32(ctx->r4, 0X404);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022577C: addiu       $a0, $a0, 0x404
    ctx->r4 = ADD32(ctx->r4, 0X404);
    after_0:
    // 0x80225780: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225784: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225788:
    // 0x80225788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022578C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225790: jr          $ra
    // 0x80225794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225418_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225418: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022541C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225420: jal         0x8006033C
    // 0x80225424: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225424: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x80225428: bne         $v0, $zero, L_80225474
    if (ctx->r2 != 0) {
        // 0x8022542C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80225474;
    }
    // 0x8022542C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80225430: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225434: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225438: beq         $v1, $v0, L_8022546C
    if (ctx->r3 == ctx->r2) {
        // 0x8022543C: nop
    
            goto L_8022546C;
    }
    // 0x8022543C: nop

    // 0x80225440: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225444: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225448: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022544C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225450: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225454: lw          $v0, 0x454($at)
    ctx->r2 = MEM_W(ctx->r1, 0X454);
    // 0x80225458: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8022545C: jalr        $v0
    // 0x80225460: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80225460: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_1:
    // 0x80225464: j           L_80225474
    // 0x80225468: nop

        goto L_80225474;
    // 0x80225468: nop

L_8022546C:
    // 0x8022546C: jal         0x8006036C
    // 0x80225470: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80225470: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_2:
L_80225474:
    // 0x80225474: jal         0x8006033C
    // 0x80225478: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80225478: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_3:
    // 0x8022547C: beq         $v0, $zero, L_802254BC
    if (ctx->r2 == 0) {
        // 0x80225480: nop
    
            goto L_802254BC;
    }
    // 0x80225480: nop

    // 0x80225484: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225488: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x8022548C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225490: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225494: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225498: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022549C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802254A0: lw          $v1, -0x2F8($at)
    ctx->r3 = MEM_W(ctx->r1, -0X2F8);
    // 0x802254A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802254A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802254AC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802254B0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802254B4: jalr        $v0
    // 0x802254B8: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x802254B8: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_4:
L_802254BC:
    // 0x802254BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802254C0: jr          $ra
    // 0x802254C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802254C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225150_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, -0xDD8
    ctx->r2 = ADD32(ctx->r2, -0XDD8);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, -0xC44
    ctx->r2 = ADD32(ctx->r2, -0XC44);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, -0xC28
    ctx->r2 = ADD32(ctx->r2, -0XC28);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, -0xBD4
    ctx->r2 = ADD32(ctx->r2, -0XBD4);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, -0xBD0
    ctx->r2 = ADD32(ctx->r2, -0XBD0);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0xB5C
    ctx->r2 = ADD32(ctx->r2, -0XB5C);
    // 0x802251A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802251AC: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
    // 0x802251B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802251B4: jr          $ra
    // 0x802251B8: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x802251B8: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8022C7EC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C7EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C7F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C7F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C7F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C7FC: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022C800: bne         $a1, $zero, L_8022C830
    if (ctx->r5 != 0) {
        // 0x8022C804: andi        $v0, $a1, 0x500
        ctx->r2 = ctx->r5 & 0X500;
            goto L_8022C830;
    }
    // 0x8022C804: andi        $v0, $a1, 0x500
    ctx->r2 = ctx->r5 & 0X500;
    // 0x8022C808: jal         0x800A3450
    // 0x8022C80C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022C80C: nop

    after_0:
    // 0x8022C810: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022C814: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022C818: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022C81C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022C820: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022C824: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022C828: j           L_8022C84C
    // 0x8022C82C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_8022C84C;
    // 0x8022C82C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_8022C830:
    // 0x8022C830: bnel        $v0, $zero, L_8022C838
    if (ctx->r2 != 0) {
        // 0x8022C834: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022C838;
    }
    goto skip_0;
    // 0x8022C834: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_8022C838:
    // 0x8022C838: andi        $v0, $a1, 0xA00
    ctx->r2 = ctx->r5 & 0XA00;
    // 0x8022C83C: beq         $v0, $zero, L_8022C84C
    if (ctx->r2 == 0) {
        // 0x8022C840: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022C84C;
    }
    // 0x8022C840: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022C844: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C848: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_8022C84C:
    // 0x8022C84C: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x8022C850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C854: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C858: jr          $ra
    // 0x8022C85C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C85C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D428_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D42C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D430: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D438: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D43C: lh          $a3, 0x4E6($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4E6);
    // 0x8022D440: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D444: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022D448: jal         0x8004F820
    // 0x8022D44C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022D44C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022D450: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D454: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D458: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022D45C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022D460: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D464: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022D468: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x8022D46C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022D470: beq         $v0, $zero, L_8022D488
    if (ctx->r2 == 0) {
        // 0x8022D474: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_8022D488;
    }
    // 0x8022D474: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022D478: lbu         $v0, 0x4E3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4E3);
    // 0x8022D47C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022D480: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D484: sb          $v0, 0x4E3($s0)
    MEM_B(0X4E3, ctx->r16) = ctx->r2;
L_8022D488:
    // 0x8022D488: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022D48C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022D490: bne         $v0, $zero, L_8022D4AC
    if (ctx->r2 != 0) {
        // 0x8022D494: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D4AC;
    }
    // 0x8022D494: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D498: lhu         $v1, 0x4E0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E0);
    // 0x8022D49C: sb          $v0, 0x4E3($s0)
    MEM_B(0X4E3, ctx->r16) = ctx->r2;
    // 0x8022D4A0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022D4A4: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x8022D4A8: sh          $v1, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r3;
L_8022D4AC:
    // 0x8022D4AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D4B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D4B4: jr          $ra
    // 0x8022D4B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D4B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DC70_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DC70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DC74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DC78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DC7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DC80: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DC84: bne         $v0, $zero, L_8022DCA0
    if (ctx->r2 != 0) {
        // 0x8022DC88: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_8022DCA0;
    }
    // 0x8022DC88: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022DC8C: jal         0x80050294
    // 0x8022DC90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022DC90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022DC94: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DC98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DC9C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022DCA0:
    // 0x8022DCA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DCA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DCA8: jr          $ra
    // 0x8022DCAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DCAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229B08_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229B08: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80229B0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229B10: beq         $v1, $v0, L_80229B50
    if (ctx->r3 == ctx->r2) {
        // 0x80229B14: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80229B50;
    }
    // 0x80229B14: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229B18: beql        $v0, $zero, L_80229B30
    if (ctx->r2 == 0) {
        // 0x80229B1C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229B30;
    }
    goto skip_0;
    // 0x80229B1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80229B20: beq         $v1, $zero, L_80229B48
    if (ctx->r3 == 0) {
        // 0x80229B24: lui         $v0, 0xFC18
        ctx->r2 = S32(0XFC18 << 16);
            goto L_80229B48;
    }
    // 0x80229B24: lui         $v0, 0xFC18
    ctx->r2 = S32(0XFC18 << 16);
    // 0x80229B28: j           L_80229B98
    // 0x80229B2C: nop

        goto L_80229B98;
    // 0x80229B2C: nop

L_80229B30:
    // 0x80229B30: beq         $v1, $v0, L_80229B64
    if (ctx->r3 == ctx->r2) {
        // 0x80229B34: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229B64;
    }
    // 0x80229B34: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229B38: beq         $v1, $v0, L_80229B78
    if (ctx->r3 == ctx->r2) {
        // 0x80229B3C: nop
    
            goto L_80229B78;
    }
    // 0x80229B3C: nop

    // 0x80229B40: j           L_80229B98
    // 0x80229B44: nop

        goto L_80229B98;
    // 0x80229B44: nop

L_80229B48:
    // 0x80229B48: j           L_80229B98
    // 0x80229B4C: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
        goto L_80229B98;
    // 0x80229B4C: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_80229B50:
    // 0x80229B50: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80229B54: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80229B58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229B5C: j           L_80229B98
    // 0x80229B60: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
        goto L_80229B98;
    // 0x80229B60: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_80229B64:
    // 0x80229B64: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80229B68: addiu       $v1, $zero, -0x2000
    ctx->r3 = ADD32(0, -0X2000);
    // 0x80229B6C: sh          $v1, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r3;
    // 0x80229B70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229B74: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80229B78:
    // 0x80229B78: lhu         $v0, 0x46($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X46);
    // 0x80229B7C: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x80229B80: addiu       $v0, $v0, -0x88
    ctx->r2 = ADD32(ctx->r2, -0X88);
    // 0x80229B84: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    // 0x80229B88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229B8C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80229B90: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229B94: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_80229B98:
    // 0x80229B98: jr          $ra
    // 0x80229B9C: nop

    TRACE_RETURN()
    return;
    // 0x80229B9C: nop

;}
RECOMP_FUNC void func_802293F0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802293F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802293F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802293F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802293FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229400: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80229404: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229408: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022940C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80229410: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80229414: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229418: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022941C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80229420: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229424: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80229428: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x8022942C: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229430: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80229434: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229438: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022943C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229440: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x80229444: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x80229448: jal         0x8004F820
    // 0x8022944C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022944C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x80229450: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229454: bgez        $v0, L_80229484
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229458: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80229484;
    }
    // 0x80229458: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022945C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229460: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229464: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229468: jal         0x8004F820
    // 0x8022946C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022946C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80229470: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229474: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229478: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022947C: j           L_802294A0
    // 0x80229480: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_802294A0;
    // 0x80229480: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80229484:
    // 0x80229484: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229488: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022948C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229490: jal         0x8004F820
    // 0x80229494: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80229494: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80229498: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022949C: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_802294A0:
    // 0x802294A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802294A4: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x802294A8: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x802294AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802294B0: jal         0x800610AC
    // 0x802294B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x802294B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x802294B8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802294BC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802294C0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802294C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802294C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802294CC: jr          $ra
    // 0x802294D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802294D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80228B00_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228B04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228B08: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80228B0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228B10: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228B14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228B18: lw          $v0, 0x11F0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X11F0);
    // 0x80228B1C: jalr        $v0
    // 0x80228B20: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228B20: nop

    after_0:
    // 0x80228B24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228B28: jr          $ra
    // 0x80228B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802269D4_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269D4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802269D8: bne         $v0, $zero, L_802269F4
    if (ctx->r2 != 0) {
        // 0x802269DC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802269F4;
    }
    // 0x802269DC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802269E0: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x802269E4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802269E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802269EC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802269F0: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_802269F4:
    // 0x802269F4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802269F8: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x802269FC: bne         $v1, $v0, L_80226A10
    if (ctx->r3 != ctx->r2) {
        // 0x80226A00: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80226A10;
    }
    // 0x80226A00: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226A04: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226A08: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x80226A0C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
L_80226A10:
    // 0x80226A10: bne         $v1, $v0, L_80226A20
    if (ctx->r3 != ctx->r2) {
        // 0x80226A14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226A20;
    }
    // 0x80226A14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226A18: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226A1C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_80226A20:
    // 0x80226A20: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226A24: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226A28: bne         $v1, $v0, L_80226A3C
    if (ctx->r3 != ctx->r2) {
        // 0x80226A2C: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_80226A3C;
    }
    // 0x80226A2C: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80226A30: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226A34: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80226A38: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
L_80226A3C:
    // 0x80226A3C: bne         $v1, $v0, L_80226A50
    if (ctx->r3 != ctx->r2) {
        // 0x80226A40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226A50;
    }
    // 0x80226A40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226A44: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226A48: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80226A4C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_80226A50:
    // 0x80226A50: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226A54: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80226A58: bne         $v1, $v0, L_80226A68
    if (ctx->r3 != ctx->r2) {
        // 0x80226A5C: nop
    
            goto L_80226A68;
    }
    // 0x80226A5C: nop

    // 0x80226A60: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226A64: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
L_80226A68:
    // 0x80226A68: jr          $ra
    // 0x80226A6C: nop

    TRACE_RETURN()
    return;
    // 0x80226A6C: nop

;}
RECOMP_FUNC void func_8022D758_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D758: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D75C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D760: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D764: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022D768: lw          $a0, 0x1B40($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B40);
    // 0x8022D76C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D770: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D774: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8022D778: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8022D77C: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x8022D780: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D784: beq         $v1, $v0, L_8022D818
    if (ctx->r3 == ctx->r2) {
        // 0x8022D788: nop
    
            goto L_8022D818;
    }
    // 0x8022D788: nop

    // 0x8022D78C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8022D790: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022D794: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x8022D798: bne         $v1, $v0, L_8022D818
    if (ctx->r3 != ctx->r2) {
        // 0x8022D79C: nop
    
            goto L_8022D818;
    }
    // 0x8022D79C: nop

    // 0x8022D7A0: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x8022D7A4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022D7A8: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x8022D7AC: bne         $v1, $v0, L_8022D818
    if (ctx->r3 != ctx->r2) {
        // 0x8022D7B0: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8022D818;
    }
    // 0x8022D7B0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022D7B4: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8022D7B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D7BC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D7C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D7C4: lw          $v0, 0x1514($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1514);
    // 0x8022D7C8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D7CC: sw          $v0, 0x1B30($at)
    MEM_W(0X1B30, ctx->r1) = ctx->r2;
    // 0x8022D7D0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D7D4: lw          $v0, 0x1B30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B30);
    // 0x8022D7D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D7DC: sh          $zero, 0x1B34($at)
    MEM_H(0X1B34, ctx->r1) = 0;
    // 0x8022D7E0: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022D7E4: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022D7E8: jal         0x8003B85C
    // 0x8022D7EC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022D7EC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8022D7F0: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8022D7F4: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8022D7F8: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022D7FC: jal         0x8003B840
    // 0x8022D800: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022D800: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022D804: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D808: lw          $v0, 0x1B40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B40);
    // 0x8022D80C: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8022D810: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D814: sw          $v0, 0x1B40($at)
    MEM_W(0X1B40, ctx->r1) = ctx->r2;
L_8022D818:
    // 0x8022D818: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022D81C: lw          $a0, 0x1B44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B44);
    // 0x8022D820: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8022D824: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D828: beq         $v1, $v0, L_8022D8B4
    if (ctx->r3 == ctx->r2) {
        // 0x8022D82C: nop
    
            goto L_8022D8B4;
    }
    // 0x8022D82C: nop

    // 0x8022D830: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8022D834: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022D838: bne         $v1, $v0, L_8022D8B4
    if (ctx->r3 != ctx->r2) {
        // 0x8022D83C: nop
    
            goto L_8022D8B4;
    }
    // 0x8022D83C: nop

    // 0x8022D840: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x8022D844: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x8022D848: bne         $v1, $v0, L_8022D8B4
    if (ctx->r3 != ctx->r2) {
        // 0x8022D84C: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8022D8B4;
    }
    // 0x8022D84C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022D850: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8022D854: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D858: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D85C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D860: lw          $v0, 0x1524($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1524);
    // 0x8022D864: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D868: sw          $v0, 0x1B38($at)
    MEM_W(0X1B38, ctx->r1) = ctx->r2;
    // 0x8022D86C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D870: lw          $v0, 0x1B38($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B38);
    // 0x8022D874: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D878: sh          $zero, 0x1B3C($at)
    MEM_H(0X1B3C, ctx->r1) = 0;
    // 0x8022D87C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022D880: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022D884: jal         0x8003B85C
    // 0x8022D888: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022D888: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x8022D88C: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8022D890: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022D894: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x8022D898: jal         0x8003B840
    // 0x8022D89C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022D89C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x8022D8A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D8A4: lw          $v0, 0x1B44($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B44);
    // 0x8022D8A8: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8022D8AC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D8B0: sw          $v0, 0x1B44($at)
    MEM_W(0X1B44, ctx->r1) = ctx->r2;
L_8022D8B4:
    // 0x8022D8B4: jal         0x8022D600
    // 0x8022D8B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D600_ovl29(rdram, ctx);
        goto after_4;
    // 0x8022D8B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022D8BC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D8C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D8C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D8C8: jr          $ra
    // 0x8022D8CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D8CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B120_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B124: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B128: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B12C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B130: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B134: bne         $v0, $zero, L_8022B170
    if (ctx->r2 != 0) {
        // 0x8022B138: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022B170;
    }
    // 0x8022B138: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B13C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B140: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B144: jal         0x8004D5D4
    // 0x8022B148: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022B148: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022B14C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B150: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B154: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022B158: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022B15C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022B160: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B164: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B168: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B16C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022B170:
    // 0x8022B170: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B174: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B178: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B17C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B180: lw          $v0, 0x1310($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1310);
    // 0x8022B184: jalr        $v0
    // 0x8022B188: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022B188: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B18C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022B190: bnel        $v0, $zero, L_8022B1B0
    if (ctx->r2 != 0) {
        // 0x8022B194: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B1B0;
    }
    goto skip_0;
    // 0x8022B194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022B198: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022B19C: jal         0x8004DD04
    // 0x8022B1A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8022B1A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022B1A4: jal         0x8005044C
    // 0x8022B1A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x8022B1A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B1AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022B1B0:
    // 0x8022B1B0: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x8022B1B4: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x8022B1B8: jal         0x8003B564
    // 0x8022B1BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022B1BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x8022B1C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B1C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B1C8: jr          $ra
    // 0x8022B1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229C2C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229C30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229C34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229C38: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229C3C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80229C40: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80229C44: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229C48: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80229C4C: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x80229C50: beq         $v0, $zero, L_8022A0CC
    if (ctx->r2 == 0) {
        // 0x80229C54: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022A0CC;
    }
    // 0x80229C54: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80229C58: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229C5C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229C60: addu        $at, $at, $v0
    gpr jr_addend_80229C68 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229C64: lw          $v0, 0x1938($at)
    ctx->r2 = ADD32(ctx->r1, 0X1938);
    // 0x80229C68: jr          $v0
    // 0x80229C6C: nop

    switch (jr_addend_80229C68 >> 2) {
        case 0: goto L_80229C70; break;
        case 1: goto L_80229D54; break;
        case 2: goto L_80229DFC; break;
        case 3: goto L_80229E40; break;
        case 4: goto L_80229EBC; break;
        case 5: goto L_80229F64; break;
        case 6: goto L_80229FE0; break;
        case 7: goto L_8022A0CC; break;
        case 8: goto L_8022A08C; break;
        default: switch_error(__func__, 0x80229C68, 0x80231938);
    }
    // 0x80229C6C: nop

L_80229C70:
    // 0x80229C70: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80229C74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229C78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229C7C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229C80: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80229C84: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80229C88: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80229C8C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229C90: jal         0x8004D5D4
    // 0x80229C94: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229C94: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80229C98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229C9C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229CA0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229CA4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229CA8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229CAC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229CB0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80229CB4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80229CB8: addiu       $v0, $v0, 0x1260
    ctx->r2 = ADD32(ctx->r2, 0X1260);
    // 0x80229CBC: jal         0x8003E934
    // 0x80229CC0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80229CC0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x80229CC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229CC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229CCC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229CD0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229CD4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229CD8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229CDC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80229CE0: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80229CE4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229CE8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229CEC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229CF0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80229CF4: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80229CF8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80229CFC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80229D00: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x80229D04: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x80229D08: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80229D0C: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x80229D10: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80229D14: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80229D18: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80229D1C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80229D20: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x80229D24: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229D28: jal         0x80050294
    // 0x80229D2C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80229D2C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x80229D30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229D34: jal         0x8022A448
    // 0x80229D38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022A448_ovl29(rdram, ctx);
        goto after_3;
    // 0x80229D38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x80229D3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229D40: jal         0x8022A428
    // 0x80229D44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022A428_ovl29(rdram, ctx);
        goto after_4;
    // 0x80229D44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80229D48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D4C: j           L_8022A0CC
    // 0x80229D50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022A0CC;
    // 0x80229D50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229D54:
    // 0x80229D54: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x80229D58: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80229D5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229D60: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229D64: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x80229D68: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229D6C: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x80229D70: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229D74: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229D78: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229D7C: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x80229D80: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80229D84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229D88: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80229D8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229D90: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229D94: jal         0x8022A608
    // 0x80229D98: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    func_8022A608_ovl29(rdram, ctx);
        goto after_5;
    // 0x80229D98: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    after_5:
    // 0x80229D9C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229DA0: bne         $v0, $zero, L_8022A0D0
    if (ctx->r2 != 0) {
        // 0x80229DA4: nop
    
            goto L_8022A0D0;
    }
    // 0x80229DA4: nop

    // 0x80229DA8: jal         0x8003E934
    // 0x80229DAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80229DAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80229DB0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80229DB4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229DB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229DBC: beq         $a1, $zero, L_80229DCC
    if (ctx->r5 == 0) {
        // 0x80229DC0: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_80229DCC;
    }
    // 0x80229DC0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229DC4: jal         0x8022A2EC
    // 0x80229DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A2EC_ovl29(rdram, ctx);
        goto after_7;
    // 0x80229DC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80229DCC:
    // 0x80229DCC: jal         0x8022A36C
    // 0x80229DD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A36C_ovl29(rdram, ctx);
        goto after_8;
    // 0x80229DD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80229DD4: jal         0x8005044C
    // 0x80229DD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_9;
    // 0x80229DD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80229DDC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229DE0: bne         $v0, $zero, L_80229DF4
    if (ctx->r2 != 0) {
        // 0x80229DE4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80229DF4;
    }
    // 0x80229DE4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229DE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229DEC: j           L_8022A0CC
    // 0x80229DF0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022A0CC;
    // 0x80229DF0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229DF4:
    // 0x80229DF4: j           L_8022A0CC
    // 0x80229DF8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022A0CC;
    // 0x80229DF8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229DFC:
    // 0x80229DFC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80229E00: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80229E04: bne         $v1, $v0, L_80229E28
    if (ctx->r3 != ctx->r2) {
        // 0x80229E08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229E28;
    }
    // 0x80229E08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229E0C: jal         0x8022A2EC
    // 0x80229E10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022A2EC_ovl29(rdram, ctx);
        goto after_10;
    // 0x80229E10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_10:
    // 0x80229E14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229E18: jal         0x800A3450
    // 0x80229E1C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x80229E1C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_11:
    // 0x80229E20: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80229E24: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229E28:
    // 0x80229E28: jal         0x8022A36C
    // 0x80229E2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A36C_ovl29(rdram, ctx);
        goto after_12;
    // 0x80229E2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x80229E30: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229E34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229E38: j           L_8022A0CC
    // 0x80229E3C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022A0CC;
    // 0x80229E3C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229E40:
    // 0x80229E40: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229E44: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80229E48: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80229E4C: jal         0x8004F820
    // 0x80229E50: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_13;
    // 0x80229E50: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_13:
    // 0x80229E54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229E58: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80229E5C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229E60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229E64: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229E68: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80229E6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229E70: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229E74: jal         0x8022A608
    // 0x80229E78: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8022A608_ovl29(rdram, ctx);
        goto after_14;
    // 0x80229E78: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_14:
    // 0x80229E7C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229E80: bne         $v0, $zero, L_8022A0D0
    if (ctx->r2 != 0) {
        // 0x80229E84: nop
    
            goto L_8022A0D0;
    }
    // 0x80229E84: nop

    // 0x80229E88: jal         0x8003E934
    // 0x80229E8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_15;
    // 0x80229E8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x80229E90: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80229E94: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229E98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229E9C: beq         $a1, $zero, L_80229EAC
    if (ctx->r5 == 0) {
        // 0x80229EA0: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_80229EAC;
    }
    // 0x80229EA0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229EA4: jal         0x8022A2EC
    // 0x80229EA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A2EC_ovl29(rdram, ctx);
        goto after_16;
    // 0x80229EA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
L_80229EAC:
    // 0x80229EAC: jal         0x8022A36C
    // 0x80229EB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A36C_ovl29(rdram, ctx);
        goto after_17;
    // 0x80229EB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x80229EB4: j           L_8022A0C4
    // 0x80229EB8: nop

        goto L_8022A0C4;
    // 0x80229EB8: nop

L_80229EBC:
    // 0x80229EBC: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80229EC0: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80229EC4: xori        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 ^ 0X8;
    // 0x80229EC8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80229ECC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80229ED0: beq         $v1, $zero, L_80229F28
    if (ctx->r3 == 0) {
        // 0x80229ED4: addiu       $a0, $zero, 0x109
        ctx->r4 = ADD32(0, 0X109);
            goto L_80229F28;
    }
    // 0x80229ED4: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x80229ED8: jal         0x8002A33C
    // 0x80229EDC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_18;
    // 0x80229EDC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_18:
    // 0x80229EE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229EE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80229EE8: jal         0x80050294
    // 0x80229EEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_19;
    // 0x80229EEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_19:
    // 0x80229EF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229EF4: jal         0x8022A448
    // 0x80229EF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022A448_ovl29(rdram, ctx);
        goto after_20;
    // 0x80229EF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x80229EFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229F00: jal         0x8022A428
    // 0x80229F04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022A428_ovl29(rdram, ctx);
        goto after_21;
    // 0x80229F04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x80229F08: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80229F0C: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x80229F10: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80229F14: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80229F18: sb          $v1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r3;
    // 0x80229F1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229F20: j           L_80229F30
    // 0x80229F24: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80229F30;
    // 0x80229F24: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229F28:
    // 0x80229F28: jal         0x8005044C
    // 0x80229F2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_22;
    // 0x80229F2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_22:
L_80229F30:
    // 0x80229F30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229F34: jal         0x8022A608
    // 0x80229F38: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022A608_ovl29(rdram, ctx);
        goto after_23;
    // 0x80229F38: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_23:
    // 0x80229F3C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229F40: bne         $v0, $zero, L_8022A0D0
    if (ctx->r2 != 0) {
        // 0x80229F44: nop
    
            goto L_8022A0D0;
    }
    // 0x80229F44: nop

    // 0x80229F48: jal         0x8003E934
    // 0x80229F4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_24;
    // 0x80229F4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x80229F50: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80229F54: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229F58: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229F5C: j           L_80229FC8
    // 0x80229F60: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_80229FC8;
    // 0x80229F60: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80229F64:
    // 0x80229F64: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80229F68: bgez        $v0, L_80229FA4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229F6C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229FA4;
    }
    // 0x80229F6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229F70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80229F74: jal         0x80050294
    // 0x80229F78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_25;
    // 0x80229F78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_25:
    // 0x80229F7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229F80: jal         0x8022A448
    // 0x80229F84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022A448_ovl29(rdram, ctx);
        goto after_26;
    // 0x80229F84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x80229F88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229F8C: jal         0x8022A428
    // 0x80229F90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022A428_ovl29(rdram, ctx);
        goto after_27;
    // 0x80229F90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_27:
    // 0x80229F94: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80229F98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229F9C: j           L_80229FAC
    // 0x80229FA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80229FAC;
    // 0x80229FA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229FA4:
    // 0x80229FA4: jal         0x8005044C
    // 0x80229FA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_28;
    // 0x80229FA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_28:
L_80229FAC:
    // 0x80229FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229FB0: jal         0x8022A608
    // 0x80229FB4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022A608_ovl29(rdram, ctx);
        goto after_29;
    // 0x80229FB4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_29:
    // 0x80229FB8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229FBC: bne         $v0, $zero, L_8022A0D0
    if (ctx->r2 != 0) {
        // 0x80229FC0: nop
    
            goto L_8022A0D0;
    }
    // 0x80229FC0: nop

    // 0x80229FC4: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_80229FC8:
    // 0x80229FC8: beql        $a1, $zero, L_8022A0D0
    if (ctx->r5 == 0) {
        // 0x80229FCC: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_8022A0D0;
    }
    goto skip_0;
    // 0x80229FCC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_0:
    // 0x80229FD0: jal         0x8022A2EC
    // 0x80229FD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A2EC_ovl29(rdram, ctx);
        goto after_30;
    // 0x80229FD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_30:
    // 0x80229FD8: j           L_8022A0D0
    // 0x80229FDC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
        goto L_8022A0D0;
    // 0x80229FDC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_80229FE0:
    // 0x80229FE0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229FE4: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x80229FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229FEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229FF0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229FF4: jal         0x8003E934
    // 0x80229FF8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_31;
    // 0x80229FF8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_31:
    // 0x80229FFC: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022A000: addiu       $v1, $v0, -0x258
    ctx->r3 = ADD32(ctx->r2, -0X258);
    // 0x8022A004: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022A008: beq         $v0, $zero, L_8022A01C
    if (ctx->r2 == 0) {
        // 0x8022A00C: sw          $v1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r3;
            goto L_8022A01C;
    }
    // 0x8022A00C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022A010: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8022A014: j           L_8022A034
    // 0x8022A018: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022A034;
    // 0x8022A018: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022A01C:
    // 0x8022A01C: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8022A020: beq         $v0, $zero, L_8022A030
    if (ctx->r2 == 0) {
        // 0x8022A024: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8022A030;
    }
    // 0x8022A024: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A028: j           L_8022A034
    // 0x8022A02C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022A034;
    // 0x8022A02C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022A030:
    // 0x8022A030: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_8022A034:
    // 0x8022A034: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A038: jal         0x8022A608
    // 0x8022A03C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022A608_ovl29(rdram, ctx);
        goto after_32;
    // 0x8022A03C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_32:
    // 0x8022A040: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A044: bne         $v0, $zero, L_8022A0D0
    if (ctx->r2 != 0) {
        // 0x8022A048: nop
    
            goto L_8022A0D0;
    }
    // 0x8022A048: nop

    // 0x8022A04C: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022A050: bne         $a1, $zero, L_8022A068
    if (ctx->r5 != 0) {
        // 0x8022A054: nop
    
            goto L_8022A068;
    }
    // 0x8022A054: nop

    // 0x8022A058: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A05C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022A060: bne         $v0, $zero, L_8022A074
    if (ctx->r2 != 0) {
        // 0x8022A064: nop
    
            goto L_8022A074;
    }
    // 0x8022A064: nop

L_8022A068:
    // 0x8022A068: jal         0x8022A2EC
    // 0x8022A06C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A2EC_ovl29(rdram, ctx);
        goto after_33;
    // 0x8022A06C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_33:
    // 0x8022A070: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_8022A074:
    // 0x8022A074: jal         0x8022A59C
    // 0x8022A078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A59C_ovl29(rdram, ctx);
        goto after_34;
    // 0x8022A078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_34:
    // 0x8022A07C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A080: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A084: j           L_8022A0C4
    // 0x8022A088: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022A0C4;
    // 0x8022A088: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022A08C:
    // 0x8022A08C: lh          $a0, 0x66($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X66);
    // 0x8022A090: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022A094: jal         0x8004FA7C
    // 0x8022A098: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_35;
    // 0x8022A098: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_35:
    // 0x8022A09C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A0A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A0A4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A0A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022A0AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A0B0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A0B4: bne         $v0, $zero, L_8022A0C4
    if (ctx->r2 != 0) {
        // 0x8022A0B8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022A0C4;
    }
    // 0x8022A0B8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022A0BC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022A0C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022A0C4:
    // 0x8022A0C4: jal         0x8005044C
    // 0x8022A0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_36;
    // 0x8022A0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_36:
L_8022A0CC:
    // 0x8022A0CC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8022A0D0:
    // 0x8022A0D0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A0D4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A0D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A0DC: jr          $ra
    // 0x8022A0E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A0E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022D2D4_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D2D4: lhu         $v0, 0x4E8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4E8);
    // 0x8022D2D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D2DC: sh          $v0, 0x4E8($a0)
    MEM_H(0X4E8, ctx->r4) = ctx->r2;
    // 0x8022D2E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D2E4: bne         $v0, $zero, L_8022D2FC
    if (ctx->r2 != 0) {
        // 0x8022D2E8: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_8022D2FC;
    }
    // 0x8022D2E8: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022D2EC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022D2F0: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8022D2F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D2F8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022D2FC:
    // 0x8022D2FC: jr          $ra
    // 0x8022D300: nop

    TRACE_RETURN()
    return;
    // 0x8022D300: nop

;}
RECOMP_FUNC void func_8022CA04_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CA04: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022CA08: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022CA0C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CA10: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022CA14: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022CA18: lw          $v0, 0x350($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X350);
    // 0x8022CA1C: sltiu       $v0, $v0, 0x64
    ctx->r2 = ctx->r2 < 0X64 ? 1 : 0;
    // 0x8022CA20: beq         $v0, $zero, L_8022CB10
    if (ctx->r2 == 0) {
        // 0x8022CA24: addiu       $a0, $s1, 0xC4
        ctx->r4 = ADD32(ctx->r17, 0XC4);
            goto L_8022CB10;
    }
    // 0x8022CA24: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x8022CA28: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8022CA2C: jal         0x8009A3B4
    // 0x8022CA30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022CA30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022CA34: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022CA38: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022CA3C: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022CA40: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CA44: jal         0x8009A3B4
    // 0x8022CA48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022CA48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022CA4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CA50: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022CA54: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8022CA58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CA5C: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8022CA60: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022CA64: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8022CA68: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022CA6C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x8022CA70: jal         0x8004DF78
    // 0x8022CA74: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x8022CA74: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022CA78: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022CA7C: bne         $v0, $zero, L_8022CB14
    if (ctx->r2 != 0) {
        // 0x8022CA80: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CB14;
    }
    // 0x8022CA80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CA84: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022CA88: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022CA8C: jal         0x8009A3B4
    // 0x8022CA90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022CA90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022CA94: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022CA98: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022CA9C: jal         0x8009A3B4
    // 0x8022CAA0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022CAA0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022CAA4: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022CAA8: beq         $v0, $zero, L_8022CAC4
    if (ctx->r2 == 0) {
        // 0x8022CAAC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022CAC4;
    }
    // 0x8022CAAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CAB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CAB4: jal         0x80050294
    // 0x8022CAB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022CAB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022CABC: j           L_8022CB08
    // 0x8022CAC0: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_8022CB08;
    // 0x8022CAC0: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_8022CAC4:
    // 0x8022CAC4: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022CAC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CACC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8022CAD0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CAD4: sltiu       $v0, $v0, 0x3D
    ctx->r2 = ctx->r2 < 0X3D ? 1 : 0;
    // 0x8022CAD8: bnel        $v0, $zero, L_8022CB14
    if (ctx->r2 != 0) {
        // 0x8022CADC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022CB14;
    }
    goto skip_0;
    // 0x8022CADC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x8022CAE0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CAE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022CAE8: jal         0x80050294
    // 0x8022CAEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8022CAEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022CAF0: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022CAF4: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022CAF8: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x8022CAFC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022CB00: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CB04: sh          $v0, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r2;
L_8022CB08:
    // 0x8022CB08: j           L_8022CB14
    // 0x8022CB0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022CB14;
    // 0x8022CB0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022CB10:
    // 0x8022CB10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022CB14:
    // 0x8022CB14: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022CB18: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022CB1C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022CB20: jr          $ra
    // 0x8022CB24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022CB24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022CB28: nop

    // 0x8022CB2C: nop

;}
RECOMP_FUNC void func_8022CB30_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CB30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CB34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CB38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CB3C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022CB40: addiu       $a1, $a1, 0x1B10
    ctx->r5 = ADD32(ctx->r5, 0X1B10);
    // 0x8022CB44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CB48: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8022CB4C: beq         $a0, $zero, L_8022CBDC
    if (ctx->r4 == 0) {
        // 0x8022CB50: nop
    
            goto L_8022CBDC;
    }
    // 0x8022CB50: nop

    // 0x8022CB54: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022CB58: lw          $v1, 0x1B10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1B10);
    // 0x8022CB5C: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x8022CB60: beq         $v0, $zero, L_8022CBDC
    if (ctx->r2 == 0) {
        // 0x8022CB64: nop
    
            goto L_8022CBDC;
    }
    // 0x8022CB64: nop

    // 0x8022CB68: bgez        $v0, L_8022CB78
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CB6C: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_8022CB78;
    }
    // 0x8022CB6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CB70: j           L_8022CBA0
    // 0x8022CB74: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_8022CBA0;
    // 0x8022CB74: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_8022CB78:
    // 0x8022CB78: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CB7C: lhu         $v0, 0x1B14($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1B14);
    // 0x8022CB80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CB84: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CB88: sh          $v0, 0x1B14($at)
    MEM_H(0X1B14, ctx->r1) = ctx->r2;
    // 0x8022CB8C: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x8022CB90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CB94: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CB98: bne         $v0, $v1, L_8022CBDC
    if (ctx->r2 != ctx->r3) {
        // 0x8022CB9C: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_8022CBDC;
    }
    // 0x8022CB9C: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_8022CBA0:
    // 0x8022CBA0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8022CBA4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CBA8: lw          $v0, 0x1B10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B10);
    // 0x8022CBAC: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022CBB0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CBB4: sh          $zero, 0x1B14($at)
    MEM_H(0X1B14, ctx->r1) = 0;
    // 0x8022CBB8: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022CBBC: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x8022CBC0: jal         0x8003B85C
    // 0x8022CBC4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022CBC4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x8022CBC8: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8022CBCC: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8022CBD0: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022CBD4: jal         0x8003B840
    // 0x8022CBD8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022CBD8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022CBDC:
    // 0x8022CBDC: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022CBE0: addiu       $a1, $a1, 0x1B18
    ctx->r5 = ADD32(ctx->r5, 0X1B18);
    // 0x8022CBE4: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8022CBE8: beq         $a0, $zero, L_8022CC78
    if (ctx->r4 == 0) {
        // 0x8022CBEC: nop
    
            goto L_8022CC78;
    }
    // 0x8022CBEC: nop

    // 0x8022CBF0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022CBF4: lw          $v1, 0x1B18($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1B18);
    // 0x8022CBF8: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x8022CBFC: beq         $v0, $zero, L_8022CC78
    if (ctx->r2 == 0) {
        // 0x8022CC00: nop
    
            goto L_8022CC78;
    }
    // 0x8022CC00: nop

    // 0x8022CC04: bgez        $v0, L_8022CC14
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CC08: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_8022CC14;
    }
    // 0x8022CC08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CC0C: j           L_8022CC3C
    // 0x8022CC10: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_8022CC3C;
    // 0x8022CC10: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_8022CC14:
    // 0x8022CC14: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CC18: lhu         $v0, 0x1B1C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1B1C);
    // 0x8022CC1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CC20: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CC24: sh          $v0, 0x1B1C($at)
    MEM_H(0X1B1C, ctx->r1) = ctx->r2;
    // 0x8022CC28: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x8022CC2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CC30: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CC34: bne         $v0, $v1, L_8022CC78
    if (ctx->r2 != ctx->r3) {
        // 0x8022CC38: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_8022CC78;
    }
    // 0x8022CC38: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_8022CC3C:
    // 0x8022CC3C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8022CC40: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CC44: lw          $v0, 0x1B18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B18);
    // 0x8022CC48: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022CC4C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CC50: sh          $zero, 0x1B1C($at)
    MEM_H(0X1B1C, ctx->r1) = 0;
    // 0x8022CC54: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022CC58: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x8022CC5C: jal         0x8003B85C
    // 0x8022CC60: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022CC60: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x8022CC64: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8022CC68: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022CC6C: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x8022CC70: jal         0x8003B840
    // 0x8022CC74: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022CC74: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_8022CC78:
    // 0x8022CC78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CC7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CC80: jr          $ra
    // 0x8022CC84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CC84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227B84_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227B88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227B8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227B94: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80227B98: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227B9C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227BA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227BA4: bne         $v0, $zero, L_80227C10
    if (ctx->r2 != 0) {
        // 0x80227BA8: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80227C10;
    }
    // 0x80227BA8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80227BAC: jal         0x80229774
    // 0x80227BB0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80229774_ovl29(rdram, ctx);
        goto after_0;
    // 0x80227BB0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80227BB4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227BB8: beq         $v0, $zero, L_80227C0C
    if (ctx->r2 == 0) {
        // 0x80227BBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227C0C;
    }
    // 0x80227BBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227BC0: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80227BC4: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x80227BC8: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x80227BCC: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80227BD0: bne         $v1, $zero, L_80227BE0
    if (ctx->r3 != 0) {
        // 0x80227BD4: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80227BE0;
    }
    // 0x80227BD4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227BD8: j           L_80227C10
    // 0x80227BDC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_80227C10;
    // 0x80227BDC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_80227BE0:
    // 0x80227BE0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227BE4: jal         0x802296E8
    // 0x80227BE8: nop

    func_802296E8_ovl29(rdram, ctx);
        goto after_1;
    // 0x80227BE8: nop

    after_1:
    // 0x80227BEC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227BF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227BF4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227BF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227BFC: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80227C00: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227C04: j           L_80227C10
    // 0x80227C08: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_80227C10;
    // 0x80227C08: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_80227C0C:
    // 0x80227C0C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227C10:
    // 0x80227C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227C14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227C18: jr          $ra
    // 0x80227C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CE00_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CE04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CE08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CE0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CE10: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CE14: bne         $v0, $zero, L_8022CEA0
    if (ctx->r2 != 0) {
        // 0x8022CE18: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022CEA0;
    }
    // 0x8022CE18: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CE1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CE20: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022CE24: jal         0x8004D5D4
    // 0x8022CE28: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022CE28: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022CE2C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022CE30: lbu         $v1, -0x3A4F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A4F);
    // 0x8022CE34: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x8022CE38: bne         $v1, $v0, L_8022CE5C
    if (ctx->r3 != ctx->r2) {
        // 0x8022CE3C: nop
    
            goto L_8022CE5C;
    }
    // 0x8022CE3C: nop

    // 0x8022CE40: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CE44: addiu       $v0, $v0, 0x13FC
    ctx->r2 = ADD32(ctx->r2, 0X13FC);
    // 0x8022CE48: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CE4C: sw          $v0, 0x1B20($at)
    MEM_W(0X1B20, ctx->r1) = ctx->r2;
    // 0x8022CE50: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CE54: j           L_8022CE74
    // 0x8022CE58: addiu       $v0, $v0, 0x141C
    ctx->r2 = ADD32(ctx->r2, 0X141C);
        goto L_8022CE74;
    // 0x8022CE58: addiu       $v0, $v0, 0x141C
    ctx->r2 = ADD32(ctx->r2, 0X141C);
L_8022CE5C:
    // 0x8022CE5C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CE60: addiu       $v0, $v0, 0x1440
    ctx->r2 = ADD32(ctx->r2, 0X1440);
    // 0x8022CE64: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CE68: sw          $v0, 0x1B20($at)
    MEM_W(0X1B20, ctx->r1) = ctx->r2;
    // 0x8022CE6C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CE70: addiu       $v0, $v0, 0x144C
    ctx->r2 = ADD32(ctx->r2, 0X144C);
L_8022CE74:
    // 0x8022CE74: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CE78: sw          $v0, 0x1B24($at)
    MEM_W(0X1B24, ctx->r1) = ctx->r2;
    // 0x8022CE7C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CE80: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x8022CE84: sh          $v1, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r3;
    // 0x8022CE88: sh          $v1, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r3;
    // 0x8022CE8C: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    // 0x8022CE90: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022CE94: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022CE98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CE9C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022CEA0:
    // 0x8022CEA0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CEA4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CEA8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CEAC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CEB0: lw          $v0, 0x1460($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1460);
    // 0x8022CEB4: jalr        $v0
    // 0x8022CEB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022CEB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022CEBC: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022CEC0: bne         $v0, $zero, L_8022CED8
    if (ctx->r2 != 0) {
        // 0x8022CEC4: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_8022CED8;
    }
    // 0x8022CEC4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022CEC8: jal         0x8004DD04
    // 0x8022CECC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8022CECC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022CED0: jal         0x8005044C
    // 0x8022CED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x8022CED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022CED8:
    // 0x8022CED8: jal         0x8022CC88
    // 0x8022CEDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022CC88_ovl29(rdram, ctx);
        goto after_4;
    // 0x8022CEDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022CEE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CEE4: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x8022CEE8: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x8022CEEC: jal         0x8003B564
    // 0x8022CEF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_5;
    // 0x8022CEF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x8022CEF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CEF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CEFC: jr          $ra
    // 0x8022CF00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CF00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A59C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A59C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A5A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A5A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A5A8: beq         $a1, $zero, L_8022A5F8
    if (ctx->r5 == 0) {
        // 0x8022A5AC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022A5F8;
    }
    // 0x8022A5AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A5B0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022A5B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A5B8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022A5BC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A5C0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A5C4: slti        $v0, $v0, 0x3D
    ctx->r2 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x8022A5C8: bne         $v0, $zero, L_8022A5F8
    if (ctx->r2 != 0) {
        // 0x8022A5CC: nop
    
            goto L_8022A5F8;
    }
    // 0x8022A5CC: nop

    // 0x8022A5D0: jal         0x800A3450
    // 0x8022A5D4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A5D4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_0:
    // 0x8022A5D8: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022A5DC: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022A5E0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A5E4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022A5E8: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x8022A5EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A5F0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A5F4: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_8022A5F8:
    // 0x8022A5F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A5FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A600: jr          $ra
    // 0x8022A604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D9FC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D9FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DA00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DA04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DA08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DA0C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022DA10: bne         $v0, $zero, L_8022DA9C
    if (ctx->r2 != 0) {
        // 0x8022DA14: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022DA9C;
    }
    // 0x8022DA14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DA18: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DA1C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022DA20: jal         0x8004D5D4
    // 0x8022DA24: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022DA24: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022DA28: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022DA2C: lbu         $v1, -0x3A4F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A4F);
    // 0x8022DA30: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x8022DA34: bne         $v1, $v0, L_8022DA58
    if (ctx->r3 != ctx->r2) {
        // 0x8022DA38: nop
    
            goto L_8022DA58;
    }
    // 0x8022DA38: nop

    // 0x8022DA3C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022DA40: addiu       $v0, $v0, 0x1534
    ctx->r2 = ADD32(ctx->r2, 0X1534);
    // 0x8022DA44: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DA48: sw          $v0, 0x1B40($at)
    MEM_W(0X1B40, ctx->r1) = ctx->r2;
    // 0x8022DA4C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022DA50: j           L_8022DA70
    // 0x8022DA54: addiu       $v0, $v0, 0x1554
    ctx->r2 = ADD32(ctx->r2, 0X1554);
        goto L_8022DA70;
    // 0x8022DA54: addiu       $v0, $v0, 0x1554
    ctx->r2 = ADD32(ctx->r2, 0X1554);
L_8022DA58:
    // 0x8022DA58: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022DA5C: addiu       $v0, $v0, 0x1598
    ctx->r2 = ADD32(ctx->r2, 0X1598);
    // 0x8022DA60: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DA64: sw          $v0, 0x1B40($at)
    MEM_W(0X1B40, ctx->r1) = ctx->r2;
    // 0x8022DA68: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022DA6C: addiu       $v0, $v0, 0x15AC
    ctx->r2 = ADD32(ctx->r2, 0X15AC);
L_8022DA70:
    // 0x8022DA70: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DA74: sw          $v0, 0x1B44($at)
    MEM_W(0X1B44, ctx->r1) = ctx->r2;
    // 0x8022DA78: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022DA7C: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x8022DA80: sh          $v1, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r3;
    // 0x8022DA84: sh          $v1, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r3;
    // 0x8022DA88: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    // 0x8022DA8C: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022DA90: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022DA94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DA98: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022DA9C:
    // 0x8022DA9C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022DAA0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DAA4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DAA8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DAAC: lw          $v0, 0x15C4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X15C4);
    // 0x8022DAB0: jalr        $v0
    // 0x8022DAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022DAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022DAB8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022DABC: bne         $v0, $zero, L_8022DAD4
    if (ctx->r2 != 0) {
        // 0x8022DAC0: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_8022DAD4;
    }
    // 0x8022DAC0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022DAC4: jal         0x8004DD04
    // 0x8022DAC8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8022DAC8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022DACC: jal         0x8005044C
    // 0x8022DAD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x8022DAD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022DAD4:
    // 0x8022DAD4: jal         0x8022D758
    // 0x8022DAD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D758_ovl29(rdram, ctx);
        goto after_4;
    // 0x8022DAD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022DADC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022DAE0: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022DAE4: xori        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 ^ 0X5;
    // 0x8022DAE8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022DAEC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022DAF0: beq         $v1, $zero, L_8022DB08
    if (ctx->r3 == 0) {
        // 0x8022DAF4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DB08;
    }
    // 0x8022DAF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DAF8: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x8022DAFC: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x8022DB00: jal         0x8003B564
    // 0x8022DB04: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_5;
    // 0x8022DB04: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_8022DB08:
    // 0x8022DB08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DB0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DB10: jr          $ra
    // 0x8022DB14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DB14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226570_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226570: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226574: bne         $v0, $zero, L_802265D4
    if (ctx->r2 != 0) {
        // 0x80226578: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802265D4;
    }
    // 0x80226578: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022657C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226580: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226584: lui         $v0, 0xF092
    ctx->r2 = S32(0XF092 << 16);
    // 0x80226588: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8022658C: lui         $v0, 0xFCE0
    ctx->r2 = S32(0XFCE0 << 16);
    // 0x80226590: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80226594: addiu       $v0, $zero, 0x514
    ctx->r2 = ADD32(0, 0X514);
    // 0x80226598: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x8022659C: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x802265A0: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x802265A4: lui         $v0, 0xF0C4
    ctx->r2 = S32(0XF0C4 << 16);
    // 0x802265A8: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x802265AC: lui         $v0, 0xFD44
    ctx->r2 = S32(0XFD44 << 16);
    // 0x802265B0: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x802265B4: addiu       $v0, $zero, 0x258
    ctx->r2 = ADD32(0, 0X258);
    // 0x802265B8: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x802265BC: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x802265C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802265C4: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x802265C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802265CC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802265D0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802265D4:
    // 0x802265D4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802265D8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802265DC: bne         $v1, $v0, L_802265FC
    if (ctx->r3 != ctx->r2) {
        // 0x802265E0: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_802265FC;
    }
    // 0x802265E0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802265E4: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x802265E8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802265EC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802265F0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802265F4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802265F8: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
L_802265FC:
    // 0x802265FC: bne         $v1, $v0, L_8022660C
    if (ctx->r3 != ctx->r2) {
        // 0x80226600: nop
    
            goto L_8022660C;
    }
    // 0x80226600: nop

    // 0x80226604: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x80226608: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
L_8022660C:
    // 0x8022660C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226610: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80226614: bne         $v1, $v0, L_80226628
    if (ctx->r3 != ctx->r2) {
        // 0x80226618: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80226628;
    }
    // 0x80226618: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022661C: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226620: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226624: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226628:
    // 0x80226628: jr          $ra
    // 0x8022662C: nop

    TRACE_RETURN()
    return;
    // 0x8022662C: nop

;}
RECOMP_FUNC void func_80225798_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225798: jr          $ra
    // 0x8022579C: nop

    TRACE_RETURN()
    return;
    // 0x8022579C: nop

;}
RECOMP_FUNC void func_8022EA78_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EA78: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022EA7C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022EA80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EA84: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022EA88: beq         $v1, $v0, L_8022EAD4
    if (ctx->r3 == ctx->r2) {
        // 0x8022EA8C: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022EAD4;
    }
    // 0x8022EA8C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EA90: jal         0x8006033C
    // 0x8022EA94: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022EA94: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    after_0:
    // 0x8022EA98: bne         $v0, $zero, L_8022EAEC
    if (ctx->r2 != 0) {
        // 0x8022EA9C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022EAEC;
    }
    // 0x8022EA9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022EAA0: jal         0x8006033C
    // 0x8022EAA4: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022EAA4: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    after_1:
    // 0x8022EAA8: beq         $v0, $zero, L_8022EAEC
    if (ctx->r2 == 0) {
        // 0x8022EAAC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022EAEC;
    }
    // 0x8022EAAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022EAB0: jal         0x8006033C
    // 0x8022EAB4: addiu       $a0, $zero, 0x522
    ctx->r4 = ADD32(0, 0X522);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022EAB4: addiu       $a0, $zero, 0x522
    ctx->r4 = ADD32(0, 0X522);
    after_2:
    // 0x8022EAB8: beq         $v0, $zero, L_8022EAD4
    if (ctx->r2 == 0) {
        // 0x8022EABC: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_8022EAD4;
    }
    // 0x8022EABC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x8022EAC0: jal         0x80072168
    // 0x8022EAC4: addiu       $a1, $zero, 0xFC
    ctx->r5 = ADD32(0, 0XFC);
    func_80072168_4D568(rdram, ctx);
        goto after_3;
    // 0x8022EAC4: addiu       $a1, $zero, 0xFC
    ctx->r5 = ADD32(0, 0XFC);
    after_3:
    // 0x8022EAC8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022EACC: beq         $v0, $v1, L_8022EADC
    if (ctx->r2 == ctx->r3) {
        // 0x8022EAD0: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_8022EADC;
    }
    // 0x8022EAD0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_8022EAD4:
    // 0x8022EAD4: j           L_8022EAEC
    // 0x8022EAD8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022EAEC;
    // 0x8022EAD8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022EADC:
    // 0x8022EADC: jal         0x80072168
    // 0x8022EAE0: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    func_80072168_4D568(rdram, ctx);
        goto after_4;
    // 0x8022EAE0: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    after_4:
    // 0x8022EAE4: xori        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 ^ 0X3;
    // 0x8022EAE8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_8022EAEC:
    // 0x8022EAEC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EAF0: jr          $ra
    // 0x8022EAF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EAF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022EAF8: nop

    // 0x8022EAFC: nop

;}
RECOMP_FUNC void func_8022E578_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E578: jr          $ra
    // 0x8022E57C: nop

    TRACE_RETURN()
    return;
    // 0x8022E57C: nop

;}
RECOMP_FUNC void func_8022530C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022530C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225310: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225314: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225318: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022531C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225320: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225324: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225328: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022532C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225330: lw          $v1, -0x767C($at)
    ctx->r3 = MEM_W(ctx->r1, -0X767C);
    // 0x80225334: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225338: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022533C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80225340: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225344: jalr        $v0
    // 0x80225348: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225348: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x8022534C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225350: jr          $ra
    // 0x80225354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228200_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228200: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80228204: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80228208: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022820C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80228210: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80228214: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80228218: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022821C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228220: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80228224: beq         $v1, $zero, L_8022823C
    if (ctx->r3 == 0) {
        // 0x80228228: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022823C;
    }
    // 0x80228228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022822C: beql        $v1, $v0, L_802282E8
    if (ctx->r3 == ctx->r2) {
        // 0x80228230: sh          $zero, 0x20($sp)
        MEM_H(0X20, ctx->r29) = 0;
            goto L_802282E8;
    }
    goto skip_0;
    // 0x80228230: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    skip_0:
    // 0x80228234: j           L_80228350
    // 0x80228238: nop

        goto L_80228350;
    // 0x80228238: nop

L_8022823C:
    // 0x8022823C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80228240: lb          $v1, 0xC($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XC);
    // 0x80228244: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80228248: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022824C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228250: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228254: lbu         $v0, -0x6E20($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6E20);
    // 0x80228258: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022825C: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x80228260: jal         0x8004D5D4
    // 0x80228264: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228264: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_0:
    // 0x80228268: lb          $v1, 0xC($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XC);
    // 0x8022826C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228270: bne         $v1, $v0, L_8022827C
    if (ctx->r3 != ctx->r2) {
        // 0x80228274: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8022827C;
    }
    // 0x80228274: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80228278: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
L_8022827C:
    // 0x8022827C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80228280: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x80228284: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x80228288: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022828C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80228290: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228294: lhu         $v1, -0x6E60($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6E60);
    // 0x80228298: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x8022829C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802282A0: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    // 0x802282A4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802282A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802282AC: lhu         $v1, -0x6E5E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6E5E);
    // 0x802282B0: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x802282B4: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
    // 0x802282B8: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x802282BC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802282C0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802282C4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802282C8: lhu         $a0, -0x6E5C($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X6E5C);
    // 0x802282CC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802282D0: addiu       $v0, $v0, -0x6E18
    ctx->r2 = ADD32(ctx->r2, -0X6E18);
    // 0x802282D4: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x802282D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802282DC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x802282E0: sh          $a0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r4;
    // 0x802282E4: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
L_802282E8:
    // 0x802282E8: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x802282EC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x802282F0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802282F4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802282F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802282FC: lhu         $v0, -0x6E5A($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X6E5A);
    // 0x80228300: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80228304: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80228308: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    // 0x8022830C: jal         0x80031600
    // 0x80228310: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x80228310: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    after_1:
    // 0x80228314: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228318: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022831C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80228320: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80228324: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80228328: jal         0x80031DA8
    // 0x8022832C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8022832C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x80228330: lw          $v0, 0x184($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X184);
    // 0x80228334: bne         $v0, $s1, L_80228350
    if (ctx->r2 != ctx->r17) {
        // 0x80228338: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_80228350;
    }
    // 0x80228338: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022833C: lb          $a3, 0xC($s1)
    ctx->r7 = MEM_B(ctx->r17, 0XC);
    // 0x80228340: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228344: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228348: jal         0x800610AC
    // 0x8022834C: addiu       $a3, $a3, 0x3C
    ctx->r7 = ADD32(ctx->r7, 0X3C);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x8022834C: addiu       $a3, $a3, 0x3C
    ctx->r7 = ADD32(ctx->r7, 0X3C);
    after_3:
L_80228350:
    // 0x80228350: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80228354: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80228358: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022835C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80228360: jr          $ra
    // 0x80228364: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80228364: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80228368: nop

    // 0x8022836C: nop

;}
RECOMP_FUNC void func_80228050_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228054: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228058: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022805C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228060: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80228064: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228068: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022806C: jal         0x8004D5D4
    // 0x80228070: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228070: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228074: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80228078: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022807C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80228080: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80228084: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80228088: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022808C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80228090: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80228094: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80228098: sh          $zero, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = 0;
    // 0x8022809C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802280A0: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x802280A4: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x802280A8: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x802280AC: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x802280B0: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x802280B4: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x802280B8: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x802280BC: jal         0x8009A3B4
    // 0x802280C0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802280C0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x802280C4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802280C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802280CC: jal         0x8009A3B4
    // 0x802280D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802280D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802280D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802280D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802280DC: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802280E0: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x802280E4: lh          $a3, 0x16($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X16);
    // 0x802280E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802280EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802280F0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802280F4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x802280F8: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x802280FC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80228100: sw          $v1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r3;
    // 0x80228104: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x80228108: sw          $a3, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r7;
    // 0x8022810C: jal         0x80050294
    // 0x80228110: sw          $a3, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r7;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80228110: sw          $a3, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r7;
    after_3:
    // 0x80228114: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80228118: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022811C: addiu       $v0, $v0, -0x6E90
    ctx->r2 = ADD32(ctx->r2, -0X6E90);
    // 0x80228120: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80228124: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80228128: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022812C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80228130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228134: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228138: jr          $ra
    // 0x8022813C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022813C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802254F0_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802254F8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802254FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225500: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225504: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225508: lw          $v0, -0x70D4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X70D4);
    // 0x8022550C: jalr        $v0
    // 0x80225510: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225510: nop

    after_0:
    // 0x80225514: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225518: jr          $ra
    // 0x8022551C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022551C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226584_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226588: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022658C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80226590: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226594: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226598: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022659C: lw          $v0, -0x6F5C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6F5C);
    // 0x802265A0: jalr        $v0
    // 0x802265A4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802265A4: nop

    after_0:
    // 0x802265A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802265AC: jr          $ra
    // 0x802265B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802265B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
