#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80233B20_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233B24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233B28: jal         0x80233C90
    // 0x80233B2C: nop

    func_80233C90_ovl25(rdram, ctx);
        goto after_0;
    // 0x80233B2C: nop

    after_0:
    // 0x80233B30: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233B34: jr          $ra
    // 0x80233B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C598_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C598: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022C59C: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022C5A0: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x8022C5A4: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x8022C5A8: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x8022C5AC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C5B0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022C5B4: lw          $v0, -0x1B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1B68);
    // 0x8022C5B8: jr          $ra
    // 0x8022C5BC: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022C5BC: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022C148_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C148: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022C14C: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022C150: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x8022C154: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x8022C158: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8022C15C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C160: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022C164: lw          $v0, -0x1C04($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1C04);
    // 0x8022C168: jr          $ra
    // 0x8022C16C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022C16C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022A72C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A72C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A730: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A738: jal         0x800A3450
    // 0x8022A73C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A73C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022A740: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022A744: bne         $v1, $zero, L_8022A7A4
    if (ctx->r3 != 0) {
        // 0x8022A748: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_8022A7A4;
    }
    // 0x8022A748: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8022A74C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022A750: andi        $v1, $a3, 0x7
    ctx->r3 = ctx->r7 & 0X7;
    // 0x8022A754: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022A758: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A75C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A760: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8022A764: srl         $v1, $a3, 2
    ctx->r3 = S32(U32(ctx->r7) >> 2);
    // 0x8022A768: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022A76C: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022A770: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022A774: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A778: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022A77C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022A780: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022A784: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022A788: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8022A78C: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x8022A790: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022A794: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022A798: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022A79C: j           L_8022A81C
    // 0x8022A7A0: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022A81C;
    // 0x8022A7A0: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022A7A4:
    // 0x8022A7A4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022A7A8: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022A7AC: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022A7B0: lhu         $a2, 0xA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XA);
    // 0x8022A7B4: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022A7B8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022A7BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A7C0: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x8022A7C4: addiu       $a2, $a2, -0xC
    ctx->r6 = ADD32(ctx->r6, -0XC);
    // 0x8022A7C8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022A7CC: andi        $v0, $a3, 0x7
    ctx->r2 = ctx->r7 & 0X7;
    // 0x8022A7D0: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x8022A7D4: addiu       $a1, $a1, -0xC
    ctx->r5 = ADD32(ctx->r5, -0XC);
    // 0x8022A7D8: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022A7DC: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x8022A7E0: sra         $v0, $v1, 18
    ctx->r2 = S32(SIGNED(ctx->r3) >> 18);
    // 0x8022A7E4: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022A7E8: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x8022A7EC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022A7F0: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022A7F4: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x8022A7F8: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x8022A7FC: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022A800: sh          $a2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r6;
    // 0x8022A804: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022A808: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8022A80C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022A810: bne         $v0, $zero, L_8022A81C
    if (ctx->r2 != 0) {
        // 0x8022A814: sh          $a0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r4;
            goto L_8022A81C;
    }
    // 0x8022A814: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
    // 0x8022A818: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022A81C:
    // 0x8022A81C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A820: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A824: jr          $ra
    // 0x8022A828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A59C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A59C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A5A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A5A4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A5A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A5AC: andi        $s0, $a1, 0xFF
    ctx->r16 = ctx->r5 & 0XFF;
    // 0x8022A5B0: sll         $v1, $s0, 7
    ctx->r3 = S32(ctx->r16 << 7);
    // 0x8022A5B4: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x8022A5B8: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x8022A5BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A5C0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A5C4: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8022A5C8: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8022A5CC: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x8022A5D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A5D4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A5D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A5DC: lw          $v0, -0x1E80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1E80);
    // 0x8022A5E0: addu        $s2, $v1, $a2
    ctx->r18 = ADD32(ctx->r3, ctx->r6);
    // 0x8022A5E4: jalr        $v0
    // 0x8022A5E8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022A5E8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x8022A5EC: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x8022A5F0: srav        $v0, $v0, $s0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r16 & 31));
    // 0x8022A5F4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022A5F8: beq         $v0, $zero, L_8022A620
    if (ctx->r2 == 0) {
        // 0x8022A5FC: nop
    
            goto L_8022A620;
    }
    // 0x8022A5FC: nop

    // 0x8022A600: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x8022A604: lw          $a1, 0x14($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X14);
    // 0x8022A608: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A60C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A610: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A614: lw          $v0, -0x1E68($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1E68);
    // 0x8022A618: jalr        $v0
    // 0x8022A61C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022A61C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
L_8022A620:
    // 0x8022A620: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A624: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A628: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A62C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A630: jr          $ra
    // 0x8022A634: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A634: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233A60_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233A60: jr          $ra
    // 0x80233A64: nop

    TRACE_RETURN()
    return;
    // 0x80233A64: nop

;}
RECOMP_FUNC void func_8022D304_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D304: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022D308: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022D30C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022D310: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022D314: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022D318: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022D31C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8022D320: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D324: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D328: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x8022D32C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D330: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022D334: beq         $a0, $v0, L_8022D350
    if (ctx->r4 == ctx->r2) {
        // 0x8022D338: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022D350;
    }
    // 0x8022D338: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022D33C: bne         $a0, $v0, L_8022D34C
    if (ctx->r4 != ctx->r2) {
        // 0x8022D340: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022D34C;
    }
    // 0x8022D340: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022D344: j           L_8022D350
    // 0x8022D348: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_8022D350;
    // 0x8022D348: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8022D34C:
    // 0x8022D34C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022D350:
    // 0x8022D350: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022D354: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8022D358: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D35C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022D360: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022D364: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022D368: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022D36C: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022D370: beq         $a0, $v1, L_8022D398
    if (ctx->r4 == ctx->r3) {
        // 0x8022D374: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8022D398;
    }
    // 0x8022D374: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022D378: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8022D37C: jal         0x8003B85C
    // 0x8022D380: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022D380: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x8022D384: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022D388: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8022D38C: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022D390: jal         0x8003B840
    // 0x8022D394: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022D394: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022D398:
    // 0x8022D398: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x8022D39C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022D3A0: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8022D3A4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8022D3A8: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022D3AC: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x8022D3B0: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022D3B4: beq         $v1, $v0, L_8022D3D0
    if (ctx->r3 == ctx->r2) {
        // 0x8022D3B8: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022D3D0;
    }
    // 0x8022D3B8: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022D3BC: bne         $v1, $v0, L_8022D3CC
    if (ctx->r3 != ctx->r2) {
        // 0x8022D3C0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022D3CC;
    }
    // 0x8022D3C0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022D3C4: j           L_8022D3D0
    // 0x8022D3C8: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_8022D3D0;
    // 0x8022D3C8: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_8022D3CC:
    // 0x8022D3CC: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_8022D3D0:
    // 0x8022D3D0: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x8022D3D4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022D3D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D3DC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022D3E0: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x8022D3E4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8022D3E8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022D3EC: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022D3F0: beq         $a0, $v1, L_8022D418
    if (ctx->r4 == ctx->r3) {
        // 0x8022D3F4: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8022D418;
    }
    // 0x8022D3F4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022D3F8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8022D3FC: jal         0x8003B85C
    // 0x8022D400: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022D400: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x8022D404: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022D408: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022D40C: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x8022D410: jal         0x8003B840
    // 0x8022D414: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022D414: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_8022D418:
    // 0x8022D418: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022D41C: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x8022D420: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022D424: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022D428: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022D42C: jr          $ra
    // 0x8022D430: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022D430: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022D434: nop

    // 0x8022D438: nop

    // 0x8022D43C: nop

;}
RECOMP_FUNC void func_80228E6C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228E70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228E74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228E78: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228E7C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80228E80: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228E84: lw          $v1, 0x28($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X28);
    // 0x80228E88: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80228E8C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80228E90: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x80228E94: beq         $a0, $zero, L_80228F00
    if (ctx->r4 == 0) {
        // 0x80228E98: lui         $v0, 0x1800
        ctx->r2 = S32(0X1800 << 16);
            goto L_80228F00;
    }
    // 0x80228E98: lui         $v0, 0x1800
    ctx->r2 = S32(0X1800 << 16);
    // 0x80228E9C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80228EA0: beql        $v0, $zero, L_80228EEC
    if (ctx->r2 == 0) {
        // 0x80228EA4: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80228EEC;
    }
    goto skip_0;
    // 0x80228EA4: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x80228EA8: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80228EAC: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x80228EB0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80228EB4: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80228EB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228EBC: bgtz        $v0, L_80228ED4
    if (SIGNED(ctx->r2) > 0) {
        // 0x80228EC0: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_80228ED4;
    }
    // 0x80228EC0: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80228EC4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228EC8: andi        $v0, $v0, 0xFFF5
    ctx->r2 = ctx->r2 & 0XFFF5;
    // 0x80228ECC: ori         $v0, $v0, 0x11
    ctx->r2 = ctx->r2 | 0X11;
    // 0x80228ED0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80228ED4:
    // 0x80228ED4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80228ED8: jal         0x8002A33C
    // 0x80228EDC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80228EDC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80228EE0: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80228EE4: j           L_80228EF4
    // 0x80228EE8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
        goto L_80228EF4;
    // 0x80228EE8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80228EEC:
    // 0x80228EEC: jal         0x8002A33C
    // 0x80228EF0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80228EF0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_80228EF4:
    // 0x80228EF4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228EF8: j           L_80228F08
    // 0x80228EFC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
        goto L_80228F08;
    // 0x80228EFC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
L_80228F00:
    // 0x80228F00: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228F04: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
L_80228F08:
    // 0x80228F08: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228F0C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228F10: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228F14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228F18: jr          $ra
    // 0x80228F1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228F1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DD00_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DD00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DD04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DD08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DD0C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DD10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DD14: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022DD18: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DD1C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DD20: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DD24: lw          $v0, -0x1860($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1860);
    // 0x8022DD28: jalr        $v0
    // 0x8022DD2C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022DD2C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    after_0:
    // 0x8022DD30: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022DD34: bne         $v0, $zero, L_8022DD48
    if (ctx->r2 != 0) {
        // 0x8022DD38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DD48;
    }
    // 0x8022DD38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DD3C: jal         0x8005044C
    // 0x8022DD40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022DD40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022DD44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022DD48:
    // 0x8022DD48: jal         0x8022E3B8
    // 0x8022DD4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8022E3B8_ovl25(rdram, ctx);
        goto after_2;
    // 0x8022DD4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022DD50: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DD54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DD58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DD5C: jr          $ra
    // 0x8022DD60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DD60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FA90_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA90: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022FA94: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022FA98: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FA9C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022FAA0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8022FAA4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022FAA8: jal         0x800A3450
    // 0x8022FAAC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022FAAC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022FAB0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022FAB4: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8022FAB8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022FABC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022FAC0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FAC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FAC8: lh          $v0, -0x15AC($at)
    ctx->r2 = MEM_H(ctx->r1, -0X15AC);
    // 0x8022FACC: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022FAD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022FAD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022FAD8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022FADC: jal         0x8004DC2C
    // 0x8022FAE0: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_1;
    // 0x8022FAE0: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    after_1:
    // 0x8022FAE4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022FAE8: jal         0x8004DD04
    // 0x8022FAEC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8022FAEC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x8022FAF0: jal         0x8004EFE4
    // 0x8022FAF4: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_3;
    // 0x8022FAF4: nop

    after_3:
    // 0x8022FAF8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022FAFC: beq         $s0, $zero, L_8022FBE4
    if (ctx->r16 == 0) {
        // 0x8022FB00: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022FBE4;
    }
    // 0x8022FB00: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FB04: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022FB08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FB0C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022FB10: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022FB14: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8022FB18: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8022FB1C: lhu         $v0, 0x1A8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A8);
    // 0x8022FB20: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022FB24: andi        $v0, $s2, 0x3
    ctx->r2 = ctx->r18 & 0X3;
    // 0x8022FB28: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022FB2C: lhu         $v1, 0x1AA($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1AA);
    // 0x8022FB30: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FB34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FB38: lhu         $v0, -0x15B4($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X15B4);
    // 0x8022FB3C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022FB40: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022FB44: lhu         $v0, 0x1AC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1AC);
    // 0x8022FB48: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022FB4C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022FB50: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022FB54: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022FB58: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022FB5C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022FB60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FB64: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022FB68: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022FB6C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022FB70: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022FB74: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x8022FB78: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8022FB7C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8022FB80: lh          $a3, -0x15D4($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X15D4);
    // 0x8022FB84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022FB88: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FB8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FB90: lh          $v0, -0x15D2($at)
    ctx->r2 = MEM_H(ctx->r1, -0X15D2);
    // 0x8022FB94: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022FB98: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022FB9C: jal         0x8004DBA0
    // 0x8022FBA0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_4;
    // 0x8022FBA0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x8022FBA4: lhu         $v0, 0x28($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X28);
    // 0x8022FBA8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022FBAC: jal         0x800A3450
    // 0x8022FBB0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8022FBB0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022FBB4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022FBB8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022FBBC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FBC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FBC4: lhu         $v0, -0x159C($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X159C);
    // 0x8022FBC8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022FBCC: lhu         $v0, 0x2C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2C);
    // 0x8022FBD0: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8022FBD4: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8022FBD8: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8022FBDC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022FBE0: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
L_8022FBE4:
    // 0x8022FBE4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022FBE8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022FBEC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022FBF0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022FBF4: jr          $ra
    // 0x8022FBF8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022FBF8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80228F20_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F20: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80228F24: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80228F28: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80228F2C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80228F30: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80228F34: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80228F38: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x80228F3C: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80228F40: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80228F44: lh          $a1, 0x56($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X56);
    // 0x80228F48: addiu       $a2, $zero, 0x600
    ctx->r6 = ADD32(0, 0X600);
    // 0x80228F4C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228F50: jal         0x8004DC2C
    // 0x80228F54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x80228F54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80228F58: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80228F5C: jal         0x8004DD04
    // 0x80228F60: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80228F60: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x80228F64: jal         0x8004EFE4
    // 0x80228F68: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x80228F68: nop

    after_2:
    // 0x80228F6C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80228F70: beq         $s2, $zero, L_8022903C
    if (ctx->r18 == 0) {
        // 0x80228F74: addiu       $a2, $zero, 0xC80
        ctx->r6 = ADD32(0, 0XC80);
            goto L_8022903C;
    }
    // 0x80228F74: addiu       $a2, $zero, 0xC80
    ctx->r6 = ADD32(0, 0XC80);
    // 0x80228F78: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x80228F7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228F80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228F84: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80228F88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228F8C: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x80228F90: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80228F94: sb          $zero, 0x4($s2)
    MEM_B(0X4, ctx->r18) = 0;
    // 0x80228F98: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    // 0x80228F9C: lh          $a1, 0x56($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X56);
    // 0x80228FA0: addiu       $a3, $zero, 0xD00
    ctx->r7 = ADD32(0, 0XD00);
    // 0x80228FA4: addiu       $v0, $zero, 0x440
    ctx->r2 = ADD32(0, 0X440);
    // 0x80228FA8: jal         0x8004DC2C
    // 0x80228FAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_3;
    // 0x80228FAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x80228FB0: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x80228FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228FB8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228FBC: jal         0x8009A3B4
    // 0x80228FC0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80228FC0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80228FC4: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x80228FC8: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x80228FCC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228FD0: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x80228FD4: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x80228FD8: lw          $v1, 0x20($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X20);
    // 0x80228FDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228FE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228FE4: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x80228FE8: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x80228FEC: lw          $v1, 0x24($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X24);
    // 0x80228FF0: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x80228FF4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80228FF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228FFC: jal         0x8004DD04
    // 0x80229000: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x80229000: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    after_5:
    // 0x80229004: lhu         $v0, 0x28($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X28);
    // 0x80229008: sh          $zero, 0x46($s2)
    MEM_H(0X46, ctx->r18) = 0;
    // 0x8022900C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80229010: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80229014: lhu         $v0, 0x2C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2C);
    // 0x80229018: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8022901C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229020: sh          $zero, 0x4A($s2)
    MEM_H(0X4A, ctx->r18) = 0;
    // 0x80229024: sh          $zero, 0x50($s2)
    MEM_H(0X50, ctx->r18) = 0;
    // 0x80229028: sh          $zero, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = 0;
    // 0x8022902C: sh          $zero, 0x4C($s2)
    MEM_H(0X4C, ctx->r18) = 0;
    // 0x80229030: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80229034: jal         0x80229140
    // 0x80229038: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    func_80229140_ovl25(rdram, ctx);
        goto after_6;
    // 0x80229038: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    after_6:
