#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80225528_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022552C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225530: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225538: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022553C: bne         $v0, $zero, L_8022555C
    if (ctx->r2 != 0) {
        // 0x80225540: nop
    
            goto L_8022555C;
    }
    // 0x80225540: nop

    // 0x80225544: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225548: jal         0x800607C4
    // 0x8022554C: addiu       $a0, $a0, -0x2224
    ctx->r4 = ADD32(ctx->r4, -0X2224);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022554C: addiu       $a0, $a0, -0x2224
    ctx->r4 = ADD32(ctx->r4, -0X2224);
    after_0:
    // 0x80225550: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225554: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225558: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022555C:
    // 0x8022555C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225560: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225564: jr          $ra
    // 0x80225568: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225568: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227C3C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227C40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227C44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227C48: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227C4C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227C50: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227C54: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227C58: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80227C5C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80227C60: bne         $v0, $zero, L_80227CBC
    if (ctx->r2 != 0) {
        // 0x80227C64: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80227CBC;
    }
    // 0x80227C64: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80227C68: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227C6C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80227C70: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227C74: jal         0x8004F820
    // 0x80227C78: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80227C78: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80227C7C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227C80: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80227C84: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80227C88: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227C8C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227C90: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80227C94: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80227C98: beq         $a0, $zero, L_80227CBC
    if (ctx->r4 == 0) {
        // 0x80227C9C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80227CBC;
    }
    // 0x80227C9C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80227CA0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227CA4: jal         0x802289E0
    // 0x80227CA8: nop

    func_802289E0_ovl19(rdram, ctx);
        goto after_1;
    // 0x80227CA8: nop

    after_1:
    // 0x80227CAC: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227CB0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227CB4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227CB8: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80227CBC:
    // 0x80227CBC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80227CC0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80227CC4: bne         $v0, $zero, L_80227CE8
    if (ctx->r2 != 0) {
        // 0x80227CC8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80227CE8;
    }
    // 0x80227CC8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80227CCC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227CD0: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x80227CD4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80227CD8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80227CDC: jal         0x80228A78
    // 0x80227CE0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228A78_ovl19(rdram, ctx);
        goto after_2;
    // 0x80227CE0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80227CE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227CE8:
    // 0x80227CE8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227CEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227CF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227CF4: jr          $ra
    // 0x80227CF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227CF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802255B0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255B0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802255B4: lbu         $v0, -0x359C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X359C);
    // 0x802255B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802255BC: bne         $v0, $zero, L_8022560C
    if (ctx->r2 != 0) {
        // 0x802255C0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022560C;
    }
    // 0x802255C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802255C4: jal         0x8006033C
    // 0x802255C8: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802255C8: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    after_0:
    // 0x802255CC: beq         $v0, $zero, L_802255F0
    if (ctx->r2 == 0) {
        // 0x802255D0: nop
    
            goto L_802255F0;
    }
    // 0x802255D0: nop

    // 0x802255D4: jal         0x8006033C
    // 0x802255D8: addiu       $a0, $zero, 0x22B
    ctx->r4 = ADD32(0, 0X22B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802255D8: addiu       $a0, $zero, 0x22B
    ctx->r4 = ADD32(0, 0X22B);
    after_1:
    // 0x802255DC: bne         $v0, $zero, L_802255F0
    if (ctx->r2 != 0) {
        // 0x802255E0: nop
    
            goto L_802255F0;
    }
    // 0x802255E0: nop

    // 0x802255E4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802255E8: jal         0x8005FB30
    // 0x802255EC: addiu       $a0, $a0, -0x1850
    ctx->r4 = ADD32(ctx->r4, -0X1850);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_2;
    // 0x802255EC: addiu       $a0, $a0, -0x1850
    ctx->r4 = ADD32(ctx->r4, -0X1850);
    after_2:
L_802255F0:
    // 0x802255F0: jal         0x8006033C
    // 0x802255F4: addiu       $a0, $zero, 0x23C
    ctx->r4 = ADD32(0, 0X23C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x802255F4: addiu       $a0, $zero, 0x23C
    ctx->r4 = ADD32(0, 0X23C);
    after_3:
    // 0x802255F8: bne         $v0, $zero, L_8022560C
    if (ctx->r2 != 0) {
        // 0x802255FC: nop
    
            goto L_8022560C;
    }
    // 0x802255FC: nop

    // 0x80225600: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225604: jal         0x8005FB30
    // 0x80225608: addiu       $a0, $a0, -0x183C
    ctx->r4 = ADD32(ctx->r4, -0X183C);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_4;
    // 0x80225608: addiu       $a0, $a0, -0x183C
    ctx->r4 = ADD32(ctx->r4, -0X183C);
    after_4:
L_8022560C:
    // 0x8022560C: jal         0x8006036C
    // 0x80225610: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80225610: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_5:
    // 0x80225614: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225618: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022561C: jr          $ra
    // 0x80225620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225624: nop

    // 0x80225628: nop

    // 0x8022562C: nop

;}
RECOMP_FUNC void func_80226FFC_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227000: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227004: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227008: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022700C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227010: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227014: lw          $v0, -0x1AD8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1AD8);
    // 0x80227018: jalr        $v0
    // 0x8022701C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022701C: nop

    after_0:
    // 0x80227020: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227024: jr          $ra
    // 0x80227028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C6E0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C6E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022C6E4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022C6E8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022C6EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022C6F0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022C6F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C6F8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022C6FC: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022C700: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C704: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8022C708: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022C70C: beq         $v0, $zero, L_8022C95C
    if (ctx->r2 == 0) {
        // 0x8022C710: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022C95C;
    }
    // 0x8022C710: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022C714: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C718: addu        $at, $at, $v0
    gpr jr_addend_8022C720 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C71C: lw          $v0, -0x1708($at)
    ctx->r2 = ADD32(ctx->r1, -0X1708);
    // 0x8022C720: jr          $v0
    // 0x8022C724: nop

    switch (jr_addend_8022C720 >> 2) {
        case 0: goto L_8022C728; break;
        case 1: goto L_8022C76C; break;
        case 2: goto L_8022C81C; break;
        case 3: goto L_8022C86C; break;
        case 4: goto L_8022C90C; break;
        default: switch_error(__func__, 0x8022C720, 0x8022E8F8);
    }
    // 0x8022C724: nop

L_8022C728:
    // 0x8022C728: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8022C72C: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8022C730: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8022C734: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022C738: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8022C73C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022C740: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8022C744: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022C748: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8022C74C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022C750: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8022C754: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C758: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022C75C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C760: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x8022C764: j           L_8022C95C
    // 0x8022C768: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_8022C95C;
    // 0x8022C768: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_8022C76C:
    // 0x8022C76C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8022C770: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x8022C774: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x8022C778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C77C: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8022C780: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C784: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022C788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C78C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022C790: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022C794: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8022C798: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022C79C: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8022C7A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C7A4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8022C7A8: beq         $a0, $v0, L_8022C7F0
    if (ctx->r4 == ctx->r2) {
        // 0x8022C7AC: sw          $v1, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r3;
            goto L_8022C7F0;
    }
    // 0x8022C7AC: sw          $v1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r3;
    // 0x8022C7B0: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8022C7B4: beql        $v0, $zero, L_8022C7CC
    if (ctx->r2 == 0) {
        // 0x8022C7B8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C7CC;
    }
    goto skip_0;
    // 0x8022C7B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C7BC: beq         $a0, $zero, L_8022C7DC
    if (ctx->r4 == 0) {
        // 0x8022C7C0: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8022C7DC;
    }
    // 0x8022C7C0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8022C7C4: j           L_8022C95C
    // 0x8022C7C8: nop

        goto L_8022C95C;
    // 0x8022C7C8: nop

L_8022C7CC:
    // 0x8022C7CC: beq         $a0, $v0, L_8022C808
    if (ctx->r4 == ctx->r2) {
        // 0x8022C7D0: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8022C808;
    }
    // 0x8022C7D0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8022C7D4: j           L_8022C95C
    // 0x8022C7D8: nop

        goto L_8022C95C;
    // 0x8022C7D8: nop

L_8022C7DC:
    // 0x8022C7DC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022C7E0: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8022C7E4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022C7E8: j           L_8022C95C
    // 0x8022C7EC: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8022C95C;
    // 0x8022C7EC: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_8022C7F0:
    // 0x8022C7F0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8022C7F4: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x8022C7F8: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8022C7FC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022C800: j           L_8022C95C
    // 0x8022C804: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8022C95C;
    // 0x8022C804: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_8022C808:
    // 0x8022C808: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022C80C: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8022C810: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
    // 0x8022C814: j           L_8022C95C
    // 0x8022C818: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8022C95C;
    // 0x8022C818: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_8022C81C:
    // 0x8022C81C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8022C820: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8022C824: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x8022C828: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8022C82C: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x8022C830: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8022C834: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022C838: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8022C83C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022C840: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8022C844: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C848: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022C84C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022C850: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x8022C854: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022C858: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8022C85C: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x8022C860: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8022C864: j           L_8022C95C
    // 0x8022C868: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
        goto L_8022C95C;
    // 0x8022C868: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
L_8022C86C:
    // 0x8022C86C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8022C870: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
    // 0x8022C874: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8022C878: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022C87C: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8022C880: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C884: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022C888: addiu       $a1, $a1, -0x1710
    ctx->r5 = ADD32(ctx->r5, -0X1710);
    // 0x8022C88C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8022C890: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8022C894: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8022C898: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8022C89C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022C8A0: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8022C8A4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C8A8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022C8AC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022C8B0: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022C8B4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8022C8B8: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x8022C8BC: jal         0x8009A3B4
    // 0x8022C8C0: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C8C0: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_0:
    // 0x8022C8C4: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8022C8C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C8CC: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022C8D0: addiu       $a1, $a1, -0x170C
    ctx->r5 = ADD32(ctx->r5, -0X170C);
    // 0x8022C8D4: jal         0x8009A3B4
    // 0x8022C8D8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C8D8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x8022C8DC: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x8022C8E0: lb          $v1, 0xC($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XC);
    // 0x8022C8E4: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8022C8E8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022C8EC: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x8022C8F0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8022C8F4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022C8F8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C8FC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8022C900: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8022C904: j           L_8022C95C
    // 0x8022C908: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
        goto L_8022C95C;
    // 0x8022C908: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
L_8022C90C:
    // 0x8022C90C: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x8022C910: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8022C914: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8022C918: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x8022C91C: ori         $a0, $a0, 0x80
    ctx->r4 = ctx->r4 | 0X80;
    // 0x8022C920: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8022C924: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8022C928: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8022C92C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022C930: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8022C934: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C938: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022C93C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022C940: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x8022C944: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8022C948: sw          $a0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r4;
    // 0x8022C94C: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    // 0x8022C950: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8022C954: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8022C958: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
L_8022C95C:
    // 0x8022C95C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C960: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022C964: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022C968: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022C96C: jr          $ra
    // 0x8022C970: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022C970: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022D0BC_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D0BC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022D0C0: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022D0C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022D0C8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022D0CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D0D0: bne         $v0, $s0, L_8022D0E4
    if (ctx->r2 != ctx->r16) {
        // 0x8022D0D4: sw          $ra, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r31;
            goto L_8022D0E4;
    }
    // 0x8022D0D4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022D0D8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D0DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D0E0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022D0E4:
    // 0x8022D0E4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D0E8: bne         $v0, $zero, L_8022D104
    if (ctx->r2 != 0) {
        // 0x8022D0EC: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_8022D104;
    }
    // 0x8022D0EC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022D0F0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022D0F4: jal         0x8009A3B4
    // 0x8022D0F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022D0F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022D0FC: j           L_8022D13C
    // 0x8022D100: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
        goto L_8022D13C;
    // 0x8022D100: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8022D104:
    // 0x8022D104: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x8022D108: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8022D10C: lhu         $v0, 0x1E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E);
    // 0x8022D110: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022D114: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x8022D118: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
    // 0x8022D11C: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x8022D120: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D124: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D128: beq         $v1, $v0, L_8022D140
    if (ctx->r3 == ctx->r2) {
        // 0x8022D12C: addiu       $a1, $zero, 0x28
        ctx->r5 = ADD32(0, 0X28);
            goto L_8022D140;
    }
    // 0x8022D12C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022D130: jal         0x8022D3AC
    // 0x8022D134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D3AC_ovl19(rdram, ctx);
        goto after_1;
    // 0x8022D134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022D138: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8022D13C:
    // 0x8022D13C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
L_8022D140:
    // 0x8022D140: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022D144: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D148: addiu       $v0, $s0, 0x4C
    ctx->r2 = ADD32(ctx->r16, 0X4C);
    // 0x8022D14C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D150: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022D154: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022D158: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022D15C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022D160: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022D164: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022D168: jal         0x80051E18
    // 0x8022D16C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_2;
    // 0x8022D16C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x8022D170: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022D174: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022D178: jr          $ra
    // 0x8022D17C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022D17C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022ABF4_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ABF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022ABF8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022ABFC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022AC00: lui         $v0, 0x1F
    ctx->r2 = S32(0X1F << 16);
    // 0x8022AC04: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022AC08: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022AC0C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022AC10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022AC14: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022AC18: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022AC1C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022AC20: bne         $v0, $zero, L_8022AC34
    if (ctx->r2 != 0) {
        // 0x8022AC24: addiu       $s2, $s1, 0x2E8
        ctx->r18 = ADD32(ctx->r17, 0X2E8);
            goto L_8022AC34;
    }
    // 0x8022AC24: addiu       $s2, $s1, 0x2E8
    ctx->r18 = ADD32(ctx->r17, 0X2E8);
    // 0x8022AC28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AC2C: j           L_8022AC38
    // 0x8022AC30: sb          $v0, 0x33C($s1)
    MEM_B(0X33C, ctx->r17) = ctx->r2;
        goto L_8022AC38;
    // 0x8022AC30: sb          $v0, 0x33C($s1)
    MEM_B(0X33C, ctx->r17) = ctx->r2;
L_8022AC34:
    // 0x8022AC34: sb          $zero, 0x33C($s1)
    MEM_B(0X33C, ctx->r17) = 0;
