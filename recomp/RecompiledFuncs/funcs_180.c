#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8024A6E0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A6E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024A6E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024A6E8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024A6EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024A6F0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A6F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024A6F8: lw          $v0, 0x5240($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5240);
    // 0x8024A6FC: jalr        $v0
    // 0x8024A700: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024A700: nop

    after_0:
    // 0x8024A704: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024A708: jr          $ra
    // 0x8024A70C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024A70C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229B24_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229B24: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80229B28: lw          $a3, 0x24($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X24);
    // 0x80229B2C: beq         $v1, $zero, L_80229B44
    if (ctx->r3 == 0) {
        // 0x80229B30: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80229B44;
    }
    // 0x80229B30: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80229B34: beql        $v1, $v0, L_80229BA4
    if (ctx->r3 == ctx->r2) {
        // 0x80229B38: sh          $zero, 0x46($a3)
        MEM_H(0X46, ctx->r7) = 0;
            goto L_80229BA4;
    }
    goto skip_0;
    // 0x80229B38: sh          $zero, 0x46($a3)
    MEM_H(0X46, ctx->r7) = 0;
    skip_0:
    // 0x80229B3C: j           L_80229BA4
    // 0x80229B40: nop

        goto L_80229BA4;
    // 0x80229B40: nop

L_80229B44:
    // 0x80229B44: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x80229B48: sh          $zero, 0x14($a3)
    MEM_H(0X14, ctx->r7) = 0;
    // 0x80229B4C: lh          $a0, 0x14($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X14);
    // 0x80229B50: addiu       $v0, $zero, -0x190
    ctx->r2 = ADD32(0, -0X190);
    // 0x80229B54: sh          $v0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r2;
    // 0x80229B58: lh          $a1, 0x16($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X16);
    // 0x80229B5C: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
    // 0x80229B60: sh          $v0, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r2;
    // 0x80229B64: lh          $a2, 0x18($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X18);
    // 0x80229B68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229B6C: sb          $v0, 0xFB($a3)
    MEM_B(0XFB, ctx->r7) = ctx->r2;
    // 0x80229B70: sb          $v0, 0x103($a3)
    MEM_B(0X103, ctx->r7) = ctx->r2;
    // 0x80229B74: sb          $v0, 0x107($a3)
    MEM_B(0X107, ctx->r7) = ctx->r2;
    // 0x80229B78: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229B7C: sh          $zero, 0x44($a3)
    MEM_H(0X44, ctx->r7) = 0;
    // 0x80229B80: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
    // 0x80229B84: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229B88: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80229B8C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80229B90: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80229B94: sb          $v1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r3;
    // 0x80229B98: sw          $a0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r4;
    // 0x80229B9C: sw          $a1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r5;
    // 0x80229BA0: sw          $a2, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r6;
L_80229BA4:
    // 0x80229BA4: jr          $ra
    // 0x80229BA8: nop

    TRACE_RETURN()
    return;
    // 0x80229BA8: nop

;}
RECOMP_FUNC void func_8024A5F4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A5F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024A5F8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8024A5FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024A600: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x8024A604: bgtz        $v0, L_8024A61C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8024A608: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8024A61C;
    }
    // 0x8024A608: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8024A60C: jal         0x8004F5C4
    // 0x8024A610: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8024A610: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8024A614: j           L_8024A634
    // 0x8024A618: nop

        goto L_8024A634;
    // 0x8024A618: nop

L_8024A61C:
    // 0x8024A61C: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x8024A620: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8024A624: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x8024A628: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x8024A62C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024A630: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_8024A634:
    // 0x8024A634: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024A638: jr          $ra
    // 0x8024A63C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024A63C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802290B8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802290B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802290BC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802290C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802290C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802290C8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802290CC: lw          $a3, 0x24($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X24);
    // 0x802290D0: bne         $v0, $zero, L_80229194
    if (ctx->r2 != 0) {
        // 0x802290D4: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80229194;
    }
    // 0x802290D4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802290D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802290DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802290E0: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802290E4: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x802290E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802290EC: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802290F0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802290F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802290F8: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802290FC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229100: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229104: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80229108: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022910C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80229110: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229114: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80229118: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022911C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80229120: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229124: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80229128: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022912C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80229130: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229134: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80229138: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x8022913C: sh          $zero, 0x14($a3)
    MEM_H(0X14, ctx->r7) = 0;
    // 0x80229140: lh          $a0, 0x14($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X14);
    // 0x80229144: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229148: sh          $v0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r2;
    // 0x8022914C: lh          $a1, 0x16($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X16);
    // 0x80229150: addiu       $v0, $zero, -0x15E
    ctx->r2 = ADD32(0, -0X15E);
    // 0x80229154: sh          $v0, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r2;
    // 0x80229158: lh          $a2, 0x18($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X18);
    // 0x8022915C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229160: sb          $v0, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r2;
    // 0x80229164: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80229168: sh          $zero, 0x44($a3)
    MEM_H(0X44, ctx->r7) = 0;
    // 0x8022916C: sb          $v0, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r2;
    // 0x80229170: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229174: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80229178: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022917C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80229180: sb          $v1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r3;
    // 0x80229184: sw          $a0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r4;
    // 0x80229188: sw          $a1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r5;
    // 0x8022918C: sw          $a2, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r6;
    // 0x80229190: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_80229194:
    // 0x80229194: addiu       $v0, $zero, -0xF9
    ctx->r2 = ADD32(0, -0XF9);
    // 0x80229198: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x8022919C: addiu       $s0, $zero, -0x12
    ctx->r16 = ADD32(0, -0X12);
    // 0x802291A0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x802291A4: sh          $s1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r17;
    // 0x802291A8: jal         0x8003E6BC
    // 0x802291AC: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x802291AC: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x802291B0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802291B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802291B8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802291BC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802291C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802291C4: lhu         $v0, 0x5080($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5080);
    // 0x802291C8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802291CC: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x802291D0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802291D4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802291D8: sh          $v0, 0x5080($at)
    MEM_H(0X5080, ctx->r1) = ctx->r2;
    // 0x802291DC: addiu       $v0, $zero, 0xF9
    ctx->r2 = ADD32(0, 0XF9);
    // 0x802291E0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x802291E4: sh          $s1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r17;
    // 0x802291E8: jal         0x8003E6BC
    // 0x802291EC: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x802291EC: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    after_1:
    // 0x802291F0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802291F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802291F8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802291FC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80229200: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229204: lhu         $v0, 0x5080($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5080);
    // 0x80229208: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x8022920C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80229210: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80229214: sh          $v0, 0x5080($at)
    MEM_H(0X5080, ctx->r1) = ctx->r2;
    // 0x80229218: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022921C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229220: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229224: jr          $ra
    // 0x80229228: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229228: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802456B0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802456B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802456B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802456B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802456BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802456C0: jal         0x80053ED8
    // 0x802456C4: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x802456C4: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x802456C8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802456CC: lui         $a2, 0x80
    ctx->r6 = S32(0X80 << 16);
    // 0x802456D0: sw          $v0, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r2;
    // 0x802456D4: lw          $a1, 0xF4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XF4);
    // 0x802456D8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802456DC: ori         $a2, $a2, 0x8080
    ctx->r6 = ctx->r6 | 0X8080;
    // 0x802456E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802456E4: sw          $zero, 0x54($a0)
    MEM_W(0X54, ctx->r4) = 0;
    // 0x802456E8: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
    // 0x802456EC: sw          $zero, 0x64($a0)
    MEM_W(0X64, ctx->r4) = 0;
    // 0x802456F0: ori         $v1, $v1, 0x26
    ctx->r3 = ctx->r3 | 0X26;
    // 0x802456F4: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x802456F8: lw          $v1, 0x88($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X88);
    // 0x802456FC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80245700: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80245704: sh          $v0, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = ctx->r2;
    // 0x80245708: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8024570C: sh          $v0, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = ctx->r2;
    // 0x80245710: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80245714: sw          $v0, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->r2;
    // 0x80245718: sw          $v0, 0xFC($a0)
    MEM_W(0XFC, ctx->r4) = ctx->r2;
    // 0x8024571C: sw          $v0, 0x100($a0)
    MEM_W(0X100, ctx->r4) = ctx->r2;
    // 0x80245720: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80245724: sh          $v0, 0x6E($a0)
    MEM_H(0X6E, ctx->r4) = ctx->r2;
    // 0x80245728: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024572C: addiu       $v0, $v0, 0x4C9C
    ctx->r2 = ADD32(ctx->r2, 0X4C9C);
    // 0x80245730: sw          $v0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r2;
    // 0x80245734: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80245738: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    // 0x8024573C: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x80245740: sw          $zero, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = 0;
    // 0x80245744: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80245748: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8024574C: sw          $a2, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r6;
    // 0x80245750: jal         0x80245768
    // 0x80245754: sw          $v1, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r3;
    func_80245768_ovl28(rdram, ctx);
        goto after_1;
    // 0x80245754: sw          $v1, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r3;
    after_1:
    // 0x80245758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024575C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80245760: jr          $ra
    // 0x80245764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80245764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80243694_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243694: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80243698: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8024369C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802436A0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802436A4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802436A8: lw          $v1, 0xEC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XEC);
    // 0x802436AC: beq         $v1, $zero, L_80243728
    if (ctx->r3 == 0) {
        // 0x802436B0: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_80243728;
    }
    // 0x802436B0: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x802436B4: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x802436B8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802436BC: beq         $v0, $zero, L_802436E8
    if (ctx->r2 == 0) {
        // 0x802436C0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802436E8;
    }
    // 0x802436C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802436C4: lh          $a2, 0xF4($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XF4);
    // 0x802436C8: lh          $a3, 0xF8($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XF8);
    // 0x802436CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802436D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802436D4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802436D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802436DC: jal         0x8005F7D4
    // 0x802436E0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8005F7D4_3ABD4(rdram, ctx);
        goto after_0;
    // 0x802436E0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_0:
    // 0x802436E4: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
L_802436E8:
    // 0x802436E8: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x802436EC: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x802436F0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802436F4: beq         $v0, $zero, L_80243700
    if (ctx->r2 == 0) {
        // 0x802436F8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80243700;
    }
    // 0x802436F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802436FC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80243700:
    // 0x80243700: lw          $v1, 0xEC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XEC);
    // 0x80243704: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80243708: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8024370C: beq         $v0, $zero, L_80243728
    if (ctx->r2 == 0) {
        // 0x80243710: lui         $v0, 0xFF
        ctx->r2 = S32(0XFF << 16);
            goto L_80243728;
    }
    // 0x80243710: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80243714: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80243718: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8024371C: beq         $v0, $zero, L_80243728
    if (ctx->r2 == 0) {
        // 0x80243720: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80243728;
    }
    // 0x80243720: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80243724: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80243728:
    // 0x80243728: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024372C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80243730: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80243734: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80243738: lw          $v0, 0x4BA4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4BA4);
    // 0x8024373C: jalr        $v0
    // 0x80243740: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80243740: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80243744: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80243748: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8024374C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80243750: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80243754: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80243758: addiu       $v0, $s1, 0x1C
    ctx->r2 = ADD32(ctx->r17, 0X1C);
    // 0x8024375C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80243760: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80243764: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80243768: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8024376C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80243770: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80243774: jal         0x80051E18
    // 0x80243778: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_2;
    // 0x80243778: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x8024377C: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x80243780: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80243784: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80243788: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8024378C: jr          $ra
    // 0x80243790: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80243790: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80248648_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248648: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024864C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80248650: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80248654: addiu       $a0, $zero, 0x5C
    ctx->r4 = ADD32(0, 0X5C);
    // 0x80248658: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024865C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80248660: jal         0x8006033C
    // 0x80248664: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80248664: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    after_0:
    // 0x80248668: beq         $v0, $zero, L_802486B4
    if (ctx->r2 == 0) {
        // 0x8024866C: nop
    
            goto L_802486B4;
    }
    // 0x8024866C: nop

    // 0x80248670: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80248674: addiu       $s0, $s0, 0x515C
    ctx->r16 = ADD32(ctx->r16, 0X515C);
    // 0x80248678: jal         0x8003E6BC
    // 0x8024867C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8024867C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80248680: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80248684: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80248688: jal         0x80071ACC
    // 0x8024868C: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_2;
    // 0x8024868C: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    after_2:
    // 0x80248690: jal         0x8003E6BC
    // 0x80248694: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_3;
    // 0x80248694: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_3:
    // 0x80248698: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8024869C: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x802486A0: jal         0x80071ACC
    // 0x802486A4: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_4;
    // 0x802486A4: ori         $a1, $a1, 0x300
    ctx->r5 = ctx->r5 | 0X300;
    after_4:
    // 0x802486A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802486AC: j           L_802486D4
    // 0x802486B0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_802486D4;
    // 0x802486B0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_802486B4:
    // 0x802486B4: jal         0x802492D0
    // 0x802486B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802492D0_ovl28(rdram, ctx);
        goto after_5;
    // 0x802486B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x802486BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802486C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802486C4: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x802486C8: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x802486CC: jal         0x8024932C
    // 0x802486D0: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    func_8024932C_ovl28(rdram, ctx);
        goto after_6;
    // 0x802486D0: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    after_6:
L_802486D4:
    // 0x802486D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802486D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802486DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802486E0: jr          $ra
    // 0x802486E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802486E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225FDC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225FE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225FE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225FE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225FEC: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80225FF0: bne         $v0, $zero, L_80226030
    if (ctx->r2 != 0) {
        // 0x80225FF4: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80226030;
    }
    // 0x80225FF4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80225FF8: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x80225FFC: sh          $v1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r3;
    // 0x80226000: addiu       $v1, $zero, -0xC0
    ctx->r3 = ADD32(0, -0XC0);
    // 0x80226004: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x80226008: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022600C: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x80226010: lui         $v1, 0xFF40
    ctx->r3 = S32(0XFF40 << 16);
    // 0x80226014: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x80226018: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x8022601C: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x80226020: sh          $zero, 0x58($v0)
    MEM_H(0X58, ctx->r2) = 0;
    // 0x80226024: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x80226028: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x8022602C: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
L_80226030:
    // 0x80226030: lbu         $a0, 0x6($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X6);
    // 0x80226034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226038: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022603C: beq         $v1, $v0, L_80226080
    if (ctx->r3 == ctx->r2) {
        // 0x80226040: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226080;
    }
    // 0x80226040: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226044: beql        $v0, $zero, L_8022605C
    if (ctx->r2 == 0) {
        // 0x80226048: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022605C;
    }
    goto skip_0;
    // 0x80226048: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022604C: beq         $v1, $zero, L_8022606C
    if (ctx->r3 == 0) {
        // 0x80226050: addiu       $v0, $zero, 0x96
        ctx->r2 = ADD32(0, 0X96);
            goto L_8022606C;
    }
    // 0x80226050: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80226054: j           L_80226168
    // 0x80226058: nop

        goto L_80226168;
    // 0x80226058: nop

L_8022605C:
    // 0x8022605C: beq         $v1, $v0, L_802260F8
    if (ctx->r3 == ctx->r2) {
        // 0x80226060: addiu       $a0, $zero, -0x3
        ctx->r4 = ADD32(0, -0X3);
            goto L_802260F8;
    }
    // 0x80226060: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x80226064: j           L_80226168
    // 0x80226068: nop

        goto L_80226168;
    // 0x80226068: nop