L_8022903C:
    // 0x8022903C: jal         0x8004EFE4
    // 0x80229040: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_7;
    // 0x80229040: nop

    after_7:
    // 0x80229044: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80229048: beq         $s2, $zero, L_80229114
    if (ctx->r18 == 0) {
        // 0x8022904C: addiu       $a2, $zero, 0xC80
        ctx->r6 = ADD32(0, 0XC80);
            goto L_80229114;
    }
    // 0x8022904C: addiu       $a2, $zero, 0xC80
    ctx->r6 = ADD32(0, 0XC80);
    // 0x80229050: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x80229054: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229058: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022905C: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80229060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229064: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x80229068: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8022906C: sb          $zero, 0x4($s2)
    MEM_B(0X4, ctx->r18) = 0;
    // 0x80229070: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    // 0x80229074: lh          $a1, 0x56($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X56);
    // 0x80229078: addiu       $a3, $zero, 0xD00
    ctx->r7 = ADD32(0, 0XD00);
    // 0x8022907C: addiu       $v0, $zero, -0x440
    ctx->r2 = ADD32(0, -0X440);
    // 0x80229080: jal         0x8004DC2C
    // 0x80229084: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_8;
    // 0x80229084: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_8:
    // 0x80229088: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x8022908C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229090: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80229094: jal         0x8009A3B4
    // 0x80229098: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80229098: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
    // 0x8022909C: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x802290A0: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x802290A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802290A8: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x802290AC: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x802290B0: lw          $v1, 0x20($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X20);
    // 0x802290B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802290B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802290BC: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x802290C0: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x802290C4: lw          $v1, 0x24($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X24);
    // 0x802290C8: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x802290CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802290D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802290D4: jal         0x8004DD04
    // 0x802290D8: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_10;
    // 0x802290D8: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    after_10:
    // 0x802290DC: lhu         $v0, 0x28($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X28);
    // 0x802290E0: sh          $zero, 0x46($s2)
    MEM_H(0X46, ctx->r18) = 0;
    // 0x802290E4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802290E8: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x802290EC: lhu         $v0, 0x2C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2C);
    // 0x802290F0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802290F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802290F8: sh          $zero, 0x4A($s2)
    MEM_H(0X4A, ctx->r18) = 0;
    // 0x802290FC: sh          $zero, 0x50($s2)
    MEM_H(0X50, ctx->r18) = 0;
    // 0x80229100: sh          $zero, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = 0;
    // 0x80229104: sh          $zero, 0x4C($s2)
    MEM_H(0X4C, ctx->r18) = 0;
    // 0x80229108: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022910C: jal         0x80229140
    // 0x80229110: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    func_80229140_ovl25(rdram, ctx);
        goto after_11;
    // 0x80229110: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    after_11:
L_80229114:
    // 0x80229114: beq         $s1, $zero, L_80229124
    if (ctx->r17 == 0) {
        // 0x80229118: addiu       $a0, $zero, 0xD0
        ctx->r4 = ADD32(0, 0XD0);
            goto L_80229124;
    }
    // 0x80229118: addiu       $a0, $zero, 0xD0
    ctx->r4 = ADD32(0, 0XD0);
    // 0x8022911C: jal         0x8002A33C
    // 0x80229120: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_12;
    // 0x80229120: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_12:
L_80229124:
    // 0x80229124: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x80229128: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8022912C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80229130: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80229134: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80229138: jr          $ra
    // 0x8022913C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8022913C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8023BC54_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BC54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023BC58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023BC5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023BC60: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023BC64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023BC68: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8023BC6C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8023BC70: beq         $v1, $s1, L_8023BCFC
    if (ctx->r3 == ctx->r17) {
        // 0x8023BC74: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023BCFC;
    }
    // 0x8023BC74: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023BC78: beql        $v0, $zero, L_8023BC90
    if (ctx->r2 == 0) {
        // 0x8023BC7C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023BC90;
    }
    goto skip_0;
    // 0x8023BC7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023BC80: beq         $v1, $zero, L_8023BCA8
    if (ctx->r3 == 0) {
        // 0x8023BC84: nop
    
            goto L_8023BCA8;
    }
    // 0x8023BC84: nop

    // 0x8023BC88: j           L_8023BDC4
    // 0x8023BC8C: nop

        goto L_8023BDC4;
    // 0x8023BC8C: nop

L_8023BC90:
    // 0x8023BC90: beq         $v1, $v0, L_8023BD38
    if (ctx->r3 == ctx->r2) {
        // 0x8023BC94: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023BD38;
    }
    // 0x8023BC94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BC98: beq         $v1, $v0, L_8023BD5C
    if (ctx->r3 == ctx->r2) {
        // 0x8023BC9C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8023BD5C;
    }
    // 0x8023BC9C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023BCA0: j           L_8023BDC4
    // 0x8023BCA4: nop

        goto L_8023BDC4;
    // 0x8023BCA4: nop

L_8023BCA8:
    // 0x8023BCA8: jal         0x8005FB90
    // 0x8023BCAC: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x8023BCAC: nop

    after_0:
    // 0x8023BCB0: jal         0x80036B7C
    // 0x8023BCB4: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_1;
    // 0x8023BCB4: nop

    after_1:
    // 0x8023BCB8: beq         $v0, $zero, L_8023BDC4
    if (ctx->r2 == 0) {
        // 0x8023BCBC: nop
    
            goto L_8023BDC4;
    }
    // 0x8023BCBC: nop

    // 0x8023BCC0: jal         0x80060170
    // 0x8023BCC4: nop

    func_80060170_3B570(rdram, ctx);
        goto after_2;
    // 0x8023BCC4: nop

    after_2:
    // 0x8023BCC8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023BCCC: addiu       $v0, $v0, 0x24C
    ctx->r2 = ADD32(ctx->r2, 0X24C);
    // 0x8023BCD0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8023BCD4: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8023BCD8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023BCDC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023BCE0: addiu       $v0, $v0, 0x790
    ctx->r2 = ADD32(ctx->r2, 0X790);
    // 0x8023BCE4: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x8023BCE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BCEC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8023BCF0: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x8023BCF4: j           L_8023BDC4
    // 0x8023BCF8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8023BDC4;
    // 0x8023BCF8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8023BCFC:
    // 0x8023BCFC: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8023BD00: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8023BD04: jalr        $v0
    // 0x8023BD08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8023BD08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023BD0C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023BD10: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x8023BD14: bne         $v0, $zero, L_8023BDBC
    if (ctx->r2 != 0) {
        // 0x8023BD18: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_8023BDBC;
    }
    // 0x8023BD18: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8023BD1C: beq         $v0, $zero, L_8023BDBC
    if (ctx->r2 == 0) {
        // 0x8023BD20: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_8023BDBC;
    }
    // 0x8023BD20: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8023BD24: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x8023BD28: jal         0x80036E48
    // 0x8023BD2C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x8023BD2C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_4:
    // 0x8023BD30: j           L_8023BDAC
    // 0x8023BD34: nop

        goto L_8023BDAC;
    // 0x8023BD34: nop

L_8023BD38:
    // 0x8023BD38: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8023BD3C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8023BD40: jalr        $v0
    // 0x8023BD44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8023BD44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8023BD48: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8023BD4C: beq         $v0, $s1, L_8023BDBC
    if (ctx->r2 == ctx->r17) {
        // 0x8023BD50: nop
    
            goto L_8023BDBC;
    }
    // 0x8023BD50: nop

    // 0x8023BD54: j           L_8023BDE8
    // 0x8023BD58: nop

        goto L_8023BDE8;
    // 0x8023BD58: nop

L_8023BD5C:
    // 0x8023BD5C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023BD60: beq         $v1, $v0, L_8023BDAC
    if (ctx->r3 == ctx->r2) {
        // 0x8023BD64: nop
    
            goto L_8023BDAC;
    }
    // 0x8023BD64: nop

    // 0x8023BD68: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8023BD6C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8023BD70: jalr        $v0
    // 0x8023BD74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x8023BD74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8023BD78: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023BD7C: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x8023BD80: bne         $v0, $zero, L_8023BDBC
    if (ctx->r2 != 0) {
        // 0x8023BD84: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_8023BDBC;
    }
    // 0x8023BD84: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8023BD88: beq         $v0, $zero, L_8023BDBC
    if (ctx->r2 == 0) {
        // 0x8023BD8C: nop
    
            goto L_8023BDBC;
    }
    // 0x8023BD8C: nop

    // 0x8023BD90: jal         0x80036E48
    // 0x8023BD94: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80036E48_12248(rdram, ctx);
        goto after_7;
    // 0x8023BD94: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_7:
    // 0x8023BD98: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8023BD9C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8023BDA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BDA4: j           L_8023BDE0
    // 0x8023BDA8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8023BDE0;
    // 0x8023BDA8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8023BDAC:
    // 0x8023BDAC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8023BDB0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8023BDB4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BDB8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8023BDBC:
    // 0x8023BDBC: jal         0x8005FB90
    // 0x8023BDC0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_8;
    // 0x8023BDC0: nop

    after_8:
L_8023BDC4:
    // 0x8023BDC4: jal         0x8006072C
    // 0x8023BDC8: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_9;
    // 0x8023BDC8: nop

    after_9:
    // 0x8023BDCC: beq         $v0, $zero, L_8023BDE0
    if (ctx->r2 == 0) {
        // 0x8023BDD0: nop
    
            goto L_8023BDE0;
    }
    // 0x8023BDD0: nop

    // 0x8023BDD4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023BDD8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023BDDC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023BDE0:
    // 0x8023BDE0: jal         0x80060018
    // 0x8023BDE4: nop

    func_80060018_3B418(rdram, ctx);
        goto after_10;
    // 0x8023BDE4: nop

    after_10:
L_8023BDE8:
    // 0x8023BDE8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023BDEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023BDF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BDF4: jr          $ra
    // 0x8023BDF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023BDF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802329B8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802329B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802329BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802329C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802329C4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802329C8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x802329CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802329D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802329D4: jal         0x8004EFE4
    // 0x802329D8: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x802329D8: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    after_0:
    // 0x802329DC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802329E0: beq         $a1, $zero, L_80232AA8
    if (ctx->r5 == 0) {
        // 0x802329E4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80232AA8;
    }
    // 0x802329E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802329E8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802329EC: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802329F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802329F4: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x802329F8: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x802329FC: sb          $s0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r16;
    // 0x80232A00: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80232A04: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
    // 0x80232A08: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x80232A0C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80232A10: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80232A14: lbu         $v1, 0x1E($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X1E);
    // 0x80232A18: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232A1C: addiu       $v0, $v0, 0x4D58
    ctx->r2 = ADD32(ctx->r2, 0X4D58);
    // 0x80232A20: sw          $v0, 0xD0($a1)
    MEM_W(0XD0, ctx->r5) = ctx->r2;
    // 0x80232A24: sb          $v1, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r3;
    // 0x80232A28: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80232A2C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80232A30: lhu         $v0, -0x1470($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1470);
    // 0x80232A34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232A38: bgez        $s0, L_80232A44
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80232A3C: addu        $a2, $v1, $v0
        ctx->r6 = ADD32(ctx->r3, ctx->r2);
            goto L_80232A44;
    }
    // 0x80232A3C: addu        $a2, $v1, $v0
    ctx->r6 = ADD32(ctx->r3, ctx->r2);
    // 0x80232A40: addiu       $a0, $s0, 0x3
    ctx->r4 = ADD32(ctx->r16, 0X3);
L_80232A44:
    // 0x80232A44: sra         $v1, $a0, 2
    ctx->r3 = S32(SIGNED(ctx->r4) >> 2);
    // 0x80232A48: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80232A4C: subu        $v1, $s0, $v1
    ctx->r3 = SUB32(ctx->r16, ctx->r3);
    // 0x80232A50: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232A54: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80232A58: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80232A5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232A60: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80232A64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232A68: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80232A6C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x80232A70: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80232A74: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80232A78: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232A7C: lhu         $v1, -0x146E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X146E);
    // 0x80232A80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232A84: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x80232A88: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80232A8C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232A90: lhu         $v1, -0x146C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X146C);
    // 0x80232A94: addiu       $a0, $zero, 0x1A1
    ctx->r4 = ADD32(0, 0X1A1);
    // 0x80232A98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232A9C: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80232AA0: jal         0x8002A33C
    // 0x80232AA4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80232AA4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
L_80232AA8:
    // 0x80232AA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232AAC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232AB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232AB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232AB8: jr          $ra
    // 0x80232ABC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232ABC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225150_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x2B40
    ctx->r2 = ADD32(ctx->r2, -0X2B40);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x29A0
    ctx->r2 = ADD32(ctx->r2, -0X29A0);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x2954
    ctx->r2 = ADD32(ctx->r2, -0X2954);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x2894
    ctx->r2 = ADD32(ctx->r2, -0X2894);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x2828
    ctx->r2 = ADD32(ctx->r2, -0X2828);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x27B8
    ctx->r2 = ADD32(ctx->r2, -0X27B8);
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
RECOMP_FUNC void func_8022B69C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B69C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022B6A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022B6A4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022B6A8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022B6AC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022B6B0: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022B6B4: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8022B6B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022B6BC: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B6C0: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x8022B6C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B6C8: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022B6CC: beq         $a0, $v0, L_8022B6E8
    if (ctx->r4 == ctx->r2) {
        // 0x8022B6D0: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022B6E8;
    }
    // 0x8022B6D0: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022B6D4: bne         $a0, $v0, L_8022B6E4
    if (ctx->r4 != ctx->r2) {
        // 0x8022B6D8: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022B6E4;
    }
    // 0x8022B6D8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022B6DC: j           L_8022B6E8
    // 0x8022B6E0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_8022B6E8;
    // 0x8022B6E0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8022B6E4:
    // 0x8022B6E4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022B6E8:
    // 0x8022B6E8: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022B6EC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8022B6F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B6F4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022B6F8: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022B6FC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022B700: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022B704: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022B708: beq         $a0, $v1, L_8022B730
    if (ctx->r4 == ctx->r3) {
        // 0x8022B70C: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8022B730;
    }
    // 0x8022B70C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022B710: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022B714: jal         0x8003B85C
    // 0x8022B718: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022B718: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8022B71C: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022B720: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8022B724: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022B728: jal         0x8003B840
    // 0x8022B72C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022B72C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022B730:
    // 0x8022B730: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x8022B734: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022B738: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8022B73C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8022B740: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022B744: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x8022B748: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022B74C: beq         $v1, $v0, L_8022B768
    if (ctx->r3 == ctx->r2) {
        // 0x8022B750: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022B768;
    }
    // 0x8022B750: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022B754: bne         $v1, $v0, L_8022B764
    if (ctx->r3 != ctx->r2) {
        // 0x8022B758: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022B764;
    }
    // 0x8022B758: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022B75C: j           L_8022B768
    // 0x8022B760: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_8022B768;
    // 0x8022B760: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_8022B764:
    // 0x8022B764: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_8022B768:
    // 0x8022B768: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x8022B76C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022B770: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B774: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022B778: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x8022B77C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8022B780: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022B784: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022B788: beq         $a0, $v1, L_8022B7B0
    if (ctx->r4 == ctx->r3) {
        // 0x8022B78C: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8022B7B0;
    }
    // 0x8022B78C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022B790: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022B794: jal         0x8003B85C
    // 0x8022B798: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022B798: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x8022B79C: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022B7A0: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022B7A4: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x8022B7A8: jal         0x8003B840
    // 0x8022B7AC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022B7AC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_8022B7B0:
    // 0x8022B7B0: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022B7B4: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x8022B7B8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022B7BC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022B7C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022B7C4: jr          $ra
    // 0x8022B7C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022B7C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022B7CC: nop

;}
RECOMP_FUNC void func_80231FB8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231FB8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80231FBC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80231FC0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231FC4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80231FC8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80231FCC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80231FD0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80231FD4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80231FD8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80231FDC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80231FE0: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
L_80231FE4:
    // 0x80231FE4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80231FE8: sll         $a2, $a1, 3
    ctx->r6 = S32(ctx->r5 << 3);
    // 0x80231FEC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231FF0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80231FF4: lhu         $v0, -0x14F0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X14F0);
    // 0x80231FF8: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80231FFC: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    // 0x80232000: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    // 0x80232004: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232008: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8023200C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80232010: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80232014: lhu         $v0, -0x14EE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X14EE);
    // 0x80232018: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8023201C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232020: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
    // 0x80232024: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80232028: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8023202C: lhu         $v0, -0x14EC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X14EC);
    // 0x80232030: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80232034: slti        $a1, $a1, 0xC
    ctx->r5 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x80232038: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023203C: beq         $a1, $zero, L_8023204C
    if (ctx->r5 == 0) {
        // 0x80232040: sh          $v0, 0x4($a0)
        MEM_H(0X4, ctx->r4) = ctx->r2;
            goto L_8023204C;
    }
    // 0x80232040: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x80232044: addu        $v0, $s2, $a2
    ctx->r2 = ADD32(ctx->r18, ctx->r6);
    // 0x80232048: sw          $zero, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = 0;
L_8023204C:
    // 0x8023204C: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x80232050: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80232054: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232058: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023205C: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80232060: bne         $v0, $zero, L_80231FE4
    if (ctx->r2 != 0) {
        // 0x80232064: sll         $a1, $s0, 16
        ctx->r5 = S32(ctx->r16 << 16);
            goto L_80231FE4;
    }
    // 0x80232064: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x80232068: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023206C: lui         $s4, 0x488
    ctx->r20 = S32(0X488 << 16);
    // 0x80232070: addiu       $s3, $zero, 0x80
    ctx->r19 = ADD32(0, 0X80);
    // 0x80232074: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_80232078:
    // 0x80232078: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8023207C: addiu       $a0, $v0, 0x20
    ctx->r4 = ADD32(ctx->r2, 0X20);
    // 0x80232080: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    // 0x80232084: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232088: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8023208C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80232090: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80232094: lh          $a1, -0x14EA($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X14EA);
    // 0x80232098: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8023209C: addiu       $v0, $v0, 0xD0
    ctx->r2 = ADD32(ctx->r2, 0XD0);
    // 0x802320A0: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x802320A4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802320A8: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x802320AC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802320B0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802320B4: jal         0x80051E18
    // 0x802320B8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x802320B8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x802320BC: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x802320C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802320C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802320C8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802320CC: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x802320D0: bne         $v0, $zero, L_80232078
    if (ctx->r2 != 0) {
        // 0x802320D4: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_80232078;
    }
    // 0x802320D4: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x802320D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802320DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802320E0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802320E4: jal         0x80047284
    // 0x802320E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_1;
    // 0x802320E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802320EC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802320F0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802320F4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802320F8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802320FC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80232100: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80232104: jr          $ra
    // 0x80232108: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80232108: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80233A68_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233A68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233A6C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233A70: addiu       $a1, $a0, 0x14
    ctx->r5 = ADD32(ctx->r4, 0X14);
    // 0x80233A74: jal         0x8002A33C
    // 0x80233A78: addiu       $a0, $zero, 0x144
    ctx->r4 = ADD32(0, 0X144);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80233A78: addiu       $a0, $zero, 0x144
    ctx->r4 = ADD32(0, 0X144);
    after_0:
    // 0x80233A7C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233A80: jr          $ra
    // 0x80233A84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233A84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802288F4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288F4: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x802288F8: lbu         $v1, 0xB($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0XB);
    // 0x802288FC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80228900: beq         $v0, $zero, L_80228A9C
    if (ctx->r2 == 0) {
        // 0x80228904: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80228A9C;
    }
    // 0x80228904: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228908: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022890C: addu        $at, $at, $v0
    gpr jr_addend_80228914 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228910: lw          $v0, 0xD38($at)
    ctx->r2 = ADD32(ctx->r1, 0XD38);
    // 0x80228914: jr          $v0
    // 0x80228918: nop

    switch (jr_addend_80228914 >> 2) {
        case 0: goto L_8022891C; break;
        case 1: goto L_80228948; break;
        case 2: goto L_802289F4; break;
        case 3: goto L_80228A0C; break;
        case 4: goto L_80228A8C; break;
        default: switch_error(__func__, 0x80228914, 0x80240D38);
    }
    // 0x80228918: nop