L_8022AC38:
    // 0x8022AC38: lbu         $a0, 0x4E($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X4E);
    // 0x8022AC3C: andi        $v0, $a0, 0xA
    ctx->r2 = ctx->r4 & 0XA;
    // 0x8022AC40: beq         $v0, $zero, L_8022ADD0
    if (ctx->r2 == 0) {
        // 0x8022AC44: nop
    
            goto L_8022ADD0;
    }
    // 0x8022AC44: nop

    // 0x8022AC48: lbu         $v0, 0x50($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X50);
    // 0x8022AC4C: bne         $v0, $zero, L_8022ADCC
    if (ctx->r2 != 0) {
        // 0x8022AC50: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022ADCC;
    }
    // 0x8022AC50: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AC54: lbu         $v1, 0x51($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X51);
    // 0x8022AC58: ori         $v0, $a0, 0x8
    ctx->r2 = ctx->r4 | 0X8;
    // 0x8022AC5C: bne         $v1, $zero, L_8022ADC0
    if (ctx->r3 != 0) {
        // 0x8022AC60: sb          $v0, 0x4E($s2)
        MEM_B(0X4E, ctx->r18) = ctx->r2;
            goto L_8022ADC0;
    }
    // 0x8022AC60: sb          $v0, 0x4E($s2)
    MEM_B(0X4E, ctx->r18) = ctx->r2;
    // 0x8022AC64: lbu         $v1, 0x4F($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4F);
    // 0x8022AC68: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022AC6C: beq         $v1, $zero, L_8022ADB0
    if (ctx->r3 == 0) {
        // 0x8022AC70: sb          $v0, 0x51($s2)
        MEM_B(0X51, ctx->r18) = ctx->r2;
            goto L_8022ADB0;
    }
    // 0x8022AC70: sb          $v0, 0x51($s2)
    MEM_B(0X51, ctx->r18) = ctx->r2;
    // 0x8022AC74: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_8022AC78:
    // 0x8022AC78: jal         0x8004EFE4
    // 0x8022AC7C: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022AC7C: nop

    after_0:
    // 0x8022AC80: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022AC84: beq         $s0, $zero, L_8022AD8C
    if (ctx->r16 == 0) {
        // 0x8022AC88: addiu       $a0, $zero, 0xEB
        ctx->r4 = ADD32(0, 0XEB);
            goto L_8022AD8C;
    }
    // 0x8022AC88: addiu       $a0, $zero, 0xEB
    ctx->r4 = ADD32(0, 0XEB);
    // 0x8022AC8C: jal         0x8002A33C
    // 0x8022AC90: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022AC90: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_1:
    // 0x8022AC94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AC98: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022AC9C: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x8022ACA0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022ACA4: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022ACA8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022ACAC: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022ACB0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022ACB4: lhu         $v0, 0x188($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X188);
    // 0x8022ACB8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022ACBC: lhu         $v0, 0x18C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18C);
    // 0x8022ACC0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022ACC4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022ACC8: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022ACCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ACD0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022ACD4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022ACD8: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x8022ACDC: lbu         $v0, 0x54($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X54);
    // 0x8022ACE0: bne         $v0, $zero, L_8022AD34
    if (ctx->r2 != 0) {
        // 0x8022ACE4: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_8022AD34;
    }
    // 0x8022ACE4: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8022ACE8: lhu         $v0, 0x18A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18A);
    // 0x8022ACEC: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x8022ACF0: addiu       $v0, $v0, 0x22
    ctx->r2 = ADD32(ctx->r2, 0X22);
    // 0x8022ACF4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022ACF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ACFC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022AD00: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
    // 0x8022AD04: beq         $v0, $zero, L_8022AD20
    if (ctx->r2 == 0) {
        // 0x8022AD08: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022AD20;
    }
    // 0x8022AD08: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AD0C: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AD10: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022AD14: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022AD18: j           L_8022AD7C
    // 0x8022AD1C: addiu       $v0, $zero, 0x8F0
    ctx->r2 = ADD32(0, 0X8F0);
        goto L_8022AD7C;
    // 0x8022AD1C: addiu       $v0, $zero, 0x8F0
    ctx->r2 = ADD32(0, 0X8F0);
L_8022AD20:
    // 0x8022AD20: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AD24: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022AD28: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022AD2C: j           L_8022AD7C
    // 0x8022AD30: addiu       $v0, $zero, -0x8F0
    ctx->r2 = ADD32(0, -0X8F0);
        goto L_8022AD7C;
    // 0x8022AD30: addiu       $v0, $zero, -0x8F0
    ctx->r2 = ADD32(0, -0X8F0);
L_8022AD34:
    // 0x8022AD34: lhu         $v0, 0x18A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18A);
    // 0x8022AD38: sh          $zero, 0x66($s0)
    MEM_H(0X66, ctx->r16) = 0;
    // 0x8022AD3C: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x8022AD40: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022AD44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AD48: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022AD4C: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
    // 0x8022AD50: beq         $v0, $zero, L_8022AD6C
    if (ctx->r2 == 0) {
        // 0x8022AD54: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022AD6C;
    }
    // 0x8022AD54: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AD58: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AD5C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022AD60: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022AD64: j           L_8022AD7C
    // 0x8022AD68: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
        goto L_8022AD7C;
    // 0x8022AD68: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
L_8022AD6C:
    // 0x8022AD6C: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AD70: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022AD74: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022AD78: addiu       $v0, $zero, -0x280
    ctx->r2 = ADD32(0, -0X280);
L_8022AD7C:
    // 0x8022AD7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022AD80: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022AD84: jal         0x8004DBA0
    // 0x8022AD88: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x8022AD88: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
L_8022AD8C:
    // 0x8022AD8C: addiu       $v0, $s3, -0x1
    ctx->r2 = ADD32(ctx->r19, -0X1);
    // 0x8022AD90: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022AD94: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022AD98: bgez        $v0, L_8022AC78
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AD9C: nop
    
            goto L_8022AC78;
    }
    // 0x8022AD9C: nop

    // 0x8022ADA0: lbu         $v0, 0x4F($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4F);
    // 0x8022ADA4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022ADA8: j           L_8022ADD0
    // 0x8022ADAC: sb          $v0, 0x4F($s2)
    MEM_B(0X4F, ctx->r18) = ctx->r2;
        goto L_8022ADD0;
    // 0x8022ADAC: sb          $v0, 0x4F($s2)
    MEM_B(0X4F, ctx->r18) = ctx->r2;
L_8022ADB0:
    // 0x8022ADB0: lbu         $v0, 0x4E($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4E);
    // 0x8022ADB4: andi        $v0, $v0, 0xF5
    ctx->r2 = ctx->r2 & 0XF5;
    // 0x8022ADB8: j           L_8022ADD0
    // 0x8022ADBC: sb          $v0, 0x4E($s2)
    MEM_B(0X4E, ctx->r18) = ctx->r2;
        goto L_8022ADD0;
    // 0x8022ADBC: sb          $v0, 0x4E($s2)
    MEM_B(0X4E, ctx->r18) = ctx->r2;
L_8022ADC0:
    // 0x8022ADC0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022ADC4: j           L_8022ADD0
    // 0x8022ADC8: sb          $v0, 0x51($s2)
    MEM_B(0X51, ctx->r18) = ctx->r2;
        goto L_8022ADD0;
    // 0x8022ADC8: sb          $v0, 0x51($s2)
    MEM_B(0X51, ctx->r18) = ctx->r2;
L_8022ADCC:
    // 0x8022ADCC: sb          $v0, 0x50($s2)
    MEM_B(0X50, ctx->r18) = ctx->r2;
L_8022ADD0:
    // 0x8022ADD0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022ADD4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022ADD8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022ADDC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ADE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022ADE4: jr          $ra
    // 0x8022ADE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022ADE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022ADEC: nop

;}
RECOMP_FUNC void func_80227B54_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227B58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227B5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227B60: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80227B64: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227B68: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227B6C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227B70: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227B74: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227B78: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227B7C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227B80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227B84: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80227B88: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x80227B8C: jal         0x80228A78
    // 0x80227B90: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80228A78_ovl19(rdram, ctx);
        goto after_0;
    // 0x80227B90: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80227B94: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80227B98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227B9C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227BA0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80227BA4: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80227BA8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227BAC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80227BB0: jal         0x8004F820
    // 0x80227BB4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80227BB4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227BB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227BBC: bgez        $v0, L_80227BEC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227BC0: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80227BEC;
    }
    // 0x80227BC0: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80227BC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227BC8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227BCC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227BD0: jal         0x8004F820
    // 0x80227BD4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227BD4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80227BD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227BDC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227BE0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227BE4: j           L_80227C08
    // 0x80227BE8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80227C08;
    // 0x80227BE8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80227BEC:
    // 0x80227BEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227BF0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227BF4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227BF8: jal         0x8004F820
    // 0x80227BFC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80227BFC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80227C00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227C04: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80227C08:
    // 0x80227C08: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227C0C: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80227C10: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80227C14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227C18: jal         0x800610AC
    // 0x80227C1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80227C1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80227C20: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80227C24: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227C28: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227C2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227C30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227C34: jr          $ra
    // 0x80227C38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227C38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022B198_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B198: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022B19C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022B1A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B1A4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022B1A8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022B1AC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022B1B0: lb          $v0, 0x36C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X36C);
    // 0x8022B1B4: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022B1B8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022B1BC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022B1C0: beq         $v0, $zero, L_8022B1D0
    if (ctx->r2 == 0) {
        // 0x8022B1C4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022B1D0;
    }
    // 0x8022B1C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B1C8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022B1CC: sb          $v0, 0x36C($s0)
    MEM_B(0X36C, ctx->r16) = ctx->r2;
L_8022B1D0:
    // 0x8022B1D0: lbu         $a0, 0x36A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022B1D4: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x8022B1D8: bne         $v0, $zero, L_8022B20C
    if (ctx->r2 != 0) {
        // 0x8022B1DC: lui         $a1, 0xFFFF
        ctx->r5 = S32(0XFFFF << 16);
            goto L_8022B20C;
    }
    // 0x8022B1DC: lui         $a1, 0xFFFF
    ctx->r5 = S32(0XFFFF << 16);
    // 0x8022B1E0: lbu         $v1, 0x36B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X36B);
    // 0x8022B1E4: bne         $v1, $zero, L_8022B1F8
    if (ctx->r3 != 0) {
        // 0x8022B1E8: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_8022B1F8;
    }
    // 0x8022B1E8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022B1EC: andi        $v0, $a0, 0xEF
    ctx->r2 = ctx->r4 & 0XEF;
    // 0x8022B1F0: j           L_8022B2A4
    // 0x8022B1F4: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
        goto L_8022B2A4;
    // 0x8022B1F4: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
L_8022B1F8:
    // 0x8022B1F8: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022B1FC: sb          $v1, 0x36B($s0)
    MEM_B(0X36B, ctx->r16) = ctx->r3;
    // 0x8022B200: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022B204: j           L_8022B2A4
    // 0x8022B208: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
        goto L_8022B2A4;
    // 0x8022B208: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
L_8022B20C:
    // 0x8022B20C: ori         $a1, $a1, 0x7FFF
    ctx->r5 = ctx->r5 | 0X7FFF;
    // 0x8022B210: lui         $a0, 0xA1
    ctx->r4 = S32(0XA1 << 16);
    // 0x8022B214: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022B218: ori         $a0, $a0, 0x7FFE
    ctx->r4 = ctx->r4 | 0X7FFE;
    // 0x8022B21C: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8022B220: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022B224: sltu        $a0, $a0, $v1
    ctx->r4 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8022B228: bne         $a0, $zero, L_8022B2A4
    if (ctx->r4 != 0) {
        // 0x8022B22C: sb          $v0, 0x36B($s0)
        MEM_B(0X36B, ctx->r16) = ctx->r2;
            goto L_8022B2A4;
    }
    // 0x8022B22C: sb          $v0, 0x36B($s0)
    MEM_B(0X36B, ctx->r16) = ctx->r2;
    // 0x8022B230: addiu       $a0, $s2, 0xC4
    ctx->r4 = ADD32(ctx->r18, 0XC4);
    // 0x8022B234: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022B238: jal         0x8009A3B4
    // 0x8022B23C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B23C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022B240: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022B244: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022B248: jal         0x8009A3B4
    // 0x8022B24C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B24C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022B250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B254: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B258: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B25C: lhu         $v1, 0x322($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X322);
    // 0x8022B260: addiu       $a2, $s0, 0x34C
    ctx->r6 = ADD32(ctx->r16, 0X34C);
    // 0x8022B264: addiu       $a3, $s0, 0x354
    ctx->r7 = ADD32(ctx->r16, 0X354);
    // 0x8022B268: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B26C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B270: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B274: jal         0x8004E150
    // 0x8022B278: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_2;
    // 0x8022B278: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022B27C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022B280: beq         $v0, $zero, L_8022B2A4
    if (ctx->r2 == 0) {
        // 0x8022B284: nop
    
            goto L_8022B2A4;
    }
    // 0x8022B284: nop

    // 0x8022B288: lb          $v0, 0x36C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X36C);
    // 0x8022B28C: bne         $v0, $zero, L_8022B2A4
    if (ctx->r2 != 0) {
        // 0x8022B290: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B2A4;
    }
    // 0x8022B290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B294: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B298: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B29C: sb          $zero, 0x36E($s0)
    MEM_B(0X36E, ctx->r16) = 0;
    // 0x8022B2A0: sb          $v0, 0x36D($s0)
    MEM_B(0X36D, ctx->r16) = ctx->r2;
L_8022B2A4:
    // 0x8022B2A4: lbu         $v0, 0x62($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X62);
    // 0x8022B2A8: andi        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 & 0X14;
    // 0x8022B2AC: beq         $v0, $zero, L_8022B2E8
    if (ctx->r2 == 0) {
        // 0x8022B2B0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B2E8;
    }
    // 0x8022B2B0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B2B4: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B2B8: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022B2BC: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022B2C0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8022B2C4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022B2C8: jal         0x8004F820
    // 0x8022B2CC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022B2CC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_3:
    // 0x8022B2D0: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022B2D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B2D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B2DC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B2E0: jal         0x8022B740
    // 0x8022B2E4: sh          $v1, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r3;
    func_8022B740_ovl19(rdram, ctx);
        goto after_4;
    // 0x8022B2E4: sh          $v1, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r3;
    after_4:
L_8022B2E8:
    // 0x8022B2E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B2EC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022B2F0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022B2F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022B2F8: jr          $ra
    // 0x8022B2FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022B2FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80229628_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229628: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022962C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229630: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229634: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229638: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022963C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229640: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80229644: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80229648: jal         0x8004DA90
    // 0x8022964C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022964C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80229650: jal         0x8003E810
    // 0x80229654: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_1;
    // 0x80229654: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80229658: bne         $v0, $zero, L_80229674
    if (ctx->r2 != 0) {
        // 0x8022965C: nop
    
            goto L_80229674;
    }
    // 0x8022965C: nop

    // 0x80229660: jal         0x80040F30
    // 0x80229664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80229664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80229668: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8022966C: j           L_80229680
    // 0x80229670: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80229680;
    // 0x80229670: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80229674:
    // 0x80229674: jal         0x8004F418
    // 0x80229678: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x80229678: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022967C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229680:
    // 0x80229680: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229684: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229688: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022968C: jr          $ra
    // 0x80229690: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229690: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802254A0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802254A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802254AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254B0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802254B4: bne         $v0, $zero, L_802254D4
    if (ctx->r2 != 0) {
        // 0x802254B8: nop
    
            goto L_802254D4;
    }
    // 0x802254B8: nop

    // 0x802254BC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802254C0: jal         0x800607C4
    // 0x802254C4: addiu       $a0, $a0, -0x2234
    ctx->r4 = ADD32(ctx->r4, -0X2234);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802254C4: addiu       $a0, $a0, -0x2234
    ctx->r4 = ADD32(ctx->r4, -0X2234);
    after_0:
    // 0x802254C8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802254CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802254D0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802254D4:
    // 0x802254D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802254D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802254DC: jr          $ra
    // 0x802254E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802254E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D400_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D400: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022D404: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022D408: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8022D40C: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x8022D410: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D414: jr          $ra
    // 0x8022D418: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022D418: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022CC68_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC68: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022CC6C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022CC70: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CC74: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022CC78: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022CC7C: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022CC80: beq         $v0, $zero, L_8022CCD4
    if (ctx->r2 == 0) {
        // 0x8022CC84: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022CCD4;
    }
    // 0x8022CC84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CC88: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022CC8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CC90: jal         0x8002C678
    // 0x8022CC94: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8022CC94: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022CC98: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022CC9C: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x8022CCA0: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8022CCA4: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8022CCA8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022CCAC: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8022CCB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022CCB4: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022CCB8: mfhi        $a2
    ctx->r6 = hi;
    // 0x8022CCBC: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8022CCC0: nop

    // 0x8022CCC4: jal         0x800319B4
    // 0x8022CCC8: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8022CCC8: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022CCCC: j           L_8022CCE0
    // 0x8022CCD0: nop

        goto L_8022CCE0;
    // 0x8022CCD0: nop

L_8022CCD4:
    // 0x8022CCD4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022CCD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CCDC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022CCE0:
    // 0x8022CCE0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022CCE4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022CCE8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022CCEC: jr          $ra
    // 0x8022CCF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022CCF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022B740_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B740: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022B744: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022B748: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022B74C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022B750: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8022B754: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022B758: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022B75C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022B760: lw          $v1, 0x348($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X348);
    // 0x8022B764: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x8022B768: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B76C: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022B770: bne         $v1, $v0, L_8022B80C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B774: addiu       $s4, $s1, 0x308
        ctx->r20 = ADD32(ctx->r17, 0X308);
            goto L_8022B80C;
    }
    // 0x8022B774: addiu       $s4, $s1, 0x308
    ctx->r20 = ADD32(ctx->r17, 0X308);
    // 0x8022B778: lh          $v1, 0x368($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X368);
    // 0x8022B77C: lh          $v0, 0x328($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X328);
    // 0x8022B780: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022B784: beq         $v1, $v0, L_8022B8C4
    if (ctx->r3 == ctx->r2) {
        // 0x8022B788: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_8022B8C4;
    }
    // 0x8022B788: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022B78C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022B790: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022B794: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x8022B798: sltiu       $v0, $a1, 0x800
    ctx->r2 = ctx->r5 < 0X800 ? 1 : 0;
    // 0x8022B79C: beq         $v0, $zero, L_8022B7CC
    if (ctx->r2 == 0) {
        // 0x8022B7A0: addu        $s3, $a1, $zero
        ctx->r19 = ADD32(ctx->r5, 0);
            goto L_8022B7CC;
    }
    // 0x8022B7A0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022B7A4: addiu       $v0, $a2, -0x800
    ctx->r2 = ADD32(ctx->r6, -0X800);
    // 0x8022B7A8: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x8022B7AC: beq         $v0, $zero, L_8022B7C4
    if (ctx->r2 == 0) {
        // 0x8022B7B0: nop
    
            goto L_8022B7C4;
    }
    // 0x8022B7B0: nop

    // 0x8022B7B4: jal         0x8022B8EC
    // 0x8022B7B8: nop

    func_8022B8EC_ovl19(rdram, ctx);
        goto after_0;
    // 0x8022B7B8: nop

    after_0:
    // 0x8022B7BC: j           L_8022B7D0
    // 0x8022B7C0: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
        goto L_8022B7D0;
    // 0x8022B7C0: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
L_8022B7C4:
    // 0x8022B7C4: jal         0x8022B93C
    // 0x8022B7C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022B93C_ovl19(rdram, ctx);
        goto after_1;
    // 0x8022B7C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
L_8022B7CC:
    // 0x8022B7CC: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
L_8022B7D0:
    // 0x8022B7D0: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x8022B7D4: beq         $v0, $zero, L_8022B8C4
    if (ctx->r2 == 0) {
        // 0x8022B7D8: sltiu       $v0, $s0, 0x800
        ctx->r2 = ctx->r16 < 0X800 ? 1 : 0;
            goto L_8022B8C4;
    }
    // 0x8022B7D8: sltiu       $v0, $s0, 0x800
    ctx->r2 = ctx->r16 < 0X800 ? 1 : 0;
    // 0x8022B7DC: beq         $v0, $zero, L_8022B7F8
    if (ctx->r2 == 0) {
        // 0x8022B7E0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022B7F8;
    }
    // 0x8022B7E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B7E4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022B7E8: jal         0x8022B8EC
    // 0x8022B7EC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8022B8EC_ovl19(rdram, ctx);
        goto after_2;
    // 0x8022B7EC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022B7F0: j           L_8022B8C4
    // 0x8022B7F4: nop

        goto L_8022B8C4;
    // 0x8022B7F4: nop

L_8022B7F8:
    // 0x8022B7F8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022B7FC: jal         0x8022B93C
    // 0x8022B800: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8022B93C_ovl19(rdram, ctx);
        goto after_3;
    // 0x8022B800: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B804: j           L_8022B8C4
    // 0x8022B808: nop

        goto L_8022B8C4;
    // 0x8022B808: nop

L_8022B80C:
    // 0x8022B80C: addiu       $s0, $a1, 0xC4
    ctx->r16 = ADD32(ctx->r5, 0XC4);
    // 0x8022B810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B814: lhu         $v0, 0x328($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X328);
    // 0x8022B818: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8022B81C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B820: andi        $s2, $v0, 0xFFF
    ctx->r18 = ctx->r2 & 0XFFF;
    // 0x8022B824: jal         0x8009A3B4
    // 0x8022B828: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022B828: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    after_4:
    // 0x8022B82C: addiu       $a0, $s1, 0x198
    ctx->r4 = ADD32(ctx->r17, 0X198);
    // 0x8022B830: lh          $a2, 0x366($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X366);
    // 0x8022B834: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022B838: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    // 0x8022B83C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022B840: jal         0x8004E800
    // 0x8022B844: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E800_29C00(rdram, ctx);
        goto after_5;
    // 0x8022B844: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022B848: andi        $a2, $v0, 0xFFF
    ctx->r6 = ctx->r2 & 0XFFF;
    // 0x8022B84C: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x8022B850: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022B854: sltiu       $v0, $s2, 0x800
    ctx->r2 = ctx->r18 < 0X800 ? 1 : 0;
    // 0x8022B858: sh          $s0, 0x368($s1)
    MEM_H(0X368, ctx->r17) = ctx->r16;
    // 0x8022B85C: beq         $v0, $zero, L_8022B88C
    if (ctx->r2 == 0) {
        // 0x8022B860: sh          $s0, 0x328($s1)
        MEM_H(0X328, ctx->r17) = ctx->r16;
            goto L_8022B88C;
    }
    // 0x8022B860: sh          $s0, 0x328($s1)
    MEM_H(0X328, ctx->r17) = ctx->r16;
    // 0x8022B864: addiu       $v0, $a2, -0x800
    ctx->r2 = ADD32(ctx->r6, -0X800);
    // 0x8022B868: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x8022B86C: beq         $v0, $zero, L_8022B884
    if (ctx->r2 == 0) {
        // 0x8022B870: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022B884;
    }
    // 0x8022B870: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B874: jal         0x8022B98C
    // 0x8022B878: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8022B98C_ovl19(rdram, ctx);
        goto after_6;
    // 0x8022B878: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
    // 0x8022B87C: j           L_8022B890
    // 0x8022B880: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
        goto L_8022B890;
    // 0x8022B880: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
L_8022B884:
    // 0x8022B884: jal         0x8022B9CC
    // 0x8022B888: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8022B9CC_ovl19(rdram, ctx);
        goto after_7;
    // 0x8022B888: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_7:
L_8022B88C:
    // 0x8022B88C: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
L_8022B890:
    // 0x8022B890: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x8022B894: beq         $v0, $zero, L_8022B8C4
    if (ctx->r2 == 0) {
        // 0x8022B898: sltiu       $v0, $s0, 0x800
        ctx->r2 = ctx->r16 < 0X800 ? 1 : 0;
            goto L_8022B8C4;
    }
    // 0x8022B898: sltiu       $v0, $s0, 0x800
    ctx->r2 = ctx->r16 < 0X800 ? 1 : 0;
    // 0x8022B89C: beq         $v0, $zero, L_8022B8B8
    if (ctx->r2 == 0) {
        // 0x8022B8A0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022B8B8;
    }
    // 0x8022B8A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B8A4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022B8A8: jal         0x8022B98C
    // 0x8022B8AC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8022B98C_ovl19(rdram, ctx);
        goto after_8;
    // 0x8022B8AC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022B8B0: j           L_8022B8C4
    // 0x8022B8B4: nop

        goto L_8022B8C4;
    // 0x8022B8B4: nop

L_8022B8B8:
    // 0x8022B8B8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022B8BC: jal         0x8022B9CC
    // 0x8022B8C0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8022B9CC_ovl19(rdram, ctx);
        goto after_9;
    // 0x8022B8C0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_9:
L_8022B8C4:
    // 0x8022B8C4: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x8022B8C8: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
    // 0x8022B8CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022B8D0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8022B8D4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022B8D8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022B8DC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B8E0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022B8E4: jr          $ra
    // 0x8022B8E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022B8E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022D180_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D180: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022D184: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022D188: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D18C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022D190: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022D194: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022D198: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022D19C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022D1A0: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x8022D1A4: beq         $v0, $zero, L_8022D398
    if (ctx->r2 == 0) {
        // 0x8022D1A8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022D398;
    }
    // 0x8022D1A8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D1AC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D1B0: addu        $at, $at, $v0
    gpr jr_addend_8022D1B8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D1B4: lw          $v0, -0x16F0($at)
    ctx->r2 = ADD32(ctx->r1, -0X16F0);
    // 0x8022D1B8: jr          $v0
    // 0x8022D1BC: nop

    switch (jr_addend_8022D1B8 >> 2) {
        case 0: goto L_8022D1C0; break;
        case 1: goto L_8022D1E0; break;
        case 2: goto L_8022D1F4; break;
        case 3: goto L_8022D22C; break;
        case 4: goto L_8022D29C; break;
        case 5: goto L_8022D34C; break;
        case 6: goto L_8022D398; break;
        case 7: goto L_8022D398; break;
        case 8: goto L_8022D398; break;
        case 9: goto L_8022D398; break;
        case 10: goto L_8022D360; break;
        default: switch_error(__func__, 0x8022D1B8, 0x8022E910);
    }
    // 0x8022D1BC: nop

L_8022D1C0:
    // 0x8022D1C0: jal         0x8006FF84
    // 0x8022D1C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022D1C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022D1C8: beq         $v0, $zero, L_8022D398
    if (ctx->r2 == 0) {
        // 0x8022D1CC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D398;
    }
    // 0x8022D1CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D1D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D1D4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022D1D8: j           L_8022D28C
    // 0x8022D1DC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
        goto L_8022D28C;
    // 0x8022D1DC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
L_8022D1E0:
    // 0x8022D1E0: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8022D1E4: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    // 0x8022D1E8: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022D1EC: j           L_8022D290
    // 0x8022D1F0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_8022D290;
    // 0x8022D1F0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_8022D1F4:
    // 0x8022D1F4: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022D1F8: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x8022D1FC: bne         $v0, $zero, L_8022D224
    if (ctx->r2 != 0) {
        // 0x8022D200: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022D224;
    }
    // 0x8022D200: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022D204: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022D208: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022D20C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022D210: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D214: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022D218: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022D21C: j           L_8022D398
    // 0x8022D220: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_8022D398;
    // 0x8022D220: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_8022D224:
    // 0x8022D224: j           L_8022D398
    // 0x8022D228: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022D398;
    // 0x8022D228: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022D22C:
    // 0x8022D22C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022D230: bgez        $v0, L_8022D398
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D234: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_8022D398;
    }
    // 0x8022D234: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022D238: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022D23C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D240: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8022D244: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022D248: lw          $a2, -0x17E8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X17E8);
    // 0x8022D24C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D250: jal         0x80069754
    // 0x8022D254: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_1;
    // 0x8022D254: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022D258: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022D25C: bne         $v0, $zero, L_8022D28C
    if (ctx->r2 != 0) {
        // 0x8022D260: nop
    
            goto L_8022D28C;
    }
    // 0x8022D260: nop

    // 0x8022D264: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022D268: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D26C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022D270: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022D274: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x8022D278: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022D27C: addiu       $v0, $v0, -0xC8
    ctx->r2 = ADD32(ctx->r2, -0XC8);
    // 0x8022D280: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x8022D284: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022D288: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
L_8022D28C:
    // 0x8022D28C: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
