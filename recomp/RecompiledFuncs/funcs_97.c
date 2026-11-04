#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80228CD0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228CD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228CD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228CD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228CDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228CE0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228CE4: bne         $v0, $zero, L_80228D00
    if (ctx->r2 != 0) {
        // 0x80228CE8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80228D00;
    }
    // 0x80228CE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80228CEC: jal         0x80050294
    // 0x80228CF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228CF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228CF4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228CF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228CFC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228D00:
    // 0x80228D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228D04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228D08: jr          $ra
    // 0x80228D0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228D0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802280C4_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802280C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802280C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802280CC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802280D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802280D4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802280D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802280DC: lw          $v0, -0x4D0C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4D0C);
    // 0x802280E0: jalr        $v0
    // 0x802280E4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802280E4: nop

    after_0:
    // 0x802280E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802280EC: jr          $ra
    // 0x802280F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802280F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227BC0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227BC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227BC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227BC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227BCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227BD0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227BD4: bnel        $v0, $zero, L_80227C48
    if (ctx->r2 != 0) {
        // 0x80227BD8: addiu       $a0, $s0, 0x2C
        ctx->r4 = ADD32(ctx->r16, 0X2C);
            goto L_80227C48;
    }
    goto skip_0;
    // 0x80227BD8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    skip_0:
    // 0x80227BDC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227BE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227BE4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227BE8: jal         0x8004D5D4
    // 0x80227BEC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227BEC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227BF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227BF4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227BF8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227BFC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227C00: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227C04: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227C08: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227C0C: jal         0x8003E934
    // 0x80227C10: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80227C10: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x80227C14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227C18: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80227C1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227C20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227C24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227C28: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80227C2C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227C30: jal         0x80050294
    // 0x80227C34: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80227C34: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80227C38: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227C3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C40: j           L_80227C7C
    // 0x80227C44: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80227C7C;
    // 0x80227C44: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80227C48:
    // 0x80227C48: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80227C4C: jal         0x8009A3B4
    // 0x80227C50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80227C50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80227C54: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80227C58: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80227C5C: jal         0x8009A3B4
    // 0x80227C60: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80227C60: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80227C64: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80227C68: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80227C6C: jal         0x8009A3B4
    // 0x80227C70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80227C70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80227C74: jal         0x8005044C
    // 0x80227C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80227C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80227C7C:
    // 0x80227C7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227C80: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80227C84: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80227C88: jal         0x8003B564
    // 0x80227C8C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x80227C8C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x80227C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227C94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227C98: jr          $ra
    // 0x80227C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802297C8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802297C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802297CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802297D0: jal         0x8004F5C4
    // 0x802297D4: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x802297D4: nop

    after_0:
    // 0x802297D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802297DC: jr          $ra
    // 0x802297E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802297E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802297E4: nop

    // 0x802297E8: nop

    // 0x802297EC: nop

;}
RECOMP_FUNC void func_80225330_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225330: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225334: jr          $ra
    // 0x80225338: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80225338: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_802277E8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802277E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802277EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802277F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802277F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802277F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802277FC: bne         $v0, $zero, L_80227818
    if (ctx->r2 != 0) {
        // 0x80227800: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_80227818;
    }
    // 0x80227800: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80227804: jal         0x80050294
    // 0x80227808: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227808: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022780C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227810: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227814: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227818:
    // 0x80227818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022781C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227820: jr          $ra
    // 0x80227824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228C10_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228C14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228C18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228C1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228C20: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228C24: bne         $v0, $zero, L_80228C40
    if (ctx->r2 != 0) {
        // 0x80228C28: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80228C40;
    }
    // 0x80228C28: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80228C2C: jal         0x80050294
    // 0x80228C30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228C30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228C34: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228C38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228C3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228C40:
    // 0x80228C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228C44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228C48: jr          $ra
    // 0x80228C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802275AC_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802275AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802275B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802275B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802275B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802275BC: jal         0x8004D5D4
    // 0x802275C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802275C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x802275C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802275C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802275CC: jal         0x80050294
    // 0x802275D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802275D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802275D4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802275D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802275DC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802275E0: sh          $v0, 0x158($a0)
    MEM_H(0X158, ctx->r4) = ctx->r2;
    // 0x802275E4: sh          $v0, 0x15A($a0)
    MEM_H(0X15A, ctx->r4) = ctx->r2;
    // 0x802275E8: sh          $v0, 0x15C($a0)
    MEM_H(0X15C, ctx->r4) = ctx->r2;
    // 0x802275EC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802275F0: sh          $v0, 0x15E($a0)
    MEM_H(0X15E, ctx->r4) = ctx->r2;
    // 0x802275F4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802275F8: jal         0x80227520
    // 0x802275FC: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    func_80227520_ovl11(rdram, ctx);
        goto after_2;
    // 0x802275FC: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    after_2:
    // 0x80227600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227604: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227608: jr          $ra
    // 0x8022760C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022760C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802278C0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802278C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802278C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802278CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802278D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802278D4: bnel        $v0, $zero, L_80227928
    if (ctx->r2 != 0) {
        // 0x802278D8: addiu       $a0, $s0, 0x2C
        ctx->r4 = ADD32(ctx->r16, 0X2C);
            goto L_80227928;
    }
    goto skip_0;
    // 0x802278D8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    skip_0:
    // 0x802278DC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802278E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802278E4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802278E8: jal         0x8004D5D4
    // 0x802278EC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802278EC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802278F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802278F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802278F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802278FC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227900: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227904: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227908: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022790C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227910: jal         0x80050294
    // 0x80227914: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80227914: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227918: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022791C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227920: j           L_8022795C
    // 0x80227924: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022795C;
    // 0x80227924: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80227928:
    // 0x80227928: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022792C: jal         0x8009A3B4
    // 0x80227930: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80227930: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80227934: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80227938: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022793C: jal         0x8009A3B4
    // 0x80227940: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80227940: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80227944: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80227948: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022794C: jal         0x8009A3B4
    // 0x80227950: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80227950: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80227954: jal         0x8005044C
    // 0x80227958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80227958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8022795C:
    // 0x8022795C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227960: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227964: jr          $ra
    // 0x80227968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022796C: nop

;}
RECOMP_FUNC void func_802259D8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802259DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802259E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802259E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802259E8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802259EC: bne         $v0, $zero, L_80225A30
    if (ctx->r2 != 0) {
        // 0x802259F0: nop
    
            goto L_80225A30;
    }
    // 0x802259F0: nop

    // 0x802259F4: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    // 0x802259F8: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x802259FC: addiu       $s0, $s0, -0x5AA0
    ctx->r16 = ADD32(ctx->r16, -0X5AA0);
    // 0x80225A00: jal         0x8004F418
    // 0x80225A04: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80225A04: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_0:
    // 0x80225A08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A0C: sb          $zero, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = 0;
L_80225A10:
    // 0x80225A10: jal         0x8005FA7C
    // 0x80225A14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80225A14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80225A18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80225A1C: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80225A20: bne         $v0, $zero, L_80225A10
    if (ctx->r2 != 0) {
        // 0x80225A24: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_80225A10;
    }
    // 0x80225A24: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80225A28: jal         0x80225D50
    // 0x80225A2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80225D50_ovl11(rdram, ctx);
        goto after_2;
    // 0x80225A2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
L_80225A30:
    // 0x80225A30: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225A34: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225A38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A3C: jr          $ra
    // 0x80225A40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225A40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229070_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229074: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229078: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8022907C: bne         $v0, $zero, L_8022909C
    if (ctx->r2 != 0) {
        // 0x80229080: nop
    
            goto L_8022909C;
    }
    // 0x80229080: nop

    // 0x80229084: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80229088: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022908C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229090: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229094: j           L_802290B0
    // 0x80229098: lw          $v0, -0x49F0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X49F0);
        goto L_802290B0;
    // 0x80229098: lw          $v0, -0x49F0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X49F0);
L_8022909C:
    // 0x8022909C: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802290A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802290A4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802290A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802290AC: lw          $v0, -0x49E8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X49E8);
