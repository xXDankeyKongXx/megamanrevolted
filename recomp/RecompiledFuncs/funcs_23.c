#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8008D620_68A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D620: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D624: slti        $v0, $v1, 0x80
    ctx->r2 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x8008D628: bne         $v0, $zero, L_8008D644
    if (ctx->r2 != 0) {
        // 0x8008D62C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8008D644;
    }
    // 0x8008D62C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D630: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x8008D634: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D638: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8008D63C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D640: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_8008D644:
    // 0x8008D644: sh          $v1, 0xAC($a0)
    MEM_H(0XAC, ctx->r4) = ctx->r3;
    // 0x8008D648: jr          $ra
    // 0x8008D64C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D64C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_8003A888_15C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A888: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003A88C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003A890: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8003A894: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8003A898: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8003A89C: addiu       $s2, $s2, -0x3680
    ctx->r18 = ADD32(ctx->r18, -0X3680);
    // 0x8003A8A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003A8A4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8003A8A8: addiu       $s0, $s0, 0x59A0
    ctx->r16 = ADD32(ctx->r16, 0X59A0);
    // 0x8003A8AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_8003A8B0:
    // 0x8003A8B0: lb          $a1, 0x0($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X0);
    // 0x8003A8B4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8003A8B8: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x8003A8BC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8003A8C0: beq         $v0, $zero, L_8003A8D8
    if (ctx->r2 == 0) {
        // 0x8003A8C4: andi        $v0, $a1, 0x1C
        ctx->r2 = ctx->r5 & 0X1C;
            goto L_8003A8D8;
    }
    // 0x8003A8C4: andi        $v0, $a1, 0x1C
    ctx->r2 = ctx->r5 & 0X1C;
    // 0x8003A8C8: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8003A8CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8003A8D0: jalr        $v0
    // 0x8003A8D4: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8003A8D4: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    after_0:
L_8003A8D8:
    // 0x8003A8D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003A8DC: sltiu       $v0, $s1, 0x10
    ctx->r2 = ctx->r17 < 0X10 ? 1 : 0;
    // 0x8003A8E0: bne         $v0, $zero, L_8003A8B0
    if (ctx->r2 != 0) {
        // 0x8003A8E4: addiu       $s0, $s0, 0x118
        ctx->r16 = ADD32(ctx->r16, 0X118);
            goto L_8003A8B0;
    }
    // 0x8003A8E4: addiu       $s0, $s0, 0x118
    ctx->r16 = ADD32(ctx->r16, 0X118);
    // 0x8003A8E8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8003A8EC: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8003A8F0: addiu       $s2, $s2, -0x3680
    ctx->r18 = ADD32(ctx->r18, -0X3680);
    // 0x8003A8F4: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x8003A8F8: addiu       $s0, $s0, -0x2100
    ctx->r16 = ADD32(ctx->r16, -0X2100);
L_8003A8FC:
    // 0x8003A8FC: lb          $a1, 0x0($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X0);
    // 0x8003A900: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8003A904: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x8003A908: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8003A90C: beq         $v0, $zero, L_8003A924
    if (ctx->r2 == 0) {
        // 0x8003A910: andi        $v0, $a1, 0x1C
        ctx->r2 = ctx->r5 & 0X1C;
            goto L_8003A924;
    }
    // 0x8003A910: andi        $v0, $a1, 0x1C
    ctx->r2 = ctx->r5 & 0X1C;
    // 0x8003A914: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8003A918: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8003A91C: jalr        $v0
    // 0x8003A920: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8003A920: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    after_1:
L_8003A924:
    // 0x8003A924: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003A928: sltiu       $v0, $s1, 0x20
    ctx->r2 = ctx->r17 < 0X20 ? 1 : 0;
    // 0x8003A92C: bne         $v0, $zero, L_8003A8FC
    if (ctx->r2 != 0) {
        // 0x8003A930: addiu       $s0, $s0, 0x118
        ctx->r16 = ADD32(ctx->r16, 0X118);
            goto L_8003A8FC;
    }
    // 0x8003A930: addiu       $s0, $s0, 0x118
    ctx->r16 = ADD32(ctx->r16, 0X118);
    // 0x8003A934: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003A938: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8003A93C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003A940: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003A944: jr          $ra
    // 0x8003A948: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8003A948: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002C62C_7A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002C62C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C630: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002C634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C638: jal         0x8002C420
    // 0x8002C63C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8002C420_7820(rdram, ctx);
        goto after_0;
    // 0x8002C63C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8002C640: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x8002C644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C648: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002C64C: jr          $ra
    // 0x8002C650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002C650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80064F18_40318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80064F18: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x80064F1C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80064F20: addiu       $v0, $zero, 0xD5
    ctx->r2 = ADD32(0, 0XD5);
    // 0x80064F24: bnel        $v1, $v0, L_80064F38
    if (ctx->r3 != ctx->r2) {
        // 0x80064F28: addiu       $v0, $a1, 0x3
        ctx->r2 = ADD32(ctx->r5, 0X3);
            goto L_80064F38;
    }
    goto skip_0;
    // 0x80064F28: addiu       $v0, $a1, 0x3
    ctx->r2 = ADD32(ctx->r5, 0X3);
    skip_0:
    // 0x80064F2C: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x80064F30: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80064F34: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
L_80064F38:
    // 0x80064F38: jr          $ra
    // 0x80064F3C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80064F3C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80037B38_12F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037B38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037B3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80037B40: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80037B44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80037B48: sh          $zero, -0xC66($at)
    MEM_H(-0XC66, ctx->r1) = 0;
    // 0x80037B4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80037B50: sb          $v0, -0xC6E($at)
    MEM_B(-0XC6E, ctx->r1) = ctx->r2;
    // 0x80037B54: jal         0x80036E48
    // 0x80037B58: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x80037B58: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
    // 0x80037B5C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80037B60: jr          $ra
    // 0x80037B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80037B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037B68: nop

    // 0x80037B6C: nop

;}
RECOMP_FUNC void func_80060690_3BA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80060690: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80060694: lh          $v0, 0x4A1E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A1E);
    // 0x80060698: bltz        $v0, L_80060724
    if (SIGNED(ctx->r2) < 0) {
        // 0x8006069C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80060724;
    }
    // 0x8006069C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800606A0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x800606A4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800606A8: addiu       $v1, $v1, -0x3A50
    ctx->r3 = ADD32(ctx->r3, -0X3A50);
    // 0x800606AC: addiu       $a1, $v1, 0x3C
    ctx->r5 = ADD32(ctx->r3, 0X3C);
    // 0x800606B0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x800606B4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800606B8: sb          $zero, -0x3A47($at)
    MEM_B(-0X3A47, ctx->r1) = 0;
    // 0x800606BC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800606C0: sb          $zero, -0x3A48($at)
    MEM_B(-0X3A48, ctx->r1) = 0;
    // 0x800606C4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800606C8: sb          $a0, -0x3A4F($at)
    MEM_B(-0X3A4F, ctx->r1) = ctx->r4;
    // 0x800606CC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800606D0: sw          $zero, -0x3A40($at)
    MEM_W(-0X3A40, ctx->r1) = 0;
    // 0x800606D4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800606D8: sw          $zero, -0x3A44($at)
    MEM_W(-0X3A44, ctx->r1) = 0;
    // 0x800606DC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800606E0: sw          $zero, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = 0;
    // 0x800606E4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800606E8: sw          $zero, -0x3A38($at)
    MEM_W(-0X3A38, ctx->r1) = 0;
    // 0x800606EC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800606F0: sw          $zero, -0x3A3C($at)
    MEM_W(-0X3A3C, ctx->r1) = 0;
    // 0x800606F4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800606F8: sw          $zero, -0x3A4C($at)
    MEM_W(-0X3A4C, ctx->r1) = 0;
    // 0x800606FC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060700: sb          $zero, -0x3A45($at)
    MEM_B(-0X3A45, ctx->r1) = 0;
    // 0x80060704: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060708: sb          $zero, -0x3A46($at)
    MEM_B(-0X3A46, ctx->r1) = 0;
    // 0x8006070C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060710: sw          $zero, -0x39AC($at)
    MEM_W(-0X39AC, ctx->r1) = 0;
L_80060714:
    // 0x80060714: sw          $zero, 0x24($a1)
    MEM_W(0X24, ctx->r5) = 0;
    // 0x80060718: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8006071C: bgez        $a2, L_80060714
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80060720: addiu       $a1, $a1, -0x4
        ctx->r5 = ADD32(ctx->r5, -0X4);
            goto L_80060714;
    }
    // 0x80060720: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
L_80060724:
    // 0x80060724: jr          $ra
    // 0x80060728: nop

    TRACE_RETURN()
    return;
    // 0x80060728: nop

;}
RECOMP_FUNC void func_800354D0_108D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800354D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800354D4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x800354D8: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x800354DC: addiu       $v0, $v0, 0x4784
    ctx->r2 = ADD32(ctx->r2, 0X4784);
    // 0x800354E0: sra         $a0, $a0, 14
    ctx->r4 = S32(SIGNED(ctx->r4) >> 14);
    // 0x800354E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800354E8: addu        $s0, $a0, $v0
    ctx->r16 = ADD32(ctx->r4, ctx->r2);
    // 0x800354EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800354F0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800354F4: beql        $a0, $zero, L_80035508
    if (ctx->r4 == 0) {
        // 0x800354F8: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_80035508;
    }
    goto skip_0;
    // 0x800354F8: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    skip_0:
    // 0x800354FC: jal         0x80025FF8
    // 0x80035500: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_0;
    // 0x80035500: nop

    after_0:
    // 0x80035504: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_80035508:
    // 0x80035508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003550C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80035510: jr          $ra
    // 0x80035514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80035514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800354A0_108A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800354A0: jr          $ra
    // 0x800354A4: nop

    TRACE_RETURN()
    return;
    // 0x800354A4: nop

;}
RECOMP_FUNC void func_8007E8D4_59CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007E8D4: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8007E8D8: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x8007E8DC: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x8007E8E0: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x8007E8E4: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x8007E8E8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8007E8EC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8007E8F0: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x8007E8F4: addiu       $t4, $t4, -0x247C
    ctx->r12 = ADD32(ctx->r12, -0X247C);
    // 0x8007E8F8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8007E8FC: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8007E900: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8007E904: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8007E908: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8007E90C: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x8007E910: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x8007E914: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8007E918: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8007E91C: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8007E920: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8007E924: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8007E928: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8007E92C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8007E930: bne         $v1, $v0, L_8007E944
    if (ctx->r3 != ctx->r2) {
        // 0x8007E934: sw          $t4, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r12;
            goto L_8007E944;
    }
    // 0x8007E934: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x8007E938: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x8007E93C: addiu       $t4, $t4, -0x2474
    ctx->r12 = ADD32(ctx->r12, -0X2474);
    // 0x8007E940: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
L_8007E944:
    // 0x8007E944: lhu         $v1, 0x46($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X46);
    // 0x8007E948: addiu       $v0, $fp, 0x40
    ctx->r2 = ADD32(ctx->r30, 0X40);
    // 0x8007E94C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E950: sw          $v0, -0x44F0($at)
    MEM_W(-0X44F0, ctx->r1) = ctx->r2;
    // 0x8007E954: andi        $v0, $v1, 0x7000
    ctx->r2 = ctx->r3 & 0X7000;
    // 0x8007E958: srl         $t3, $v0, 12
    ctx->r11 = S32(U32(ctx->r2) >> 12);
    // 0x8007E95C: andi        $v0, $v1, 0xE00
    ctx->r2 = ctx->r3 & 0XE00;
    // 0x8007E960: srl         $s4, $v0, 9
    ctx->r20 = S32(U32(ctx->r2) >> 9);
    // 0x8007E964: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8007E968: lw          $v0, 0x3C30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C30);
    // 0x8007E96C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8007E970: beq         $v0, $a1, L_8007E9C4
    if (ctx->r2 == ctx->r5) {
        // 0x8007E974: andi        $t2, $v1, 0x1FF
        ctx->r10 = ctx->r3 & 0X1FF;
            goto L_8007E9C4;
    }
    // 0x8007E974: andi        $t2, $v1, 0x1FF
    ctx->r10 = ctx->r3 & 0X1FF;
    // 0x8007E978: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007E97C: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007E980: lui         $a0, 0xDB06
    ctx->r4 = S32(0XDB06 << 16);
    // 0x8007E984: ori         $a0, $a0, 0x14
    ctx->r4 = ctx->r4 | 0X14;
    // 0x8007E988: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8007E98C: sw          $a1, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r5;
    // 0x8007E990: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007E994: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E998: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E99C: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x8007E9A0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8007E9A4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007E9A8: addiu       $v0, $v0, -0x2628
    ctx->r2 = ADD32(ctx->r2, -0X2628);
    // 0x8007E9AC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8007E9B0: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8007E9B4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E9B8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E9BC: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x8007E9C0: sw          $s6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r22;
L_8007E9C4:
    // 0x8007E9C4: sltiu       $v0, $s4, 0x5
    ctx->r2 = ctx->r20 < 0X5 ? 1 : 0;
    // 0x8007E9C8: beq         $v0, $zero, L_8007EBF4
    if (ctx->r2 == 0) {
        // 0x8007E9CC: sll         $v0, $s4, 2
        ctx->r2 = S32(ctx->r20 << 2);
            goto L_8007EBF4;
    }
    // 0x8007E9CC: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x8007E9D0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007E9D4: addu        $at, $at, $v0
    gpr jr_addend_8007E9DC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007E9D8: lw          $v0, 0x2C70($at)
    ctx->r2 = ADD32(ctx->r1, 0X2C70);
    // 0x8007E9DC: jr          $v0
    // 0x8007E9E0: nop

    switch (jr_addend_8007E9DC >> 2) {
        case 0: goto L_8007EB10; break;
        case 1: goto L_8007E9E4; break;
        case 2: goto L_8007E9E4; break;
        case 3: goto L_8007EB10; break;
        case 4: goto L_8007EB88; break;
        default: switch_error(__func__, 0x8007E9DC, 0x800D2C70);
    }
    // 0x8007E9E0: nop

L_8007E9E4:
    // 0x8007E9E4: lui         $a1, 0xF500
    ctx->r5 = S32(0XF500 << 16);
    // 0x8007E9E8: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    // 0x8007E9EC: lui         $a2, 0x703
    ctx->r6 = S32(0X703 << 16);
    // 0x8007E9F0: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x8007E9F4: lui         $a3, 0xDB06
    ctx->r7 = S32(0XDB06 << 16);
    // 0x8007E9F8: ori         $a3, $a3, 0x10
    ctx->r7 = ctx->r7 | 0X10;
    // 0x8007E9FC: lui         $t0, 0xDB06
    ctx->r8 = S32(0XDB06 << 16);
    // 0x8007EA00: ori         $t0, $t0, 0xC
    ctx->r8 = ctx->r8 | 0XC;
    // 0x8007EA04: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007EA08: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007EA0C: lui         $t1, 0xDB06
    ctx->r9 = S32(0XDB06 << 16);
    // 0x8007EA10: ori         $t1, $t1, 0x8
    ctx->r9 = ctx->r9 | 0X8;
    // 0x8007EA14: lui         $a0, 0xE700
    ctx->r4 = S32(0XE700 << 16);
    // 0x8007EA18: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x8007EA1C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EA20: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007EA24: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x8007EA28: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EA2C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007EA30: lui         $v1, 0xFD10
    ctx->r3 = S32(0XFD10 << 16);
    // 0x8007EA34: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8007EA38: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8007EA3C: addiu       $v1, $v1, -0x264C
    ctx->r3 = ADD32(ctx->r3, -0X264C);
    // 0x8007EA40: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8007EA44: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x8007EA48: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EA4C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007EA50: lui         $v1, 0xE800
    ctx->r3 = S32(0XE800 << 16);
    // 0x8007EA54: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x8007EA58: addiu       $v1, $v0, 0x20
    ctx->r3 = ADD32(ctx->r2, 0X20);
    // 0x8007EA5C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EA60: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007EA64: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x8007EA68: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x8007EA6C: addiu       $v1, $v0, 0x28
    ctx->r3 = ADD32(ctx->r2, 0X28);
    // 0x8007EA70: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EA74: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007EA78: lui         $v1, 0xE600
    ctx->r3 = S32(0XE600 << 16);
    // 0x8007EA7C: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8007EA80: addiu       $v1, $v0, 0x30
    ctx->r3 = ADD32(ctx->r2, 0X30);
    // 0x8007EA84: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EA88: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007EA8C: lui         $v1, 0xF000
    ctx->r3 = S32(0XF000 << 16);
    // 0x8007EA90: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x8007EA94: addiu       $v1, $v0, 0x38
    ctx->r3 = ADD32(ctx->r2, 0X38);
    // 0x8007EA98: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EA9C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007EAA0: addiu       $v1, $v0, 0x40
    ctx->r3 = ADD32(ctx->r2, 0X40);
    // 0x8007EAA4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EAA8: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007EAAC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8007EAB0: addiu       $v1, $v1, -0x2530
    ctx->r3 = ADD32(ctx->r3, -0X2530);
    // 0x8007EAB4: sw          $v1, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r3;
    // 0x8007EAB8: addiu       $v1, $v0, 0x48
    ctx->r3 = ADD32(ctx->r2, 0X48);
    // 0x8007EABC: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8007EAC0: sw          $a0, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r4;
    // 0x8007EAC4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x8007EAC8: addiu       $a0, $a0, -0x2508
    ctx->r4 = ADD32(ctx->r4, -0X2508);
    // 0x8007EACC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EAD0: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007EAD4: addiu       $v1, $v0, 0x50
    ctx->r3 = ADD32(ctx->r2, 0X50);
    // 0x8007EAD8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8007EADC: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x8007EAE0: sw          $a1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r5;
    // 0x8007EAE4: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x8007EAE8: sw          $a2, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r6;
    // 0x8007EAEC: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x8007EAF0: sw          $a3, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r7;
    // 0x8007EAF4: sw          $t0, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r8;
    // 0x8007EAF8: sw          $a0, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r4;
    // 0x8007EAFC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EB00: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007EB04: sw          $t1, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r9;
    // 0x8007EB08: j           L_8007EBF4
    // 0x8007EB0C: sw          $a0, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r4;
        goto L_8007EBF4;
    // 0x8007EB0C: sw          $a0, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r4;