L_8022D290:
    // 0x8022D290: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D294: j           L_8022D398
    // 0x8022D298: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8022D398;
    // 0x8022D298: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022D29C:
    // 0x8022D29C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022D2A0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022D2A4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022D2A8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022D2AC: beq         $v0, $zero, L_8022D31C
    if (ctx->r2 == 0) {
        // 0x8022D2B0: nop
    
            goto L_8022D31C;
    }
    // 0x8022D2B0: nop

    // 0x8022D2B4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022D2B8: bne         $v0, $zero, L_8022D30C
    if (ctx->r2 != 0) {
        // 0x8022D2BC: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8022D30C;
    }
    // 0x8022D2BC: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022D2C0: jal         0x8002C654
    // 0x8022D2C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x8022D2C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022D2C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D2CC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022D2D0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022D2D4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022D2D8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D2DC: jal         0x80031DA8
    // 0x8022D2E0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x8022D2E0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022D2E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022D2E8: jal         0x80031BB4
    // 0x8022D2EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_4;
    // 0x8022D2EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022D2F0: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x8022D2F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D2F8: jal         0x800319B4
    // 0x8022D2FC: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x8022D2FC: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    after_5:
    // 0x8022D300: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022D304: jal         0x800317C0
    // 0x8022D308: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800317C0_CBC0(rdram, ctx);
        goto after_6;
    // 0x8022D308: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
L_8022D30C:
    // 0x8022D30C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022D310: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022D314: j           L_8022D398
    // 0x8022D318: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022D398;
    // 0x8022D318: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022D31C:
    // 0x8022D31C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022D320: bnel        $v0, $zero, L_8022D338
    if (ctx->r2 != 0) {
        // 0x8022D324: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022D338;
    }
    goto skip_0;
    // 0x8022D324: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    skip_0:
    // 0x8022D328: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x8022D32C: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    // 0x8022D330: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022D334: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022D338:
    // 0x8022D338: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022D33C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022D340: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022D344: j           L_8022D398
    // 0x8022D348: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
        goto L_8022D398;
    // 0x8022D348: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_8022D34C:
    // 0x8022D34C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022D350: bgez        $v0, L_8022D398
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D354: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022D398;
    }
    // 0x8022D354: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D358: j           L_8022D398
    // 0x8022D35C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8022D398;
    // 0x8022D35C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022D360:
    // 0x8022D360: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022D364: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D368: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022D36C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022D370: jal         0x8006036C
    // 0x8022D374: lw          $a0, -0x1828($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1828);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x8022D374: lw          $a0, -0x1828($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1828);
    after_7:
    // 0x8022D378: jal         0x80070050
    // 0x8022D37C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_8;
    // 0x8022D37C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022D380: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D384: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D388: sw          $zero, 0x184($s0)
    MEM_W(0X184, ctx->r16) = 0;
    // 0x8022D38C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D390: jal         0x8004F684
    // 0x8022D394: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_9;
    // 0x8022D394: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_9:
L_8022D398:
    // 0x8022D398: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022D39C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022D3A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022D3A4: jr          $ra
    // 0x8022D3A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022D3A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022AF54_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AF54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AF58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AF5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AF60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AF64: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AF68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AF6C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022AF70: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022AF74: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022AF78: jal         0x8004D5D4
    // 0x8022AF7C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022AF7C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022AF80: sw          $zero, 0x328($s0)
    MEM_W(0X328, ctx->r16) = 0;
    // 0x8022AF84: lhu         $a0, 0x328($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X328);
    // 0x8022AF88: lw          $a1, 0x80($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X80);
    // 0x8022AF8C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AF90: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022AF94: sw          $zero, 0x310($s0)
    MEM_W(0X310, ctx->r16) = 0;
    // 0x8022AF98: sw          $zero, 0x314($s0)
    MEM_W(0X314, ctx->r16) = 0;
    // 0x8022AF9C: sw          $zero, 0x318($s0)
    MEM_W(0X318, ctx->r16) = 0;
    // 0x8022AFA0: sw          $zero, 0x31C($s0)
    MEM_W(0X31C, ctx->r16) = 0;
    // 0x8022AFA4: sw          $zero, 0x320($s0)
    MEM_W(0X320, ctx->r16) = 0;
    // 0x8022AFA8: sw          $zero, 0x324($s0)
    MEM_W(0X324, ctx->r16) = 0;
    // 0x8022AFAC: sw          $zero, 0x32C($s0)
    MEM_W(0X32C, ctx->r16) = 0;
    // 0x8022AFB0: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
    // 0x8022AFB4: sb          $zero, 0x36C($s0)
    MEM_B(0X36C, ctx->r16) = 0;
    // 0x8022AFB8: sb          $zero, 0x36B($s0)
    MEM_B(0X36B, ctx->r16) = 0;
    // 0x8022AFBC: sb          $zero, 0x370($s0)
    MEM_B(0X370, ctx->r16) = 0;
    // 0x8022AFC0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8022AFC4: lw          $a2, 0x298($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X298);
    // 0x8022AFC8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022AFCC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022AFD0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022AFD4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022AFD8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022AFDC: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022AFE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AFE4: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022AFE8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022AFEC: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x8022AFF0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022AFF4: sw          $zero, 0x330($s0)
    MEM_W(0X330, ctx->r16) = 0;
    // 0x8022AFF8: sw          $zero, 0x334($s0)
    MEM_W(0X334, ctx->r16) = 0;
    // 0x8022AFFC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022B000: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022B004: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022B008: sh          $a0, 0x368($s0)
    MEM_H(0X368, ctx->r16) = ctx->r4;
    // 0x8022B00C: sw          $a1, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->r5;
    // 0x8022B010: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022B014: addiu       $a0, $s0, 0x338
    ctx->r4 = ADD32(ctx->r16, 0X338);
    // 0x8022B018: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022B01C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022B020: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022B024: jal         0x800540BC
    // 0x8022B028: sh          $v0, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r2;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022B028: sh          $v0, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022B02C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B030: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022B034: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022B038: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B03C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B040: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022B044: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022B048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B04C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022B050: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B054: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B058: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022B05C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B060: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022B064: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022B068: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022B06C: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022B070: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022B074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B078: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B07C: jr          $ra
    // 0x8022B080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228348_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022834C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228350: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228358: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022835C: bgez        $v0, L_80228390
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228360: nop
    
            goto L_80228390;
    }
    // 0x80228360: nop

    // 0x80228364: jal         0x80228A78
    // 0x80228368: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228A78_ovl19(rdram, ctx);
        goto after_0;
    // 0x80228368: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022836C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80228370: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x80228374: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80228378: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022837C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80228380: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x80228384: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80228388: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022838C: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80228390:
    // 0x80228390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228394: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228398: jr          $ra
    // 0x8022839C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022839C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227AD8_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227AD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227ADC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227AE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227AE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227AE8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227AEC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227AF0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227AF4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227AF8: jal         0x80228A88
    // 0x80227AFC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80228A88_ovl19(rdram, ctx);
        goto after_0;
    // 0x80227AFC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227B00: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227B04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227B08: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80227B0C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227B10: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227B18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227B1C: jr          $ra
    // 0x80227B20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227B20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226C74_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226C78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226C7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226C84: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80226C88: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80226C8C: jal         0x8004FA7C
    // 0x80226C90: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80226C90: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80226C94: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80226C98: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80226C9C: bne         $v0, $zero, L_80226CC8
    if (ctx->r2 != 0) {
        // 0x80226CA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226CC8;
    }
    // 0x80226CA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226CA4: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x80226CA8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x80226CAC: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x80226CB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226CB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226CB8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80226CBC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80226CC0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80226CC4: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_80226CC8:
    // 0x80226CC8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226CCC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80226CD0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226CD4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226CDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226CE0: jr          $ra
    // 0x80226CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D3D0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D3D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D3D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D3D8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022D3DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D3E0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D3E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D3E8: lw          $v0, -0x1794($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1794);
    // 0x8022D3EC: jalr        $v0
    // 0x8022D3F0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D3F0: nop

    after_0:
    // 0x8022D3F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D3F8: jr          $ra
    // 0x8022D3FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D3FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CE40_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022CE44: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022CE48: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CE4C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022CE50: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022CE54: lbu         $a2, 0x0($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X0);
    // 0x8022CE58: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022CE5C: ori         $v0, $a2, 0x2
    ctx->r2 = ctx->r6 | 0X2;
    // 0x8022CE60: bne         $v1, $zero, L_8022CEBC
    if (ctx->r3 != 0) {
        // 0x8022CE64: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_8022CEBC;
    }
    // 0x8022CE64: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022CE68: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8022CE6C: ori         $v0, $a2, 0x6
    ctx->r2 = ctx->r6 | 0X6;
    // 0x8022CE70: jal         0x8004D5D4
    // 0x8022CE74: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022CE74: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022CE78: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022CE7C: jal         0x8002C654
    // 0x8022CE80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8022CE80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022CE84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE88: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022CE8C: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x8022CE90: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022CE94: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022CE98: jal         0x80031DA8
    // 0x8022CE9C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8022CE9C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022CEA0: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    // 0x8022CEA4: jal         0x800317C0
    // 0x8022CEA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800317C0_CBC0(rdram, ctx);
        goto after_3;
    // 0x8022CEA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022CEAC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022CEB0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022CEB4: j           L_8022D088
    // 0x8022CEB8: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
        goto L_8022D088;
    // 0x8022CEB8: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
L_8022CEBC:
    // 0x8022CEBC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CEC0: lb          $v0, -0x1818($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X1818);
    // 0x8022CEC4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022CEC8: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022CECC: beq         $v0, $v1, L_8022CF0C
    if (ctx->r2 == ctx->r3) {
        // 0x8022CED0: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_8022CF0C;
    }
    // 0x8022CED0: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8022CED4: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
L_8022CED8:
    // 0x8022CED8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CEDC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CEE0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CEE4: lb          $v0, -0x1818($at)
    ctx->r2 = MEM_B(ctx->r1, -0X1818);
    // 0x8022CEE8: bltz        $v0, L_8022D020
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022CEEC: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_8022D020;
    }
    // 0x8022CEEC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8022CEF0: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x8022CEF4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CEF8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CEFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CF00: lb          $v0, -0x1818($at)
    ctx->r2 = MEM_B(ctx->r1, -0X1818);
    // 0x8022CF04: bne         $v0, $v1, L_8022CED8
    if (ctx->r2 != ctx->r3) {
        // 0x8022CF08: andi        $v0, $t0, 0xFF
        ctx->r2 = ctx->r8 & 0XFF;
            goto L_8022CED8;
    }
    // 0x8022CF08: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
L_8022CF0C:
    // 0x8022CF0C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022CF10: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022CF14: lhu         $a0, 0x3A($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X3A);
    // 0x8022CF18: ori         $v0, $v0, 0x28
    ctx->r2 = ctx->r2 | 0X28;
    // 0x8022CF1C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022CF20: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022CF24: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022CF28: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CF2C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022CF30: lbu         $v1, -0x17F8($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X17F8);
    // 0x8022CF34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CF38: sb          $v1, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r3;
    // 0x8022CF3C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022CF40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CF44: lbu         $v1, -0x17F7($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X17F7);
    // 0x8022CF48: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022CF4C: lhu         $a1, 0x3C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022CF50: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CF54: sb          $v1, 0x23($s1)
    MEM_B(0X23, ctx->r17) = ctx->r3;
    // 0x8022CF58: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022CF5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CF60: lbu         $v1, -0x17F6($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X17F6);
    // 0x8022CF64: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022CF68: lbu         $a2, 0x3($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X3);
    // 0x8022CF6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CF70: sh          $v1, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r3;
    // 0x8022CF74: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x8022CF78: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8022CF7C: lbu         $a3, -0x17F5($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X17F5);
    // 0x8022CF80: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x8022CF84: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022CF88: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022CF8C: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x8022CF90: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CF94: sh          $a0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r4;
    // 0x8022CF98: sh          $a1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r5;
    // 0x8022CF9C: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x8022CFA0: beq         $a2, $v0, L_8022D030
    if (ctx->r6 == ctx->r2) {
        // 0x8022CFA4: sh          $a3, 0x26($s1)
        MEM_H(0X26, ctx->r17) = ctx->r7;
            goto L_8022D030;
    }
    // 0x8022CFA4: sh          $a3, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r7;
    // 0x8022CFA8: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x8022CFAC: sll         $a1, $v0, 3
    ctx->r5 = S32(ctx->r2 << 3);
    // 0x8022CFB0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CFB4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022CFB8: lh          $v0, -0x1812($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1812);
    // 0x8022CFBC: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022CFC0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022CFC4: lh          $v1, -0x1814($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X1814);
    // 0x8022CFC8: bgez        $v1, L_8022CFD4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022CFCC: sll         $v0, $v0, 6
        ctx->r2 = S32(ctx->r2 << 6);
            goto L_8022CFD4;
    }
    // 0x8022CFCC: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8022CFD0: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
L_8022CFD4:
    // 0x8022CFD4: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8022CFD8: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
    // 0x8022CFDC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CFE0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022CFE4: lbu         $v0, -0x1817($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1817);
    // 0x8022CFE8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022CFEC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022CFF0: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8022CFF4: lbu         $a0, -0x1816($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1816);
    // 0x8022CFF8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CFFC: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x8022D000: lbu         $a1, -0x1815($at)
    ctx->r5 = MEM_BU(ctx->r1, -0X1815);
    // 0x8022D004: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8022D008: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x8022D00C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8022D010: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8022D014: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022D018: j           L_8022D088
    // 0x8022D01C: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
        goto L_8022D088;
    // 0x8022D01C: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
L_8022D020:
    // 0x8022D020: jal         0x8004F684
    // 0x8022D024: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_4;
    // 0x8022D024: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022D028: j           L_8022D0A8
    // 0x8022D02C: nop

        goto L_8022D0A8;
    // 0x8022D02C: nop

L_8022D030:
    // 0x8022D030: andi        $v1, $t0, 0xFF
    ctx->r3 = ctx->r8 & 0XFF;
    // 0x8022D034: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022D038: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D03C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D040: lbu         $v0, -0x1817($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1817);
    // 0x8022D044: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022D048: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022D04C: lbu         $a0, -0x1816($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1816);
    // 0x8022D050: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D054: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022D058: lbu         $v1, -0x1815($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X1815);
    // 0x8022D05C: lhu         $a1, 0x24($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X24);
    // 0x8022D060: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8022D064: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x8022D068: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8022D06C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022D070: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x8022D074: lui         $v1, 0x3EC0
    ctx->r3 = S32(0X3EC0 << 16);
    // 0x8022D078: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022D07C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x8022D080: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x8022D084: sh          $a0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r4;
L_8022D088:
    // 0x8022D088: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022D08C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D090: addiu       $v0, $v0, -0x1884
    ctx->r2 = ADD32(ctx->r2, -0X1884);
    // 0x8022D094: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022D098: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x8022D09C: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x8022D0A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D0A4: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