L_802290B0:
    // 0x802290B0: jalr        $v0
    // 0x802290B4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802290B4: nop

    after_0:
    // 0x802290B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802290BC: jr          $ra
    // 0x802290C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802290C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228268_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228268: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022826C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228270: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228274: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228278: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022827C: bne         $v0, $zero, L_80228298
    if (ctx->r2 != 0) {
        // 0x80228280: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80228298;
    }
    // 0x80228280: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80228284: jal         0x80050294
    // 0x80228288: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228288: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022828C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228290: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228294: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228298:
    // 0x80228298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022829C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802282A0: jr          $ra
    // 0x802282A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802282A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022918C_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022918C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229190: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80229194: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80229198: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8022919C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802291A0: bne         $v1, $v0, L_802291B4
    if (ctx->r3 != ctx->r2) {
        // 0x802291A4: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_802291B4;
    }
    // 0x802291A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802291A8: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x802291AC: j           L_802291BC
    // 0x802291B0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
        goto L_802291BC;
    // 0x802291B0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_802291B4:
    // 0x802291B4: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x802291B8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_802291BC:
    // 0x802291BC: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x802291C0: lb          $v1, 0xE($a3)
    ctx->r3 = MEM_B(ctx->r7, 0XE);
    // 0x802291C4: blez        $v1, L_8022928C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802291C8: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022928C;
    }
    // 0x802291C8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802291CC: beq         $v1, $v0, L_802291F8
    if (ctx->r3 == ctx->r2) {
        // 0x802291D0: slti        $v0, $v1, 0xB
        ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
            goto L_802291F8;
    }
    // 0x802291D0: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x802291D4: beq         $v0, $zero, L_802291EC
    if (ctx->r2 == 0) {
        // 0x802291D8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802291EC;
    }
    // 0x802291D8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802291DC: beq         $v1, $v0, L_802291F8
    if (ctx->r3 == ctx->r2) {
        // 0x802291E0: nop
    
            goto L_802291F8;
    }
    // 0x802291E0: nop

    // 0x802291E4: j           L_80229204
    // 0x802291E8: nop

        goto L_80229204;
    // 0x802291E8: nop

L_802291EC:
    // 0x802291EC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802291F0: bne         $v1, $v0, L_80229204
    if (ctx->r3 != ctx->r2) {
        // 0x802291F4: nop
    
            goto L_80229204;
    }
    // 0x802291F4: nop

L_802291F8:
    // 0x802291F8: lbu         $v0, 0x22($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X22);
    // 0x802291FC: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80229200: sb          $v0, 0x22($a3)
    MEM_B(0X22, ctx->r7) = ctx->r2;
L_80229204:
    // 0x80229204: lbu         $a0, 0xE($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XE);
    // 0x80229208: lui         $v1, 0x5555
    ctx->r3 = S32(0X5555 << 16);
    // 0x8022920C: ori         $v1, $v1, 0x5556
    ctx->r3 = ctx->r3 | 0X5556;
    // 0x80229210: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80229214: sra         $v0, $a0, 24
    ctx->r2 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80229218: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022921C: lui         $a2, 0x2AAA
    ctx->r6 = S32(0X2AAA << 16);
    // 0x80229220: lbu         $v1, 0xE($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0XE);
    // 0x80229224: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x80229228: lbu         $v0, 0xE($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0XE);
    // 0x8022922C: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80229230: sra         $a1, $v1, 24
    ctx->r5 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80229234: mfhi        $t0
    ctx->r8 = hi;
    // 0x80229238: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022923C: sb          $v0, 0xE($a3)
    MEM_B(0XE, ctx->r7) = ctx->r2;
    // 0x80229240: mult        $a1, $a2
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229244: lhu         $v0, 0x1E($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X1E);
    // 0x80229248: sra         $a0, $a0, 31
    ctx->r4 = S32(SIGNED(ctx->r4) >> 31);
    // 0x8022924C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80229250: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229254: subu        $a0, $t0, $a0
    ctx->r4 = SUB32(ctx->r8, ctx->r4);
    // 0x80229258: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8022925C: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80229260: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80229264: sh          $v0, 0x1E($a3)
    MEM_H(0X1E, ctx->r7) = ctx->r2;
    // 0x80229268: mfhi        $a1
    ctx->r5 = hi;
    // 0x8022926C: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x80229270: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80229274: lhu         $a1, 0x24($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X24);
    // 0x80229278: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8022927C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229280: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80229284: j           L_80229294
    // 0x80229288: sh          $a1, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r5;
        goto L_80229294;
    // 0x80229288: sh          $a1, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r5;
L_8022928C:
    // 0x8022928C: jal         0x8004F5C4
    // 0x80229290: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80229290: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    after_0:
L_80229294:
    // 0x80229294: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229298: jr          $ra
    // 0x8022929C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022929C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229050_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229050: lhu         $v0, 0xC($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC);
    // 0x80229054: lhu         $v1, 0xE($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XE);
    // 0x80229058: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8022905C: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x80229060: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
    // 0x80229064: jr          $ra
    // 0x80229068: sh          $v1, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80229068: sh          $v1, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r3;
    // 0x8022906C: nop

;}
RECOMP_FUNC void func_802295D8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802295D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802295DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802295E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802295E4: jal         0x8004F144
    // 0x802295E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802295E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802295EC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802295F0: bne         $a1, $zero, L_80229600
    if (ctx->r5 != 0) {
        // 0x802295F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229600;
    }
    // 0x802295F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802295F8: j           L_8022963C
    // 0x802295FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022963C;
    // 0x802295FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80229600:
    // 0x80229600: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80229604: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80229608: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022960C: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80229610: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80229614: lbu         $v1, 0x6($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X6);
    // 0x80229618: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x8022961C: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80229620: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80229624: lhu         $a0, 0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4);
    // 0x80229628: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8022962C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x80229630: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80229634: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    // 0x80229638: sh          $a0, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r4;
L_8022963C:
    // 0x8022963C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229640: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229644: jr          $ra
    // 0x80229648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802283D0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802283D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802283D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802283D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802283DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802283E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802283E4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802283E8: bne         $v0, $zero, L_8022846C
    if (ctx->r2 != 0) {
        // 0x802283EC: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022846C;
    }
    // 0x802283EC: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802283F0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802283F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802283F8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802283FC: jal         0x8004D5D4
    // 0x80228400: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228400: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228404: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228408: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022840C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80228410: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80228414: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80228418: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022841C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228420: jal         0x8003E934
    // 0x80228424: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80228424: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x80228428: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022842C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80228430: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228434: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228438: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022843C: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80228440: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228444: jal         0x80050294
    // 0x80228448: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80228448: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022844C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228450: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228454: jal         0x80228560
    // 0x80228458: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80228560_ovl11(rdram, ctx);
        goto after_3;
    // 0x80228458: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022845C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228460: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228464: j           L_80228540
    // 0x80228468: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80228540;
    // 0x80228468: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022846C:
    // 0x8022846C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80228470: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228474: jal         0x8009A3B4
    // 0x80228478: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80228478: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022847C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80228480: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80228484: jal         0x8009A3B4
    // 0x80228488: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80228488: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8022848C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80228490: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80228494: jal         0x8009A3B4
    // 0x80228498: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80228498: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022849C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802284A0: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x802284A4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802284A8: bne         $v1, $v0, L_80228538
    if (ctx->r3 != ctx->r2) {
        // 0x802284AC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80228538;
    }
    // 0x802284AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802284B0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802284B4: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x802284B8: bne         $v1, $a0, L_802284F8
    if (ctx->r3 != ctx->r4) {
        // 0x802284BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802284F8;
    }
    // 0x802284BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802284C0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802284C4: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802284C8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802284CC: bne         $v1, $v0, L_802284E4
    if (ctx->r3 != ctx->r2) {
        // 0x802284D0: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_802284E4;
    }
    // 0x802284D0: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x802284D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802284D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802284DC: j           L_80228530
    // 0x802284E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_80228530;
    // 0x802284E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_802284E4:
    // 0x802284E4: bne         $v1, $v0, L_80228538
    if (ctx->r3 != ctx->r2) {
        // 0x802284E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228538;
    }
    // 0x802284E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802284EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802284F0: j           L_80228530
    // 0x802284F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80228530;
    // 0x802284F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_802284F8:
    // 0x802284F8: bne         $v1, $v0, L_80228538
    if (ctx->r3 != ctx->r2) {
        // 0x802284FC: nop
    
            goto L_80228538;
    }
    // 0x802284FC: nop

    // 0x80228500: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228504: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80228508: bne         $v1, $a0, L_80228520
    if (ctx->r3 != ctx->r4) {
        // 0x8022850C: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80228520;
    }
    // 0x8022850C: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80228510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228514: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228518: j           L_80228530
    // 0x8022851C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_80228530;
    // 0x8022851C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_80228520:
    // 0x80228520: bne         $v1, $v0, L_80228538
    if (ctx->r3 != ctx->r2) {
        // 0x80228524: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228538;
    }
    // 0x80228524: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228528: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022852C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80228530:
    // 0x80228530: jal         0x80228560
    // 0x80228534: nop

    func_80228560_ovl11(rdram, ctx);
        goto after_7;
    // 0x80228534: nop

    after_7:
L_80228538:
    // 0x80228538: jal         0x8005044C
    // 0x8022853C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x8022853C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_80228540:
    // 0x80228540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228544: jal         0x802285A4
    // 0x80228548: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802285A4_ovl11(rdram, ctx);
        goto after_9;
    // 0x80228548: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8022854C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228550: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228554: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228558: jr          $ra
    // 0x8022855C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022855C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228C90_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228C94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228C98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228C9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228CA0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228CA4: bne         $v0, $zero, L_80228CC0
    if (ctx->r2 != 0) {
        // 0x80228CA8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80228CC0;
    }
    // 0x80228CA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228CAC: jal         0x80050294
    // 0x80228CB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228CB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228CB4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228CB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228CBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228CC0:
    // 0x80228CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228CC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228CC8: jr          $ra
    // 0x80228CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227EE8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227EEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227EF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227EF4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80227EF8: lw          $a0, -0x4640($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4640);
    // 0x80227EFC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227F00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227F04: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80227F08: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80227F0C: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x80227F10: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227F14: beq         $v1, $v0, L_80227FA8
    if (ctx->r3 == ctx->r2) {
        // 0x80227F18: nop
    
            goto L_80227FA8;
    }
    // 0x80227F18: nop

    // 0x80227F1C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80227F20: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80227F24: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x80227F28: bne         $v1, $v0, L_80227FA8
    if (ctx->r3 != ctx->r2) {
        // 0x80227F2C: nop
    
            goto L_80227FA8;
    }
    // 0x80227F2C: nop

    // 0x80227F30: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80227F34: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80227F38: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x80227F3C: bne         $v1, $v0, L_80227FA8
    if (ctx->r3 != ctx->r2) {
        // 0x80227F40: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80227FA8;
    }
    // 0x80227F40: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80227F44: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80227F48: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227F4C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227F50: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227F54: lw          $v0, -0x4EF4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4EF4);
    // 0x80227F58: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227F5C: sw          $v0, -0x4650($at)
    MEM_W(-0X4650, ctx->r1) = ctx->r2;
    // 0x80227F60: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227F64: lw          $v0, -0x4650($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4650);
    // 0x80227F68: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227F6C: sh          $zero, -0x464C($at)
    MEM_H(-0X464C, ctx->r1) = 0;
    // 0x80227F70: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80227F74: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80227F78: jal         0x8003B85C
    // 0x80227F7C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80227F7C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80227F80: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80227F84: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x80227F88: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x80227F8C: jal         0x8003B840
    // 0x80227F90: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80227F90: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80227F94: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227F98: lw          $v0, -0x4640($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4640);
    // 0x80227F9C: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80227FA0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227FA4: sw          $v0, -0x4640($at)
    MEM_W(-0X4640, ctx->r1) = ctx->r2;
L_80227FA8:
    // 0x80227FA8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80227FAC: lw          $a0, -0x463C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X463C);
    // 0x80227FB0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80227FB4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227FB8: beq         $v1, $v0, L_80228044
    if (ctx->r3 == ctx->r2) {
        // 0x80227FBC: nop
    
            goto L_80228044;
    }
    // 0x80227FBC: nop

    // 0x80227FC0: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80227FC4: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80227FC8: bne         $v1, $v0, L_80228044
    if (ctx->r3 != ctx->r2) {
        // 0x80227FCC: nop
    
            goto L_80228044;
    }
    // 0x80227FCC: nop

    // 0x80227FD0: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80227FD4: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80227FD8: bne         $v1, $v0, L_80228044
    if (ctx->r3 != ctx->r2) {
        // 0x80227FDC: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80228044;
    }
    // 0x80227FDC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80227FE0: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80227FE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227FE8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227FEC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227FF0: lw          $v0, -0x4E20($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4E20);
    // 0x80227FF4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227FF8: sw          $v0, -0x4648($at)
    MEM_W(-0X4648, ctx->r1) = ctx->r2;
    // 0x80227FFC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228000: lw          $v0, -0x4648($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4648);
    // 0x80228004: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228008: sh          $zero, -0x4644($at)
    MEM_H(-0X4644, ctx->r1) = 0;
    // 0x8022800C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80228010: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80228014: jal         0x8003B85C
    // 0x80228018: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80228018: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x8022801C: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80228020: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x80228024: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x80228028: jal         0x8003B840
    // 0x8022802C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022802C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80228030: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228034: lw          $v0, -0x463C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X463C);
    // 0x80228038: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8022803C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228040: sw          $v0, -0x463C($at)
    MEM_W(-0X463C, ctx->r1) = ctx->r2;
L_80228044:
    // 0x80228044: jal         0x80227D70
    // 0x80228048: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227D70_ovl11(rdram, ctx);
        goto after_4;
    // 0x80228048: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022804C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228050: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228054: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228058: jr          $ra
    // 0x8022805C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022805C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228228_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022822C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228230: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228238: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022823C: bne         $v0, $zero, L_80228258
    if (ctx->r2 != 0) {
        // 0x80228240: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80228258;
    }
    // 0x80228240: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228244: jal         0x80050294
    // 0x80228248: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228248: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022824C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228250: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228254: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228258:
    // 0x80228258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022825C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228260: jr          $ra
    // 0x80228264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228328_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022832C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228330: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228338: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022833C: bne         $v0, $zero, L_80228358
    if (ctx->r2 != 0) {
        // 0x80228340: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_80228358;
    }
    // 0x80228340: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80228344: jal         0x80050294
    // 0x80228348: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228348: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022834C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228350: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228354: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228358:
    // 0x80228358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022835C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228360: jr          $ra
    // 0x80228364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227128_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227128: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022712C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80227130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227134: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227138: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022713C: slti        $v0, $v1, 0x14
    ctx->r2 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
    // 0x80227140: beq         $v0, $zero, L_8022716C
    if (ctx->r2 == 0) {
        // 0x80227144: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022716C;
    }
    // 0x80227144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227148: lui         $v0, 0xFFFC
    ctx->r2 = S32(0XFFFC << 16);
    // 0x8022714C: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x80227150: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x80227154: ori         $v0, $v0, 0x6A7F
    ctx->r2 = ctx->r2 | 0X6A7F;
    // 0x80227158: addiu       $v1, $v1, -0x3
    ctx->r3 = ADD32(ctx->r3, -0X3);
    // 0x8022715C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80227160: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x80227164: j           L_802271AC
    // 0x80227168: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
        goto L_802271AC;
    // 0x80227168: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
L_8022716C:
    // 0x8022716C: slti        $v0, $v1, 0x28
    ctx->r2 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
    // 0x80227170: beq         $v0, $zero, L_802271AC
    if (ctx->r2 == 0) {
        // 0x80227174: lui         $a2, 0x1
        ctx->r6 = S32(0X1 << 16);
            goto L_802271AC;
    }
    // 0x80227174: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x80227178: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022717C: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x80227180: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80227184: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x80227188: ori         $a2, $a2, 0x9581
    ctx->r6 = ctx->r6 | 0X9581;
    // 0x8022718C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227190: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80227194: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80227198: subu        $a1, $a1, $a2
    ctx->r5 = SUB32(ctx->r5, ctx->r6);
    // 0x8022719C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802271A0: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x802271A4: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x802271A8: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