L_8007EB10:
    // 0x8007EB10: lui         $a0, 0xDB06
    ctx->r4 = S32(0XDB06 << 16);
    // 0x8007EB14: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x8007EB18: lui         $a1, 0xDB06
    ctx->r5 = S32(0XDB06 << 16);
    // 0x8007EB1C: ori         $a1, $a1, 0xC
    ctx->r5 = ctx->r5 | 0XC;
    // 0x8007EB20: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007EB24: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007EB28: lui         $a2, 0xDB06
    ctx->r6 = S32(0XDB06 << 16);
    // 0x8007EB2C: ori         $a2, $a2, 0x8
    ctx->r6 = ctx->r6 | 0X8;
    // 0x8007EB30: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007EB34: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EB38: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EB3C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007EB40: addiu       $v0, $v0, -0x25D0
    ctx->r2 = ADD32(ctx->r2, -0X25D0);
    // 0x8007EB44: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8007EB48: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8007EB4C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EB50: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EB54: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007EB58: addiu       $v0, $v0, -0x24F8
    ctx->r2 = ADD32(ctx->r2, -0X24F8);
    // 0x8007EB5C: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x8007EB60: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x8007EB64: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EB68: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EB6C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007EB70: addiu       $v0, $v0, -0x24D0
    ctx->r2 = ADD32(ctx->r2, -0X24D0);
    // 0x8007EB74: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8007EB78: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x8007EB7C: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x8007EB80: j           L_8007EBF4
    // 0x8007EB84: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
        goto L_8007EBF4;
    // 0x8007EB84: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
L_8007EB88:
    // 0x8007EB88: lui         $a0, 0xDB06
    ctx->r4 = S32(0XDB06 << 16);
    // 0x8007EB8C: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x8007EB90: lui         $a1, 0xDB06
    ctx->r5 = S32(0XDB06 << 16);
    // 0x8007EB94: ori         $a1, $a1, 0xC
    ctx->r5 = ctx->r5 | 0XC;
    // 0x8007EB98: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007EB9C: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007EBA0: lui         $a2, 0xDB06
    ctx->r6 = S32(0XDB06 << 16);
    // 0x8007EBA4: ori         $a2, $a2, 0x8
    ctx->r6 = ctx->r6 | 0X8;
    // 0x8007EBA8: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007EBAC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EBB0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EBB4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007EBB8: addiu       $v0, $v0, -0x25A8
    ctx->r2 = ADD32(ctx->r2, -0X25A8);
    // 0x8007EBBC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8007EBC0: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8007EBC4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8007EBC8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x8007EBCC: addiu       $a0, $a0, -0x24A8
    ctx->r4 = ADD32(ctx->r4, -0X24A8);
    // 0x8007EBD0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EBD4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EBD8: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x8007EBDC: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x8007EBE0: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x8007EBE4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EBE8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EBEC: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x8007EBF0: sw          $a0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r4;
L_8007EBF4:
    // 0x8007EBF4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007EBF8: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007EBFC: lui         $v0, 0xDA38
    ctx->r2 = S32(0XDA38 << 16);
    // 0x8007EC00: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x8007EC04: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8007EC08: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x8007EC0C: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x8007EC10: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8007EC14: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x8007EC18: sll         $v0, $t2, 2
    ctx->r2 = S32(ctx->r10 << 2);
    // 0x8007EC1C: sw          $fp, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r30;
    // 0x8007EC20: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007EC24: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8007EC28: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8007EC2C: addu        $v0, $t4, $v0
    ctx->r2 = ADD32(ctx->r12, ctx->r2);
    // 0x8007EC30: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8007EC34: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8007EC38: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x8007EC3C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007EC40: sw          $fp, -0x41CC($at)
    MEM_W(-0X41CC, ctx->r1) = ctx->r30;
    // 0x8007EC44: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007EC48: sh          $zero, -0x44E6($at)
    MEM_H(-0X44E6, ctx->r1) = 0;
    // 0x8007EC4C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007EC50: sh          $zero, -0x44E8($at)
    MEM_H(-0X44E8, ctx->r1) = 0;
    // 0x8007EC54: sll         $v0, $t3, 2
    ctx->r2 = S32(ctx->r11 << 2);
    // 0x8007EC58: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x8007EC5C: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x8007EC60: sll         $v0, $t3, 1
    ctx->r2 = S32(ctx->r11 << 1);
    // 0x8007EC64: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x8007EC68: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x8007EC6C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007EC70: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007EC74: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8007EC78: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EC7C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EC80: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EC84: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007EC88: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x8007EC8C: andi        $a0, $a0, 0x3F00
    ctx->r4 = ctx->r4 & 0X3F00;
    // 0x8007EC90: srl         $a0, $a0, 8
    ctx->r4 = S32(U32(ctx->r4) >> 8);
    // 0x8007EC94: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8007EC98: beq         $a0, $zero, L_8007F24C
    if (ctx->r4 == 0) {
        // 0x8007EC9C: sw          $a0, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r4;
            goto L_8007F24C;
    }
    // 0x8007EC9C: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x8007ECA0: lui         $s5, 0xDE00
    ctx->r21 = S32(0XDE00 << 16);
    // 0x8007ECA4: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x8007ECA8: addiu       $v0, $s4, -0x1
    ctx->r2 = ADD32(ctx->r20, -0X1);
L_8007ECAC:
    // 0x8007ECAC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8007ECB0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007ECB4: sw          $zero, -0x44E4($at)
    MEM_W(-0X44E4, ctx->r1) = 0;
    // 0x8007ECB8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007ECBC: sw          $zero, -0x44DC($at)
    MEM_W(-0X44DC, ctx->r1) = 0;
    // 0x8007ECC0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007ECC4: sb          $zero, -0x44E0($at)
    MEM_B(-0X44E0, ctx->r1) = 0;
    // 0x8007ECC8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007ECCC: sb          $zero, -0x44D8($at)
    MEM_B(-0X44D8, ctx->r1) = 0;
    // 0x8007ECD0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007ECD4: sb          $zero, -0x44D7($at)
    MEM_B(-0X44D7, ctx->r1) = 0;
    // 0x8007ECD8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007ECDC: sb          $zero, -0x44D6($at)
    MEM_B(-0X44D6, ctx->r1) = 0;
    // 0x8007ECE0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007ECE4: sb          $zero, -0x44D5($at)
    MEM_B(-0X44D5, ctx->r1) = 0;
    // 0x8007ECE8: bne         $v0, $zero, L_8007ECFC
    if (ctx->r2 != 0) {
        // 0x8007ECEC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8007ECFC;
    }
    // 0x8007ECEC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8007ECF0: jal         0x8007BFC8
    // 0x8007ECF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8007BFC8_573C8(rdram, ctx);
        goto after_0;
    // 0x8007ECF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8007ECF8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_8007ECFC:
    // 0x8007ECFC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8007ED00: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007ED04: lhu         $v0, -0x44E8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X44E8);
    // 0x8007ED08: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8007ED0C: andi        $s2, $a0, 0x81F
    ctx->r18 = ctx->r4 & 0X81F;
    // 0x8007ED10: xor         $v0, $s2, $v0
    ctx->r2 = ctx->r18 ^ ctx->r2;
    // 0x8007ED14: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8007ED18: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007ED1C: beq         $v0, $zero, L_8007EDE4
    if (ctx->r2 == 0) {
        // 0x8007ED20: addiu       $s1, $sp, 0x20
        ctx->r17 = ADD32(ctx->r29, 0X20);
            goto L_8007EDE4;
    }
    // 0x8007ED20: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x8007ED24: andi        $v0, $a0, 0xF
    ctx->r2 = ctx->r4 & 0XF;
    // 0x8007ED28: sll         $a1, $v0, 6
    ctx->r5 = S32(ctx->r2 << 6);
    // 0x8007ED2C: andi        $v1, $a0, 0x10
    ctx->r3 = ctx->r4 & 0X10;
    // 0x8007ED30: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8007ED34: andi        $v0, $a0, 0x800
    ctx->r2 = ctx->r4 & 0X800;
    // 0x8007ED38: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8007ED3C: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8007ED40: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007ED44: sh          $s2, -0x44E8($at)
    MEM_H(-0X44E8, ctx->r1) = ctx->r18;
    // 0x8007ED48: bgez        $a0, L_8007ED60
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8007ED4C: or          $v1, $v1, $v0
        ctx->r3 = ctx->r3 | ctx->r2;
            goto L_8007ED60;
    }
    // 0x8007ED4C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007ED50: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8007ED54: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8007ED58: j           L_8007ED6C
    // 0x8007ED5C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
        goto L_8007ED6C;
    // 0x8007ED5C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_8007ED60:
    // 0x8007ED60: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8007ED64: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8007ED68: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8007ED6C:
    // 0x8007ED6C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8007ED70: lh          $a2, 0x0($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X0);
    // 0x8007ED74: lh          $a3, 0x22($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X22);
    // 0x8007ED78: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x8007ED7C: jal         0x8002C9BC
    // 0x8007ED80: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    func_8002C9BC_7DBC(rdram, ctx);
        goto after_1;
    // 0x8007ED80: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    after_1:
    // 0x8007ED84: beq         $v0, $zero, L_8007EDE4
    if (ctx->r2 == 0) {
        // 0x8007ED88: nop
    
            goto L_8007EDE4;
    }
    // 0x8007ED88: nop

    // 0x8007ED8C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007ED90: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8007ED94: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x8007ED98: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8007ED9C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EDA0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EDA4: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8007EDA8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8007EDAC: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x8007EDB0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007EDB4: sw          $v1, -0x44EC($at)
    MEM_W(-0X44EC, ctx->r1) = ctx->r3;
    // 0x8007EDB8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8007EDBC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EDC0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EDC4: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8007EDC8: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    // 0x8007EDCC: lui         $v1, 0xFD48
    ctx->r3 = S32(0XFD48 << 16);
    // 0x8007EDD0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007EDD4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8007EDD8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8007EDDC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007EDE0: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
L_8007EDE4:
    // 0x8007EDE4: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8007EDE8: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x8007EDEC: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x8007EDF0: beq         $v0, $zero, L_8007EE5C
    if (ctx->r2 == 0) {
        // 0x8007EDF4: andi        $v0, $s7, 0xFF
        ctx->r2 = ctx->r23 & 0XFF;
            goto L_8007EE5C;
    }
    // 0x8007EDF4: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x8007EDF8: bne         $v0, $zero, L_8007EEC4
    if (ctx->r2 != 0) {
        // 0x8007EDFC: nop
    
            goto L_8007EEC4;
    }
    // 0x8007EDFC: nop

    // 0x8007EE00: beq         $s4, $zero, L_8007EE10
    if (ctx->r20 == 0) {
        // 0x8007EE04: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007EE10;
    }
    // 0x8007EE04: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8007EE08: bne         $s4, $v0, L_8007EEC4
    if (ctx->r20 != ctx->r2) {
        // 0x8007EE0C: addiu       $s7, $zero, 0x1
        ctx->r23 = ADD32(0, 0X1);
            goto L_8007EEC4;
    }
    // 0x8007EE0C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
L_8007EE10:
    // 0x8007EE10: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007EE14: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007EE18: lui         $a0, 0xDB06
    ctx->r4 = S32(0XDB06 << 16);
    // 0x8007EE1C: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x8007EE20: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007EE24: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EE28: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EE2C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007EE30: addiu       $v0, $v0, -0x2580
    ctx->r2 = ADD32(ctx->r2, -0X2580);
    // 0x8007EE34: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8007EE38: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8007EE3C: lui         $t4, 0x400
    ctx->r12 = S32(0X400 << 16);
    // 0x8007EE40: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8007EE44: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EE48: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EE4C: sw          $s5, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r21;
    // 0x8007EE50: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x8007EE54: j           L_8007EEC4
    // 0x8007EE58: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
        goto L_8007EEC4;
    // 0x8007EE58: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
L_8007EE5C:
    // 0x8007EE5C: andi        $v1, $s7, 0xFF
    ctx->r3 = ctx->r23 & 0XFF;
    // 0x8007EE60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007EE64: bne         $v1, $v0, L_8007EEC4
    if (ctx->r3 != ctx->r2) {
        // 0x8007EE68: nop
    
            goto L_8007EEC4;
    }
    // 0x8007EE68: nop

    // 0x8007EE6C: beq         $s4, $zero, L_8007EE7C
    if (ctx->r20 == 0) {
        // 0x8007EE70: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007EE7C;
    }
    // 0x8007EE70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8007EE74: bne         $s4, $v0, L_8007EEC4
    if (ctx->r20 != ctx->r2) {
        // 0x8007EE78: addu        $s7, $zero, $zero
        ctx->r23 = ADD32(0, 0);
            goto L_8007EEC4;
    }
    // 0x8007EE78: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
L_8007EE7C:
    // 0x8007EE7C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007EE80: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007EE84: lui         $a0, 0xDB06
    ctx->r4 = S32(0XDB06 << 16);
    // 0x8007EE88: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x8007EE8C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007EE90: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EE94: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EE98: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007EE9C: addiu       $v0, $v0, -0x25D0
    ctx->r2 = ADD32(ctx->r2, -0X25D0);
    // 0x8007EEA0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8007EEA4: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8007EEA8: lui         $t4, 0x400
    ctx->r12 = S32(0X400 << 16);
    // 0x8007EEAC: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8007EEB0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EEB4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EEB8: sw          $s5, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r21;
    // 0x8007EEBC: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x8007EEC0: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
L_8007EEC4:
    // 0x8007EEC4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8007EEC8: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8007EECC: beq         $v0, $zero, L_8007EF58
    if (ctx->r2 == 0) {
        // 0x8007EED0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8007EF58;
    }
    // 0x8007EED0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8007EED4: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x8007EED8: lh          $a3, 0x22($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X22);
    // 0x8007EEDC: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x8007EEE0: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x8007EEE4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8007EEE8: jal         0x8007CC94
    // 0x8007EEEC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_8007CC94_58094(rdram, ctx);
        goto after_2;
    // 0x8007EEEC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_2:
    // 0x8007EEF0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007EEF4: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007EEF8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8007EEFC: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007EF00: lui         $t4, 0x400
    ctx->r12 = S32(0X400 << 16);
    // 0x8007EF04: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EF08: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EF0C: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x8007EF10: jal         0x800281C8
    // 0x8007EF14: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    func_800281C8_35C8(rdram, ctx);
        goto after_3;
    // 0x8007EF14: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    after_3:
    // 0x8007EF18: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8007EF1C: beq         $a3, $zero, L_8007F224
    if (ctx->r7 == 0) {
        // 0x8007EF20: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8007F224;
    }
    // 0x8007EF20: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8007EF24: lhu         $v0, 0x20($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X20);
    // 0x8007EF28: lhu         $v1, 0x22($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X22);
    // 0x8007EF2C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8007EF30: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8007EF34: addiu       $a2, $a2, -0x1CDC
    ctx->r6 = ADD32(ctx->r6, -0X1CDC);
    // 0x8007EF38: sw          $fp, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r30;
    // 0x8007EF3C: sw          $s0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r16;
    // 0x8007EF40: sh          $s4, 0xC($a3)
    MEM_H(0XC, ctx->r7) = ctx->r20;
    // 0x8007EF44: sh          $v0, 0x8($a3)
    MEM_H(0X8, ctx->r7) = ctx->r2;
    // 0x8007EF48: jal         0x800283A8
    // 0x8007EF4C: sh          $v1, 0xA($a3)
    MEM_H(0XA, ctx->r7) = ctx->r3;
    func_800283A8_37A8(rdram, ctx);
        goto after_4;
    // 0x8007EF4C: sh          $v1, 0xA($a3)
    MEM_H(0XA, ctx->r7) = ctx->r3;
    after_4:
    // 0x8007EF50: j           L_8007F224
    // 0x8007EF54: nop

        goto L_8007F224;
    // 0x8007EF54: nop

L_8007EF58:
    // 0x8007EF58: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8007EF5C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8007EF60: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8007EF64: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x8007EF68: addu        $s1, $t4, $v0
    ctx->r17 = ADD32(ctx->r12, ctx->r2);
    // 0x8007EF6C: addu        $s3, $t4, $v1
    ctx->r19 = ADD32(ctx->r12, ctx->r3);
    // 0x8007EF70: sltiu       $v0, $s4, 0x5
    ctx->r2 = ctx->r20 < 0X5 ? 1 : 0;
    // 0x8007EF74: beq         $v0, $zero, L_8007F224
    if (ctx->r2 == 0) {
        // 0x8007EF78: addu        $s2, $t4, $a0
        ctx->r18 = ADD32(ctx->r12, ctx->r4);
            goto L_8007F224;
    }
    // 0x8007EF78: addu        $s2, $t4, $a0
    ctx->r18 = ADD32(ctx->r12, ctx->r4);
    // 0x8007EF7C: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x8007EF80: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007EF84: addu        $at, $at, $v0
    gpr jr_addend_8007EF8C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007EF88: lw          $v0, 0x2C88($at)
    ctx->r2 = ADD32(ctx->r1, 0X2C88);
    // 0x8007EF8C: jr          $v0
    // 0x8007EF90: nop

    switch (jr_addend_8007EF8C >> 2) {
        case 0: goto L_8007EF94; break;
        case 1: goto L_8007F0B8; break;
        case 2: goto L_8007F10C; break;
        case 3: goto L_8007F13C; break;
        case 4: goto L_8007F1EC; break;
        default: switch_error(__func__, 0x8007EF8C, 0x800D2C88);
    }
    // 0x8007EF90: nop

L_8007EF94:
    // 0x8007EF94: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8007EF98: beq         $v0, $zero, L_8007EFBC
    if (ctx->r2 == 0) {
        // 0x8007EF9C: nop
    
            goto L_8007EFBC;
    }
    // 0x8007EF9C: nop

    // 0x8007EFA0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007EFA4: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007EFA8: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007EFAC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EFB0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EFB4: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x8007EFB8: sw          $s1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r17;
L_8007EFBC:
    // 0x8007EFBC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8007EFC0: beq         $v0, $zero, L_8007EFE4
    if (ctx->r2 == 0) {
        // 0x8007EFC4: nop
    
            goto L_8007EFE4;
    }
    // 0x8007EFC4: nop

    // 0x8007EFC8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007EFCC: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007EFD0: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007EFD4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007EFD8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007EFDC: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x8007EFE0: sw          $s2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r18;