L_8022D0A8:
    // 0x8022D0A8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022D0AC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022D0B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022D0B4: jr          $ra
    // 0x8022D0B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022D0B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80227060_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227060: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227064: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227068: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022706C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227070: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80227074: addiu       $s1, $s1, -0x1AAC
    ctx->r17 = ADD32(ctx->r17, -0X1AAC);
    // 0x80227078: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022707C: jal         0x800A3450
    // 0x80227080: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80227080: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x80227084: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227088: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022708C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227090: lbu         $v1, -0x1ABC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1ABC);
    // 0x80227094: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227098: beq         $v1, $v0, L_80227138
    if (ctx->r3 == ctx->r2) {
        // 0x8022709C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80227138;
    }
    // 0x8022709C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x802270A0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802270A4: beql        $v0, $zero, L_802270BC
    if (ctx->r2 == 0) {
        // 0x802270A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802270BC;
    }
    goto skip_0;
    // 0x802270A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802270AC: beq         $v1, $zero, L_802270CC
    if (ctx->r3 == 0) {
        // 0x802270B0: nop
    
            goto L_802270CC;
    }
    // 0x802270B0: nop

    // 0x802270B4: j           L_80227184
    // 0x802270B8: nop

        goto L_80227184;
    // 0x802270B8: nop

L_802270BC:
    // 0x802270BC: beq         $v1, $v0, L_80227158
    if (ctx->r3 == ctx->r2) {
        // 0x802270C0: nop
    
            goto L_80227158;
    }
    // 0x802270C0: nop

    // 0x802270C4: j           L_80227184
    // 0x802270C8: nop

        goto L_80227184;
    // 0x802270C8: nop

L_802270CC:
    // 0x802270CC: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x802270D0: bne         $v0, $zero, L_802270E4
    if (ctx->r2 != 0) {
        // 0x802270D4: nop
    
            goto L_802270E4;
    }
    // 0x802270D4: nop

    // 0x802270D8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802270DC: j           L_802270EC
    // 0x802270E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802270EC;
    // 0x802270E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802270E4:
    // 0x802270E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802270E8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_802270EC:
    // 0x802270EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802270F0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802270F4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802270F8: beq         $v0, $zero, L_80227114
    if (ctx->r2 == 0) {
        // 0x802270FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227114;
    }
    // 0x802270FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227100: jal         0x80228AC8
    // 0x80227104: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80228AC8_ovl19(rdram, ctx);
        goto after_1;
    // 0x80227104: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80227108: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022710C: j           L_80227128
    // 0x80227110: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80227128;
    // 0x80227110: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80227114:
    // 0x80227114: jal         0x80228AC8
    // 0x80227118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80228AC8_ovl19(rdram, ctx);
        goto after_2;
    // 0x80227118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8022711C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227120: jal         0x80228A88
    // 0x80227124: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_80228A88_ovl19(rdram, ctx);
        goto after_3;
    // 0x80227124: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_80227128:
    // 0x80227128: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x8022712C: addiu       $s1, $s1, -0x1AAC
    ctx->r17 = ADD32(ctx->r17, -0X1AAC);
    // 0x80227130: j           L_80227184
    // 0x80227134: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80227184;
    // 0x80227134: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227138:
    // 0x80227138: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022713C: jal         0x80228A78
    // 0x80227140: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_80228A78_ovl19(rdram, ctx);
        goto after_4;
    // 0x80227140: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x80227144: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227148: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022714C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80227150: j           L_80227184
    // 0x80227154: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80227184;
    // 0x80227154: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80227158:
    // 0x80227158: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022715C: jal         0x80228A88
    // 0x80227160: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_80228A88_ovl19(rdram, ctx);
        goto after_5;
    // 0x80227160: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x80227164: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227168: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022716C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227170: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80227174: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227178: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022717C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x80227180: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227184:
    // 0x80227184: jal         0x800A3450
    // 0x80227188: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80227188: nop

    after_6:
    // 0x8022718C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227190: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80227194: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227198: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022719C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802271A0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802271A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802271A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802271AC: jr          $ra
    // 0x802271B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802271B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D41C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D41C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022D420: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022D424: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8022D428: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022D42C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022D430: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022D434: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022D438: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022D43C: lbu         $s3, 0x3($s4)
    ctx->r19 = MEM_BU(ctx->r20, 0X3);
    // 0x8022D440: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x8022D444: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8022D448: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x8022D44C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022D450: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x8022D454: lhu         $a0, -0x17C6($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X17C6);
    // 0x8022D458: jal         0x8006033C
    // 0x8022D45C: lbu         $s1, 0xA($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0XA);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022D45C: lbu         $s1, 0xA($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0XA);
    after_0:
    // 0x8022D460: beq         $v0, $zero, L_8022D664
    if (ctx->r2 == 0) {
        // 0x8022D464: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D664;
    }
    // 0x8022D464: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D468: lb          $v1, 0xC($s4)
    ctx->r3 = MEM_B(ctx->r20, 0XC);
    // 0x8022D46C: beq         $v1, $v0, L_8022D538
    if (ctx->r3 == ctx->r2) {
        // 0x8022D470: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8022D538;
    }
    // 0x8022D470: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022D474: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D478: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022D47C: lhu         $v0, -0x17D0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X17D0);
    // 0x8022D480: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022D484: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022D488: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8022D48C: lhu         $v1, -0x17CE($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X17CE);
    // 0x8022D490: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D494: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8022D498: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022D49C: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x8022D4A0: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x8022D4A4: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8022D4A8: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8022D4AC: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8022D4B0: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8022D4B4: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8022D4B8: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x8022D4BC: lh          $a2, -0x17CE($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X17CE);
    // 0x8022D4C0: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022D4C4: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8022D4C8: lh          $a1, -0x17D0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X17D0);
    // 0x8022D4CC: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x8022D4D0: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8022D4D4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8022D4D8: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8022D4DC: jal         0x8002FDF4
    // 0x8022D4E0: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_1;
    // 0x8022D4E0: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    after_1:
    // 0x8022D4E4: beq         $s1, $zero, L_8022D534
    if (ctx->r17 == 0) {
        // 0x8022D4E8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8022D534;
    }
    // 0x8022D4E8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022D4EC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D4F0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022D4F4: lhu         $v0, -0x17CE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X17CE);
    // 0x8022D4F8: sh          $s2, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r18;
    // 0x8022D4FC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022D500: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8022D504: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8022D508: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8022D50C: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x8022D510: lh          $a2, -0x17CE($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X17CE);
    // 0x8022D514: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022D518: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8022D51C: lh          $a1, -0x17D0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X17D0);
    // 0x8022D520: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8022D524: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8022D528: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8022D52C: jal         0x8002FDF4
    // 0x8022D530: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_2;
    // 0x8022D530: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    after_2:
L_8022D534:
    // 0x8022D534: lb          $v1, 0xC($s4)
    ctx->r3 = MEM_B(ctx->r20, 0XC);
L_8022D538:
    // 0x8022D538: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D53C: beq         $v1, $v0, L_8022D614
    if (ctx->r3 == ctx->r2) {
        // 0x8022D540: sra         $s1, $s1, 1
        ctx->r17 = S32(SIGNED(ctx->r17) >> 1);
            goto L_8022D614;
    }
    // 0x8022D540: sra         $s1, $s1, 1
    ctx->r17 = S32(SIGNED(ctx->r17) >> 1);
    // 0x8022D544: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x8022D548: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8022D54C: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x8022D550: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D554: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022D558: lhu         $v0, -0x17CC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X17CC);
    // 0x8022D55C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022D560: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022D564: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8022D568: lhu         $v1, -0x17CA($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X17CA);
    // 0x8022D56C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022D570: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8022D574: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022D578: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x8022D57C: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x8022D580: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8022D584: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8022D588: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022D58C: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8022D590: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8022D594: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8022D598: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x8022D59C: lh          $a2, -0x17CA($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X17CA);
    // 0x8022D5A0: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022D5A4: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8022D5A8: lh          $a1, -0x17CC($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X17CC);
    // 0x8022D5AC: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x8022D5B0: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8022D5B4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8022D5B8: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8022D5BC: jal         0x8002FDF4
    // 0x8022D5C0: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_3;
    // 0x8022D5C0: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    after_3:
    // 0x8022D5C4: beq         $s1, $zero, L_8022D614
    if (ctx->r17 == 0) {
        // 0x8022D5C8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8022D614;
    }
    // 0x8022D5C8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022D5CC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D5D0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022D5D4: lhu         $v0, -0x17CA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X17CA);
    // 0x8022D5D8: sh          $s2, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r18;
    // 0x8022D5DC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022D5E0: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8022D5E4: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8022D5E8: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8022D5EC: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x8022D5F0: lh          $a2, -0x17CA($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X17CA);
    // 0x8022D5F4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022D5F8: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8022D5FC: lh          $a1, -0x17CC($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X17CC);
    // 0x8022D600: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8022D604: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8022D608: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8022D60C: jal         0x8002FDF4
    // 0x8022D610: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_4;
    // 0x8022D610: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    after_4:
L_8022D614:
    // 0x8022D614: lbu         $v0, 0xB($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XB);
    // 0x8022D618: beq         $v0, $zero, L_8022D640
    if (ctx->r2 == 0) {
        // 0x8022D61C: sll         $v0, $s3, 1
        ctx->r2 = S32(ctx->r19 << 1);
            goto L_8022D640;
    }
    // 0x8022D61C: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x8022D620: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8022D624: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D628: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8022D62C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D630: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D634: lbu         $v0, -0x17C7($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X17C7);
    // 0x8022D638: j           L_8022D65C
    // 0x8022D63C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
        goto L_8022D65C;
    // 0x8022D63C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_8022D640:
    // 0x8022D640: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8022D644: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D648: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8022D64C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D650: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D654: lbu         $v0, -0x17C7($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X17C7);
    // 0x8022D658: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
L_8022D65C:
    // 0x8022D65C: andi        $v1, $v1, 0x3F
    ctx->r3 = ctx->r3 & 0X3F;
    // 0x8022D660: sb          $v1, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r3;
L_8022D664:
    // 0x8022D664: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D668: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022D66C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022D670: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022D674: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D678: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022D67C: jr          $ra
    // 0x8022D680: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022D680: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022D684: nop

    // 0x8022D688: nop

    // 0x8022D68C: nop

;}
RECOMP_FUNC void func_80225A78_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225A7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A84: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225A88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225A8C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80225A90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225A94: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80225A98: beq         $v1, $v0, L_80225B10
    if (ctx->r3 == ctx->r2) {
        // 0x80225A9C: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80225B10;
    }
    // 0x80225A9C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80225AA0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225AA4: beql        $v0, $zero, L_80225ABC
    if (ctx->r2 == 0) {
        // 0x80225AA8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225ABC;
    }
    goto skip_0;
    // 0x80225AA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225AAC: beq         $v1, $zero, L_80225AD4
    if (ctx->r3 == 0) {
        // 0x80225AB0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80225AD4;
    }
    // 0x80225AB0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80225AB4: j           L_80225C24
    // 0x80225AB8: nop

        goto L_80225C24;
    // 0x80225AB8: nop

L_80225ABC:
    // 0x80225ABC: beq         $v1, $v0, L_80225B70
    if (ctx->r3 == ctx->r2) {
        // 0x80225AC0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80225B70;
    }
    // 0x80225AC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225AC4: beq         $v1, $v0, L_80225BFC
    if (ctx->r3 == ctx->r2) {
        // 0x80225AC8: nop
    
            goto L_80225BFC;
    }
    // 0x80225AC8: nop

    // 0x80225ACC: j           L_80225C24
    // 0x80225AD0: nop

        goto L_80225C24;
    // 0x80225AD0: nop

L_80225AD4:
    // 0x80225AD4: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x80225AD8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80225ADC: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x80225AE0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80225AE4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80225AE8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80225AEC: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x80225AF0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80225AF4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80225AF8: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x80225AFC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225B00: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80225B04: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x80225B08: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x80225B0C: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
L_80225B10:
    // 0x80225B10: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80225B14: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225B18: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80225B1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225B20: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225B24: bltz        $v0, L_80225B54
    if (SIGNED(ctx->r2) < 0) {
        // 0x80225B28: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_80225B54;
    }
    // 0x80225B28: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80225B2C: beq         $v0, $zero, L_80225C24
    if (ctx->r2 == 0) {
        // 0x80225B30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225C24;
    }
    // 0x80225B30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225B34: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80225B38: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80225B3C: jal         0x8004DA90
    // 0x80225B40: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80225B40: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80225B44: jal         0x80040F30
    // 0x80225B48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80225B48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80225B4C: j           L_80225C24
    // 0x80225B50: nop

        goto L_80225C24;
    // 0x80225B50: nop