L_8022606C:
    // 0x8022606C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80226070: bne         $v1, $v0, L_80226168
    if (ctx->r3 != ctx->r2) {
        // 0x80226074: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80226168;
    }
    // 0x80226074: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80226078: j           L_80226168
    // 0x8022607C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80226168;
    // 0x8022607C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80226080:
    // 0x80226080: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80226084: lh          $v0, 0x6390($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X6390);
    // 0x80226088: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022608C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226090: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80226094: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80226098: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022609C: lhu         $v0, 0x5082($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5082);
    // 0x802260A0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802260A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802260A8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802260AC: sh          $v0, 0x5082($at)
    MEM_H(0X5082, ctx->r1) = ctx->r2;
    // 0x802260B0: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x802260B4: lhu         $v0, 0x3A($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X3A);
    // 0x802260B8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802260BC: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x802260C0: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x802260C4: lhu         $v0, 0x3A($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X3A);
    // 0x802260C8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802260CC: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x802260D0: lw          $v1, 0x4C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4C);
    // 0x802260D4: lhu         $v0, 0x3A($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X3A);
    // 0x802260D8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802260DC: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x802260E0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802260E4: addiu       $v0, $zero, 0x116
    ctx->r2 = ADD32(0, 0X116);
    // 0x802260E8: beq         $v1, $v0, L_8022615C
    if (ctx->r3 == ctx->r2) {
        // 0x802260EC: nop
    
            goto L_8022615C;
    }
    // 0x802260EC: nop

    // 0x802260F0: j           L_80226168
    // 0x802260F4: nop

        goto L_80226168;
    // 0x802260F4: nop

L_802260F8:
    // 0x802260F8: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x802260FC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226100: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80226104: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226108: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022610C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226110: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80226114: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226118: lw          $v1, 0x4C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4C);
    // 0x8022611C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226120: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x80226124: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80226128: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022612C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80226130: lh          $a0, 0x6390($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X6390);
    // 0x80226134: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80226138: lhu         $v1, 0x6392($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6392);
    // 0x8022613C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80226140: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80226144: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226148: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022614C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226150: sh          $v1, 0x5082($at)
    MEM_H(0X5082, ctx->r1) = ctx->r3;
    // 0x80226154: jal         0x80071ACC
    // 0x80226158: ori         $a1, $a1, 0x1500
    ctx->r5 = ctx->r5 | 0X1500;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_0;
    // 0x80226158: ori         $a1, $a1, 0x1500
    ctx->r5 = ctx->r5 | 0X1500;
    after_0:
L_8022615C:
    // 0x8022615C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80226160: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226164: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80226168:
    // 0x80226168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022616C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226170: jr          $ra
    // 0x80226174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024A4C4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A4C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024A4C8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8024A4CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024A4D0: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x8024A4D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8024A4D8: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x8024A4DC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8024A4E0: bne         $v0, $zero, L_8024A4F8
    if (ctx->r2 != 0) {
        // 0x8024A4E4: lui         $v0, 0xFFDF
        ctx->r2 = S32(0XFFDF << 16);
            goto L_8024A4F8;
    }
    // 0x8024A4E4: lui         $v0, 0xFFDF
    ctx->r2 = S32(0XFFDF << 16);
    // 0x8024A4E8: jal         0x8004F5C4
    // 0x8024A4EC: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8024A4EC: nop

    after_0:
    // 0x8024A4F0: j           L_8024A514
    // 0x8024A4F4: nop

        goto L_8024A514;
    // 0x8024A4F4: nop

L_8024A4F8:
    // 0x8024A4F8: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8024A4FC: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x8024A500: ori         $v0, $v0, 0xDFE0
    ctx->r2 = ctx->r2 | 0XDFE0;
    // 0x8024A504: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024A508: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8024A50C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x8024A510: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
L_8024A514:
    // 0x8024A514: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024A518: jr          $ra
    // 0x8024A51C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024A51C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024D0CC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D0CC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8024D0D0: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8024D0D4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8024D0D8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8024D0DC: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x8024D0E0: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8024D0E4: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8024D0E8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8024D0EC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8024D0F0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8024D0F4: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8024D0F8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8024D0FC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024D100: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024D104: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024D108: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x8024D10C: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x8024D110: lhu         $s5, 0x5B64($s5)
    ctx->r21 = MEM_HU(ctx->r21, 0X5B64);
    // 0x8024D114: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x8024D118: lui         $s6, 0x8025
    ctx->r22 = S32(0X8025 << 16);
    // 0x8024D11C: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x8024D120: lhu         $s6, 0x5B66($s6)
    ctx->r22 = MEM_HU(ctx->r22, 0X5B66);
    // 0x8024D124: jal         0x800874D0
    // 0x8024D128: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x8024D128: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x8024D12C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x8024D130: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8024D134: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x8024D138: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024D13C: addiu       $a0, $a0, 0x64C0
    ctx->r4 = ADD32(ctx->r4, 0X64C0);
    // 0x8024D140: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x8024D144: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024D148: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024D14C: lbu         $v1, 0x5C08($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5C08);
    // 0x8024D150: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8024D154: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024D158: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8024D15C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8024D160: jal         0x80086F94
    // 0x8024D164: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x8024D164: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x8024D168: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8024D16C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024D170: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024D174: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024D178: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024D17C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024D180: lhu         $v0, 0x5B68($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X5B68);
    // 0x8024D184: beq         $v0, $zero, L_8024D3A0
    if (ctx->r2 == 0) {
        // 0x8024D188: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_8024D3A0;
    }
    // 0x8024D188: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_8024D18C:
    // 0x8024D18C: bgez        $s6, L_8024D198
    if (SIGNED(ctx->r22) >= 0) {
        // 0x8024D190: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_8024D198;
    }
    // 0x8024D190: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x8024D194: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_8024D198:
    // 0x8024D198: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8024D19C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024D1A0: beq         $v0, $zero, L_8024D45C
    if (ctx->r2 == 0) {
        // 0x8024D1A4: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8024D45C;
    }
    // 0x8024D1A4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8024D1A8: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8024D1AC: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8024D1B0: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x8024D1B4: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x8024D1B8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8024D1BC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8024D1C0: jal         0x800874D0
    // 0x8024D1C4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x8024D1C4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x8024D1C8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8024D1CC: jal         0x80087248
    // 0x8024D1D0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x8024D1D0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x8024D1D4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8024D1D8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8024D1DC: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x8024D1E0: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x8024D1E4: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8024D1E8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8024D1EC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8024D1F0: jal         0x800874D0
    // 0x8024D1F4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x8024D1F4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x8024D1F8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8024D1FC: jal         0x80087248
    // 0x8024D200: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x8024D200: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x8024D204: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x8024D208: bgez        $s5, L_8024D214
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8024D20C: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_8024D214;
    }
    // 0x8024D20C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8024D210: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_8024D214:
    // 0x8024D214: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x8024D218: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8024D21C: jal         0x800874D0
    // 0x8024D220: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x8024D220: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x8024D224: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8024D228: jal         0x80087248
    // 0x8024D22C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x8024D22C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x8024D230: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8024D234: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x8024D238: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x8024D23C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8024D240: bnel        $v0, $zero, L_8024D18C
    if (ctx->r2 != 0) {
        // 0x8024D244: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8024D18C;
    }
    goto skip_0;
    // 0x8024D244: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x8024D248: beq         $a1, $zero, L_8024D398
    if (ctx->r5 == 0) {
        // 0x8024D24C: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_8024D398;
    }
    // 0x8024D24C: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x8024D250: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x8024D254: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x8024D258: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_8024D25C:
    // 0x8024D25C: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x8024D260: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x8024D264: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x8024D268: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x8024D26C: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x8024D270: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x8024D274: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x8024D278: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024D27C: mflo        $a3
    ctx->r7 = lo;
    // 0x8024D280: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x8024D284: nop

    // 0x8024D288: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x8024D28C: bne         $a1, $zero, L_8024D298
    if (ctx->r5 != 0) {
        // 0x8024D290: nop
    
            goto L_8024D298;
    }
    // 0x8024D290: nop

    // 0x8024D294: break       7
    do_break(2149896852);
L_8024D298:
    // 0x8024D298: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8024D29C: bne         $a1, $at, L_8024D2B0
    if (ctx->r5 != ctx->r1) {
        // 0x8024D2A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8024D2B0;
    }
    // 0x8024D2A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024D2A4: bne         $a3, $at, L_8024D2B0
    if (ctx->r7 != ctx->r1) {
        // 0x8024D2A8: nop
    
            goto L_8024D2B0;
    }
    // 0x8024D2A8: nop

    // 0x8024D2AC: break       6
    do_break(2149896876);
L_8024D2B0:
    // 0x8024D2B0: mflo        $a3
    ctx->r7 = lo;
    // 0x8024D2B4: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x8024D2B8: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x8024D2BC: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8024D2C0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8024D2C4: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x8024D2C8: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024D2CC: mflo        $v0
    ctx->r2 = lo;
    // 0x8024D2D0: nop

    // 0x8024D2D4: nop

    // 0x8024D2D8: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8024D2DC: bne         $a1, $zero, L_8024D2E8
    if (ctx->r5 != 0) {
        // 0x8024D2E0: nop
    
            goto L_8024D2E8;
    }
    // 0x8024D2E0: nop

    // 0x8024D2E4: break       7
    do_break(2149896932);
L_8024D2E8:
    // 0x8024D2E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8024D2EC: bne         $a1, $at, L_8024D300
    if (ctx->r5 != ctx->r1) {
        // 0x8024D2F0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8024D300;
    }
    // 0x8024D2F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024D2F4: bne         $v0, $at, L_8024D300
    if (ctx->r2 != ctx->r1) {
        // 0x8024D2F8: nop
    
            goto L_8024D300;
    }
    // 0x8024D2F8: nop

    // 0x8024D2FC: break       6
    do_break(2149896956);
L_8024D300:
    // 0x8024D300: mflo        $v0
    ctx->r2 = lo;
    // 0x8024D304: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8024D308: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x8024D30C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8024D310: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8024D314: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x8024D318: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024D31C: mflo        $v1
    ctx->r3 = lo;
    // 0x8024D320: nop

    // 0x8024D324: nop

    // 0x8024D328: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x8024D32C: bne         $a1, $zero, L_8024D338
    if (ctx->r5 != 0) {
        // 0x8024D330: nop
    
            goto L_8024D338;
    }
    // 0x8024D330: nop

    // 0x8024D334: break       7
    do_break(2149897012);
L_8024D338:
    // 0x8024D338: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8024D33C: bne         $a1, $at, L_8024D350
    if (ctx->r5 != ctx->r1) {
        // 0x8024D340: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8024D350;
    }
    // 0x8024D340: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8024D344: bne         $v1, $at, L_8024D350
    if (ctx->r3 != ctx->r1) {
        // 0x8024D348: nop
    
            goto L_8024D350;
    }
    // 0x8024D348: nop

    // 0x8024D34C: break       6
    do_break(2149897036);
L_8024D350:
    // 0x8024D350: mflo        $v1
    ctx->r3 = lo;
    // 0x8024D354: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x8024D358: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x8024D35C: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x8024D360: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x8024D364: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x8024D368: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x8024D36C: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x8024D370: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x8024D374: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x8024D378: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x8024D37C: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x8024D380: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8024D384: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x8024D388: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x8024D38C: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x8024D390: bne         $v0, $zero, L_8024D25C
    if (ctx->r2 != 0) {
        // 0x8024D394: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_8024D25C;
    }
    // 0x8024D394: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_8024D398:
    // 0x8024D398: j           L_8024D18C
    // 0x8024D39C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8024D18C;
    // 0x8024D39C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8024D3A0:
    // 0x8024D3A0: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x8024D3A4: bne         $v0, $zero, L_8024D45C
    if (ctx->r2 != 0) {
        // 0x8024D3A8: nop
    
            goto L_8024D45C;
    }
    // 0x8024D3A8: nop

L_8024D3AC:
    // 0x8024D3AC: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x8024D3B0: bltzl       $v0, L_8024D3B8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8024D3B4: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_8024D3B8;
    }
    goto skip_1;
    // 0x8024D3B4: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_8024D3B8:
    // 0x8024D3B8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8024D3BC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024D3C0: beq         $v0, $zero, L_8024D45C
    if (ctx->r2 == 0) {
        // 0x8024D3C4: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8024D45C;
    }
    // 0x8024D3C4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8024D3C8: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8024D3CC: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8024D3D0: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x8024D3D4: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x8024D3D8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8024D3DC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8024D3E0: jal         0x800874D0
    // 0x8024D3E4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x8024D3E4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x8024D3E8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8024D3EC: jal         0x80087248
    // 0x8024D3F0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x8024D3F0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x8024D3F4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8024D3F8: bgez        $s5, L_8024D404
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8024D3FC: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_8024D404;
    }
    // 0x8024D3FC: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x8024D400: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_8024D404:
    // 0x8024D404: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8024D408: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8024D40C: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x8024D410: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x8024D414: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024D418: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8024D41C: jal         0x800874D0
    // 0x8024D420: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x8024D420: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x8024D424: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8024D428: jal         0x80087248
    // 0x8024D42C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x8024D42C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x8024D430: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8024D434: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x8024D438: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8024D43C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8024D440: bnel        $v0, $zero, L_8024D3AC
    if (ctx->r2 != 0) {
        // 0x8024D444: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8024D3AC;
    }
    goto skip_2;
    // 0x8024D444: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x8024D448: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024D44C: jal         0x80099F90
    // 0x8024D450: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x8024D450: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x8024D454: j           L_8024D3AC
    // 0x8024D458: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8024D3AC;
    // 0x8024D458: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8024D45C:
    // 0x8024D45C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8024D460: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x8024D464: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8024D468: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8024D46C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8024D470: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8024D474: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8024D478: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8024D47C: jr          $ra
    // 0x8024D480: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8024D480: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_802269C4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269C4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x802269C8: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x802269CC: bne         $v0, $zero, L_80226A8C
    if (ctx->r2 != 0) {
        // 0x802269D0: addiu       $v0, $zero, -0xC0
        ctx->r2 = ADD32(0, -0XC0);
            goto L_80226A8C;
    }
    // 0x802269D0: addiu       $v0, $zero, -0xC0
    ctx->r2 = ADD32(0, -0XC0);
    // 0x802269D4: lw          $a1, 0x28($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X28);
    // 0x802269D8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x802269DC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x802269E0: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x802269E4: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x802269E8: addiu       $v0, $zero, -0x140
    ctx->r2 = ADD32(0, -0X140);
    // 0x802269EC: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x802269F0: lui         $v0, 0xFF40
    ctx->r2 = S32(0XFF40 << 16);
    // 0x802269F4: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x802269F8: lui         $v0, 0xFEC0
    ctx->r2 = S32(0XFEC0 << 16);
    // 0x802269FC: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80226A00: addiu       $v0, $zero, 0xE00
    ctx->r2 = ADD32(0, 0XE00);
    // 0x80226A04: sh          $a0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r4;
    // 0x80226A08: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x80226A0C: sh          $zero, 0x58($a1)
    MEM_H(0X58, ctx->r5) = 0;
    // 0x80226A10: sh          $zero, 0x54($a1)
    MEM_H(0X54, ctx->r5) = 0;
    // 0x80226A14: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80226A18: lw          $a1, 0x2C($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X2C);
    // 0x80226A1C: addiu       $t0, $zero, -0x3
    ctx->r8 = ADD32(0, -0X3);
    // 0x80226A20: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226A24: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80226A28: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x80226A2C: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80226A30: lui         $v0, 0x3C
    ctx->r2 = S32(0X3C << 16);
    // 0x80226A34: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80226A38: lui         $v0, 0xFE00
    ctx->r2 = S32(0XFE00 << 16);
    // 0x80226A3C: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80226A40: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226A44: sh          $a0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r4;
    // 0x80226A48: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x80226A4C: sh          $zero, 0x58($a1)
    MEM_H(0X58, ctx->r5) = 0;
    // 0x80226A50: sh          $zero, 0x54($a1)
    MEM_H(0X54, ctx->r5) = 0;
    // 0x80226A54: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