L_8007EFE4:
    // 0x8007EFE4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8007EFE8: lhu         $v0, 0x0($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X0);
    // 0x8007EFEC: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x8007EFF0: srl         $v0, $v0, 14
    ctx->r2 = S32(U32(ctx->r2) >> 14);
    // 0x8007EFF4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007EFF8: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x8007EFFC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8007F000: lh          $a2, 0x1C($fp)
    ctx->r6 = MEM_H(ctx->r30, 0X1C);
    // 0x8007F004: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8007F008: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8007F00C: sra         $v1, $a0, 16
    ctx->r3 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8007F010: beq         $v0, $zero, L_8007F068
    if (ctx->r2 == 0) {
        // 0x8007F014: subu        $a1, $a2, $v1
        ctx->r5 = SUB32(ctx->r6, ctx->r3);
            goto L_8007F068;
    }
    // 0x8007F014: subu        $a1, $a2, $v1
    ctx->r5 = SUB32(ctx->r6, ctx->r3);
    // 0x8007F018: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8007F01C: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8007F020: beq         $v0, $zero, L_8007F038
    if (ctx->r2 == 0) {
        // 0x8007F024: srl         $v0, $a0, 31
        ctx->r2 = S32(U32(ctx->r4) >> 31);
            goto L_8007F038;
    }
    // 0x8007F024: srl         $v0, $a0, 31
    ctx->r2 = S32(U32(ctx->r4) >> 31);
    // 0x8007F028: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8007F02C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8007F030: j           L_8007F044
    // 0x8007F034: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
        goto L_8007F044;
    // 0x8007F034: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
L_8007F038:
    // 0x8007F038: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007F03C: lh          $v0, -0x448($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X448);
    // 0x8007F040: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
L_8007F044:
    // 0x8007F044: beq         $v0, $zero, L_8007F068
    if (ctx->r2 == 0) {
        // 0x8007F048: nop
    
            goto L_8007F068;
    }
    // 0x8007F048: nop

    // 0x8007F04C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007F050: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007F054: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007F058: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F05C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F060: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x8007F064: sw          $s3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r19;
L_8007F068:
    // 0x8007F068: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8007F06C: beq         $v0, $zero, L_8007F224
    if (ctx->r2 == 0) {
        // 0x8007F070: nop
    
            goto L_8007F224;
    }
    // 0x8007F070: nop

    // 0x8007F074: jal         0x800281C8
    // 0x8007F078: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800281C8_35C8(rdram, ctx);
        goto after_5;
    // 0x8007F078: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_5:
    // 0x8007F07C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8007F080: beq         $a3, $zero, L_8007F224
    if (ctx->r7 == 0) {
        // 0x8007F084: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8007F224;
    }
    // 0x8007F084: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8007F088: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007F08C: lw          $v0, -0x44F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X44F0);
    // 0x8007F090: sw          $fp, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r30;
    // 0x8007F094: sw          $s0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r16;
    // 0x8007F098: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x8007F09C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8007F0A0: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8007F0A4: addiu       $a2, $a2, -0x1A08
    ctx->r6 = ADD32(ctx->r6, -0X1A08);
    // 0x8007F0A8: jal         0x80028220
    // 0x8007F0AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80028220_3620(rdram, ctx);
        goto after_6;
    // 0x8007F0AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x8007F0B0: j           L_8007F224
    // 0x8007F0B4: nop

        goto L_8007F224;
    // 0x8007F0B4: nop

L_8007F0B8:
    // 0x8007F0B8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8007F0BC: beq         $v0, $zero, L_8007F0E0
    if (ctx->r2 == 0) {
        // 0x8007F0C0: nop
    
            goto L_8007F0E0;
    }
    // 0x8007F0C0: nop

    // 0x8007F0C4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007F0C8: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007F0CC: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007F0D0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F0D4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F0D8: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x8007F0DC: sw          $s1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r17;
L_8007F0E0:
    // 0x8007F0E0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8007F0E4: beq         $v0, $zero, L_8007F224
    if (ctx->r2 == 0) {
        // 0x8007F0E8: nop
    
            goto L_8007F224;
    }
    // 0x8007F0E8: nop

    // 0x8007F0EC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007F0F0: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007F0F4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007F0F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F0FC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F100: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x8007F104: j           L_8007F224
    // 0x8007F108: sw          $s2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r18;
        goto L_8007F224;
    // 0x8007F108: sw          $s2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r18;
L_8007F10C:
    // 0x8007F10C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8007F110: beq         $v0, $zero, L_8007F120
    if (ctx->r2 == 0) {
        // 0x8007F114: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8007F120;
    }
    // 0x8007F114: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8007F118: jal         0x8007D798
    // 0x8007F11C: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_8007D798_58B98(rdram, ctx);
        goto after_7;
    // 0x8007F11C: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_7:
L_8007F120:
    // 0x8007F120: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8007F124: beq         $v0, $zero, L_8007F224
    if (ctx->r2 == 0) {
        // 0x8007F128: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8007F224;
    }
    // 0x8007F128: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8007F12C: jal         0x8007D798
    // 0x8007F130: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_8007D798_58B98(rdram, ctx);
        goto after_8;
    // 0x8007F130: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_8:
    // 0x8007F134: j           L_8007F224
    // 0x8007F138: nop

        goto L_8007F224;
    // 0x8007F138: nop

L_8007F13C:
    // 0x8007F13C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8007F140: beq         $v0, $zero, L_8007F184
    if (ctx->r2 == 0) {
        // 0x8007F144: nop
    
            goto L_8007F184;
    }
    // 0x8007F144: nop

    // 0x8007F148: jal         0x800281C8
    // 0x8007F14C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800281C8_35C8(rdram, ctx);
        goto after_9;
    // 0x8007F14C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_9:
    // 0x8007F150: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8007F154: beq         $a3, $zero, L_8007F184
    if (ctx->r7 == 0) {
        // 0x8007F158: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8007F184;
    }
    // 0x8007F158: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8007F15C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007F160: lw          $v0, -0x44F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X44F0);
    // 0x8007F164: sw          $fp, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r30;
    // 0x8007F168: sw          $s0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r16;
    // 0x8007F16C: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x8007F170: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8007F174: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8007F178: addiu       $a2, $a2, -0x1A08
    ctx->r6 = ADD32(ctx->r6, -0X1A08);
    // 0x8007F17C: jal         0x80028220
    // 0x8007F180: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80028220_3620(rdram, ctx);
        goto after_10;
    // 0x8007F180: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_10:
L_8007F184:
    // 0x8007F184: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8007F188: beq         $v0, $zero, L_8007F1AC
    if (ctx->r2 == 0) {
        // 0x8007F18C: nop
    
            goto L_8007F1AC;
    }
    // 0x8007F18C: nop

    // 0x8007F190: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007F194: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007F198: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007F19C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F1A0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F1A4: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
    // 0x8007F1A8: sw          $s2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r18;
L_8007F1AC:
    // 0x8007F1AC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8007F1B0: beq         $v0, $zero, L_8007F1C0
    if (ctx->r2 == 0) {
        // 0x8007F1B4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8007F1C0;
    }
    // 0x8007F1B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8007F1B8: jal         0x8007DA78
    // 0x8007F1BC: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_8007DA78_58E78(rdram, ctx);
        goto after_11;
    // 0x8007F1BC: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_11:
L_8007F1C0:
    // 0x8007F1C0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8007F1C4: beq         $v0, $zero, L_8007F224
    if (ctx->r2 == 0) {
        // 0x8007F1C8: nop
    
            goto L_8007F224;
    }
    // 0x8007F1C8: nop

    // 0x8007F1CC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8007F1D0: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8007F1D4: bne         $v0, $zero, L_8007F224
    if (ctx->r2 != 0) {
        // 0x8007F1D8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8007F224;
    }
    // 0x8007F1D8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8007F1DC: jal         0x8007DA78
    // 0x8007F1E0: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_8007DA78_58E78(rdram, ctx);
        goto after_12;
    // 0x8007F1E0: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_12:
    // 0x8007F1E4: j           L_8007F224
    // 0x8007F1E8: nop

        goto L_8007F224;
    // 0x8007F1E8: nop

L_8007F1EC:
    // 0x8007F1EC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8007F1F0: beq         $v0, $zero, L_8007F200
    if (ctx->r2 == 0) {
        // 0x8007F1F4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8007F200;
    }
    // 0x8007F1F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8007F1F8: jal         0x8007E024
    // 0x8007F1FC: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_8007E024_59424(rdram, ctx);
        goto after_13;
    // 0x8007F1FC: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_13:
L_8007F200:
    // 0x8007F200: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8007F204: beq         $v0, $zero, L_8007F224
    if (ctx->r2 == 0) {
        // 0x8007F208: nop
    
            goto L_8007F224;
    }
    // 0x8007F208: nop

    // 0x8007F20C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8007F210: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8007F214: bne         $v0, $zero, L_8007F224
    if (ctx->r2 != 0) {
        // 0x8007F218: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8007F224;
    }
    // 0x8007F218: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8007F21C: jal         0x8007E024
    // 0x8007F220: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_8007E024_59424(rdram, ctx);
        goto after_14;
    // 0x8007F220: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_14:
L_8007F224:
    // 0x8007F224: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8007F228: sll         $v0, $t4, 2
    ctx->r2 = S32(ctx->r12 << 2);
    // 0x8007F22C: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x8007F230: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8007F234: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8007F238: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007F23C: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x8007F240: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8007F244: bne         $v0, $zero, L_8007ECAC
    if (ctx->r2 != 0) {
        // 0x8007F248: addiu       $v0, $s4, -0x1
        ctx->r2 = ADD32(ctx->r20, -0X1);
            goto L_8007ECAC;
    }
    // 0x8007F248: addiu       $v0, $s4, -0x1
    ctx->r2 = ADD32(ctx->r20, -0X1);
L_8007F24C:
    // 0x8007F24C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x8007F250: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x8007F254: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x8007F258: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x8007F25C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x8007F260: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8007F264: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x8007F268: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8007F26C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8007F270: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8007F274: jr          $ra
    // 0x8007F278: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x8007F278: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8008D818_68C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D818: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D81C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D820: sb          $v0, 0xD8($a0)
    MEM_B(0XD8, ctx->r4) = ctx->r2;
    // 0x8008D824: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D828: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D82C: sb          $v0, 0xCE($a0)
    MEM_B(0XCE, ctx->r4) = ctx->r2;
    // 0x8008D830: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D834: sb          $v0, 0xCF($a0)
    MEM_B(0XCF, ctx->r4) = ctx->r2;
    // 0x8008D838: jr          $ra
    // 0x8008D83C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    TRACE_RETURN()
    return;
    // 0x8008D83C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
;}
RECOMP_FUNC void func_80061E54_3D254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061E54: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80061E58: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80061E5C: jr          $ra
    // 0x80061E60: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80061E60: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8004C270_27670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004C270: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C274: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8004C278: addiu       $v0, $v0, -0x2290
    ctx->r2 = ADD32(ctx->r2, -0X2290);
    // 0x8004C27C: addiu       $v1, $v0, 0x1600
    ctx->r3 = ADD32(ctx->r2, 0X1600);
    // 0x8004C280: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C284: sw          $v0, 0x6B48($at)
    MEM_W(0X6B48, ctx->r1) = ctx->r2;
    // 0x8004C288: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004C28C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C290: beq         $v0, $zero, L_8004C304
    if (ctx->r2 == 0) {
        // 0x8004C294: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8004C304;
    }
    // 0x8004C294: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004C298: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_8004C29C:
    // 0x8004C29C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004C2A0: lw          $a0, 0x6B48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6B48);
    // 0x8004C2A4: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8004C2A8: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x8004C2AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8004C2B0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8004C2B4: beq         $v0, $zero, L_8004C2E4
    if (ctx->r2 == 0) {
        // 0x8004C2B8: nop
    
            goto L_8004C2E4;
    }
    // 0x8004C2B8: nop

    // 0x8004C2BC: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8004C2C0: sltiu       $v0, $v1, 0x80
    ctx->r2 = ctx->r3 < 0X80 ? 1 : 0;
    // 0x8004C2C4: beq         $v0, $zero, L_8004C2E4
    if (ctx->r2 == 0) {
        // 0x8004C2C8: sll         $v1, $v1, 2
        ctx->r3 = S32(ctx->r3 << 2);
            goto L_8004C2E4;
    }
    // 0x8004C2C8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8004C2CC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8004C2D0: lw          $v0, -0xBD8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XBD8);
    // 0x8004C2D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004C2D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8004C2DC: jalr        $v0
    // 0x8004C2E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8004C2E0: nop

    after_0:
L_8004C2E4:
    // 0x8004C2E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004C2E8: lw          $v0, 0x6B48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6B48);
    // 0x8004C2EC: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x8004C2F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C2F4: sw          $v0, 0x6B48($at)
    MEM_W(0X6B48, ctx->r1) = ctx->r2;
    // 0x8004C2F8: sltu        $v0, $v0, $s0
    ctx->r2 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x8004C2FC: bne         $v0, $zero, L_8004C29C
    if (ctx->r2 != 0) {
        // 0x8004C300: nop
    
            goto L_8004C29C;
    }
    // 0x8004C300: nop

L_8004C304:
    // 0x8004C304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C308: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004C30C: jr          $ra
    // 0x8004C310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004C310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008AA50_65E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008AA50: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8008AA54: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008AA58: lw          $a0, 0x4FBC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4FBC);
    // 0x8008AA5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008AA60: bne         $a0, $zero, L_8008AA84
    if (ctx->r4 != 0) {
        // 0x8008AA64: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_8008AA84;
    }
    // 0x8008AA64: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8008AA68: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008AA6C: lw          $a0, 0x4FB8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4FB8);
    // 0x8008AA70: bne         $a0, $zero, L_8008AA8C
    if (ctx->r4 != 0) {
        // 0x8008AA74: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8008AA8C;
    }
    // 0x8008AA74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8008AA78: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008AA7C: j           L_8008AAC4
    // 0x8008AA80: sw          $zero, 0x4FA8($at)
    MEM_W(0X4FA8, ctx->r1) = 0;
        goto L_8008AAC4;
    // 0x8008AA80: sw          $zero, 0x4FA8($at)
    MEM_W(0X4FA8, ctx->r1) = 0;
L_8008AA84:
    // 0x8008AA84: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008AA88: sw          $zero, 0x4FBC($at)
    MEM_W(0X4FBC, ctx->r1) = 0;
L_8008AA8C:
    // 0x8008AA8C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008AA90: lw          $v0, 0x4FA8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FA8);
    // 0x8008AA94: bne         $v0, $zero, L_8008AAAC
    if (ctx->r2 != 0) {
        // 0x8008AA98: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8008AAAC;
    }
    // 0x8008AA98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8008AA9C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8008AAA0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008AAA4: sw          $v0, 0x4FA8($at)
    MEM_W(0X4FA8, ctx->r1) = ctx->r2;
    // 0x8008AAA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8008AAAC:
    // 0x8008AAAC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x8008AAB0: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x8008AAB4: jal         0x8008CE04
    // 0x8008AAB8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8008CE04_68204(rdram, ctx);
        goto after_0;
    // 0x8008AAB8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8008AABC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008AAC0: sw          $zero, 0x4FA8($at)
    MEM_W(0X4FA8, ctx->r1) = 0;
L_8008AAC4:
    // 0x8008AAC4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8008AAC8: jr          $ra
    // 0x8008AACC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008AACC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80030688_BA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030688: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8003068C: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80030690: addiu       $v0, $zero, 0x68
    ctx->r2 = ADD32(0, 0X68);
    // 0x80030694: jr          $ra
    // 0x80030698: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80030698: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80071ACC_4CECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80071ACC: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80071AD0: lw          $a3, 0x55A0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X55A0);
    // 0x80071AD4: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80071AD8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80071ADC: lw          $t0, 0x4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X4);
    // 0x80071AE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80071AE4: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x80071AE8: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x80071AEC: lw          $t2, 0x5088($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5088);
    // 0x80071AF0: beq         $t0, $zero, L_80071B3C
    if (ctx->r8 == 0) {
        // 0x80071AF4: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_80071B3C;
    }
    // 0x80071AF4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x80071AF8: addu        $t1, $a3, $zero
    ctx->r9 = ADD32(ctx->r7, 0);
    // 0x80071AFC: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
L_80071B00:
    // 0x80071B00: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80071B04: bnel        $v0, $a1, L_80071B14
    if (ctx->r2 != ctx->r5) {
        // 0x80071B08: addiu       $a2, $a2, 0x30
        ctx->r6 = ADD32(ctx->r6, 0X30);
            goto L_80071B14;
    }
    goto skip_0;
    // 0x80071B08: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    skip_0:
    // 0x80071B0C: j           L_80071B3C
    // 0x80071B10: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
        goto L_80071B3C;
    // 0x80071B10: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
L_80071B14:
    // 0x80071B14: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x80071B18: beq         $v1, $zero, L_80071B2C
    if (ctx->r3 == 0) {
        // 0x80071B1C: addiu       $a3, $a3, 0x30
        ctx->r7 = ADD32(ctx->r7, 0X30);
            goto L_80071B2C;
    }
    // 0x80071B1C: addiu       $a3, $a3, 0x30
    ctx->r7 = ADD32(ctx->r7, 0X30);
    // 0x80071B20: sltu        $v0, $v1, $t0
    ctx->r2 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x80071B24: bnel        $v0, $zero, L_80071B2C
    if (ctx->r2 != 0) {
        // 0x80071B28: addu        $t0, $v1, $zero
        ctx->r8 = ADD32(ctx->r3, 0);
            goto L_80071B2C;
    }
    goto skip_1;
    // 0x80071B28: addu        $t0, $v1, $zero
    ctx->r8 = ADD32(ctx->r3, 0);
    skip_1:
L_80071B2C:
    // 0x80071B2C: subu        $v0, $a3, $t1
    ctx->r2 = SUB32(ctx->r7, ctx->r9);
    // 0x80071B30: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x80071B34: bne         $v0, $zero, L_80071B00
    if (ctx->r2 != 0) {
        // 0x80071B38: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_80071B00;
    }
    // 0x80071B38: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80071B3C:
    // 0x80071B3C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80071B40: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80071B44: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80071B48: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071B4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80071B50: sw          $v1, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r3;
    // 0x80071B54: jr          $ra
    // 0x80071B58: addu        $v0, $t2, $zero
    ctx->r2 = ADD32(ctx->r10, 0);
    TRACE_RETURN()
    return;
    // 0x80071B58: addu        $v0, $t2, $zero
    ctx->r2 = ADD32(ctx->r10, 0);