L_80225B54:
    // 0x80225B54: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80225B58: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80225B5C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225B60: addiu       $v1, $zero, 0x22
    ctx->r3 = ADD32(0, 0X22);
    // 0x80225B64: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80225B68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225B6C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225B70:
    // 0x80225B70: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x80225B74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225B78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80225B7C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225B80: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80225B84: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80225B88: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x80225B8C: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80225B90: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x80225B94: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80225B98: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80225B9C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80225BA0: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80225BA4: jal         0x8004DA90
    // 0x80225BA8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80225BA8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x80225BAC: jal         0x80040F30
    // 0x80225BB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80225BB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80225BB4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225BB8: beq         $v1, $zero, L_80225C24
    if (ctx->r3 == 0) {
        // 0x80225BBC: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_80225C24;
    }
    // 0x80225BBC: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x80225BC0: bnel        $v0, $zero, L_80225BC8
    if (ctx->r2 != 0) {
        // 0x80225BC4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80225BC8;
    }
    goto skip_1;
    // 0x80225BC4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_80225BC8:
    // 0x80225BC8: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x80225BCC: beq         $v0, $zero, L_80225C24
    if (ctx->r2 == 0) {
        // 0x80225BD0: nop
    
            goto L_80225C24;
    }
    // 0x80225BD0: nop

    // 0x80225BD4: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80225BD8: bgtz        $v0, L_80225C24
    if (SIGNED(ctx->r2) > 0) {
        // 0x80225BDC: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80225C24;
    }
    // 0x80225BDC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80225BE0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80225BE4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225BE8: addiu       $v1, $zero, 0x23
    ctx->r3 = ADD32(0, 0X23);
    // 0x80225BEC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80225BF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225BF4: j           L_80225C24
    // 0x80225BF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80225C24;
    // 0x80225BF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225BFC:
    // 0x80225BFC: lhu         $v0, 0x34C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34C);
    // 0x80225C00: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225C04: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80225C08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225C0C: bgez        $v0, L_80225C24
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80225C10: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80225C24;
    }
    // 0x80225C10: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80225C14: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80225C18: sb          $v1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r3;
    // 0x80225C1C: ori         $v0, $v0, 0x109
    ctx->r2 = ctx->r2 | 0X109;
    // 0x80225C20: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80225C24:
    // 0x80225C24: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225C28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225C2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225C30: jr          $ra
    // 0x80225C34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225C34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022982C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022982C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229830: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229834: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80229838: jal         0x8003E934
    // 0x8022983C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022983C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80229840: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80229844: addiu       $v0, $v0, -0x7D0
    ctx->r2 = ADD32(ctx->r2, -0X7D0);
    // 0x80229848: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022984C: beq         $v1, $zero, L_8022985C
    if (ctx->r3 == 0) {
        // 0x80229850: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_8022985C;
    }
    // 0x80229850: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80229854: jal         0x8004F418
    // 0x80229858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80229858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022985C:
    // 0x8022985C: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x80229860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229864: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80229868: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022986C: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x80229870: sh          $a2, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r6;
    // 0x80229874: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80229878: jal         0x8004DA90
    // 0x8022987C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022987C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_2:
    // 0x80229880: jal         0x8003E810
    // 0x80229884: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_3;
    // 0x80229884: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80229888: beq         $v0, $zero, L_802298A0
    if (ctx->r2 == 0) {
        // 0x8022988C: nop
    
            goto L_802298A0;
    }
    // 0x8022988C: nop

    // 0x80229890: jal         0x8004F418
    // 0x80229894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x80229894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80229898: j           L_802298B0
    // 0x8022989C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802298B0;
    // 0x8022989C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802298A0:
    // 0x802298A0: jal         0x80040F30
    // 0x802298A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x802298A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802298A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802298AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802298B0:
    // 0x802298B0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802298B4: bne         $v0, $zero, L_802298C4
    if (ctx->r2 != 0) {
        // 0x802298B8: nop
    
            goto L_802298C4;
    }
    // 0x802298B8: nop

    // 0x802298BC: jal         0x8005044C
    // 0x802298C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x802298C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_802298C4:
    // 0x802298C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802298C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802298CC: jr          $ra
    // 0x802298D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802298D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802298D4: nop

    // 0x802298D8: nop

    // 0x802298DC: nop

;}
RECOMP_FUNC void func_802288E8_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802288EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802288F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802288F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802288F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802288FC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80228900: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80228904: jal         0x8004FA7C
    // 0x80228908: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80228908: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022890C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80228910: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80228914: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80228918: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022891C: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x80228920: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80228924: beq         $v1, $zero, L_80228958
    if (ctx->r3 == 0) {
        // 0x80228928: nop
    
            goto L_80228958;
    }
    // 0x80228928: nop

    // 0x8022892C: jal         0x80228A78
    // 0x80228930: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228A78_ovl19(rdram, ctx);
        goto after_1;
    // 0x80228930: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x80228934: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80228938: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022893C: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80228940: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228944: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80228948: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022894C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80228950: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80228954: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80228958:
    // 0x80228958: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022895C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80228960: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228964: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228968: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022896C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228970: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228974: jr          $ra
    // 0x80228978: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228978: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BF10_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BF10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BF14: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022BF18: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8022BF1C: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022BF20: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x8022BF24: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x8022BF28: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022BF2C: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x8022BF30: sh          $v1, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r3;
    // 0x8022BF34: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8022BF38: jr          $ra
    // 0x8022BF3C: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022BF3C: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80229D84_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229D88: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229D8C: jal         0x8004F418
    // 0x80229D90: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80229D90: nop

    after_0:
    // 0x80229D94: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229D98: jr          $ra
    // 0x80229D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228524_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228524: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228528: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022852C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228530: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80228534: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80228538: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022853C: jal         0x8003516C
    // 0x80228540: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x80228540: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80228544: bne         $v0, $zero, L_80228568
    if (ctx->r2 != 0) {
        // 0x80228548: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80228568;
    }
    // 0x80228548: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022854C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80228550: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80228554: jal         0x800610AC
    // 0x80228558: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x80228558: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022855C: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228560: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228564: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_80228568:
    // 0x80228568: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022856C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80228570: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228574: jal         0x8004F820
    // 0x80228578: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80228578: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8022857C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228580: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80228584: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x80228588: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022858C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228590: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80228594: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228598: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022859C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802285A0: jr          $ra
    // 0x802285A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802285A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802259F8_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802259FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225A00: jal         0x8004F418
    // 0x80225A04: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80225A04: nop

    after_0:
    // 0x80225A08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225A0C: jr          $ra
    // 0x80225A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229AC4_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229AC4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80229AC8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80229ACC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229AD0: addiu       $a0, $s0, 0x300
    ctx->r4 = ADD32(ctx->r16, 0X300);
    // 0x80229AD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80229AD8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80229ADC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80229AE0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80229AE4: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80229AE8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80229AEC: jal         0x800540D0
    // 0x80229AF0: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x80229AF0: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    after_0:
    // 0x80229AF4: bne         $v0, $zero, L_80229B08
    if (ctx->r2 != 0) {
        // 0x80229AF8: nop
    
            goto L_80229B08;
    }
    // 0x80229AF8: nop

    // 0x80229AFC: lbu         $v0, 0x332($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X332);
    // 0x80229B00: j           L_80229B10
    // 0x80229B04: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
        goto L_80229B10;
    // 0x80229B04: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
L_80229B08:
    // 0x80229B08: lbu         $v0, 0x332($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X332);
    // 0x80229B0C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_80229B10:
    // 0x80229B10: sb          $v0, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r2;
    // 0x80229B14: lhu         $v0, 0x40($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X40);
    // 0x80229B18: beq         $v0, $zero, L_80229B24
    if (ctx->r2 == 0) {
        // 0x80229B1C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80229B24;
    }
    // 0x80229B1C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229B20: sh          $v0, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r2;
L_80229B24:
    // 0x80229B24: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x80229B28: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80229B2C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80229B30: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x80229B34: beq         $a0, $zero, L_80229C78
    if (ctx->r4 == 0) {
        // 0x80229B38: nop
    
            goto L_80229C78;
    }
    // 0x80229B38: nop

    // 0x80229B3C: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80229B40: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x80229B44: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80229B48: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80229B4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229B50: bgtz        $v0, L_80229B70
    if (SIGNED(ctx->r2) > 0) {
        // 0x80229B54: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_80229B70;
    }
    // 0x80229B54: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80229B58: lbu         $v0, 0x4A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4A);
    // 0x80229B5C: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x80229B60: sb          $v0, 0x4A($s1)
    MEM_B(0X4A, ctx->r17) = ctx->r2;
    // 0x80229B64: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80229B68: j           L_80229C78
    // 0x80229B6C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80229C78;
    // 0x80229B6C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229B70:
    // 0x80229B70: lb          $v0, 0x76($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X76);
    // 0x80229B74: beq         $v0, $zero, L_80229B88
    if (ctx->r2 == 0) {
        // 0x80229B78: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80229B88;
    }
    // 0x80229B78: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80229B7C: lw          $v0, 0xC0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC0);
    // 0x80229B80: xor         $v0, $v0, $s0
    ctx->r2 = ctx->r2 ^ ctx->r16;
    // 0x80229B84: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_80229B88:
    // 0x80229B88: bnel        $v0, $zero, L_80229C68
    if (ctx->r2 != 0) {
        // 0x80229B8C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80229C68;
    }
    goto skip_0;
    // 0x80229B8C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    skip_0:
    // 0x80229B90: lhu         $v0, 0x40($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X40);
    // 0x80229B94: lbu         $a1, 0x4A($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X4A);
    // 0x80229B98: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x80229B9C: andi        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 & 0X4;
    // 0x80229BA0: bne         $v0, $zero, L_80229C64
    if (ctx->r2 != 0) {
        // 0x80229BA4: sh          $a0, 0x40($s1)
        MEM_H(0X40, ctx->r17) = ctx->r4;
            goto L_80229C64;
    }
    // 0x80229BA4: sh          $a0, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r4;
    // 0x80229BA8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229BAC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80229BB0: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80229BB4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229BB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229BBC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80229BC0: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x80229BC4: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x80229BC8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80229BCC: bne         $v0, $zero, L_80229C68
    if (ctx->r2 != 0) {
        // 0x80229BD0: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80229C68;
    }
    // 0x80229BD0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80229BD4: ori         $v0, $a1, 0x4
    ctx->r2 = ctx->r5 | 0X4;
    // 0x80229BD8: sb          $v0, 0x4A($s1)
    MEM_B(0X4A, ctx->r17) = ctx->r2;
    // 0x80229BDC: sh          $zero, 0x40($s1)
    MEM_H(0X40, ctx->r17) = 0;
    // 0x80229BE0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229BE4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229BE8: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    // 0x80229BEC: sb          $v0, 0x4C($s1)
    MEM_B(0X4C, ctx->r17) = ctx->r2;
    // 0x80229BF0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229BF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80229BF8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229BFC: jal         0x8004FEA0
    // 0x80229C00: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_1;
    // 0x80229C00: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_1:
    // 0x80229C04: srl         $v1, $v0, 16
    ctx->r3 = S32(U32(ctx->r2) >> 16);
    // 0x80229C08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229C0C: beq         $v1, $v0, L_80229C48
    if (ctx->r3 == ctx->r2) {
        // 0x80229C10: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229C48;
    }
    // 0x80229C10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229C14: sltiu       $v0, $v1, 0x2
    ctx->r2 = ctx->r3 < 0X2 ? 1 : 0;
    // 0x80229C18: bne         $v0, $zero, L_80229C34
    if (ctx->r2 != 0) {
        // 0x80229C1C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80229C34;
    }
    // 0x80229C1C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229C20: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229C24: beq         $v1, $v0, L_80229C54
    if (ctx->r3 == ctx->r2) {
        // 0x80229C28: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229C54;
    }
    // 0x80229C28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229C2C: j           L_80229C68
    // 0x80229C30: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
        goto L_80229C68;
    // 0x80229C30: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_80229C34:
    // 0x80229C34: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80229C38: sb          $v0, 0x4B($s1)
    MEM_B(0X4B, ctx->r17) = ctx->r2;
    // 0x80229C3C: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x80229C40: j           L_80229C5C
    // 0x80229C44: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_80229C5C;
    // 0x80229C44: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80229C48:
    // 0x80229C48: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229C4C: j           L_80229C58
    // 0x80229C50: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80229C58;
    // 0x80229C50: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80229C54:
    // 0x80229C54: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229C58:
    // 0x80229C58: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80229C5C:
    // 0x80229C5C: j           L_80229C68
    // 0x80229C60: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
        goto L_80229C68;
    // 0x80229C60: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_80229C64:
    // 0x80229C64: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_80229C68:
    // 0x80229C68: jal         0x8002A33C
    // 0x80229C6C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80229C6C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80229C70: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80229C74: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80229C78:
    // 0x80229C78: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80229C7C: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x80229C80: bne         $v0, $zero, L_80229CA4
    if (ctx->r2 != 0) {
        // 0x80229C84: nop
    
            goto L_80229CA4;
    }
    // 0x80229C84: nop

    // 0x80229C88: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229C8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229C90: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229C94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229C98: lw          $v0, -0x1978($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1978);
    // 0x80229C9C: jalr        $v0
    // 0x80229CA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80229CA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80229CA4:
    // 0x80229CA4: jal         0x800504EC
    // 0x80229CA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_4;
    // 0x80229CA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80229CAC: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x80229CB0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80229CB4: sh          $v0, -0x3D86($at)
    MEM_H(-0X3D86, ctx->r1) = ctx->r2;
    // 0x80229CB8: jal         0x80051248
    // 0x80229CBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_5;
    // 0x80229CBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80229CC0: lbu         $v0, 0x4A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4A);
    // 0x80229CC4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80229CC8: beq         $v0, $zero, L_80229CE4
    if (ctx->r2 == 0) {
        // 0x80229CCC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229CE4;
    }
    // 0x80229CCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229CD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229CD4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80229CD8: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x80229CDC: jal         0x80047284
    // 0x80229CE0: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_6;
    // 0x80229CE0: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_6:
L_80229CE4:
    // 0x80229CE4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229CE8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80229CEC: beq         $v0, $zero, L_80229D04
    if (ctx->r2 == 0) {
        // 0x80229CF0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229D04;
    }
    // 0x80229CF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229CF4: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x80229CF8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80229CFC: jal         0x8003B564
    // 0x80229D00: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x80229D00: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_80229D04:
    // 0x80229D04: lbu         $v0, 0x4A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4A);
    // 0x80229D08: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80229D0C: beq         $v0, $zero, L_80229D6C
    if (ctx->r2 == 0) {
        // 0x80229D10: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80229D6C;
    }
    // 0x80229D10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229D14: lhu         $v0, 0x180($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X180);
    // 0x80229D18: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80229D1C: lhu         $v0, 0x182($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X182);
    // 0x80229D20: addiu       $v0, $v0, -0x8C
    ctx->r2 = ADD32(ctx->r2, -0X8C);
    // 0x80229D24: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80229D28: lhu         $v0, 0x184($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X184);
    // 0x80229D2C: addiu       $a1, $zero, 0x118
    ctx->r5 = ADD32(0, 0X118);
    // 0x80229D30: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x80229D34: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80229D38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229D3C: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x80229D40: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80229D44: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80229D48: lhu         $v1, 0x42($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X42);
    // 0x80229D4C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80229D50: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80229D54: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80229D58: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80229D5C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80229D60: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80229D64: jal         0x80051E18
    // 0x80229D68: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_8;
    // 0x80229D68: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_8:
L_80229D6C:
    // 0x80229D6C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80229D70: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80229D74: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80229D78: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80229D7C: jr          $ra
    // 0x80229D80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80229D80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022CDE8_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CDE8: jr          $ra
    // 0x8022CDEC: nop

    TRACE_RETURN()
    return;
    // 0x8022CDEC: nop