L_802271AC:
    // 0x802271AC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802271B0: bne         $v0, $zero, L_802271D4
    if (ctx->r2 != 0) {
        // 0x802271B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802271D4;
    }
    // 0x802271B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802271B8: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x802271BC: jal         0x80050294
    // 0x802271C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802271C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802271C4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802271C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802271CC: j           L_802271DC
    // 0x802271D0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802271DC;
    // 0x802271D0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802271D4:
    // 0x802271D4: jal         0x8005044C
    // 0x802271D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802271D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802271DC:
    // 0x802271DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802271E0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x802271E4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802271E8: jal         0x8003B564
    // 0x802271EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_2;
    // 0x802271EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x802271F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802271F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802271F8: jr          $ra
    // 0x802271FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802271FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225460_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225464: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225468: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022546C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225470: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80225474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225478: beq         $v1, $v0, L_80225580
    if (ctx->r3 == ctx->r2) {
        // 0x8022547C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225580;
    }
    // 0x8022547C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225480: beql        $v0, $zero, L_80225498
    if (ctx->r2 == 0) {
        // 0x80225484: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225498;
    }
    goto skip_0;
    // 0x80225484: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225488: beq         $v1, $zero, L_802254A8
    if (ctx->r3 == 0) {
        // 0x8022548C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802254A8;
    }
    // 0x8022548C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225490: j           L_80225624
    // 0x80225494: nop

        goto L_80225624;
    // 0x80225494: nop

L_80225498:
    // 0x80225498: beq         $v1, $v0, L_802255B0
    if (ctx->r3 == ctx->r2) {
        // 0x8022549C: nop
    
            goto L_802255B0;
    }
    // 0x8022549C: nop

    // 0x802254A0: j           L_80225624
    // 0x802254A4: nop

        goto L_80225624;
    // 0x802254A4: nop

L_802254A8:
    // 0x802254A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802254AC: jal         0x8005F6B4
    // 0x802254B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_0;
    // 0x802254B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802254B4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802254B8: addiu       $a0, $a0, -0x5AB4
    ctx->r4 = ADD32(ctx->r4, -0X5AB4);
    // 0x802254BC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802254C0: addiu       $v0, $v0, -0x5870
    ctx->r2 = ADD32(ctx->r2, -0X5870);
    // 0x802254C4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802254C8: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802254CC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802254D0: addiu       $v0, $v0, -0x5824
    ctx->r2 = ADD32(ctx->r2, -0X5824);
    // 0x802254D4: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x802254D8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802254DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802254E0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802254E4: jal         0x8005FA7C
    // 0x802254E8: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x802254E8: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_1:
    // 0x802254EC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x802254F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_802254F4:
    // 0x802254F4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802254F8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802254FC: lbu         $v0, -0x551C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X551C);
    // 0x80225500: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225504: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225508: sb          $v0, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r2;
    // 0x8022550C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225510: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225514: lhu         $v0, -0x5518($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X5518);
    // 0x80225518: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022551C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225520: sh          $v0, 0x4450($at)
    MEM_H(0X4450, ctx->r1) = ctx->r2;
    // 0x80225524: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225528: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022552C: lhu         $v0, -0x5516($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X5516);
    // 0x80225530: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225534: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225538: sh          $v0, 0x4452($at)
    MEM_H(0X4452, ctx->r1) = ctx->r2;
    // 0x8022553C: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
    // 0x80225540: slti        $v0, $v1, 0x1C0
    ctx->r2 = SIGNED(ctx->r3) < 0X1C0 ? 1 : 0;
    // 0x80225544: bne         $v0, $zero, L_802254F4
    if (ctx->r2 != 0) {
        // 0x80225548: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_802254F4;
    }
    // 0x80225548: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8022554C: lui         $a0, 0x108
    ctx->r4 = S32(0X108 << 16);
    // 0x80225550: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80225554: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225558: sh          $v0, 0x45C6($at)
    MEM_H(0X45C6, ctx->r1) = ctx->r2;
    // 0x8022555C: lui         $v0, 0xF0
    ctx->r2 = S32(0XF0 << 16);
    // 0x80225560: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225564: sw          $v0, 0x45C0($at)
    MEM_W(0X45C0, ctx->r1) = ctx->r2;
    // 0x80225568: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022556C: sw          $zero, -0x4660($at)
    MEM_W(-0X4660, ctx->r1) = 0;
    // 0x80225570: jal         0x80036B1C
    // 0x80225574: ori         $a0, $a0, 0x2900
    ctx->r4 = ctx->r4 | 0X2900;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_2;
    // 0x80225574: ori         $a0, $a0, 0x2900
    ctx->r4 = ctx->r4 | 0X2900;
    after_2:
    // 0x80225578: j           L_802255A0
    // 0x8022557C: nop

        goto L_802255A0;
    // 0x8022557C: nop

L_80225580:
    // 0x80225580: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80225584: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225588: jalr        $v0
    // 0x8022558C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022558C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80225590: jal         0x80036B7C
    // 0x80225594: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_4;
    // 0x80225594: nop

    after_4:
    // 0x80225598: beq         $v0, $zero, L_80225624
    if (ctx->r2 == 0) {
        // 0x8022559C: nop
    
            goto L_80225624;
    }
    // 0x8022559C: nop

L_802255A0:
    // 0x802255A0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802255A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802255A8: j           L_80225624
    // 0x802255AC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80225624;
    // 0x802255AC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_802255B0:
    // 0x802255B0: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802255B4: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802255B8: jalr        $v0
    // 0x802255BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x802255BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802255C0: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x802255C4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802255C8: bne         $v1, $v0, L_802255E0
    if (ctx->r3 != ctx->r2) {
        // 0x802255CC: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_802255E0;
    }
    // 0x802255CC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802255D0: jal         0x80036E48
    // 0x802255D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x802255D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_6:
    // 0x802255D8: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x802255DC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_802255E0:
    // 0x802255E0: bne         $v1, $v0, L_80225618
    if (ctx->r3 != ctx->r2) {
        // 0x802255E4: nop
    
            goto L_80225618;
    }
    // 0x802255E4: nop

    // 0x802255E8: jal         0x80060170
    // 0x802255EC: nop

    func_80060170_3B570(rdram, ctx);
        goto after_7;
    // 0x802255EC: nop

    after_7:
    // 0x802255F0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802255F4: addiu       $v0, $v0, -0x5814
    ctx->r2 = ADD32(ctx->r2, -0X5814);
    // 0x802255F8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802255FC: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225600: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225604: addiu       $v0, $v0, -0x556C
    ctx->r2 = ADD32(ctx->r2, -0X556C);
    // 0x80225608: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x8022560C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225610: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80225614: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
L_80225618:
    // 0x80225618: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022561C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225620: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80225624:
    // 0x80225624: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80225628: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8022562C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80225630: beq         $v0, $zero, L_80225644
    if (ctx->r2 == 0) {
        // 0x80225634: nop
    
            goto L_80225644;
    }
    // 0x80225634: nop

    // 0x80225638: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022563C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80225640: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225644:
    // 0x80225644: jal         0x8005FB90
    // 0x80225648: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_8;
    // 0x80225648: nop

    after_8:
    // 0x8022564C: jal         0x80060018
    // 0x80225650: nop

    func_80060018_3B418(rdram, ctx);
        goto after_9;
    // 0x80225650: nop

    after_9:
    // 0x80225654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225658: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022565C: jr          $ra
    // 0x80225660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228D10_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228D10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228D14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228D18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228D1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228D20: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228D24: bne         $v0, $zero, L_80228D40
    if (ctx->r2 != 0) {
        // 0x80228D28: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_80228D40;
    }
    // 0x80228D28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80228D2C: jal         0x80050294
    // 0x80228D30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228D30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228D34: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228D38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228D3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228D40:
    // 0x80228D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228D44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228D48: jr          $ra
    // 0x80228D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226548_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226548: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022654C: bne         $v0, $zero, L_80226560
    if (ctx->r2 != 0) {
        // 0x80226550: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80226560;
    }
    // 0x80226550: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226554: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226558: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022655C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226560:
    // 0x80226560: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226564: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226568: bne         $v1, $v0, L_8022657C
    if (ctx->r3 != ctx->r2) {
        // 0x8022656C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022657C;
    }
    // 0x8022656C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226570: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226574: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226578: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_8022657C:
    // 0x8022657C: jr          $ra
    // 0x80226580: nop

    TRACE_RETURN()
    return;
    // 0x80226580: nop