;}
RECOMP_FUNC void func_800A014C_7B54C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A014C: jr          $ra
    // 0x800A0150: nop

    TRACE_RETURN()
    return;
    // 0x800A0150: nop

;}
RECOMP_FUNC void func_8008E3B8_697B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008E3B8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8008E3BC: addiu       $v1, $v1, -0x11DC
    ctx->r3 = ADD32(ctx->r3, -0X11DC);
    // 0x8008E3C0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8008E3C4: beq         $v0, $zero, L_8008E3F4
    if (ctx->r2 == 0) {
        // 0x8008E3C8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8008E3F4;
    }
    // 0x8008E3C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008E3CC: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_8008E3D0:
    // 0x8008E3D0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8008E3D4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8008E3D8: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8008E3DC: bnel        $v0, $zero, L_8008E3E4
    if (ctx->r2 != 0) {
        // 0x8008E3E0: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8008E3E4;
    }
    goto skip_0;
    // 0x8008E3E0: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    skip_0:
L_8008E3E4:
    // 0x8008E3E4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8008E3E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8008E3EC: bne         $v0, $zero, L_8008E3D0
    if (ctx->r2 != 0) {
        // 0x8008E3F0: nop
    
            goto L_8008E3D0;
    }
    // 0x8008E3F0: nop

L_8008E3F4:
    // 0x8008E3F4: jr          $ra
    // 0x8008E3F8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008E3F8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_80035868_10C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035868: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8003586C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80035870: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x80035874: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80035878: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x8003587C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80035880: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80035884: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80035888: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8003588C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80035890: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80035894: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80035898: jal         0x80081380
    // 0x8003589C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_80081380_5C780(rdram, ctx);
        goto after_0;
    // 0x8003589C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x800358A0: lh          $v0, 0x100($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X100);
    // 0x800358A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800358A8: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x800358AC: lw          $s1, 0x0($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X0);
    // 0x800358B0: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x800358B4: lw          $s7, 0x0($s1)
    ctx->r23 = MEM_W(ctx->r17, 0X0);
    // 0x800358B8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x800358BC: blez        $s7, L_8003591C
    if (SIGNED(ctx->r23) <= 0) {
        // 0x800358C0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8003591C;
    }
    // 0x800358C0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800358C4: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x800358C8: addiu       $s2, $zero, -0x8
    ctx->r18 = ADD32(0, -0X8);
L_800358CC:
    // 0x800358CC: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x800358D0: addu        $s3, $s1, $zero
    ctx->r19 = ADD32(ctx->r17, 0);
    // 0x800358D4: lhu         $a0, 0x1E($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X1E);
    // 0x800358D8: jal         0x80081688
    // 0x800358DC: addiu       $s0, $s0, 0x8C
    ctx->r16 = ADD32(ctx->r16, 0X8C);
    func_80081688_5CA88(rdram, ctx);
        goto after_1;
    // 0x800358DC: addiu       $s0, $s0, 0x8C
    ctx->r16 = ADD32(ctx->r16, 0X8C);
    after_1:
    // 0x800358E0: lh          $a0, 0x1C($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1C);
    // 0x800358E4: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x800358E8: beq         $a0, $s5, L_800358FC
    if (ctx->r4 == ctx->r21) {
        // 0x800358EC: addu        $s0, $s0, $v0
        ctx->r16 = ADD32(ctx->r16, ctx->r2);
            goto L_800358FC;
    }
    // 0x800358EC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x800358F0: jal         0x8021DD64
    // 0x800358F4: nop

    func_8021DD64_ovl1(rdram, ctx);
        goto after_2;
    // 0x800358F4: nop

    after_2:
    // 0x800358F8: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_800358FC:
    // 0x800358FC: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x80035900: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80035904: addiu       $v1, $v0, 0x7
    ctx->r3 = ADD32(ctx->r2, 0X7);
    // 0x80035908: and         $v1, $v1, $s2
    ctx->r3 = ctx->r3 & ctx->r18;
    // 0x8003590C: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80035910: slt         $v0, $s4, $s7
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x80035914: bne         $v0, $zero, L_800358CC
    if (ctx->r2 != 0) {
        // 0x80035918: addu        $s0, $s0, $v1
        ctx->r16 = ADD32(ctx->r16, ctx->r3);
            goto L_800358CC;
    }
    // 0x80035918: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
L_8003591C:
    // 0x8003591C: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x80035920: addiu       $v0, $v0, 0x4784
    ctx->r2 = ADD32(ctx->r2, 0X4784);
    // 0x80035924: sll         $v1, $s6, 2
    ctx->r3 = S32(ctx->r22 << 2);
    // 0x80035928: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x8003592C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80035930: sll         $v0, $s7, 3
    ctx->r2 = S32(ctx->r23 << 3);
    // 0x80035934: beq         $a0, $zero, L_80035944
    if (ctx->r4 == 0) {
        // 0x80035938: addu        $s0, $s0, $v0
        ctx->r16 = ADD32(ctx->r16, ctx->r2);
            goto L_80035944;
    }
    // 0x80035938: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8003593C: jal         0x80025FF8
    // 0x80035940: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_3;
    // 0x80035940: nop

    after_3:
L_80035944:
    // 0x80035944: jal         0x80025E1C
    // 0x80035948: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80025E1C_121C(rdram, ctx);
        goto after_4;
    // 0x80035948: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8003594C: jal         0x80081380
    // 0x80035950: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    func_80081380_5C780(rdram, ctx);
        goto after_5;
    // 0x80035950: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    after_5:
    // 0x80035954: lh          $v0, 0x100($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X100);
    // 0x80035958: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003595C: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x80035960: lw          $s1, 0x0($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X0);
    // 0x80035964: lw          $s6, 0x0($s2)
    ctx->r22 = MEM_W(ctx->r18, 0X0);
    // 0x80035968: lw          $s7, 0x0($s1)
    ctx->r23 = MEM_W(ctx->r17, 0X0);
    // 0x8003596C: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80035970: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80035974: sw          $s7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r23;
    // 0x80035978: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x8003597C: sll         $v0, $s7, 4
    ctx->r2 = S32(ctx->r23 << 4);
    // 0x80035980: blez        $s7, L_80035A78
    if (SIGNED(ctx->r23) <= 0) {
        // 0x80035984: addu        $s2, $s6, $v0
        ctx->r18 = ADD32(ctx->r22, ctx->r2);
            goto L_80035A78;
    }
    // 0x80035984: addu        $s2, $s6, $v0
    ctx->r18 = ADD32(ctx->r22, ctx->r2);
    // 0x80035988: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_8003598C:
    // 0x8003598C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80035990: jal         0x8009A3B4
    // 0x80035994: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80035994: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x80035998: addu        $s5, $s6, $zero
    ctx->r21 = ADD32(ctx->r22, 0);
    // 0x8003599C: addiu       $s6, $s6, 0x10
    ctx->r22 = ADD32(ctx->r22, 0X10);
    // 0x800359A0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x800359A4: addu        $s3, $s1, $zero
    ctx->r19 = ADD32(ctx->r17, 0);
    // 0x800359A8: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x800359AC: lhu         $a0, 0x1E($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X1E);
    // 0x800359B0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x800359B4: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x800359B8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x800359BC: jal         0x80081398
    // 0x800359C0: addiu       $a3, $s0, 0x7C
    ctx->r7 = ADD32(ctx->r16, 0X7C);
    func_80081398_5C798(rdram, ctx);
        goto after_7;
    // 0x800359C0: addiu       $a3, $s0, 0x7C
    ctx->r7 = ADD32(ctx->r16, 0X7C);
    after_7:
    // 0x800359C4: lh          $a0, 0x1C($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1C);
    // 0x800359C8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x800359CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800359D0: beq         $a0, $v0, L_800359E4
    if (ctx->r4 == ctx->r2) {
        // 0x800359D4: addu        $a1, $s5, $zero
        ctx->r5 = ADD32(ctx->r21, 0);
            goto L_800359E4;
    }
    // 0x800359D4: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x800359D8: jal         0x8021DB90
    // 0x800359DC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_8021DB90_ovl1(rdram, ctx);
        goto after_8;
    // 0x800359DC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_8:
    // 0x800359E0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_800359E4:
    // 0x800359E4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x800359E8: lbu         $v0, 0xC($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XC);
    // 0x800359EC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x800359F0: lbu         $v1, 0xE($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XE);
    // 0x800359F4: addiu       $v0, $zero, 0xB0
    ctx->r2 = ADD32(0, 0XB0);
    // 0x800359F8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x800359FC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80035A00: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80035A04: lw          $a2, 0x4($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X4);
    // 0x80035A08: beql        $a2, $zero, L_80035A6C
    if (ctx->r6 == 0) {
        // 0x80035A0C: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80035A6C;
    }
    goto skip_0;
    // 0x80035A0C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80035A10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80035A14: jal         0x80099F90
    // 0x80035A18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    bcopy_recomp(rdram, ctx);
        goto after_9;
    // 0x80035A18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_9:
    // 0x80035A1C: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x80035A20: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x80035A24: beq         $v0, $zero, L_80035A50
    if (ctx->r2 == 0) {
        // 0x80035A28: nop
    
            goto L_80035A50;
    }
    // 0x80035A28: nop

    // 0x80035A2C: addiu       $a0, $s2, 0x8
    ctx->r4 = ADD32(ctx->r18, 0X8);
L_80035A30:
    // 0x80035A30: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80035A34: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80035A38: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80035A3C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80035A40: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80035A44: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80035A48: bne         $v0, $zero, L_80035A30
    if (ctx->r2 != 0) {
        // 0x80035A4C: nop
    
            goto L_80035A30;
    }
    // 0x80035A4C: nop

L_80035A50:
    // 0x80035A50: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x80035A54: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x80035A58: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80035A5C: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x80035A60: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80035A64: and         $s2, $v0, $v1
    ctx->r18 = ctx->r2 & ctx->r3;
    // 0x80035A68: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80035A6C:
    // 0x80035A6C: slt         $v0, $s4, $s7
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x80035A70: bne         $v0, $zero, L_8003598C
    if (ctx->r2 != 0) {
        // 0x80035A74: addu        $a0, $s6, $zero
        ctx->r4 = ADD32(ctx->r22, 0);
            goto L_8003598C;
    }
    // 0x80035A74: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
L_80035A78:
    // 0x80035A78: lh          $v0, 0x100($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X100);
    // 0x80035A7C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80035A80: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x80035A84: jal         0x80025FF8
    // 0x80035A88: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_80025FF8_13F8(rdram, ctx);
        goto after_10;
    // 0x80035A88: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_10:
    // 0x80035A8C: lh          $v0, 0x100($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X100);
    // 0x80035A90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80035A94: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x80035A98: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80035A9C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80035AA0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80035AA4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80035AA8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80035AAC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80035AB0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80035AB4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80035AB8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80035ABC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80035AC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80035AC4: jr          $ra
    // 0x80035AC8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80035AC8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80078BC0_53FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80078BC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078BC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80078BC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80078BCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078BD0: lhu         $v0, 0x3E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3E);
    // 0x80078BD4: lhu         $v1, 0x3E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3E);
    // 0x80078BD8: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    // 0x80078BDC: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x80078BE0: sh          $zero, 0x26($s0)
    MEM_H(0X26, ctx->r16) = 0;
    // 0x80078BE4: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    // 0x80078BE8: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    // 0x80078BEC: sh          $zero, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = 0;
    // 0x80078BF0: sh          $zero, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = 0;
    // 0x80078BF4: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x80078BF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80078BFC: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80078C00: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x80078C04: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80078C08: jal         0x800319B4
    // 0x80078C0C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800319B4_CDB4(rdram, ctx);
        goto after_0;
    // 0x80078C0C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_0:
    // 0x80078C10: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x80078C14: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    // 0x80078C18: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x80078C1C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80078C20: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80078C24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80078C28: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x80078C2C: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x80078C30: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x80078C34: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80078C38: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80078C3C: lhu         $v0, -0x3250($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3250);
    // 0x80078C40: lhu         $v1, 0x3E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3E);
    // 0x80078C44: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x80078C48: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80078C4C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80078C50: bltz        $a0, L_80078C64
    if (SIGNED(ctx->r4) < 0) {
        // 0x80078C54: sh          $v1, 0x3E($s0)
        MEM_H(0X3E, ctx->r16) = ctx->r3;
            goto L_80078C64;
    }
    // 0x80078C54: sh          $v1, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r3;
    // 0x80078C58: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80078C5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80078C60: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80078C64:
    // 0x80078C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078C68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80078C6C: jr          $ra
    // 0x80078C70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80078C70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006F81C_4AC1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F81C: jr          $ra
    // 0x8006F820: nop

    TRACE_RETURN()
    return;
    // 0x8006F820: nop

;}
RECOMP_FUNC void func_80062490_3D890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062490: lhu         $v0, 0xBE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XBE);
    // 0x80062494: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80062498: sh          $v1, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r3;
    // 0x8006249C: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x800624A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800624A4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800624A8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x800624AC: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x800624B0: lw          $a1, 0x44($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X44);
    // 0x800624B4: beq         $a1, $zero, L_800624EC
    if (ctx->r5 == 0) {
        // 0x800624B8: nop
    
            goto L_800624EC;
    }
    // 0x800624B8: nop

    // 0x800624BC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x800624C0: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x800624C4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800624C8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800624CC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x800624D0: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x800624D4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x800624D8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x800624DC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800624E0: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x800624E4: j           L_80062508
    // 0x800624E8: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
        goto L_80062508;
    // 0x800624E8: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
L_800624EC:
    // 0x800624EC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x800624F0: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x800624F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800624F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800624FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80062500: lw          $v0, 0x27EC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X27EC);
    // 0x80062504: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_80062508:
    // 0x80062508: jr          $ra
    // 0x8006250C: nop

    TRACE_RETURN()
    return;
    // 0x8006250C: nop

;}
RECOMP_FUNC void func_8006F680_4AA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F684: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006F688: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006F68C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F690: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F694: bne         $v0, $zero, L_8006F6B4
    if (ctx->r2 != 0) {
        // 0x8006F698: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8006F6B4;
    }
    // 0x8006F698: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8006F69C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006F6A0: jal         0x8006FB90
    // 0x8006F6A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_0;
    // 0x8006F6A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8006F6A8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F6AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006F6B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006F6B4:
    // 0x8006F6B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F6B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006F6BC: jr          $ra
    // 0x8006F6C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006F6C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80093AB0_6EEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093AB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80093AB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80093AB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80093ABC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80093AC0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80093AC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80093AC8: jal         0x80094460
    // 0x80093ACC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80093ACC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80093AD0: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x80093AD4: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80093AD8: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x80093ADC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80093AE0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80093AE4: lbu         $v1, -0x3C39($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3C39);
    // 0x80093AE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80093AEC: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80093AF0: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80093AF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80093AF8: beq         $a0, $v0, L_80093B2C
    if (ctx->r4 == ctx->r2) {
        // 0x80093AFC: andi        $a2, $v1, 0x80
        ctx->r6 = ctx->r3 & 0X80;
            goto L_80093B2C;
    }
    // 0x80093AFC: andi        $a2, $v1, 0x80
    ctx->r6 = ctx->r3 & 0X80;
    // 0x80093B00: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80093B04: beql        $v0, $zero, L_80093B1C
    if (ctx->r2 == 0) {
        // 0x80093B08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80093B1C;
    }
    goto skip_0;
    // 0x80093B08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80093B0C: beq         $a0, $zero, L_80093B44
    if (ctx->r4 == 0) {
        // 0x80093B10: or          $v0, $s1, $a2
        ctx->r2 = ctx->r17 | ctx->r6;
            goto L_80093B44;
    }
    // 0x80093B10: or          $v0, $s1, $a2
    ctx->r2 = ctx->r17 | ctx->r6;
    // 0x80093B14: j           L_80093B90
    // 0x80093B18: nop

        goto L_80093B90;
    // 0x80093B18: nop

L_80093B1C:
    // 0x80093B1C: beq         $a0, $v0, L_80093B54
    if (ctx->r4 == ctx->r2) {
        // 0x80093B20: or          $v0, $s1, $a2
        ctx->r2 = ctx->r17 | ctx->r6;
            goto L_80093B54;
    }
    // 0x80093B20: or          $v0, $s1, $a2
    ctx->r2 = ctx->r17 | ctx->r6;
    // 0x80093B24: j           L_80093B90
    // 0x80093B28: nop

        goto L_80093B90;
    // 0x80093B28: nop

L_80093B2C:
    // 0x80093B2C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80093B30: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80093B34: lbu         $v1, -0x3C37($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3C37);
    // 0x80093B38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80093B3C: bne         $v1, $v0, L_80093B90
    if (ctx->r3 != ctx->r2) {
        // 0x80093B40: or          $v0, $s1, $a2
        ctx->r2 = ctx->r17 | ctx->r6;
            goto L_80093B90;
    }
    // 0x80093B40: or          $v0, $s1, $a2
    ctx->r2 = ctx->r17 | ctx->r6;
L_80093B44:
    // 0x80093B44: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80093B48: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80093B4C: j           L_80093B90
    // 0x80093B50: sb          $v0, -0x3C39($at)
    MEM_B(-0X3C39, ctx->r1) = ctx->r2;
        goto L_80093B90;
    // 0x80093B50: sb          $v0, -0x3C39($at)
    MEM_B(-0X3C39, ctx->r1) = ctx->r2;
L_80093B54:
    // 0x80093B54: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80093B58: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80093B5C: lbu         $v1, -0x3C37($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3C37);
    // 0x80093B60: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80093B64: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80093B68: sb          $v0, -0x3C39($at)
    MEM_B(-0X3C39, ctx->r1) = ctx->r2;
    // 0x80093B6C: bne         $v1, $a0, L_80093B84
    if (ctx->r3 != ctx->r4) {
        // 0x80093B70: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80093B84;
    }
    // 0x80093B70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80093B74: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80093B78: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80093B7C: j           L_80093B90
    // 0x80093B80: sb          $v0, -0x3C38($at)
    MEM_B(-0X3C38, ctx->r1) = ctx->r2;
        goto L_80093B90;
    // 0x80093B80: sb          $v0, -0x3C38($at)
    MEM_B(-0X3C38, ctx->r1) = ctx->r2;
L_80093B84:
    // 0x80093B84: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80093B88: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80093B8C: sb          $zero, -0x3C38($at)
    MEM_B(-0X3C38, ctx->r1) = 0;