;}
RECOMP_FUNC void func_80227D94_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227D98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227D9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227DA0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227DA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227DA8: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80227DAC: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227DB0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80227DB4: jal         0x8004FA7C
    // 0x80227DB8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227DB8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x80227DBC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80227DC0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80227DC4: beq         $v0, $zero, L_80227E58
    if (ctx->r2 == 0) {
        // 0x80227DC8: nop
    
            goto L_80227E58;
    }
    // 0x80227DC8: nop

    // 0x80227DCC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227DD0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80227DD4: bne         $v0, $zero, L_80227E58
    if (ctx->r2 != 0) {
        // 0x80227DD8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227E58;
    }
    // 0x80227DD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227DDC: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80227DE0: beq         $v1, $v0, L_80227DF8
    if (ctx->r3 == ctx->r2) {
        // 0x80227DE4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227DF8;
    }
    // 0x80227DE4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227DE8: beq         $v1, $v0, L_80227E28
    if (ctx->r3 == ctx->r2) {
        // 0x80227DEC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227E28;
    }
    // 0x80227DEC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227DF0: j           L_80227E4C
    // 0x80227DF4: nop

        goto L_80227E4C;
    // 0x80227DF4: nop

L_80227DF8:
    // 0x80227DF8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227DFC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80227E00: bne         $v0, $zero, L_80227E4C
    if (ctx->r2 != 0) {
        // 0x80227E04: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227E4C;
    }
    // 0x80227E04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227E08: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80227E0C: bne         $v0, $zero, L_80227E4C
    if (ctx->r2 != 0) {
        // 0x80227E10: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227E4C;
    }
    // 0x80227E10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E14: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80227E18: bne         $v1, $v0, L_80227E4C
    if (ctx->r3 != ctx->r2) {
        // 0x80227E1C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227E4C;
    }
    // 0x80227E1C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227E20: j           L_80227E4C
    // 0x80227E24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227E4C;
    // 0x80227E24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227E28:
    // 0x80227E28: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227E2C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80227E30: beq         $v0, $zero, L_80227E48
    if (ctx->r2 == 0) {
        // 0x80227E34: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_80227E48;
    }
    // 0x80227E34: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80227E38: bne         $v0, $zero, L_80227E4C
    if (ctx->r2 != 0) {
        // 0x80227E3C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227E4C;
    }
    // 0x80227E3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227E40: j           L_80227E4C
    // 0x80227E44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227E4C;
    // 0x80227E44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227E48:
    // 0x80227E48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80227E4C:
    // 0x80227E4C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227E50: beq         $v0, $zero, L_80227E7C
    if (ctx->r2 == 0) {
        // 0x80227E54: nop
    
            goto L_80227E7C;
    }
    // 0x80227E54: nop

L_80227E58:
    // 0x80227E58: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80227E5C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227E60: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227E64: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227E68: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80227E6C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227E70: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80227E74: j           L_80227E8C
    // 0x80227E78: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227E8C;
    // 0x80227E78: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227E7C:
    // 0x80227E7C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227E80: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227E84: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227E88: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80227E8C:
    // 0x80227E8C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227E90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227E94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227E98: jr          $ra
    // 0x80227E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227B24_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227B28: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227B2C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80227B30: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227B34: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227B38: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227B3C: lw          $v0, -0x1A10($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1A10);
    // 0x80227B40: jalr        $v0
    // 0x80227B44: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227B44: nop

    after_0:
    // 0x80227B48: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227B4C: jr          $ra
    // 0x80227B50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227B50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A73C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A73C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022A740: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022A744: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A748: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022A74C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022A750: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022A754: beq         $v0, $zero, L_8022A7DC
    if (ctx->r2 == 0) {
        // 0x8022A758: addiu       $s1, $s0, 0x2E8
        ctx->r17 = ADD32(ctx->r16, 0X2E8);
            goto L_8022A7DC;
    }
    // 0x8022A758: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    // 0x8022A75C: lb          $v0, 0x330($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X330);
    // 0x8022A760: bne         $v0, $zero, L_8022A77C
    if (ctx->r2 != 0) {
        // 0x8022A764: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A77C;
    }
    // 0x8022A764: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A768: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022A76C: jal         0x8002A33C
    // 0x8022A770: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022A770: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022A774: j           L_8022A780
    // 0x8022A778: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
        goto L_8022A780;
    // 0x8022A778: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
L_8022A77C:
    // 0x8022A77C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8022A780:
    // 0x8022A780: sb          $v0, 0x330($s0)
    MEM_B(0X330, ctx->r16) = ctx->r2;
    // 0x8022A784: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A788: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022A78C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A790: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022A794: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022A798: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022A79C: jal         0x8004DBA0
    // 0x8022A7A0: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_1;
    // 0x8022A7A0: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    after_1:
    // 0x8022A7A4: jal         0x80040F30
    // 0x8022A7A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022A7A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A7AC: andi        $v0, $v0, 0x3000
    ctx->r2 = ctx->r2 & 0X3000;
    // 0x8022A7B0: bne         $v0, $zero, L_8022A7CC
    if (ctx->r2 != 0) {
        // 0x8022A7B4: nop
    
            goto L_8022A7CC;
    }
    // 0x8022A7B4: nop

    // 0x8022A7B8: jal         0x8003E934
    // 0x8022A7BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022A7BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A7C0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A7C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A7C8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022A7CC:
    // 0x8022A7CC: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x8022A7D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A7D4: j           L_8022A7EC
    // 0x8022A7D8: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
        goto L_8022A7EC;
    // 0x8022A7D8: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
L_8022A7DC:
    // 0x8022A7DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A7E0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A7E4: sb          $zero, 0x336($s0)
    MEM_B(0X336, ctx->r16) = 0;
    // 0x8022A7E8: sb          $zero, 0x33B($s0)
    MEM_B(0X33B, ctx->r16) = 0;
L_8022A7EC:
    // 0x8022A7EC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022A7F0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022A7F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022A7F8: jr          $ra
    // 0x8022A7FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022A7FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022CAF0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CAF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CAF4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8022CAF8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CAFC: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
    // 0x8022CB00: bne         $v0, $zero, L_8022CB18
    if (ctx->r2 != 0) {
        // 0x8022CB04: lui         $a2, 0xFFF5
        ctx->r6 = S32(0XFFF5 << 16);
            goto L_8022CB18;
    }
    // 0x8022CB04: lui         $a2, 0xFFF5
    ctx->r6 = S32(0XFFF5 << 16);
    // 0x8022CB08: jal         0x8004F5C4
    // 0x8022CB0C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022CB0C: nop

    after_0:
    // 0x8022CB10: j           L_8022CB4C
    // 0x8022CB14: nop

        goto L_8022CB4C;
    // 0x8022CB14: nop

L_8022CB18:
    // 0x8022CB18: lbu         $a0, 0xC($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XC);
    // 0x8022CB1C: ori         $a2, $a2, 0xF5F6
    ctx->r6 = ctx->r6 | 0XF5F6;
    // 0x8022CB20: lbu         $a1, 0x9($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X9);
    // 0x8022CB24: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x8022CB28: lhu         $v1, 0x24($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X24);
    // 0x8022CB2C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8022CB30: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022CB34: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8022CB38: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022CB3C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022CB40: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x8022CB44: sh          $v1, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r3;
    // 0x8022CB48: sb          $a1, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r5;
L_8022CB4C:
    // 0x8022CB4C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CB50: jr          $ra
    // 0x8022CB54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CB54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022CB58: nop

    // 0x8022CB5C: nop

;}
RECOMP_FUNC void func_8022CE00_ovl19(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x8022CE14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CE18: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CE1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CE20: lw          $v0, -0x1890($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1890);
    // 0x8022CE24: jalr        $v0
    // 0x8022CE28: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022CE28: nop

    after_0:
    // 0x8022CE2C: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8022CE30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CE34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CE38: jr          $ra
    // 0x8022CE3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CE3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802283D0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802283D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802283D4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802283D8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802283DC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802283E0: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x802283E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802283E8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802283EC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802283F0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802283F4: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x802283F8: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x802283FC: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x80228400: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80228404: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80228408: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022840C: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x80228410: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x80228414: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80228418: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022841C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228420: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228424: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80228428: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022842C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80228430: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80228434: jal         0x8009A3B4
    // 0x80228438: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80228438: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022843C: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80228440: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80228444: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x80228448: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022844C: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x80228450: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80228454: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80228458: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022845C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80228460: jal         0x8004EC38
    // 0x80228464: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80228464: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80228468: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022846C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80228470: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80228474: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80228478: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022847C: jal         0x80034FCC
    // 0x80228480: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x80228480: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x80228484: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x80228488: jal         0x80228A78
    // 0x8022848C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_80228A78_ovl19(rdram, ctx);
        goto after_3;
    // 0x8022848C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x80228490: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80228494: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80228498: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022849C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802284A0: jal         0x8004F820
    // 0x802284A4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x802284A4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x802284A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802284AC: bgez        $v0, L_802284D8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802284B0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_802284D8;
    }
    // 0x802284B0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802284B4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x802284B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802284BC: jal         0x8004F820
    // 0x802284C0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x802284C0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x802284C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802284C8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802284CC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802284D0: j           L_802284F0
    // 0x802284D4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_802284F0;
    // 0x802284D4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_802284D8:
    // 0x802284D8: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x802284DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802284E0: jal         0x8004F820
    // 0x802284E4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x802284E4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x802284E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802284EC: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_802284F0:
    // 0x802284F0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802284F4: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x802284F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802284FC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80228500: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228504: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x80228508: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022850C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80228510: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80228514: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80228518: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022851C: jr          $ra
    // 0x80228520: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80228520: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80228300_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228300: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80228304: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228308: bne         $v0, $zero, L_80228340
    if (ctx->r2 != 0) {
        // 0x8022830C: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_80228340;
    }
    // 0x8022830C: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x80228310: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x80228314: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x80228318: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022831C: beq         $v1, $zero, L_8022832C
    if (ctx->r3 == 0) {
        // 0x80228320: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_8022832C;
    }
    // 0x80228320: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x80228324: j           L_80228330
    // 0x80228328: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80228330;
    // 0x80228328: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022832C:
    // 0x8022832C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80228330:
    // 0x80228330: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80228334: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x80228338: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022833C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_80228340:
    // 0x80228340: jr          $ra
    // 0x80228344: nop

    TRACE_RETURN()
    return;
    // 0x80228344: nop

;}
RECOMP_FUNC void func_802279E4_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802279E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802279EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802279F0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802279F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802279F8: jal         0x80228B14
    // 0x802279FC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80228B14_ovl19(rdram, ctx);
        goto after_0;
    // 0x802279FC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80227A00: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227A04: beq         $v0, $zero, L_80227A30
    if (ctx->r2 == 0) {
        // 0x80227A08: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80227A30;
    }
    // 0x80227A08: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80227A0C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227A10: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227A14: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227A18: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80227A1C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80227A20: jal         0x80228A78
    // 0x80227A24: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_80228A78_ovl19(rdram, ctx);
        goto after_1;
    // 0x80227A24: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x80227A28: j           L_80227A70
    // 0x80227A2C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80227A70;
    // 0x80227A2C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227A30:
    // 0x80227A30: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80227A34: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227A38: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227A3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227A40: bne         $v0, $zero, L_80227A50
    if (ctx->r2 != 0) {
        // 0x80227A44: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227A50;
    }
    // 0x80227A44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227A4C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227A50:
    // 0x80227A50: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227A54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227A58: jal         0x8004DA90
    // 0x80227A5C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80227A5C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80227A60: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227A64: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80227A68: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227A6C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80227A70:
    // 0x80227A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227A74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227A78: jr          $ra
    // 0x80227A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C5C4_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C5C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C5CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C5D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C5D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C5D8: jal         0x8004F144
    // 0x8022C5DC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022C5DC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022C5E0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022C5E4: beq         $a0, $zero, L_8022C690
    if (ctx->r4 == 0) {
        // 0x8022C5E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C690;
    }
    // 0x8022C5E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C5EC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022C5F0: addiu       $v0, $zero, 0x85
    ctx->r2 = ADD32(0, 0X85);
    // 0x8022C5F4: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022C5F8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022C5FC: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x8022C600: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022C604: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x8022C608: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022C60C: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x8022C610: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022C614: sh          $v0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r2;
    // 0x8022C618: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022C61C: sh          $v0, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r2;
    // 0x8022C620: lhu         $v0, 0x48($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X48);
    // 0x8022C624: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
    // 0x8022C628: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C62C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022C630: bne         $v1, $v0, L_8022C648
    if (ctx->r3 != ctx->r2) {
        // 0x8022C634: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_8022C648;
    }
    // 0x8022C634: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022C638: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x8022C63C: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x8022C640: j           L_8022C684
    // 0x8022C644: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
        goto L_8022C684;
    // 0x8022C644: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
L_8022C648:
    // 0x8022C648: bnel        $v1, $v0, L_8022C664
    if (ctx->r3 != ctx->r2) {
        // 0x8022C64C: addiu       $v0, $zero, 0x42
        ctx->r2 = ADD32(0, 0X42);
            goto L_8022C664;
    }
    goto skip_0;
    // 0x8022C64C: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    skip_0:
    // 0x8022C650: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x8022C654: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x8022C658: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x8022C65C: j           L_8022C688
    // 0x8022C660: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
        goto L_8022C688;
    // 0x8022C660: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
L_8022C664:
    // 0x8022C664: bne         $v1, $v0, L_8022C67C
    if (ctx->r3 != ctx->r2) {
        // 0x8022C668: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_8022C67C;
    }
    // 0x8022C668: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8022C66C: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x8022C670: addiu       $v0, $s1, 0x10
    ctx->r2 = ADD32(ctx->r17, 0X10);
    // 0x8022C674: j           L_8022C690
    // 0x8022C678: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
        goto L_8022C690;
    // 0x8022C678: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_8022C67C:
    // 0x8022C67C: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x8022C680: sb          $s1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r17;
L_8022C684:
    // 0x8022C684: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_8022C688:
    // 0x8022C688: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C68C: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
L_8022C690:
    // 0x8022C690: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C694: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C698: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C69C: jr          $ra
    // 0x8022C6A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C6A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022C6A4: nop

    // 0x8022C6A8: nop

    // 0x8022C6AC: nop