L_8022891C:
    // 0x8022891C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80228920: sh          $zero, 0x10($a1)
    MEM_H(0X10, ctx->r5) = 0;
    // 0x80228924: sh          $zero, 0xE($a1)
    MEM_H(0XE, ctx->r5) = 0;
    // 0x80228928: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
    // 0x8022892C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80228930: lbu         $v0, 0xB($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XB);
    // 0x80228934: sh          $zero, 0x48($t0)
    MEM_H(0X48, ctx->r8) = 0;
    // 0x80228938: sh          $zero, 0x46($t0)
    MEM_H(0X46, ctx->r8) = 0;
    // 0x8022893C: sh          $zero, 0x44($t0)
    MEM_H(0X44, ctx->r8) = 0;
    // 0x80228940: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228944: sb          $v0, 0xB($t0)
    MEM_B(0XB, ctx->r8) = ctx->r2;
L_80228948:
    // 0x80228948: lh          $v1, 0xE($a1)
    ctx->r3 = MEM_H(ctx->r5, 0XE);
    // 0x8022894C: slti        $v0, $v1, 0x40
    ctx->r2 = SIGNED(ctx->r3) < 0X40 ? 1 : 0;
    // 0x80228950: beq         $v0, $zero, L_802289D4
    if (ctx->r2 == 0) {
        // 0x80228954: sltiu       $v0, $v1, 0x35
        ctx->r2 = ctx->r3 < 0X35 ? 1 : 0;
            goto L_802289D4;
    }
    // 0x80228954: sltiu       $v0, $v1, 0x35
    ctx->r2 = ctx->r3 < 0X35 ? 1 : 0;
    // 0x80228958: beq         $v0, $zero, L_80228A68
    if (ctx->r2 == 0) {
        // 0x8022895C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80228A68;
    }
    // 0x8022895C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228960: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228964: addu        $at, $at, $v0
    gpr jr_addend_8022896C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228968: lw          $v0, 0xD50($at)
    ctx->r2 = ADD32(ctx->r1, 0XD50);
    // 0x8022896C: jr          $v0
    // 0x80228970: nop

    switch (jr_addend_8022896C >> 2) {
        case 0: goto L_80228974; break;
        case 1: goto L_80228A68; break;
        case 2: goto L_80228A68; break;
        case 3: goto L_80228A68; break;
        case 4: goto L_80228A68; break;
        case 5: goto L_80228A68; break;
        case 6: goto L_80228A68; break;
        case 7: goto L_80228A68; break;
        case 8: goto L_80228A68; break;
        case 9: goto L_80228A68; break;
        case 10: goto L_80228A68; break;
        case 11: goto L_80228A68; break;
        case 12: goto L_80228990; break;
        case 13: goto L_80228A68; break;
        case 14: goto L_80228A68; break;
        case 15: goto L_80228A68; break;
        case 16: goto L_80228998; break;
        case 17: goto L_80228A68; break;
        case 18: goto L_80228A68; break;
        case 19: goto L_80228A68; break;
        case 20: goto L_80228A68; break;
        case 21: goto L_80228A68; break;
        case 22: goto L_80228A68; break;
        case 23: goto L_80228A68; break;
        case 24: goto L_80228A68; break;
        case 25: goto L_80228A68; break;
        case 26: goto L_80228A68; break;
        case 27: goto L_80228A68; break;
        case 28: goto L_80228A68; break;
        case 29: goto L_80228A68; break;
        case 30: goto L_80228A68; break;
        case 31: goto L_80228A68; break;
        case 32: goto L_802289A4; break;
        case 33: goto L_80228A68; break;
        case 34: goto L_80228A68; break;
        case 35: goto L_80228A68; break;
        case 36: goto L_80228A68; break;
        case 37: goto L_80228A68; break;
        case 38: goto L_80228A68; break;
        case 39: goto L_80228A68; break;
        case 40: goto L_80228A68; break;
        case 41: goto L_80228A68; break;
        case 42: goto L_80228A68; break;
        case 43: goto L_80228A68; break;
        case 44: goto L_80228A68; break;
        case 45: goto L_80228A68; break;
        case 46: goto L_80228A68; break;
        case 47: goto L_80228A68; break;
        case 48: goto L_802289AC; break;
        case 49: goto L_80228A68; break;
        case 50: goto L_80228A68; break;
        case 51: goto L_80228A68; break;
        case 52: goto L_802289C8; break;
        default: switch_error(__func__, 0x8022896C, 0x80240D50);
    }
    // 0x80228970: nop

L_80228974:
    // 0x80228974: lb          $v0, 0xD($t0)
    ctx->r2 = MEM_B(ctx->r8, 0XD);
    // 0x80228978: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8022897C: sh          $v1, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r3;
    // 0x80228980: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80228984: sh          $v1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r3;
    // 0x80228988: j           L_802289B8
    // 0x8022898C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
        goto L_802289B8;
    // 0x8022898C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_80228990:
    // 0x80228990: j           L_80228A68
    // 0x80228994: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
        goto L_80228A68;
    // 0x80228994: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
L_80228998:
    // 0x80228998: sh          $zero, 0x12($a1)
    MEM_H(0X12, ctx->r5) = 0;
    // 0x8022899C: j           L_80228A68
    // 0x802289A0: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
        goto L_80228A68;
    // 0x802289A0: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
L_802289A4:
    // 0x802289A4: j           L_80228A64
    // 0x802289A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80228A64;
    // 0x802289A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802289AC:
    // 0x802289AC: lb          $v0, 0xD($t0)
    ctx->r2 = MEM_B(ctx->r8, 0XD);
    // 0x802289B0: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x802289B4: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_802289B8:
    // 0x802289B8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802289BC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802289C0: j           L_80228A68
    // 0x802289C4: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
        goto L_80228A68;
    // 0x802289C4: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
L_802289C8:
    // 0x802289C8: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x802289CC: j           L_80228A68
    // 0x802289D0: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
        goto L_80228A68;
    // 0x802289D0: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
L_802289D4:
    // 0x802289D4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802289D8: sh          $zero, 0x12($a1)
    MEM_H(0X12, ctx->r5) = 0;
    // 0x802289DC: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x802289E0: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x802289E4: lbu         $v1, 0xF($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XF);
    // 0x802289E8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802289EC: j           L_80228A7C
    // 0x802289F0: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
        goto L_80228A7C;
    // 0x802289F0: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
L_802289F4:
    // 0x802289F4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802289F8: lb          $v0, 0xF($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XF);
    // 0x802289FC: bgtz        $v0, L_80228A9C
    if (SIGNED(ctx->r2) > 0) {
        // 0x80228A00: nop
    
            goto L_80228A9C;
    }
    // 0x80228A00: nop

    // 0x80228A04: j           L_80228A7C
    // 0x80228A08: sh          $zero, 0xE($a1)
    MEM_H(0XE, ctx->r5) = 0;
        goto L_80228A7C;
    // 0x80228A08: sh          $zero, 0xE($a1)
    MEM_H(0XE, ctx->r5) = 0;
L_80228A0C:
    // 0x80228A0C: lh          $v1, 0xE($a1)
    ctx->r3 = MEM_H(ctx->r5, 0XE);
    // 0x80228A10: slti        $v0, $v1, 0x28
    ctx->r2 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
    // 0x80228A14: beq         $v0, $zero, L_80228A78
    if (ctx->r2 == 0) {
        // 0x80228A18: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80228A78;
    }
    // 0x80228A18: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80228A1C: beq         $v1, $v0, L_80228A54
    if (ctx->r3 == ctx->r2) {
        // 0x80228A20: slti        $v0, $v1, 0x21
        ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
            goto L_80228A54;
    }
    // 0x80228A20: slti        $v0, $v1, 0x21
    ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x80228A24: beq         $v0, $zero, L_80228A68
    if (ctx->r2 == 0) {
        // 0x80228A28: nop
    
            goto L_80228A68;
    }
    // 0x80228A28: nop

    // 0x80228A2C: beq         $v1, $zero, L_80228A48
    if (ctx->r3 == 0) {
        // 0x80228A30: nop
    
            goto L_80228A48;
    }
    // 0x80228A30: nop

    // 0x80228A34: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80228A38: beql        $v1, $v0, L_80228A68
    if (ctx->r3 == ctx->r2) {
        // 0x80228A3C: sh          $zero, 0x14($a1)
        MEM_H(0X14, ctx->r5) = 0;
            goto L_80228A68;
    }
    goto skip_0;
    // 0x80228A3C: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    skip_0:
    // 0x80228A40: j           L_80228A68
    // 0x80228A44: nop

        goto L_80228A68;
    // 0x80228A44: nop

L_80228A48:
    // 0x80228A48: lb          $v0, 0xD($t0)
    ctx->r2 = MEM_B(ctx->r8, 0XD);
    // 0x80228A4C: j           L_80228A5C
    // 0x80228A50: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
        goto L_80228A5C;
    // 0x80228A50: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_80228A54:
    // 0x80228A54: lb          $v0, 0xD($t0)
    ctx->r2 = MEM_B(ctx->r8, 0XD);
    // 0x80228A58: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_80228A5C:
    // 0x80228A5C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228A60: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_80228A64:
    // 0x80228A64: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
L_80228A68:
    // 0x80228A68: lhu         $v0, 0xE($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XE);
    // 0x80228A6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228A70: j           L_80228A9C
    // 0x80228A74: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
        goto L_80228A9C;
    // 0x80228A74: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
L_80228A78:
    // 0x80228A78: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
L_80228A7C:
    // 0x80228A7C: lbu         $v0, 0xB($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XB);
    // 0x80228A80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228A84: j           L_80228A9C
    // 0x80228A88: sb          $v0, 0xB($t0)
    MEM_B(0XB, ctx->r8) = ctx->r2;
        goto L_80228A9C;
    // 0x80228A88: sb          $v0, 0xB($t0)
    MEM_B(0XB, ctx->r8) = ctx->r2;
L_80228A8C:
    // 0x80228A8C: lbu         $v0, 0xA($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XA);
    // 0x80228A90: sb          $zero, 0xB($t0)
    MEM_B(0XB, ctx->r8) = 0;
    // 0x80228A94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228A98: sb          $v0, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r2;
L_80228A9C:
    // 0x80228A9C: lhu         $v0, 0x44($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X44);
    // 0x80228AA0: lhu         $v1, 0x12($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X12);
    // 0x80228AA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228AA8: sh          $v0, 0x44($t0)
    MEM_H(0X44, ctx->r8) = ctx->r2;
    // 0x80228AAC: lhu         $v0, 0x46($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X46);
    // 0x80228AB0: lhu         $v1, 0x14($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X14);
    // 0x80228AB4: lhu         $a0, 0x18($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X18);
    // 0x80228AB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228ABC: sh          $v0, 0x46($t0)
    MEM_H(0X46, ctx->r8) = ctx->r2;
    // 0x80228AC0: lhu         $v0, 0x48($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X48);
    // 0x80228AC4: lhu         $v1, 0x16($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X16);
    // 0x80228AC8: lhu         $a1, 0x44($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X44);
    // 0x80228ACC: lhu         $a2, 0x46($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X46);
    // 0x80228AD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228AD4: sh          $v0, 0x48($t0)
    MEM_H(0X48, ctx->r8) = ctx->r2;
    // 0x80228AD8: lhu         $v0, 0x14($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X14);
    // 0x80228ADC: lhu         $v1, 0x16($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X16);
    // 0x80228AE0: lhu         $a3, 0x48($t0)
    ctx->r7 = MEM_HU(ctx->r8, 0X48);
    // 0x80228AE4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80228AE8: sh          $v0, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r2;
    // 0x80228AEC: lh          $v0, 0x14($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X14);
    // 0x80228AF0: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80228AF4: sh          $v1, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r3;
    // 0x80228AF8: lh          $v1, 0x16($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X16);
    // 0x80228AFC: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80228B00: sh          $a0, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r4;
    // 0x80228B04: lh          $a0, 0x18($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X18);
    // 0x80228B08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B0C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228B10: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80228B14: sw          $v0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r2;
    // 0x80228B18: sw          $v1, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r3;
    // 0x80228B1C: jr          $ra
    // 0x80228B20: sw          $a0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80228B20: sw          $a0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r4;
;}
RECOMP_FUNC void func_8023804C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023804C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80238050: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80238054: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80238058: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8023805C: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80238060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238064: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80238068: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x8023806C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238070: jal         0x8003BA58
    // 0x80238074: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x80238074: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80238078: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023807C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80238080: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238084: jal         0x8003BB80
    // 0x80238088: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x80238088: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023808C: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80238090: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x80238094: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238098: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x8023809C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802380A0: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x802380A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802380A8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802380AC: lbu         $v1, -0xCEF($at)
    ctx->r3 = MEM_BU(ctx->r1, -0XCEF);
    // 0x802380B0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802380B4: bne         $v0, $v1, L_802380D4
    if (ctx->r2 != ctx->r3) {
        // 0x802380B8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802380D4;
    }
    // 0x802380B8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802380BC: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x802380C0: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x802380C4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802380C8: bne         $v1, $v0, L_802380D4
    if (ctx->r3 != ctx->r2) {
        // 0x802380CC: sb          $zero, 0xC($s1)
        MEM_B(0XC, ctx->r17) = 0;
            goto L_802380D4;
    }
    // 0x802380CC: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x802380D0: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_802380D4:
    // 0x802380D4: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x802380D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802380DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802380E0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802380E4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802380E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802380EC: lbu         $v1, -0xD18($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0XD18);
    // 0x802380F0: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x802380F4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x802380F8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802380FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238100: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80238104: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80238108: addiu       $v0, $v0, 0x2F
    ctx->r2 = ADD32(ctx->r2, 0X2F);
    // 0x8023810C: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x80238110: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x80238114: sb          $v1, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r3;
    // 0x80238118: jal         0x8003BC68
    // 0x8023811C: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x8023811C: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x80238120: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80238124: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80238128: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8023812C: jr          $ra
    // 0x80238130: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80238130: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80238134: nop

    // 0x80238138: nop

    // 0x8023813C: nop

;}
RECOMP_FUNC void func_8022D970_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D970: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022D974: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022D978: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022D97C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022D980: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022D984: lb          $v0, 0x5($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X5);
    // 0x8022D988: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D98C: bne         $v0, $zero, L_8022DA10
    if (ctx->r2 != 0) {
        // 0x8022D990: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022DA10;
    }
    // 0x8022D990: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D994: lb          $v0, 0x4($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4);
    // 0x8022D998: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x8022D99C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D9A0: lb          $v1, 0x0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X0);
    // 0x8022D9A4: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022D9A8: beq         $v1, $v0, L_8022DA18
    if (ctx->r3 == ctx->r2) {
        // 0x8022D9AC: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022DA18;
    }
    // 0x8022D9AC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022D9B0: beql        $v1, $v0, L_8022D9B8
    if (ctx->r3 == ctx->r2) {
        // 0x8022D9B4: sb          $zero, 0x4($s0)
        MEM_B(0X4, ctx->r16) = 0;
            goto L_8022D9B8;
    }
    goto skip_0;
    // 0x8022D9B4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    skip_0:
L_8022D9B8:
    // 0x8022D9B8: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    // 0x8022D9BC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022D9C0: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022D9C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D9C8: lb          $a0, 0x0($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X0);
    // 0x8022D9CC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8022D9D0: jal         0x8003B85C
    // 0x8022D9D4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022D9D4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x8022D9D8: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022D9DC: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8022D9E0: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022D9E4: jal         0x8003B840
    // 0x8022D9E8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022D9E8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022D9EC: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    // 0x8022D9F0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022D9F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D9F8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022D9FC: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x8022DA00: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022DA04: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022DA08: j           L_8022DA18
    // 0x8022DA0C: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
        goto L_8022DA18;
    // 0x8022DA0C: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
L_8022DA10:
    // 0x8022DA10: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022DA14: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022DA18:
    // 0x8022DA18: lb          $v0, 0x7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X7);
    // 0x8022DA1C: bne         $v0, $zero, L_8022DAA0
    if (ctx->r2 != 0) {
        // 0x8022DA20: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022DAA0;
    }
    // 0x8022DA20: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DA24: lb          $v0, 0x6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X6);
    // 0x8022DA28: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8022DA2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DA30: lb          $v1, 0x0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X0);
    // 0x8022DA34: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022DA38: beq         $v1, $v0, L_8022DAA8
    if (ctx->r3 == ctx->r2) {
        // 0x8022DA3C: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022DAA8;
    }
    // 0x8022DA3C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022DA40: beql        $v1, $v0, L_8022DA48
    if (ctx->r3 == ctx->r2) {
        // 0x8022DA44: sb          $zero, 0x6($s0)
        MEM_B(0X6, ctx->r16) = 0;
            goto L_8022DA48;
    }
    goto skip_1;
    // 0x8022DA44: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    skip_1:
L_8022DA48:
    // 0x8022DA48: lb          $v1, 0x6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X6);
    // 0x8022DA4C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8022DA50: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022DA54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DA58: lb          $a0, 0x0($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X0);
    // 0x8022DA5C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8022DA60: jal         0x8003B85C
    // 0x8022DA64: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022DA64: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x8022DA68: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022DA6C: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022DA70: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x8022DA74: jal         0x8003B840
    // 0x8022DA78: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022DA78: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x8022DA7C: lb          $v1, 0x6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X6);
    // 0x8022DA80: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8022DA84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DA88: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022DA8C: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x8022DA90: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022DA94: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x8022DA98: j           L_8022DAA8
    // 0x8022DA9C: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
        goto L_8022DAA8;
    // 0x8022DA9C: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
L_8022DAA0:
    // 0x8022DAA0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022DAA4: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
L_8022DAA8:
    // 0x8022DAA8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022DAAC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022DAB0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022DAB4: jr          $ra
    // 0x8022DAB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022DAB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802365A4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802365A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802365A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802365AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802365B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802365B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802365B8: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x802365BC: lui         $v1, 0x6666
    ctx->r3 = S32(0X6666 << 16);
    // 0x802365C0: ori         $v1, $v1, 0x6667
    ctx->r3 = ctx->r3 | 0X6667;
    // 0x802365C4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802365C8: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802365CC: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802365D0: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x802365D4: mfhi        $a3
    ctx->r7 = hi;
    // 0x802365D8: sra         $v1, $a3, 1
    ctx->r3 = S32(SIGNED(ctx->r7) >> 1);
    // 0x802365DC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802365E0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802365E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802365E8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x802365EC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x802365F0: bne         $a0, $zero, L_802366A4
    if (ctx->r4 != 0) {
        // 0x802365F4: nop
    
            goto L_802366A4;
    }
    // 0x802365F4: nop

    // 0x802365F8: jal         0x8004F144
    // 0x802365FC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802365FC: nop

    after_0:
    // 0x80236600: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80236604: beq         $s0, $zero, L_802366A4
    if (ctx->r16 == 0) {
        // 0x80236608: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802366A4;
    }
    // 0x80236608: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023660C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80236610: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80236614: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80236618: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8023661C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80236620: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236624: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80236628: lw          $a1, 0x44($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X44);
    // 0x8023662C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80236630: jal         0x8009A3B4
    // 0x80236634: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80236634: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80236638: jal         0x800A3450
    // 0x8023663C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8023663C: nop

    after_2:
    // 0x80236640: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x80236644: sra         $v1, $a1, 18
    ctx->r3 = S32(SIGNED(ctx->r5) >> 18);
    // 0x80236648: andi        $v1, $v1, 0x1FF
    ctx->r3 = ctx->r3 & 0X1FF;
    // 0x8023664C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236650: bne         $v0, $zero, L_8023665C
    if (ctx->r2 != 0) {
        // 0x80236654: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8023665C;
    }
    // 0x80236654: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80236658: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
L_8023665C:
    // 0x8023665C: sra         $v0, $a1, 22
    ctx->r2 = S32(SIGNED(ctx->r5) >> 22);
    // 0x80236660: andi        $v1, $v0, 0x1FF
    ctx->r3 = ctx->r2 & 0X1FF;
    // 0x80236664: sra         $v0, $a1, 20
    ctx->r2 = S32(SIGNED(ctx->r5) >> 20);
    // 0x80236668: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023666C: bne         $v0, $zero, L_80236678
    if (ctx->r2 != 0) {
        // 0x80236670: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80236678;
    }
    // 0x80236670: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80236674: negu        $a2, $v1
    ctx->r6 = SUB32(0, ctx->r3);
L_80236678:
    // 0x80236678: lhu         $v0, 0x38($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X38);
    // 0x8023667C: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x80236680: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80236684: lhu         $a0, 0x3C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3C);
    // 0x80236688: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x8023668C: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    // 0x80236690: srl         $v0, $a1, 24
    ctx->r2 = S32(U32(ctx->r5) >> 24);
    // 0x80236694: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80236698: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x8023669C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x802366A0: sh          $a0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r4;
L_802366A4:
    // 0x802366A4: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x802366A8: addiu       $v1, $zero, 0x29
    ctx->r3 = ADD32(0, 0X29);
    // 0x802366AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802366B0: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x802366B4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802366B8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802366BC: bne         $v0, $v1, L_802366CC
    if (ctx->r2 != ctx->r3) {
        // 0x802366C0: nop
    
            goto L_802366CC;
    }
    // 0x802366C0: nop

    // 0x802366C4: jal         0x8004F5C4
    // 0x802366C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x802366C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_802366CC:
    // 0x802366CC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802366D0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802366D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802366D8: jr          $ra
    // 0x802366DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802366DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A788_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A788: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023A78C: bne         $v0, $zero, L_8023A7B4
    if (ctx->r2 != 0) {
        // 0x8023A790: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8023A7B4;
    }
    // 0x8023A790: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8023A794: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A798: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x8023A79C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A7A0: sb          $zero, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = 0;
    // 0x8023A7A4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x8023A7A8: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x8023A7AC: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x8023A7B0: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_8023A7B4:
    // 0x8023A7B4: jr          $ra
    // 0x8023A7B8: nop

    TRACE_RETURN()
    return;
    // 0x8023A7B8: nop

;}
RECOMP_FUNC void func_8022A1CC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A1CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A1D0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A1D4: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022A1D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A1DC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A1E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A1E4: lw          $v0, -0x1E90($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1E90);
    // 0x8022A1E8: jalr        $v0
    // 0x8022A1EC: addiu       $a1, $a0, 0x88
    ctx->r5 = ADD32(ctx->r4, 0X88);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022A1EC: addiu       $a1, $a0, 0x88
    ctx->r5 = ADD32(ctx->r4, 0X88);
    after_0:
    // 0x8022A1F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A1F4: jr          $ra
    // 0x8022A1F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A1F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236EAC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236EAC: lui         $a2, 0x2EC0
    ctx->r6 = S32(0X2EC0 << 16);
    // 0x80236EB0: ori         $a2, $a2, 0xC0C0
    ctx->r6 = ctx->r6 | 0XC0C0;
    // 0x80236EB4: lui         $a1, 0x3D08
    ctx->r5 = S32(0X3D08 << 16);
    // 0x80236EB8: lbu         $a3, 0xD($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XD);
    // 0x80236EBC: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x80236EC0: ori         $a1, $a1, 0x2E
    ctx->r5 = ctx->r5 | 0X2E;
    // 0x80236EC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236EC8: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80236ECC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80236ED0: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80236ED4: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80236ED8: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x80236EDC: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80236EE0: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80236EE4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80236EE8: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
    // 0x80236EEC: sw          $a2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r6;
    // 0x80236EF0: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    // 0x80236EF4: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
    // 0x80236EF8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80236EFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236F00: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236F04: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80236F08: sb          $a3, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r7;
    // 0x80236F0C: jr          $ra
    // 0x80236F10: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80236F10: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80230AD4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230AD4: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80230AD8: lbu         $v1, 0x9($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X9);
    // 0x80230ADC: beq         $v1, $zero, L_80230AF8
    if (ctx->r3 == 0) {
        // 0x80230AE0: addu        $t1, $a1, $zero
        ctx->r9 = ADD32(ctx->r5, 0);
            goto L_80230AF8;
    }
    // 0x80230AE0: addu        $t1, $a1, $zero
    ctx->r9 = ADD32(ctx->r5, 0);
    // 0x80230AE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230AE8: beq         $v1, $v0, L_80230B14
    if (ctx->r3 == ctx->r2) {
        // 0x80230AEC: nop
    
            goto L_80230B14;
    }
    // 0x80230AEC: nop

    // 0x80230AF0: j           L_80230BC8
    // 0x80230AF4: nop

        goto L_80230BC8;
    // 0x80230AF4: nop

L_80230AF8:
    // 0x80230AF8: sh          $zero, 0x18($t1)
    MEM_H(0X18, ctx->r9) = 0;
    // 0x80230AFC: lbu         $v0, 0x9($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X9);
    // 0x80230B00: sh          $zero, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = 0;
    // 0x80230B04: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
    // 0x80230B08: sh          $zero, 0x50($t0)
    MEM_H(0X50, ctx->r8) = 0;
    // 0x80230B0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230B10: sb          $v0, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r2;
L_80230B14:
    // 0x80230B14: lh          $v1, 0x18($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X18);
    // 0x80230B18: slti        $v0, $v1, 0x1FC
    ctx->r2 = SIGNED(ctx->r3) < 0X1FC ? 1 : 0;
    // 0x80230B1C: beq         $v0, $zero, L_80230BAC
    if (ctx->r2 == 0) {
        // 0x80230B20: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_80230BAC;
    }
    // 0x80230B20: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80230B24: beq         $v1, $v0, L_80230B84
    if (ctx->r3 == ctx->r2) {
        // 0x80230B28: slti        $v0, $v1, 0x31
        ctx->r2 = SIGNED(ctx->r3) < 0X31 ? 1 : 0;
            goto L_80230B84;
    }
    // 0x80230B28: slti        $v0, $v1, 0x31
    ctx->r2 = SIGNED(ctx->r3) < 0X31 ? 1 : 0;
    // 0x80230B2C: beql        $v0, $zero, L_80230B4C
    if (ctx->r2 == 0) {
        // 0x80230B30: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80230B4C;
    }
    goto skip_0;
    // 0x80230B30: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    skip_0:
    // 0x80230B34: beq         $v1, $zero, L_80230B64
    if (ctx->r3 == 0) {
        // 0x80230B38: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80230B64;
    }
    // 0x80230B38: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230B3C: beq         $v1, $v0, L_80230B74
    if (ctx->r3 == ctx->r2) {
        // 0x80230B40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230B74;
    }
    // 0x80230B40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230B44: j           L_80230B9C
    // 0x80230B48: nop

        goto L_80230B9C;
    // 0x80230B48: nop

L_80230B4C:
    // 0x80230B4C: beq         $v1, $v0, L_80230B90
    if (ctx->r3 == ctx->r2) {
        // 0x80230B50: addiu       $v0, $zero, 0x88
        ctx->r2 = ADD32(0, 0X88);
            goto L_80230B90;
    }
    // 0x80230B50: addiu       $v0, $zero, 0x88
    ctx->r2 = ADD32(0, 0X88);
    // 0x80230B54: beq         $v1, $v0, L_80230B98
    if (ctx->r3 == ctx->r2) {
        // 0x80230B58: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80230B98;
    }
    // 0x80230B58: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230B5C: j           L_80230B9C
    // 0x80230B60: nop

        goto L_80230B9C;
    // 0x80230B60: nop

L_80230B64:
    // 0x80230B64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230B68: sh          $v0, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = ctx->r2;
    // 0x80230B6C: j           L_80230B9C
    // 0x80230B70: sh          $v0, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = ctx->r2;
        goto L_80230B9C;
    // 0x80230B70: sh          $v0, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = ctx->r2;
L_80230B74:
    // 0x80230B74: sh          $zero, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = 0;
    // 0x80230B78: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
    // 0x80230B7C: j           L_80230B9C
    // 0x80230B80: sb          $v0, 0xC($t0)
    MEM_B(0XC, ctx->r8) = ctx->r2;
        goto L_80230B9C;
    // 0x80230B80: sb          $v0, 0xC($t0)
    MEM_B(0XC, ctx->r8) = ctx->r2;
L_80230B84:
    // 0x80230B84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230B88: j           L_80230B9C
    // 0x80230B8C: sh          $v0, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = ctx->r2;
        goto L_80230B9C;
    // 0x80230B8C: sh          $v0, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = ctx->r2;
L_80230B90:
    // 0x80230B90: j           L_80230B9C
    // 0x80230B94: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
        goto L_80230B9C;
    // 0x80230B94: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
L_80230B98:
    // 0x80230B98: sh          $v0, 0x50($t0)
    MEM_H(0X50, ctx->r8) = ctx->r2;
L_80230B9C:
    // 0x80230B9C: lhu         $v0, 0x18($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X18);
    // 0x80230BA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230BA4: j           L_80230BC8
    // 0x80230BA8: sh          $v0, 0x18($t1)
    MEM_H(0X18, ctx->r9) = ctx->r2;
        goto L_80230BC8;
    // 0x80230BA8: sh          $v0, 0x18($t1)
    MEM_H(0X18, ctx->r9) = ctx->r2;
L_80230BAC:
    // 0x80230BAC: sh          $zero, 0x18($t1)
    MEM_H(0X18, ctx->r9) = 0;
    // 0x80230BB0: lbu         $v0, 0x9($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X9);
    // 0x80230BB4: sh          $zero, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = 0;
    // 0x80230BB8: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
    // 0x80230BBC: sh          $zero, 0x50($t0)
    MEM_H(0X50, ctx->r8) = 0;
    // 0x80230BC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230BC4: sb          $v0, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r2;
L_80230BC8:
    // 0x80230BC8: lhu         $v0, 0x44($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X44);
    // 0x80230BCC: lhu         $a1, 0x4C($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X4C);
    // 0x80230BD0: lhu         $v1, 0x46($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X46);
    // 0x80230BD4: lhu         $a2, 0x4E($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X4E);
    // 0x80230BD8: lhu         $a0, 0x48($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X48);
    // 0x80230BDC: lhu         $a3, 0x50($t0)
    ctx->r7 = MEM_HU(ctx->r8, 0X50);
    // 0x80230BE0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80230BE4: sh          $v0, 0x44($t0)
    MEM_H(0X44, ctx->r8) = ctx->r2;
    // 0x80230BE8: lhu         $v0, 0x14($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X14);
    // 0x80230BEC: lhu         $a1, 0x44($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X44);
    // 0x80230BF0: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80230BF4: sh          $v1, 0x46($t0)
    MEM_H(0X46, ctx->r8) = ctx->r3;
    // 0x80230BF8: lhu         $v1, 0x16($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X16);
    // 0x80230BFC: lhu         $a2, 0x46($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X46);
    // 0x80230C00: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80230C04: sh          $a0, 0x48($t0)
    MEM_H(0X48, ctx->r8) = ctx->r4;
    // 0x80230C08: lhu         $a0, 0x18($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X18);
    // 0x80230C0C: lhu         $a3, 0x48($t0)
    ctx->r7 = MEM_HU(ctx->r8, 0X48);
    // 0x80230C10: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80230C14: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80230C18: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80230C1C: sh          $v0, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r2;
    // 0x80230C20: sh          $v1, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r3;
    // 0x80230C24: sh          $a0, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r4;
    // 0x80230C28: lhu         $v0, 0x14($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X14);
    // 0x80230C2C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80230C30: beq         $v0, $zero, L_80230C58
    if (ctx->r2 == 0) {
        // 0x80230C34: addiu       $v0, $zero, -0x1000
        ctx->r2 = ADD32(0, -0X1000);
            goto L_80230C58;
    }
    // 0x80230C34: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80230C38: sh          $v0, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r2;
    // 0x80230C3C: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x80230C40: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x80230C44: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80230C48: sh          $v0, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r2;
    // 0x80230C4C: lhu         $v0, 0x14($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X14);
    // 0x80230C50: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80230C54: sh          $v0, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r2;
L_80230C58:
    // 0x80230C58: lh          $v0, 0x14($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X14);
    // 0x80230C5C: lh          $v1, 0x16($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X16);
    // 0x80230C60: lh          $a0, 0x18($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X18);
    // 0x80230C64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230C68: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80230C6C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80230C70: sw          $v0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r2;
    // 0x80230C74: sw          $v1, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r3;
    // 0x80230C78: jr          $ra
    // 0x80230C7C: sw          $a0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80230C7C: sw          $a0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r4;
;}
RECOMP_FUNC void func_80233C90_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233C94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233C9C: jal         0x8004F144
    // 0x80233CA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80233CA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80233CA4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233CA8: beq         $v1, $zero, L_80233CDC
    if (ctx->r3 == 0) {
        // 0x80233CAC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80233CDC;
    }
    // 0x80233CAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233CB0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80233CB4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233CB8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80233CBC: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80233CC0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80233CC4: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80233CC8: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x80233CCC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80233CD0: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x80233CD4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80233CD8: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_80233CDC:
    // 0x80233CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233CE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233CE4: jr          $ra
    // 0x80233CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227640_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227640: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227644: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227648: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022764C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80227650: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80227654: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227658: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022765C: jal         0x8009A3B4
    // 0x80227660: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80227660: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80227664: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80227668: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022766C: jal         0x8009A3B4
    // 0x80227670: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80227670: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80227674: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80227678: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8022767C: jal         0x8009A3B4
    // 0x80227680: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80227680: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80227684: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80227688: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022768C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x80227690: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80227694: beq         $v0, $zero, L_80227810
    if (ctx->r2 == 0) {
        // 0x80227698: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80227810;
    }
    // 0x80227698: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022769C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802276A0: addu        $at, $at, $v0
    gpr jr_addend_802276A8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802276A4: lw          $v0, 0xCA8($at)
    ctx->r2 = ADD32(ctx->r1, 0XCA8);
    // 0x802276A8: jr          $v0
    // 0x802276AC: nop

    switch (jr_addend_802276A8 >> 2) {
        case 0: goto L_802276B0; break;
        case 1: goto L_80227718; break;
        case 2: goto L_80227798; break;
        case 3: goto L_802277B8; break;
        case 4: goto L_80227810; break;
        default: switch_error(__func__, 0x802276A8, 0x80240CA8);
    }
    // 0x802276AC: nop