L_80226A58:
    // 0x80226A58: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    // 0x80226A5C: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80226A60: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80226A64: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    // 0x80226A68: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x80226A6C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80226A70: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80226A74: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80226A78: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80226A7C: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x80226A80: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x80226A84: bne         $v0, $zero, L_80226A58
    if (ctx->r2 != 0) {
        // 0x80226A88: sb          $v1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r3;
            goto L_80226A58;
    }
    // 0x80226A88: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_80226A8C:
    // 0x80226A8C: jr          $ra
    // 0x80226A90: nop

    TRACE_RETURN()
    return;
    // 0x80226A90: nop

;}
RECOMP_FUNC void func_802251BC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251BC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802251C0: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x802251C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802251CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251D0: beq         $v1, $v0, L_802251F8
    if (ctx->r3 == ctx->r2) {
        // 0x802251D4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251F8;
    }
    // 0x802251D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802251DC: bne         $v0, $zero, L_8022520C
    if (ctx->r2 != 0) {
        // 0x802251E0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022520C;
    }
    // 0x802251E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251E4: slti        $v0, $v1, 0x11
    ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x802251E8: beq         $v0, $zero, L_8022520C
    if (ctx->r2 == 0) {
        // 0x802251EC: slti        $v0, $v1, 0xD
        ctx->r2 = SIGNED(ctx->r3) < 0XD ? 1 : 0;
            goto L_8022520C;
    }
    // 0x802251EC: slti        $v0, $v1, 0xD
    ctx->r2 = SIGNED(ctx->r3) < 0XD ? 1 : 0;
    // 0x802251F0: bne         $v0, $zero, L_80225210
    if (ctx->r2 != 0) {
        // 0x802251F4: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80225210;
    }
    // 0x802251F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251F8:
    // 0x802251F8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251FC: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x80225200: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80225204: j           L_80225210
    // 0x80225208: addiu       $a1, $a1, 0x26C
    ctx->r5 = ADD32(ctx->r5, 0X26C);
        goto L_80225210;
    // 0x80225208: addiu       $a1, $a1, 0x26C
    ctx->r5 = ADD32(ctx->r5, 0X26C);
L_8022520C:
    // 0x8022520C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80225210:
    // 0x80225210: jal         0x80037D80
    // 0x80225214: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x80225214: nop

    after_0:
    // 0x80225218: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8022521C: lb          $t1, -0x3BC7($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X3BC7);
    // 0x80225220: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80225224: addiu       $a0, $a0, 0xCB4
    ctx->r4 = ADD32(ctx->r4, 0XCB4);
    // 0x80225228: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x8022522C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225230: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80225234: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225238: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x8022523C: lbu         $a1, 0x3($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3);
    // 0x80225240: lui         $a3, 0x7FE9
    ctx->r7 = S32(0X7FE9 << 16);
    // 0x80225244: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225248: sh          $a1, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r5;
    // 0x8022524C: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x80225250: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x80225254: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80225258: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022525C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225260: sb          $a2, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r6;
    // 0x80225264: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x80225268: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8022526C: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80225270: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80225274: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225278: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x8022527C: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225280: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225284: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225288: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022528C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225290: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225294: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225298: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x8022529C: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x802252A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802252A4: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x802252A8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802252AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252B0: sb          $t0, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r8;
    // 0x802252B4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252B8: sb          $a1, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r5;
    // 0x802252BC: beq         $t1, $v0, L_802252E8
    if (ctx->r9 == ctx->r2) {
        // 0x802252C0: slti        $v0, $t1, 0xC
        ctx->r2 = SIGNED(ctx->r9) < 0XC ? 1 : 0;
            goto L_802252E8;
    }
    // 0x802252C0: slti        $v0, $t1, 0xC
    ctx->r2 = SIGNED(ctx->r9) < 0XC ? 1 : 0;
    // 0x802252C4: beq         $v0, $zero, L_802252DC
    if (ctx->r2 == 0) {
        // 0x802252C8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802252DC;
    }
    // 0x802252C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802252CC: beq         $t1, $v0, L_802252E8
    if (ctx->r9 == ctx->r2) {
        // 0x802252D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802252E8;
    }
    // 0x802252D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802252D4: j           L_80225334
    // 0x802252D8: nop

        goto L_80225334;
    // 0x802252D8: nop

L_802252DC:
    // 0x802252DC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802252E0: bne         $t1, $v0, L_80225334
    if (ctx->r9 != ctx->r2) {
        // 0x802252E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225334;
    }
    // 0x802252E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802252E8:
    // 0x802252E8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802252EC: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x802252F0: beq         $v0, $zero, L_80225334
    if (ctx->r2 == 0) {
        // 0x802252F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225334;
    }
    // 0x802252F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802252F8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802252FC: lbu         $v0, -0x3A4F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A4F);
    // 0x80225300: beq         $v0, $zero, L_80225330
    if (ctx->r2 == 0) {
        // 0x80225304: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225330;
    }
    // 0x80225304: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225308: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022530C: sb          $v0, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = ctx->r2;
    // 0x80225310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225314: sb          $zero, 0x170($s0)
    MEM_B(0X170, ctx->r16) = 0;
    // 0x80225318: jal         0x800700D8
    // 0x8022531C: sb          $v0, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r2;
    func_800700D8_4B4D8(rdram, ctx);
        goto after_1;
    // 0x8022531C: sb          $v0, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r2;
    after_1:
    // 0x80225320: jal         0x80070100
    // 0x80225324: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070100_4B500(rdram, ctx);
        goto after_2;
    // 0x80225324: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80225328: j           L_80225338
    // 0x8022532C: nop

        goto L_80225338;
    // 0x8022532C: nop

L_80225330:
    // 0x80225330: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225334:
    // 0x80225334: sb          $v0, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = ctx->r2;
L_80225338:
    // 0x80225338: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8022533C: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x80225340: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225344: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80225348: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x8022534C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225350: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225354: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80225358: lw          $a0, -0x40C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X40C);
    // 0x8022535C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80225360: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225364: lw          $v0, -0x20($at)
    ctx->r2 = MEM_W(ctx->r1, -0X20);
    // 0x80225368: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022536C: jal         0x8004C790
    // 0x80225370: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_3;
    // 0x80225370: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_3:
    // 0x80225374: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225378: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022537C: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
    // 0x80225380: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80225384: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80225388: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022538C: lw          $v1, 0x148($at)
    ctx->r3 = MEM_W(ctx->r1, 0X148);
    // 0x80225390: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x80225394: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225398: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8022539C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802253A0: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    // 0x802253A4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802253A8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802253AC: jal         0x80054FB8
    // 0x802253B0: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_4;
    // 0x802253B0: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_4:
    // 0x802253B4: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802253B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802253BC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802253C0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802253C4: jal         0x8004A614
    // 0x802253C8: lw          $a0, -0x1580($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1580);
    func_8004A614_25A14(rdram, ctx);
        goto after_5;
    // 0x802253C8: lw          $a0, -0x1580($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1580);
    after_5:
    // 0x802253CC: jal         0x80225420
    // 0x802253D0: nop

    func_80225420_ovl28(rdram, ctx);
        goto after_6;
    // 0x802253D0: nop

    after_6:
    // 0x802253D4: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802253D8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802253DC: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802253E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802253E4: lw          $v1, 0x1E4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1E4);
    // 0x802253E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802253EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802253F0: lw          $v0, 0x1E8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1E8);
    // 0x802253F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x802253F8: sw          $v1, -0x3690($at)
    MEM_W(-0X3690, ctx->r1) = ctx->r3;
    // 0x802253FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80225400: sw          $v0, -0x368C($at)
    MEM_W(-0X368C, ctx->r1) = ctx->r2;
    // 0x80225404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225408: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022540C: jr          $ra
    // 0x80225410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225414: nop

    // 0x80225418: nop

    // 0x8022541C: nop

;}
RECOMP_FUNC void func_8023253C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023253C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232540: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232544: jal         0x8004F418
    // 0x80232548: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80232548: nop

    after_0:
    // 0x8023254C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232550: jr          $ra
    // 0x80232554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80232558: nop

    // 0x8023255C: nop

;}
RECOMP_FUNC void func_80234828_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234828: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023482C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234830: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80234834: bne         $v0, $zero, L_802348A8
    if (ctx->r2 != 0) {
        // 0x80234838: nop
    
            goto L_802348A8;
    }
    // 0x80234838: nop

    // 0x8023483C: lhu         $v0, 0x3B2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3B2);
    // 0x80234840: sb          $zero, 0x1DC($a0)
    MEM_B(0X1DC, ctx->r4) = 0;
    // 0x80234844: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80234848: bne         $v0, $zero, L_80234868
    if (ctx->r2 != 0) {
        // 0x8023484C: sb          $zero, 0xE($a0)
        MEM_B(0XE, ctx->r4) = 0;
            goto L_80234868;
    }
    // 0x8023484C: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x80234850: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80234854: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80234858: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x8023485C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234860: j           L_8023489C
    // 0x80234864: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023489C;
    // 0x80234864: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80234868:
    // 0x80234868: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x8023486C: beq         $v0, $zero, L_80234888
    if (ctx->r2 == 0) {
        // 0x80234870: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80234888;
    }
    // 0x80234870: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80234874: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80234878: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x8023487C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234880: j           L_8023489C
    // 0x80234884: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8023489C;
    // 0x80234884: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80234888:
    // 0x80234888: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8023488C: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80234890: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x80234894: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234898: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8023489C:
    // 0x8023489C: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x802348A0: jal         0x80050294
    // 0x802348A4: sb          $v1, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802348A4: sb          $v1, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r3;
    after_0:
L_802348A8:
    // 0x802348A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802348AC: jr          $ra
    // 0x802348B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802348B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A058_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A058: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023A05C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023A060: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A064: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023A068: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023A06C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023A070: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023A074: beq         $v0, $zero, L_8023A1F0
    if (ctx->r2 == 0) {
        // 0x8023A078: addiu       $s2, $s0, 0x4E0
        ctx->r18 = ADD32(ctx->r16, 0X4E0);
            goto L_8023A1F0;
    }
    // 0x8023A078: addiu       $s2, $s0, 0x4E0
    ctx->r18 = ADD32(ctx->r16, 0X4E0);
    // 0x8023A07C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023A080: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x8023A084: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023A088: bne         $v0, $zero, L_8023A0A4
    if (ctx->r2 != 0) {
        // 0x8023A08C: nop
    
            goto L_8023A0A4;
    }
    // 0x8023A08C: nop

    // 0x8023A090: lh          $v0, 0xB2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XB2);
    // 0x8023A094: beq         $v0, $zero, L_8023A0A4
    if (ctx->r2 == 0) {
        // 0x8023A098: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023A0A4;
    }
    // 0x8023A098: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023A09C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023A0A0: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
L_8023A0A4:
    // 0x8023A0A4: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x8023A0A8: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8023A0AC: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023A0B0: and         $a2, $v1, $v0
    ctx->r6 = ctx->r3 & ctx->r2;
    // 0x8023A0B4: beq         $a2, $zero, L_8023A1F0
    if (ctx->r6 == 0) {
        // 0x8023A0B8: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8023A1F0;
    }
    // 0x8023A0B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023A0BC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023A0C0: bne         $v1, $v0, L_8023A0DC
    if (ctx->r3 != ctx->r2) {
        // 0x8023A0C4: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8023A0DC;
    }
    // 0x8023A0C4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8023A0C8: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x8023A0CC: jal         0x8002A33C
    // 0x8023A0D0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023A0D0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8023A0D4: j           L_8023A1F0
    // 0x8023A0D8: nop

        goto L_8023A1F0;
    // 0x8023A0D8: nop

L_8023A0DC:
    // 0x8023A0DC: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8023A0E0: lhu         $v1, 0xB2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB2);
    // 0x8023A0E4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023A0E8: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x8023A0EC: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8023A0F0: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8023A0F4: jal         0x8002A33C
    // 0x8023A0F8: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023A0F8: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_1:
    // 0x8023A0FC: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x8023A100: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023A104: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8023A108: bgtz        $v1, L_8023A118
    if (SIGNED(ctx->r3) > 0) {
        // 0x8023A10C: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8023A118;
    }
    // 0x8023A10C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023A110: j           L_8023A148
    // 0x8023A114: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
        goto L_8023A148;
    // 0x8023A114: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
L_8023A118:
    // 0x8023A118: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023A11C: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023A120: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023A124: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A128: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A12C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023A130: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x8023A134: lh          $v1, 0xB2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XB2);
    // 0x8023A138: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8023A13C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023A140: bne         $v1, $zero, L_8023A14C
    if (ctx->r3 != 0) {
        // 0x8023A144: nop
    
            goto L_8023A14C;
    }
    // 0x8023A144: nop

L_8023A148:
    // 0x8023A148: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8023A14C:
    // 0x8023A14C: beq         $s1, $zero, L_8023A1F0
    if (ctx->r17 == 0) {
        // 0x8023A150: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023A1F0;
    }
    // 0x8023A150: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A154: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8023A158: jal         0x80050294
    // 0x8023A15C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8023A15C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8023A160: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023A164: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8023A168: sw          $zero, 0x30($s2)
    MEM_W(0X30, ctx->r18) = 0;
    // 0x8023A16C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023A170: addiu       $a1, $s2, 0x28
    ctx->r5 = ADD32(ctx->r18, 0X28);
    // 0x8023A174: jal         0x8004FEA0
    // 0x8023A178: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_3;
    // 0x8023A178: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8023A17C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023A180: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8023A184: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023A188: beq         $v0, $zero, L_8023A198
    if (ctx->r2 == 0) {
        // 0x8023A18C: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_8023A198;
    }
    // 0x8023A18C: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x8023A190: j           L_8023A1A0
    // 0x8023A194: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_8023A1A0;
    // 0x8023A194: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8023A198:
    // 0x8023A198: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023A19C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8023A1A0:
    // 0x8023A1A0: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x8023A1A4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023A1A8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8023A1AC: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8023A1B0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8023A1B4: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8023A1B8: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8023A1BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A1C0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023A1C4: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8023A1C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A1CC: jal         0x8004DA90
    // 0x8023A1D0: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8023A1D0: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_4:
    // 0x8023A1D4: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x8023A1D8: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x8023A1DC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023A1E0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023A1E4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023A1E8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023A1EC: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
