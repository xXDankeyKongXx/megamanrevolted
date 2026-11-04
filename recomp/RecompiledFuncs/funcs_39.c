#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80230C34_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230C34: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x80230C38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230C3C: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x80230C40: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80230C44: bne         $v0, $zero, L_80230C58
    if (ctx->r2 != 0) {
        // 0x80230C48: nop
    
            goto L_80230C58;
    }
    // 0x80230C48: nop

    // 0x80230C4C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80230C50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230C54: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80230C58:
    // 0x80230C58: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x80230C5C: lui         $v1, 0xFFFE
    ctx->r3 = S32(0XFFFE << 16);
    // 0x80230C60: ori         $v1, $v1, 0x4C42
    ctx->r3 = ctx->r3 | 0X4C42;
    // 0x80230C64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230C68: jr          $ra
    // 0x80230C6C: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80230C6C: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8023601C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023601C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236020: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236024: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80236028: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023602C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236030: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236034: lw          $v0, -0xB8C($at)
    ctx->r2 = MEM_W(ctx->r1, -0XB8C);
    // 0x80236038: jalr        $v0
    // 0x8023603C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023603C: nop

    after_0:
    // 0x80236040: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236044: jr          $ra
    // 0x80236048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B9F0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B9F0: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8023B9F4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8023B9F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B9FC: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x8023BA00: jr          $ra
    // 0x8023BA04: sw          $a0, 0x35C0($at)
    MEM_W(0X35C0, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8023BA04: sw          $a0, 0x35C0($at)
    MEM_W(0X35C0, ctx->r1) = ctx->r4;
    // 0x8023BA08: nop

    // 0x8023BA0C: nop

;}
RECOMP_FUNC void func_80235EA4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235EA4: jr          $ra
    // 0x80235EA8: nop

    TRACE_RETURN()
    return;
    // 0x80235EA8: nop

;}
RECOMP_FUNC void func_80225B8C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B8C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225B90: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80225B94: bne         $v1, $v0, L_80225BAC
    if (ctx->r3 != ctx->r2) {
        // 0x80225B98: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80225BAC;
    }
    // 0x80225B98: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80225B9C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80225BA0: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225BA4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80225BA8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80225BAC:
    // 0x80225BAC: jr          $ra
    // 0x80225BB0: nop

    TRACE_RETURN()
    return;
    // 0x80225BB0: nop

;}
RECOMP_FUNC void func_80230A88_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230A88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230A8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230A90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230A94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230A98: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230A9C: bne         $v0, $zero, L_80230AD4
    if (ctx->r2 != 0) {
        // 0x80230AA0: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_80230AD4;
    }
    // 0x80230AA0: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x80230AA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230AA8: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x80230AAC: jal         0x80050294
    // 0x80230AB0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230AB0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230AB4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80230AB8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80230ABC: sb          $v0, 0x108($s0)
    MEM_B(0X108, ctx->r16) = ctx->r2;
    // 0x80230AC0: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80230AC4: sb          $v0, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r2;
    // 0x80230AC8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230ACC: j           L_80230B34
    // 0x80230AD0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80230B34;
    // 0x80230AD0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80230AD4:
    // 0x80230AD4: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80230AD8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80230ADC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80230AE0: bne         $v1, $v0, L_80230B0C
    if (ctx->r3 != ctx->r2) {
        // 0x80230AE4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80230B0C;
    }
    // 0x80230AE4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80230AE8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80230AEC: lw          $v0, -0x3A28($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A28);
    // 0x80230AF0: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80230AF4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80230AF8: lw          $v0, -0x39F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F0);
    // 0x80230AFC: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80230B00: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80230B04: jal         0x8004F5C4
    // 0x80230B08: lw          $a0, -0x39EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39EC);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80230B08: lw          $a0, -0x39EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39EC);
    after_1:
L_80230B0C:
    // 0x80230B0C: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80230B10: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80230B14: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80230B18: bne         $v1, $v0, L_80230B34
    if (ctx->r3 != ctx->r2) {
        // 0x80230B1C: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_80230B34;
    }
    // 0x80230B1C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80230B20: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230B24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230B28: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x80230B2C: jal         0x80050294
    // 0x80230B30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80230B30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_80230B34:
    // 0x80230B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230B38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230B3C: jr          $ra
    // 0x80230B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E5B8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E5B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E5BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E5C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E5C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E5C8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022E5CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E5D0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022E5D4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022E5D8: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022E5DC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022E5E0: jal         0x8004D5D4
    // 0x8022E5E4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022E5E4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022E5E8: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E5EC: sw          $zero, 0x4E4($s0)
    MEM_W(0X4E4, ctx->r16) = 0;
    // 0x8022E5F0: sw          $zero, 0x4E8($s0)
    MEM_W(0X4E8, ctx->r16) = 0;
    // 0x8022E5F4: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x8022E5F8: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x8022E5FC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022E600: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022E604: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022E608: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022E60C: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x8022E610: sh          $v0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r2;
    // 0x8022E614: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022E618: sw          $zero, 0x4F4($s0)
    MEM_W(0X4F4, ctx->r16) = 0;
    // 0x8022E61C: sw          $zero, 0x4F8($s0)
    MEM_W(0X4F8, ctx->r16) = 0;
    // 0x8022E620: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022E624: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022E628: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022E62C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022E630: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E634: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x8022E638: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022E63C: jal         0x800540BC
    // 0x8022E640: addiu       $a0, $s0, 0x504
    ctx->r4 = ADD32(ctx->r16, 0X504);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022E640: addiu       $a0, $s0, 0x504
    ctx->r4 = ADD32(ctx->r16, 0X504);
    after_1:
    // 0x8022E644: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E648: sw          $zero, 0x514($s0)
    MEM_W(0X514, ctx->r16) = 0;
    // 0x8022E64C: sw          $zero, 0x518($s0)
    MEM_W(0X518, ctx->r16) = 0;
    // 0x8022E650: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x8022E654: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x8022E658: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x8022E65C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022E660: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022E664: sh          $v0, 0x51C($s0)
    MEM_H(0X51C, ctx->r16) = ctx->r2;
    // 0x8022E668: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022E66C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022E670: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E674: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022E678: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E67C: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022E680: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022E684: addiu       $v0, $v0, -0x1454
    ctx->r2 = ADD32(ctx->r2, -0X1454);
    // 0x8022E688: andi        $a0, $a0, 0x7F
    ctx->r4 = ctx->r4 & 0X7F;
    // 0x8022E68C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022E690: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022E694: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022E698: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022E69C: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022E6A0: bne         $a0, $zero, L_8022E6E0
    if (ctx->r4 != 0) {
        // 0x8022E6A4: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022E6E0;
    }
    // 0x8022E6A4: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022E6A8: jal         0x8003EF5C
    // 0x8022E6AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003EF5C_1A35C(rdram, ctx);
        goto after_2;
    // 0x8022E6AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022E6B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E6B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022E6B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E6BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E6C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E6C4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022E6C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E6CC: sh          $v1, 0x51E($s0)
    MEM_H(0X51E, ctx->r16) = ctx->r3;
    // 0x8022E6D0: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022E6D4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E6D8: j           L_8022E714
    // 0x8022E6DC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022E714;
    // 0x8022E6DC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022E6E0:
    // 0x8022E6E0: jal         0x8003E934
    // 0x8022E6E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022E6E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022E6E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E6EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022E6F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E6F4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E6F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E6FC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022E700: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E704: sh          $v1, 0x51E($s0)
    MEM_H(0X51E, ctx->r16) = ctx->r3;
    // 0x8022E708: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022E70C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E710: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022E714:
    // 0x8022E714: jal         0x80050294
    // 0x8022E718: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022E718: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_4:
    // 0x8022E71C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022E720: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E728: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E72C: jr          $ra
    // 0x8022E730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230D60_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230D60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230D64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230D68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230D6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230D70: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230D74: bne         $v0, $zero, L_80230D98
    if (ctx->r2 != 0) {
        // 0x80230D78: addiu       $v0, $zero, 0x1B
        ctx->r2 = ADD32(0, 0X1B);
            goto L_80230D98;
    }
    // 0x80230D78: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80230D7C: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x80230D80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230D84: jal         0x80050294
    // 0x80230D88: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230D88: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230D8C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230D90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230D94: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230D98:
    // 0x80230D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230D9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230DA0: jr          $ra
    // 0x80230DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229710_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229710: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80229714: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80229718: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022971C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80229720: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80229724: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80229728: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022972C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229730: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80229734: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x80229738: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x8022973C: beq         $v1, $zero, L_80229758
    if (ctx->r3 == 0) {
        // 0x80229740: addiu       $s3, $s1, 0x348
        ctx->r19 = ADD32(ctx->r17, 0X348);
            goto L_80229758;
    }
    // 0x80229740: addiu       $s3, $s1, 0x348
    ctx->r19 = ADD32(ctx->r17, 0X348);
    // 0x80229744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229748: beq         $v1, $v0, L_80229784
    if (ctx->r3 == ctx->r2) {
        // 0x8022974C: nop
    
            goto L_80229784;
    }
    // 0x8022974C: nop

    // 0x80229750: j           L_8022994C
    // 0x80229754: nop

        goto L_8022994C;
    // 0x80229754: nop

L_80229758:
    // 0x80229758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022975C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80229760: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229764: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80229768: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022976C: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80229770: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229774: sh          $v0, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r2;
    // 0x80229778: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022977C: sh          $v0, 0x34C($s1)
    MEM_H(0X34C, ctx->r17) = ctx->r2;
    // 0x80229780: sh          $zero, 0x350($s1)
    MEM_H(0X350, ctx->r17) = 0;
L_80229784:
    // 0x80229784: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x80229788: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022978C: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x80229790: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229794: bgez        $v0, L_802297AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229798: addiu       $s2, $s1, 0x14
        ctx->r18 = ADD32(ctx->r17, 0X14);
            goto L_802297AC;
    }
    // 0x80229798: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x8022979C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x802297A0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x802297A4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802297A8: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_802297AC:
    // 0x802297AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802297B0: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802297B4: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x802297B8: jal         0x8004F820
    // 0x802297BC: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802297BC: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_0:
    // 0x802297C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802297C4: lbu         $a1, 0xA6($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XA6);
    // 0x802297C8: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x802297CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802297D0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802297D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802297D8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802297DC: jal         0x8004DA90
    // 0x802297E0: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802297E0: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_1:
    // 0x802297E4: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x802297E8: lhu         $v1, 0x4C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4C);
    // 0x802297EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802297F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802297F4: jal         0x80040F30
    // 0x802297F8: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x802297F8: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    after_2:
    // 0x802297FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229800: jal         0x8003E934
    // 0x80229804: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x80229804: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80229808: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022980C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229810: andi        $s0, $s0, 0xF00
    ctx->r16 = ctx->r16 & 0XF00;
    // 0x80229814: beq         $s0, $zero, L_8022984C
    if (ctx->r16 == 0) {
        // 0x80229818: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_8022984C;
    }
    // 0x80229818: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022981C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80229820: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80229824: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x80229828: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022982C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80229830: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229834: jal         0x8009A3B4
    // 0x80229838: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80229838: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022983C: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80229840: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x80229844: jal         0x8009A3B4
    // 0x80229848: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80229848: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