L_802276B0:
    // 0x802276B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802276B4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802276B8: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x802276BC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802276C0: sb          $s0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r16;
    // 0x802276C4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802276C8: jal         0x8004D5D4
    // 0x802276CC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x802276CC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_3:
    // 0x802276D0: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x802276D4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802276D8: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x802276DC: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x802276E0: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x802276E4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802276E8: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    // 0x802276EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802276F0: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x802276F4: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
    // 0x802276F8: sw          $zero, 0x78($s1)
    MEM_W(0X78, ctx->r17) = 0;
    // 0x802276FC: sb          $zero, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = 0;
    // 0x80227700: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80227704: sb          $s0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r16;
    // 0x80227708: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x8022770C: sb          $zero, 0xF($s1)
    MEM_B(0XF, ctx->r17) = 0;
    // 0x80227710: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227714: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
L_80227718:
    // 0x80227718: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x8022771C: lbu         $a0, 0xE($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XE);
    // 0x80227720: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x80227724: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227728: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022772C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227730: lhu         $v0, -0x2460($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2460);
    // 0x80227734: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80227738: slti        $v1, $v1, 0x2
    ctx->r3 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022773C: sb          $a0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r4;
    // 0x80227740: addiu       $v0, $v0, -0x222
    ctx->r2 = ADD32(ctx->r2, -0X222);
    // 0x80227744: beq         $v1, $zero, L_80227774
    if (ctx->r3 == 0) {
        // 0x80227748: sh          $v0, 0x58($s1)
        MEM_H(0X58, ctx->r17) = ctx->r2;
            goto L_80227774;
    }
    // 0x80227748: sh          $v0, 0x58($s1)
    MEM_H(0X58, ctx->r17) = ctx->r2;
    // 0x8022774C: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x80227750: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80227754: addiu       $v1, $zero, 0x44
    ctx->r3 = ADD32(0, 0X44);
    // 0x80227758: bne         $v0, $v1, L_80227810
    if (ctx->r2 != ctx->r3) {
        // 0x8022775C: nop
    
            goto L_80227810;
    }
    // 0x8022775C: nop

    // 0x80227760: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80227764: sb          $zero, 0xE($s1)
    MEM_B(0XE, ctx->r17) = 0;
    // 0x80227768: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022776C: j           L_80227810
    // 0x80227770: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
        goto L_80227810;
    // 0x80227770: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_80227774:
    // 0x80227774: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x80227778: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022777C: addiu       $v1, $zero, 0x67
    ctx->r3 = ADD32(0, 0X67);
    // 0x80227780: bne         $v0, $v1, L_80227810
    if (ctx->r2 != ctx->r3) {
        // 0x80227784: nop
    
            goto L_80227810;
    }
    // 0x80227784: nop

    // 0x80227788: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022778C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227790: j           L_80227810
    // 0x80227794: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_80227810;
    // 0x80227794: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80227798:
    // 0x80227798: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022779C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802277A0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802277A4: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x802277A8: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    // 0x802277AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802277B0: j           L_80227810
    // 0x802277B4: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
        goto L_80227810;
    // 0x802277B4: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
L_802277B8:
    // 0x802277B8: lbu         $v1, 0xA4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA4);
    // 0x802277BC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802277C0: bne         $v1, $v0, L_80227810
    if (ctx->r3 != ctx->r2) {
        // 0x802277C4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227810;
    }
    // 0x802277C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802277C8: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x802277CC: jal         0x8004D5D4
    // 0x802277D0: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_4;
    // 0x802277D0: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    after_4:
    // 0x802277D4: lbu         $a0, 0x8($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X8);
    // 0x802277D8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802277DC: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x802277E0: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x802277E4: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x802277E8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802277EC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802277F0: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    // 0x802277F4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802277F8: sw          $zero, 0x78($s1)
    MEM_W(0X78, ctx->r17) = 0;
    // 0x802277FC: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    // 0x80227800: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x80227804: sb          $v1, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r3;
    // 0x80227808: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022780C: sb          $a0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r4;
L_80227810:
    // 0x80227810: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80227814: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80227818: beq         $a1, $v0, L_80227854
    if (ctx->r5 == ctx->r2) {
        // 0x8022781C: nop
    
            goto L_80227854;
    }
    // 0x8022781C: nop

    // 0x80227820: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80227824: bne         $v0, $zero, L_80227840
    if (ctx->r2 != 0) {
        // 0x80227828: nop
    
            goto L_80227840;
    }
    // 0x80227828: nop

    // 0x8022782C: lb          $a2, 0xC($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XC);
    // 0x80227830: jal         0x80050294
    // 0x80227834: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80227834: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80227838: j           L_80227880
    // 0x8022783C: nop

        goto L_80227880;
    // 0x8022783C: nop

L_80227840:
    // 0x80227840: lb          $a2, 0xC($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XC);
    // 0x80227844: jal         0x800502EC
    // 0x80227848: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_6;
    // 0x80227848: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8022784C: j           L_80227878
    // 0x80227850: nop

        goto L_80227878;
    // 0x80227850: nop

L_80227854:
    // 0x80227854: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80227858: bne         $v0, $zero, L_80227870
    if (ctx->r2 != 0) {
        // 0x8022785C: nop
    
            goto L_80227870;
    }
    // 0x8022785C: nop

    // 0x80227860: jal         0x8005044C
    // 0x80227864: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x80227864: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80227868: j           L_80227880
    // 0x8022786C: nop

        goto L_80227880;
    // 0x8022786C: nop

L_80227870:
    // 0x80227870: jal         0x800504EC
    // 0x80227874: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_8;
    // 0x80227874: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
L_80227878:
    // 0x80227878: jal         0x8005129C
    // 0x8022787C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_9;
    // 0x8022787C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
L_80227880:
    // 0x80227880: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227884: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227888: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022788C: jr          $ra
    // 0x80227890: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227890: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80227894: nop

    // 0x80227898: nop

    // 0x8022789C: nop

;}
RECOMP_FUNC void func_80227D58_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227D5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227D60: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80227D64: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227D68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227D6C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227D70: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227D74: beq         $v0, $zero, L_80227D84
    if (ctx->r2 == 0) {
        // 0x80227D78: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_80227D84;
    }
    // 0x80227D78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227D7C: jal         0x80228E6C
    // 0x80227D80: nop

    func_80228E6C_ovl25(rdram, ctx);
        goto after_0;
    // 0x80227D80: nop

    after_0:
L_80227D84:
    // 0x80227D84: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227D88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227D8C: beq         $v1, $v0, L_80227DE0
    if (ctx->r3 == ctx->r2) {
        // 0x80227D90: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80227DE0;
    }
    // 0x80227D90: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227D94: beql        $v0, $zero, L_80227DAC
    if (ctx->r2 == 0) {
        // 0x80227D98: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227DAC;
    }
    goto skip_0;
    // 0x80227D98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227D9C: beq         $v1, $zero, L_80227DBC
    if (ctx->r3 == 0) {
        // 0x80227DA0: nop
    
            goto L_80227DBC;
    }
    // 0x80227DA0: nop

    // 0x80227DA4: j           L_80227E40
    // 0x80227DA8: nop

        goto L_80227E40;
    // 0x80227DA8: nop

L_80227DAC:
    // 0x80227DAC: beq         $v1, $v0, L_80227E30
    if (ctx->r3 == ctx->r2) {
        // 0x80227DB0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80227E30;
    }
    // 0x80227DB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227DB4: j           L_80227E40
    // 0x80227DB8: nop

        goto L_80227E40;
    // 0x80227DB8: nop

L_80227DBC:
    // 0x80227DBC: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x80227DC0: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x80227DC4: bne         $v0, $zero, L_80227E3C
    if (ctx->r2 != 0) {
        // 0x80227DC8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227E3C;
    }
    // 0x80227DC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227DCC: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x80227DD0: beq         $v0, $zero, L_80227E40
    if (ctx->r2 == 0) {
        // 0x80227DD4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227E40;
    }
    // 0x80227DD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227DD8: j           L_80227E40
    // 0x80227DDC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80227E40;
    // 0x80227DDC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227DE0:
    // 0x80227DE0: lhu         $a0, 0x4($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X4);
    // 0x80227DE4: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x80227DE8: beq         $v0, $zero, L_80227DFC
    if (ctx->r2 == 0) {
        // 0x80227DEC: andi        $v0, $a0, 0xFFFB
        ctx->r2 = ctx->r4 & 0XFFFB;
            goto L_80227DFC;
    }
    // 0x80227DEC: andi        $v0, $a0, 0xFFFB
    ctx->r2 = ctx->r4 & 0XFFFB;
    // 0x80227DF0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80227DF4:
    // 0x80227DF4: j           L_80227E40
    // 0x80227DF8: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
        goto L_80227E40;
    // 0x80227DF8: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_80227DFC:
    // 0x80227DFC: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x80227E00: bne         $v0, $zero, L_80227E3C
    if (ctx->r2 != 0) {
        // 0x80227E04: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227E3C;
    }
    // 0x80227E04: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227E08: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80227E0C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227E10: bne         $v1, $v0, L_80227E40
    if (ctx->r3 != ctx->r2) {
        // 0x80227E14: andi        $v0, $a0, 0x4
        ctx->r2 = ctx->r4 & 0X4;
            goto L_80227E40;
    }
    // 0x80227E14: andi        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 & 0X4;
    // 0x80227E18: beq         $v0, $zero, L_80227DF4
    if (ctx->r2 == 0) {
        // 0x80227E1C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227DF4;
    }
    // 0x80227E1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E20: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227E24: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227E28: j           L_80227E40
    // 0x80227E2C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
        goto L_80227E40;
    // 0x80227E2C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
L_80227E30:
    // 0x80227E30: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80227E34: bne         $v1, $v0, L_80227E40
    if (ctx->r3 != ctx->r2) {
        // 0x80227E38: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227E40;
    }
    // 0x80227E38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80227E3C:
    // 0x80227E3C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227E40:
    // 0x80227E40: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227E44: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227E48: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227E4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227E50: lw          $v0, -0x2374($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2374);
    // 0x80227E54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227E58: jalr        $v0
    // 0x80227E5C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80227E5C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80227E60: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227E64: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80227E68: beq         $v0, $zero, L_80227EB0
    if (ctx->r2 == 0) {
        // 0x80227E6C: nop
    
            goto L_80227EB0;
    }
    // 0x80227E6C: nop

    // 0x80227E70: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80227E74: beq         $v1, $zero, L_80227E8C
    if (ctx->r3 == 0) {
        // 0x80227E78: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227E8C;
    }
    // 0x80227E78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E7C: beq         $v1, $v0, L_80227E98
    if (ctx->r3 == ctx->r2) {
        // 0x80227E80: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227E98;
    }
    // 0x80227E80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227E84: j           L_80227EA4
    // 0x80227E88: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80227EA4;
    // 0x80227E88: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80227E8C:
    // 0x80227E8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E90: j           L_80227EA0
    // 0x80227E94: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227EA0;
    // 0x80227E94: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227E98:
    // 0x80227E98: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227E9C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80227EA0:
    // 0x80227EA0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80227EA4:
    // 0x80227EA4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227EA8: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80227EAC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80227EB0:
    // 0x80227EB0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227EB4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227EB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227EBC: jr          $ra
    // 0x80227EC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227EC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802349A0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802349A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802349A4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802349A8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x802349AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802349B0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802349B4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802349B8: lui         $s3, 0x2E80
    ctx->r19 = S32(0X2E80 << 16);
    // 0x802349BC: ori         $s3, $s3, 0xC080
    ctx->r19 = ctx->r19 | 0XC080;
    // 0x802349C0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802349C4: lui         $s2, 0x3D48
    ctx->r18 = S32(0X3D48 << 16);
    // 0x802349C8: ori         $s2, $s2, 0x2080
    ctx->r18 = ctx->r18 | 0X2080;
    // 0x802349CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802349D0: lui         $s1, 0x2E
    ctx->r17 = S32(0X2E << 16);
    // 0x802349D4: ori         $s1, $s1, 0x209F
    ctx->r17 = ctx->r17 | 0X209F;
    // 0x802349D8: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x802349DC: addiu       $s7, $zero, 0x3F80
    ctx->r23 = ADD32(0, 0X3F80);
    // 0x802349E0: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x802349E4: addiu       $s6, $zero, 0x3F9F
    ctx->r22 = ADD32(0, 0X3F9F);
    // 0x802349E8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x802349EC: addiu       $s5, $zero, 0xC0
    ctx->r21 = ADD32(0, 0XC0);
    // 0x802349F0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
L_802349F4:
    // 0x802349F4: jal         0x8003B878
    // 0x802349F8: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x802349F8: nop

    after_0:
    // 0x802349FC: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x80234A00: sll         $a0, $a1, 3
    ctx->r4 = S32(ctx->r5 << 3);
    // 0x80234A04: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x80234A08: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x80234A0C: lw          $v1, 0xD8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD8);
    // 0x80234A10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80234A14: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80234A18: lw          $a0, 0xDC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XDC);
    // 0x80234A1C: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x80234A20: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80234A24: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80234A28: subu        $v1, $s5, $v1
    ctx->r3 = SUB32(ctx->r21, ctx->r3);
    // 0x80234A2C: sw          $s2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r18;
    // 0x80234A30: sw          $s1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r17;
    // 0x80234A34: sw          $s7, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r23;
    // 0x80234A38: sw          $s6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r22;
    // 0x80234A3C: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x80234A40: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x80234A44: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x80234A48: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x80234A4C: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x80234A50: bne         $v0, $zero, L_802349F4
    if (ctx->r2 != 0) {
        // 0x80234A54: nop
    
            goto L_802349F4;
    }
    // 0x80234A54: nop

    // 0x80234A58: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80234A5C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80234A60: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80234A64: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80234A68: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80234A6C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80234A70: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80234A74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234A78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234A7C: jr          $ra
    // 0x80234A80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80234A80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022F374_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F378: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F37C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F380: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F384: addiu       $a1, $s0, 0x4F0
    ctx->r5 = ADD32(ctx->r16, 0X4F0);
    // 0x8022F388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F38C: jal         0x8009A3B4
    // 0x8022F390: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F390: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022F394: lhu         $a2, 0x4F8($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X4F8);
    // 0x8022F398: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022F39C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022F3A0: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8022F3A4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F3A8: sh          $v0, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = ctx->r2;
    // 0x8022F3AC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022F3B0: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x8022F3B4: sh          $zero, 0x4E6($s0)
    MEM_H(0X4E6, ctx->r16) = 0;
    // 0x8022F3B8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F3BC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022F3C0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F3C4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022F3C8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022F3CC: sh          $a2, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r6;
    // 0x8022F3D0: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8022F3D4: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8022F3D8: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x8022F3DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F3E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F3E4: jr          $ra
    // 0x8022F3E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F3E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C194_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023C198: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C19C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023C1A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023C1A4: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8023C1A8: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8023C1AC: beq         $v0, $zero, L_8023C358
    if (ctx->r2 == 0) {
        // 0x8023C1B0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023C358;
    }
    // 0x8023C1B0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023C1B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C1B8: addu        $at, $at, $v0
    gpr jr_addend_8023C1C0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C1BC: lw          $v0, 0x1150($at)
    ctx->r2 = ADD32(ctx->r1, 0X1150);
    // 0x8023C1C0: jr          $v0
    // 0x8023C1C4: nop

    switch (jr_addend_8023C1C0 >> 2) {
        case 0: goto L_8023C1C8; break;
        case 1: goto L_8023C238; break;
        case 2: goto L_8023C268; break;
        case 3: goto L_8023C28C; break;
        case 4: goto L_8023C2A4; break;
        case 5: goto L_8023C2B8; break;
        case 6: goto L_8023C2FC; break;
        case 7: goto L_8023C328; break;
        default: switch_error(__func__, 0x8023C1C0, 0x80241150);
    }
    // 0x8023C1C4: nop

L_8023C1C8:
    // 0x8023C1C8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023C1CC: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8023C1D0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023C1D4: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x8023C1D8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8023C1DC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023C1E0: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8023C1E4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023C1E8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8023C1EC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023C1F0: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8023C1F4: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x8023C1F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C1FC: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x8023C200: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x8023C204: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x8023C208: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x8023C20C: addiu       $v0, $zero, -0x2800
    ctx->r2 = ADD32(0, -0X2800);
    // 0x8023C210: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x8023C214: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023C218: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8023C21C: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x8023C220: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8023C224: lui         $v0, 0xD800
    ctx->r2 = S32(0XD800 << 16);
    // 0x8023C228: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x8023C22C: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8023C230: j           L_8023C2EC
    // 0x8023C234: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
        goto L_8023C2EC;
    // 0x8023C234: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
L_8023C238:
    // 0x8023C238: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023C23C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8023C240: bne         $v1, $v0, L_8023C358
    if (ctx->r3 != ctx->r2) {
        // 0x8023C244: addiu       $a0, $zero, 0xE
        ctx->r4 = ADD32(0, 0XE);
            goto L_8023C358;
    }
    // 0x8023C244: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8023C248: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023C24C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8023C250: jal         0x80036E48
    // 0x8023C254: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8023C254: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023C258: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8023C25C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8023C260: j           L_8023C2F0
    // 0x8023C264: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
        goto L_8023C2F0;
    // 0x8023C264: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
L_8023C268:
    // 0x8023C268: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023C26C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023C270: bne         $v0, $zero, L_8023C358
    if (ctx->r2 != 0) {
        // 0x8023C274: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_8023C358;
    }
    // 0x8023C274: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8023C278: jal         0x8004CB2C
    // 0x8023C27C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x8023C27C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_1:
    // 0x8023C280: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8023C284: j           L_8023C2F0
    // 0x8023C288: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
        goto L_8023C2F0;
    // 0x8023C288: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
L_8023C28C:
    // 0x8023C28C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8023C290: slti        $v0, $v0, 0xB4
    ctx->r2 = SIGNED(ctx->r2) < 0XB4 ? 1 : 0;
    // 0x8023C294: beq         $v0, $zero, L_8023C2EC
    if (ctx->r2 == 0) {
        // 0x8023C298: nop
    
            goto L_8023C2EC;
    }
    // 0x8023C298: nop

    // 0x8023C29C: j           L_8023C358
    // 0x8023C2A0: nop

        goto L_8023C358;
    // 0x8023C2A0: nop