;}
RECOMP_FUNC void func_80228368_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022836C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228370: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228378: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022837C: bne         $v0, $zero, L_80228398
    if (ctx->r2 != 0) {
        // 0x80228380: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_80228398;
    }
    // 0x80228380: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80228384: jal         0x80050294
    // 0x80228388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022838C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228390: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228394: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228398:
    // 0x80228398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022839C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802283A0: jr          $ra
    // 0x802283A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802283A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227868_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022786C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227870: jal         0x8004F418
    // 0x80227874: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80227874: nop

    after_0:
    // 0x80227878: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022787C: jr          $ra
    // 0x80227880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80227884: nop

    // 0x80227888: nop

    // 0x8022788C: nop

;}
RECOMP_FUNC void func_802273D0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802273D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802273D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802273D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802273DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802273E0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802273E4: bne         $v0, $zero, L_80227408
    if (ctx->r2 != 0) {
        // 0x802273E8: nop
    
            goto L_80227408;
    }
    // 0x802273E8: nop

    // 0x802273EC: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x802273F0: jal         0x80050294
    // 0x802273F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802273F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802273F8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802273FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227400: j           L_80227484
    // 0x80227404: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227484;
    // 0x80227404: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227408:
    // 0x80227408: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022740C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80227410: slti        $v0, $v1, 0x51
    ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
    // 0x80227414: bne         $v0, $zero, L_8022747C
    if (ctx->r2 != 0) {
        // 0x80227418: slti        $v0, $v1, 0x7D
        ctx->r2 = SIGNED(ctx->r3) < 0X7D ? 1 : 0;
            goto L_8022747C;
    }
    // 0x80227418: slti        $v0, $v1, 0x7D
    ctx->r2 = SIGNED(ctx->r3) < 0X7D ? 1 : 0;
    // 0x8022741C: beq         $v0, $zero, L_8022743C
    if (ctx->r2 == 0) {
        // 0x80227420: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022743C;
    }
    // 0x80227420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227424: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80227428: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022742C: jal         0x8004DA90
    // 0x80227430: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80227430: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80227434: j           L_8022747C
    // 0x80227438: nop

        goto L_8022747C;
    // 0x80227438: nop

L_8022743C:
    // 0x8022743C: slti        $v0, $v1, 0x8B
    ctx->r2 = SIGNED(ctx->r3) < 0X8B ? 1 : 0;
    // 0x80227440: beq         $v0, $zero, L_8022747C
    if (ctx->r2 == 0) {
        // 0x80227444: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_8022747C;
    }
    // 0x80227444: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80227448: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022744C: jal         0x8004DA90
    // 0x80227450: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80227450: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80227454: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227458: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022745C: addiu       $v0, $zero, 0x7D
    ctx->r2 = ADD32(0, 0X7D);
    // 0x80227460: bne         $v1, $v0, L_8022747C
    if (ctx->r3 != ctx->r2) {
        // 0x80227464: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022747C;
    }
    // 0x80227464: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227468: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x8022746C: jal         0x80050294
    // 0x80227470: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80227470: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80227474: j           L_80227488
    // 0x80227478: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80227488;
    // 0x80227478: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022747C:
    // 0x8022747C: jal         0x8005044C
    // 0x80227480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80227480: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80227484:
    // 0x80227484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227488:
    // 0x80227488: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022748C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80227490: jal         0x8003B564
    // 0x80227494: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_5;
    // 0x80227494: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x80227498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022749C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802274A0: jr          $ra
    // 0x802274A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802274A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226490_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226490: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226494: bne         $v0, $zero, L_802264A8
    if (ctx->r2 != 0) {
        // 0x80226498: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802264A8;
    }
    // 0x80226498: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022649C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802264A0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802264A4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802264A8:
    // 0x802264A8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802264AC: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x802264B0: bne         $v1, $v0, L_802264C4
    if (ctx->r3 != ctx->r2) {
        // 0x802264B4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802264C4;
    }
    // 0x802264B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802264B8: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802264BC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802264C0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802264C4:
    // 0x802264C4: jr          $ra
    // 0x802264C8: nop

    TRACE_RETURN()
    return;
    // 0x802264C8: nop

;}
RECOMP_FUNC void func_802251B4_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251B4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802251B8: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x802251BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251C4: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802251C8: beq         $v0, $zero, L_802251EC
    if (ctx->r2 == 0) {
        // 0x802251CC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251EC;
    }
    // 0x802251CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251D4: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251D8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802251DC: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802251E0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802251E4: j           L_802251F4
    // 0x802251E8: lw          $a1, -0x5B40($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5B40);
        goto L_802251F4;
    // 0x802251E8: lw          $a1, -0x5B40($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5B40);
L_802251EC:
    // 0x802251EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251F4:
    // 0x802251F4: jal         0x80037D80
    // 0x802251F8: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251F8: nop

    after_0:
    // 0x802251FC: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80225200: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x80225204: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225208: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022520C: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x80225210: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80225214: addiu       $a2, $a2, 0xCB4
    ctx->r6 = ADD32(ctx->r6, 0XCB4);
    // 0x80225218: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x8022521C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80225220: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80225224: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80225228: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022522C: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x80225230: lw          $a0, -0x5E70($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5E70);
    // 0x80225234: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225238: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x8022523C: lbu         $a3, 0x3($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3);
    // 0x80225240: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225244: sh          $a3, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r7;
    // 0x80225248: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8022524C: lui         $t1, 0x7FE9
    ctx->r9 = S32(0X7FE9 << 16);
    // 0x80225250: ori         $t1, $t1, 0xC000
    ctx->r9 = ctx->r9 | 0XC000;
    // 0x80225254: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225258: sb          $t0, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r8;
    // 0x8022525C: lbu         $t2, 0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1);
    // 0x80225260: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225264: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x80225268: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8022526C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225270: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225274: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
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
    // 0x80225294: addu        $a3, $a3, $t2
    ctx->r7 = ADD32(ctx->r7, ctx->r10);
    // 0x80225298: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022529C: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x802252A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252A4: sb          $t2, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r10;
    // 0x802252A8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252AC: sb          $a3, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r7;
    // 0x802252B0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252B4: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x802252B8: lw          $v0, -0x5E38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5E38);
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
    // 0x802252D0: addiu       $a0, $a0, -0x5DB8
    ctx->r4 = ADD32(ctx->r4, -0X5DB8);
    // 0x802252D4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252DC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252E0: lw          $v1, -0x5B78($at)
    ctx->r3 = MEM_W(ctx->r1, -0X5B78);
    // 0x802252E4: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252E8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252EC: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252F0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252F4: addiu       $v0, $v0, -0x5E18
    ctx->r2 = ADD32(ctx->r2, -0X5E18);
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

    func_80225330_ovl11(rdram, ctx);
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
RECOMP_FUNC void func_80226DC8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226DC8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226DCC: bne         $v0, $zero, L_80226DE0
    if (ctx->r2 != 0) {
        // 0x80226DD0: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80226DE0;
    }
    // 0x80226DD0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226DD4: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226DD8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226DDC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226DE0:
    // 0x80226DE0: jr          $ra
    // 0x80226DE4: nop

    TRACE_RETURN()
    return;
    // 0x80226DE4: nop