L_80093B90:
    // 0x80093B90: jal         0x80094460
    // 0x80093B94: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80093B94: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    after_1:
    // 0x80093B98: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80093B9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80093BA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80093BA4: jr          $ra
    // 0x80093BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80093BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80093BAC: nop

;}
RECOMP_FUNC void func_80076EB0_522B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80076EB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80076EB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80076EB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80076EBC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80076EC0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80076EC4: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80076EC8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80076ECC: addiu       $s1, $s1, 0x47B8
    ctx->r17 = ADD32(ctx->r17, 0X47B8);
    // 0x80076ED0: beq         $v1, $zero, L_80076EE8
    if (ctx->r3 == 0) {
        // 0x80076ED4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80076EE8;
    }
    // 0x80076ED4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80076ED8: beq         $v1, $v0, L_80076F14
    if (ctx->r3 == ctx->r2) {
        // 0x80076EDC: nop
    
            goto L_80076F14;
    }
    // 0x80076EDC: nop

    // 0x80076EE0: j           L_80076F6C
    // 0x80076EE4: nop

        goto L_80076F6C;
    // 0x80076EE4: nop

L_80076EE8:
    // 0x80076EE8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80076EEC: lbu         $v0, 0x49B6($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X49B6);
    // 0x80076EF0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80076EF4: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x80076EF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80076EFC: sb          $v0, 0x49B6($at)
    MEM_B(0X49B6, ctx->r1) = ctx->r2;
    // 0x80076F00: jal         0x8004CB2C
    // 0x80076F04: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80076F04: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80076F08: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80076F0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80076F10: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80076F14:
    // 0x80076F14: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80076F18: jal         0x8006FF84
    // 0x80076F1C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_1;
    // 0x80076F1C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_1:
    // 0x80076F20: beq         $v0, $zero, L_80076F6C
    if (ctx->r2 == 0) {
        // 0x80076F24: nop
    
            goto L_80076F6C;
    }
    // 0x80076F24: nop

    // 0x80076F28: lhu         $v0, 0x10($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X10);
    // 0x80076F2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80076F30: sra         $v0, $v0, 26
    ctx->r2 = S32(SIGNED(ctx->r2) >> 26);
    // 0x80076F34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80076F38: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80076F3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80076F40: lw          $v0, -0x3494($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3494);
    // 0x80076F44: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80076F48: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80076F4C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80076F50: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80076F54: addiu       $v0, $v0, -0x3474
    ctx->r2 = ADD32(ctx->r2, -0X3474);
    // 0x80076F58: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x80076F5C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80076F60: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80076F64: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80076F68: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
L_80076F6C:
    // 0x80076F6C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80076F70: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80076F74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80076F78: jr          $ra
    // 0x80076F7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80076F7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80032A90_DE90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032A90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80032A94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80032A98: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80032A9C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80032AA0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80032AA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80032AA8: jal         0x80030150
    // 0x80032AAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80030150_B550(rdram, ctx);
        goto after_0;
    // 0x80032AAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80032AB0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80032AB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80032AB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80032ABC: jal         0x80028794
    // 0x80032AC0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80028794_3B94(rdram, ctx);
        goto after_1;
    // 0x80032AC0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80032AC4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80032AC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80032ACC: jal         0x800287CC
    // 0x80032AD0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_800287CC_3BCC(rdram, ctx);
        goto after_2;
    // 0x80032AD0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_2:
    // 0x80032AD4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80032AD8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80032ADC: jal         0x800287CC
    // 0x80032AE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800287CC_3BCC(rdram, ctx);
        goto after_3;
    // 0x80032AE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80032AE4: jal         0x80028EAC
    // 0x80032AE8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    func_80028EAC_42AC(rdram, ctx);
        goto after_4;
    // 0x80032AE8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    after_4:
    // 0x80032AEC: jal         0x800306C0
    // 0x80032AF0: nop

    func_800306C0_BAC0(rdram, ctx);
        goto after_5;
    // 0x80032AF0: nop

    after_5:
    // 0x80032AF4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80032AF8: jal         0x80031ECC
    // 0x80032AFC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    func_80031ECC_D2CC(rdram, ctx);
        goto after_6;
    // 0x80032AFC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    after_6:
    // 0x80032B00: jal         0x80031F00
    // 0x80032B04: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    func_80031F00_D300(rdram, ctx);
        goto after_7;
    // 0x80032B04: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_7:
    // 0x80032B08: jal         0x8002A1C4
    // 0x80032B0C: nop

    func_8002A1C4_55C4(rdram, ctx);
        goto after_8;
    // 0x80032B0C: nop

    after_8:
    // 0x80032B10: jal         0x80032BB0
    // 0x80032B14: nop

    func_80032BB0_DFB0(rdram, ctx);
        goto after_9;
    // 0x80032B14: nop

    after_9:
    // 0x80032B18: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x80032B1C: addiu       $s3, $s3, -0x3F08
    ctx->r19 = ADD32(ctx->r19, -0X3F08);
    // 0x80032B20: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x80032B24: addiu       $s2, $s2, -0x2400
    ctx->r18 = ADD32(ctx->r18, -0X2400);
    // 0x80032B28: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80032B2C: addiu       $v0, $v0, -0x25D8
    ctx->r2 = ADD32(ctx->r2, -0X25D8);
    // 0x80032B30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80032B34: sw          $v0, 0x497C($at)
    MEM_W(0X497C, ctx->r1) = ctx->r2;
    // 0x80032B38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80032B3C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80032B40: sb          $zero, -0x2348($at)
    MEM_B(-0X2348, ctx->r1) = 0;
    // 0x80032B44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80032B48: sb          $v0, -0xC5C($at)
    MEM_B(-0XC5C, ctx->r1) = ctx->r2;
    // 0x80032B4C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80032B50: sh          $zero, -0x38AC($at)
    MEM_H(-0X38AC, ctx->r1) = 0;
    // 0x80032B54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80032B58: sh          $zero, 0x49AC($at)
    MEM_H(0X49AC, ctx->r1) = 0;
L_80032B5C:
    // 0x80032B5C: jal         0x80032498
    // 0x80032B60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80032498_D898(rdram, ctx);
        goto after_10;
    // 0x80032B60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x80032B64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80032B68: sra         $s0, $s1, 6
    ctx->r16 = S32(SIGNED(ctx->r17) >> 6);
    // 0x80032B6C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80032B70: addu        $v1, $s0, $s3
    ctx->r3 = ADD32(ctx->r16, ctx->r19);
    // 0x80032B74: jal         0x800324B4
    // 0x80032B78: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_11;
    // 0x80032B78: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    after_11:
    // 0x80032B7C: addiu       $s1, $s1, 0x40
    ctx->r17 = ADD32(ctx->r17, 0X40);
    // 0x80032B80: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x80032B84: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80032B88: slti        $v0, $s1, 0x1000
    ctx->r2 = SIGNED(ctx->r17) < 0X1000 ? 1 : 0;
    // 0x80032B8C: bne         $v0, $zero, L_80032B5C
    if (ctx->r2 != 0) {
        // 0x80032B90: nop
    
            goto L_80032B5C;
    }
    // 0x80032B90: nop

    // 0x80032B94: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80032B98: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80032B9C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80032BA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80032BA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80032BA8: jr          $ra
    // 0x80032BAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80032BAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800320DC_D4DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800320DC: jr          $ra
    // 0x800320E0: nop

    TRACE_RETURN()
    return;
    // 0x800320E0: nop

;}
RECOMP_FUNC void func_80077410_52810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80077410: jr          $ra
    // 0x80077414: nop

    TRACE_RETURN()
    return;
    // 0x80077414: nop

    // 0x80077418: nop

    // 0x8007741C: nop

;}
RECOMP_FUNC void func_8008A02C_6542C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008A02C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008A030: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008A034: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008A038: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8008A03C: jal         0x800930C0
    // 0x8008A040: sw          $zero, 0x4984($at)
    MEM_W(0X4984, ctx->r1) = 0;
    func_800930C0_6E4C0(rdram, ctx);
        goto after_0;
    // 0x8008A040: sw          $zero, 0x4984($at)
    MEM_W(0X4984, ctx->r1) = 0;
    after_0:
    // 0x8008A044: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8008A048: lw          $v1, 0x300($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X300);
    // 0x8008A04C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008A050: sb          $zero, -0x14C0($at)
    MEM_B(-0X14C0, ctx->r1) = 0;
    // 0x8008A054: bne         $v1, $zero, L_8008A06C
    if (ctx->r3 != 0) {
        // 0x8008A058: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8008A06C;
    }
    // 0x8008A058: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008A05C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008A060: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008A064: sb          $v0, -0x14C0($at)
    MEM_B(-0X14C0, ctx->r1) = ctx->r2;
    // 0x8008A068: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008A06C:
    // 0x8008A06C: beq         $v1, $v0, L_8008A07C
    if (ctx->r3 == ctx->r2) {
        // 0x8008A070: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8008A07C;
    }
    // 0x8008A070: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8008A074: beql        $v1, $v0, L_8008A080
    if (ctx->r3 == ctx->r2) {
        // 0x8008A078: addiu       $a0, $zero, 0x1E
        ctx->r4 = ADD32(0, 0X1E);
            goto L_8008A080;
    }
    goto skip_0;
    // 0x8008A078: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    skip_0:
L_8008A07C:
    // 0x8008A07C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_8008A080:
    // 0x8008A080: jal         0x80091F20
    // 0x8008A084: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    Idle_InitVideo(rdram, ctx);
        goto after_1;
    // 0x8008A084: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8008A088: jal         0x8009C6C0
    // 0x8008A08C: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_2;
    // 0x8008A08C: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    after_2:
    // 0x8008A090: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x8008A094: addiu       $s0, $s0, 0x2DA0
    ctx->r16 = ADD32(ctx->r16, 0X2DA0);
    // 0x8008A098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008A09C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8008A0A0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8008A0A4: addiu       $v0, $v0, -0x21A0
    ctx->r2 = ADD32(ctx->r2, -0X21A0);
    // 0x8008A0A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8008A0AC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8008A0B0: lui         $a2, 0x8002
    ctx->r6 = S32(0X8002 << 16);
    // 0x8008A0B4: addiu       $a2, $a2, 0x6930
    ctx->r6 = ADD32(ctx->r6, 0X6930);
    // 0x8008A0B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8008A0BC: jal         0x8009B750
    // 0x8008A0C0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    osCreateThread_recomp(rdram, ctx);
        goto after_3;
    // 0x8008A0C0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_3:
    // 0x8008A0C4: jal         0x8009B9F0
    // 0x8008A0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_4;
    // 0x8008A0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8008A0CC: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008A0D0: addiu       $a0, $a0, 0x2BF0
    ctx->r4 = ADD32(ctx->r4, 0X2BF0);
    // 0x8008A0D4: jal         0x8009B920
    // 0x8008A0D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    osSetThreadPri_recomp(rdram, ctx);
        goto after_5;
    // 0x8008A0D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
L_8008A0DC:
    // 0x8008A0DC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8008A0E0: lw          $v0, 0x4984($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4984);
L_8008A0E4:
    // 0x8008A0E4: beq         $v0, $zero, L_8008A0E4
    if (ctx->r2 == 0) {
        yield_self(rdram);
        // 0x8008A0E8: nop
    
            goto L_8008A0E4;
    }
    yield_self(rdram);
    // 0x8008A0E8: nop

    // 0x8008A0EC: jalr        $v0
    // 0x8008A0F0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x8008A0F0: nop

    after_6:
    // 0x8008A0F4: j           L_8008A0DC
    // 0x8008A0F8: nop

        goto L_8008A0DC;
    // 0x8008A0F8: nop

    // 0x8008A0FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008A100: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008A104: jr          $ra
    // 0x8008A108: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008A108: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008A10C: nop

;}
RECOMP_FUNC void func_8002FDF4_B1F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002FDF4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8002FDF8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x8002FDFC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8002FE00: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8002FE04: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8002FE08: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x8002FE0C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8002FE10: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8002FE14: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8002FE18: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8002FE1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8002FE20: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8002FE24: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8002FE28: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8002FE2C: jal         0x8009A3B4
    // 0x8002FE30: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002FE30: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8002FE34: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8002FE38: lhu         $a0, 0x10($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X10);
    // 0x8002FE3C: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8002FE40: addiu       $s3, $zero, -0x40
    ctx->r19 = ADD32(0, -0X40);
    // 0x8002FE44: lhu         $a1, 0x12($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X12);
    // 0x8002FE48: addiu       $s2, $zero, -0x100
    ctx->r18 = ADD32(0, -0X100);
    // 0x8002FE4C: and         $a0, $a0, $s3
    ctx->r4 = ctx->r4 & ctx->r19;
    // 0x8002FE50: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8002FE54: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002FE58: and         $a1, $a1, $s2
    ctx->r5 = ctx->r5 & ctx->r18;
    // 0x8002FE5C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8002FE60: jal         0x8002C9BC
    // 0x8002FE64: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8002C9BC_7DBC(rdram, ctx);
        goto after_1;
    // 0x8002FE64: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_1:
    // 0x8002FE68: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8002FE6C: bne         $s1, $zero, L_8002FEA8
    if (ctx->r17 != 0) {
        // 0x8002FE70: and         $v0, $s4, $s3
        ctx->r2 = ctx->r20 & ctx->r19;
            goto L_8002FEA8;
    }
    // 0x8002FE70: and         $v0, $s4, $s3
    ctx->r2 = ctx->r20 & ctx->r19;
    // 0x8002FE74: lhu         $a0, 0x10($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X10);
    // 0x8002FE78: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8002FE7C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x8002FE80: lhu         $a1, 0x12($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X12);
    // 0x8002FE84: and         $a0, $a0, $s3
    ctx->r4 = ctx->r4 & ctx->r19;
    // 0x8002FE88: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8002FE8C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002FE90: and         $a1, $a1, $s2
    ctx->r5 = ctx->r5 & ctx->r18;
    // 0x8002FE94: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8002FE98: jal         0x8002C9BC
    // 0x8002FE9C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8002C9BC_7DBC(rdram, ctx);
        goto after_2;
    // 0x8002FE9C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x8002FEA0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8002FEA4: and         $v0, $s4, $s3
    ctx->r2 = ctx->r20 & ctx->r19;
L_8002FEA8:
    // 0x8002FEA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002FEAC: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002FEB0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8002FEB4: and         $v0, $s5, $s2
    ctx->r2 = ctx->r21 & ctx->r18;
    // 0x8002FEB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002FEBC: sra         $s2, $v0, 16
    ctx->r18 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002FEC0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8002FEC4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8002FEC8: jal         0x8002C9BC
    // 0x8002FECC: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_8002C9BC_7DBC(rdram, ctx);
        goto after_3;
    // 0x8002FECC: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_3:
    // 0x8002FED0: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
    // 0x8002FED4: bne         $t1, $zero, L_8002FEF8
    if (ctx->r9 != 0) {
        // 0x8002FED8: sltu        $v0, $zero, $s1
        ctx->r2 = 0 < ctx->r17 ? 1 : 0;
            goto L_8002FEF8;
    }
    // 0x8002FED8: sltu        $v0, $zero, $s1
    ctx->r2 = 0 < ctx->r17 ? 1 : 0;
    // 0x8002FEDC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8002FEE0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8002FEE4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8002FEE8: jal         0x8002C9BC
    // 0x8002FEEC: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8002C9BC_7DBC(rdram, ctx);
        goto after_4;
    // 0x8002FEEC: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_4:
    // 0x8002FEF0: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
    // 0x8002FEF4: sltu        $v0, $zero, $s1
    ctx->r2 = 0 < ctx->r17 ? 1 : 0;
L_8002FEF8:
    // 0x8002FEF8: sltu        $v1, $zero, $t1
    ctx->r3 = 0 < ctx->r9 ? 1 : 0;
    // 0x8002FEFC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8002FF00: beq         $v0, $zero, L_80030128
    if (ctx->r2 == 0) {
        // 0x8002FF04: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_80030128;
    }
    // 0x8002FF04: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8002FF08: lw          $v1, 0xC($t1)
    ctx->r3 = MEM_W(ctx->r9, 0XC);
    // 0x8002FF0C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8002FF10: bne         $v1, $v0, L_8002FF54
    if (ctx->r3 != ctx->r2) {
        // 0x8002FF14: nop
    
            goto L_8002FF54;
    }
    // 0x8002FF14: nop

    // 0x8002FF18: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8002FF1C: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x8002FF20: lhu         $a0, 0x16($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X16);
    // 0x8002FF24: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8002FF28: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8002FF2C: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x8002FF30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002FF34: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8002FF38: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8002FF3C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8002FF40: sra         $v0, $a0, 16
    ctx->r2 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002FF44: srl         $a0, $a0, 31
    ctx->r4 = S32(U32(ctx->r4) >> 31);
    // 0x8002FF48: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8002FF4C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8002FF50: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
L_8002FF54:
    // 0x8002FF54: lh          $v0, 0x16($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X16);
    // 0x8002FF58: blez        $v0, L_80030120
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002FF5C: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_80030120;
    }
    // 0x8002FF5C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
L_8002FF60:
    // 0x8002FF60: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x8002FF64: blez        $v0, L_8003010C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002FF68: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_8003010C;
    }
    // 0x8002FF68: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_8002FF6C:
    // 0x8002FF6C: lh          $a2, 0x10($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X10);
    // 0x8002FF70: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x8002FF74: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x8002FF78: div         $zero, $a2, $s0
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r16)));
    // 0x8002FF7C: bne         $s0, $zero, L_8002FF88
    if (ctx->r16 != 0) {
        // 0x8002FF80: nop
    
            goto L_8002FF88;
    }
    // 0x8002FF80: nop

    // 0x8002FF84: break       7
    do_break(2147680132);
L_8002FF88:
    // 0x8002FF88: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002FF8C: bne         $s0, $at, L_8002FFA0
    if (ctx->r16 != ctx->r1) {
        // 0x8002FF90: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002FFA0;
    }
    // 0x8002FF90: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002FF94: bne         $a2, $at, L_8002FFA0
    if (ctx->r6 != ctx->r1) {
        // 0x8002FF98: nop
    
            goto L_8002FFA0;
    }
    // 0x8002FF98: nop

    // 0x8002FF9C: break       6
    do_break(2147680156);