L_8022984C:
    // 0x8022984C: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x80229850: lh          $v0, 0x2E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2E);
    // 0x80229854: subu        $v1, $a1, $v0
    ctx->r3 = SUB32(ctx->r5, ctx->r2);
    // 0x80229858: slti        $a0, $v1, 0x21
    ctx->r4 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x8022985C: bne         $a0, $zero, L_80229890
    if (ctx->r4 != 0) {
        // 0x80229860: nop
    
            goto L_80229890;
    }
    // 0x80229860: nop

    // 0x80229864: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80229868: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022986C: jal         0x8009A3B4
    // 0x80229870: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80229870: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80229874: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80229878: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022987C: jal         0x8009A3B4
    // 0x80229880: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80229880: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x80229884: lbu         $v1, 0xAD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAD);
    // 0x80229888: j           L_80229924
    // 0x8022988C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80229924;
    // 0x8022988C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80229890:
    // 0x80229890: bltzl       $v1, L_802298A8
    if (SIGNED(ctx->r3) < 0) {
        // 0x80229894: subu        $v0, $v0, $a1
        ctx->r2 = SUB32(ctx->r2, ctx->r5);
            goto L_802298A8;
    }
    goto skip_0;
    // 0x80229894: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    skip_0:
    // 0x80229898: beq         $a0, $zero, L_802298B4
    if (ctx->r4 == 0) {
        // 0x8022989C: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_802298B4;
    }
    // 0x8022989C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x802298A0: j           L_802298E0
    // 0x802298A4: nop

        goto L_802298E0;
    // 0x802298A4: nop

L_802298A8:
    // 0x802298A8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x802298AC: bne         $v0, $zero, L_802298E0
    if (ctx->r2 != 0) {
        // 0x802298B0: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_802298E0;
    }
    // 0x802298B0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
L_802298B4:
    // 0x802298B4: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x802298B8: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x802298BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802298C0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802298C4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802298C8: jal         0x8009A3B4
    // 0x802298CC: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802298CC: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_8:
    // 0x802298D0: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x802298D4: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x802298D8: jal         0x8009A3B4
    // 0x802298DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x802298DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
L_802298E0:
    // 0x802298E0: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x802298E4: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x802298E8: ori         $v0, $v0, 0xE847
    ctx->r2 = ctx->r2 | 0XE847;
    // 0x802298EC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802298F0: bne         $v0, $zero, L_80229934
    if (ctx->r2 != 0) {
        // 0x802298F4: addiu       $a0, $s1, 0x1C
        ctx->r4 = ADD32(ctx->r17, 0X1C);
            goto L_80229934;
    }
    // 0x802298F4: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x802298F8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x802298FC: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x80229900: lh          $v1, 0x56($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X56);
    // 0x80229904: addiu       $a3, $s4, 0x1C
    ctx->r7 = ADD32(ctx->r20, 0X1C);
    // 0x80229908: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022990C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80229910: jal         0x8004FAEC
    // 0x80229914: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_10;
    // 0x80229914: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_10:
    // 0x80229918: beq         $v0, $zero, L_80229934
    if (ctx->r2 == 0) {
        // 0x8022991C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80229934;
    }
    // 0x8022991C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229920: lbu         $v1, 0xAD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAD);
L_80229924:
    // 0x80229924: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80229928: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8022992C: j           L_8022994C
    // 0x80229930: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
        goto L_8022994C;
    // 0x80229930: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
L_80229934:
    // 0x80229934: lhu         $v1, 0x0($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X0);
    // 0x80229938: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022993C: bne         $v0, $zero, L_8022994C
    if (ctx->r2 != 0) {
        // 0x80229940: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_8022994C;
    }
    // 0x80229940: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x80229944: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x80229948: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_8022994C:
    // 0x8022994C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80229950: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80229954: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80229958: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022995C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229960: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229964: jr          $ra
    // 0x80229968: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80229968: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80239CFC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239CFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239D00: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239D04: jal         0x8004F5C4
    // 0x80239D08: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80239D08: nop

    after_0:
    // 0x80239D0C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239D10: jr          $ra
    // 0x80239D14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239D14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80239D18: nop

    // 0x80239D1C: nop

;}
RECOMP_FUNC void func_802306EC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802306EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802306F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802306F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802306F8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802306FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230700: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80230704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230708: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023070C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230710: jal         0x80050294
    // 0x80230714: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230714: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230718: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023071C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230720: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230728: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023072C: jr          $ra
    // 0x80230730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238D94_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238D94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238D98: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238D9C: jal         0x8004F684
    // 0x80238DA0: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x80238DA0: nop

    after_0:
    // 0x80238DA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238DA8: jr          $ra
    // 0x80238DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230B44_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230B44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230B48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230B4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230B50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230B54: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230B58: bne         $v0, $zero, L_80230B8C
    if (ctx->r2 != 0) {
        // 0x80230B5C: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_80230B8C;
    }
    // 0x80230B5C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80230B60: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x80230B64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230B68: jal         0x80050294
    // 0x80230B6C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230B6C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230B70: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80230B74: lw          $v1, -0x3A28($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A28);
    // 0x80230B78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230B7C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80230B80: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230B84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230B88: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230B8C:
    // 0x80230B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230B90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230B94: jr          $ra
    // 0x80230B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225A78_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A78: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80225A7C: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80225A80: bne         $v0, $zero, L_80225AD4
    if (ctx->r2 != 0) {
        // 0x80225A84: lui         $a0, 0x80
        ctx->r4 = S32(0X80 << 16);
            goto L_80225AD4;
    }
    // 0x80225A84: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    // 0x80225A88: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x80225A8C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225A90: sh          $v0, 0x15E($v1)
    MEM_H(0X15E, ctx->r3) = ctx->r2;
    // 0x80225A94: lw          $v1, 0x30($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X30);
    // 0x80225A98: ori         $a0, $a0, 0x8080
    ctx->r4 = ctx->r4 | 0X8080;
    // 0x80225A9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225AA0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225AA4: sb          $v0, 0x61($at)
    MEM_B(0X61, ctx->r1) = ctx->r2;
    // 0x80225AA8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80225AAC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225AB0: sb          $v0, 0x64($at)
    MEM_B(0X64, ctx->r1) = ctx->r2;
    // 0x80225AB4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225AB8: sb          $v0, 0x63($at)
    MEM_B(0X63, ctx->r1) = ctx->r2;
    // 0x80225ABC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225AC0: sb          $v0, 0x62($at)
    MEM_B(0X62, ctx->r1) = ctx->r2;
    // 0x80225AC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225AC8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225ACC: sb          $v0, 0x65($at)
    MEM_B(0X65, ctx->r1) = ctx->r2;
    // 0x80225AD0: sw          $a0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r4;
L_80225AD4:
    // 0x80225AD4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80225AD8: addiu       $v0, $zero, 0x1A9
    ctx->r2 = ADD32(0, 0X1A9);
    // 0x80225ADC: bne         $v1, $v0, L_80225B00
    if (ctx->r3 != ctx->r2) {
        // 0x80225AE0: addiu       $v0, $zero, 0x1D1
        ctx->r2 = ADD32(0, 0X1D1);
            goto L_80225B00;
    }
    // 0x80225AE0: addiu       $v0, $zero, 0x1D1
    ctx->r2 = ADD32(0, 0X1D1);
    // 0x80225AE4: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x80225AE8: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80225AEC: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225AF0: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x80225AF4: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225AF8: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80225AFC: addiu       $v0, $zero, 0x1D1
    ctx->r2 = ADD32(0, 0X1D1);
L_80225B00:
    // 0x80225B00: bne         $v1, $v0, L_80225B18
    if (ctx->r3 != ctx->r2) {
        // 0x80225B04: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80225B18;
    }
    // 0x80225B04: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80225B08: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x80225B0C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225B10: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x80225B14: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80225B18:
    // 0x80225B18: jr          $ra
    // 0x80225B1C: nop

    TRACE_RETURN()
    return;
    // 0x80225B1C: nop

;}
RECOMP_FUNC void func_80236750_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236754: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236758: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023675C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236760: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236764: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236768: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023676C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236770: lw          $v0, -0xAD0($at)
    ctx->r2 = MEM_W(ctx->r1, -0XAD0);
    // 0x80236774: jalr        $v0
    // 0x80236778: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236778: nop

    after_0:
    // 0x8023677C: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x80236780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236784: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236788: jr          $ra
    // 0x8023678C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023678C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802317D8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802317D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802317DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802317E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802317E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802317E8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802317EC: bne         $v0, $zero, L_80231810
    if (ctx->r2 != 0) {
        // 0x802317F0: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_80231810;
    }
    // 0x802317F0: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x802317F4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x802317F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802317FC: jal         0x80050294
    // 0x80231800: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231800: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231804: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231808: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023180C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80231810:
    // 0x80231810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231814: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231818: jr          $ra
    // 0x8023181C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023181C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802329DC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802329DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802329E0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802329E4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802329E8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802329EC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802329F0: lw          $v1, 0x9C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X9C);
    // 0x802329F4: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x802329F8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802329FC: beq         $v0, $zero, L_80232A54
    if (ctx->r2 == 0) {
        // 0x80232A00: nop
    
            goto L_80232A54;
    }
    // 0x80232A00: nop

    // 0x80232A04: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80232A08: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x80232A0C: jal         0x800324B4
    // 0x80232A10: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80232A10: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x80232A14: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232A18: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80232A1C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80232A20: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80232A24: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80232A28: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x80232A2C: jal         0x80032498
    // 0x80232A30: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80232A30: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x80232A34: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232A38: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80232A3C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80232A40: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80232A44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232A48: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80232A4C: j           L_80232A84
    // 0x80232A50: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
        goto L_80232A84;
    // 0x80232A50: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
L_80232A54:
    // 0x80232A54: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80232A58: beq         $v0, $zero, L_80232A74
    if (ctx->r2 == 0) {
        // 0x80232A5C: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_80232A74;
    }
    // 0x80232A5C: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
    // 0x80232A60: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80232A64: beq         $v0, $zero, L_80232A84
    if (ctx->r2 == 0) {
        // 0x80232A68: nop
    
            goto L_80232A84;
    }
    // 0x80232A68: nop

    // 0x80232A6C: j           L_80232AA0
    // 0x80232A70: nop

        goto L_80232AA0;
    // 0x80232A70: nop

L_80232A74:
    // 0x80232A74: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
    // 0x80232A78: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80232A7C: bne         $v0, $zero, L_80232AA0
    if (ctx->r2 != 0) {
        // 0x80232A80: nop
    
            goto L_80232AA0;
    }
    // 0x80232A80: nop

L_80232A84:
    // 0x80232A84: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80232A88: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80232A8C: bne         $v0, $zero, L_80232ACC
    if (ctx->r2 != 0) {
        // 0x80232A90: sw          $zero, 0x9C($s1)
        MEM_W(0X9C, ctx->r17) = 0;
            goto L_80232ACC;
    }
    // 0x80232A90: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    // 0x80232A94: lh          $v0, 0x7C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X7C);
    // 0x80232A98: beq         $v0, $zero, L_80232AD4
    if (ctx->r2 == 0) {
        // 0x80232A9C: addiu       $a0, $s1, 0x34
        ctx->r4 = ADD32(ctx->r17, 0X34);
            goto L_80232AD4;
    }
    // 0x80232A9C: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_80232AA0:
    // 0x80232AA0: jal         0x8004F144
    // 0x80232AA4: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80232AA4: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    after_2:
    // 0x80232AA8: beq         $v0, $zero, L_80232AB8
    if (ctx->r2 == 0) {
        // 0x80232AAC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80232AB8;
    }
    // 0x80232AAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232AB0: jal         0x80233320
    // 0x80232AB4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80233320_ovl2(rdram, ctx);
        goto after_3;
    // 0x80232AB4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_3:
L_80232AB8:
    // 0x80232AB8: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x80232ABC: jal         0x8004F4F8
    // 0x80232AC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_4;
    // 0x80232AC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80232AC4: j           L_80232BEC
    // 0x80232AC8: nop

        goto L_80232BEC;
    // 0x80232AC8: nop

L_80232ACC:
    // 0x80232ACC: sh          $zero, 0x7C($s1)
    MEM_H(0X7C, ctx->r17) = 0;
    // 0x80232AD0: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_80232AD4:
    // 0x80232AD4: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80232AD8: jal         0x8009A3B4
    // 0x80232ADC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80232ADC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80232AE0: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80232AE4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80232AE8: jal         0x8009A3B4
    // 0x80232AEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80232AEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80232AF0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80232AF4: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80232AF8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80232AFC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80232B00: beq         $v0, $zero, L_80232B3C
    if (ctx->r2 == 0) {
        // 0x80232B04: sw          $v1, 0x8C($s1)
        MEM_W(0X8C, ctx->r17) = ctx->r3;
            goto L_80232B3C;
    }
    // 0x80232B04: sw          $v1, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->r3;
    // 0x80232B08: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80232B0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232B10: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232B14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232B18: lhu         $v1, -0xDA8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0XDA8);
    // 0x80232B1C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80232B20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232B24: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x80232B28: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232B2C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232B30: lhu         $v0, -0xDA6($at)
    ctx->r2 = MEM_HU(ctx->r1, -0XDA6);
    // 0x80232B34: j           L_80232B6C
    // 0x80232B38: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
        goto L_80232B6C;
    // 0x80232B38: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_80232B3C:
    // 0x80232B3C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80232B40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232B44: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232B48: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232B4C: lhu         $v1, -0xDC0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0XDC0);
    // 0x80232B50: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80232B54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232B58: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x80232B5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232B60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232B64: lhu         $v0, -0xDBE($at)
    ctx->r2 = MEM_HU(ctx->r1, -0XDBE);
    // 0x80232B68: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_80232B6C:
    // 0x80232B6C: jal         0x80233230
    // 0x80232B70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80233230_ovl2(rdram, ctx);
        goto after_7;
    // 0x80232B70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80232B74: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80232B78: jal         0x8004DD04
    // 0x80232B7C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x80232B7C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    after_8:
    // 0x80232B80: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80232B84: jal         0x8004DD04
    // 0x80232B88: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x80232B88: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_9:
    // 0x80232B8C: jal         0x80233078
    // 0x80232B90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80233078_ovl2(rdram, ctx);
        goto after_10;
    // 0x80232B90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x80232B94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232B98: beq         $v0, $zero, L_80232BA8
    if (ctx->r2 == 0) {
        // 0x80232B9C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80232BA8;
    }
    // 0x80232B9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232BA0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80232BA4: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_80232BA8:
    // 0x80232BA8: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80232BAC: sltiu       $v0, $v1, 0x96
    ctx->r2 = ctx->r3 < 0X96 ? 1 : 0;
    // 0x80232BB0: bne         $v0, $zero, L_80232BC8
    if (ctx->r2 != 0) {
        // 0x80232BB4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80232BC8;
    }
    // 0x80232BB4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80232BB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232BBC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80232BC0: j           L_80232BCC
    // 0x80232BC4: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
        goto L_80232BCC;
    // 0x80232BC4: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_80232BC8:
    // 0x80232BC8: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_80232BCC:
    // 0x80232BCC: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80232BD0: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80232BD4: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x80232BD8: sb          $zero, 0x76($s1)
    MEM_B(0X76, ctx->r17) = 0;
    // 0x80232BDC: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x80232BE0: sh          $v0, 0x90($s1)
    MEM_H(0X90, ctx->r17) = ctx->r2;
    // 0x80232BE4: sh          $v1, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r3;
    // 0x80232BE8: sh          $a0, 0x94($s1)
    MEM_H(0X94, ctx->r17) = ctx->r4;
L_80232BEC:
    // 0x80232BEC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80232BF0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80232BF4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80232BF8: jr          $ra
    // 0x80232BFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80232BFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80227270_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227270: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227274: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227278: jal         0x8004F418
    // 0x8022727C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022727C: nop

    after_0:
    // 0x80227280: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227284: jr          $ra
    // 0x80227288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238FC0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238FC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238FC8: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80238FCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238FD0: bne         $v1, $v0, L_80238FE8
    if (ctx->r3 != ctx->r2) {
        // 0x80238FD4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238FE8;
    }
    // 0x80238FD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238FD8: jal         0x80238DB0
    // 0x80238FDC: nop

    func_80238DB0_ovl2(rdram, ctx);
        goto after_0;
    // 0x80238FDC: nop

    after_0:
    // 0x80238FE0: j           L_8023900C
    // 0x80238FE4: nop

        goto L_8023900C;
    // 0x80238FE4: nop

L_80238FE8:
    // 0x80238FE8: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80238FEC: beq         $v1, $v0, L_80239004
    if (ctx->r3 == ctx->r2) {
        // 0x80238FF0: nop
    
            goto L_80239004;
    }
    // 0x80238FF0: nop

    // 0x80238FF4: jal         0x80238E88
    // 0x80238FF8: nop

    func_80238E88_ovl2(rdram, ctx);
        goto after_1;
    // 0x80238FF8: nop

    after_1:
    // 0x80238FFC: j           L_8023900C
    // 0x80239000: nop

        goto L_8023900C;
    // 0x80239000: nop

L_80239004:
    // 0x80239004: jal         0x8004F5C4
    // 0x80239008: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x80239008: nop

    after_2:
L_8023900C:
    // 0x8023900C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239010: jr          $ra
    // 0x80239014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236394_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236394: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80236398: addiu       $a1, $a1, 0x9E4
    ctx->r5 = ADD32(ctx->r5, 0X9E4);
    // 0x8023639C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802363A0: lui         $v1, 0xFFF0
    ctx->r3 = S32(0XFFF0 << 16);
    // 0x802363A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802363A8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x802363AC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802363B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802363B4: jr          $ra
    // 0x802363B8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802363B8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80226CBC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226CC0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226CC4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226CC8: bne         $v0, $zero, L_80226CF8
    if (ctx->r2 != 0) {
        // 0x80226CCC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226CF8;
    }
    // 0x80226CCC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226CD0: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226CD4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226CD8: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80226CDC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80226CE0: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80226CE4: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226CE8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80226CEC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80226CF0: jal         0x8004CB2C
    // 0x80226CF4: sb          $v0, 0x128($v1)
    MEM_B(0X128, ctx->r3) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80226CF4: sb          $v0, 0x128($v1)
    MEM_B(0X128, ctx->r3) = ctx->r2;
    after_0:
L_80226CF8:
    // 0x80226CF8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226CFC: jr          $ra
    // 0x80226D00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226D00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023612C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023612C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236130: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236134: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236138: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023613C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236140: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x80236144: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x80236148: ori         $v1, $v1, 0x4000
    ctx->r3 = ctx->r3 | 0X4000;
    // 0x8023614C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236150: sw          $v0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r2;
    // 0x80236154: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80236158: jal         0x800A3450
    // 0x8023615C: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8023615C: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_0:
    // 0x80236160: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x80236164: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x80236168: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023616C: sra         $a0, $v0, 31
    ctx->r4 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80236170: mfhi        $a1
    ctx->r5 = hi;
    // 0x80236174: subu        $a0, $a1, $a0
    ctx->r4 = SUB32(ctx->r5, ctx->r4);
    // 0x80236178: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x8023617C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80236180: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80236184: bne         $v0, $v1, L_802361EC
    if (ctx->r2 != ctx->r3) {
        // 0x80236188: nop
    
            goto L_802361EC;
    }
    // 0x80236188: nop

    // 0x8023618C: jal         0x8004F144
    // 0x80236190: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80236190: nop

    after_1:
    // 0x80236194: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80236198: beq         $s0, $zero, L_802361EC
    if (ctx->r16 == 0) {
        // 0x8023619C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_802361EC;
    }
    // 0x8023619C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802361A0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802361A4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x802361A8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802361AC: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x802361B0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802361B4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802361B8: jal         0x800A3450
    // 0x802361BC: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802361BC: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_2:
    // 0x802361C0: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x802361C4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802361C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802361CC: addiu       $v1, $v1, -0x7F
    ctx->r3 = ADD32(ctx->r3, -0X7F);
    // 0x802361D0: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x802361D4: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x802361D8: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x802361DC: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x802361E0: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x802361E4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802361E8: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_802361EC:
    // 0x802361EC: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x802361F0: blez        $v0, L_80236204
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802361F4: nop
    
            goto L_80236204;
    }
    // 0x802361F4: nop

    // 0x802361F8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802361FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236200: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80236204:
    // 0x80236204: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236208: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023620C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236210: jr          $ra
    // 0x80236214: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236214: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232800_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232800: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232804: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80232808: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023280C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80232810: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80232814: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80232818: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023281C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80232820: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80232824: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80232828: jal         0x800324B4
    // 0x8023282C: sh          $zero, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = 0;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8023282C: sh          $zero, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = 0;
    after_0:
    // 0x80232830: lw          $v1, 0x9C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9C);
    // 0x80232834: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232838: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023283C: mflo        $v0
    ctx->r2 = lo;
    // 0x80232840: lw          $v1, 0xA0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA0);
    // 0x80232844: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80232848: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8023284C: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80232850: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80232854: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80232858: jal         0x80032498
    // 0x8023285C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8023285C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_1:
    // 0x80232860: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x80232864: ori         $a3, $a3, 0xE
    ctx->r7 = ctx->r7 | 0XE;
    // 0x80232868: lui         $a2, 0x2C80
    ctx->r6 = S32(0X2C80 << 16);
    // 0x8023286C: lw          $v1, 0x9C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9C);
    // 0x80232870: ori         $a2, $a2, 0x8080
    ctx->r6 = ctx->r6 | 0X8080;
    // 0x80232874: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232878: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023287C: mflo        $v0
    ctx->r2 = lo;
    // 0x80232880: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80232884: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80232888: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8023288C: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80232890: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x80232894: sw          $a3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r7;
    // 0x80232898: sw          $a2, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r6;
    // 0x8023289C: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x802328A0: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x802328A4: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x802328A8: jal         0x8004DD04
    // 0x802328AC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x802328AC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    after_2:
    // 0x802328B0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802328B4: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x802328B8: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x802328BC: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x802328C0: lw          $t0, 0x20($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20);
    // 0x802328C4: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x802328C8: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x802328CC: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x802328D0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802328D4: sll         $a2, $a2, 10
    ctx->r6 = S32(ctx->r6 << 10);
    // 0x802328D8: subu        $a3, $a3, $a2
    ctx->r7 = SUB32(ctx->r7, ctx->r6);
    // 0x802328DC: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x802328E0: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x802328E4: jal         0x8004DD04
    // 0x802328E8: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x802328E8: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    after_3:
    // 0x802328EC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802328F0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802328F4: beq         $v0, $zero, L_80232930
    if (ctx->r2 == 0) {
        // 0x802328F8: sw          $zero, 0x78($s0)
        MEM_W(0X78, ctx->r16) = 0;
            goto L_80232930;
    }
    // 0x802328F8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802328FC: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80232900: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232904: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232908: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023290C: lhu         $v1, -0xDA8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0XDA8);
    // 0x80232910: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80232914: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232918: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8023291C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232920: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232924: lhu         $v0, -0xDA6($at)
    ctx->r2 = MEM_HU(ctx->r1, -0XDA6);
    // 0x80232928: j           L_80232960
    // 0x8023292C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80232960;
    // 0x8023292C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80232930:
    // 0x80232930: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80232934: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232938: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023293C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232940: lhu         $v1, -0xDC0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0XDC0);
    // 0x80232944: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80232948: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023294C: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80232950: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232954: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232958: lhu         $v0, -0xDBE($at)
    ctx->r2 = MEM_HU(ctx->r1, -0XDBE);
    // 0x8023295C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80232960:
    // 0x80232960: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80232964: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232968: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023296C: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80232970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232974: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x80232978: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8023297C: jal         0x80233078
    // 0x80232980: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_80233078_ovl2(rdram, ctx);
        goto after_4;
    // 0x80232980: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_4:
    // 0x80232984: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232988: beq         $v0, $zero, L_80232998
    if (ctx->r2 == 0) {
        // 0x8023298C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80232998;
    }
    // 0x8023298C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232990: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232994: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80232998:
    // 0x80232998: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x8023299C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x802329A0: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x802329A4: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x802329A8: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x802329AC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802329B0: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x802329B4: andi        $v1, $v1, 0xFB
    ctx->r3 = ctx->r3 & 0XFB;
    // 0x802329B8: sh          $a1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r5;
    // 0x802329BC: sh          $v0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r2;
    // 0x802329C0: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    // 0x802329C4: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x802329C8: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
    // 0x802329CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802329D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802329D4: jr          $ra
    // 0x802329D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802329D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80232344_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232344: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232348: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023234C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232354: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80232358: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8023235C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80232360: bnel        $v1, $v0, L_80232384
    if (ctx->r3 != ctx->r2) {
        // 0x80232364: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232384;
    }
    goto skip_0;
    // 0x80232364: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x80232368: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x8023236C: jal         0x80050294
    // 0x80232370: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232370: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80232374: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232378: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023237C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232380: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80232384:
    // 0x80232384: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x80232388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023238C: jal         0x8004DA90
    // 0x80232390: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80232390: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80232394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232398: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023239C: jr          $ra
    // 0x802323A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802323A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B4FC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B4FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B500: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B504: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B50C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B510: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8022B514: beq         $v0, $zero, L_8022B5A8
    if (ctx->r2 == 0) {
        // 0x8022B518: addiu       $a0, $s0, 0x308
        ctx->r4 = ADD32(ctx->r16, 0X308);
            goto L_8022B5A8;
    }
    // 0x8022B518: addiu       $a0, $s0, 0x308
    ctx->r4 = ADD32(ctx->r16, 0X308);
    // 0x8022B51C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022B520: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B524: addu        $at, $at, $v0
    gpr jr_addend_8022B52C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B528: lw          $v0, -0x1B8($at)
    ctx->r2 = ADD32(ctx->r1, -0X1B8);
    // 0x8022B52C: jr          $v0
    // 0x8022B530: nop

    switch (jr_addend_8022B52C >> 2) {
        case 0: goto L_8022B534; break;
        case 1: goto L_8022B54C; break;
        case 2: goto L_8022B56C; break;
        case 3: goto L_8022B54C; break;
        case 4: goto L_8022B56C; break;
        case 5: goto L_8022B54C; break;
        case 6: goto L_8022B56C; break;
        case 7: goto L_8022B594; break;
        default: switch_error(__func__, 0x8022B52C, 0x8023FE48);
    }
    // 0x8022B530: nop