;}
RECOMP_FUNC void func_80229430_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229434: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229438: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022943C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229440: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229444: bne         $v0, $zero, L_80229478
    if (ctx->r2 != 0) {
        // 0x80229448: addiu       $v1, $zero, 0x20
        ctx->r3 = ADD32(0, 0X20);
            goto L_80229478;
    }
    // 0x80229448: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8022944C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80229450: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229454: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80229458: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022945C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80229460: bne         $v0, $v1, L_8022949C
    if (ctx->r2 != ctx->r3) {
        // 0x80229464: nop
    
            goto L_8022949C;
    }
    // 0x80229464: nop

    // 0x80229468: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022946C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229470: j           L_8022949C
    // 0x80229474: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022949C;
    // 0x80229474: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229478:
    // 0x80229478: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022947C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229480: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80229484: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80229488: bne         $v0, $zero, L_8022949C
    if (ctx->r2 != 0) {
        // 0x8022948C: nop
    
            goto L_8022949C;
    }
    // 0x8022948C: nop

    // 0x80229490: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80229494: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229498: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022949C:
    // 0x8022949C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802294A0: ldc1        $f0, -0x4680($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X4680);
    // 0x802294A4: lwc1        $f2, 0x30($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X30);
    // 0x802294A8: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x802294AC: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802294B0: cvt.d.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.d = CVT_D_W(ctx->f4.u32l);
    // 0x802294B4: lh          $v0, 0x3C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C);
    // 0x802294B8: lhu         $a0, 0x3E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3E);
    // 0x802294BC: sub.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d - ctx->f0.d;
    // 0x802294C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802294C4: ldc1        $f0, -0x4678($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X4678);
    // 0x802294C8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802294CC: ldc1        $f6, -0x4670($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X4670);
    // 0x802294D0: addiu       $a0, $a0, 0x89
    ctx->r4 = ADD32(ctx->r4, 0X89);
    // 0x802294D4: add.d       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f4.d + ctx->f0.d;
    // 0x802294D8: sh          $a0, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r4;
    // 0x802294DC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802294E0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x802294E4: nop

    // 0x802294E8: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x802294EC: add.d       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f0.d + ctx->f6.d;
    // 0x802294F0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802294F4: trunc.w.d   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x802294F8: swc1        $f6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f6.u32l;
    // 0x802294FC: trunc.w.d   $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x80229500: swc1        $f2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f2.u32l;
    // 0x80229504: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80229508: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x8022950C: nop

    // 0x80229510: jal         0x800324B4
    // 0x80229514: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80229514: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229518: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022951C: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x80229520: lh          $a1, 0x30($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X30);
    // 0x80229524: lh          $a2, 0x34($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34);
    // 0x80229528: lh          $a3, 0x38($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X38);
    // 0x8022952C: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x80229530: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229534: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80229538: sll         $v0, $a0, 8
    ctx->r2 = S32(ctx->r4 << 8);
    // 0x8022953C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229540: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80229544: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229548: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x8022954C: lhu         $v1, 0x3C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3C);
    // 0x80229550: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x80229554: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229558: sh          $a1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r5;
    // 0x8022955C: sh          $a2, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r6;
    // 0x80229560: sh          $a3, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r7;
    // 0x80229564: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80229568: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022956C: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80229570: sh          $v1, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r3;
    // 0x80229574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229578: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022957C: jr          $ra
    // 0x80229580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802296E4_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802296E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802296E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802296EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802296F0: jal         0x800A3450
    // 0x802296F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x802296F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802296F8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802296FC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80229700: addiu       $v0, $v0, 0x1E
    ctx->r2 = ADD32(ctx->r2, 0X1E);
    // 0x80229704: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80229708: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022970C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80229710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229714: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229718: jr          $ra
    // 0x8022971C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022971C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225864_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225864: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80225868: lw          $v1, -0x4660($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4660);
    // 0x8022586C: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x80225870: bne         $v1, $v0, L_80225898
    if (ctx->r3 != ctx->r2) {
        // 0x80225874: nop
    
            goto L_80225898;
    }
    // 0x80225874: nop

    // 0x80225878: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022587C: sb          $zero, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = 0;
    // 0x80225880: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225884: sb          $zero, 0x4510($at)
    MEM_B(0X4510, ctx->r1) = 0;
    // 0x80225888: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022588C: sb          $zero, 0x4548($at)
    MEM_B(0X4548, ctx->r1) = 0;
    // 0x80225890: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225894: sb          $zero, 0x4580($at)
    MEM_B(0X4580, ctx->r1) = 0;
L_80225898:
    // 0x80225898: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022589C: lw          $v0, -0x4660($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4660);
    // 0x802258A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802258A4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802258A8: jr          $ra
    // 0x802258AC: sw          $v0, -0x4660($at)
    MEM_W(-0X4660, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802258AC: sw          $v0, -0x4660($at)
    MEM_W(-0X4660, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8022757C_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022757C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227580: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227584: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80227588: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022758C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227590: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227594: lw          $v0, -0x4F5C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4F5C);
    // 0x80227598: jalr        $v0
    // 0x8022759C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022759C: nop

    after_0:
    // 0x802275A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802275A4: jr          $ra
    // 0x802275A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802275A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225D48_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D48: jr          $ra
    // 0x80225D4C: nop

    TRACE_RETURN()
    return;
    // 0x80225D4C: nop

;}
RECOMP_FUNC void func_802270B4_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802270B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802270B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802270BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802270C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802270C4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802270C8: bne         $v0, $zero, L_802270EC
    if (ctx->r2 != 0) {
        // 0x802270CC: nop
    
            goto L_802270EC;
    }
    // 0x802270CC: nop

    // 0x802270D0: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x802270D4: jal         0x80050294
    // 0x802270D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802270D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802270DC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802270E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802270E4: j           L_802270F4
    // 0x802270E8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802270F4;
    // 0x802270E8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802270EC:
    // 0x802270EC: jal         0x8005044C
    // 0x802270F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802270F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802270F4:
    // 0x802270F4: lh          $v1, 0x158($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X158);
    // 0x802270F8: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802270FC: bne         $v1, $v0, L_80227108
    if (ctx->r3 != ctx->r2) {
        // 0x80227100: addiu       $a1, $zero, 0x28
        ctx->r5 = ADD32(0, 0X28);
            goto L_80227108;
    }
    // 0x80227100: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80227104: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
L_80227108:
    // 0x80227108: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022710C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80227110: jal         0x8003B564
    // 0x80227114: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_2;
    // 0x80227114: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80227118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022711C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227120: jr          $ra
    // 0x80227124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228BD0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228BD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228BD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228BD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228BDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228BE0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228BE4: bne         $v0, $zero, L_80228C00
    if (ctx->r2 != 0) {
        // 0x80228BE8: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_80228C00;
    }
    // 0x80228BE8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80228BEC: jal         0x80050294
    // 0x80228BF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228BF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228BF4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228BF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228BFC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228C00:
    // 0x80228C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228C04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228C08: jr          $ra
    // 0x80228C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225388_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225388: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022538C: lb          $v0, -0x3B96($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3B96);
    // 0x80225390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225394: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225398: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022539C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802253A0: beq         $v0, $zero, L_802253C8
    if (ctx->r2 == 0) {
        // 0x802253A4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802253C8;
    }
    // 0x802253A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802253A8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253AC: bne         $v0, $zero, L_802253C8
    if (ctx->r2 != 0) {
        // 0x802253B0: nop
    
            goto L_802253C8;
    }
    // 0x802253B0: nop

    // 0x802253B4: jal         0x80060690
    // 0x802253B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80060690_3BA90(rdram, ctx);
        goto after_0;
    // 0x802253B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x802253BC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802253C4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802253C8:
    // 0x802253C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802253CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802253D0: jr          $ra
    // 0x802253D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802289D0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802289D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802289D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802289D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802289DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802289E0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802289E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802289E8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802289EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802289F0: lw          $v0, -0x4A40($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4A40);
    // 0x802289F4: jalr        $v0
    // 0x802289F8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802289F8: nop

    after_0:
    // 0x802289FC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228A00: jal         0x8004DD04
    // 0x80228A04: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80228A04: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80228A08: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80228A0C: bne         $v0, $zero, L_80228A1C
    if (ctx->r2 != 0) {
        // 0x80228A10: nop
    
            goto L_80228A1C;
    }
    // 0x80228A10: nop

    // 0x80228A14: jal         0x8005044C
    // 0x80228A18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x80228A18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80228A1C:
    // 0x80228A1C: jal         0x80228858
    // 0x80228A20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80228858_ovl11(rdram, ctx);
        goto after_3;
    // 0x80228A20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80228A24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228A28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228A2C: jr          $ra
    // 0x80228A30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228A30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802281E8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802281EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802281F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802281F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802281F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802281FC: bne         $v0, $zero, L_80228218
    if (ctx->r2 != 0) {
        // 0x80228200: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80228218;
    }
    // 0x80228200: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228204: jal         0x80050294
    // 0x80228208: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228208: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022820C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228210: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228214: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228218:
    // 0x80228218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022821C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228220: jr          $ra
    // 0x80228224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227200_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227200: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227204: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227208: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022720C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80227210: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227218: jal         0x8004DA90
    // 0x8022721C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022721C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80227220: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227224: bne         $v0, $zero, L_80227248
    if (ctx->r2 != 0) {
        // 0x80227228: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227248;
    }
    // 0x80227228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022722C: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x80227230: jal         0x80050294
    // 0x80227234: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80227234: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80227238: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022723C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227240: j           L_80227250
    // 0x80227244: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227250;
    // 0x80227244: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227248:
    // 0x80227248: jal         0x8005044C
    // 0x8022724C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x8022724C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80227250:
    // 0x80227250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227254: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80227258: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022725C: jal         0x8003B564
    // 0x80227260: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x80227260: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80227264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227268: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022726C: jr          $ra
    // 0x80227270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227A4C_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227A50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227A54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227A58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227A5C: jal         0x8004D5D4
    // 0x80227A60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227A60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80227A64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227A6C: jal         0x80050294
    // 0x80227A70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80227A70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80227A74: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80227A78: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80227A7C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227A80: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227A84: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227A88: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227A8C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227A90: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227A94: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227A98: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80227A9C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80227AA0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227AA4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227AA8: lw          $v0, -0x4F40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F40);
    // 0x80227AAC: jalr        $v0
    // 0x80227AB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80227AB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227AB4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80227AB8: jal         0x8004DD04
    // 0x80227ABC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80227ABC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80227AC0: jal         0x8005044C
    // 0x80227AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80227AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80227AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227ACC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227AD0: jr          $ra
    // 0x80227AD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227AD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80227AD8: nop

    // 0x80227ADC: nop