L_8023A1F0:
    // 0x8023A1F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023A1F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023A1F8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A1FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023A200: jr          $ra
    // 0x8023A204: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023A204: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80235DCC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235DCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235DD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235DD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235DD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235DDC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80235DE0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235DE4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235DE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235DEC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80235DF0: jal         0x8004D5D4
    // 0x80235DF4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80235DF4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80235DF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235DFC: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80235E00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235E04: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80235E08: sh          $v0, 0x15C($a0)
    MEM_H(0X15C, ctx->r4) = ctx->r2;
    // 0x80235E0C: sh          $v0, 0x15A($a0)
    MEM_H(0X15A, ctx->r4) = ctx->r2;
    // 0x80235E10: sh          $v0, 0x158($a0)
    MEM_H(0X158, ctx->r4) = ctx->r2;
    // 0x80235E14: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80235E18: sh          $v0, 0x15E($a0)
    MEM_H(0X15E, ctx->r4) = ctx->r2;
    // 0x80235E1C: sw          $zero, 0x78($a0)
    MEM_W(0X78, ctx->r4) = 0;
    // 0x80235E20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80235E24: jal         0x80235CC8
    // 0x80235E28: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    func_80235CC8_ovl28(rdram, ctx);
        goto after_1;
    // 0x80235E28: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    after_1:
    // 0x80235E2C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235E30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235E34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235E38: jr          $ra
    // 0x80235E3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235E3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802311B8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802311B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802311BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802311C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802311C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802311C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802311CC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802311D0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802311D4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802311D8: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x802311DC: beq         $v0, $zero, L_802312E4
    if (ctx->r2 == 0) {
        // 0x802311E0: addiu       $a0, $s0, 0x308
        ctx->r4 = ADD32(ctx->r16, 0X308);
            goto L_802312E4;
    }
    // 0x802311E0: addiu       $a0, $s0, 0x308
    ctx->r4 = ADD32(ctx->r16, 0X308);
    // 0x802311E4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802311E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802311EC: addu        $at, $at, $v0
    gpr jr_addend_802311F4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802311F0: lw          $v0, 0x5D78($at)
    ctx->r2 = ADD32(ctx->r1, 0X5D78);
    // 0x802311F4: jr          $v0
    // 0x802311F8: nop

    switch (jr_addend_802311F4 >> 2) {
        case 0: goto L_802311FC; break;
        case 1: goto L_80231220; break;
        case 2: goto L_8023124C; break;
        case 3: goto L_80231258; break;
        case 4: goto L_80231294; break;
        case 5: goto L_802312B0; break;
        default: switch_error(__func__, 0x802311F4, 0x80255D78);
    }
    // 0x802311F8: nop

L_802311FC:
    // 0x802311FC: jal         0x80230B3C
    // 0x80231200: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230B3C_ovl28(rdram, ctx);
        goto after_0;
    // 0x80231200: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80231204: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231208: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023120C: jal         0x80050294
    // 0x80231210: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80231210: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80231214: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80231218: j           L_802312A8
    // 0x8023121C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802312A8;
    // 0x8023121C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80231220:
    // 0x80231220: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x80231224: bne         $v0, $s0, L_802312E4
    if (ctx->r2 != ctx->r16) {
        // 0x80231228: nop
    
            goto L_802312E4;
    }
    // 0x80231228: nop

    // 0x8023122C: jal         0x802314E8
    // 0x80231230: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802314E8_ovl28(rdram, ctx);
        goto after_2;
    // 0x80231230: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80231234: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80231238: beql        $v0, $zero, L_802312E4
    if (ctx->r2 == 0) {
        // 0x8023123C: sw          $zero, 0x184($s1)
        MEM_W(0X184, ctx->r17) = 0;
            goto L_802312E4;
    }
    goto skip_0;
    // 0x8023123C: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    skip_0:
    // 0x80231240: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80231244: j           L_802312A8
    // 0x80231248: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802312A8;
    // 0x80231248: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023124C:
    // 0x8023124C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80231250: j           L_802312A8
    // 0x80231254: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802312A8;
    // 0x80231254: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80231258:
    // 0x80231258: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8023125C: lw          $a1, 0x2B94($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B94);
    // 0x80231260: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80231264: jal         0x80061510
    // 0x80231268: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x80231268: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_3:
    // 0x8023126C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231270: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231274: jal         0x80050294
    // 0x80231278: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80231278: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8023127C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x80231280: jal         0x8002A33C
    // 0x80231284: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80231284: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x80231288: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023128C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231290: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80231294:
    // 0x80231294: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x80231298: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023129C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802312A0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802312A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802312A8:
    // 0x802312A8: j           L_802312E4
    // 0x802312AC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802312E4;
    // 0x802312AC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802312B0:
    // 0x802312B0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802312B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802312B8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802312BC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802312C0: bne         $v0, $zero, L_802312E4
    if (ctx->r2 != 0) {
        // 0x802312C4: lui         $v0, 0x48C
        ctx->r2 = S32(0X48C << 16);
            goto L_802312E4;
    }
    // 0x802312C4: lui         $v0, 0x48C
    ctx->r2 = S32(0X48C << 16);
    // 0x802312C8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802312CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802312D0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x802312D4: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x802312D8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802312DC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802312E0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_802312E4:
    // 0x802312E4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802312E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802312EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802312F0: jr          $ra
    // 0x802312F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802312F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024B9CC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B9CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024B9D0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024B9D4: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024B9D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024B9DC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B9E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024B9E4: lw          $v0, 0x5308($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5308);
    // 0x8024B9E8: jalr        $v0
    // 0x8024B9EC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024B9EC: nop

    after_0:
    // 0x8024B9F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024B9F4: jr          $ra
    // 0x8024B9F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024B9F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231F50_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231F50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80231F54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231F58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231F5C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80231F60: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80231F64: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x80231F68: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80231F6C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80231F70: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x80231F74: beql        $v0, $zero, L_80231F8C
    if (ctx->r2 == 0) {
        // 0x80231F78: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80231F8C;
    }
    goto skip_0;
    // 0x80231F78: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x80231F7C: jal         0x802324D8
    // 0x80231F80: nop

    func_802324D8_ovl28(rdram, ctx);
        goto after_0;
    // 0x80231F80: nop

    after_0:
    // 0x80231F84: j           L_8023201C
    // 0x80231F88: nop

        goto L_8023201C;
    // 0x80231F88: nop

L_80231F8C:
    // 0x80231F8C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80231F90: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80231F94: jal         0x8004F820
    // 0x80231F98: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80231F98: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_1:
    // 0x80231F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231FA0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231FA4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80231FA8: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80231FAC: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80231FB0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231FB4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80231FB8: jal         0x8004DA90
    // 0x80231FBC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80231FBC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x80231FC0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80231FC4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80231FC8: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80231FCC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80231FD0: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80231FD4: addiu       $a3, $s1, 0x1C
    ctx->r7 = ADD32(ctx->r17, 0X1C);
    // 0x80231FD8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80231FDC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80231FE0: jal         0x8004FAEC
    // 0x80231FE4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_3;
    // 0x80231FE4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80231FE8: beq         $v0, $zero, L_8023201C
    if (ctx->r2 == 0) {
        // 0x80231FEC: lui         $v0, 0xF
        ctx->r2 = S32(0XF << 16);
            goto L_8023201C;
    }
    // 0x80231FEC: lui         $v0, 0xF
    ctx->r2 = S32(0XF << 16);
    // 0x80231FF0: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80231FF4: ori         $v0, $v0, 0x4240
    ctx->r2 = ctx->r2 | 0X4240;
    // 0x80231FF8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80231FFC: bne         $v0, $zero, L_8023201C
    if (ctx->r2 != 0) {
        // 0x80232000: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8023201C;
    }
    // 0x80232000: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232004: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x80232008: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023200C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232010: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80232014: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80232018: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8023201C:
    // 0x8023201C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80232020: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80232024: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232028: jr          $ra
    // 0x8023202C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023202C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225E80_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225E84: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225E88: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80225E8C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80225E90: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80225E94: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225E98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225E9C: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x80225EA0: bne         $v0, $zero, L_80225F44
    if (ctx->r2 != 0) {
        // 0x80225EA4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80225F44;
    }
    // 0x80225EA4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80225EA8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80225EAC: addiu       $s3, $zero, 0x1C
    ctx->r19 = ADD32(0, 0X1C);
L_80225EB0:
    // 0x80225EB0: jal         0x8004F144
    // 0x80225EB4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80225EB4: nop

    after_0:
    // 0x80225EB8: beql        $v0, $zero, L_80225ED8
    if (ctx->r2 == 0) {
        // 0x80225EBC: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_80225ED8;
    }
    goto skip_0;
    // 0x80225EBC: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80225EC0: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x80225EC4: sb          $s3, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r19;
    // 0x80225EC8: sb          $s1, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r17;
    // 0x80225ECC: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x80225ED0: sb          $s0, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r16;
    // 0x80225ED4: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
L_80225ED8:
    // 0x80225ED8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80225EDC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80225EE0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80225EE4: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80225EE8: bne         $v0, $zero, L_80225EB0
    if (ctx->r2 != 0) {
        // 0x80225EEC: nop
    
            goto L_80225EB0;
    }
    // 0x80225EEC: nop

    // 0x80225EF0: lw          $v1, 0x30($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X30);
    // 0x80225EF4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225EF8: addiu       $s0, $zero, 0xB
    ctx->r16 = ADD32(0, 0XB);
    // 0x80225EFC: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80225F00: addiu       $s1, $s1, 0x380
    ctx->r17 = ADD32(ctx->r17, 0X380);
    // 0x80225F04: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80225F08: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225F0C: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_80225F10:
    // 0x80225F10: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80225F14: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80225F18: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80225F1C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80225F20: jal         0x8005FA7C
    // 0x80225F24: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80225F24: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    after_1:
    // 0x80225F28: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x80225F2C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80225F30: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80225F34: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80225F38: slti        $v0, $v0, 0xE
    ctx->r2 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x80225F3C: bne         $v0, $zero, L_80225F10
    if (ctx->r2 != 0) {
        // 0x80225F40: sll         $v0, $s0, 24
        ctx->r2 = S32(ctx->r16 << 24);
            goto L_80225F10;
    }
    // 0x80225F40: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_80225F44:
    // 0x80225F44: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80225F48: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80225F4C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225F50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225F54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F58: jr          $ra
    // 0x80225F5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80225F5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022A238_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A238: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A23C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8022A240: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A244: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x8022A248: bne         $v0, $zero, L_8022A2A4
    if (ctx->r2 != 0) {
        // 0x8022A24C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8022A2A4;
    }
    // 0x8022A24C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022A250: addiu       $a3, $zero, -0x3
    ctx->r7 = ADD32(0, -0X3);
L_8022A254:
    // 0x8022A254: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x8022A258: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x8022A25C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022A260: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    // 0x8022A264: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8022A268: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022A26C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A270: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8022A274: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A278: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8022A27C: and         $v1, $v1, $a3
    ctx->r3 = ctx->r3 & ctx->r7;
    // 0x8022A280: bne         $v0, $zero, L_8022A254
    if (ctx->r2 != 0) {
        // 0x8022A284: sb          $v1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r3;
            goto L_8022A254;
    }
    // 0x8022A284: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8022A288: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A28C: sb          $zero, 0x44D8($at)
    MEM_B(0X44D8, ctx->r1) = 0;
    // 0x8022A290: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022A294: jal         0x8005FA7C
    // 0x8022A298: addiu       $a0, $a0, 0x2038
    ctx->r4 = ADD32(ctx->r4, 0X2038);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8022A298: addiu       $a0, $a0, 0x2038
    ctx->r4 = ADD32(ctx->r4, 0X2038);
    after_0:
    // 0x8022A29C: jal         0x8022B6D0
    // 0x8022A2A0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_8022B6D0_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022A2A0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_1:
L_8022A2A4:
    // 0x8022A2A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A2A8: jr          $ra
    // 0x8022A2AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A2AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237D60_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237D60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80237D64: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80237D68: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x80237D6C: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x80237D70: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80237D74: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80237D78: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80237D7C: lw          $v0, 0x401C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X401C);
    // 0x80237D80: jr          $ra
    // 0x80237D84: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80237D84: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022F06C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F06C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F070: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F074: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F078: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F07C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F080: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F084: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F088: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022F08C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022F090: bne         $v0, $zero, L_8022F0EC
    if (ctx->r2 != 0) {
        // 0x8022F094: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022F0EC;
    }
    // 0x8022F094: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022F098: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F09C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F0A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F0A4: jal         0x8004F820
    // 0x8022F0A8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F0A8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022F0AC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F0B0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F0B4: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022F0B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F0BC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F0C0: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022F0C4: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022F0C8: beq         $a0, $zero, L_8022F0EC
    if (ctx->r4 == 0) {
        // 0x8022F0CC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022F0EC;
    }
    // 0x8022F0CC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022F0D0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F0D4: jal         0x8022FE10
    // 0x8022F0D8: nop

    func_8022FE10_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022F0D8: nop

    after_1:
    // 0x8022F0DC: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F0E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F0E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022F0E8: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022F0EC:
    // 0x8022F0EC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022F0F0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022F0F4: bne         $v0, $zero, L_8022F118
    if (ctx->r2 != 0) {
        // 0x8022F0F8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022F118;
    }
    // 0x8022F0F8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022F0FC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022F100: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022F104: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022F108: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022F10C: jal         0x8022FEA8
    // 0x8022F110: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022F110: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022F114: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022F118:
    // 0x8022F118: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F11C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F120: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F124: jr          $ra
    // 0x8022F128: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F128: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80248728_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248728: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024872C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80248730: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80248734: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80248738: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024873C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80248740: jal         0x8006033C
    // 0x80248744: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80248744: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    after_0:
    // 0x80248748: beq         $v0, $zero, L_80248794
    if (ctx->r2 == 0) {
        // 0x8024874C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80248794;
    }
    // 0x8024874C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80248750: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80248754: addiu       $s0, $s0, 0x516C
    ctx->r16 = ADD32(ctx->r16, 0X516C);
    // 0x80248758: jal         0x8003E6BC
    // 0x8024875C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8024875C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80248760: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80248764: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80248768: jal         0x80071ACC
    // 0x8024876C: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_2;
    // 0x8024876C: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    after_2:
    // 0x80248770: jal         0x8003E6BC
    // 0x80248774: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_3;
    // 0x80248774: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_3:
    // 0x80248778: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8024877C: lui         $a1, 0x1006
    ctx->r5 = S32(0X1006 << 16);
    // 0x80248780: jal         0x80071ACC
    // 0x80248784: ori         $a1, $a1, 0x102
    ctx->r5 = ctx->r5 | 0X102;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_4;
    // 0x80248784: ori         $a1, $a1, 0x102
    ctx->r5 = ctx->r5 | 0X102;
    after_4:
    // 0x80248788: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024878C: j           L_802487C0
    // 0x80248790: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_802487C0;
    // 0x80248790: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80248794:
    // 0x80248794: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x80248798: jal         0x802492D0
    // 0x8024879C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    func_802492D0_ovl28(rdram, ctx);
        goto after_5;
    // 0x8024879C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    after_5:
    // 0x802487A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802487A4: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
    // 0x802487A8: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802487AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802487B0: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x802487B4: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x802487B8: jal         0x8024932C
    // 0x802487BC: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    func_8024932C_ovl28(rdram, ctx);
        goto after_6;
    // 0x802487BC: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    after_6:
L_802487C0:
    // 0x802487C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802487C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802487C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802487CC: jr          $ra
    // 0x802487D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802487D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225D0C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225D10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225D14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225D1C: lbu         $a0, 0x6($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X6);
    // 0x80225D20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225D24: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80225D28: beq         $v1, $v0, L_80225D60
    if (ctx->r3 == ctx->r2) {
        // 0x80225D2C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225D60;
    }
    // 0x80225D2C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225D30: beql        $v0, $zero, L_80225D48
    if (ctx->r2 == 0) {
        // 0x80225D34: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225D48;
    }
    goto skip_0;
    // 0x80225D34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225D38: beq         $v1, $zero, L_80225D58
    if (ctx->r3 == 0) {
        // 0x80225D3C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80225D58;
    }
    // 0x80225D3C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80225D40: j           L_80225DB0
    // 0x80225D44: nop

        goto L_80225DB0;
    // 0x80225D44: nop