L_8022B534:
    // 0x8022B534: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022B538: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022B53C: beq         $v0, $zero, L_8022B5A8
    if (ctx->r2 == 0) {
        // 0x8022B540: nop
    
            goto L_8022B5A8;
    }
    // 0x8022B540: nop

    // 0x8022B544: j           L_8022B584
    // 0x8022B548: nop

        goto L_8022B584;
    // 0x8022B548: nop

L_8022B54C:
    // 0x8022B54C: jal         0x8022B834
    // 0x8022B550: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B834_ovl2(rdram, ctx);
        goto after_0;
    // 0x8022B550: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022B554: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B558: beq         $v0, $zero, L_8022B5A8
    if (ctx->r2 == 0) {
        // 0x8022B55C: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8022B5A8;
    }
    // 0x8022B55C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8022B560: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B564: j           L_8022B588
    // 0x8022B568: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8022B588;
    // 0x8022B568: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022B56C:
    // 0x8022B56C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B570: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B574: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B578: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B57C: bne         $v0, $zero, L_8022B5A8
    if (ctx->r2 != 0) {
        // 0x8022B580: nop
    
            goto L_8022B5A8;
    }
    // 0x8022B580: nop

L_8022B584:
    // 0x8022B584: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
L_8022B588:
    // 0x8022B588: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B58C: j           L_8022B5A8
    // 0x8022B590: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022B5A8;
    // 0x8022B590: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B594:
    // 0x8022B594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B598: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022B59C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022B5A0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B5A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B5A8:
    // 0x8022B5A8: jal         0x8022B70C
    // 0x8022B5AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B70C_ovl2(rdram, ctx);
        goto after_1;
    // 0x8022B5AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B5B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B5B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B5B8: jr          $ra
    // 0x8022B5BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B5BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A300_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A304: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A308: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8023A30C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A310: bne         $v1, $v0, L_8023A328
    if (ctx->r3 != ctx->r2) {
        // 0x8023A314: nop
    
            goto L_8023A328;
    }
    // 0x8023A314: nop

    // 0x8023A318: jal         0x8004F5C4
    // 0x8023A31C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8023A31C: nop

    after_0:
    // 0x8023A320: j           L_8023A344
    // 0x8023A324: nop

        goto L_8023A344;
    // 0x8023A324: nop

L_8023A328:
    // 0x8023A328: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8023A32C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A330: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A334: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A338: lw          $v0, -0x730($at)
    ctx->r2 = MEM_W(ctx->r1, -0X730);
    // 0x8023A33C: jalr        $v0
    // 0x8023A340: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023A340: nop

    after_1:
L_8023A344:
    // 0x8023A344: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A348: jr          $ra
    // 0x8023A34C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A34C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232480_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232484: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232488: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023248C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232490: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232494: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232498: lw          $v0, -0xDF4($at)
    ctx->r2 = MEM_W(ctx->r1, -0XDF4);
    // 0x8023249C: jalr        $v0
    // 0x802324A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802324A0: nop

    after_0:
    // 0x802324A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802324A8: jr          $ra
    // 0x802324AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802324AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226490_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226490: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226494: bne         $v0, $zero, L_802264AC
    if (ctx->r2 != 0) {
        // 0x80226498: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_802264AC;
    }
    // 0x80226498: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022649C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802264A0: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802264A4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802264A8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_802264AC:
    // 0x802264AC: jr          $ra
    // 0x802264B0: nop

    TRACE_RETURN()
    return;
    // 0x802264B0: nop

;}
RECOMP_FUNC void func_80236CE4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236CE4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80236CE8: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80236CEC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80236CF0: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x80236CF4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80236CF8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80236CFC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236D00: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80236D04: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80236D08: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80236D0C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80236D10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236D14: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80236D18: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80236D1C: lw          $s0, -0x90C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X90C);
    // 0x80236D20: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80236D24: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x80236D28: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    // 0x80236D2C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236D30: lhu         $v0, 0x49C8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C8);
    // 0x80236D34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236D38: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80236D3C: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x80236D40: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x80236D44: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80236D48: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236D4C: beq         $v1, $v0, L_80236D8C
    if (ctx->r3 == ctx->r2) {
        // 0x80236D50: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_80236D8C;
    }
    // 0x80236D50: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80236D54: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x80236D58: addiu       $s3, $s3, -0xA84
    ctx->r19 = ADD32(ctx->r19, -0XA84);
    // 0x80236D5C: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
L_80236D60:
    // 0x80236D60: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80236D64: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80236D68: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80236D6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80236D70: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80236D74: jalr        $v0
    // 0x80236D78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236D78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80236D7C: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80236D80: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80236D84: bne         $v0, $s2, L_80236D60
    if (ctx->r2 != ctx->r18) {
        // 0x80236D88: sll         $v0, $a0, 24
        ctx->r2 = S32(ctx->r4 << 24);
            goto L_80236D60;
    }
    // 0x80236D88: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
L_80236D8C:
    // 0x80236D8C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80236D90: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80236D94: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80236D98: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80236D9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80236DA0: jr          $ra
    // 0x80236DA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80236DA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80236984_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236984: jr          $ra
    // 0x80236988: nop

    TRACE_RETURN()
    return;
    // 0x80236988: nop

;}
RECOMP_FUNC void func_80230EF0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230EF0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80230EF4: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x80230EF8: lw          $a0, 0x98($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X98);
    // 0x80230EFC: lui         $v1, 0xFFF7
    ctx->r3 = S32(0XFFF7 << 16);
    // 0x80230F00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230F04: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80230F08: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80230F0C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80230F10: bne         $v1, $v0, L_80230F24
    if (ctx->r3 != ctx->r2) {
        // 0x80230F14: nop
    
            goto L_80230F24;
    }
    // 0x80230F14: nop

    // 0x80230F18: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x80230F1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230F20: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
L_80230F24:
    // 0x80230F24: jr          $ra
    // 0x80230F28: nop

    TRACE_RETURN()
    return;
    // 0x80230F28: nop

;}
RECOMP_FUNC void func_80237E9C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237E9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237EA0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80237EA4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80237EA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237EAC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80237EB0: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    // 0x80237EB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237EB8: jal         0x8006033C
    // 0x80237EBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80237EBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80237EC0: bne         $v0, $zero, L_80238010
    if (ctx->r2 != 0) {
        // 0x80237EC4: nop
    
            goto L_80238010;
    }
    // 0x80237EC4: nop

    // 0x80237EC8: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80237ECC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80237ED0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80237ED4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80237ED8: beq         $v0, $zero, L_80238010
    if (ctx->r2 == 0) {
        // 0x80237EDC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80238010;
    }
    // 0x80237EDC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80237EE0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237EE4: addu        $at, $at, $v0
    gpr jr_addend_80237EEC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237EE8: lw          $v0, 0x28($at)
    ctx->r2 = ADD32(ctx->r1, 0X28);
    // 0x80237EEC: jr          $v0
    // 0x80237EF0: nop

    switch (jr_addend_80237EEC >> 2) {
        case 0: goto L_80237EF4; break;
        case 1: goto L_80237F08; break;
        case 2: goto L_80237F50; break;
        case 3: goto L_80237F84; break;
        case 4: goto L_80237FF0; break;
        default: switch_error(__func__, 0x80237EEC, 0x80240028);
    }
    // 0x80237EF0: nop