;}
RECOMP_FUNC void func_8022864C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022864C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228650: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80228654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228658: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022865C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228660: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228664: bne         $v1, $v0, L_8022868C
    if (ctx->r3 != ctx->r2) {
        // 0x80228668: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022868C;
    }
    // 0x80228668: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022866C: jal         0x80061724
    // 0x80228670: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x80228670: nop

    after_0:
    // 0x80228674: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228678: jal         0x800616FC
    // 0x8022867C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022867C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_1:
    // 0x80228680: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228684: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228688: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022868C:
    // 0x8022868C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228690: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228694: jr          $ra
    // 0x80228698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227EA0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227EA4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227EA8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80227EAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227EB0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227EB4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227EB8: lw          $v0, -0x1A00($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1A00);
    // 0x80227EBC: jalr        $v0
    // 0x80227EC0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227EC0: nop

    after_0:
    // 0x80227EC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227EC8: jr          $ra
    // 0x80227ECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227ECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C38_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225C3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225C40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225C44: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225C48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225C4C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225C50: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80225C54: beq         $v0, $zero, L_80225E00
    if (ctx->r2 == 0) {
        // 0x80225C58: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80225E00;
    }
    // 0x80225C58: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80225C5C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225C60: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225C64: addu        $at, $at, $v0
    gpr jr_addend_80225C6C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225C68: lw          $v0, -0x1780($at)
    ctx->r2 = ADD32(ctx->r1, -0X1780);
    // 0x80225C6C: jr          $v0
    // 0x80225C70: nop

    switch (jr_addend_80225C6C >> 2) {
        case 0: goto L_80225C74; break;
        case 1: goto L_80225CB8; break;
        case 2: goto L_80225D18; break;
        case 3: goto L_80225DA4; break;
        case 4: goto L_80225DD4; break;
        default: switch_error(__func__, 0x80225C6C, 0x8022E880);
    }
    // 0x80225C70: nop

L_80225C74:
    // 0x80225C74: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225C78: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x80225C7C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80225C80: addiu       $v0, $zero, -0xB
    ctx->r2 = ADD32(0, -0XB);
    // 0x80225C84: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80225C88: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x80225C8C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80225C90: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80225C94: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x80225C98: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225C9C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80225CA0: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80225CA4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225CA8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80225CAC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80225CB0: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x80225CB4: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_80225CB8:
    // 0x80225CB8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80225CBC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225CC0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80225CC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225CC8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225CCC: bltz        $v0, L_80225CFC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80225CD0: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_80225CFC;
    }
    // 0x80225CD0: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80225CD4: beq         $v0, $zero, L_80225E00
    if (ctx->r2 == 0) {
        // 0x80225CD8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225E00;
    }
    // 0x80225CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225CDC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80225CE0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80225CE4: jal         0x8004DA90
    // 0x80225CE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80225CE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80225CEC: jal         0x80040F30
    // 0x80225CF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80225CF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80225CF4: j           L_80225E00
    // 0x80225CF8: nop

        goto L_80225E00;
    // 0x80225CF8: nop

L_80225CFC:
    // 0x80225CFC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80225D00: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80225D04: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225D08: addiu       $v1, $zero, 0x26
    ctx->r3 = ADD32(0, 0X26);
    // 0x80225D0C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80225D10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D14: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225D18:
    // 0x80225D18: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x80225D1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225D20: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80225D24: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80225D28: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80225D2C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80225D30: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x80225D34: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80225D38: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x80225D3C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80225D40: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80225D44: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80225D48: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80225D4C: jal         0x8004DA90
    // 0x80225D50: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80225D50: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x80225D54: jal         0x80040F30
    // 0x80225D58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80225D58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80225D5C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225D60: beq         $v1, $zero, L_80225E00
    if (ctx->r3 == 0) {
        // 0x80225D64: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_80225E00;
    }
    // 0x80225D64: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x80225D68: bnel        $v0, $zero, L_80225D70
    if (ctx->r2 != 0) {
        // 0x80225D6C: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80225D70;
    }
    goto skip_0;
    // 0x80225D6C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_80225D70:
    // 0x80225D70: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x80225D74: beq         $v0, $zero, L_80225E00
    if (ctx->r2 == 0) {
        // 0x80225D78: nop
    
            goto L_80225E00;
    }
    // 0x80225D78: nop

    // 0x80225D7C: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80225D80: bgtz        $v0, L_80225E00
    if (SIGNED(ctx->r2) > 0) {
        // 0x80225D84: addiu       $v0, $zero, 0x26
        ctx->r2 = ADD32(0, 0X26);
            goto L_80225E00;
    }
    // 0x80225D84: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80225D88: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80225D8C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225D90: addiu       $v1, $zero, 0x27
    ctx->r3 = ADD32(0, 0X27);
    // 0x80225D94: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80225D98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D9C: j           L_80225E00
    // 0x80225DA0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80225E00;
    // 0x80225DA0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225DA4:
    // 0x80225DA4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80225DA8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225DAC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80225DB0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225DB4: bgez        $v0, L_80225E00
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80225DB8: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80225E00;
    }
    // 0x80225DB8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80225DBC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80225DC0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225DC4: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
    // 0x80225DC8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80225DCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225DD0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225DD4:
    // 0x80225DD4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80225DD8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225DDC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80225DE0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225DE4: bgez        $v0, L_80225E00
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80225DE8: nop
    
            goto L_80225E00;
    }
    // 0x80225DE8: nop

    // 0x80225DEC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80225DF0: ori         $v0, $v0, 0x109
    ctx->r2 = ctx->r2 | 0X109;
    // 0x80225DF4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80225DF8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80225DFC: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
L_80225E00:
    // 0x80225E00: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225E04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225E08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225E0C: jr          $ra
    // 0x80225E10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225E10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802251B4_ovl19(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x802251C4: bne         $v0, $zero, L_802251E0
    if (ctx->r2 != 0) {
        // 0x802251C8: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251E0;
    }
    // 0x802251C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251CC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251D0: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251D4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802251D8: j           L_802251E8
    // 0x802251DC: addiu       $a1, $a1, -0x24E8
    ctx->r5 = ADD32(ctx->r5, -0X24E8);
        goto L_802251E8;
    // 0x802251DC: addiu       $a1, $a1, -0x24E8
    ctx->r5 = ADD32(ctx->r5, -0X24E8);
L_802251E0:
    // 0x802251E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251E8:
    // 0x802251E8: jal         0x80037D80
    // 0x802251EC: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251EC: nop

    after_0:
    // 0x802251F0: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802251F4: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x802251F8: lb          $t1, 0x0($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X0);
    // 0x802251FC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80225200: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x80225204: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80225208: addiu       $a3, $a3, 0xCB4
    ctx->r7 = ADD32(ctx->r7, 0XCB4);
    // 0x8022520C: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x80225210: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225214: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x80225218: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022521C: sh          $a2, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r6;
    // 0x80225220: lbu         $t0, 0x3($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X3);
    // 0x80225224: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225228: sh          $t0, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r8;
    // 0x8022522C: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x80225230: lui         $t3, 0x7FE9
    ctx->r11 = S32(0X7FE9 << 16);
    // 0x80225234: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225238: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022523C: sb          $t2, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r10;
    // 0x80225240: lbu         $t4, 0x1($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1);
    // 0x80225244: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225248: ori         $t3, $t3, 0xC000
    ctx->r11 = ctx->r11 | 0XC000;
    // 0x8022524C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80225250: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225254: sb          $v1, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r3;
    // 0x80225258: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022525C: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x80225260: lw          $a0, -0x25F8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X25F8);
    // 0x80225264: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
    // 0x80225268: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x8022526C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225270: sb          $a2, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r6;
    // 0x80225274: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x80225278: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8022527C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225280: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225284: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225288: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x8022528C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225290: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225294: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x80225298: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022529C: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x802252A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252A4: sb          $t4, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r12;
    // 0x802252A8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252AC: sb          $t0, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r8;
    // 0x802252B0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252B4: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x802252B8: lw          $v0, -0x2594($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2594);
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
    // 0x802252CC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252D0: addiu       $a0, $a0, -0x2584
    ctx->r4 = ADD32(ctx->r4, -0X2584);
    // 0x802252D4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252DC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252E0: lw          $v1, -0x24EC($at)
    ctx->r3 = MEM_W(ctx->r1, -0X24EC);
    // 0x802252E4: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252E8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252EC: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252F0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252F4: addiu       $v0, $v0, -0x2590
    ctx->r2 = ADD32(ctx->r2, -0X2590);
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

    func_80225330_ovl19(rdram, ctx);
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
RECOMP_FUNC void func_80229468_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229468: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022946C: beq         $a1, $zero, L_80229480
    if (ctx->r5 == 0) {
        // 0x80229470: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80229480;
    }
    // 0x80229470: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229474: sb          $zero, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = 0;
    // 0x80229478: j           L_80229488
    // 0x8022947C: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
        goto L_80229488;
    // 0x8022947C: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
L_80229480:
    // 0x80229480: sb          $v0, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = ctx->r2;
    // 0x80229484: sb          $v0, 0x103($a0)
    MEM_B(0X103, ctx->r4) = ctx->r2;
L_80229488:
    // 0x80229488: jr          $ra
    // 0x8022948C: nop

    TRACE_RETURN()
    return;
    // 0x8022948C: nop

;}
RECOMP_FUNC void func_8022556C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022556C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225570: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225574: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225578: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022557C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225580: bne         $v0, $zero, L_802255A0
    if (ctx->r2 != 0) {
        // 0x80225584: nop
    
            goto L_802255A0;
    }
    // 0x80225584: nop

    // 0x80225588: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022558C: jal         0x800607C4
    // 0x80225590: addiu       $a0, $a0, -0x221C
    ctx->r4 = ADD32(ctx->r4, -0X221C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225590: addiu       $a0, $a0, -0x221C
    ctx->r4 = ADD32(ctx->r4, -0X221C);
    after_0:
    // 0x80225594: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225598: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022559C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802255A0:
    // 0x802255A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802255A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802255A8: jr          $ra
    // 0x802255AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022930C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022930C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229314: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229318: lhu         $v1, 0x362($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X362);
    // 0x8022931C: bne         $a1, $zero, L_8022934C
    if (ctx->r5 != 0) {
        // 0x80229320: addiu       $s0, $a0, 0x348
        ctx->r16 = ADD32(ctx->r4, 0X348);
            goto L_8022934C;
    }
    // 0x80229320: addiu       $s0, $a0, 0x348
    ctx->r16 = ADD32(ctx->r4, 0X348);
    // 0x80229324: jal         0x800A3450
    // 0x80229328: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80229328: nop

    after_0:
    // 0x8022932C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80229330: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x80229334: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229338: mflo        $v0
    ctx->r2 = lo;
    // 0x8022933C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229340: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80229344: j           L_80229370
    // 0x80229348: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_80229370;
    // 0x80229348: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_8022934C:
    // 0x8022934C: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x80229350: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x80229354: bnel        $v0, $zero, L_8022935C
    if (ctx->r2 != 0) {
        // 0x80229358: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022935C;
    }
    goto skip_0;
    // 0x80229358: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_8022935C:
    // 0x8022935C: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
    // 0x80229360: beq         $v0, $zero, L_80229370
    if (ctx->r2 == 0) {
        // 0x80229364: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_80229370;
    }
    // 0x80229364: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80229368: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022936C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_80229370:
    // 0x80229370: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80229374: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x80229378: sh          $zero, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = 0;
    // 0x8022937C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229380: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229384: jr          $ra
    // 0x80229388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227510_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227514: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227518: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022751C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227520: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80227524: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227528: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022752C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227530: bne         $v0, $zero, L_80227584
    if (ctx->r2 != 0) {
        // 0x80227534: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80227584;
    }
    // 0x80227534: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80227538: jal         0x80228B14
    // 0x8022753C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80228B14_ovl19(rdram, ctx);
        goto after_0;
    // 0x8022753C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80227540: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227544: beq         $v0, $zero, L_80227580
    if (ctx->r2 == 0) {
        // 0x80227548: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227580;
    }
    // 0x80227548: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022754C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227550: jal         0x80228A88
    // 0x80227554: nop

    func_80228A88_ovl19(rdram, ctx);
        goto after_1;
    // 0x80227554: nop

    after_1:
    // 0x80227558: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022755C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227560: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80227564: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227568: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022756C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227570: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80227574: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227578: j           L_80227584
    // 0x8022757C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_80227584;
    // 0x8022757C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_80227580:
    // 0x80227580: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227584:
    // 0x80227584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227588: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022758C: jr          $ra
    // 0x80227590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802281B4_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802281B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802281BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802281C0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802281C4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802281C8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802281CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802281D0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802281D4: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x802281D8: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x802281DC: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x802281E0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x802281E4: jal         0x80228B14
    // 0x802281E8: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_80228B14_ovl19(rdram, ctx);
        goto after_0;
    // 0x802281E8: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x802281EC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802281F0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802281F4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802281F8: beq         $v0, $zero, L_8022828C
    if (ctx->r2 == 0) {
        // 0x802281FC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022828C;
    }
    // 0x802281FC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80228200: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228204: jal         0x80228A78
    // 0x80228208: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_80228A78_ovl19(rdram, ctx);
        goto after_1;
    // 0x80228208: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022820C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228210: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228214: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x80228218: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022821C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80228220: jal         0x8004F820
    // 0x80228224: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80228224: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80228228: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022822C: bgez        $v0, L_80228258
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228230: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228258;
    }
    // 0x80228230: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228234: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228238: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022823C: jal         0x8004F820
    // 0x80228240: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80228240: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80228244: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228248: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022824C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228250: j           L_80228270
    // 0x80228254: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_80228270;
    // 0x80228254: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_80228258:
    // 0x80228258: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022825C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228260: jal         0x8004F820
    // 0x80228264: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80228264: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x80228268: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022826C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_80228270:
    // 0x80228270: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80228274: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x80228278: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022827C: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80228280: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80228284: j           L_802282D4
    // 0x80228288: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_802282D4;
    // 0x80228288: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022828C:
    // 0x8022828C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228290: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228294: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80228298: jal         0x8004F820
    // 0x8022829C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022829C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x802282A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802282A4: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802282A8: beq         $v0, $zero, L_802282B8
    if (ctx->r2 == 0) {
        // 0x802282AC: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_802282B8;
    }
    // 0x802282AC: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x802282B0: j           L_802282BC
    // 0x802282B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802282BC;
    // 0x802282B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802282B8:
    // 0x802282B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802282BC:
    // 0x802282BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802282C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802282C4: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x802282C8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802282CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802282D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_802282D4:
    // 0x802282D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802282D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802282DC: jal         0x800610AC
    // 0x802282E0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x802282E0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x802282E4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802282E8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802282EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802282F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802282F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802282F8: jr          $ra
    // 0x802282FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802282FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