L_8023C2A4:
    // 0x8023C2A4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x8023C2A8: jal         0x80036340
    // 0x8023C2AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80036340_11740(rdram, ctx);
        goto after_2;
    // 0x8023C2AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8023C2B0: j           L_8023C2EC
    // 0x8023C2B4: nop

        goto L_8023C2EC;
    // 0x8023C2B4: nop

L_8023C2B8:
    // 0x8023C2B8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023C2BC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023C2C0: beq         $v0, $zero, L_8023C2E4
    if (ctx->r2 == 0) {
        // 0x8023C2C4: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_8023C2E4;
    }
    // 0x8023C2C4: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x8023C2C8: jal         0x80036E48
    // 0x8023C2CC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x8023C2CC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x8023C2D0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023C2D4: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x8023C2D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C2DC: j           L_8023C358
    // 0x8023C2E0: sb          $zero, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = 0;
        goto L_8023C358;
    // 0x8023C2E0: sb          $zero, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = 0;
L_8023C2E4:
    // 0x8023C2E4: jal         0x80036B1C
    // 0x8023C2E8: ori         $a0, $a0, 0x4D01
    ctx->r4 = ctx->r4 | 0X4D01;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_4;
    // 0x8023C2E8: ori         $a0, $a0, 0x4D01
    ctx->r4 = ctx->r4 | 0X4D01;
    after_4:
L_8023C2EC:
    // 0x8023C2EC: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
L_8023C2F0:
    // 0x8023C2F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C2F4: j           L_8023C358
    // 0x8023C2F8: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_8023C358;
    // 0x8023C2F8: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_8023C2FC:
    // 0x8023C2FC: jal         0x80036B7C
    // 0x8023C300: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_5;
    // 0x8023C300: nop

    after_5:
    // 0x8023C304: beq         $v0, $zero, L_8023C358
    if (ctx->r2 == 0) {
        // 0x8023C308: nop
    
            goto L_8023C358;
    }
    // 0x8023C308: nop

    // 0x8023C30C: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x8023C310: jal         0x80036E48
    // 0x8023C314: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x8023C314: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_6:
    // 0x8023C318: jal         0x800600F8
    // 0x8023C31C: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_7;
    // 0x8023C31C: nop

    after_7:
    // 0x8023C320: j           L_8023C358
    // 0x8023C324: nop

        goto L_8023C358;
    // 0x8023C324: nop

L_8023C328:
    // 0x8023C328: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023C32C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023C330: bne         $v0, $zero, L_8023C358
    if (ctx->r2 != 0) {
        // 0x8023C334: nop
    
            goto L_8023C358;
    }
    // 0x8023C334: nop

    // 0x8023C338: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8023C33C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8023C340: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x8023C344: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C348: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8023C34C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023C350: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C354: sb          $v0, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = ctx->r2;
L_8023C358:
    // 0x8023C358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023C35C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C360: jr          $ra
    // 0x8023C364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023C364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802303D0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802303D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802303D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802303D8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802303DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802303E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802303E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802303E8: lw          $v0, -0x1530($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1530);
    // 0x802303EC: jalr        $v0
    // 0x802303F0: addiu       $a1, $a0, 0x3C0
    ctx->r5 = ADD32(ctx->r4, 0X3C0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802303F0: addiu       $a1, $a0, 0x3C0
    ctx->r5 = ADD32(ctx->r4, 0X3C0);
    after_0:
    // 0x802303F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802303F8: jr          $ra
    // 0x802303FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802303FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022671C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022671C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226720: lhu         $v0, -0x3BBA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BBA);
    // 0x80226724: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226728: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022672C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x80226730: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80226734: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80226738: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022673C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226740: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226744: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x80226748: sra         $v1, $a2, 16
    ctx->r3 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022674C: bgez        $v1, L_80226758
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80226750: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80226758;
    }
    // 0x80226750: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80226754: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_80226758:
    // 0x80226758: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022675C: lh          $a1, -0x3BBC($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3BBC);
    // 0x80226760: sra         $a0, $v0, 2
    ctx->r4 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80226764: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80226768: bne         $v0, $zero, L_80226778
    if (ctx->r2 != 0) {
        // 0x8022676C: srl         $v0, $a2, 31
        ctx->r2 = S32(U32(ctx->r6) >> 31);
            goto L_80226778;
    }
    // 0x8022676C: srl         $v0, $a2, 31
    ctx->r2 = S32(U32(ctx->r6) >> 31);
    // 0x80226770: j           L_802267A0
    // 0x80226774: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802267A0;
    // 0x80226774: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80226778:
    // 0x80226778: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022677C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80226780: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80226784: bne         $v0, $zero, L_80226794
    if (ctx->r2 != 0) {
        // 0x80226788: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_80226794;
    }
    // 0x80226788: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022678C: j           L_802267A0
    // 0x80226790: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802267A0;
    // 0x80226790: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80226794:
    // 0x80226794: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80226798: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022679C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_802267A0:
    // 0x802267A0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802267A4: beq         $v0, $zero, L_80226820
    if (ctx->r2 == 0) {
        // 0x802267A8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80226820;
    }
    // 0x802267A8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802267AC: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x802267B0: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_802267B4:
    // 0x802267B4: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x802267B8: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x802267BC: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x802267C0: beq         $v0, $zero, L_802267F0
    if (ctx->r2 == 0) {
        // 0x802267C4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_802267F0;
    }
    // 0x802267C4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802267C8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x802267CC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_802267D0:
    // 0x802267D0: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x802267D4: jal         0x80226C60
    // 0x802267D8: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_80226C60_ovl25(rdram, ctx);
        goto after_0;
    // 0x802267D8: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x802267DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802267E0: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x802267E4: sltu        $v0, $v0, $s2
    ctx->r2 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x802267E8: bne         $v0, $zero, L_802267D0
    if (ctx->r2 != 0) {
        // 0x802267EC: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_802267D0;
    }
    // 0x802267EC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_802267F0:
    // 0x802267F0: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x802267F4: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x802267F8: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x802267FC: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x80226800: beq         $v0, $zero, L_8022680C
    if (ctx->r2 == 0) {
        // 0x80226804: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022680C;
    }
    // 0x80226804: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80226808: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_8022680C:
    // 0x8022680C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80226810: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80226814: sltu        $v0, $v0, $s4
    ctx->r2 = ctx->r2 < ctx->r20 ? 1 : 0;
    // 0x80226818: bne         $v0, $zero, L_802267B4
    if (ctx->r2 != 0) {
        // 0x8022681C: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_802267B4;
    }
    // 0x8022681C: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_80226820:
    // 0x80226820: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80226824: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80226828: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022682C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226830: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226834: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226838: jr          $ra
    // 0x8022683C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022683C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022F4F0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F4F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022F4F4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022F4F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F4FC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8022F500: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F504: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022F508: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8022F50C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8022F510: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8022F514: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022F518: jal         0x80050294
    // 0x8022F51C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022F51C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022F520: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x8022F524: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x8022F528: sh          $v0, 0x4E2($s1)
    MEM_H(0X4E2, ctx->r17) = ctx->r2;
    // 0x8022F52C: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
    // 0x8022F530: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022F534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F538: sh          $zero, 0x4E4($s1)
    MEM_H(0X4E4, ctx->r17) = 0;
    // 0x8022F53C: jal         0x8002A46C
    // 0x8022F540: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    func_8002A46C_586C(rdram, ctx);
        goto after_1;
    // 0x8022F540: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022F544: jal         0x8002A46C
    // 0x8022F548: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_8002A46C_586C(rdram, ctx);
        goto after_2;
    // 0x8022F548: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_2:
    // 0x8022F54C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8022F550: addiu       $s4, $sp, 0x18
    ctx->r20 = ADD32(ctx->r29, 0X18);
    // 0x8022F554: addiu       $s5, $zero, -0x8
    ctx->r21 = ADD32(0, -0X8);
    // 0x8022F558: addiu       $v0, $s1, 0x4E0
    ctx->r2 = ADD32(ctx->r17, 0X4E0);
    // 0x8022F55C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022F560: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8022F564:
    // 0x8022F564: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022F568: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022F56C: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8022F570: lbu         $a1, -0x1680($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1680);
    // 0x8022F574: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F578: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022F57C: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8022F580: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x8022F584: jal         0x8009A3B4
    // 0x8022F588: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022F588: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_3:
    // 0x8022F58C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022F590: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8022F594: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022F598: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8022F59C: lbu         $v1, -0x167F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X167F);
    // 0x8022F5A0: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x8022F5A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F5A8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8022F5AC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8022F5B0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022F5B4: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8022F5B8: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x8022F5BC: jal         0x80229A38
    // 0x8022F5C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80229A38_ovl25(rdram, ctx);
        goto after_4;
    // 0x8022F5C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_4:
    // 0x8022F5C4: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x8022F5C8: sltiu       $v0, $s3, 0x4
    ctx->r2 = ctx->r19 < 0X4 ? 1 : 0;
    // 0x8022F5CC: bne         $v0, $zero, L_8022F564
    if (ctx->r2 != 0) {
        // 0x8022F5D0: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_8022F564;
    }
    // 0x8022F5D0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8022F5D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F5D8: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022F5DC: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022F5E0: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022F5E4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8022F5E8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8022F5EC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F5F0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022F5F4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022F5F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022F5FC: jr          $ra
    // 0x8022F600: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022F600: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80238170_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238174: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238178: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8023817C: bne         $v0, $zero, L_8023821C
    if (ctx->r2 != 0) {
        // 0x80238180: nop
    
            goto L_8023821C;
    }
    // 0x80238180: nop

    // 0x80238184: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80238188: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8023818C: bne         $v0, $zero, L_80238238
    if (ctx->r2 != 0) {
        // 0x80238190: nop
    
            goto L_80238238;
    }
    // 0x80238190: nop

    // 0x80238194: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80238198: sh          $zero, -0x3AA4($at)
    MEM_H(-0X3AA4, ctx->r1) = 0;
    // 0x8023819C: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x802381A0: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x802381A4: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    // 0x802381A8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x802381AC: lbu         $v1, -0x359C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X359C);
    // 0x802381B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802381B4: beq         $v1, $v0, L_802381E8
    if (ctx->r3 == ctx->r2) {
        // 0x802381B8: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_802381E8;
    }
    // 0x802381B8: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x802381BC: beq         $v0, $zero, L_802381D4
    if (ctx->r2 == 0) {
        // 0x802381C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802381D4;
    }
    // 0x802381C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802381C4: beql        $v1, $v0, L_80238204
    if (ctx->r3 == ctx->r2) {
        // 0x802381C8: sb          $zero, 0x3($a0)
        MEM_B(0X3, ctx->r4) = 0;
            goto L_80238204;
    }
    goto skip_0;
    // 0x802381C8: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    skip_0:
    // 0x802381CC: j           L_802381FC
    // 0x802381D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802381FC;
    // 0x802381D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802381D4:
    // 0x802381D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802381D8: beq         $v1, $v0, L_802381F4
    if (ctx->r3 == ctx->r2) {
        // 0x802381DC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802381F4;
    }
    // 0x802381DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802381E0: j           L_802381FC
    // 0x802381E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802381FC;
    // 0x802381E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802381E8:
    // 0x802381E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802381EC: j           L_80238204
    // 0x802381F0: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
        goto L_80238204;
    // 0x802381F0: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_802381F4:
    // 0x802381F4: j           L_80238204
    // 0x802381F8: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
        goto L_80238204;
    // 0x802381F8: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_802381FC:
    // 0x802381FC: j           L_80238238
    // 0x80238200: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
        goto L_80238238;
    // 0x80238200: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80238204:
    // 0x80238204: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80238208: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x8023820C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80238210: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x80238214: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238218: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8023821C:
    // 0x8023821C: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80238220: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238224: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238228: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023822C: lw          $v0, -0xCA0($at)
    ctx->r2 = MEM_W(ctx->r1, -0XCA0);
    // 0x80238230: jalr        $v0
    // 0x80238234: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80238234: nop

    after_0:
L_80238238:
    // 0x80238238: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023823C: jr          $ra
    // 0x80238240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CA30_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CA30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CA34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CA38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CA3C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022CA40: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CA44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CA48: jal         0x8009A3B4
    // 0x8022CA4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022CA4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022CA50: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022CA54: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022CA58: jal         0x8009A3B4
    // 0x8022CA5C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022CA5C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022CA60: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022CA64: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022CA68: jal         0x8009A3B4
    // 0x8022CA6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022CA6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022CA70: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CA74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CA78: beq         $v1, $v0, L_8022CB14
    if (ctx->r3 == ctx->r2) {
        // 0x8022CA7C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022CB14;
    }
    // 0x8022CA7C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022CA80: beql        $v0, $zero, L_8022CA98
    if (ctx->r2 == 0) {
        // 0x8022CA84: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022CA98;
    }
    goto skip_0;
    // 0x8022CA84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022CA88: beq         $v1, $zero, L_8022CAA8
    if (ctx->r3 == 0) {
        // 0x8022CA8C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CAA8;
    }
    // 0x8022CA8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CA90: j           L_8022CB14
    // 0x8022CA94: nop

        goto L_8022CB14;
    // 0x8022CA94: nop

L_8022CA98:
    // 0x8022CA98: beq         $v1, $v0, L_8022CB0C
    if (ctx->r3 == ctx->r2) {
        // 0x8022CA9C: nop
    
            goto L_8022CB0C;
    }
    // 0x8022CA9C: nop

    // 0x8022CAA0: j           L_8022CB14
    // 0x8022CAA4: nop

        goto L_8022CB14;
    // 0x8022CAA4: nop

L_8022CAA8:
    // 0x8022CAA8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CAAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CAB0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022CAB4: jal         0x8004D5D4
    // 0x8022CAB8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022CAB8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022CABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CAC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022CAC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CAC8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022CACC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022CAD0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022CAD4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022CAD8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022CADC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022CAE0: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022CAE4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022CAE8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022CAEC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022CAF0: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022CAF4: jal         0x80050294
    // 0x8022CAF8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022CAF8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    after_4:
    // 0x8022CAFC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CB00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CB04: j           L_8022CB14
    // 0x8022CB08: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022CB14;
    // 0x8022CB08: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022CB0C:
    // 0x8022CB0C: jal         0x8005044C
    // 0x8022CB10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022CB10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8022CB14:
    // 0x8022CB14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CB18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CB1C: jr          $ra
    // 0x8022CB20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CB20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022CB24: nop

    // 0x8022CB28: nop

    // 0x8022CB2C: nop

;}
RECOMP_FUNC void func_80233694_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233694: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80233698: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8023369C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802336A0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802336A4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x802336A8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x802336AC: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x802336B0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802336B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802336B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802336BC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802336C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802336C4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802336C8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802336CC: jal         0x80071110
    // 0x802336D0: lbu         $a1, -0x136E($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X136E);
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x802336D0: lbu         $a1, -0x136E($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X136E);
    after_0:
    // 0x802336D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802336D8: beq         $v1, $zero, L_80233748
    if (ctx->r3 == 0) {
        // 0x802336DC: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80233748;
    }
    // 0x802336DC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x802336E0: bne         $v1, $v0, L_802339B0
    if (ctx->r3 != ctx->r2) {
        // 0x802336E4: nop
    
            goto L_802339B0;
    }
    // 0x802336E4: nop

    // 0x802336E8: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x802336EC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802336F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802336F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802336F8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802336FC: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80233700: lw          $v0, 0xC8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC8);
    // 0x80233704: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233708: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023370C: lw          $v1, -0x136C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X136C);
    // 0x80233710: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233714: beql        $v0, $zero, L_8023374C
    if (ctx->r2 == 0) {
        // 0x80233718: addiu       $a0, $s2, 0x34
        ctx->r4 = ADD32(ctx->r18, 0X34);
            goto L_8023374C;
    }
    goto skip_0;
    // 0x80233718: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    skip_0:
    // 0x8023371C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233720: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80233724: lbu         $v0, -0x1374($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1374);
    // 0x80233728: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023372C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233730: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233734: lw          $v0, -0x124C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X124C);
    // 0x80233738: jalr        $v0
    // 0x8023373C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023373C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80233740: jal         0x8004F4F8
    // 0x80233744: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80233744: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
L_80233748:
    // 0x80233748: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