L_80237EF4:
    // 0x80237EF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237EF8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80237EFC: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80237F00: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80237F04: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
L_80237F08:
    // 0x80237F08: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80237F0C: lw          $v1, -0x8C8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X8C8);
    // 0x80237F10: sltiu       $v0, $v1, 0x3D
    ctx->r2 = ctx->r3 < 0X3D ? 1 : 0;
    // 0x80237F14: bne         $v0, $zero, L_80237F44
    if (ctx->r2 != 0) {
        // 0x80237F18: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80237F44;
    }
    // 0x80237F18: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80237F1C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80237F20: jal         0x80238028
    // 0x80237F24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_1;
    // 0x80237F24: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237F28: beq         $v0, $zero, L_80238010
    if (ctx->r2 == 0) {
        // 0x80237F2C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238010;
    }
    // 0x80237F2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237F30: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80237F34: jal         0x80036E48
    // 0x80237F38: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80237F38: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x80237F3C: j           L_80238010
    // 0x80237F40: nop

        goto L_80238010;
    // 0x80237F40: nop

L_80237F44:
    // 0x80237F44: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237F48: j           L_80238010
    // 0x80237F4C: sw          $v0, -0x8C8($at)
    MEM_W(-0X8C8, ctx->r1) = ctx->r2;
        goto L_80238010;
    // 0x80237F4C: sw          $v0, -0x8C8($at)
    MEM_W(-0X8C8, ctx->r1) = ctx->r2;
L_80237F50:
    // 0x80237F50: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237F54: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80237F58: bne         $v0, $zero, L_80238010
    if (ctx->r2 != 0) {
        // 0x80237F5C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80238010;
    }
    // 0x80237F5C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80237F60: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80237F64: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237F68: jal         0x800616FC
    // 0x80237F6C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80237F6C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_3:
    // 0x80237F70: addiu       $a0, $zero, 0x2FF
    ctx->r4 = ADD32(0, 0X2FF);
    // 0x80237F74: jal         0x8004CB2C
    // 0x80237F78: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_4;
    // 0x80237F78: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_4:
    // 0x80237F7C: j           L_80238010
    // 0x80237F80: nop

        goto L_80238010;
    // 0x80237F80: nop

L_80237F84:
    // 0x80237F84: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237F88: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80237F8C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80237F90: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237F94: bne         $v0, $zero, L_80238010
    if (ctx->r2 != 0) {
        // 0x80237F98: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80238010;
    }
    // 0x80237F98: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80237F9C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80237FA0: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80237FA4: lw          $s0, 0x3FF0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X3FF0);
    // 0x80237FA8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80237FAC: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x80237FB0: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80237FB4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80237FB8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80237FBC: lh          $a0, -0x8E6($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X8E6);
    // 0x80237FC0: jal         0x80036340
    // 0x80237FC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80036340_11740(rdram, ctx);
        goto after_5;
    // 0x80237FC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x80237FC8: jal         0x80036B50
    // 0x80237FCC: nop

    func_80036B50_11F50(rdram, ctx);
        goto after_6;
    // 0x80237FCC: nop

    after_6:
    // 0x80237FD0: addiu       $a0, $zero, 0x2FF
    ctx->r4 = ADD32(0, 0X2FF);
    // 0x80237FD4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80237FD8: jal         0x8004CB2C
    // 0x80237FDC: sb          $s0, 0x170($s1)
    MEM_B(0X170, ctx->r17) = ctx->r16;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_7;
    // 0x80237FDC: sb          $s0, 0x170($s1)
    MEM_B(0X170, ctx->r17) = ctx->r16;
    after_7:
    // 0x80237FE0: jal         0x80036E48
    // 0x80237FE4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_8;
    // 0x80237FE4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x80237FE8: j           L_80238010
    // 0x80237FEC: nop

        goto L_80238010;
    // 0x80237FEC: nop

L_80237FF0:
    // 0x80237FF0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237FF4: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80237FF8: bne         $v0, $zero, L_80238010
    if (ctx->r2 != 0) {
        // 0x80237FFC: addiu       $a0, $zero, 0x608
        ctx->r4 = ADD32(0, 0X608);
            goto L_80238010;
    }
    // 0x80237FFC: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    // 0x80238000: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80238004: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80238008: jal         0x8006036C
    // 0x8023800C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x8023800C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    after_9:
L_80238010:
    // 0x80238010: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80238014: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80238018: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023801C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238020: jr          $ra
    // 0x80238024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F79C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F79C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F7A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F7A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F7A8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F7AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F7B0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F7B4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022F7B8: beq         $v0, $zero, L_8022F964
    if (ctx->r2 == 0) {
        // 0x8022F7BC: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022F964;
    }
    // 0x8022F7BC: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022F7C0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022F7C4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F7C8: addu        $at, $at, $v0
    gpr jr_addend_8022F7D0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F7CC: lw          $v0, -0xC0($at)
    ctx->r2 = ADD32(ctx->r1, -0XC0);
    // 0x8022F7D0: jr          $v0
    // 0x8022F7D4: nop

    switch (jr_addend_8022F7D0 >> 2) {
        case 0: goto L_8022F7D8; break;
        case 1: goto L_8022F80C; break;
        case 2: goto L_8022F874; break;
        case 3: goto L_8022F914; break;
        case 4: goto L_8022F940; break;
        default: switch_error(__func__, 0x8022F7D0, 0x8023FF40);
    }
    // 0x8022F7D4: nop

L_8022F7D8:
    // 0x8022F7D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F7DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F7E0: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022F7E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F7E8: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022F7EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F7F0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022F7F4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022F7F8: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022F7FC: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x8022F800: jal         0x8003E934
    // 0x8022F804: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022F804: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    after_0:
    // 0x8022F808: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
L_8022F80C:
    // 0x8022F80C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022F810: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8022F814: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022F818: bltz        $v0, L_8022F858
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022F81C: sh          $v1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r3;
            goto L_8022F858;
    }
    // 0x8022F81C: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022F820: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8022F824: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8022F828: sh          $a2, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r6;
    // 0x8022F82C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F830: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F834: sll         $a2, $a2, 23
    ctx->r6 = S32(ctx->r6 << 23);
    // 0x8022F838: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022F83C: jal         0x8004DA90
    // 0x8022F840: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022F840: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022F844: jal         0x80040F30
    // 0x8022F848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022F848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022F84C: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x8022F850: beq         $v0, $zero, L_8022F964
    if (ctx->r2 == 0) {
        // 0x8022F854: nop
    
            goto L_8022F964;
    }
    // 0x8022F854: nop

L_8022F858:
    // 0x8022F858: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F85C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F860: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022F864: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F868: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022F86C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022F870: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
L_8022F874:
    // 0x8022F874: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F878: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022F87C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F880: jal         0x8004DA90
    // 0x8022F884: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022F884: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8022F888: jal         0x80040F30
    // 0x8022F88C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x8022F88C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022F890: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x8022F894: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022F898: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022F89C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022F8A0: bne         $v0, $zero, L_8022F8BC
    if (ctx->r2 != 0) {
        // 0x8022F8A4: sh          $v1, 0x46($s0)
        MEM_H(0X46, ctx->r16) = ctx->r3;
            goto L_8022F8BC;
    }
    // 0x8022F8A4: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022F8A8: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022F8AC: lh          $v1, 0x3E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X3E);
    // 0x8022F8B0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022F8B4: bne         $v0, $zero, L_8022F964
    if (ctx->r2 != 0) {
        // 0x8022F8B8: nop
    
            goto L_8022F964;
    }
    // 0x8022F8B8: nop

L_8022F8BC:
    // 0x8022F8BC: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x8022F8C0: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x8022F8C4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022F8C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F8CC: bgtz        $v1, L_8022F8FC
    if (SIGNED(ctx->r3) > 0) {
        // 0x8022F8D0: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022F8FC;
    }
    // 0x8022F8D0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022F8D4: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022F8D8: sh          $v0, 0x182($s0)
    MEM_H(0X182, ctx->r16) = ctx->r2;
    // 0x8022F8DC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022F8E0: addiu       $a0, $zero, 0xD3
    ctx->r4 = ADD32(0, 0XD3);
    // 0x8022F8E4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F8E8: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x8022F8EC: jal         0x8002A33C
    // 0x8022F8F0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022F8F0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    after_5:
    // 0x8022F8F4: j           L_8022F964
    // 0x8022F8F8: nop

        goto L_8022F964;
    // 0x8022F8F8: nop

L_8022F8FC:
    // 0x8022F8FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F900: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F904: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F908: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F90C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022F910: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022F914:
    // 0x8022F914: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022F918: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F91C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022F920: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F924: bgez        $v0, L_8022F964
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F928: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022F964;
    }
    // 0x8022F928: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F92C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F930: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022F934: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F938: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022F93C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022F940:
    // 0x8022F940: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022F944: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F948: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022F94C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F950: bgez        $v0, L_8022F964
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F954: nop
    
            goto L_8022F964;
    }
    // 0x8022F954: nop

    // 0x8022F958: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022F95C: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x8022F960: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022F964:
    // 0x8022F964: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F968: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F96C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F970: jr          $ra
    // 0x8022F974: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F974: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802273A8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802273A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802273AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802273B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802273B4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802273B8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802273BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802273C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802273C4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802273C8: beq         $v1, $zero, L_802273E4
    if (ctx->r3 == 0) {
        // 0x802273CC: addiu       $s2, $s0, 0x328
        ctx->r18 = ADD32(ctx->r16, 0X328);
            goto L_802273E4;
    }
    // 0x802273CC: addiu       $s2, $s0, 0x328
    ctx->r18 = ADD32(ctx->r16, 0X328);
    // 0x802273D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802273D4: beq         $v1, $v0, L_80227468
    if (ctx->r3 == ctx->r2) {
        // 0x802273D8: nop
    
            goto L_80227468;
    }
    // 0x802273D8: nop

    // 0x802273DC: j           L_802274B8
    // 0x802273E0: nop

        goto L_802274B8;
    // 0x802273E0: nop

L_802273E4:
    // 0x802273E4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802273E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802273EC: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x802273F0: addiu       $s3, $s3, 0x49C4
    ctx->r19 = ADD32(ctx->r19, 0X49C4);
    // 0x802273F4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x802273F8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802273FC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80227400: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227404: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227408: jal         0x8004F820
    // 0x8022740C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022740C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227410: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227414: bgez        $v0, L_80227440
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227418: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227440;
    }
    // 0x80227418: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022741C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227420: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80227424: jal         0x8004F820
    // 0x80227428: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80227428: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022742C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227430: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227434: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227438: j           L_80227458
    // 0x8022743C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80227458;
    // 0x8022743C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80227440:
    // 0x80227440: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227444: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80227448: jal         0x8004F820
    // 0x8022744C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022744C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80227450: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227454: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80227458:
    // 0x80227458: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022745C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80227460: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x80227464: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