L_8002FFA0:
    // 0x8002FFA0: mflo        $a2
    ctx->r6 = lo;
    // 0x8002FFA4: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x8002FFA8: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x8002FFAC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002FFB0: div         $zero, $v0, $s0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r16)));
    // 0x8002FFB4: bne         $s0, $zero, L_8002FFC0
    if (ctx->r16 != 0) {
        // 0x8002FFB8: nop
    
            goto L_8002FFC0;
    }
    // 0x8002FFB8: nop

    // 0x8002FFBC: break       7
    do_break(2147680188);
L_8002FFC0:
    // 0x8002FFC0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002FFC4: bne         $s0, $at, L_8002FFD8
    if (ctx->r16 != ctx->r1) {
        // 0x8002FFC8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002FFD8;
    }
    // 0x8002FFC8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002FFCC: bne         $v0, $at, L_8002FFD8
    if (ctx->r2 != ctx->r1) {
        // 0x8002FFD0: nop
    
            goto L_8002FFD8;
    }
    // 0x8002FFD0: nop

    // 0x8002FFD4: break       6
    do_break(2147680212);
L_8002FFD8:
    // 0x8002FFD8: mflo        $v0
    ctx->r2 = lo;
    // 0x8002FFDC: lh          $a0, 0x8($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X8);
    // 0x8002FFE0: subu        $a0, $s4, $a0
    ctx->r4 = SUB32(ctx->r20, ctx->r4);
    // 0x8002FFE4: div         $zero, $a0, $s0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r16)));
    // 0x8002FFE8: bne         $s0, $zero, L_8002FFF4
    if (ctx->r16 != 0) {
        // 0x8002FFEC: nop
    
            goto L_8002FFF4;
    }
    // 0x8002FFEC: nop

    // 0x8002FFF0: break       7
    do_break(2147680240);
L_8002FFF4:
    // 0x8002FFF4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002FFF8: bne         $s0, $at, L_8003000C
    if (ctx->r16 != ctx->r1) {
        // 0x8002FFFC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003000C;
    }
    // 0x8002FFFC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80030000: bne         $a0, $at, L_8003000C
    if (ctx->r4 != ctx->r1) {
        // 0x80030004: nop
    
            goto L_8003000C;
    }
    // 0x80030004: nop

    // 0x80030008: break       6
    do_break(2147680264);
L_8003000C:
    // 0x8003000C: mflo        $a0
    ctx->r4 = lo;
    // 0x80030010: lh          $v1, 0xA($t1)
    ctx->r3 = MEM_H(ctx->r9, 0XA);
    // 0x80030014: subu        $v1, $s5, $v1
    ctx->r3 = SUB32(ctx->r21, ctx->r3);
    // 0x80030018: div         $zero, $v1, $s0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r16)));
    // 0x8003001C: bne         $s0, $zero, L_80030028
    if (ctx->r16 != 0) {
        // 0x80030020: nop
    
            goto L_80030028;
    }
    // 0x80030020: nop

    // 0x80030024: break       7
    do_break(2147680292);
L_80030028:
    // 0x80030028: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003002C: bne         $s0, $at, L_80030040
    if (ctx->r16 != ctx->r1) {
        // 0x80030030: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80030040;
    }
    // 0x80030030: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80030034: bne         $v1, $at, L_80030040
    if (ctx->r3 != ctx->r1) {
        // 0x80030038: nop
    
            goto L_80030040;
    }
    // 0x80030038: nop

    // 0x8003003C: break       6
    do_break(2147680316);
L_80030040:
    // 0x80030040: mflo        $v1
    ctx->r3 = lo;
    // 0x80030044: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80030048: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8003004C: div         $zero, $v0, $s0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r16)));
    // 0x80030050: bne         $s0, $zero, L_8003005C
    if (ctx->r16 != 0) {
        // 0x80030054: nop
    
            goto L_8003005C;
    }
    // 0x80030054: nop

    // 0x80030058: break       7
    do_break(2147680344);
L_8003005C:
    // 0x8003005C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80030060: bne         $s0, $at, L_80030074
    if (ctx->r16 != ctx->r1) {
        // 0x80030064: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80030074;
    }
    // 0x80030064: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80030068: bne         $v0, $at, L_80030074
    if (ctx->r2 != ctx->r1) {
        // 0x8003006C: nop
    
            goto L_80030074;
    }
    // 0x8003006C: nop

    // 0x80030070: break       6
    do_break(2147680368);
L_80030074:
    // 0x80030074: mflo        $a1
    ctx->r5 = lo;
    // 0x80030078: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8003007C: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80030080: bgez        $a1, L_8003008C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80030084: addu        $v0, $v1, $t0
        ctx->r2 = ADD32(ctx->r3, ctx->r8);
            goto L_8003008C;
    }
    // 0x80030084: addu        $v0, $v1, $t0
    ctx->r2 = ADD32(ctx->r3, ctx->r8);
    // 0x80030088: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
L_8003008C:
    // 0x8003008C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80030090: div         $zero, $v0, $s0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r16)));
    // 0x80030094: bne         $s0, $zero, L_800300A0
    if (ctx->r16 != 0) {
        // 0x80030098: nop
    
            goto L_800300A0;
    }
    // 0x80030098: nop

    // 0x8003009C: break       7
    do_break(2147680412);
L_800300A0:
    // 0x800300A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800300A4: bne         $s0, $at, L_800300B8
    if (ctx->r16 != ctx->r1) {
        // 0x800300A8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800300B8;
    }
    // 0x800300A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800300AC: bne         $v0, $at, L_800300B8
    if (ctx->r2 != ctx->r1) {
        // 0x800300B0: nop
    
            goto L_800300B8;
    }
    // 0x800300B0: nop

    // 0x800300B4: break       6
    do_break(2147680436);
L_800300B8:
    // 0x800300B8: mflo        $v1
    ctx->r3 = lo;
    // 0x800300BC: sra         $v0, $a1, 2
    ctx->r2 = S32(SIGNED(ctx->r5) >> 2);
    // 0x800300C0: nop

    // 0x800300C4: bgez        $v1, L_800300D0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800300C8: addu        $v0, $a2, $v0
        ctx->r2 = ADD32(ctx->r6, ctx->r2);
            goto L_800300D0;
    }
    // 0x800300C8: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x800300CC: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
L_800300D0:
    // 0x800300D0: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x800300D4: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x800300D8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x800300DC: lw          $a1, 0x4($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X4);
    // 0x800300E0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800300E4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800300E8: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x800300EC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x800300F0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x800300F4: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x800300F8: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x800300FC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80030100: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80030104: bne         $v0, $zero, L_8002FF6C
    if (ctx->r2 != 0) {
        // 0x80030108: nop
    
            goto L_8002FF6C;
    }
    // 0x80030108: nop

L_8003010C:
    // 0x8003010C: lh          $v0, 0x16($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X16);
    // 0x80030110: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80030114: slt         $v0, $t0, $v0
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80030118: bne         $v0, $zero, L_8002FF60
    if (ctx->r2 != 0) {
        // 0x8003011C: nop
    
            goto L_8002FF60;
    }
    // 0x8003011C: nop

L_80030120:
    // 0x80030120: j           L_8003012C
    // 0x80030124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003012C;
    // 0x80030124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80030128:
    // 0x80030128: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8003012C:
    // 0x8003012C: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x80030130: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80030134: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80030138: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8003013C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80030140: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80030144: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80030148: jr          $ra
    // 0x8003014C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8003014C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void __scAppendList(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009B23C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8009B240: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8009B244: bne         $v1, $v0, L_8009B26C
    if (ctx->r3 != ctx->r2) {
        // 0x8009B248: nop
    
            goto L_8009B26C;
    }
    // 0x8009B248: nop

    // 0x8009B24C: lw          $v0, 0x26C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X26C);
    // 0x8009B250: beql        $v0, $zero, L_8009B25C
    if (ctx->r2 == 0) {
        // 0x8009B254: sw          $a1, 0x264($a0)
        MEM_W(0X264, ctx->r4) = ctx->r5;
            goto L_8009B25C;
    }
    goto skip_0;
    // 0x8009B254: sw          $a1, 0x264($a0)
    MEM_W(0X264, ctx->r4) = ctx->r5;
    skip_0:
    // 0x8009B258: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_8009B25C:
    // 0x8009B25C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8009B260: sw          $a1, 0x26C($a0)
    MEM_W(0X26C, ctx->r4) = ctx->r5;
    // 0x8009B264: j           L_8009B280
    // 0x8009B268: sw          $v0, 0x280($a0)
    MEM_W(0X280, ctx->r4) = ctx->r2;
        goto L_8009B280;
    // 0x8009B268: sw          $v0, 0x280($a0)
    MEM_W(0X280, ctx->r4) = ctx->r2;
L_8009B26C:
    // 0x8009B26C: lw          $v0, 0x270($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X270);
    // 0x8009B270: beql        $v0, $zero, L_8009B27C
    if (ctx->r2 == 0) {
        // 0x8009B274: sw          $a1, 0x268($a0)
        MEM_W(0X268, ctx->r4) = ctx->r5;
            goto L_8009B27C;
    }
    goto skip_1;
    // 0x8009B274: sw          $a1, 0x268($a0)
    MEM_W(0X268, ctx->r4) = ctx->r5;
    skip_1:
    // 0x8009B278: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_8009B27C:
    // 0x8009B27C: sw          $a1, 0x270($a0)
    MEM_W(0X270, ctx->r4) = ctx->r5;
L_8009B280:
    // 0x8009B280: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x8009B284: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8009B288: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8009B28C: jr          $ra
    // 0x8009B290: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8009B290: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80059360_34760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80059360: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80059364: lbu         $v0, -0x3E40($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E40);
    // 0x80059368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005936C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80059370: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80059374: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80059378: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005937C: lw          $v0, -0x1414($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1414);
    // 0x80059380: jalr        $v0
    // 0x80059384: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80059384: nop

    after_0:
    // 0x80059388: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005938C: lh          $v0, -0x3E38($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3E38);
    // 0x80059390: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80059394: jr          $ra
    // 0x80059398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80059398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004A2AC_256AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A2AC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A2B0: lh          $v0, -0x3984($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3984);
    // 0x8004A2B4: bgtz        $v0, L_8004A31C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8004A2B8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8004A31C;
    }
    // 0x8004A2B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8004A2BC: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8004A2C0: lbu         $a1, -0x3993($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X3993);
    // 0x8004A2C4: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8004A2C8: xori        $v0, $a1, 0x3
    ctx->r2 = ctx->r5 ^ 0X3;
    // 0x8004A2CC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8004A2D0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8004A2D4: beql        $v1, $zero, L_8004A31C
    if (ctx->r3 == 0) {
        // 0x8004A2D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8004A31C;
    }
    goto skip_0;
    // 0x8004A2D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x8004A2DC: beql        $a0, $zero, L_8004A31C
    if (ctx->r4 == 0) {
        // 0x8004A2E0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8004A31C;
    }
    goto skip_1;
    // 0x8004A2E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
    // 0x8004A2E4: bne         $a1, $zero, L_8004A300
    if (ctx->r5 != 0) {
        // 0x8004A2E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8004A300;
    }
    // 0x8004A2E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8004A2EC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A2F0: sb          $v0, -0x3993($at)
    MEM_B(-0X3993, ctx->r1) = ctx->r2;
    // 0x8004A2F4: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x8004A2F8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A2FC: sb          $v0, -0x3997($at)
    MEM_B(-0X3997, ctx->r1) = ctx->r2;
L_8004A300:
    // 0x8004A300: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A304: sb          $zero, -0x3996($at)
    MEM_B(-0X3996, ctx->r1) = 0;
    // 0x8004A308: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A30C: sb          $zero, -0x3995($at)
    MEM_B(-0X3995, ctx->r1) = 0;
    // 0x8004A310: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A314: sh          $zero, -0x3988($at)
    MEM_H(-0X3988, ctx->r1) = 0;
    // 0x8004A318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004A31C:
    // 0x8004A31C: jr          $ra
    // 0x8004A320: nop

    TRACE_RETURN()
    return;
    // 0x8004A320: nop

;}
RECOMP_FUNC void func_8006EF7C_4A37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006EF7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006EF80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006EF84: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8006EF88: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8006EF8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006EF90: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8006EF94: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8006EF98: lbu         $v1, 0x49B6($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X49B6);
    // 0x8006EF9C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006EFA0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8006EFA4: beq         $v0, $zero, L_8006F134
    if (ctx->r2 == 0) {
        // 0x8006EFA8: nop
    
            goto L_8006F134;
    }
    // 0x8006EFA8: nop

    // 0x8006EFAC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8006EFB0: lbu         $a1, 0x4A6D($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4A6D);
    // 0x8006EFB4: andi        $v0, $a1, 0x40
    ctx->r2 = ctx->r5 & 0X40;
    // 0x8006EFB8: bne         $v0, $zero, L_8006F038
    if (ctx->r2 != 0) {
        // 0x8006EFBC: addiu       $a0, $s0, 0x11C
        ctx->r4 = ADD32(ctx->r16, 0X11C);
            goto L_8006F038;
    }
    // 0x8006EFBC: addiu       $a0, $s0, 0x11C
    ctx->r4 = ADD32(ctx->r16, 0X11C);
    // 0x8006EFC0: andi        $v0, $a1, 0x20
    ctx->r2 = ctx->r5 & 0X20;
    // 0x8006EFC4: bne         $v0, $zero, L_8006F000
    if (ctx->r2 != 0) {
        // 0x8006EFC8: nop
    
            goto L_8006F000;
    }
    // 0x8006EFC8: nop

    // 0x8006EFCC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8006EFD0: lhu         $v0, -0x783E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783E);
    // 0x8006EFD4: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8006EFD8: lhu         $v1, -0x783A($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X783A);
    // 0x8006EFDC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8006EFE0: lhu         $a0, -0x7838($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X7838);
    // 0x8006EFE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006EFE8: sh          $v0, 0x4ACC($at)
    MEM_H(0X4ACC, ctx->r1) = ctx->r2;
    // 0x8006EFEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006EFF0: sh          $v1, 0x4ACE($at)
    MEM_H(0X4ACE, ctx->r1) = ctx->r3;
    // 0x8006EFF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006EFF8: j           L_8006F094
    // 0x8006EFFC: sh          $a0, 0x4AD0($at)
    MEM_H(0X4AD0, ctx->r1) = ctx->r4;
        goto L_8006F094;
    // 0x8006EFFC: sh          $a0, 0x4AD0($at)
    MEM_H(0X4AD0, ctx->r1) = ctx->r4;
L_8006F000:
    // 0x8006F000: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8006F004: lhu         $v0, -0xCBE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0XCBE);
    // 0x8006F008: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8006F00C: lhu         $v1, -0xCBA($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0XCBA);
    // 0x8006F010: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8006F014: lhu         $a0, -0xCB8($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0XCB8);
    // 0x8006F018: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006F01C: sh          $v0, 0x4ACC($at)
    MEM_H(0X4ACC, ctx->r1) = ctx->r2;
    // 0x8006F020: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006F024: sh          $v1, 0x4ACE($at)
    MEM_H(0X4ACE, ctx->r1) = ctx->r3;
    // 0x8006F028: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006F02C: sh          $a0, 0x4AD0($at)
    MEM_H(0X4AD0, ctx->r1) = ctx->r4;
    // 0x8006F030: j           L_8006F04C
    // 0x8006F034: andi        $v0, $a1, 0x10
    ctx->r2 = ctx->r5 & 0X10;
        goto L_8006F04C;
    // 0x8006F034: andi        $v0, $a1, 0x10
    ctx->r2 = ctx->r5 & 0X10;
L_8006F038:
    // 0x8006F038: jal         0x8009A2B0
    // 0x8006F03C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8006F03C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8006F040: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8006F044: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8006F048: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
L_8006F04C:
    // 0x8006F04C: beq         $v0, $zero, L_8006F094
    if (ctx->r2 == 0) {
        // 0x8006F050: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8006F094;
    }
    // 0x8006F050: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8006F054: addiu       $a1, $s0, 0x438
    ctx->r5 = ADD32(ctx->r16, 0X438);
    // 0x8006F058: jal         0x8009A3B4
    // 0x8006F05C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8006F05C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8006F060: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8006F064: addiu       $a1, $s0, 0x428
    ctx->r5 = ADD32(ctx->r16, 0X428);
    // 0x8006F068: jal         0x8009A3B4
    // 0x8006F06C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8006F06C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8006F070: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8006F074: addiu       $a1, $s0, 0x440
    ctx->r5 = ADD32(ctx->r16, 0X440);
    // 0x8006F078: jal         0x8009A3B4
    // 0x8006F07C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8006F07C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8006F080: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8006F084: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8006F088: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
    // 0x8006F08C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006F090: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
L_8006F094:
    // 0x8006F094: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8006F098: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006F09C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006F0A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006F0A4: lw          $v0, 0x2FF8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2FF8);
    // 0x8006F0A8: jalr        $v0
    // 0x8006F0AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8006F0AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8006F0B0: jal         0x80070E54
    // 0x8006F0B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070E54_4C254(rdram, ctx);
        goto after_5;
    // 0x8006F0B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8006F0B8: bne         $v0, $zero, L_8006F0D0
    if (ctx->r2 != 0) {
        // 0x8006F0BC: nop
    
            goto L_8006F0D0;
    }
    // 0x8006F0BC: nop

    // 0x8006F0C0: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8006F0C4: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8006F0C8: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
    // 0x8006F0CC: sb          $v1, 0x100($s0)
    MEM_B(0X100, ctx->r16) = ctx->r3;
L_8006F0D0:
    // 0x8006F0D0: lbu         $a2, 0x104($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X104);
    // 0x8006F0D4: lbu         $v0, 0x105($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X105);
    // 0x8006F0D8: beq         $a2, $v0, L_8006F0FC
    if (ctx->r6 == ctx->r2) {
        // 0x8006F0DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006F0FC;
    }
    // 0x8006F0DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006F0E0: lbu         $a1, 0x174($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X174);
    // 0x8006F0E4: lbu         $a3, 0x100($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X100);
    // 0x8006F0E8: jal         0x800501C0
    // 0x8006F0EC: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    func_800501C0_2B5C0(rdram, ctx);
        goto after_6;
    // 0x8006F0EC: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    after_6:
    // 0x8006F0F0: lbu         $v0, 0x104($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X104);
    // 0x8006F0F4: j           L_8006F108
    // 0x8006F0F8: sb          $v0, 0x105($s0)
    MEM_B(0X105, ctx->r16) = ctx->r2;
        goto L_8006F108;
    // 0x8006F0F8: sb          $v0, 0x105($s0)
    MEM_B(0X105, ctx->r16) = ctx->r2;