L_80225D48:
    // 0x80225D48: beq         $v1, $v0, L_80225D88
    if (ctx->r3 == ctx->r2) {
        // 0x80225D4C: nop
    
            goto L_80225D88;
    }
    // 0x80225D4C: nop

    // 0x80225D50: j           L_80225DB0
    // 0x80225D54: nop

        goto L_80225DB0;
    // 0x80225D54: nop

L_80225D58:
    // 0x80225D58: j           L_80225DB0
    // 0x80225D5C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80225DB0;
    // 0x80225D5C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80225D60:
    // 0x80225D60: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80225D64: slti        $v0, $v0, 0x96
    ctx->r2 = SIGNED(ctx->r2) < 0X96 ? 1 : 0;
    // 0x80225D68: bne         $v0, $zero, L_80225DB0
    if (ctx->r2 != 0) {
        // 0x80225D6C: lui         $a0, 0x10F
        ctx->r4 = S32(0X10F << 16);
            goto L_80225DB0;
    }
    // 0x80225D6C: lui         $a0, 0x10F
    ctx->r4 = S32(0X10F << 16);
    // 0x80225D70: jal         0x80036B1C
    // 0x80225D74: ori         $a0, $a0, 0x3B02
    ctx->r4 = ctx->r4 | 0X3B02;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_0;
    // 0x80225D74: ori         $a0, $a0, 0x3B02
    ctx->r4 = ctx->r4 | 0X3B02;
    after_0:
    // 0x80225D78: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80225D7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D80: j           L_80225DB0
    // 0x80225D84: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80225DB0;
    // 0x80225D84: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80225D88:
    // 0x80225D88: jal         0x80036B7C
    // 0x80225D8C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_1;
    // 0x80225D8C: nop

    after_1:
    // 0x80225D90: beq         $v0, $zero, L_80225DB0
    if (ctx->r2 == 0) {
        // 0x80225D94: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225DB0;
    }
    // 0x80225D94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225D98: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225D9C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x80225DA0: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80225DA4: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x80225DA8: jal         0x800600F8
    // 0x80225DAC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_2;
    // 0x80225DAC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    after_2:
L_80225DB0:
    // 0x80225DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225DB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225DB8: jr          $ra
    // 0x80225DBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225DBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A608_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A60C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A610: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022A614: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022A618: beq         $v1, $v0, L_8022A630
    if (ctx->r3 == ctx->r2) {
        // 0x8022A61C: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_8022A630;
    }
    // 0x8022A61C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022A620: beq         $v1, $v0, L_8022A64C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A624: addiu       $v0, $zero, 0x86
        ctx->r2 = ADD32(0, 0X86);
            goto L_8022A64C;
    }
    // 0x8022A624: addiu       $v0, $zero, 0x86
    ctx->r2 = ADD32(0, 0X86);
    // 0x8022A628: j           L_8022A668
    // 0x8022A62C: nop

        goto L_8022A668;
    // 0x8022A62C: nop

L_8022A630:
    // 0x8022A630: addiu       $v0, $zero, 0x85
    ctx->r2 = ADD32(0, 0X85);
    // 0x8022A634: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A638: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022A63C: jal         0x8022B750
    // 0x8022A640: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8022B750_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022A640: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_0:
    // 0x8022A644: j           L_8022A660
    // 0x8022A648: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
        goto L_8022A660;
    // 0x8022A648: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
L_8022A64C:
    // 0x8022A64C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A650: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022A654: jal         0x8022B750
    // 0x8022A658: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_8022B750_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022A658: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_1:
    // 0x8022A65C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
L_8022A660:
    // 0x8022A660: jal         0x8022B784
    // 0x8022A664: nop

    func_8022B784_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022A664: nop

    after_2:
L_8022A668:
    // 0x8022A668: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A66C: jr          $ra
    // 0x8022A670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B57C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B57C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B580: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B584: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B588: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B58C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B590: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B598: beq         $v1, $v0, L_8023B5DC
    if (ctx->r3 == ctx->r2) {
        // 0x8023B59C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_8023B5DC;
    }
    // 0x8023B59C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023B5A0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023B5A4: beql        $v0, $zero, L_8023B5BC
    if (ctx->r2 == 0) {
        // 0x8023B5A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023B5BC;
    }
    goto skip_0;
    // 0x8023B5A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023B5AC: beq         $v1, $zero, L_8023B5D4
    if (ctx->r3 == 0) {
        // 0x8023B5B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023B5D4;
    }
    // 0x8023B5B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B5B4: j           L_8023B608
    // 0x8023B5B8: nop

        goto L_8023B608;
    // 0x8023B5B8: nop

L_8023B5BC:
    // 0x8023B5BC: beq         $v1, $v0, L_8023B5EC
    if (ctx->r3 == ctx->r2) {
        // 0x8023B5C0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023B5EC;
    }
    // 0x8023B5C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023B5C4: beq         $v1, $v0, L_8023B5DC
    if (ctx->r3 == ctx->r2) {
        // 0x8023B5C8: nop
    
            goto L_8023B5DC;
    }
    // 0x8023B5C8: nop

    // 0x8023B5CC: j           L_8023B608
    // 0x8023B5D0: nop

        goto L_8023B608;
    // 0x8023B5D0: nop

L_8023B5D4:
    // 0x8023B5D4: j           L_8023B5F4
    // 0x8023B5D8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
        goto L_8023B5F4;
    // 0x8023B5D8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
L_8023B5DC:
    // 0x8023B5DC: jal         0x8005044C
    // 0x8023B5E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x8023B5E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023B5E4: j           L_8023B608
    // 0x8023B5E8: nop

        goto L_8023B608;
    // 0x8023B5E8: nop

L_8023B5EC:
    // 0x8023B5EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B5F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8023B5F4:
    // 0x8023B5F4: jal         0x80050294
    // 0x8023B5F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8023B5F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8023B5FC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B600: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B604: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023B608:
    // 0x8023B608: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B60C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8023B610: beq         $v1, $zero, L_8023B628
    if (ctx->r3 == 0) {
        // 0x8023B614: addiu       $v0, $zero, 0x96
        ctx->r2 = ADD32(0, 0X96);
            goto L_8023B628;
    }
    // 0x8023B614: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x8023B618: beql        $v1, $v0, L_8023B650
    if (ctx->r3 == ctx->r2) {
        // 0x8023B61C: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_8023B650;
    }
    goto skip_1;
    // 0x8023B61C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    skip_1:
    // 0x8023B620: j           L_8023B660
    // 0x8023B624: nop

        goto L_8023B660;
    // 0x8023B624: nop

L_8023B628:
    // 0x8023B628: sb          $zero, 0x8($s1)
    MEM_B(0X8, ctx->r17) = 0;
    // 0x8023B62C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B630: lw          $v0, 0x45E0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X45E0);
    // 0x8023B634: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8023B638: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8023B63C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8023B640: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B644: lw          $v0, 0x466C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X466C);
    // 0x8023B648: j           L_8023B65C
    // 0x8023B64C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_8023B65C;
    // 0x8023B64C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_8023B650:
    // 0x8023B650: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B654: lw          $v0, 0x4660($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4660);
    // 0x8023B658: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_8023B65C:
    // 0x8023B65C: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
L_8023B660:
    // 0x8023B660: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B664: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B668: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B66C: jr          $ra
    // 0x8023B670: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B670: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238FEC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238FEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80238FF0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80238FF4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80238FF8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80238FFC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80239000: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80239004: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x80239008: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023900C: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80239010: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x80239014: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80239018: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8023901C: beq         $a0, $v0, L_80239038
    if (ctx->r4 == ctx->r2) {
        // 0x80239020: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80239038;
    }
    // 0x80239020: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80239024: bne         $a0, $v0, L_80239034
    if (ctx->r4 != ctx->r2) {
        // 0x80239028: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80239034;
    }
    // 0x80239028: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023902C: j           L_80239038
    // 0x80239030: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_80239038;
    // 0x80239030: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_80239034:
    // 0x80239034: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80239038:
    // 0x80239038: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8023903C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80239040: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239044: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80239048: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8023904C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80239050: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80239054: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80239058: beq         $a0, $v1, L_80239080
    if (ctx->r4 == ctx->r3) {
        // 0x8023905C: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80239080;
    }
    // 0x8023905C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80239060: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80239064: jal         0x8003B85C
    // 0x80239068: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80239068: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8023906C: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80239070: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x80239074: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x80239078: jal         0x8003B840
    // 0x8023907C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8023907C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80239080:
    // 0x80239080: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x80239084: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80239088: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8023908C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80239090: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80239094: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x80239098: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8023909C: beq         $v1, $v0, L_802390B8
    if (ctx->r3 == ctx->r2) {
        // 0x802390A0: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_802390B8;
    }
    // 0x802390A0: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x802390A4: bne         $v1, $v0, L_802390B4
    if (ctx->r3 != ctx->r2) {
        // 0x802390A8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802390B4;
    }
    // 0x802390A8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802390AC: j           L_802390B8
    // 0x802390B0: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_802390B8;
    // 0x802390B0: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_802390B4:
    // 0x802390B4: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_802390B8:
    // 0x802390B8: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x802390BC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x802390C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802390C4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802390C8: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x802390CC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x802390D0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802390D4: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802390D8: beq         $a0, $v1, L_80239100
    if (ctx->r4 == ctx->r3) {
        // 0x802390DC: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80239100;
    }
    // 0x802390DC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802390E0: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x802390E4: jal         0x8003B85C
    // 0x802390E8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802390E8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x802390EC: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x802390F0: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x802390F4: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x802390F8: jal         0x8003B840
    // 0x802390FC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802390FC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80239100:
    // 0x80239100: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80239104: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x80239108: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023910C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80239110: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80239114: jr          $ra
    // 0x80239118: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80239118: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8023911C: nop

;}
RECOMP_FUNC void func_80242620_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242624: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80242628: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024262C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80242630: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80242634: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80242638: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8024263C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80242640: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x80242644: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x80242648: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8024264C: jal         0x8009A3B4
    // 0x80242650: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80242650: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80242654: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80242658: jr          $ra
    // 0x8024265C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024265C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FACC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FACC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FAD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FAD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FAD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FADC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022FAE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FAE4: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022FAE8: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022FAEC: jal         0x8004FA7C
    // 0x8022FAF0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022FAF0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022FAF4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022FAF8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022FAFC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022FB00: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022FB04: beq         $v0, $zero, L_8022FB1C
    if (ctx->r2 == 0) {
        // 0x8022FB08: nop
    
            goto L_8022FB1C;
    }
    // 0x8022FB08: nop

    // 0x8022FB0C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022FB10: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022FB14: beq         $v0, $zero, L_8022FB68
    if (ctx->r2 == 0) {
        // 0x8022FB18: nop
    
            goto L_8022FB68;
    }
    // 0x8022FB18: nop

L_8022FB1C:
    // 0x8022FB1C: jal         0x8003516C
    // 0x8022FB20: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x8022FB20: nop

    after_1:
    // 0x8022FB24: bne         $v0, $zero, L_8022FB68
    if (ctx->r2 != 0) {
        // 0x8022FB28: nop
    
            goto L_8022FB68;
    }
    // 0x8022FB28: nop

    // 0x8022FB2C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022FB30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022FB34: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022FB38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022FB3C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022FB40: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022FB44: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8022FB48: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022FB4C: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022FB50: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022FB54: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022FB58: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022FB5C: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x8022FB60: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022FB64: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022FB68:
    // 0x8022FB68: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FB6C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022FB70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FB74: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022FB78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FB7C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022FB80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FB84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FB88: jr          $ra
    // 0x8022FB8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FB8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225F60_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F60: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80225F64: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x80225F68: bne         $v0, $zero, L_80225FAC
    if (ctx->r2 != 0) {
        // 0x80225F6C: nop
    
            goto L_80225FAC;
    }
    // 0x80225F6C: nop

    // 0x80225F70: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80225F74: addiu       $a3, $zero, -0x3
    ctx->r7 = ADD32(0, -0X3);
L_80225F78:
    // 0x80225F78: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x80225F7C: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80225F80: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80225F84: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    // 0x80225F88: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80225F8C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80225F90: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80225F94: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80225F98: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80225F9C: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x80225FA0: and         $v1, $v1, $a3
    ctx->r3 = ctx->r3 & ctx->r7;
    // 0x80225FA4: bne         $v0, $zero, L_80225F78
    if (ctx->r2 != 0) {
        // 0x80225FA8: sb          $v1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r3;
            goto L_80225F78;
    }
    // 0x80225FA8: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_80225FAC:
    // 0x80225FAC: jr          $ra
    // 0x80225FB0: nop

    TRACE_RETURN()
    return;
    // 0x80225FB0: nop

;}
RECOMP_FUNC void func_8023EEC8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023EEC8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8023EECC: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x8023EED0: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x8023EED4: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x8023EED8: addiu       $fp, $a0, 0x440
    ctx->r30 = ADD32(ctx->r4, 0X440);
    // 0x8023EEDC: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8023EEE0: addu        $t1, $fp, $a1
    ctx->r9 = ADD32(ctx->r30, ctx->r5);
    // 0x8023EEE4: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x8023EEE8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023EEEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023EEF0: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8023EEF4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023EEF8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8023EEFC: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x8023EF00: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8023EF04: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8023EF08: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8023EF0C: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8023EF10: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8023EF14: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8023EF18: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8023EF1C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8023EF20: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
L_8023EF24:
    // 0x8023EF24: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8023EF28: sll         $s0, $v0, 3
    ctx->r16 = S32(ctx->r2 << 3);
    // 0x8023EF2C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8023EF30: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8023EF34: lh          $v1, 0x48AC($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X48AC);
    // 0x8023EF38: lb          $a0, 0x72($t1)
    ctx->r4 = MEM_B(ctx->r9, 0X72);
    // 0x8023EF3C: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8023EF40: beq         $v0, $zero, L_8023F128
    if (ctx->r2 == 0) {
        // 0x8023EF44: addiu       $v0, $v1, 0x10
        ctx->r2 = ADD32(ctx->r3, 0X10);
            goto L_8023F128;
    }
    // 0x8023EF44: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8023EF48: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023EF4C: beql        $v0, $zero, L_8023F12C
    if (ctx->r2 == 0) {
        // 0x8023EF50: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_8023F12C;
    }
    goto skip_0;
    // 0x8023EF50: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_0:
    // 0x8023EF54: jal         0x8003B878
    // 0x8023EF58: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8023EF58: nop

    after_0:
    // 0x8023EF5C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8023EF60: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023EF64: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8023EF68: lh          $a1, 0x48B2($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X48B2);
    // 0x8023EF6C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8023EF70: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x8023EF74: lhu         $a0, 0x48AC($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X48AC);
    // 0x8023EF78: lbu         $v1, 0x72($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X72);
    // 0x8023EF7C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8023EF80: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x8023EF84: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8023EF88: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8023EF8C: subu        $a3, $v1, $a0
    ctx->r7 = SUB32(ctx->r3, ctx->r4);
    // 0x8023EF90: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x8023EF94: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023EF98: sll         $v1, $t0, 1
    ctx->r3 = S32(ctx->r8 << 1);
    // 0x8023EF9C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8023EFA0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x8023EFA4: lhu         $a0, 0x48B0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X48B0);
    // 0x8023EFA8: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8023EFAC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023EFB0: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x8023EFB4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8023EFB8: bgez        $a1, L_8023EFC4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8023EFBC: andi        $a0, $a0, 0xFFF
        ctx->r4 = ctx->r4 & 0XFFF;
            goto L_8023EFC4;
    }
    // 0x8023EFBC: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8023EFC0: addiu       $a1, $a1, 0xF
    ctx->r5 = ADD32(ctx->r5, 0XF);