L_80227468:
    // 0x80227468: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022746C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227470: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x80227474: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227478: bgez        $v0, L_8022748C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022747C: nop
    
            goto L_8022748C;
    }
    // 0x8022747C: nop

    // 0x80227480: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80227484: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80227488: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022748C:
    // 0x8022748C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227490: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x80227494: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227498: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022749C: jal         0x8004F820
    // 0x802274A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x802274A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x802274A4: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x802274A8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802274AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802274B0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802274B4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_802274B8:
    // 0x802274B8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802274BC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802274C0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802274C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802274C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802274CC: jr          $ra
    // 0x802274D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802274D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802376D4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802376D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802376D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802376DC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802376E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802376E4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802376E8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802376EC: jal         0x8006033C
    // 0x802376F0: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802376F0: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_0:
    // 0x802376F4: bne         $v0, $zero, L_8023779C
    if (ctx->r2 != 0) {
        // 0x802376F8: nop
    
            goto L_8023779C;
    }
    // 0x802376F8: nop

    // 0x802376FC: jal         0x8006033C
    // 0x80237700: addiu       $a0, $zero, 0x619
    ctx->r4 = ADD32(0, 0X619);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80237700: addiu       $a0, $zero, 0x619
    ctx->r4 = ADD32(0, 0X619);
    after_1:
    // 0x80237704: bne         $v0, $zero, L_8023779C
    if (ctx->r2 != 0) {
        // 0x80237708: nop
    
            goto L_8023779C;
    }
    // 0x80237708: nop

    // 0x8023770C: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80237710: beq         $v1, $zero, L_80237728
    if (ctx->r3 == 0) {
        // 0x80237714: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237728;
    }
    // 0x80237714: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237718: beq         $v1, $v0, L_8023776C
    if (ctx->r3 == ctx->r2) {
        // 0x8023771C: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8023776C;
    }
    // 0x8023771C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80237720: j           L_8023779C
    // 0x80237724: nop

        goto L_8023779C;
    // 0x80237724: nop

L_80237728:
    // 0x80237728: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023772C: jal         0x80238028
    // 0x80237730: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_2;
    // 0x80237730: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80237734: beq         $v0, $zero, L_8023779C
    if (ctx->r2 == 0) {
        // 0x80237738: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023779C;
    }
    // 0x80237738: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023773C: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80237740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237744: jal         0x800616FC
    // 0x80237748: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80237748: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023774C: jal         0x8006036C
    // 0x80237750: addiu       $a0, $zero, 0x618
    ctx->r4 = ADD32(0, 0X618);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80237750: addiu       $a0, $zero, 0x618
    ctx->r4 = ADD32(0, 0X618);
    after_4:
    // 0x80237754: jal         0x8006036C
    // 0x80237758: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80237758: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    after_5:
    // 0x8023775C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237760: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237764: j           L_80237794
    // 0x80237768: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_80237794;
    // 0x80237768: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_8023776C:
    // 0x8023776C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237770: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80237774: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237778: bne         $v0, $zero, L_8023779C
    if (ctx->r2 != 0) {
        // 0x8023777C: nop
    
            goto L_8023779C;
    }
    // 0x8023777C: nop

    // 0x80237780: jal         0x8006036C
    // 0x80237784: addiu       $a0, $zero, 0x619
    ctx->r4 = ADD32(0, 0X619);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80237784: addiu       $a0, $zero, 0x619
    ctx->r4 = ADD32(0, 0X619);
    after_6:
    // 0x80237788: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023778C: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237790: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
L_80237794:
    // 0x80237794: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237798: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
L_8023779C:
    // 0x8023779C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802377A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802377A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802377A8: jr          $ra
    // 0x802377AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802377AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FA50_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FA54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FA58: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FA5C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022FA60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FA64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FA68: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022FA6C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022FA70: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022FA74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FA78: beq         $v1, $v0, L_8022FB10
    if (ctx->r3 == ctx->r2) {
        // 0x8022FA7C: addiu       $s2, $s1, 0x4E0
        ctx->r18 = ADD32(ctx->r17, 0X4E0);
            goto L_8022FB10;
    }
    // 0x8022FA7C: addiu       $s2, $s1, 0x4E0
    ctx->r18 = ADD32(ctx->r17, 0X4E0);
    // 0x8022FA80: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022FA84: beql        $v0, $zero, L_8022FA9C
    if (ctx->r2 == 0) {
        // 0x8022FA88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022FA9C;
    }
    goto skip_0;
    // 0x8022FA88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022FA8C: beq         $v1, $zero, L_8022FAAC
    if (ctx->r3 == 0) {
        // 0x8022FA90: addiu       $s0, $s1, 0x14
        ctx->r16 = ADD32(ctx->r17, 0X14);
            goto L_8022FAAC;
    }
    // 0x8022FA90: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022FA94: j           L_8022FBC4
    // 0x8022FA98: nop

        goto L_8022FBC4;
    // 0x8022FA98: nop

L_8022FA9C:
    // 0x8022FA9C: beq         $v1, $v0, L_8022FBA0
    if (ctx->r3 == ctx->r2) {
        // 0x8022FAA0: nop
    
            goto L_8022FBA0;
    }
    // 0x8022FAA0: nop

    // 0x8022FAA4: j           L_8022FBC4
    // 0x8022FAA8: nop

        goto L_8022FBC4;
    // 0x8022FAA8: nop

L_8022FAAC:
    // 0x8022FAAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FAB0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8022FAB4: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022FAB8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022FABC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FAC0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022FAC4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022FAC8: jal         0x8004F820
    // 0x8022FACC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022FACC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022FAD0: addiu       $a0, $zero, 0xD1
    ctx->r4 = ADD32(0, 0XD1);
    // 0x8022FAD4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022FAD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FADC: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022FAE0: sh          $v0, 0x66($s1)
    MEM_H(0X66, ctx->r17) = ctx->r2;
    // 0x8022FAE4: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8022FAE8: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x8022FAEC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022FAF0: sh          $v0, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r2;
    // 0x8022FAF4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022FAF8: sh          $v0, 0x4E4($s1)
    MEM_H(0X4E4, ctx->r17) = ctx->r2;
    // 0x8022FAFC: jal         0x8002A33C
    // 0x8022FB00: sh          $zero, 0x4E8($s1)
    MEM_H(0X4E8, ctx->r17) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022FB00: sh          $zero, 0x4E8($s1)
    MEM_H(0X4E8, ctx->r17) = 0;
    after_1:
    // 0x8022FB04: jal         0x8003E934
    // 0x8022FB08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022FB08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022FB0C: sh          $v0, 0x51E($s1)
    MEM_H(0X51E, ctx->r17) = ctx->r2;
L_8022FB10:
    // 0x8022FB10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022FB14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FB18: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022FB1C: lhu         $v1, 0x66($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X66);
    // 0x8022FB20: lh          $a2, 0x46($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X46);
    // 0x8022FB24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022FB28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FB2C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FB30: jal         0x8004DA90
    // 0x8022FB34: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022FB34: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022FB38: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x8022FB3C: lhu         $v1, 0x4E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4E);
    // 0x8022FB40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022FB44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FB48: jal         0x80040F30
    // 0x8022FB4C: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x8022FB4C: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022FB50: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022FB54: bne         $v0, $zero, L_8022FB70
    if (ctx->r2 != 0) {
        // 0x8022FB58: addiu       $a0, $zero, 0xD3
        ctx->r4 = ADD32(0, 0XD3);
            goto L_8022FB70;
    }
    // 0x8022FB58: addiu       $a0, $zero, 0xD3
    ctx->r4 = ADD32(0, 0XD3);
    // 0x8022FB5C: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x8022FB60: lh          $v1, 0x3E($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3E);
    // 0x8022FB64: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022FB68: bne         $v0, $zero, L_8022FBC4
    if (ctx->r2 != 0) {
        // 0x8022FB6C: nop
    
            goto L_8022FBC4;
    }
    // 0x8022FB6C: nop

L_8022FB70:
    // 0x8022FB70: lhu         $v1, 0x3E($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X3E);
    // 0x8022FB74: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022FB78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FB7C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022FB80: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022FB84: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022FB88: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022FB8C: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x8022FB90: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022FB94: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022FB98: jal         0x8002A33C
    // 0x8022FB9C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022FB9C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    after_5:
L_8022FBA0:
    // 0x8022FBA0: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022FBA4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FBA8: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022FBAC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FBB0: bgez        $v0, L_8022FBC4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022FBB4: nop
    
            goto L_8022FBC4;
    }
    // 0x8022FBB4: nop

    // 0x8022FBB8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022FBBC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022FBC0: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022FBC4:
    // 0x8022FBC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FBC8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022FBCC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FBD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FBD4: jr          $ra
    // 0x8022FBD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FBD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B258_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B258: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022B25C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022B260: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B264: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022B268: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022B26C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B270: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B274: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022B278: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022B27C: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022B280: beq         $a0, $zero, L_8022B2B4
    if (ctx->r4 == 0) {
        // 0x8022B284: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_8022B2B4;
    }
    // 0x8022B284: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022B288: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x8022B28C: jal         0x800540D0
    // 0x8022B290: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022B290: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022B294: beq         $v0, $zero, L_8022B2A8
    if (ctx->r2 == 0) {
        // 0x8022B298: nop
    
            goto L_8022B2A8;
    }
    // 0x8022B298: nop

    // 0x8022B29C: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x8022B2A0: j           L_8022B2B0
    // 0x8022B2A4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_8022B2B0;
    // 0x8022B2A4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_8022B2A8:
    // 0x8022B2A8: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x8022B2AC: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
L_8022B2B0:
    // 0x8022B2B0: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
L_8022B2B4:
    // 0x8022B2B4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B2B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B2BC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B2C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B2C4: lw          $v0, -0x15F8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X15F8);
    // 0x8022B2C8: jalr        $v0
    // 0x8022B2CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022B2CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B2D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B2D4: bne         $v0, $zero, L_8022B2F8
    if (ctx->r2 != 0) {
        // 0x8022B2D8: addiu       $a0, $s1, 0x8
        ctx->r4 = ADD32(ctx->r17, 0X8);
            goto L_8022B2F8;
    }
    // 0x8022B2D8: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    // 0x8022B2DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B2E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022B2E4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022B2E8: jal         0x80047284
    // 0x8022B2EC: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x8022B2EC: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    after_2:
    // 0x8022B2F0: j           L_8022B328
    // 0x8022B2F4: nop

        goto L_8022B328;
    // 0x8022B2F4: nop

L_8022B2F8:
    // 0x8022B2F8: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x8022B2FC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022B300: addiu       $v0, $s1, 0x18
    ctx->r2 = ADD32(ctx->r17, 0X18);
    // 0x8022B304: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022B308: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022B30C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8022B310: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B314: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022B318: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022B31C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022B320: jal         0x80051E18
    // 0x8022B324: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x8022B324: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
L_8022B328:
    // 0x8022B328: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022B32C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B330: bnel        $v1, $v0, L_8022B344
    if (ctx->r3 != ctx->r2) {
        // 0x8022B334: sw          $zero, 0x18($s1)
        MEM_W(0X18, ctx->r17) = 0;
            goto L_8022B344;
    }
    goto skip_0;
    // 0x8022B334: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    skip_0:
    // 0x8022B338: jal         0x8005044C
    // 0x8022B33C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8022B33C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022B340: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