L_8006F0FC:
    // 0x8006F0FC: lbu         $a1, 0x174($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X174);
    // 0x8006F100: jal         0x800503D0
    // 0x8006F104: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    func_800503D0_2B7D0(rdram, ctx);
        goto after_7;
    // 0x8006F104: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    after_7:
L_8006F108:
    // 0x8006F108: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8006F10C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8006F110: beq         $a1, $v0, L_8006F12C
    if (ctx->r5 == ctx->r2) {
        // 0x8006F114: nop
    
            goto L_8006F12C;
    }
    // 0x8006F114: nop

    // 0x8006F118: lbu         $a2, 0xA4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA4);
    // 0x8006F11C: jal         0x800500C0
    // 0x8006F120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800500C0_2B4C0(rdram, ctx);
        goto after_8;
    // 0x8006F120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8006F124: j           L_8006F134
    // 0x8006F128: nop

        goto L_8006F134;
    // 0x8006F128: nop

L_8006F12C:
    // 0x8006F12C: jal         0x80050330
    // 0x8006F130: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050330_2B730(rdram, ctx);
        goto after_9;
    // 0x8006F130: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_8006F134:
    // 0x8006F134: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8006F138: addiu       $s0, $s0, 0x4FA4
    ctx->r16 = ADD32(ctx->r16, 0X4FA4);
    // 0x8006F13C: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8006F140: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8006F144: lbu         $v1, 0x4FAA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4FAA);
    // 0x8006F148: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006F14C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8006F150: beq         $v0, $zero, L_8006F248
    if (ctx->r2 == 0) {
        // 0x8006F154: nop
    
            goto L_8006F248;
    }
    // 0x8006F154: nop

    // 0x8006F158: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8006F15C: lbu         $v0, 0x5061($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5061);
    // 0x8006F160: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8006F164: bne         $v0, $zero, L_8006F1A0
    if (ctx->r2 != 0) {
        // 0x8006F168: addiu       $a0, $s0, 0x11C
        ctx->r4 = ADD32(ctx->r16, 0X11C);
            goto L_8006F1A0;
    }
    // 0x8006F168: addiu       $a0, $s0, 0x11C
    ctx->r4 = ADD32(ctx->r16, 0X11C);
    // 0x8006F16C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8006F170: lhu         $v0, -0xBB6($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0XBB6);
    // 0x8006F174: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8006F178: lhu         $v1, -0xBB2($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0XBB2);
    // 0x8006F17C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8006F180: lhu         $a0, -0xBB0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0XBB0);
    // 0x8006F184: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006F188: sh          $v0, 0x50C0($at)
    MEM_H(0X50C0, ctx->r1) = ctx->r2;
    // 0x8006F18C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006F190: sh          $v1, 0x50C2($at)
    MEM_H(0X50C2, ctx->r1) = ctx->r3;
    // 0x8006F194: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006F198: j           L_8006F1A8
    // 0x8006F19C: sh          $a0, 0x50C4($at)
    MEM_H(0X50C4, ctx->r1) = ctx->r4;
        goto L_8006F1A8;
    // 0x8006F19C: sh          $a0, 0x50C4($at)
    MEM_H(0X50C4, ctx->r1) = ctx->r4;
L_8006F1A0:
    // 0x8006F1A0: jal         0x8009A2B0
    // 0x8006F1A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    bzero_recomp(rdram, ctx);
        goto after_10;
    // 0x8006F1A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_10:
L_8006F1A8:
    // 0x8006F1A8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8006F1AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006F1B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006F1B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006F1B8: lw          $v0, 0x2FF8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2FF8);
    // 0x8006F1BC: jalr        $v0
    // 0x8006F1C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x8006F1C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8006F1C4: jal         0x80070E54
    // 0x8006F1C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070E54_4C254(rdram, ctx);
        goto after_12;
    // 0x8006F1C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x8006F1CC: bne         $v0, $zero, L_8006F1E4
    if (ctx->r2 != 0) {
        // 0x8006F1D0: nop
    
            goto L_8006F1E4;
    }
    // 0x8006F1D0: nop

    // 0x8006F1D4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8006F1D8: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8006F1DC: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
    // 0x8006F1E0: sb          $v1, 0x100($s0)
    MEM_B(0X100, ctx->r16) = ctx->r3;
L_8006F1E4:
    // 0x8006F1E4: lbu         $a2, 0x104($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X104);
    // 0x8006F1E8: lbu         $v0, 0x105($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X105);
    // 0x8006F1EC: beq         $a2, $v0, L_8006F210
    if (ctx->r6 == ctx->r2) {
        // 0x8006F1F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006F210;
    }
    // 0x8006F1F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006F1F4: lbu         $a1, 0x174($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X174);
    // 0x8006F1F8: lbu         $a3, 0x100($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X100);
    // 0x8006F1FC: jal         0x800501C0
    // 0x8006F200: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    func_800501C0_2B5C0(rdram, ctx);
        goto after_13;
    // 0x8006F200: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    after_13:
    // 0x8006F204: lbu         $v0, 0x104($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X104);
    // 0x8006F208: j           L_8006F21C
    // 0x8006F20C: sb          $v0, 0x105($s0)
    MEM_B(0X105, ctx->r16) = ctx->r2;
        goto L_8006F21C;
    // 0x8006F20C: sb          $v0, 0x105($s0)
    MEM_B(0X105, ctx->r16) = ctx->r2;
L_8006F210:
    // 0x8006F210: lbu         $a1, 0x174($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X174);
    // 0x8006F214: jal         0x800503D0
    // 0x8006F218: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    func_800503D0_2B7D0(rdram, ctx);
        goto after_14;
    // 0x8006F218: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    after_14:
L_8006F21C:
    // 0x8006F21C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8006F220: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8006F224: beq         $a1, $v0, L_8006F240
    if (ctx->r5 == ctx->r2) {
        // 0x8006F228: nop
    
            goto L_8006F240;
    }
    // 0x8006F228: nop

    // 0x8006F22C: lbu         $a2, 0xA4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA4);
    // 0x8006F230: jal         0x800500C0
    // 0x8006F234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800500C0_2B4C0(rdram, ctx);
        goto after_15;
    // 0x8006F234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x8006F238: j           L_8006F248
    // 0x8006F23C: nop

        goto L_8006F248;
    // 0x8006F23C: nop

L_8006F240:
    // 0x8006F240: jal         0x80050330
    // 0x8006F244: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050330_2B730(rdram, ctx);
        goto after_16;
    // 0x8006F244: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
L_8006F248:
    // 0x8006F248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F24C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006F250: jr          $ra
    // 0x8006F254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006F254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035438_10838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035438: jr          $ra
    // 0x8003543C: nop

    TRACE_RETURN()
    return;
    // 0x8003543C: nop

;}
RECOMP_FUNC void func_8006363C_3EA3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006363C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80063640: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80063644: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80063648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006364C: lw          $a1, 0x6C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6C);
    // 0x80063650: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x80063654: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80063658: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8006365C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80063660: beq         $v1, $zero, L_8006368C
    if (ctx->r3 == 0) {
        // 0x80063664: nop
    
            goto L_8006368C;
    }
    // 0x80063664: nop

    // 0x80063668: lbu         $v0, 0x4($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X4);
    // 0x8006366C: lbu         $a0, 0x3($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X3);
    // 0x80063670: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80063674: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80063678: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8006367C: jal         0x8004B5E8
    // 0x80063680: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_0;
    // 0x80063680: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    after_0:
    // 0x80063684: j           L_800636C8
    // 0x80063688: nop

        goto L_800636C8;
    // 0x80063688: nop

L_8006368C:
    // 0x8006368C: lbu         $a0, 0x4($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X4);
    // 0x80063690: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x80063694: lbu         $v1, 0x6($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X6);
    // 0x80063698: lbu         $a2, 0x5($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X5);
    // 0x8006369C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x800636A0: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    // 0x800636A4: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x800636A8: lbu         $v0, 0x7($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X7);
    // 0x800636AC: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x800636B0: lbu         $a1, 0x8($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X8);
    // 0x800636B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800636B8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x800636BC: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x800636C0: jal         0x8004B6A0
    // 0x800636C4: addu        $a1, $a2, $a1
    ctx->r5 = ADD32(ctx->r6, ctx->r5);
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_1;
    // 0x800636C4: addu        $a1, $a2, $a1
    ctx->r5 = ADD32(ctx->r6, ctx->r5);
    after_1:
L_800636C8:
    // 0x800636C8: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x800636CC: addiu       $v0, $v0, 0x9
    ctx->r2 = ADD32(ctx->r2, 0X9);
    // 0x800636D0: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x800636D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800636D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800636DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800636E0: jr          $ra
    // 0x800636E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800636E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80070E98_4C298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80070E98: bne         $a1, $zero, L_80070F30
    if (ctx->r5 != 0) {
        // 0x80070E9C: nop
    
            goto L_80070F30;
    }
    // 0x80070E9C: nop

    // 0x80070EA0: blez        $a0, L_80070ED4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80070EA4: lui         $a1, 0xF
        ctx->r5 = S32(0XF << 16);
            goto L_80070ED4;
    }
    // 0x80070EA4: lui         $a1, 0xF
    ctx->r5 = S32(0XF << 16);
    // 0x80070EA8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80070EAC: addiu       $v1, $v1, -0x3BFC
    ctx->r3 = ADD32(ctx->r3, -0X3BFC);
    // 0x80070EB0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80070EB4: ori         $a1, $a1, 0x423F
    ctx->r5 = ctx->r5 | 0X423F;
    // 0x80070EB8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80070EBC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80070EC0: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80070EC4: bnel        $v0, $zero, L_80070F30
    if (ctx->r2 != 0) {
        // 0x80070EC8: sw          $a1, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r5;
            goto L_80070F30;
    }
    goto skip_0;
    // 0x80070EC8: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    skip_0:
    // 0x80070ECC: j           L_80070F30
    // 0x80070ED0: nop

        goto L_80070F30;
    // 0x80070ED0: nop

L_80070ED4:
    // 0x80070ED4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80070ED8: addiu       $a1, $a1, -0x3BFC
    ctx->r5 = ADD32(ctx->r5, -0X3BFC);
    // 0x80070EDC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80070EE0: lui         $v1, 0xF
    ctx->r3 = S32(0XF << 16);
    // 0x80070EE4: ori         $v1, $v1, 0x423F
    ctx->r3 = ctx->r3 | 0X423F;
    // 0x80070EE8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80070EEC: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80070EF0: beq         $v1, $zero, L_80070EFC
    if (ctx->r3 == 0) {
        // 0x80070EF4: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_80070EFC;
    }
    // 0x80070EF4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80070EF8: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_80070EFC:
    // 0x80070EFC: beq         $a2, $zero, L_80070F1C
    if (ctx->r6 == 0) {
        // 0x80070F00: nop
    
            goto L_80070F1C;
    }
    // 0x80070F00: nop

    // 0x80070F04: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80070F08: lw          $v0, -0x3BF4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BF4);
    // 0x80070F0C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80070F10: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80070F14: j           L_80070F30
    // 0x80070F18: sw          $v0, -0x3BF4($at)
    MEM_W(-0X3BF4, ctx->r1) = ctx->r2;
        goto L_80070F30;
    // 0x80070F18: sw          $v0, -0x3BF4($at)
    MEM_W(-0X3BF4, ctx->r1) = ctx->r2;
L_80070F1C:
    // 0x80070F1C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80070F20: lw          $v0, -0x3BF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BF8);
    // 0x80070F24: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80070F28: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80070F2C: sw          $v0, -0x3BF8($at)
    MEM_W(-0X3BF8, ctx->r1) = ctx->r2;
L_80070F30:
    // 0x80070F30: jr          $ra
    // 0x80070F34: nop

    TRACE_RETURN()
    return;
    // 0x80070F34: nop

;}
RECOMP_FUNC void func_80032BE4_DFE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032BE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80032BE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80032BEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80032BF0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80032BF4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80032BF8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80032BFC: addiu       $s1, $zero, 0x70
    ctx->r17 = ADD32(0, 0X70);
    // 0x80032C00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_80032C04:
    // 0x80032C04: addu        $a0, $s0, $s1
    ctx->r4 = ADD32(ctx->r16, ctx->r17);
    // 0x80032C08: jal         0x8003020C
    // 0x80032C0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8003020C_B60C(rdram, ctx);
        goto after_0;
    // 0x80032C0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80032C10: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80032C14: slti        $v0, $s2, 0x10
    ctx->r2 = SIGNED(ctx->r18) < 0X10 ? 1 : 0;
    // 0x80032C18: bne         $v0, $zero, L_80032C04
    if (ctx->r2 != 0) {
        // 0x80032C1C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80032C04;
    }
    // 0x80032C1C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80032C20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80032C24: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80032C28: sb          $zero, 0x2A($s0)
    MEM_B(0X2A, ctx->r16) = 0;
    // 0x80032C2C: sb          $zero, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = 0;
    // 0x80032C30: sb          $v0, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r2;
    // 0x80032C34: sb          $zero, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = 0;
    // 0x80032C38: sb          $zero, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = 0;
    // 0x80032C3C: sb          $zero, 0x2F($s0)
    MEM_B(0X2F, ctx->r16) = 0;
    // 0x80032C40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80032C44: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80032C48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80032C4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80032C50: jr          $ra
    // 0x80032C54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80032C54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800387F0_13BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800387F0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800387F4: jr          $ra
    // 0x800387F8: sw          $zero, -0x55F0($at)
    MEM_W(-0X55F0, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x800387F8: sw          $zero, -0x55F0($at)
    MEM_W(-0X55F0, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8008D6E8_68AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D6E8: sb          $zero, 0xD6($a0)
    MEM_B(0XD6, ctx->r4) = 0;
    // 0x8008D6EC: jr          $ra
    // 0x8008D6F0: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D6F0: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_80035440_10840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035440: jr          $ra
    // 0x80035444: nop

    TRACE_RETURN()
    return;
    // 0x80035444: nop

;}
RECOMP_FUNC void func_80054A30_2FE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80054A30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80054A34: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80054A38: lhu         $a2, 0x56E8($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X56E8);
    // 0x80054A3C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80054A40: addiu       $a1, $a1, 0x56A8
    ctx->r5 = ADD32(ctx->r5, 0X56A8);
    // 0x80054A44: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80054A48: jal         0x80028600
    // 0x80054A4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80028600_3A00(rdram, ctx);
        goto after_0;
    // 0x80054A4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x80054A50: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80054A54: lhu         $a1, 0x56EA($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X56EA);
    // 0x80054A58: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80054A5C: lbu         $a3, 0x56F0($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X56F0);
    // 0x80054A60: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80054A64: lbu         $v0, 0x56F1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X56F1);
    // 0x80054A68: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80054A6C: lbu         $v1, 0x56F2($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X56F2);
    // 0x80054A70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80054A74: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    // 0x80054A78: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80054A7C: jal         0x80028888
    // 0x80054A80: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    func_80028888_3C88(rdram, ctx);
        goto after_1;
    // 0x80054A80: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_1:
    // 0x80054A84: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80054A88: jr          $ra
    // 0x80054A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80054A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bzero_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009A2B0: negu        $v1, $a0
    ctx->r3 = SUB32(0, ctx->r4);
    // 0x8009A2B4: slti        $at, $a1, 0xC
    ctx->r1 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x8009A2B8: bne         $at, $zero, L_8009A330
    if (ctx->r1 != 0) {
        // 0x8009A2BC: nop
    
            goto L_8009A330;
    }
    // 0x8009A2BC: nop

    // 0x8009A2C0: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x8009A2C4: beq         $v1, $zero, L_8009A2D4
    if (ctx->r3 == 0) {
        // 0x8009A2C8: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_8009A2D4;
    }
    // 0x8009A2C8: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8009A2CC: swl         $zero, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, 0);
    // 0x8009A2D0: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_8009A2D4:
    // 0x8009A2D4: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x8009A2D8: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x8009A2DC: beq         $a3, $zero, L_8009A310
    if (ctx->r7 == 0) {
        // 0x8009A2E0: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_8009A310;
    }
    // 0x8009A2E0: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x8009A2E4: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_8009A2E8:
    // 0x8009A2E8: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8009A2EC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8009A2F0: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x8009A2F4: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8009A2F8: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x8009A2FC: sw          $zero, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = 0;
    // 0x8009A300: sw          $zero, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = 0;
    // 0x8009A304: sw          $zero, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = 0;
    // 0x8009A308: bne         $a0, $a3, L_8009A2E8
    if (ctx->r4 != ctx->r7) {
        // 0x8009A30C: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_8009A2E8;
    }
    // 0x8009A30C: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_8009A310:
    // 0x8009A310: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x8009A314: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x8009A318: beq         $a3, $zero, L_8009A330
    if (ctx->r7 == 0) {
        // 0x8009A31C: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_8009A330;
    }
    // 0x8009A31C: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x8009A320: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_8009A324:
    // 0x8009A324: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8009A328: bne         $a0, $a3, L_8009A324
    if (ctx->r4 != ctx->r7) {
        // 0x8009A32C: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_8009A324;
    }
    // 0x8009A32C: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_8009A330:
    // 0x8009A330: blez        $a1, L_8009A348
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8009A334: nop
    
            goto L_8009A348;
    }
    // 0x8009A334: nop

    // 0x8009A338: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
L_8009A33C:
    // 0x8009A33C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8009A340: bne         $a0, $a1, L_8009A33C
    if (ctx->r4 != ctx->r5) {
        // 0x8009A344: sb          $zero, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = 0;
            goto L_8009A33C;
    }
    // 0x8009A344: sb          $zero, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = 0;
L_8009A348:
    // 0x8009A348: jr          $ra
    // 0x8009A34C: nop

    TRACE_RETURN()
    return;
    // 0x8009A34C: nop