L_8023374C:
    // 0x8023374C: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80233750: jal         0x8009A3B4
    // 0x80233754: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80233754: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80233758: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8023375C: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x80233760: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233764: jal         0x8009A3B4
    // 0x80233768: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80233768: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8023376C: addiu       $a0, $s2, 0xF0
    ctx->r4 = ADD32(ctx->r18, 0XF0);
    // 0x80233770: addiu       $s0, $s2, 0xE8
    ctx->r16 = ADD32(ctx->r18, 0XE8);
    // 0x80233774: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80233778: jal         0x8009A3B4
    // 0x8023377C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023377C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80233780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233784: addiu       $s0, $s2, 0xE0
    ctx->r16 = ADD32(ctx->r18, 0XE0);
    // 0x80233788: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023378C: jal         0x8009A3B4
    // 0x80233790: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80233790: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80233794: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233798: addiu       $s0, $s2, 0xD8
    ctx->r16 = ADD32(ctx->r18, 0XD8);
    // 0x8023379C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802337A0: jal         0x8009A3B4
    // 0x802337A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802337A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x802337A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802337AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802337B0: jal         0x8009A3B4
    // 0x802337B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802337B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x802337B8: lbu         $v1, 0xB($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XB);
    // 0x802337BC: addiu       $v0, $v1, 0xFF
    ctx->r2 = ADD32(ctx->r3, 0XFF);
    // 0x802337C0: beq         $v1, $zero, L_802339B0
    if (ctx->r3 == 0) {
        // 0x802337C4: sb          $v0, 0xB($s2)
        MEM_B(0XB, ctx->r18) = ctx->r2;
            goto L_802339B0;
    }
    // 0x802337C4: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x802337C8: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x802337CC: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x802337D0: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x802337D4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802337D8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x802337DC: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x802337E0: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    // 0x802337E4: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x802337E8: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x802337EC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x802337F0: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x802337F4: ori         $a1, $zero, 0xD0FC
    ctx->r5 = 0 | 0XD0FC;
    // 0x802337F8: lh          $a0, 0x4($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X4);
    // 0x802337FC: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80233800: addiu       $v1, $v1, 0x687E
    ctx->r3 = ADD32(ctx->r3, 0X687E);
    // 0x80233804: sltu        $v1, $a1, $v1
    ctx->r3 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x80233808: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8023380C: bne         $v1, $zero, L_80233830
    if (ctx->r3 != 0) {
        // 0x80233810: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_80233830;
    }
    // 0x80233810: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80233814: addiu       $v0, $a2, 0x687E
    ctx->r2 = ADD32(ctx->r6, 0X687E);
    // 0x80233818: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8023381C: bne         $v0, $zero, L_80233830
    if (ctx->r2 != 0) {
        // 0x80233820: addiu       $v0, $a0, 0x687E
        ctx->r2 = ADD32(ctx->r4, 0X687E);
            goto L_80233830;
    }
    // 0x80233820: addiu       $v0, $a0, 0x687E
    ctx->r2 = ADD32(ctx->r4, 0X687E);
    // 0x80233824: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80233828: beq         $v0, $zero, L_80233858
    if (ctx->r2 == 0) {
        // 0x8023382C: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_80233858;
    }
    // 0x8023382C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_80233830:
    // 0x80233830: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80233834: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80233838: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8023383C: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80233840: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x80233844: sra         $a0, $a0, 2
    ctx->r4 = S32(SIGNED(ctx->r4) >> 2);
    // 0x80233848: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8023384C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80233850: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80233854: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_80233858:
    // 0x80233858: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x8023385C: jal         0x80032308
    // 0x80233860: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80032308_D708(rdram, ctx);
        goto after_9;
    // 0x80233860: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80233864: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80233868: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023386C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80233870: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80233874: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233878: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023387C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80233880: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233884: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x80233888: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8023388C: lw          $a3, -0x1388($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1388);
    // 0x80233890: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233894: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233898: lw          $v0, -0x1384($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1384);
    // 0x8023389C: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x802338A0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x802338A4: jal         0x80051B48
    // 0x802338A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80051B48_2CF48(rdram, ctx);
        goto after_10;
    // 0x802338A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_10:
    // 0x802338AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802338B0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x802338B4: jal         0x8009A3B4
    // 0x802338B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x802338B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x802338BC: lh          $a0, 0x6E($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X6E);
    // 0x802338C0: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x802338C4: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802338C8: mflo        $v0
    ctx->r2 = lo;
    // 0x802338CC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802338D0: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x802338D4: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x802338D8: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802338DC: mflo        $v0
    ctx->r2 = lo;
    // 0x802338E0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802338E4: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x802338E8: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x802338EC: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802338F0: mflo        $v0
    ctx->r2 = lo;
    // 0x802338F4: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x802338F8: lh          $a0, 0x6E($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X6E);
    // 0x802338FC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80233900: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    // 0x80233904: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80233908: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023390C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233910: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80233914: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233918: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023391C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233920: lh          $v1, -0x138C($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X138C);
    // 0x80233924: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80233928: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023392C: lhu         $a1, -0x138A($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X138A);
    // 0x80233930: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80233934: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80233938: bnel        $v0, $zero, L_80233944
    if (ctx->r2 != 0) {
        // 0x8023393C: sh          $a0, 0x6E($s2)
        MEM_H(0X6E, ctx->r18) = ctx->r4;
            goto L_80233944;
    }
    goto skip_1;
    // 0x8023393C: sh          $a0, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r4;
    skip_1:
    // 0x80233940: sh          $a1, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r5;
L_80233944:
    // 0x80233944: jal         0x80233BE0
    // 0x80233948: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80233BE0_ovl25(rdram, ctx);
        goto after_12;
    // 0x80233948: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_12:
    // 0x8023394C: lh          $v0, 0x44($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X44);
    // 0x80233950: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x80233954: lh          $a0, 0x48($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X48);
    // 0x80233958: lw          $a1, 0x24($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X24);
    // 0x8023395C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80233960: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233964: lh          $v0, 0x46($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X46);
    // 0x80233968: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
    // 0x8023396C: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x80233970: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80233974: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80233978: sw          $a1, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r5;
    // 0x8023397C: lhu         $a0, 0x24($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X24);
    // 0x80233980: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80233984: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233988: lhu         $v0, 0x1C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1C);
    // 0x8023398C: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x80233990: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x80233994: sh          $a0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r4;
    // 0x80233998: sh          $a0, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r4;
    // 0x8023399C: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x802339A0: sh          $v0, 0xAC($s2)
    MEM_H(0XAC, ctx->r18) = ctx->r2;
    // 0x802339A4: sh          $v1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r3;
    // 0x802339A8: j           L_802339FC
    // 0x802339AC: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
        goto L_802339FC;
    // 0x802339AC: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
L_802339B0:
    // 0x802339B0: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x802339B4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802339B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802339BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802339C0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802339C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802339C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802339CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802339D0: lbu         $v0, -0x1374($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1374);
    // 0x802339D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802339D8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802339DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802339E0: lw          $v0, -0x124C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X124C);
    // 0x802339E4: jalr        $v0
    // 0x802339E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x802339E8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_13:
    // 0x802339EC: jal         0x8004F4F8
    // 0x802339F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_14;
    // 0x802339F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_14:
    // 0x802339F4: j           L_80233A48
    // 0x802339F8: nop

        goto L_80233A48;
    // 0x802339F8: nop

L_802339FC:
    // 0x802339FC: jal         0x80233B3C
    // 0x80233A00: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80233B3C_ovl25(rdram, ctx);
        goto after_15;
    // 0x80233A00: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_15:
    // 0x80233A04: jal         0x80233CEC
    // 0x80233A08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80233CEC_ovl25(rdram, ctx);
        goto after_16;
    // 0x80233A08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_16:
    // 0x80233A0C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80233A10: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80233A14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233A18: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233A1C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80233A20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233A24: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233A28: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233A2C: lbu         $v0, -0x1374($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1374);
    // 0x80233A30: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233A34: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233A38: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233A3C: lw          $v0, -0x1254($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1254);
    // 0x80233A40: jalr        $v0
    // 0x80233A44: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_17;
    // 0x80233A44: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_17:
L_80233A48:
    // 0x80233A48: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80233A4C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80233A50: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80233A54: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80233A58: jr          $ra
    // 0x80233A5C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80233A5C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022636C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022636C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226370: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226374: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80226378: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022637C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80226380: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226384: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80226388: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022638C: addiu       $s3, $zero, 0x1A
    ctx->r19 = ADD32(0, 0X1A);
    // 0x80226390: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
L_80226394:
    // 0x80226394: jal         0x8004F144
    // 0x80226398: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80226398: nop

    after_0:
    // 0x8022639C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802263A0: beql        $v1, $zero, L_802263C4
    if (ctx->r3 == 0) {
        // 0x802263A4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802263C4;
    }
    goto skip_0;
    // 0x802263A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x802263A8: sb          $s1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r17;
    // 0x802263AC: sb          $s3, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r19;
    // 0x802263B0: sb          $s1, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r17;
    // 0x802263B4: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
    // 0x802263B8: sb          $s0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r16;
    // 0x802263BC: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x802263C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802263C4:
    // 0x802263C4: sltiu       $v0, $s0, 0x18
    ctx->r2 = ctx->r16 < 0X18 ? 1 : 0;
    // 0x802263C8: bne         $v0, $zero, L_80226394
    if (ctx->r2 != 0) {
        // 0x802263CC: nop
    
            goto L_80226394;
    }
    // 0x802263CC: nop

    // 0x802263D0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802263D4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802263D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802263DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802263E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802263E4: jr          $ra
    // 0x802263E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802263E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802342F0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802342F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802342F4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802342F8: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x802342FC: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80234300: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80234304: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x80234308: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023430C: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80234310: sh          $v1, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r3;
    // 0x80234314: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80234318: jr          $ra
    // 0x8023431C: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8023431C: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022A1C0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A1C0: andi        $a1, $a1, 0x3FF
    ctx->r5 = ctx->r5 & 0X3FF;
    // 0x8022A1C4: jr          $ra
    // 0x8022A1C8: sh          $a1, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8022A1C8: sh          $a1, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80225560_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225564: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225568: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022556C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225570: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225574: bne         $v0, $zero, L_802255C0
    if (ctx->r2 != 0) {
        // 0x80225578: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_802255C0;
    }
    // 0x80225578: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022557C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80225580: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80225584: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80225588: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022558C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80225590: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225594: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80225598: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022559C: jal         0x8004D5D4
    // 0x802255A0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802255A0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802255A4: lbu         $a1, 0x3($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X3);
    // 0x802255A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802255AC: jal         0x80050294
    // 0x802255B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802255B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802255B4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802255B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802255BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802255C0:
    // 0x802255C0: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x802255C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802255C8: beq         $v1, $v0, L_80225610
    if (ctx->r3 == ctx->r2) {
        // 0x802255CC: nop
    
            goto L_80225610;
    }
    // 0x802255CC: nop

    // 0x802255D0: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x802255D4: beq         $v0, $zero, L_802255EC
    if (ctx->r2 == 0) {
        // 0x802255D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802255EC;
    }
    // 0x802255D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802255DC: beq         $v1, $v0, L_80225600
    if (ctx->r3 == ctx->r2) {
        // 0x802255E0: nop
    
            goto L_80225600;
    }
    // 0x802255E0: nop

    // 0x802255E4: j           L_8022562C
    // 0x802255E8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
        goto L_8022562C;
    // 0x802255E8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
L_802255EC:
    // 0x802255EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802255F0: beq         $v1, $v0, L_8022561C
    if (ctx->r3 == ctx->r2) {
        // 0x802255F4: nop
    
            goto L_8022561C;
    }
    // 0x802255F4: nop

    // 0x802255F8: j           L_8022562C
    // 0x802255FC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
        goto L_8022562C;
    // 0x802255FC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
L_80225600:
    // 0x80225600: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80225604: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225608: j           L_80225628
    // 0x8022560C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
        goto L_80225628;
    // 0x8022560C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80225610:
    // 0x80225610: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80225614: j           L_80225624
    // 0x80225618: addiu       $v0, $v0, -0x6
    ctx->r2 = ADD32(ctx->r2, -0X6);
        goto L_80225624;
    // 0x80225618: addiu       $v0, $v0, -0x6
    ctx->r2 = ADD32(ctx->r2, -0X6);
L_8022561C:
    // 0x8022561C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80225620: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_80225624:
    // 0x80225624: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_80225628:
    // 0x80225628: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
L_8022562C:
    // 0x8022562C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225630: jal         0x8009A3B4
    // 0x80225634: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80225634: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80225638: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022563C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80225640: jal         0x8009A3B4
    // 0x80225644: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80225644: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80225648: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022564C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80225650: jal         0x8009A3B4
    // 0x80225654: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80225654: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80225658: jal         0x8005044C
    // 0x8022565C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022565C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80225660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225664: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225668: jr          $ra
    // 0x8022566C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022566C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DEA4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DEA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DEA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DEAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DEB0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DEB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DEB8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DEBC: bne         $v0, $zero, L_8022DEE0
    if (ctx->r2 != 0) {
        // 0x8022DEC0: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022DEE0;
    }
    // 0x8022DEC0: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022DEC4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DEC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022DECC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DED0: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022DED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DED8: jal         0x8022E378
    // 0x8022DEDC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8022E378_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022DEDC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
L_8022DEE0:
    // 0x8022DEE0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022DEE4: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022DEE8: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x8022DEEC: beq         $v1, $v0, L_8022DF30
    if (ctx->r3 == ctx->r2) {
        // 0x8022DEF0: slti        $v0, $v1, 0x24
        ctx->r2 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
            goto L_8022DF30;
    }
    // 0x8022DEF0: slti        $v0, $v1, 0x24
    ctx->r2 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
    // 0x8022DEF4: beq         $v0, $zero, L_8022DF0C
    if (ctx->r2 == 0) {
        // 0x8022DEF8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022DF0C;
    }
    // 0x8022DEF8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022DEFC: beq         $v1, $v0, L_8022DF20
    if (ctx->r3 == ctx->r2) {
        // 0x8022DF00: nop
    
            goto L_8022DF20;
    }
    // 0x8022DF00: nop

    // 0x8022DF04: j           L_8022DF50
    // 0x8022DF08: nop

        goto L_8022DF50;
    // 0x8022DF08: nop

L_8022DF0C:
    // 0x8022DF0C: addiu       $v0, $zero, 0x122
    ctx->r2 = ADD32(0, 0X122);
    // 0x8022DF10: beq         $v1, $v0, L_8022DF40
    if (ctx->r3 == ctx->r2) {
        // 0x8022DF14: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DF40;
    }
    // 0x8022DF14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DF18: j           L_8022DF50
    // 0x8022DF1C: nop

        goto L_8022DF50;
    // 0x8022DF1C: nop

L_8022DF20:
    // 0x8022DF20: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022DF24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DF28: j           L_8022DF50
    // 0x8022DF2C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_8022DF50;
    // 0x8022DF2C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022DF30:
    // 0x8022DF30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DF34: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022DF38: j           L_8022DF48
    // 0x8022DF3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8022DF48;
    // 0x8022DF3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8022DF40:
    // 0x8022DF40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022DF44: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_8022DF48:
    // 0x8022DF48: jal         0x8022E378
    // 0x8022DF4C: nop

    func_8022E378_ovl25(rdram, ctx);
        goto after_1;
    // 0x8022DF4C: nop

    after_1:
L_8022DF50:
    // 0x8022DF50: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DF54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DF58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DF5C: jr          $ra
    // 0x8022DF60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DF60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023BA50_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BA50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023BA54: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023BA58: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8023BA5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023BA60: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023BA64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023BA68: lw          $v0, 0x7F8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7F8);
    // 0x8023BA6C: jalr        $v0
    // 0x8023BA70: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023BA70: nop

    after_0:
    // 0x8023BA74: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023BA78: jr          $ra
    // 0x8023BA7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023BA7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A3DC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A3DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A3E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A3E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A3E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A3EC: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8023A3F0: bne         $v0, $zero, L_8023A41C
    if (ctx->r2 != 0) {
        // 0x8023A3F4: nop
    
            goto L_8023A41C;
    }
    // 0x8023A3F4: nop

    // 0x8023A3F8: jal         0x8004F488
    // 0x8023A3FC: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8023A3FC: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_0:
    // 0x8023A400: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x8023A404: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023A408: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A40C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023A410: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023A414: jal         0x8023A980
    // 0x8023A418: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8023A980_ovl25(rdram, ctx);
        goto after_1;
    // 0x8023A418: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_1:
L_8023A41C:
    // 0x8023A41C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A420: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A424: jr          $ra
    // 0x8023A428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233BE0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233BE0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80233BE4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80233BE8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233BEC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80233BF0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80233BF4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80233BF8: lh          $s2, 0x44($s1)
    ctx->r18 = MEM_H(ctx->r17, 0X44);
    // 0x80233BFC: mult        $s2, $s2
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233C00: mflo        $v0
    ctx->r2 = lo;
    // 0x80233C04: lh          $s0, 0x48($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X48);
    // 0x80233C08: nop

    // 0x80233C0C: mult        $s0, $s0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233C10: mflo        $a0
    ctx->r4 = lo;
    // 0x80233C14: nop

    // 0x80233C18: nop

    // 0x80233C1C: jal         0x80032424
    // 0x80233C20: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x80233C20: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x80233C24: lh          $a0, 0x46($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X46);
    // 0x80233C28: jal         0x80032664
    // 0x80233C2C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80032664_DA64(rdram, ctx);
        goto after_1;
    // 0x80233C2C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80233C30: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80233C34: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80233C38: jal         0x80032664
    // 0x80233C3C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032664_DA64(rdram, ctx);
        goto after_2;
    // 0x80233C3C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x80233C40: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80233C44: addiu       $s1, $s1, 0x8C
    ctx->r17 = ADD32(ctx->r17, 0X8C);
    // 0x80233C48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233C4C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80233C50: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80233C54: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80233C58: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x80233C5C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80233C60: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80233C64: jal         0x80031600
    // 0x80233C68: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x80233C68: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x80233C6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233C70: jal         0x80031DA8
    // 0x80233C74: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x80233C74: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x80233C78: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80233C7C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80233C80: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80233C84: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80233C88: jr          $ra
    // 0x80233C8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80233C8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023D188_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D188: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023D18C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023D190: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023D194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023D198: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8023D19C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8023D1A0: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x8023D1A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D1A8: beq         $v1, $v0, L_8023D248
    if (ctx->r3 == ctx->r2) {
        // 0x8023D1AC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023D248;
    }
    // 0x8023D1AC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023D1B0: beql        $v0, $zero, L_8023D1C8
    if (ctx->r2 == 0) {
        // 0x8023D1B4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023D1C8;
    }
    goto skip_0;
    // 0x8023D1B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023D1B8: beq         $v1, $zero, L_8023D1D8
    if (ctx->r3 == 0) {
        // 0x8023D1BC: addiu       $a0, $zero, 0x7E
        ctx->r4 = ADD32(0, 0X7E);
            goto L_8023D1D8;
    }
    // 0x8023D1BC: addiu       $a0, $zero, 0x7E
    ctx->r4 = ADD32(0, 0X7E);
    // 0x8023D1C0: j           L_8023D2A8
    // 0x8023D1C4: nop

        goto L_8023D2A8;
    // 0x8023D1C4: nop