L_8023EFC4:
    // 0x8023EFC4: sra         $v0, $a1, 4
    ctx->r2 = S32(SIGNED(ctx->r5) >> 4);
    // 0x8023EFC8: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023EFCC: mflo        $v0
    ctx->r2 = lo;
    // 0x8023EFD0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8023EFD4: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8023EFD8: lh          $v1, 0x48AE($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X48AE);
    // 0x8023EFDC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8023EFE0: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x8023EFE4: bgez        $v1, L_8023EFF0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023EFE8: sh          $a2, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r6;
            goto L_8023EFF0;
    }
    // 0x8023EFE8: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    // 0x8023EFEC: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
L_8023EFF0:
    // 0x8023EFF0: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8023EFF4: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023EFF8: mflo        $v0
    ctx->r2 = lo;
    // 0x8023EFFC: subu        $s0, $a1, $v0
    ctx->r16 = SUB32(ctx->r5, ctx->r2);
    // 0x8023F000: slti        $v0, $t0, 0x10
    ctx->r2 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x8023F004: beq         $v0, $zero, L_8023F01C
    if (ctx->r2 == 0) {
        // 0x8023F008: addiu       $v0, $t0, 0x1
        ctx->r2 = ADD32(ctx->r8, 0X1);
            goto L_8023F01C;
    }
    // 0x8023F008: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
    // 0x8023F00C: sll         $s3, $v0, 3
    ctx->r19 = S32(ctx->r2 << 3);
    // 0x8023F010: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
    // 0x8023F014: j           L_8023F028
    // 0x8023F018: addu        $s4, $s3, $zero
    ctx->r20 = ADD32(ctx->r19, 0);
        goto L_8023F028;
    // 0x8023F018: addu        $s4, $s3, $zero
    ctx->r20 = ADD32(ctx->r19, 0);
L_8023F01C:
    // 0x8023F01C: addiu       $s3, $zero, 0x80
    ctx->r19 = ADD32(0, 0X80);
    // 0x8023F020: addiu       $s5, $zero, 0x80
    ctx->r21 = ADD32(0, 0X80);
    // 0x8023F024: addiu       $s4, $zero, 0x80
    ctx->r20 = ADD32(0, 0X80);
L_8023F028:
    // 0x8023F028: jal         0x800324B4
    // 0x8023F02C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8023F02C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    after_1:
    // 0x8023F030: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8023F034: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8023F038: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023F03C: mflo        $v0
    ctx->r2 = lo;
    // 0x8023F040: lw          $v1, 0x60($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X60);
    // 0x8023F044: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8023F048: addu        $v1, $t1, $v1
    ctx->r3 = ADD32(ctx->r9, ctx->r3);
    // 0x8023F04C: lhu         $v1, 0x14($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X14);
    // 0x8023F050: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023F054: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023F058: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F05C: jal         0x80032498
    // 0x8023F060: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x8023F060: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x8023F064: nop

    // 0x8023F068: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023F06C: mflo        $v0
    ctx->r2 = lo;
    // 0x8023F070: lw          $v1, 0x60($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X60);
    // 0x8023F074: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8023F078: addu        $v1, $t1, $v1
    ctx->r3 = ADD32(ctx->r9, ctx->r3);
    // 0x8023F07C: lhu         $v1, 0x18($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X18);
    // 0x8023F080: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8023F084: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F088: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x8023F08C: lw          $v0, 0x60($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X60);
    // 0x8023F090: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x8023F094: andi        $a0, $s4, 0xFF
    ctx->r4 = ctx->r20 & 0XFF;
    // 0x8023F098: addu        $v0, $t1, $v0
    ctx->r2 = ADD32(ctx->r9, ctx->r2);
    // 0x8023F09C: lhu         $v0, 0x16($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X16);
    // 0x8023F0A0: lhu         $t1, 0x1E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X1E);
    // 0x8023F0A4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023F0A8: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8023F0AC: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8023F0B0: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023F0B4: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x8023F0B8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023F0BC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8023F0C0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8023F0C4: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x8023F0C8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8023F0CC: sw          $a0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r4;
    // 0x8023F0D0: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x8023F0D4: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8023F0D8: ori         $a1, $a1, 0x2040
    ctx->r5 = ctx->r5 | 0X2040;
    // 0x8023F0DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F0E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F0E4: sw          $v1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r3;
    // 0x8023F0E8: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x8023F0EC: lui         $v0, 0x2E
    ctx->r2 = S32(0X2E << 16);
    // 0x8023F0F0: ori         $v0, $v0, 0x205F
    ctx->r2 = ctx->r2 | 0X205F;
    // 0x8023F0F4: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8023F0F8: addiu       $v0, $zero, 0x3F40
    ctx->r2 = ADD32(0, 0X3F40);
    // 0x8023F0FC: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8023F100: addiu       $v0, $zero, 0x3F5F
    ctx->r2 = ADD32(0, 0X3F5F);
    // 0x8023F104: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x8023F108: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
    // 0x8023F10C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F110: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023F114: sw          $a1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r5;
    // 0x8023F118: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8023F11C: sw          $zero, 0x20($s2)
    MEM_W(0X20, ctx->r18) = 0;
    // 0x8023F120: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023F124: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
L_8023F128:
    // 0x8023F128: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_8023F12C:
    // 0x8023F12C: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x8023F130: sltiu       $v0, $v0, 0x18
    ctx->r2 = ctx->r2 < 0X18 ? 1 : 0;
    // 0x8023F134: bne         $v0, $zero, L_8023EF24
    if (ctx->r2 != 0) {
        // 0x8023F138: andi        $v0, $s7, 0xFF
        ctx->r2 = ctx->r23 & 0XFF;
            goto L_8023EF24;
    }
    // 0x8023F138: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x8023F13C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8023F140: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x8023F144: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x8023F148: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8023F14C: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x8023F150: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8023F154: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8023F158: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8023F15C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8023F160: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8023F164: jr          $ra
    // 0x8023F168: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8023F168: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8023A9A0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A9A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A9A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A9A8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023A9AC: bne         $v0, $zero, L_8023A9C4
    if (ctx->r2 != 0) {
        // 0x8023A9B0: nop
    
            goto L_8023A9C4;
    }
    // 0x8023A9B0: nop

    // 0x8023A9B4: jal         0x8023A9D8
    // 0x8023A9B8: nop

    func_8023A9D8_ovl28(rdram, ctx);
        goto after_0;
    // 0x8023A9B8: nop

    after_0:
    // 0x8023A9BC: j           L_8023A9CC
    // 0x8023A9C0: nop

        goto L_8023A9CC;
    // 0x8023A9C0: nop

L_8023A9C4:
    // 0x8023A9C4: jal         0x8023AA54
    // 0x8023A9C8: nop

    func_8023AA54_ovl28(rdram, ctx);
        goto after_1;
    // 0x8023A9C8: nop

    after_1:
L_8023A9CC:
    // 0x8023A9CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A9D0: jr          $ra
    // 0x8023A9D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A9D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024B6F8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B6F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024B6FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024B700: jal         0x8004F5C4
    // 0x8024B704: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8024B704: nop

    after_0:
    // 0x8024B708: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024B70C: jr          $ra
    // 0x8024B710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024B710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232424_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232424: lw          $v0, 0x35C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X35C);
    // 0x80232428: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023242C: beq         $v0, $zero, L_8023243C
    if (ctx->r2 == 0) {
        // 0x80232430: nop
    
            goto L_8023243C;
    }
    // 0x80232430: nop

    // 0x80232434: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x80232438: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
L_8023243C:
    // 0x8023243C: jr          $ra
    // 0x80232440: nop

    TRACE_RETURN()
    return;
    // 0x80232440: nop

;}
RECOMP_FUNC void func_80244310_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244310: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80244314: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80244318: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024431C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80244320: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80244324: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80244328: bne         $v0, $zero, L_80244354
    if (ctx->r2 != 0) {
        // 0x8024432C: nop
    
            goto L_80244354;
    }
    // 0x8024432C: nop

    // 0x80244330: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x80244334: slti        $v0, $v0, -0x7D1
    ctx->r2 = SIGNED(ctx->r2) < -0X7D1 ? 1 : 0;
    // 0x80244338: beq         $v0, $zero, L_802443C4
    if (ctx->r2 == 0) {
        // 0x8024433C: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_802443C4;
    }
    // 0x8024433C: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80244340: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80244344: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x80244348: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024434C: j           L_802443C4
    // 0x80244350: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_802443C4;
    // 0x80244350: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80244354:
    // 0x80244354: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x80244358: bltz        $v0, L_802443C4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8024435C: addiu       $a0, $zero, 0x1F9
        ctx->r4 = ADD32(0, 0X1F9);
            goto L_802443C4;
    }
    // 0x8024435C: addiu       $a0, $zero, 0x1F9
    ctx->r4 = ADD32(0, 0X1F9);
    // 0x80244360: jal         0x8002A33C
    // 0x80244364: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80244364: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_0:
    // 0x80244368: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8024436C: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80244370: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x80244374: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244378: jal         0x8004F144
    // 0x8024437C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x8024437C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    after_1:
    // 0x80244380: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80244384: beq         $v1, $zero, L_802443C4
    if (ctx->r3 == 0) {
        // 0x80244388: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802443C4;
    }
    // 0x80244388: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8024438C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80244390: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x80244394: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80244398: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024439C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x802443A0: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x802443A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802443A8: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x802443AC: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x802443B0: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x802443B4: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x802443B8: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x802443BC: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x802443C0: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_802443C4:
    // 0x802443C4: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x802443C8: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x802443CC: jal         0x8009A3B4
    // 0x802443D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802443D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x802443D4: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x802443D8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802443DC: jal         0x8009A3B4
    // 0x802443E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802443E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802443E4: lhu         $v1, 0x46($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X46);
    // 0x802443E8: lhu         $v0, 0x4E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E);
    // 0x802443EC: lbu         $a1, 0x3($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X3);
    // 0x802443F0: addu        $a0, $v1, $v0
    ctx->r4 = ADD32(ctx->r3, ctx->r2);
    // 0x802443F4: bne         $a1, $zero, L_80244420
    if (ctx->r5 != 0) {
        // 0x802443F8: sh          $a0, 0x46($s1)
        MEM_H(0X46, ctx->r17) = ctx->r4;
            goto L_80244420;
    }
    // 0x802443F8: sh          $a0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r4;
    // 0x802443FC: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80244400: lh          $v1, 0x4BFC($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4BFC);
    // 0x80244404: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80244408: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024440C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80244410: beq         $v0, $zero, L_80244448
    if (ctx->r2 == 0) {
        // 0x80244414: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80244448;
    }
    // 0x80244414: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80244418: j           L_80244448
    // 0x8024441C: sh          $a0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r4;
        goto L_80244448;
    // 0x8024441C: sh          $a0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r4;
L_80244420:
    // 0x80244420: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80244424: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80244428: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024442C: lh          $v1, 0x4BFC($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4BFC);
    // 0x80244430: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80244434: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80244438: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8024443C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80244440: bnel        $v1, $zero, L_80244448
    if (ctx->r3 != 0) {
        // 0x80244444: sh          $a0, 0x46($s1)
        MEM_H(0X46, ctx->r17) = ctx->r4;
            goto L_80244448;
    }
    goto skip_0;
    // 0x80244444: sh          $a0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r4;
    skip_0:
L_80244448:
    // 0x80244448: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x8024444C: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x80244450: lhu         $a0, 0x1C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1C);
    // 0x80244454: lhu         $a1, 0x24($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X24);
    // 0x80244458: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x8024445C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80244460: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80244464: lhu         $a2, 0x20($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X20);
    // 0x80244468: lhu         $v0, 0x6E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6E);
    // 0x8024446C: addiu       $s0, $s1, 0x88
    ctx->r16 = ADD32(ctx->r17, 0X88);
    // 0x80244470: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x80244474: sh          $a0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r4;
    // 0x80244478: sh          $a0, 0xAC($s1)
    MEM_H(0XAC, ctx->r17) = ctx->r4;
    // 0x8024447C: sh          $a1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r5;
    // 0x80244480: sh          $a1, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r5;
    // 0x80244484: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x80244488: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x8024448C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80244490: sh          $a2, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r6;
    // 0x80244494: bgez        $v0, L_802444A0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80244498: sh          $a2, 0xAE($s1)
        MEM_H(0XAE, ctx->r17) = ctx->r6;
            goto L_802444A0;
    }
    // 0x80244498: sh          $a2, 0xAE($s1)
    MEM_H(0XAE, ctx->r17) = ctx->r6;
    // 0x8024449C: sh          $zero, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = 0;
L_802444A0:
    // 0x802444A0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802444A4: beq         $v0, $zero, L_80244504
    if (ctx->r2 == 0) {
        // 0x802444A8: nop
    
            goto L_80244504;
    }
    // 0x802444A8: nop

    // 0x802444AC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802444B0: lb          $v0, -0x3BBD($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BBD);
    // 0x802444B4: lh          $v1, 0x6E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6E);
    // 0x802444B8: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802444BC: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x802444C0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802444C4: andi        $v0, $v0, 0x900
    ctx->r2 = ctx->r2 & 0X900;
    // 0x802444C8: ori         $v0, $v0, 0x800
    ctx->r2 = ctx->r2 | 0X800;
    // 0x802444CC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802444D0: bne         $v0, $zero, L_80244504
    if (ctx->r2 != 0) {
        // 0x802444D4: lui         $v1, 0x40
        ctx->r3 = S32(0X40 << 16);
            goto L_80244504;
    }
    // 0x802444D4: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x802444D8: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x802444DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802444E0: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x802444E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802444E8: lh          $v0, 0x49C4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C4);
    // 0x802444EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802444F0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x802444F4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802444F8: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x802444FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80244500: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
L_80244504:
    // 0x80244504: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80244508: lh          $v1, 0x6E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6E);
    // 0x8024450C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244510: slti        $v1, $v1, 0x1001
    ctx->r3 = SIGNED(ctx->r3) < 0X1001 ? 1 : 0;
    // 0x80244514: bne         $v1, $zero, L_80244524
    if (ctx->r3 != 0) {
        // 0x80244518: sb          $v0, 0x9($s1)
        MEM_B(0X9, ctx->r17) = ctx->r2;
            goto L_80244524;
    }
    // 0x80244518: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8024451C: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80244520: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