;}
RECOMP_FUNC void func_80226790_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226790: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226794: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80226798: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022679C: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x802267A0: bne         $v0, $zero, L_80226920
    if (ctx->r2 != 0) {
        // 0x802267A4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226920;
    }
    // 0x802267A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802267A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267AC: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802267B0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802267B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267B8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802267BC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802267C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267C4: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802267C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802267CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267D0: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802267D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267D8: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802267DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267E0: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802267E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267E8: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802267EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267F0: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802267F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267F8: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802267FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226800: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226804: lw          $a1, 0x28($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X28);
    // 0x80226808: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8022680C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226810: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80226814: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226818: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x8022681C: sb          $a0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r4;
    // 0x80226820: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80226824: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80226828: lw          $a1, 0x2C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X2C);
    // 0x8022682C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80226830: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226834: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226838: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x8022683C: sb          $a0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r4;
    // 0x80226840: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80226844: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80226848: lw          $v1, 0x30($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X30);
    // 0x8022684C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226850: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226854: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226858: lw          $v1, 0x34($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X34);
    // 0x8022685C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226860: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226864: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226868: lw          $v1, 0x38($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X38);
    // 0x8022686C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226870: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226874: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226878: lw          $v1, 0x3C($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X3C);
    // 0x8022687C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226880: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226884: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226888: lw          $v1, 0x40($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X40);
    // 0x8022688C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226890: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226894: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226898: lw          $v1, 0x44($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X44);
    // 0x8022689C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802268A0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802268A4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802268A8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802268AC: addiu       $v0, $zero, 0xB8
    ctx->r2 = ADD32(0, 0XB8);
    // 0x802268B0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x802268B4: addiu       $v0, $zero, -0x6E
    ctx->r2 = ADD32(0, -0X6E);
    // 0x802268B8: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x802268BC: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x802268C0: jal         0x802295D8
    // 0x802268C4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_802295D8_ovl11(rdram, ctx);
        goto after_0;
    // 0x802268C4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x802268C8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802268CC: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x802268D0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x802268D4: addiu       $v0, $zero, 0x10E
    ctx->r2 = ADD32(0, 0X10E);
    // 0x802268D8: jal         0x802295D8
    // 0x802268DC: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_802295D8_ovl11(rdram, ctx);
        goto after_1;
    // 0x802268DC: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x802268E0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802268E4: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x802268E8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x802268EC: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x802268F0: jal         0x802295D8
    // 0x802268F4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_802295D8_ovl11(rdram, ctx);
        goto after_2;
    // 0x802268F4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x802268F8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802268FC: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80226900: jal         0x802295D8
    // 0x80226904: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_802295D8_ovl11(rdram, ctx);
        goto after_3;
    // 0x80226904: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_3:
    // 0x80226908: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022690C: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80226910: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80226914: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x80226918: jal         0x802295D8
    // 0x8022691C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_802295D8_ovl11(rdram, ctx);
        goto after_4;
    // 0x8022691C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_4:
L_80226920:
    // 0x80226920: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226924: jr          $ra
    // 0x80226928: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226928: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228F3C_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F3C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80228F40: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80228F44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228F48: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x80228F4C: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x80228F50: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228F54: bne         $v0, $zero, L_80228FA4
    if (ctx->r2 != 0) {
        // 0x80228F58: addiu       $a1, $sp, 0x48
        ctx->r5 = ADD32(ctx->r29, 0X48);
            goto L_80228FA4;
    }
    // 0x80228F58: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80228F5C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80228F60: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80228F64: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80228F68: jal         0x8004D5D4
    // 0x80228F6C: sb          $zero, 0x48($sp)
    MEM_B(0X48, ctx->r29) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228F6C: sb          $zero, 0x48($sp)
    MEM_B(0X48, ctx->r29) = 0;
    after_0:
    // 0x80228F70: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80228F74: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80228F78: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80228F7C: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80228F80: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80228F84: sh          $zero, 0x10($s0)
    MEM_H(0X10, ctx->r16) = 0;
    // 0x80228F88: sh          $zero, 0xC($s0)
    MEM_H(0XC, ctx->r16) = 0;
    // 0x80228F8C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80228F90: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80228F94: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228F98: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228F9C: j           L_80228FC0
    // 0x80228FA0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_80228FC0;
    // 0x80228FA0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80228FA4:
    // 0x80228FA4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228FA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228FAC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228FB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228FB4: lw          $v0, -0x4A00($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4A00);
    // 0x80228FB8: jalr        $v0
    // 0x80228FBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80228FBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80228FC0:
    // 0x80228FC0: jal         0x8002C654
    // 0x80228FC4: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x80228FC4: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    after_2:
    // 0x80228FC8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228FCC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228FD0: bne         $v1, $v0, L_80228FDC
    if (ctx->r3 != ctx->r2) {
        // 0x80228FD4: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80228FDC;
    }
    // 0x80228FD4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80228FD8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_80228FDC:
    // 0x80228FDC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80228FE0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80228FE4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80228FE8: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x80228FEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228FF0: jal         0x80031DA8
    // 0x80228FF4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x80228FF4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x80228FF8: lhu         $v0, 0xC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC);
    // 0x80228FFC: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80229000: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x80229004: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80229008: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022900C: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x80229010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229014: jal         0x8002C654
    // 0x80229018: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_4;
    // 0x80229018: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_4:
    // 0x8022901C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80229020: jal         0x80031428
    // 0x80229024: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031428_C828(rdram, ctx);
        goto after_5;
    // 0x80229024: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80229028: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022902C: jal         0x8003077C
    // 0x80229030: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8003077C_BB7C(rdram, ctx);
        goto after_6;
    // 0x80229030: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80229034: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x80229038: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8022903C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80229040: jr          $ra
    // 0x80229044: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80229044: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80227520_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227524: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227528: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022752C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227530: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227534: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227538: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022753C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227540: lw          $v0, -0x4F80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4F80);
    // 0x80227544: jalr        $v0
    // 0x80227548: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227548: nop

    after_0:
    // 0x8022754C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80227550: jal         0x8004DD04
    // 0x80227554: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80227554: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80227558: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022755C: bne         $v0, $zero, L_8022756C
    if (ctx->r2 != 0) {
        // 0x80227560: nop
    
            goto L_8022756C;
    }
    // 0x80227560: nop

    // 0x80227564: jal         0x8005044C
    // 0x80227568: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x80227568: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8022756C:
    // 0x8022756C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227570: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227574: jr          $ra
    // 0x80227578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228858_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228858: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022885C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228860: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228864: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80228868: lw          $a0, -0x4620($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4620);
    // 0x8022886C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228870: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228874: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80228878: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8022887C: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x80228880: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228884: beq         $v1, $v0, L_80228918
    if (ctx->r3 == ctx->r2) {
        // 0x80228888: nop
    
            goto L_80228918;
    }
    // 0x80228888: nop

    // 0x8022888C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80228890: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80228894: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x80228898: bne         $v1, $v0, L_80228918
    if (ctx->r3 != ctx->r2) {
        // 0x8022889C: nop
    
            goto L_80228918;
    }
    // 0x8022889C: nop

    // 0x802288A0: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x802288A4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802288A8: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x802288AC: bne         $v1, $v0, L_80228918
    if (ctx->r3 != ctx->r2) {
        // 0x802288B0: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80228918;
    }
    // 0x802288B0: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x802288B4: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x802288B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802288BC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802288C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802288C4: lw          $v0, -0x4BD4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4BD4);
    // 0x802288C8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802288CC: sw          $v0, -0x4630($at)
    MEM_W(-0X4630, ctx->r1) = ctx->r2;
    // 0x802288D0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802288D4: lw          $v0, -0x4630($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4630);
    // 0x802288D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802288DC: sh          $zero, -0x462C($at)
    MEM_H(-0X462C, ctx->r1) = 0;
    // 0x802288E0: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802288E4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x802288E8: jal         0x8003B85C
    // 0x802288EC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x802288EC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x802288F0: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x802288F4: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x802288F8: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x802288FC: jal         0x8003B840
    // 0x80228900: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80228900: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80228904: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228908: lw          $v0, -0x4620($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4620);
    // 0x8022890C: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80228910: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228914: sw          $v0, -0x4620($at)
    MEM_W(-0X4620, ctx->r1) = ctx->r2;