L_8023D1C8:
    // 0x8023D1C8: beq         $v1, $v0, L_8023D270
    if (ctx->r3 == ctx->r2) {
        // 0x8023D1CC: nop
    
            goto L_8023D270;
    }
    // 0x8023D1CC: nop

    // 0x8023D1D0: j           L_8023D2A8
    // 0x8023D1D4: nop

        goto L_8023D2A8;
    // 0x8023D1D4: nop

L_8023D1D8:
    // 0x8023D1D8: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8023D1DC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023D1E0: lbu         $v1, 0x4B20($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4B20);
    // 0x8023D1E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023D1E8: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
    // 0x8023D1EC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8023D1F0: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x8023D1F4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023D1F8: sb          $v1, 0x3294($at)
    MEM_B(0X3294, ctx->r1) = ctx->r3;
    // 0x8023D1FC: jal         0x8004CB2C
    // 0x8023D200: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x8023D200: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x8023D204: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023D208: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023D20C: jal         0x8005F6B4
    // 0x8023D210: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x8023D210: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8023D214: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023D218: addiu       $a0, $a0, 0x85C
    ctx->r4 = ADD32(ctx->r4, 0X85C);
    // 0x8023D21C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023D220: addiu       $v0, $v0, 0x8E8
    ctx->r2 = ADD32(ctx->r2, 0X8E8);
    // 0x8023D224: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8023D228: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8023D22C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023D230: addiu       $v0, $v0, 0x944
    ctx->r2 = ADD32(ctx->r2, 0X944);
    // 0x8023D234: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x8023D238: jal         0x8005FA7C
    // 0x8023D23C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x8023D23C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_2:
    // 0x8023D240: j           L_8023D260
    // 0x8023D244: nop

        goto L_8023D260;
    // 0x8023D244: nop

L_8023D248:
    // 0x8023D248: jal         0x8006FF84
    // 0x8023D24C: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_3;
    // 0x8023D24C: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_3:
    // 0x8023D250: beq         $v0, $zero, L_8023D2A8
    if (ctx->r2 == 0) {
        // 0x8023D254: nop
    
            goto L_8023D2A8;
    }
    // 0x8023D254: nop

    // 0x8023D258: jal         0x80036E48
    // 0x8023D25C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x8023D25C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
L_8023D260:
    // 0x8023D260: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8023D264: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D268: j           L_8023D2A8
    // 0x8023D26C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_8023D2A8;
    // 0x8023D26C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8023D270:
    // 0x8023D270: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023D274: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023D278: bne         $v0, $zero, L_8023D2A8
    if (ctx->r2 != 0) {
        // 0x8023D27C: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_8023D2A8;
    }
    // 0x8023D27C: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x8023D280: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023D284: sw          $zero, 0x3290($at)
    MEM_W(0X3290, ctx->r1) = 0;
    // 0x8023D288: jal         0x80036B1C
    // 0x8023D28C: ori         $a0, $a0, 0x4B01
    ctx->r4 = ctx->r4 | 0X4B01;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_5;
    // 0x8023D28C: ori         $a0, $a0, 0x4B01
    ctx->r4 = ctx->r4 | 0X4B01;
    after_5:
    // 0x8023D290: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8023D294: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8023D298: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x8023D29C: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x8023D2A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D2A4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8023D2A8:
    // 0x8023D2A8: jal         0x8005FB90
    // 0x8023D2AC: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_6;
    // 0x8023D2AC: nop

    after_6:
    // 0x8023D2B0: jal         0x80060018
    // 0x8023D2B4: nop

    func_80060018_3B418(rdram, ctx);
        goto after_7;
    // 0x8023D2B4: nop

    after_7:
    // 0x8023D2B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023D2BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023D2C0: jr          $ra
    // 0x8023D2C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023D2C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232D78_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232D78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232D7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232D80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232D84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232D88: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80232D8C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232D90: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80232D94: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232D98: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80232D9C: jal         0x8004D5FC
    // 0x80232DA0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x80232DA0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80232DA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232DA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80232DAC: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x80232DB0: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80232DB4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80232DB8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80232DBC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80232DC0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80232DC4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232DC8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80232DCC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80232DD0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80232DD4: jal         0x80229ED0
    // 0x80232DD8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    func_80229ED0_ovl25(rdram, ctx);
        goto after_1;
    // 0x80232DD8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    after_1:
    // 0x80232DDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232DE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80232DE4: addiu       $a2, $s1, 0x50
    ctx->r6 = ADD32(ctx->r17, 0X50);
    // 0x80232DE8: jal         0x80229ED0
    // 0x80232DEC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_80229ED0_ovl25(rdram, ctx);
        goto after_2;
    // 0x80232DEC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_2:
    // 0x80232DF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232DF4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232DF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232DFC: jal         0x80050294
    // 0x80232E00: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80232E00: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    after_3:
    // 0x80232E04: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232E08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232E0C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232E10: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232E14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232E18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232E1C: jr          $ra
    // 0x80232E20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232E20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234A84_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234A84: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80234A88: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80234A8C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80234A90: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80234A94: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x80234A98: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80234A9C: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80234AA0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80234AA4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80234AA8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80234AAC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80234AB0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80234AB4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
L_80234AB8:
    // 0x80234AB8: lw          $v0, 0xD0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XD0);
    // 0x80234ABC: andi        $v1, $s7, 0xFF
    ctx->r3 = ctx->r23 & 0XFF;
    // 0x80234AC0: sll         $s0, $v1, 3
    ctx->r16 = S32(ctx->r3 << 3);
    // 0x80234AC4: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x80234AC8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80234ACC: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x80234AD0: lh          $a0, -0x11D8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X11D8);
    // 0x80234AD4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234AD8: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80234ADC: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80234AE0: beq         $v0, $zero, L_80234C9C
    if (ctx->r2 == 0) {
        // 0x80234AE4: addiu       $v0, $a0, 0x10
        ctx->r2 = ADD32(ctx->r4, 0X10);
            goto L_80234C9C;
    }
    // 0x80234AE4: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x80234AE8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80234AEC: beq         $v0, $zero, L_80234CA0
    if (ctx->r2 == 0) {
        // 0x80234AF0: andi        $v0, $s7, 0xFF
        ctx->r2 = ctx->r23 & 0XFF;
            goto L_80234CA0;
    }
    // 0x80234AF0: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x80234AF4: jal         0x8003B878
    // 0x80234AF8: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x80234AF8: nop

    after_0:
    // 0x80234AFC: lw          $a0, 0xD0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XD0);
    // 0x80234B00: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234B04: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80234B08: lhu         $v1, -0x11D8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X11D8);
    // 0x80234B0C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80234B10: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x80234B14: lh          $a1, -0x11D2($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X11D2);
    // 0x80234B18: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80234B1C: subu        $a3, $a0, $v1
    ctx->r7 = SUB32(ctx->r4, ctx->r3);
    // 0x80234B20: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x80234B24: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80234B28: sll         $v1, $t0, 1
    ctx->r3 = S32(ctx->r8 << 1);
    // 0x80234B2C: sh          $a3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r7;
    // 0x80234B30: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80234B34: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x80234B38: lhu         $a0, -0x11D4($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X11D4);
    // 0x80234B3C: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80234B40: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80234B44: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80234B48: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80234B4C: bgez        $a1, L_80234B58
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80234B50: andi        $a0, $a0, 0xFFF
        ctx->r4 = ctx->r4 & 0XFFF;
            goto L_80234B58;
    }
    // 0x80234B50: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x80234B54: addiu       $a1, $a1, 0xF
    ctx->r5 = ADD32(ctx->r5, 0XF);
L_80234B58:
    // 0x80234B58: sra         $v0, $a1, 4
    ctx->r2 = S32(SIGNED(ctx->r5) >> 4);
    // 0x80234B5C: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234B60: mflo        $v0
    ctx->r2 = lo;
    // 0x80234B64: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234B68: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80234B6C: lh          $v1, -0x11D6($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X11D6);
    // 0x80234B70: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80234B74: bgez        $v1, L_80234B80
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80234B78: subu        $fp, $a2, $v0
        ctx->r30 = SUB32(ctx->r6, ctx->r2);
            goto L_80234B80;
    }
    // 0x80234B78: subu        $fp, $a2, $v0
    ctx->r30 = SUB32(ctx->r6, ctx->r2);
    // 0x80234B7C: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
L_80234B80:
    // 0x80234B80: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80234B84: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234B88: mflo        $v0
    ctx->r2 = lo;
    // 0x80234B8C: subu        $s0, $a1, $v0
    ctx->r16 = SUB32(ctx->r5, ctx->r2);
    // 0x80234B90: slti        $v0, $t0, 0x8
    ctx->r2 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x80234B94: beq         $v0, $zero, L_80234BBC
    if (ctx->r2 == 0) {
        // 0x80234B98: addiu       $v0, $t0, 0x1
        ctx->r2 = ADD32(ctx->r8, 0X1);
            goto L_80234BBC;
    }
    // 0x80234B98: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
    // 0x80234B9C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80234BA0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234BA4: sll         $s3, $v1, 2
    ctx->r19 = S32(ctx->r3 << 2);
    // 0x80234BA8: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80234BAC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80234BB0: sll         $s6, $v1, 2
    ctx->r22 = S32(ctx->r3 << 2);
    // 0x80234BB4: j           L_80234BC8
    // 0x80234BB8: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
        goto L_80234BC8;
    // 0x80234BB8: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
L_80234BBC:
    // 0x80234BBC: addiu       $s3, $zero, 0x60
    ctx->r19 = ADD32(0, 0X60);
    // 0x80234BC0: addiu       $s6, $zero, 0xE0
    ctx->r22 = ADD32(0, 0XE0);
    // 0x80234BC4: addiu       $s5, $zero, 0x60
    ctx->r21 = ADD32(0, 0X60);
L_80234BC8:
    // 0x80234BC8: jal         0x800324B4
    // 0x80234BCC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80234BCC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    after_1:
    // 0x80234BD0: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80234BD4: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80234BD8: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234BDC: mflo        $v0
    ctx->r2 = lo;
    // 0x80234BE0: lhu         $v1, 0x14($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X14);
    // 0x80234BE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234BE8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80234BEC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234BF0: jal         0x80032498
    // 0x80234BF4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80234BF4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x80234BF8: nop

    // 0x80234BFC: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234C00: mflo        $v0
    ctx->r2 = lo;
    // 0x80234C04: lhu         $v1, 0x18($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X18);
    // 0x80234C08: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x80234C0C: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    // 0x80234C10: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80234C14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234C18: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x80234C1C: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x80234C20: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80234C24: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80234C28: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x80234C2C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80234C30: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x80234C34: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80234C38: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80234C3C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80234C40: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x80234C44: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80234C48: sw          $a0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r4;
    // 0x80234C4C: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x80234C50: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x80234C54: ori         $a1, $a1, 0x2040
    ctx->r5 = ctx->r5 | 0X2040;
    // 0x80234C58: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234C5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234C60: sw          $v1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r3;
    // 0x80234C64: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80234C68: lui         $v0, 0x2E
    ctx->r2 = S32(0X2E << 16);
    // 0x80234C6C: ori         $v0, $v0, 0x205F
    ctx->r2 = ctx->r2 | 0X205F;
    // 0x80234C70: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80234C74: addiu       $v0, $zero, 0x3F40
    ctx->r2 = ADD32(0, 0X3F40);
    // 0x80234C78: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x80234C7C: addiu       $v0, $zero, 0x3F5F
    ctx->r2 = ADD32(0, 0X3F5F);
    // 0x80234C80: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x80234C84: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80234C88: sw          $a1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r5;
    // 0x80234C8C: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80234C90: sw          $zero, 0x20($s2)
    MEM_W(0X20, ctx->r18) = 0;
    // 0x80234C94: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234C98: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
L_80234C9C:
    // 0x80234C9C: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
L_80234CA0:
    // 0x80234CA0: lhu         $t1, 0x1E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X1E);
    // 0x80234CA4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80234CA8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234CAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234CB0: lh          $v1, -0x11D8($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X11D8);
    // 0x80234CB4: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x80234CB8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80234CBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80234CC0: bne         $v0, $v1, L_80234CE0
    if (ctx->r2 != ctx->r3) {
        // 0x80234CC4: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_80234CE0;
    }
    // 0x80234CC4: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80234CC8: lbu         $v0, 0xB($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XB);
    // 0x80234CCC: lhu         $v1, 0x98($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X98);
    // 0x80234CD0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234CD4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80234CD8: sb          $v0, 0xB($s4)
    MEM_B(0XB, ctx->r20) = ctx->r2;
    // 0x80234CDC: sh          $v1, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r3;
L_80234CE0:
    // 0x80234CE0: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x80234CE4: sltiu       $v0, $v0, 0x18
    ctx->r2 = ctx->r2 < 0X18 ? 1 : 0;
    // 0x80234CE8: bne         $v0, $zero, L_80234AB8
    if (ctx->r2 != 0) {
        // 0x80234CEC: nop
    
            goto L_80234AB8;
    }
    // 0x80234CEC: nop

    // 0x80234CF0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80234CF4: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80234CF8: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80234CFC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80234D00: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80234D04: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80234D08: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80234D0C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80234D10: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80234D14: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80234D18: jr          $ra
    // 0x80234D1C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80234D1C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80225348_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225348: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022534C: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225350: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225354: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022535C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225360: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225364: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225368: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022536C: lw          $v1, -0x2540($at)
    ctx->r3 = MEM_W(ctx->r1, -0X2540);
    // 0x80225370: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225374: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225378: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022537C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225380: jalr        $v0
    // 0x80225384: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225384: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x80225388: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022538C: jr          $ra
    // 0x80225390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EE24_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EE24: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022EE28: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022EE2C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022EE30: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8022EE34: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8022EE38: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022EE3C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022EE40: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022EE44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EE48: bne         $v1, $v0, L_8022EE60
    if (ctx->r3 != ctx->r2) {
        // 0x8022EE4C: addiu       $s3, $s2, 0x4E0
        ctx->r19 = ADD32(ctx->r18, 0X4E0);
            goto L_8022EE60;
    }
    // 0x8022EE4C: addiu       $s3, $s2, 0x4E0
    ctx->r19 = ADD32(ctx->r18, 0X4E0);
    // 0x8022EE50: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x8022EE54: beq         $v0, $zero, L_8022EE60
    if (ctx->r2 == 0) {
        // 0x8022EE58: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022EE60;
    }
    // 0x8022EE58: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022EE5C: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
L_8022EE60:
    // 0x8022EE60: lh          $v1, 0x2($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X2);
    // 0x8022EE64: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022EE68: bne         $v1, $v0, L_8022EE74
    if (ctx->r3 != ctx->r2) {
        // 0x8022EE6C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022EE74;
    }
    // 0x8022EE6C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EE70: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
L_8022EE74:
    // 0x8022EE74: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022EE78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EE7C: bne         $v1, $v0, L_8022EE90
    if (ctx->r3 != ctx->r2) {
        // 0x8022EE80: nop
    
            goto L_8022EE90;
    }
    // 0x8022EE80: nop

    // 0x8022EE84: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x8022EE88: bnel        $v0, $zero, L_8022EE90
    if (ctx->r2 != 0) {
        // 0x8022EE8C: sb          $zero, 0xAC($s2)
        MEM_B(0XAC, ctx->r18) = 0;
            goto L_8022EE90;
    }
    goto skip_0;
    // 0x8022EE8C: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    skip_0:
L_8022EE90:
    // 0x8022EE90: lh          $v0, 0x2($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X2);
    // 0x8022EE94: bne         $v0, $zero, L_8022EEB8
    if (ctx->r2 != 0) {
        // 0x8022EE98: addiu       $s0, $sp, 0x18
        ctx->r16 = ADD32(ctx->r29, 0X18);
            goto L_8022EEB8;
    }
    // 0x8022EE98: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8022EE9C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022EEA0: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    // 0x8022EEA4: sh          $v0, 0x2($s3)
    MEM_H(0X2, ctx->r19) = ctx->r2;
    // 0x8022EEA8: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x8022EEAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EEB0: j           L_8022EF58
    // 0x8022EEB4: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
        goto L_8022EF58;
    // 0x8022EEB4: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_8022EEB8:
    // 0x8022EEB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EEBC: addiu       $a1, $s3, 0x1A
    ctx->r5 = ADD32(ctx->r19, 0X1A);
    // 0x8022EEC0: jal         0x8009A3B4
    // 0x8022EEC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022EEC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022EEC8: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x8022EECC: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
    // 0x8022EED0: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    // 0x8022EED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EED8: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x8022EEDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EEE0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022EEE4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022EEE8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022EEEC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8022EEF0: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x8022EEF4: lh          $a2, 0x22($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X22);
    // 0x8022EEF8: addiu       $a3, $zero, 0x7000
    ctx->r7 = ADD32(0, 0X7000);
    // 0x8022EEFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022EF00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022EF04: jal         0x8004DBA0
    // 0x8022EF08: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_1;
    // 0x8022EF08: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x8022EF0C: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x8022EF10: lhu         $v0, 0x22($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X22);
    // 0x8022EF14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022EF18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022EF1C: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022EF20: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EF24: jal         0x8009A3B4
    // 0x8022EF28: sh          $v0, 0x22($s3)
    MEM_H(0X22, ctx->r19) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022EF28: sh          $v0, 0x22($s3)
    MEM_H(0X22, ctx->r19) = ctx->r2;
    after_2:
    // 0x8022EF2C: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x8022EF30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022EF34: jal         0x8009A3B4
    // 0x8022EF38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022EF38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8022EF3C: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022EF40: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022EF44: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EF48: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8022EF4C: lhu         $v0, 0x2($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X2);
    // 0x8022EF50: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EF54: sh          $v0, 0x2($s3)
    MEM_H(0X2, ctx->r19) = ctx->r2;
L_8022EF58:
    // 0x8022EF58: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8022EF5C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8022EF60: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022EF64: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022EF68: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022EF6C: jr          $ra
    // 0x8022EF70: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022EF70: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