L_80244524:
    // 0x80244524: jal         0x8002C69C
    // 0x80244528: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    func_8002C69C_7A9C(rdram, ctx);
        goto after_4;
    // 0x80244528: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    after_4:
    // 0x8024452C: lbu         $a0, 0x9($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X9);
    // 0x80244530: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80244534: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80244538: jal         0x800319B4
    // 0x8024453C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x8024453C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    after_5:
    // 0x80244540: lh          $v0, 0x6E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6E);
    // 0x80244544: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80244548: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8024454C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80244550: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80244554: jal         0x80031DA8
    // 0x80244558: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x80244558: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x8024455C: jal         0x80244678
    // 0x80244560: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80244678_ovl28(rdram, ctx);
        goto after_7;
    // 0x80244560: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80244564: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80244568: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8024456C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80244570: jr          $ra
    // 0x80244574: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80244574: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8024D550_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024D554: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024D558: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8024D55C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024D560: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024D564: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024D568: lw          $v0, 0x5C38($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5C38);
    // 0x8024D56C: jalr        $v0
    // 0x8024D570: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024D570: nop

    after_0:
    // 0x8024D574: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024D578: jr          $ra
    // 0x8024D57C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024D57C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802318E4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802318E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802318E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802318EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802318F0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802318F4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802318F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802318FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231900: jal         0x8009A3B4
    // 0x80231904: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80231904: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80231908: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023190C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80231910: jal         0x8009A3B4
    // 0x80231914: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231914: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80231918: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023191C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80231920: jal         0x8009A3B4
    // 0x80231924: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80231924: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80231928: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023192C: lbu         $a1, 0x74($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X74);
    // 0x80231930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231934: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80231938: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023193C: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    // 0x80231940: jal         0x802319F0
    // 0x80231944: sb          $a1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r5;
    func_802319F0_ovl28(rdram, ctx);
        goto after_3;
    // 0x80231944: sb          $a1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r5;
    after_3:
    // 0x80231948: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023194C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231950: beq         $v1, $v0, L_802319DC
    if (ctx->r3 == ctx->r2) {
        // 0x80231954: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802319DC;
    }
    // 0x80231954: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80231958: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023195C: jal         0x800540D0
    // 0x80231960: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_4;
    // 0x80231960: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80231964: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80231968: sw          $v0, 0x358($s0)
    MEM_W(0X358, ctx->r16) = ctx->r2;
    // 0x8023196C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80231970: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80231974: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231978: lw          $v0, 0x38C8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X38C8);
    // 0x8023197C: jalr        $v0
    // 0x80231980: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80231980: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80231984: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80231988: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8023198C: beq         $a1, $v0, L_802319A4
    if (ctx->r5 == ctx->r2) {
        // 0x80231990: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802319A4;
    }
    // 0x80231990: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231994: jal         0x80050294
    // 0x80231998: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80231998: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8023199C: j           L_802319AC
    // 0x802319A0: nop

        goto L_802319AC;
    // 0x802319A0: nop

L_802319A4:
    // 0x802319A4: jal         0x8005044C
    // 0x802319A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x802319A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_802319AC:
    // 0x802319AC: jal         0x80231D0C
    // 0x802319B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231D0C_ovl28(rdram, ctx);
        goto after_8;
    // 0x802319B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802319B4: jal         0x80231C80
    // 0x802319B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231C80_ovl28(rdram, ctx);
        goto after_9;
    // 0x802319B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x802319BC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802319C0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802319C4: beq         $v0, $zero, L_802319DC
    if (ctx->r2 == 0) {
        // 0x802319C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802319DC;
    }
    // 0x802319C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802319CC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x802319D0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802319D4: jal         0x8003B564
    // 0x802319D8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_10;
    // 0x802319D8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_802319DC:
    // 0x802319DC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802319E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802319E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802319E8: jr          $ra
    // 0x802319EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802319EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F5E4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F5E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022F5E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F5EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F5F0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022F5F4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022F5F8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022F5FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F600: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F604: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022F608: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8022F60C: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x8022F610: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022F614: jal         0x8022FF44
    // 0x8022F618: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_8022FF44_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022F618: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022F61C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022F620: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022F624: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022F628: beq         $v0, $zero, L_8022F6BC
    if (ctx->r2 == 0) {
        // 0x8022F62C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022F6BC;
    }
    // 0x8022F62C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022F630: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F634: jal         0x8022FEA8
    // 0x8022F638: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022F638: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022F63C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F640: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F644: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x8022F648: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F64C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022F650: jal         0x8004F820
    // 0x8022F654: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022F654: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022F658: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F65C: bgez        $v0, L_8022F688
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F660: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022F688;
    }
    // 0x8022F660: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F664: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F668: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F66C: jal         0x8004F820
    // 0x8022F670: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022F670: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022F674: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F678: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022F67C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022F680: j           L_8022F6A0
    // 0x8022F684: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022F6A0;
    // 0x8022F684: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022F688:
    // 0x8022F688: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F68C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F690: jal         0x8004F820
    // 0x8022F694: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022F694: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x8022F698: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F69C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022F6A0:
    // 0x8022F6A0: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8022F6A4: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x8022F6A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F6AC: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022F6B0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F6B4: j           L_8022F704
    // 0x8022F6B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_8022F704;
    // 0x8022F6B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022F6BC:
    // 0x8022F6BC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F6C0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F6C4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022F6C8: jal         0x8004F820
    // 0x8022F6CC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022F6CC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x8022F6D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F6D4: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022F6D8: beq         $v0, $zero, L_8022F6E8
    if (ctx->r2 == 0) {
        // 0x8022F6DC: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_8022F6E8;
    }
    // 0x8022F6DC: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x8022F6E0: j           L_8022F6EC
    // 0x8022F6E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022F6EC;
    // 0x8022F6E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022F6E8:
    // 0x8022F6E8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022F6EC:
    // 0x8022F6EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F6F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F6F4: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022F6F8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F6FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F700: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022F704:
    // 0x8022F704: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F708: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F70C: jal         0x800610AC
    // 0x8022F710: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x8022F710: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x8022F714: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022F718: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F71C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022F720: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F724: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F728: jr          $ra
    // 0x8022F72C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022F72C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8024D068_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024D06C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024D070: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024D074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024D078: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8024D07C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8024D080: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024D084: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8024D088: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024D08C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8024D090: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024D094: beq         $v1, $zero, L_8024D0B4
    if (ctx->r3 == 0) {
        // 0x8024D098: nop
    
            goto L_8024D0B4;
    }
    // 0x8024D098: nop

    // 0x8024D09C: jal         0x8024D484
    // 0x8024D0A0: nop

    func_8024D484_ovl28(rdram, ctx);
        goto after_0;
    // 0x8024D0A0: nop

    after_0:
    // 0x8024D0A4: beq         $v0, $zero, L_8024D0B4
    if (ctx->r2 == 0) {
        // 0x8024D0A8: nop
    
            goto L_8024D0B4;
    }
    // 0x8024D0A8: nop

    // 0x8024D0AC: jal         0x8004F62C
    // 0x8024D0B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8024D0B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8024D0B4:
    // 0x8024D0B4: jal         0x8024D0CC
    // 0x8024D0B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024D0CC_ovl28(rdram, ctx);
        goto after_2;
    // 0x8024D0B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8024D0BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024D0C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024D0C4: jr          $ra
    // 0x8024D0C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024D0C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236080_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236080: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80236084: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80236088: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023608C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80236090: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80236094: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80236098: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023609C: jal         0x8009A3B4
    // 0x802360A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802360A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x802360A4: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x802360A8: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x802360AC: jal         0x8009A3B4
    // 0x802360B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802360B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802360B4: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x802360B8: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x802360BC: jal         0x8009A3B4
    // 0x802360C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802360C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802360C4: lbu         $v1, 0xAC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAC);
    // 0x802360C8: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x802360CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802360D0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x802360D4: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x802360D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802360DC: sb          $v1, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r3;
    // 0x802360E0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802360E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802360E8: lw          $v0, 0x3C90($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3C90);
    // 0x802360EC: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    // 0x802360F0: jalr        $v0
    // 0x802360F4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802360F4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802360F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802360FC: jal         0x80236A88
    // 0x80236100: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80236A88_ovl28(rdram, ctx);
        goto after_4;
    // 0x80236100: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80236104: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80236108: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8023610C: beq         $a1, $v0, L_80236128
    if (ctx->r5 == ctx->r2) {
        // 0x80236110: nop
    
            goto L_80236128;
    }
    // 0x80236110: nop

    // 0x80236114: lh          $a2, 0x34A($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X34A);
    // 0x80236118: jal         0x80050294
    // 0x8023611C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8023611C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80236120: j           L_80236130
    // 0x80236124: nop

        goto L_80236130;
    // 0x80236124: nop

L_80236128:
    // 0x80236128: jal         0x8005044C
    // 0x8023612C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8023612C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80236130:
    // 0x80236130: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80236134: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80236138: beq         $v0, $zero, L_802361A0
    if (ctx->r2 == 0) {
        // 0x8023613C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802361A0;
    }
    // 0x8023613C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236140: lbu         $a1, 0xB($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XB);
    // 0x80236144: bne         $a1, $v0, L_80236168
    if (ctx->r5 != ctx->r2) {
        // 0x80236148: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236168;
    }
    // 0x80236148: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023614C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236150: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x80236154: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80236158: jal         0x8003B564
    // 0x8023615C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8023615C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x80236160: j           L_802361A0
    // 0x80236164: nop

        goto L_802361A0;
    // 0x80236164: nop

L_80236168:
    // 0x80236168: bne         $a1, $v0, L_802361A0
    if (ctx->r5 != ctx->r2) {
        // 0x8023616C: addiu       $s0, $sp, 0x10
        ctx->r16 = ADD32(ctx->r29, 0X10);
            goto L_802361A0;
    }
    // 0x8023616C: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x80236170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236174: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80236178: jal         0x8009A3B4
    // 0x8023617C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8023617C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80236180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236184: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x80236188: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x8023618C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80236190: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80236194: addiu       $v0, $v0, -0x70
    ctx->r2 = ADD32(ctx->r2, -0X70);
    // 0x80236198: jal         0x8003B6B8
    // 0x8023619C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_9;
    // 0x8023619C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_9:
L_802361A0:
    // 0x802361A0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802361A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802361A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802361AC: jr          $ra
    // 0x802361B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802361B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022C374_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C374: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C378: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C37C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C380: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C384: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C388: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x8022C38C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022C390: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C394: beq         $v0, $zero, L_8022C3A0
    if (ctx->r2 == 0) {
        // 0x8022C398: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022C3A0;
    }
    // 0x8022C398: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022C39C: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_8022C3A0:
    // 0x8022C3A0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C3A4: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022C3A8: beq         $v0, $zero, L_8022C62C
    if (ctx->r2 == 0) {
        // 0x8022C3AC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022C62C;
    }
    // 0x8022C3AC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022C3B0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022C3B4: addu        $at, $at, $v0
    gpr jr_addend_8022C3BC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C3B8: lw          $v0, 0x5CC8($at)
    ctx->r2 = ADD32(ctx->r1, 0X5CC8);
    // 0x8022C3BC: jr          $v0
    // 0x8022C3C0: nop

    switch (jr_addend_8022C3BC >> 2) {
        case 0: goto L_8022C3C4; break;
        case 1: goto L_8022C40C; break;
        case 2: goto L_8022C430; break;
        case 3: goto L_8022C490; break;
        case 4: goto L_8022C4AC; break;
        case 5: goto L_8022C5EC; break;
        default: switch_error(__func__, 0x8022C3BC, 0x80255CC8);
    }
    // 0x8022C3C0: nop

L_8022C3C4:
    // 0x8022C3C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C3C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C3CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C3D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C3D4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022C3D8: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x8022C3DC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C3E0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C3E4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8022C3E8: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x8022C3EC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022C3F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C3F4: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x8022C3F8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022C3FC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022C400: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C404: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022C408: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022C40C:
    // 0x8022C40C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C410: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C414: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C418: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C41C: bgez        $v0, L_8022C62C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C420: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C62C;
    }
    // 0x8022C420: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C424: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C428: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022C42C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022C430:
    // 0x8022C430: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C434: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C438: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C43C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C440: bgtz        $v0, L_8022C62C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C444: addiu       $a0, $zero, 0xB4
        ctx->r4 = ADD32(0, 0XB4);
            goto L_8022C62C;
    }
    // 0x8022C444: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    // 0x8022C448: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C44C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C450: jal         0x8002A33C
    // 0x8022C454: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022C454: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C458: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C45C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022C460: beq         $v0, $zero, L_8022C488
    if (ctx->r2 == 0) {
        // 0x8022C464: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_8022C488;
    }
    // 0x8022C464: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022C468: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022C46C: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C470: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022C474: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022C478: andi        $v1, $v1, 0xFFDF
    ctx->r3 = ctx->r3 & 0XFFDF;
    // 0x8022C47C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C480: j           L_8022C62C
    // 0x8022C484: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
        goto L_8022C62C;
    // 0x8022C484: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_8022C488:
    // 0x8022C488: j           L_8022C62C
    // 0x8022C48C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022C62C;
    // 0x8022C48C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022C490:
    // 0x8022C490: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022C494: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022C498: beq         $v0, $zero, L_8022C4AC
    if (ctx->r2 == 0) {
        // 0x8022C49C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022C4AC;
    }
    // 0x8022C49C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C4A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C4A4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022C4A8: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_8022C4AC:
    // 0x8022C4AC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C4B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C4B4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C4B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C4BC: bgez        $v0, L_8022C4E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C4C0: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_8022C4E8;
    }
    // 0x8022C4C0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022C4C4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C4C8: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022C4CC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022C4D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C4D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C4D8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022C4DC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C4E0: j           L_8022C5EC
    // 0x8022C4E4: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
        goto L_8022C5EC;
    // 0x8022C4E4: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_8022C4E8:
    // 0x8022C4E8: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x8022C4EC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C4F0: beq         $v0, $zero, L_8022C504
    if (ctx->r2 == 0) {
        // 0x8022C4F4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022C504;
    }
    // 0x8022C4F4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022C4F8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C4FC: j           L_8022C62C
    // 0x8022C500: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022C62C;
    // 0x8022C500: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022C504:
    // 0x8022C504: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C508: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022C50C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C510: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C514: jal         0x8004F820
    // 0x8022C518: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022C518: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022C51C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C520: addiu       $a1, $zero, 0x300
    ctx->r5 = ADD32(0, 0X300);
    // 0x8022C524: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022C528: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C52C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C530: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C534: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C538: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C53C: jal         0x8004DA90
    // 0x8022C540: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022C540: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022C544: jal         0x80040F30
    // 0x8022C548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022C548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C54C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C550: jal         0x8003E934
    // 0x8022C554: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022C554: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022C558: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C55C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022C560: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022C564: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C568: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022C56C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022C570: bltz        $v0, L_8022C588
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C574: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022C588;
    }
    // 0x8022C574: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C578: beq         $v0, $zero, L_8022C598
    if (ctx->r2 == 0) {
        // 0x8022C57C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C598;
    }
    // 0x8022C57C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C580: j           L_8022C5D4
    // 0x8022C584: nop

        goto L_8022C5D4;
    // 0x8022C584: nop