L_8022B344:
    // 0x8022B344: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022B348: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B34C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022B350: jr          $ra
    // 0x8022B354: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022B354: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022AA7C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AA80: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022AA84: jal         0x8004F418
    // 0x8022AA88: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022AA88: nop

    after_0:
    // 0x8022AA8C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022AA90: jr          $ra
    // 0x8022AA94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AA94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235B6C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235B6C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235B70: lw          $v1, -0x3A2C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A2C);
    // 0x80235B74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80235B78: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80235B7C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80235B80: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80235B84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80235B88: lb          $v0, 0xE($v1)
    ctx->r2 = MEM_B(ctx->r3, 0XE);
    // 0x80235B8C: lw          $a0, 0x98($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X98);
    // 0x80235B90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235B94: lbu         $a0, 0x0($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X0);
    // 0x80235B98: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235B9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235BA0: lw          $v0, -0xBBC($at)
    ctx->r2 = MEM_W(ctx->r1, -0XBBC);
    // 0x80235BA4: lh          $v1, 0x1BA($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X1BA);
    // 0x80235BA8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80235BAC: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x80235BB0: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x80235BB4: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80235BB8: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80235BBC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80235BC0: bne         $v0, $zero, L_80235C5C
    if (ctx->r2 != 0) {
        // 0x80235BC4: subu        $v0, $a0, $a1
        ctx->r2 = SUB32(ctx->r4, ctx->r5);
            goto L_80235C5C;
    }
    // 0x80235BC4: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    // 0x80235BC8: jal         0x800A3450
    // 0x80235BCC: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80235BCC: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_0:
    // 0x80235BD0: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x80235BD4: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x80235BD8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235BDC: sra         $a0, $v0, 31
    ctx->r4 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80235BE0: mfhi        $a2
    ctx->r6 = hi;
    // 0x80235BE4: subu        $a0, $a2, $a0
    ctx->r4 = SUB32(ctx->r6, ctx->r4);
    // 0x80235BE8: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80235BEC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80235BF0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80235BF4: bne         $v0, $v1, L_80235C5C
    if (ctx->r2 != ctx->r3) {
        // 0x80235BF8: nop
    
            goto L_80235C5C;
    }
    // 0x80235BF8: nop

    // 0x80235BFC: jal         0x8004F144
    // 0x80235C00: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80235C00: nop

    after_1:
    // 0x80235C04: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80235C08: beq         $s0, $zero, L_80235C5C
    if (ctx->r16 == 0) {
        // 0x80235C0C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80235C5C;
    }
    // 0x80235C0C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80235C10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235C14: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80235C18: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80235C1C: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x80235C20: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80235C24: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80235C28: jal         0x800A3450
    // 0x80235C2C: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80235C2C: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_2:
    // 0x80235C30: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x80235C34: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80235C38: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235C3C: addiu       $v1, $v1, -0x7F
    ctx->r3 = ADD32(ctx->r3, -0X7F);
    // 0x80235C40: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x80235C44: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80235C48: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80235C4C: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x80235C50: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x80235C54: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80235C58: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_80235C5C:
    // 0x80235C5C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80235C60: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80235C64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80235C68: jr          $ra
    // 0x80235C6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80235C6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022ACDC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ACDC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022ACE0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022ACE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ACE8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022ACEC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022ACF0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022ACF4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022ACF8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022ACFC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022AD00: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022AD04: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022AD08: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x8022AD0C: jal         0x8004D5D4
    // 0x8022AD10: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022AD10: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022AD14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AD18: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022AD1C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022AD20: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022AD24: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022AD28: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022AD2C: jal         0x8003E934
    // 0x8022AD30: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022AD30: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022AD34: addiu       $s1, $s0, 0x310
    ctx->r17 = ADD32(ctx->r16, 0X310);
    // 0x8022AD38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AD3C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022AD40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022AD44: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022AD48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AD4C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022AD50: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022AD54: addiu       $v0, $v0, -0x15D8
    ctx->r2 = ADD32(ctx->r2, -0X15D8);
    // 0x8022AD58: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022AD5C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022AD60: addiu       $v0, $v0, -0x15E4
    ctx->r2 = ADD32(ctx->r2, -0X15E4);
    // 0x8022AD64: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022AD68: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022AD6C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022AD70: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022AD74: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022AD78: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022AD7C: jal         0x8009A3B4
    // 0x8022AD80: sh          $zero, 0x308($s0)
    MEM_H(0X308, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022AD80: sh          $zero, 0x308($s0)
    MEM_H(0X308, ctx->r16) = 0;
    after_2:
    // 0x8022AD84: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x8022AD88: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AD8C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022AD90: addiu       $v0, $zero, -0x30
    ctx->r2 = ADD32(0, -0X30);
    // 0x8022AD94: sh          $v0, 0x318($s0)
    MEM_H(0X318, ctx->r16) = ctx->r2;
    // 0x8022AD98: addiu       $v0, $zero, -0x48
    ctx->r2 = ADD32(0, -0X48);
    // 0x8022AD9C: sh          $v0, 0x31A($s0)
    MEM_H(0X31A, ctx->r16) = ctx->r2;
    // 0x8022ADA0: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x8022ADA4: sh          $v0, 0x31E($s0)
    MEM_H(0X31E, ctx->r16) = ctx->r2;
    // 0x8022ADA8: lui         $v0, 0x888
    ctx->r2 = S32(0X888 << 16);
    // 0x8022ADAC: sh          $zero, 0x31C($s0)
    MEM_H(0X31C, ctx->r16) = 0;
    // 0x8022ADB0: sw          $v0, 0x30C($s0)
    MEM_W(0X30C, ctx->r16) = ctx->r2;
    // 0x8022ADB4: jal         0x800540BC
    // 0x8022ADB8: sh          $zero, 0x30A($s0)
    MEM_H(0X30A, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_3;
    // 0x8022ADB8: sh          $zero, 0x30A($s0)
    MEM_H(0X30A, ctx->r16) = 0;
    after_3:
    // 0x8022ADBC: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022ADC0: lh          $a2, 0x318($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X318);
    // 0x8022ADC4: lh          $a3, 0x31A($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X31A);
    // 0x8022ADC8: lh          $v0, 0x31C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X31C);
    // 0x8022ADCC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022ADD0: jal         0x8022B774
    // 0x8022ADD4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8022B774_ovl2(rdram, ctx);
        goto after_4;
    // 0x8022ADD4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x8022ADD8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022ADDC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022ADE0: jal         0x8009A3B4
    // 0x8022ADE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022ADE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022ADE8: lhu         $v1, 0x310($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X310);
    // 0x8022ADEC: lhu         $a2, 0x14($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X14);
    // 0x8022ADF0: lhu         $a0, 0x312($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X312);
    // 0x8022ADF4: lhu         $a3, 0x16($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X16);
    // 0x8022ADF8: lhu         $a1, 0x314($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X314);
    // 0x8022ADFC: lhu         $t0, 0x18($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X18);
    // 0x8022AE00: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AE04: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x8022AE08: lw          $t1, 0x298($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X298);
    // 0x8022AE0C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022AE10: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x8022AE14: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x8022AE18: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AE1C: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8022AE20: sh          $v1, 0x310($s0)
    MEM_H(0X310, ctx->r16) = ctx->r3;
    // 0x8022AE24: sh          $a0, 0x312($s0)
    MEM_H(0X312, ctx->r16) = ctx->r4;
    // 0x8022AE28: sh          $a1, 0x314($s0)
    MEM_H(0X314, ctx->r16) = ctx->r5;
    // 0x8022AE2C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022AE30: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x8022AE34: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022AE38: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022AE3C: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x8022AE40: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x8022AE44: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022AE48: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022AE4C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022AE50: jr          $ra
    // 0x8022AE54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022AE54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022AA98_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA98: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022AA9C: beq         $v1, $zero, L_8022AAB8
    if (ctx->r3 == 0) {
        // 0x8022AAA0: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022AAB8;
    }
    // 0x8022AAA0: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022AAA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AAA8: beq         $v1, $v0, L_8022AAC8
    if (ctx->r3 == ctx->r2) {
        // 0x8022AAAC: nop
    
            goto L_8022AAC8;
    }
    // 0x8022AAAC: nop

    // 0x8022AAB0: j           L_8022AAEC
    // 0x8022AAB4: nop

        goto L_8022AAEC;
    // 0x8022AAB4: nop

L_8022AAB8:
    // 0x8022AAB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AABC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022AAC0: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x8022AAC4: sh          $zero, 0x350($a0)
    MEM_H(0X350, ctx->r4) = 0;
L_8022AAC8:
    // 0x8022AAC8: lw          $v1, 0x80($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X80);
    // 0x8022AACC: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x8022AAD0: ori         $v0, $v0, 0xE200
    ctx->r2 = ctx->r2 | 0XE200;
    // 0x8022AAD4: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022AAD8: bne         $v0, $zero, L_8022AAEC
    if (ctx->r2 != 0) {
        // 0x8022AADC: nop
    
            goto L_8022AAEC;
    }
    // 0x8022AADC: nop

    // 0x8022AAE0: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022AAE4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022AAE8: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022AAEC:
    // 0x8022AAEC: jr          $ra
    // 0x8022AAF0: nop

    TRACE_RETURN()
    return;
    // 0x8022AAF0: nop

;}
RECOMP_FUNC void func_8022B834_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B834: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B838: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B83C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022B840: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B844: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B848: jal         0x8004EFE4
    // 0x8022B84C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022B84C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022B850: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022B854: beq         $s1, $zero, L_8022B908
    if (ctx->r17 == 0) {
        // 0x8022B858: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022B908;
    }
    // 0x8022B858: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022B85C: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    // 0x8022B860: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B864: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B868: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022B86C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B870: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022B874: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022B878: jal         0x8004DA90
    // 0x8022B87C: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022B87C: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    after_1:
    // 0x8022B880: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022B884: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x8022B888: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8022B88C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022B890: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B894: addiu       $v0, $v0, -0x3C
    ctx->r2 = ADD32(ctx->r2, -0X3C);
    // 0x8022B898: jal         0x8009A3B4
    // 0x8022B89C: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022B89C: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    after_2:
    // 0x8022B8A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B8A4: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022B8A8: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022B8AC: lh          $a2, 0x18($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X18);
    // 0x8022B8B0: addiu       $a1, $s2, 0x2C
    ctx->r5 = ADD32(ctx->r18, 0X2C);
    // 0x8022B8B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B8B8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022B8BC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022B8C0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022B8C4: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022B8C8: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    // 0x8022B8CC: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x8022B8D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B8D4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022B8D8: sw          $v0, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r2;
    // 0x8022B8DC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B8E0: sw          $v0, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r2;
    // 0x8022B8E4: jal         0x8009A3B4
    // 0x8022B8E8: sh          $v1, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022B8E8: sh          $v1, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r3;
    after_3:
    // 0x8022B8EC: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x8022B8F0: addiu       $a1, $s2, 0x34
    ctx->r5 = ADD32(ctx->r18, 0X34);
    // 0x8022B8F4: jal         0x8009A3B4
    // 0x8022B8F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022B8F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022B8FC: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    // 0x8022B900: jal         0x8002A33C
    // 0x8022B904: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022B904: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
L_8022B908:
    // 0x8022B908: sltu        $v0, $zero, $s1
    ctx->r2 = 0 < ctx->r17 ? 1 : 0;
    // 0x8022B90C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B910: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022B914: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B918: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B91C: jr          $ra
    // 0x8022B920: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B920: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022B924: nop

    // 0x8022B928: nop

    // 0x8022B92C: nop

;}
RECOMP_FUNC void func_802364DC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802364DC: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x802364E0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802364E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802364E8: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x802364EC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802364F0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802364F4: bne         $v0, $v1, L_8023653C
    if (ctx->r2 != ctx->r3) {
        // 0x802364F8: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8023653C;
    }
    // 0x802364F8: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x802364FC: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x80236500: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80236504: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236508: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x8023650C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236510: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236514: bne         $v0, $v1, L_80236530
    if (ctx->r2 != ctx->r3) {
        // 0x80236518: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80236530;
    }
    // 0x80236518: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023651C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80236520: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80236524: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236528: j           L_8023653C
    // 0x8023652C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_8023653C;
    // 0x8023652C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80236530:
    // 0x80236530: lbu         $v1, 0xE($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XE);
    // 0x80236534: sb          $v0, 0x48($a0)
    MEM_B(0X48, ctx->r4) = ctx->r2;
    // 0x80236538: sb          $v1, 0x49($a0)
    MEM_B(0X49, ctx->r4) = ctx->r3;