;}
RECOMP_FUNC void func_80058BF8_33FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80058BF8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80058BFC: lh          $a0, 0x8($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X8);
    // 0x80058C00: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x80058C04: lh          $v1, 0x14($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X14);
    // 0x80058C08: subu        $t0, $a0, $v0
    ctx->r8 = SUB32(ctx->r4, ctx->r2);
    // 0x80058C0C: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x80058C10: sltu        $v0, $a2, $t0
    ctx->r2 = ctx->r6 < ctx->r8 ? 1 : 0;
    // 0x80058C14: beq         $v0, $zero, L_80058CA0
    if (ctx->r2 == 0) {
        // 0x80058C18: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80058CA0;
    }
    // 0x80058C18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80058C1C: lh          $a0, 0x4($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X4);
    // 0x80058C20: lh          $v0, 0x18($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X18);
    // 0x80058C24: lh          $v1, 0xC($a1)
    ctx->r3 = MEM_H(ctx->r5, 0XC);
    // 0x80058C28: subu        $a1, $v0, $a0
    ctx->r5 = SUB32(ctx->r2, ctx->r4);
    // 0x80058C2C: subu        $a0, $v1, $a0
    ctx->r4 = SUB32(ctx->r3, ctx->r4);
    // 0x80058C30: sltu        $v0, $a1, $a0
    ctx->r2 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x80058C34: beql        $v0, $zero, L_80058CA0
    if (ctx->r2 == 0) {
        // 0x80058C38: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80058CA0;
    }
    goto skip_0;
    // 0x80058C38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x80058C3C: beq         $a2, $zero, L_80058CA0
    if (ctx->r6 == 0) {
        // 0x80058C40: addiu       $v0, $zero, -0x80
        ctx->r2 = ADD32(0, -0X80);
            goto L_80058CA0;
    }
    // 0x80058C40: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x80058C44: subu        $a1, $a0, $a1
    ctx->r5 = SUB32(ctx->r4, ctx->r5);
    // 0x80058C48: mult        $a1, $t0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80058C4C: mflo        $v0
    ctx->r2 = lo;
    // 0x80058C50: nop

    // 0x80058C54: nop

    // 0x80058C58: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80058C5C: bne         $a2, $zero, L_80058C68
    if (ctx->r6 != 0) {
        // 0x80058C60: nop
    
            goto L_80058C68;
    }
    // 0x80058C60: nop

    // 0x80058C64: break       7
    do_break(2147847268);
L_80058C68:
    // 0x80058C68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80058C6C: bne         $a2, $at, L_80058C80
    if (ctx->r6 != ctx->r1) {
        // 0x80058C70: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80058C80;
    }
    // 0x80058C70: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80058C74: bne         $v0, $at, L_80058C80
    if (ctx->r2 != ctx->r1) {
        // 0x80058C78: nop
    
            goto L_80058C80;
    }
    // 0x80058C78: nop

    // 0x80058C7C: break       6
    do_break(2147847292);
L_80058C80:
    // 0x80058C80: mflo        $v0
    ctx->r2 = lo;
    // 0x80058C84: addiu       $v1, $zero, -0x7F
    ctx->r3 = ADD32(0, -0X7F);
    // 0x80058C88: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80058C8C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80058C90: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80058C94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80058C98: addiu       $v1, $zero, -0x80
    ctx->r3 = ADD32(0, -0X80);
    // 0x80058C9C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_80058CA0:
    // 0x80058CA0: jr          $ra
    // 0x80058CA4: nop

    TRACE_RETURN()
    return;
    // 0x80058CA4: nop

;}
RECOMP_FUNC void func_8006072C_3BB2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006072C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80060730: lb          $v0, -0x3BBE($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BBE);
    // 0x80060734: bne         $v0, $zero, L_80060770
    if (ctx->r2 != 0) {
        // 0x80060738: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80060770;
    }
    // 0x80060738: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006073C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80060740: lbu         $v0, -0x3A4F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A4F);
    // 0x80060744: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x80060748: addiu       $v0, $v0, 0x380
    ctx->r2 = ADD32(ctx->r2, 0X380);
    // 0x8006074C: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
    // 0x80060750: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80060754: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80060758: lbu         $v1, 0x55A8($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X55A8);
    // 0x8006075C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80060760: srav        $a0, $a0, $v0
    ctx->r4 = S32(SIGNED(ctx->r4) >> (ctx->r2 & 31));
    // 0x80060764: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80060768: beq         $v1, $zero, L_80060788
    if (ctx->r3 == 0) {
        // 0x8006076C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80060788;
    }
    // 0x8006076C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80060770:
    // 0x80060770: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80060774: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80060778: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8006077C: bne         $v0, $zero, L_80060788
    if (ctx->r2 != 0) {
        // 0x80060780: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80060788;
    }
    // 0x80060780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80060784: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80060788:
    // 0x80060788: jr          $ra
    // 0x8006078C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8006078C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8004A324_25724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A324: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A328: lh          $v0, -0x3984($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3984);
    // 0x8004A32C: bgtz        $v0, L_8004A33C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8004A330: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8004A33C;
    }
    // 0x8004A330: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8004A334: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A338: lbu         $v0, -0x3991($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3991);
L_8004A33C:
    // 0x8004A33C: jr          $ra
    // 0x8004A340: nop

    TRACE_RETURN()
    return;
    // 0x8004A340: nop

;}
RECOMP_FUNC void func_80069850_44C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80069850: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80069854: jr          $ra
    // 0x80069858: sb          $a0, -0x11D0($at)
    MEM_B(-0X11D0, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80069858: sb          $a0, -0x11D0($at)
    MEM_B(-0X11D0, ctx->r1) = ctx->r4;
    // 0x8006985C: nop

;}
RECOMP_FUNC void func_8006C384_47784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006C384: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8006C388: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x8006C38C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8006C390: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8006C394: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x8006C398: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x8006C39C: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x8006C3A0: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x8006C3A4: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x8006C3A8: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x8006C3AC: lh          $a0, 0x0($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X0);
    // 0x8006C3B0: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x8006C3B4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8006C3B8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8006C3BC: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8006C3C0: lh          $v1, 0x2($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2);
    // 0x8006C3C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006C3C8: sll         $v0, $v0, 15
    ctx->r2 = S32(ctx->r2 << 15);
    // 0x8006C3CC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8006C3D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006C3D4: lh          $a0, 0x4($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X4);
    // 0x8006C3D8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8006C3DC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006C3E0: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8006C3E4: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
    // 0x8006C3E8: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x8006C3EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006C3F0: sll         $v0, $v0, 15
    ctx->r2 = S32(ctx->r2 << 15);
    // 0x8006C3F4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8006C3F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006C3FC: lh          $v0, 0x2($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2);
    // 0x8006C400: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8006C404: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8006C408: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006C40C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8006C410: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8006C414: lh          $t0, 0x0($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X0);
    // 0x8006C418: lh          $t1, 0x2($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X2);
    // 0x8006C41C: lh          $a2, 0x4($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X4);
    // 0x8006C420: lh          $a3, 0x6($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X6);
    // 0x8006C424: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x8006C428: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x8006C42C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006C430: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8006C434: subu        $s6, $t0, $v0
    ctx->r22 = SUB32(ctx->r8, ctx->r2);
    // 0x8006C438: subu        $s5, $t1, $v0
    ctx->r21 = SUB32(ctx->r9, ctx->r2);
    // 0x8006C43C: addu        $v0, $a2, $a3
    ctx->r2 = ADD32(ctx->r6, ctx->r7);
    // 0x8006C440: srl         $v1, $v0, 31
    ctx->r3 = S32(U32(ctx->r2) >> 31);
    // 0x8006C444: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006C448: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8006C44C: subu        $s4, $a2, $v0
    ctx->r20 = SUB32(ctx->r6, ctx->r2);
    // 0x8006C450: jal         0x80031600
    // 0x8006C454: subu        $s3, $a3, $v0
    ctx->r19 = SUB32(ctx->r7, ctx->r2);
    func_80031600_CA00(rdram, ctx);
        goto after_0;
    // 0x8006C454: subu        $s3, $a3, $v0
    ctx->r19 = SUB32(ctx->r7, ctx->r2);
    after_0:
    // 0x8006C458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006C45C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8006C460: jal         0x8004DD50
    // 0x8006C464: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_8004DD50_29150(rdram, ctx);
        goto after_1;
    // 0x8006C464: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x8006C468: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x8006C46C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8006C470: addiu       $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
L_8006C474:
    // 0x8006C474: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8006C478: lh          $v0, -0x39A4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X39A4);
    // 0x8006C47C: mult        $v0, $t0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006C480: mflo        $a0
    ctx->r4 = lo;
    // 0x8006C484: nop

    // 0x8006C488: nop

    // 0x8006C48C: bltzl       $a0, L_8006C494
    if (SIGNED(ctx->r4) < 0) {
        // 0x8006C490: addiu       $a0, $a0, 0xFFF
        ctx->r4 = ADD32(ctx->r4, 0XFFF);
            goto L_8006C494;
    }
    goto skip_0;
    // 0x8006C490: addiu       $a0, $a0, 0xFFF
    ctx->r4 = ADD32(ctx->r4, 0XFFF);
    skip_0:
L_8006C494:
    // 0x8006C494: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8006C498: lh          $v0, -0x260C($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X260C);
    // 0x8006C49C: mult        $v0, $t0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006C4A0: mflo        $a1
    ctx->r5 = lo;
    // 0x8006C4A4: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x8006C4A8: sra         $v0, $a0, 12
    ctx->r2 = S32(SIGNED(ctx->r4) >> 12);
    // 0x8006C4AC: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x8006C4B0: bgez        $a1, L_8006C4BC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8006C4B4: sh          $a0, 0x10($sp)
        MEM_H(0X10, ctx->r29) = ctx->r4;
            goto L_8006C4BC;
    }
    // 0x8006C4B4: sh          $a0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r4;
    // 0x8006C4B8: addiu       $a1, $a1, 0xFFF
    ctx->r5 = ADD32(ctx->r5, 0XFFF);
L_8006C4BC:
    // 0x8006C4BC: lhu         $v1, 0x18($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X18);
    // 0x8006C4C0: sra         $v0, $a1, 12
    ctx->r2 = S32(SIGNED(ctx->r5) >> 12);
    // 0x8006C4C4: lh          $t1, 0x24($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X24);
    // 0x8006C4C8: lh          $a2, 0x28($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X28);
    // 0x8006C4CC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8006C4D0: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x8006C4D4: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x8006C4D8: lhu         $t2, 0x16($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X16);
    // 0x8006C4DC: sh          $t1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r9;
    // 0x8006C4E0: sh          $a2, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r6;
    // 0x8006C4E4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8006C4E8: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8006C4EC: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8006C4F0: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006C4F4: subu        $v0, $a0, $a3
    ctx->r2 = SUB32(ctx->r4, ctx->r7);
    // 0x8006C4F8: subu        $v0, $v0, $s5
    ctx->r2 = SUB32(ctx->r2, ctx->r21);
    // 0x8006C4FC: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8006C500: bne         $v0, $zero, L_8006C598
    if (ctx->r2 != 0) {
        // 0x8006C504: sh          $t2, 0x12($sp)
        MEM_H(0X12, ctx->r29) = ctx->r10;
            goto L_8006C598;
    }
    // 0x8006C504: sh          $t2, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r10;
    // 0x8006C508: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x8006C50C: subu        $v0, $v0, $s6
    ctx->r2 = SUB32(ctx->r2, ctx->r22);
    // 0x8006C510: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8006C514: bnel        $v0, $zero, L_8006C59C
    if (ctx->r2 != 0) {
        // 0x8006C518: addiu       $a3, $a3, 0xC
        ctx->r7 = ADD32(ctx->r7, 0XC);
            goto L_8006C59C;
    }
    goto skip_1;
    // 0x8006C518: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    skip_1:
    // 0x8006C51C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8006C520: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8006C524: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006C528: subu        $v0, $a0, $a3
    ctx->r2 = SUB32(ctx->r4, ctx->r7);
    // 0x8006C52C: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x8006C530: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8006C534: bnel        $v0, $zero, L_8006C59C
    if (ctx->r2 != 0) {
        // 0x8006C538: addiu       $a3, $a3, 0xC
        ctx->r7 = ADD32(ctx->r7, 0XC);
            goto L_8006C59C;
    }
    goto skip_2;
    // 0x8006C538: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    skip_2:
    // 0x8006C53C: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x8006C540: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x8006C544: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8006C548: bne         $v0, $zero, L_8006C59C
    if (ctx->r2 != 0) {
        // 0x8006C54C: addiu       $a3, $a3, 0xC
        ctx->r7 = ADD32(ctx->r7, 0XC);
            goto L_8006C59C;
    }
    // 0x8006C54C: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x8006C550: addu        $a1, $t1, $zero
    ctx->r5 = ADD32(ctx->r9, 0);
    // 0x8006C554: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x8006C558: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x8006C55C: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006C560: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8006C564: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8006C568: bne         $v1, $zero, L_8006C59C
    if (ctx->r3 != 0) {
        // 0x8006C56C: nop
    
            goto L_8006C59C;
    }
    // 0x8006C56C: nop

    // 0x8006C570: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x8006C574: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8006C578: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8006C57C: bne         $v0, $zero, L_8006C5A0
    if (ctx->r2 != 0) {
        // 0x8006C580: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_8006C5A0;
    }
    // 0x8006C580: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8006C584: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x8006C588: jal         0x8004DEE8
    // 0x8006C58C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_8004DEE8_292E8(rdram, ctx);
        goto after_2;
    // 0x8006C58C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x8006C590: j           L_8006C5B0
    // 0x8006C594: nop

        goto L_8006C5B0;
    // 0x8006C594: nop

L_8006C598:
    // 0x8006C598: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
L_8006C59C:
    // 0x8006C59C: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
L_8006C5A0:
    // 0x8006C5A0: slti        $v0, $t3, 0x3
    ctx->r2 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x8006C5A4: bne         $v0, $zero, L_8006C474
    if (ctx->r2 != 0) {
        // 0x8006C5A8: addiu       $t0, $t0, 0x30
        ctx->r8 = ADD32(ctx->r8, 0X30);
            goto L_8006C474;
    }
    // 0x8006C5A8: addiu       $t0, $t0, 0x30
    ctx->r8 = ADD32(ctx->r8, 0X30);
    // 0x8006C5AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006C5B0:
    // 0x8006C5B0: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8006C5B4: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x8006C5B8: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x8006C5BC: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x8006C5C0: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x8006C5C4: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x8006C5C8: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x8006C5CC: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x8006C5D0: jr          $ra
    // 0x8006C5D4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x8006C5D4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80069D44_45144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80069D44: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80069D48: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80069D4C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80069D50: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80069D54: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80069D58: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80069D5C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80069D60: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80069D64: lui         $s4, 0x200
    ctx->r20 = S32(0X200 << 16);
    // 0x80069D68: lui         $s3, 0x80
    ctx->r19 = S32(0X80 << 16);
    // 0x80069D6C: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80069D70: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80069D74: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80069D78: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x80069D7C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80069D80: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_80069D84:
    // 0x80069D84: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80069D88: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80069D8C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80069D90: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80069D94: beql        $v0, $zero, L_80069DF0
    if (ctx->r2 == 0) {
        // 0x80069D98: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80069DF0;
    }
    goto skip_0;
    // 0x80069D98: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_0:
    // 0x80069D9C: jal         0x80069A64
    // 0x80069DA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80069A64_44E64(rdram, ctx);
        goto after_0;
    // 0x80069DA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80069DA4: lb          $v0, 0x449($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X449);
    // 0x80069DA8: bnel        $v0, $zero, L_80069DF0
    if (ctx->r2 != 0) {
        // 0x80069DAC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80069DF0;
    }
    goto skip_1;
    // 0x80069DAC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_1:
    // 0x80069DB0: lb          $v0, 0x110($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X110);
    // 0x80069DB4: bnel        $v0, $zero, L_80069DF0
    if (ctx->r2 != 0) {
        // 0x80069DB8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80069DF0;
    }
    goto skip_2;
    // 0x80069DB8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_2:
    // 0x80069DBC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80069DC0: addiu       $a0, $s0, 0x3E8
    ctx->r4 = ADD32(ctx->r16, 0X3E8);
    // 0x80069DC4: addiu       $v0, $s0, 0x188
    ctx->r2 = ADD32(ctx->r16, 0X188);
    // 0x80069DC8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80069DCC: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x80069DD0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80069DD4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80069DD8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80069DDC: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x80069DE0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80069DE4: jal         0x80051E18
    // 0x80069DE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80069DE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80069DEC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80069DF0:
    // 0x80069DF0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80069DF4: slti        $v0, $s2, 0x2
    ctx->r2 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x80069DF8: bne         $v0, $zero, L_80069D84
    if (ctx->r2 != 0) {
        // 0x80069DFC: addiu       $s0, $s0, 0x5F4
        ctx->r16 = ADD32(ctx->r16, 0X5F4);
            goto L_80069D84;
    }
    // 0x80069DFC: addiu       $s0, $s0, 0x5F4
    ctx->r16 = ADD32(ctx->r16, 0X5F4);
    // 0x80069E00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80069E04: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80069E08: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80069E0C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80069E10: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80069E14: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80069E18: jr          $ra
    // 0x80069E1C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80069E1C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8004F62C_2AA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F62C: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x8004F630: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x8004F634: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8004F638: addiu       $v0, $v0, -0x3050
    ctx->r2 = ADD32(ctx->r2, -0X3050);
    // 0x8004F63C: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8004F640: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004F644: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8004F648: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004F64C: lw          $v0, 0x6B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6B20);
    // 0x8004F650: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x8004F654: lw          $a2, 0x5210($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5210);
    // 0x8004F658: mfhi        $a3
    ctx->r7 = hi;
    // 0x8004F65C: srl         $a1, $a3, 3
    ctx->r5 = S32(U32(ctx->r7) >> 3);
    // 0x8004F660: srlv        $v1, $v1, $a1
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r5 & 31));
    // 0x8004F664: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8004F668: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004F66C: sw          $v0, 0x6B20($at)
    MEM_W(0X6B20, ctx->r1) = ctx->r2;
    // 0x8004F670: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8004F674: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004F678: sw          $v0, 0x6B20($at)
    MEM_W(0X6B20, ctx->r1) = ctx->r2;
    // 0x8004F67C: jr          $ra
    // 0x8004F680: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8004F680: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void alUnlink(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80098C4C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80098C50: beq         $v1, $zero, L_80098C60
    if (ctx->r3 == 0) {
        // 0x80098C54: nop
    
            goto L_80098C60;
    }
    // 0x80098C54: nop

    // 0x80098C58: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80098C5C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80098C60:
    // 0x80098C60: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80098C64: beq         $v1, $zero, L_80098C74
    if (ctx->r3 == 0) {
        // 0x80098C68: nop
    
            goto L_80098C74;
    }
    // 0x80098C68: nop

    // 0x80098C6C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80098C70: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80098C74:
    // 0x80098C74: jr          $ra
    // 0x80098C78: nop

    TRACE_RETURN()
    return;
    // 0x80098C78: nop

;}