L_8022C588:
    // 0x8022C588: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022C58C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C590: bne         $v0, $zero, L_8022C5D4
    if (ctx->r2 != 0) {
        // 0x8022C594: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C5D4;
    }
    // 0x8022C594: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022C598:
    // 0x8022C598: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022C59C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C5A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C5A4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022C5A8: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022C5AC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022C5B0: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022C5B4: jal         0x8009A3B4
    // 0x8022C5B8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022C5B8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022C5BC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C5C0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022C5C4: jal         0x8009A3B4
    // 0x8022C5C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022C5C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022C5CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022C5D0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022C5D4:
    // 0x8022C5D4: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022C5D8: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022C5DC: beq         $v0, $zero, L_8022C62C
    if (ctx->r2 == 0) {
        // 0x8022C5E0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022C62C;
    }
    // 0x8022C5E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022C5E4: j           L_8022C62C
    // 0x8022C5E8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022C62C;
    // 0x8022C5E8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022C5EC:
    // 0x8022C5EC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C5F0: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022C5F4: beq         $v0, $zero, L_8022C604
    if (ctx->r2 == 0) {
        // 0x8022C5F8: nop
    
            goto L_8022C604;
    }
    // 0x8022C5F8: nop

    // 0x8022C5FC: jal         0x8004F418
    // 0x8022C600: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_7;
    // 0x8022C600: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_8022C604:
    // 0x8022C604: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C608: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C60C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C610: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C614: bgez        $v0, L_8022C62C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C618: addiu       $v1, $zero, 0x1E
        ctx->r3 = ADD32(0, 0X1E);
            goto L_8022C62C;
    }
    // 0x8022C618: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x8022C61C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C620: sh          $v1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r3;
    // 0x8022C624: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C628: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022C62C:
    // 0x8022C62C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C630: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C634: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C638: jr          $ra
    // 0x8022C63C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C63C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EF54_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EF54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EF58: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EF5C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022EF60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EF64: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022EF68: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EF6C: lw          $v0, 0x37C0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X37C0);
    // 0x8022EF70: jalr        $v0
    // 0x8022EF74: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022EF74: nop

    after_0:
    // 0x8022EF78: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EF7C: jr          $ra
    // 0x8022EF80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EF80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E5E4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E5E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E5E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E5EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E5F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E5F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E5F8: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x8022E5FC: bne         $v0, $zero, L_8022E63C
    if (ctx->r2 != 0) {
        // 0x8022E600: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022E63C;
    }
    // 0x8022E600: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022E604: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x8022E608: bne         $v0, $zero, L_8022E630
    if (ctx->r2 != 0) {
        // 0x8022E60C: nop
    
            goto L_8022E630;
    }
    // 0x8022E60C: nop

    // 0x8022E610: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x8022E614: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x8022E618: bne         $v1, $v0, L_8022E630
    if (ctx->r3 != ctx->r2) {
        // 0x8022E61C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022E630;
    }
    // 0x8022E61C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E620: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x8022E624: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x8022E628: j           L_8022E66C
    // 0x8022E62C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_8022E66C;
    // 0x8022E62C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_8022E630:
    // 0x8022E630: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x8022E634: beq         $v0, $zero, L_8022E69C
    if (ctx->r2 == 0) {
        // 0x8022E638: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E69C;
    }
    // 0x8022E638: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022E63C:
    // 0x8022E63C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022E640: bne         $v0, $zero, L_8022E69C
    if (ctx->r2 != 0) {
        // 0x8022E644: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E69C;
    }
    // 0x8022E644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E648: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x8022E64C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E650: bne         $v1, $v0, L_8022E69C
    if (ctx->r3 != ctx->r2) {
        // 0x8022E654: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_8022E69C;
    }
    // 0x8022E654: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x8022E658: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E65C: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022E660: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E664: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022E668: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_8022E66C:
    // 0x8022E66C: jal         0x8009A3B4
    // 0x8022E670: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E670: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022E674: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022E678: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022E67C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022E680: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E684: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E688: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E68C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022E690: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022E694: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022E698: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022E69C:
    // 0x8022E69C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022E6A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E6A4: jal         0x8004DA90
    // 0x8022E6A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022E6A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022E6AC: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022E6B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E6B4: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8022E6B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E6BC: bne         $v0, $zero, L_8022E6EC
    if (ctx->r2 != 0) {
        // 0x8022E6C0: nop
    
            goto L_8022E6EC;
    }
    // 0x8022E6C0: nop

    // 0x8022E6C4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E6C8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022E6CC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E6D0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022E6D4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022E6D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E6DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E6E0: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022E6E4: j           L_8022E73C
    // 0x8022E6E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022E73C;
    // 0x8022E6E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E6EC:
    // 0x8022E6EC: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022E6F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E6F4: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022E6F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E6FC: bne         $v0, $zero, L_8022E70C
    if (ctx->r2 != 0) {
        // 0x8022E700: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E70C;
    }
    // 0x8022E700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E704: j           L_8022E73C
    // 0x8022E708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022E73C;
    // 0x8022E708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E70C:
    // 0x8022E70C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022E710: jal         0x8022FF44
    // 0x8022E714: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022FF44_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022E714: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x8022E718: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E71C: beq         $v0, $zero, L_8022E740
    if (ctx->r2 == 0) {
        // 0x8022E720: nop
    
            goto L_8022E740;
    }
    // 0x8022E720: nop

    // 0x8022E724: jal         0x8022FEA8
    // 0x8022E728: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022E728: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x8022E72C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E730: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022E734: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022E738: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022E73C:
    // 0x8022E73C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E740:
    // 0x8022E740: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E744: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E748: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E74C: jr          $ra
    // 0x8022E750: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E750: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226908_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022690C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226910: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226914: slti        $v0, $v0, 0x55
    ctx->r2 = SIGNED(ctx->r2) < 0X55 ? 1 : 0;
    // 0x80226918: beq         $v0, $zero, L_80226928
    if (ctx->r2 == 0) {
        // 0x8022691C: nop
    
            goto L_80226928;
    }
    // 0x8022691C: nop

    // 0x80226920: jal         0x80226BC4
    // 0x80226924: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80226BC4_ovl28(rdram, ctx);
        goto after_0;
    // 0x80226924: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_80226928:
    // 0x80226928: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022692C: jr          $ra
    // 0x80226930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80242070_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242074: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80242078: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024207C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80242080: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80242084: beq         $v1, $zero, L_8024209C
    if (ctx->r3 == 0) {
        // 0x80242088: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024209C;
    }
    // 0x80242088: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024208C: beq         $v1, $v0, L_80242108
    if (ctx->r3 == ctx->r2) {
        // 0x80242090: nop
    
            goto L_80242108;
    }
    // 0x80242090: nop

    // 0x80242094: j           L_8024214C
    // 0x80242098: nop

        goto L_8024214C;
    // 0x80242098: nop

L_8024209C:
    // 0x8024209C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802420A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802420A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802420A8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802420AC: jal         0x8004D5D4
    // 0x802420B0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802420B0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802420B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802420B8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802420BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802420C0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802420C4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802420C8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802420CC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802420D0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802420D4: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x802420D8: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x802420DC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802420E0: jal         0x80050294
    // 0x802420E4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802420E4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x802420E8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802420EC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802420F0: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802420F4: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x802420F8: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x802420FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80242100: j           L_8024214C
    // 0x80242104: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8024214C;
    // 0x80242104: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80242108:
    // 0x80242108: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8024210C: beq         $a1, $zero, L_80242120
    if (ctx->r5 == 0) {
        // 0x80242110: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80242120;
    }
    // 0x80242110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80242114: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80242118: jal         0x8004DA90
    // 0x8024211C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8024211C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
L_80242120:
    // 0x80242120: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80242124: bne         $v0, $zero, L_8024213C
    if (ctx->r2 != 0) {
        // 0x80242128: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8024213C;
    }
    // 0x80242128: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024212C: jal         0x8005044C
    // 0x80242130: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80242130: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80242134: j           L_8024214C
    // 0x80242138: nop

        goto L_8024214C;
    // 0x80242138: nop

L_8024213C:
    // 0x8024213C: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x80242140: jal         0x80050294
    // 0x80242144: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80242144: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80242148: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_8024214C:
    // 0x8024214C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242150: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80242154: jr          $ra
    // 0x80242158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80242158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8024215C: nop

;}
RECOMP_FUNC void func_80236B40_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236B44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236B48: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80236B4C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80236B50: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80236B54: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236B58: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80236B5C: lw          $v1, 0x3E00($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3E00);
    // 0x80236B60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236B64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236B68: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80236B6C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80236B70: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x80236B74: jalr        $v0
    // 0x80236B78: addiu       $a2, $a0, 0x4E0
    ctx->r6 = ADD32(ctx->r4, 0X4E0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236B78: addiu       $a2, $a0, 0x4E0
    ctx->r6 = ADD32(ctx->r4, 0X4E0);
    after_0:
    // 0x80236B7C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236B80: jr          $ra
    // 0x80236B84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236B84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024D59C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D59C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024D5A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024D5A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024D5A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024D5AC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8024D5B0: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8024D5B4: beq         $v0, $zero, L_8024D748
    if (ctx->r2 == 0) {
        // 0x8024D5B8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8024D748;
    }
    // 0x8024D5B8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8024D5BC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024D5C0: addu        $at, $at, $v0
    gpr jr_addend_8024D5C8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024D5C4: lw          $v0, 0x6360($at)
    ctx->r2 = ADD32(ctx->r1, 0X6360);
    // 0x8024D5C8: jr          $v0
    // 0x8024D5CC: nop

    switch (jr_addend_8024D5C8 >> 2) {
        case 0: goto L_8024D5D0; break;
        case 1: goto L_8024D5E8; break;
        case 2: goto L_8024D604; break;
        case 3: goto L_8024D650; break;
        case 4: goto L_8024D6B4; break;
        case 5: goto L_8024D6D8; break;
        case 6: goto L_8024D714; break;
        default: switch_error(__func__, 0x8024D5C8, 0x80256360);
    }
    // 0x8024D5CC: nop

L_8024D5D0:
    // 0x8024D5D0: jal         0x8006033C
    // 0x8024D5D4: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8024D5D4: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    after_0:
    // 0x8024D5D8: bne         $v0, $zero, L_8024D744
    if (ctx->r2 != 0) {
        // 0x8024D5DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024D744;
    }
    // 0x8024D5DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024D5E0: j           L_8024D704
    // 0x8024D5E4: nop

        goto L_8024D704;
    // 0x8024D5E4: nop

L_8024D5E8:
    // 0x8024D5E8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8024D5EC: lhu         $v0, -0x3A9E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A9E);
    // 0x8024D5F0: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8024D5F4: beq         $v0, $zero, L_8024D748
    if (ctx->r2 == 0) {
        // 0x8024D5F8: nop
    
            goto L_8024D748;
    }
    // 0x8024D5F8: nop

    // 0x8024D5FC: j           L_8024D704
    // 0x8024D600: nop

        goto L_8024D704;
    // 0x8024D600: nop

L_8024D604:
    // 0x8024D604: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024D608: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024D60C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024D610: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024D614: bne         $v0, $zero, L_8024D748
    if (ctx->r2 != 0) {
        // 0x8024D618: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8024D748;
    }
    // 0x8024D618: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024D61C: jal         0x800616FC
    // 0x8024D620: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8024D620: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8024D624: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8024D628: addiu       $a0, $a0, -0x3A9E
    ctx->r4 = ADD32(ctx->r4, -0X3A9E);
    // 0x8024D62C: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8024D630: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8024D634: addiu       $a1, $a1, 0x4A6D
    ctx->r5 = ADD32(ctx->r5, 0X4A6D);
    // 0x8024D638: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8024D63C: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x8024D640: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8024D644: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8024D648: j           L_8024D704
    // 0x8024D64C: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
        goto L_8024D704;
    // 0x8024D64C: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_8024D650:
    // 0x8024D650: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024D654: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024D658: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024D65C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024D660: bne         $v0, $zero, L_8024D748
    if (ctx->r2 != 0) {
        // 0x8024D664: nop
    
            goto L_8024D748;
    }
    // 0x8024D664: nop

    // 0x8024D668: jal         0x8006033C
    // 0x8024D66C: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8024D66C: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    after_2:
    // 0x8024D670: beq         $v0, $zero, L_8024D694
    if (ctx->r2 == 0) {
        // 0x8024D674: addiu       $a0, $zero, 0x208
        ctx->r4 = ADD32(0, 0X208);
            goto L_8024D694;
    }
    // 0x8024D674: addiu       $a0, $zero, 0x208
    ctx->r4 = ADD32(0, 0X208);
    // 0x8024D678: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8024D67C: jal         0x8002A2F8
    // 0x8024D680: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x8024D680: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8024D684: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024D688: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024D68C: j           L_8024D708
    // 0x8024D690: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
        goto L_8024D708;
    // 0x8024D690: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
L_8024D694:
    // 0x8024D694: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024D698: addiu       $v0, $v0, 0x4A6D
    ctx->r2 = ADD32(ctx->r2, 0X4A6D);
    // 0x8024D69C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8024D6A0: andi        $v1, $v1, 0xBF
    ctx->r3 = ctx->r3 & 0XBF;
    // 0x8024D6A4: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8024D6A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024D6AC: j           L_8024D748
    // 0x8024D6B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8024D748;
    // 0x8024D6B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024D6B4:
    // 0x8024D6B4: jal         0x8024DD98
    // 0x8024D6B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024DD98_ovl28(rdram, ctx);
        goto after_4;
    // 0x8024D6B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8024D6BC: beq         $v0, $zero, L_8024D748
    if (ctx->r2 == 0) {
        // 0x8024D6C0: addiu       $a0, $zero, 0x209
        ctx->r4 = ADD32(0, 0X209);
            goto L_8024D748;
    }
    // 0x8024D6C0: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    // 0x8024D6C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8024D6C8: jal         0x8002A2F8
    // 0x8024D6CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_5;
    // 0x8024D6CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8024D6D0: j           L_8024D704
    // 0x8024D6D4: nop

        goto L_8024D704;
    // 0x8024D6D4: nop

L_8024D6D8:
    // 0x8024D6D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024D6DC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024D6E0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024D6E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024D6E8: bne         $v0, $zero, L_8024D748
    if (ctx->r2 != 0) {
        // 0x8024D6EC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8024D748;
    }
    // 0x8024D6EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024D6F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024D6F4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024D6F8: sh          $v0, -0x3A9C($at)
    MEM_H(-0X3A9C, ctx->r1) = ctx->r2;
    // 0x8024D6FC: jal         0x800616FC
    // 0x8024D700: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_6;
    // 0x8024D700: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    after_6:
L_8024D704:
    // 0x8024D704: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
L_8024D708:
    // 0x8024D708: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024D70C: j           L_8024D748
    // 0x8024D710: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8024D748;
    // 0x8024D710: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024D714:
    // 0x8024D714: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024D718: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024D71C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024D720: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024D724: bne         $v0, $zero, L_8024D748
    if (ctx->r2 != 0) {
        // 0x8024D728: nop
    
            goto L_8024D748;
    }
    // 0x8024D728: nop

    // 0x8024D72C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024D730: addiu       $v0, $v0, 0x4A6D
    ctx->r2 = ADD32(ctx->r2, 0X4A6D);
    // 0x8024D734: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8024D738: andi        $v1, $v1, 0xBF
    ctx->r3 = ctx->r3 & 0XBF;
    // 0x8024D73C: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8024D740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024D744:
    // 0x8024D744: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8024D748:
    // 0x8024D748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024D74C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024D750: jr          $ra
    // 0x8024D754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024D754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B844_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B844: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B848: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B84C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B850: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B854: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023B858: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B85C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023B860: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023B864: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023B868: jal         0x8004D5D4
    // 0x8023B86C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023B86C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023B870: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023B874: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8023B878: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8023B87C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023B880: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023B884: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023B888: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023B88C: sb          $zero, 0x8($s1)
    MEM_B(0X8, ctx->r17) = 0;
    // 0x8023B890: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B894: lw          $v0, 0x45E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X45E8);
    // 0x8023B898: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B89C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8023B8A0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8023B8A4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8023B8A8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B8AC: lw          $v0, 0x4674($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4674);
    // 0x8023B8B0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x8023B8B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B8B8: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8023B8BC: jal         0x80050294
    // 0x8023B8C0: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8023B8C0: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    after_1:
    // 0x8023B8C4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023B8C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B8CC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023B8D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B8D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B8D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B8DC: jr          $ra
    // 0x8023B8E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B8E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226188_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226188: jr          $ra
    // 0x8022618C: nop

    TRACE_RETURN()
    return;
    // 0x8022618C: nop

;}