L_80228918:
    // 0x80228918: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022891C: lw          $a0, -0x461C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X461C);
    // 0x80228920: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80228924: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228928: beq         $v1, $v0, L_802289B4
    if (ctx->r3 == ctx->r2) {
        // 0x8022892C: nop
    
            goto L_802289B4;
    }
    // 0x8022892C: nop

    // 0x80228930: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80228934: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80228938: bne         $v1, $v0, L_802289B4
    if (ctx->r3 != ctx->r2) {
        // 0x8022893C: nop
    
            goto L_802289B4;
    }
    // 0x8022893C: nop

    // 0x80228940: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80228944: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80228948: bne         $v1, $v0, L_802289B4
    if (ctx->r3 != ctx->r2) {
        // 0x8022894C: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_802289B4;
    }
    // 0x8022894C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80228950: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80228954: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228958: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022895C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228960: lw          $v0, -0x4B44($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4B44);
    // 0x80228964: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228968: sw          $v0, -0x4628($at)
    MEM_W(-0X4628, ctx->r1) = ctx->r2;
    // 0x8022896C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228970: lw          $v0, -0x4628($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4628);
    // 0x80228974: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228978: sh          $zero, -0x4624($at)
    MEM_H(-0X4624, ctx->r1) = 0;
    // 0x8022897C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80228980: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80228984: jal         0x8003B85C
    // 0x80228988: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80228988: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x8022898C: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80228990: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80228994: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80228998: jal         0x8003B840
    // 0x8022899C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022899C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x802289A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802289A4: lw          $v0, -0x461C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X461C);
    // 0x802289A8: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x802289AC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802289B0: sw          $v0, -0x461C($at)
    MEM_W(-0X461C, ctx->r1) = ctx->r2;
L_802289B4:
    // 0x802289B4: jal         0x802286E0
    // 0x802289B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802286E0_ovl11(rdram, ctx);
        goto after_4;
    // 0x802289B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802289BC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802289C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802289C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802289C8: jr          $ra
    // 0x802289CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802289CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802279FC_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227A00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227A04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227A08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227A0C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227A10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227A14: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227A18: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227A1C: lw          $v0, -0x4F40($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4F40);
    // 0x80227A20: jalr        $v0
    // 0x80227A24: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227A24: nop

    after_0:
    // 0x80227A28: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80227A2C: jal         0x8004DD04
    // 0x80227A30: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80227A30: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80227A34: jal         0x8005044C
    // 0x80227A38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x80227A38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227A40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227A44: jr          $ra
    // 0x80227A48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227A48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802274A8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802274A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802274AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802274B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802274B4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802274B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802274BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802274C0: jal         0x8004DA90
    // 0x802274C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802274C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802274C8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802274CC: bne         $v0, $zero, L_802274F0
    if (ctx->r2 != 0) {
        // 0x802274D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802274F0;
    }
    // 0x802274D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802274D4: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x802274D8: jal         0x80050294
    // 0x802274DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802274DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802274E0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802274E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802274E8: j           L_802274F8
    // 0x802274EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802274F8;
    // 0x802274EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802274F0:
    // 0x802274F0: jal         0x8005044C
    // 0x802274F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x802274F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_802274F8:
    // 0x802274F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802274FC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80227500: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80227504: jal         0x8003B564
    // 0x80227508: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x80227508: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8022750C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227510: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227514: jr          $ra
    // 0x80227518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022751C: nop

;}
RECOMP_FUNC void func_80228B90_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228B94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228B98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228B9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228BA0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228BA4: bne         $v0, $zero, L_80228BC0
    if (ctx->r2 != 0) {
        // 0x80228BA8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80228BC0;
    }
    // 0x80228BA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80228BAC: jal         0x80050294
    // 0x80228BB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228BB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228BB4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228BB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228BBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228BC0:
    // 0x80228BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228BC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228BC8: jr          $ra
    // 0x80228BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802292A0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802292A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802292A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802292A8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802292AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802292B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802292B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802292B8: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x802292BC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802292C0: bne         $v0, $zero, L_80229360
    if (ctx->r2 != 0) {
        // 0x802292C4: nop
    
            goto L_80229360;
    }
    // 0x802292C4: nop

    // 0x802292C8: jal         0x8004F144
    // 0x802292CC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802292CC: nop

    after_0:
    // 0x802292D0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802292D4: beq         $s1, $zero, L_80229360
    if (ctx->r17 == 0) {
        // 0x802292D8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229360;
    }
    // 0x802292D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802292DC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802292E0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802292E4: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x802292E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802292EC: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x802292F0: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x802292F4: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x802292F8: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x802292FC: jal         0x800A3450
    // 0x80229300: sb          $s0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r16;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80229300: sb          $s0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r16;
    after_1:
    // 0x80229304: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x80229308: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022930C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229310: jal         0x800A3450
    // 0x80229314: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80229314: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    after_2:
    // 0x80229318: lui         $a0, 0x3D4E
    ctx->r4 = S32(0X3D4E << 16);
    // 0x8022931C: lhu         $v1, 0x1C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1C);
    // 0x80229320: ori         $a0, $a0, 0x2E
    ctx->r4 = ctx->r4 | 0X2E;
    // 0x80229324: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80229328: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022932C: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x80229330: lhu         $v1, 0x1E($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1E);
    // 0x80229334: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80229338: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x8022933C: sw          $a0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r4;
    // 0x80229340: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x80229344: sb          $s0, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r16;
    // 0x80229348: sb          $zero, 0x23($s1)
    MEM_B(0X23, ctx->r17) = 0;
    // 0x8022934C: jal         0x800A3450
    // 0x80229350: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80229350: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    after_3:
    // 0x80229354: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80229358: addiu       $v0, $v0, 0x12
    ctx->r2 = ADD32(ctx->r2, 0X12);
    // 0x8022935C: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
L_80229360:
    // 0x80229360: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80229364: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229368: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022936C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229370: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229374: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229378: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022937C: jr          $ra
    // 0x80229380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