L_8023653C:
    // 0x8023653C: jr          $ra
    // 0x80236540: nop

    TRACE_RETURN()
    return;
    // 0x80236540: nop

;}
RECOMP_FUNC void func_8023B0CC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B0CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023B0D0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8023B0D4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023B0D8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8023B0DC: addu        $s4, $s3, $zero
    ctx->r20 = ADD32(ctx->r19, 0);
    // 0x8023B0E0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8023B0E4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8023B0E8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023B0EC: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x8023B0F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023B0F4: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023B0F8: addiu       $s0, $s0, -0x6F8
    ctx->r16 = ADD32(ctx->r16, -0X6F8);
    // 0x8023B0FC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
L_8023B100:
    // 0x8023B100: jal         0x80071A70
    // 0x8023B104: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80071A70_4CE70(rdram, ctx);
        goto after_0;
    // 0x8023B104: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_0:
    // 0x8023B108: bnel        $v0, $zero, L_8023B120
    if (ctx->r2 != 0) {
        // 0x8023B10C: sw          $v0, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->r2;
            goto L_8023B120;
    }
    goto skip_0;
    // 0x8023B10C: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    skip_0:
    // 0x8023B110: jal         0x8004F62C
    // 0x8023B114: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8023B114: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_1:
    // 0x8023B118: j           L_8023B198
    // 0x8023B11C: nop

        goto L_8023B198;
    // 0x8023B11C: nop

L_8023B120:
    // 0x8023B120: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8023B124: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8023B128: sltiu       $v0, $s2, 0x3
    ctx->r2 = ctx->r18 < 0X3 ? 1 : 0;
    // 0x8023B12C: bne         $v0, $zero, L_8023B100
    if (ctx->r2 != 0) {
        // 0x8023B130: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8023B100;
    }
    // 0x8023B130: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8023B134: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8023B138: lbu         $v0, 0x8($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X8);
    // 0x8023B13C: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8023B140: addiu       $s1, $s1, 0x2C0
    ctx->r17 = ADD32(ctx->r17, 0X2C0);
    // 0x8023B144: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    // 0x8023B148: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x8023B14C: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x8023B150: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023B154: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B158: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023B15C:
    // 0x8023B15C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023B160: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x8023B164: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B168: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8023B16C: jal         0x8003BA58
    // 0x8023B170: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003BA58_16E58(rdram, ctx);
        goto after_2;
    // 0x8023B170: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8023B174: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023B178: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8023B17C: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x8023B180: addiu       $s1, $s1, 0x100
    ctx->r17 = ADD32(ctx->r17, 0X100);
    // 0x8023B184: jal         0x80099F90
    // 0x8023B188: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    bcopy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023B188: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    after_3:
    // 0x8023B18C: sltiu       $v0, $s2, 0x3
    ctx->r2 = ctx->r18 < 0X3 ? 1 : 0;
    // 0x8023B190: bne         $v0, $zero, L_8023B15C
    if (ctx->r2 != 0) {
        // 0x8023B194: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8023B15C;
    }
    // 0x8023B194: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8023B198:
    // 0x8023B198: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023B19C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8023B1A0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8023B1A4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023B1A8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023B1AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023B1B0: jr          $ra
    // 0x8023B1B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023B1B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023AFF4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AFF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023AFF8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023AFFC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B000: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x8023B004: bgtz        $v0, L_8023B01C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023B008: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8023B01C;
    }
    // 0x8023B008: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023B00C: jal         0x8004F5C4
    // 0x8023B010: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8023B010: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8023B014: j           L_8023B034
    // 0x8023B018: nop

        goto L_8023B034;
    // 0x8023B018: nop

L_8023B01C:
    // 0x8023B01C: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x8023B020: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8023B024: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x8023B028: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x8023B02C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023B030: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_8023B034:
    // 0x8023B034: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B038: jr          $ra
    // 0x8023B03C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B03C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B624_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B628: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B62C: jal         0x8004F418
    // 0x8022B630: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022B630: nop

    after_0:
    // 0x8022B634: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B638: jr          $ra
    // 0x8022B63C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B63C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C09C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C09C: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022C0A0: beq         $v1, $zero, L_8022C0BC
    if (ctx->r3 == 0) {
        // 0x8022C0A4: addiu       $a1, $a0, 0x4E0
        ctx->r5 = ADD32(ctx->r4, 0X4E0);
            goto L_8022C0BC;
    }
    // 0x8022C0A4: addiu       $a1, $a0, 0x4E0
    ctx->r5 = ADD32(ctx->r4, 0X4E0);
    // 0x8022C0A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C0AC: beq         $v1, $v0, L_8022C0CC
    if (ctx->r3 == ctx->r2) {
        // 0x8022C0B0: nop
    
            goto L_8022C0CC;
    }
    // 0x8022C0B0: nop

    // 0x8022C0B4: j           L_8022C0F8
    // 0x8022C0B8: nop

        goto L_8022C0F8;
    // 0x8022C0B8: nop

L_8022C0BC:
    // 0x8022C0BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C0C0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022C0C4: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x8022C0C8: sh          $zero, 0x4E8($a0)
    MEM_H(0X4E8, ctx->r4) = 0;
L_8022C0CC:
    // 0x8022C0CC: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x8022C0D0: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x8022C0D4: bne         $v0, $zero, L_8022C0F4
    if (ctx->r2 != 0) {
        // 0x8022C0D8: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_8022C0F4;
    }
    // 0x8022C0D8: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
    // 0x8022C0DC: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x8022C0E0: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022C0E4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022C0E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C0EC: beq         $v0, $zero, L_8022C0F8
    if (ctx->r2 == 0) {
        // 0x8022C0F0: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_8022C0F8;
    }
    // 0x8022C0F0: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
L_8022C0F4:
    // 0x8022C0F4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022C0F8:
    // 0x8022C0F8: jr          $ra
    // 0x8022C0FC: nop

    TRACE_RETURN()
    return;
    // 0x8022C0FC: nop

;}
RECOMP_FUNC void func_80238D84_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238D84: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80238D88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238D8C: jr          $ra
    // 0x80238D90: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80238D90: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_802395A4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802395A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802395A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802395AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802395B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802395B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802395B8: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802395BC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802395C0: bne         $v0, $zero, L_80239694
    if (ctx->r2 != 0) {
        // 0x802395C4: nop
    
            goto L_80239694;
    }
    // 0x802395C4: nop

    // 0x802395C8: jal         0x8004F144
    // 0x802395CC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802395CC: nop

    after_0:
    // 0x802395D0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802395D4: beq         $s0, $zero, L_802396C8
    if (ctx->r16 == 0) {
        // 0x802395D8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802396C8;
    }
    // 0x802395D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802395DC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802395E0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802395E4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802395E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802395EC: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x802395F0: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802395F4: jal         0x800A3450
    // 0x802395F8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802395F8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    after_1:
    // 0x802395FC: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80239600: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80239604: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80239608: addiu       $v1, $v1, -0x3
    ctx->r3 = ADD32(ctx->r3, -0X3);
    // 0x8023960C: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x80239610: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80239614: bne         $v0, $zero, L_80239628
    if (ctx->r2 != 0) {
        // 0x80239618: nop
    
            goto L_80239628;
    }
    // 0x80239618: nop

    // 0x8023961C: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x80239620: j           L_80239630
    // 0x80239624: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
        goto L_80239630;
    // 0x80239624: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
L_80239628:
    // 0x80239628: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x8023962C: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
L_80239630:
    // 0x80239630: jal         0x800A3450
    // 0x80239634: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80239634: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    after_2:
    // 0x80239638: lui         $a1, 0x3D08
    ctx->r5 = S32(0X3D08 << 16);
    // 0x8023963C: ori         $a1, $a1, 0x26
    ctx->r5 = ctx->r5 | 0X26;
    // 0x80239640: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80239644: lui         $a0, 0x2C80
    ctx->r4 = S32(0X2C80 << 16);
    // 0x80239648: ori         $a0, $a0, 0x4040
    ctx->r4 = ctx->r4 | 0X4040;
    // 0x8023964C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80239650: sw          $a1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r5;
    // 0x80239654: sw          $a0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r4;
    // 0x80239658: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023965C: addiu       $v1, $v1, -0x3
    ctx->r3 = ADD32(ctx->r3, -0X3);
    // 0x80239660: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80239664: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80239668: lhu         $v0, -0x7DC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7DC);
    // 0x8023966C: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80239670: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80239674: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80239678: bne         $v0, $zero, L_80239684
    if (ctx->r2 != 0) {
        // 0x8023967C: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_80239684;
    }
    // 0x8023967C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80239680: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
L_80239684:
    // 0x80239684: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x80239688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023968C: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x80239690: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80239694:
    // 0x80239694: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80239698: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8023969C: bne         $v0, $zero, L_802396BC
    if (ctx->r2 != 0) {
        // 0x802396A0: nop
    
            goto L_802396BC;
    }
    // 0x802396A0: nop

    // 0x802396A4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x802396A8: lbu         $v1, 0xD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XD);
    // 0x802396AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802396B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802396B4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802396B8: sb          $v1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r3;
L_802396BC:
    // 0x802396BC: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802396C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802396C4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_802396C8:
    // 0x802396C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802396CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802396D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802396D4: jr          $ra
    // 0x802396D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802396D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A350_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A350: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023A354: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A358: lbu         $s0, 0x3B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X3B);
    // 0x8023A35C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A360: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023A364: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023A368: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8023A36C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023A370: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8023A374: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023A378: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023A37C: jal         0x8004F144
    // 0x8023A380: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023A380: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    after_0:
    // 0x8023A384: bne         $v0, $zero, L_8023A394
    if (ctx->r2 != 0) {
        // 0x8023A388: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8023A394;
    }
    // 0x8023A388: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023A38C: j           L_8023A3B8
    // 0x8023A390: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8023A3B8;
    // 0x8023A390: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023A394:
    // 0x8023A394: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8023A398: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8023A39C: sb          $v1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r3;
    // 0x8023A3A0: sb          $s0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r16;
    // 0x8023A3A4: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x8023A3A8: sw          $s1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r17;
    // 0x8023A3AC: sh          $s2, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r18;
    // 0x8023A3B0: sh          $s3, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r19;
    // 0x8023A3B4: sh          $s4, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r20;
L_8023A3B8:
    // 0x8023A3B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023A3BC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023A3C0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A3C4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023A3C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A3CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A3D0: jr          $ra
    // 0x8023A3D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023A3D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
