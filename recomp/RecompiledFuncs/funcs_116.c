#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80225654_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225658: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022565C: jal         0x8006033C
    // 0x80225660: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225660: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_0:
    // 0x80225664: bne         $v0, $zero, L_80225684
    if (ctx->r2 != 0) {
        // 0x80225668: nop
    
            goto L_80225684;
    }
    // 0x80225668: nop

    // 0x8022566C: jal         0x8006036C
    // 0x80225670: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80225670: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_1:
    // 0x80225674: jal         0x80060690
    // 0x80225678: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_80060690_3BA90(rdram, ctx);
        goto after_2;
    // 0x80225678: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_2:
    // 0x8022567C: jal         0x80060C1C
    // 0x80225680: addiu       $a0, $zero, 0x2EA
    ctx->r4 = ADD32(0, 0X2EA);
    func_80060C1C_3C01C(rdram, ctx);
        goto after_3;
    // 0x80225680: addiu       $a0, $zero, 0x2EA
    ctx->r4 = ADD32(0, 0X2EA);
    after_3:
L_80225684:
    // 0x80225684: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225688: jr          $ra
    // 0x8022568C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022568C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225E88_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225E8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225E90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225E94: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225E98: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225E9C: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80225EA0: beq         $v1, $zero, L_80225EB8
    if (ctx->r3 == 0) {
        // 0x80225EA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225EB8;
    }
    // 0x80225EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225EA8: beq         $v1, $v0, L_80225EEC
    if (ctx->r3 == ctx->r2) {
        // 0x80225EAC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225EEC;
    }
    // 0x80225EAC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225EB0: j           L_80225F34
    // 0x80225EB4: nop

        goto L_80225F34;
    // 0x80225EB4: nop

L_80225EB8:
    // 0x80225EB8: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80225EBC: jal         0x8004CB2C
    // 0x80225EC0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80225EC0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80225EC4: jal         0x80054578
    // 0x80225EC8: nop

    func_80054578_2F978(rdram, ctx);
        goto after_1;
    // 0x80225EC8: nop

    after_1:
    // 0x80225ECC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225ED0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225ED4: jal         0x80036B00
    // 0x80225ED8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_2;
    // 0x80225ED8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80225EDC: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225EE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225EE4: j           L_80225F34
    // 0x80225EE8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80225F34;
    // 0x80225EE8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80225EEC:
    // 0x80225EEC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80225EF0: addiu       $s1, $s1, 0x47CC
    ctx->r17 = ADD32(ctx->r17, 0X47CC);
    // 0x80225EF4: lb          $v1, 0x0($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X0);
    // 0x80225EF8: bne         $v1, $v0, L_80225F34
    if (ctx->r3 != ctx->r2) {
        // 0x80225EFC: nop
    
            goto L_80225F34;
    }
    // 0x80225EFC: nop

    // 0x80225F00: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225F04: jal         0x80070050
    // 0x80225F08: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_3;
    // 0x80225F08: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_3:
    // 0x80225F0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225F10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F14: jal         0x80034844
    // 0x80225F18: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_4;
    // 0x80225F18: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_4:
    // 0x80225F1C: jal         0x8006027C
    // 0x80225F20: nop

    func_8006027C_3B67C(rdram, ctx);
        goto after_5;
    // 0x80225F20: nop

    after_5:
    // 0x80225F24: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80225F28: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80225F2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225F30: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80225F34:
    // 0x80225F34: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225F38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225F3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F40: jr          $ra
    // 0x80225F44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225F44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022748C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022748C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227490: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80227494: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x80227498: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x8022749C: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x802274A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802274A4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802274A8: lw          $v0, 0x1750($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1750);
    // 0x802274AC: jr          $ra
    // 0x802274B0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802274B0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022AC60_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AC60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AC64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AC68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AC6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AC70: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022AC74: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AC78: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022AC7C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AC80: bne         $v0, $zero, L_8022ACD4
    if (ctx->r2 != 0) {
        // 0x8022AC84: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_8022ACD4;
    }
    // 0x8022AC84: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022AC88: jal         0x8022C264
    // 0x8022AC8C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022C264_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022AC8C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022AC90: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022AC94: beq         $v0, $zero, L_8022ACD0
    if (ctx->r2 == 0) {
        // 0x8022AC98: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022ACD0;
    }
    // 0x8022AC98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AC9C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022ACA0: jal         0x8022C1D8
    // 0x8022ACA4: nop

    func_8022C1D8_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022ACA4: nop

    after_1:
    // 0x8022ACA8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ACAC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022ACB0: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022ACB4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022ACB8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022ACBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022ACC0: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022ACC4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022ACC8: j           L_8022ACD4
    // 0x8022ACCC: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_8022ACD4;
    // 0x8022ACCC: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_8022ACD0:
    // 0x8022ACD0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022ACD4:
    // 0x8022ACD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022ACD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ACDC: jr          $ra
    // 0x8022ACE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ACE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C264_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C264: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022C268: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022C26C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C270: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022C274: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022C278: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8022C27C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022C280: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x8022C284: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022C288: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022C28C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C290: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022C294: jal         0x8004DC2C
    // 0x8022C298: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x8022C298: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x8022C29C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x8022C2A0: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x8022C2A4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022C2A8: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x8022C2AC: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x8022C2B0: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8022C2B4: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8022C2B8: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022C2BC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C2C0: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x8022C2C4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8022C2C8: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8022C2CC: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022C2D0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022C2D4: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x8022C2D8: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x8022C2DC: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x8022C2E0: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8022C2E4: beq         $a0, $zero, L_8022C2F4
    if (ctx->r4 == 0) {
        // 0x8022C2E8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022C2F4;
    }
    // 0x8022C2E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022C2EC: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x8022C2F0: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_8022C2F4:
    // 0x8022C2F4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022C2F8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C2FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022C300: jr          $ra
    // 0x8022C304: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022C304: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022C308: nop

    // 0x8022C30C: nop

;}
RECOMP_FUNC void func_8022D2F8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D2F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D2FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D300: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D304: jal         0x800A3450
    // 0x8022D308: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D308: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D30C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022D310: bne         $v1, $zero, L_8022D38C
    if (ctx->r3 != 0) {
        // 0x8022D314: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_8022D38C;
    }
    // 0x8022D314: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8022D318: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022D31C: andi        $v1, $a3, 0x7
    ctx->r3 = ctx->r7 & 0X7;
    // 0x8022D320: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022D324: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022D328: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D32C: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x8022D330: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D334: sra         $v1, $a0, 17
    ctx->r3 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022D338: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022D33C: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022D340: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
    // 0x8022D344: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D348: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022D34C: sra         $v0, $a0, 18
    ctx->r2 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022D350: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022D354: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022D358: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D35C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022D360: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D364: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022D368: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8022D36C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022D370: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022D374: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022D378: sra         $a0, $a0, 20
    ctx->r4 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022D37C: andi        $a0, $a0, 0x3F
    ctx->r4 = ctx->r4 & 0X3F;
    // 0x8022D380: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D384: j           L_8022D404
    // 0x8022D388: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022D404;
    // 0x8022D388: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022D38C:
    // 0x8022D38C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022D390: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022D394: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022D398: lhu         $a2, 0xA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XA);
    // 0x8022D39C: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022D3A0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D3A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D3A8: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x8022D3AC: addiu       $a2, $a2, -0xC
    ctx->r6 = ADD32(ctx->r6, -0XC);
    // 0x8022D3B0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022D3B4: andi        $v0, $a3, 0x7
    ctx->r2 = ctx->r7 & 0X7;
    // 0x8022D3B8: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x8022D3BC: addiu       $a1, $a1, -0xC
    ctx->r5 = ADD32(ctx->r5, -0XC);
    // 0x8022D3C0: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022D3C4: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x8022D3C8: sra         $v0, $v1, 18
    ctx->r2 = S32(SIGNED(ctx->r3) >> 18);
    // 0x8022D3CC: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022D3D0: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x8022D3D4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D3D8: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022D3DC: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x8022D3E0: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x8022D3E4: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022D3E8: sh          $a2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r6;
    // 0x8022D3EC: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022D3F0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8022D3F4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022D3F8: bne         $v0, $zero, L_8022D404
    if (ctx->r2 != 0) {
        // 0x8022D3FC: sh          $a0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r4;
            goto L_8022D404;
    }
    // 0x8022D3FC: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
    // 0x8022D400: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022D404:
    // 0x8022D404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D408: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D40C: jr          $ra
    // 0x8022D410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022592C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022592C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225930: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225934: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022593C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225940: bne         $v0, $zero, L_80225968
    if (ctx->r2 != 0) {
        // 0x80225944: nop
    
            goto L_80225968;
    }
    // 0x80225944: nop

    // 0x80225948: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022594C: jal         0x800607C4
    // 0x80225950: addiu       $a0, $a0, 0x97C
    ctx->r4 = ADD32(ctx->r4, 0X97C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225950: addiu       $a0, $a0, 0x97C
    ctx->r4 = ADD32(ctx->r4, 0X97C);
    after_0:
    // 0x80225954: jal         0x80225A4C
    // 0x80225958: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80225A4C_ovl15(rdram, ctx);
        goto after_1;
    // 0x80225958: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x8022595C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225960: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225964: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225968:
    // 0x80225968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022596C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225970: jr          $ra
    // 0x80225974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F820_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F820: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022F824: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022F828: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F82C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022F830: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022F834: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022F838: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022F83C: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x8022F840: jal         0x80053ED8
    // 0x8022F844: addiu       $s0, $s1, 0x28
    ctx->r16 = ADD32(ctx->r17, 0X28);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8022F844: addiu       $s0, $s1, 0x28
    ctx->r16 = ADD32(ctx->r17, 0X28);
    after_0:
    // 0x8022F848: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022F84C: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8022F850: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022F854: bne         $v0, $zero, L_8022F86C
    if (ctx->r2 != 0) {
        // 0x8022F858: nop
    
            goto L_8022F86C;
    }
    // 0x8022F858: nop

    // 0x8022F85C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022F860: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F864: j           L_8022F984
    // 0x8022F868: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_8022F984;
    // 0x8022F868: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022F86C:
    // 0x8022F86C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x8022F870: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F874: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x8022F878: beq         $v0, $zero, L_8022F884
    if (ctx->r2 == 0) {
        // 0x8022F87C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022F884;
    }
    // 0x8022F87C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022F880: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_8022F884:
    // 0x8022F884: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8022F888: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x8022F88C: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x8022F890: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x8022F894: lhu         $v0, 0x18($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X18);
    // 0x8022F898: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x8022F89C: lhu         $a0, 0x56($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X56);
    // 0x8022F8A0: jal         0x800324B4
    // 0x8022F8A4: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x8022F8A4: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    after_1:
    // 0x8022F8A8: sll         $v1, $v0, 5
    ctx->r3 = S32(ctx->r2 << 5);
    // 0x8022F8AC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022F8B0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022F8B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F8B8: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x8022F8BC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022F8C0: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022F8C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F8C8: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x8022F8CC: lhu         $a0, 0x56($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X56);
    // 0x8022F8D0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022F8D4: jal         0x80032498
    // 0x8022F8D8: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x8022F8D8: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    after_2:
    // 0x8022F8DC: sll         $v1, $v0, 5
    ctx->r3 = S32(ctx->r2 << 5);
    // 0x8022F8E0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022F8E4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022F8E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F8EC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022F8F0: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x8022F8F4: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x8022F8F8: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022F8FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F900: addiu       $a0, $a0, -0x60
    ctx->r4 = ADD32(ctx->r4, -0X60);
    // 0x8022F904: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x8022F908: sh          $a0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r4;
L_8022F90C:
    // 0x8022F90C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F910: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8022F914: beq         $v0, $zero, L_8022F954
    if (ctx->r2 == 0) {
        // 0x8022F918: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022F954;
    }
    // 0x8022F918: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F91C: lhu         $a1, 0x56($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X56);
    // 0x8022F920: lb          $a2, 0x1($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X1);
    // 0x8022F924: jal         0x8022F9A0
    // 0x8022F928: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    func_8022F9A0_ovl15(rdram, ctx);
        goto after_3;
    // 0x8022F928: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    after_3:
    // 0x8022F92C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8022F930: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F934: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x8022F938: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022F93C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022F940: slti        $v0, $v0, 0xD
    ctx->r2 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x8022F944: beql        $v0, $zero, L_8022F974
    if (ctx->r2 == 0) {
        // 0x8022F948: sb          $zero, 0x1($s0)
        MEM_B(0X1, ctx->r16) = 0;
            goto L_8022F974;
    }
    goto skip_0;
    // 0x8022F948: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    skip_0:
    // 0x8022F94C: j           L_8022F978
    // 0x8022F950: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8022F978;
    // 0x8022F950: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022F954:
    // 0x8022F954: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8022F958: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022F95C: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8022F960: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x8022F964: beql        $v0, $zero, L_8022F978
    if (ctx->r2 == 0) {
        // 0x8022F968: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8022F978;
    }
    goto skip_1;
    // 0x8022F968: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x8022F96C: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8022F970: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022F974:
    // 0x8022F974: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022F978:
    // 0x8022F978: sltiu       $v0, $s2, 0x6
    ctx->r2 = ctx->r18 < 0X6 ? 1 : 0;
    // 0x8022F97C: bne         $v0, $zero, L_8022F90C
    if (ctx->r2 != 0) {
        // 0x8022F980: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8022F90C;
    }
    // 0x8022F980: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_8022F984:
    // 0x8022F984: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022F988: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022F98C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022F990: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F994: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022F998: jr          $ra
    // 0x8022F99C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022F99C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022EFE0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EFE0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EFE4: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022EFE8: bne         $v0, $a0, L_8022EFFC
    if (ctx->r2 != ctx->r4) {
        // 0x8022EFEC: nop
    
            goto L_8022EFFC;
    }
    // 0x8022EFEC: nop

    // 0x8022EFF0: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022EFF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EFF8: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8022EFFC:
    // 0x8022EFFC: lw          $v0, 0x4C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4C);
    // 0x8022F000: bgez        $v0, L_8022F00C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F004: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F00C;
    }
    // 0x8022F004: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F008: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8022F00C:
    // 0x8022F00C: jr          $ra
    // 0x8022F010: nop

    TRACE_RETURN()
    return;
    // 0x8022F010: nop

;}
RECOMP_FUNC void func_8022A710_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A714: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A718: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A71C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A720: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022A724: bgez        $v0, L_8022A73C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A728: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022A73C;
    }
    // 0x8022A728: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022A72C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A730: jal         0x8022C1D8
    // 0x8022A734: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8022C1D8_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022A734: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022A738: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022A73C:
    // 0x8022A73C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A740: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A744: jr          $ra
    // 0x8022A748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BEB0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BEB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BEB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022BEB8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022BEBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BEC0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BEC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BEC8: lw          $v0, 0x2608($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2608);
    // 0x8022BECC: jalr        $v0
    // 0x8022BED0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022BED0: nop

    after_0:
    // 0x8022BED4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BED8: jr          $ra
    // 0x8022BEDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BEDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B110_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B110: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022B114: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B118: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022B11C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B120: bne         $v0, $zero, L_8022B12C
    if (ctx->r2 != 0) {
        // 0x8022B124: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B12C;
    }
    // 0x8022B124: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B128: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022B12C:
    // 0x8022B12C: jr          $ra
    // 0x8022B130: nop

    TRACE_RETURN()
    return;
    // 0x8022B130: nop

;}
RECOMP_FUNC void func_80229C40_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C40: jr          $ra
    // 0x80229C44: nop

    TRACE_RETURN()
    return;
    // 0x80229C44: nop

    // 0x80229C48: nop

    // 0x80229C4C: nop

;}
RECOMP_FUNC void func_80225484_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225484: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225488: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022548C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225494: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225498: bne         $v0, $zero, L_802254C0
    if (ctx->r2 != 0) {
        // 0x8022549C: nop
    
            goto L_802254C0;
    }
    // 0x8022549C: nop

    // 0x802254A0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802254A4: jal         0x800607C4
    // 0x802254A8: addiu       $a0, $a0, 0x934
    ctx->r4 = ADD32(ctx->r4, 0X934);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802254A8: addiu       $a0, $a0, 0x934
    ctx->r4 = ADD32(ctx->r4, 0X934);
    after_0:
    // 0x802254AC: jal         0x80225A4C
    // 0x802254B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80225A4C_ovl15(rdram, ctx);
        goto after_1;
    // 0x802254B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x802254B4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802254B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802254BC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802254C0:
    // 0x802254C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802254C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802254C8: jr          $ra
    // 0x802254CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802254CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EDD8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EDD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022EDDC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022EDE0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022EDE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EDE8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022EDEC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022EDF0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8022EDF4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022EDF8: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x8022EDFC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022EE00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_8022EE04:
    // 0x8022EE04: jal         0x8004EEAC
    // 0x8022EE08: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8022EE08: nop

    after_0:
    // 0x8022EE0C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022EE10: beq         $s0, $zero, L_8022EE68
    if (ctx->r16 == 0) {
        // 0x8022EE14: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022EE68;
    }
    // 0x8022EE14: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022EE18: addiu       $a1, $s3, 0x38
    ctx->r5 = ADD32(ctx->r19, 0X38);
    // 0x8022EE1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022EE20: sb          $s2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r18;
    // 0x8022EE24: sb          $s4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r20;
    // 0x8022EE28: jal         0x8009A3B4
    // 0x8022EE2C: sb          $s2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022EE2C: sb          $s2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r18;
    after_1:
    // 0x8022EE30: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    // 0x8022EE34: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x8022EE38: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x8022EE3C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x8022EE40: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022EE44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EE48: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8022EE4C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022EE50: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022EE54: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022EE58: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022EE5C: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x8022EE60: sw          $a1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r5;
    // 0x8022EE64: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
L_8022EE68:
    // 0x8022EE68: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022EE6C: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022EE70: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x8022EE74: bne         $v0, $zero, L_8022EE04
    if (ctx->r2 != 0) {
        // 0x8022EE78: nop
    
            goto L_8022EE04;
    }
    // 0x8022EE78: nop

    // 0x8022EE7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022EE80: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022EE84: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EE88: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022EE8C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EE90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EE94: jr          $ra
    // 0x8022EE98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022EE98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022EE9C: nop

;}
RECOMP_FUNC void func_8022C218_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C218: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022C21C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C220: beq         $a1, $v0, L_8022C24C
    if (ctx->r5 == ctx->r2) {
        // 0x8022C224: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022C24C;
    }
    // 0x8022C224: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022C228: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x8022C22C: bne         $a0, $v0, L_8022C23C
    if (ctx->r4 != ctx->r2) {
        // 0x8022C230: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8022C23C;
    }
    // 0x8022C230: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022C234: j           L_8022C25C
    // 0x8022C238: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_8022C25C;
    // 0x8022C238: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8022C23C:
    // 0x8022C23C: bne         $a0, $v1, L_8022C25C
    if (ctx->r4 != ctx->r3) {
        // 0x8022C240: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_8022C25C;
    }
    // 0x8022C240: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022C244: j           L_8022C25C
    // 0x8022C248: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_8022C25C;
    // 0x8022C248: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_8022C24C:
    // 0x8022C24C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8022C250: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C254: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C258: lbu         $v0, 0x2360($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X2360);
L_8022C25C:
    // 0x8022C25C: jr          $ra
    // 0x8022C260: nop

    TRACE_RETURN()
    return;
    // 0x8022C260: nop

;}
RECOMP_FUNC void func_8022DF40_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DF40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DF44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DF48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DF4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DF50: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022DF54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DF58: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DF5C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DF60: lw          $v0, 0x28B8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X28B8);
    // 0x8022DF64: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022DF68: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8022DF6C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022DF70: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x8022DF74: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8022DF78: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022DF7C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022DF80: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022DF84: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8022DF88: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022DF8C: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x8022DF90: jal         0x8022E3E4
    // 0x8022DF94: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_8022E3E4_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022DF94: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022DF98: beq         $v0, $zero, L_8022DFAC
    if (ctx->r2 == 0) {
        // 0x8022DF9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DFAC;
    }
    // 0x8022DF9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DFA0: jal         0x8004F62C
    // 0x8022DFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8022DFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022DFA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022DFAC:
    // 0x8022DFAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022DFB0: jal         0x8022E02C
    // 0x8022DFB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E02C_ovl15(rdram, ctx);
        goto after_2;
    // 0x8022DFB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022DFB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DFBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DFC0: jr          $ra
    // 0x8022DFC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DFC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EF50_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EF50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022EF54: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022EF58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EF5C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022EF60: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022EF64: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022EF68: lh          $v1, 0x3E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X3E);
    // 0x8022EF6C: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022EF70: sh          $zero, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = 0;
    // 0x8022EF74: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022EF78: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022EF7C: jal         0x8004D5D4
    // 0x8022EF80: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022EF80: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022EF84: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8022EF88: jal         0x8002C654
    // 0x8022EF8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8022EF8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022EF90: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x8022EF94: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022EF98: jal         0x800319B4
    // 0x8022EF9C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8022EF9C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x8022EFA0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EFA4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022EFA8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022EFAC: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x8022EFB0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022EFB4: addiu       $v0, $v0, 0x2A40
    ctx->r2 = ADD32(ctx->r2, 0X2A40);
    // 0x8022EFB8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022EFBC: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8022EFC0: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x8022EFC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022EFC8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022EFCC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022EFD0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022EFD4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022EFD8: jr          $ra
    // 0x8022EFDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022EFDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225708_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022570C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225710: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225718: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022571C: bne         $v0, $zero, L_8022576C
    if (ctx->r2 != 0) {
        // 0x80225720: nop
    
            goto L_8022576C;
    }
    // 0x80225720: nop

    // 0x80225724: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225728: jal         0x800607C4
    // 0x8022572C: addiu       $a0, $a0, 0x954
    ctx->r4 = ADD32(ctx->r4, 0X954);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022572C: addiu       $a0, $a0, 0x954
    ctx->r4 = ADD32(ctx->r4, 0X954);
    after_0:
    // 0x80225730: jal         0x8006033C
    // 0x80225734: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225734: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_1:
    // 0x80225738: bne         $v0, $zero, L_80225748
    if (ctx->r2 != 0) {
        // 0x8022573C: nop
    
            goto L_80225748;
    }
    // 0x8022573C: nop

    // 0x80225740: jal         0x8006036C
    // 0x80225744: addiu       $a0, $zero, 0x7E1
    ctx->r4 = ADD32(0, 0X7E1);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80225744: addiu       $a0, $zero, 0x7E1
    ctx->r4 = ADD32(0, 0X7E1);
    after_2:
L_80225748:
    // 0x80225748: jal         0x8006033C
    // 0x8022574C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8022574C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_3:
    // 0x80225750: bne         $v0, $zero, L_80225760
    if (ctx->r2 != 0) {
        // 0x80225754: nop
    
            goto L_80225760;
    }
    // 0x80225754: nop

    // 0x80225758: jal         0x8006036C
    // 0x8022575C: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8022575C: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    after_4:
L_80225760:
    // 0x80225760: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225764: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225768: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022576C:
    // 0x8022576C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225770: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225774: jr          $ra
    // 0x80225778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D1FC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D1FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D200: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D208: jal         0x800A3450
    // 0x8022D20C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D20C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D210: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022D214: bne         $v1, $zero, L_8022D28C
    if (ctx->r3 != 0) {
        // 0x8022D218: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_8022D28C;
    }
    // 0x8022D218: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022D21C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022D220: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022D224: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x8022D228: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8022D22C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D230: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x8022D234: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022D238: sra         $v0, $a0, 18
    ctx->r2 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022D23C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D240: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D244: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D248: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022D24C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022D250: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x8022D254: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022D258: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D25C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022D260: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D264: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022D268: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8022D26C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022D270: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022D274: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022D278: sra         $a0, $a0, 22
    ctx->r4 = S32(SIGNED(ctx->r4) >> 22);
    // 0x8022D27C: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022D280: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D284: j           L_8022D2E8
    // 0x8022D288: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022D2E8;
    // 0x8022D288: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022D28C:
    // 0x8022D28C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022D290: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022D294: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022D298: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022D29C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D2A0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022D2A4: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022D2A8: lhu         $v1, 0xE($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE);
    // 0x8022D2AC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8022D2B0: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x8022D2B4: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022D2B8: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x8022D2BC: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022D2C0: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022D2C4: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    // 0x8022D2C8: srl         $v0, $a2, 2
    ctx->r2 = S32(U32(ctx->r6) >> 2);
    // 0x8022D2CC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D2D0: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022D2D4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8022D2D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D2DC: bne         $a0, $zero, L_8022D2E8
    if (ctx->r4 != 0) {
        // 0x8022D2E0: sh          $v1, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r3;
            goto L_8022D2E8;
    }
    // 0x8022D2E0: sh          $v1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r3;
    // 0x8022D2E4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022D2E8:
    // 0x8022D2E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D2EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D2F0: jr          $ra
    // 0x8022D2F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D2F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225544_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225548: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022554C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225554: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225558: beq         $v1, $zero, L_80225570
    if (ctx->r3 == 0) {
        // 0x8022555C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225570;
    }
    // 0x8022555C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225560: beq         $v1, $v0, L_8022558C
    if (ctx->r3 == ctx->r2) {
        // 0x80225564: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022558C;
    }
    // 0x80225564: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80225568: j           L_802255D0
    // 0x8022556C: nop

        goto L_802255D0;
    // 0x8022556C: nop

L_80225570:
    // 0x80225570: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225574: jal         0x800607C4
    // 0x80225578: addiu       $a0, $a0, 0x944
    ctx->r4 = ADD32(ctx->r4, 0X944);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225578: addiu       $a0, $a0, 0x944
    ctx->r4 = ADD32(ctx->r4, 0X944);
    after_0:
    // 0x8022557C: jal         0x80225A4C
    // 0x80225580: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80225A4C_ovl15(rdram, ctx);
        goto after_1;
    // 0x80225580: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80225584: j           L_802255C4
    // 0x80225588: nop

        goto L_802255C4;
    // 0x80225588: nop

L_8022558C:
    // 0x8022558C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225590: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80225594: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225598: bne         $v0, $zero, L_802255D0
    if (ctx->r2 != 0) {
        // 0x8022559C: nop
    
            goto L_802255D0;
    }
    // 0x8022559C: nop

    // 0x802255A0: jal         0x8006033C
    // 0x802255A4: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802255A4: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_2:
    // 0x802255A8: beq         $v0, $zero, L_802255D0
    if (ctx->r2 == 0) {
        // 0x802255AC: nop
    
            goto L_802255D0;
    }
    // 0x802255AC: nop

    // 0x802255B0: jal         0x80060590
    // 0x802255B4: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x802255B4: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_3:
    // 0x802255B8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x802255BC: jal         0x80225BDC
    // 0x802255C0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80225BDC_ovl15(rdram, ctx);
        goto after_4;
    // 0x802255C0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
L_802255C4:
    // 0x802255C4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802255CC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802255D0:
    // 0x802255D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802255D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802255D8: jr          $ra
    // 0x802255DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225330_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225334: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225338: jal         0x80060798
    // 0x8022533C: nop

    func_80060798_3BB98(rdram, ctx);
        goto after_0;
    // 0x8022533C: nop

    after_0:
    // 0x80225340: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80225344: lb          $a1, -0x3BC6($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X3BC6);
    // 0x80225348: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022534C: addiu       $v0, $v0, 0x9A4
    ctx->r2 = ADD32(ctx->r2, 0X9A4);
    // 0x80225350: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225354: addiu       $a0, $a0, 0x99C
    ctx->r4 = ADD32(ctx->r4, 0X99C);
    // 0x80225358: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8022535C: jal         0x8006100C
    // 0x80225360: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_8006100C_3C40C(rdram, ctx);
        goto after_1;
    // 0x80225360: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_1:
    // 0x80225364: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225368: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
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
RECOMP_FUNC void func_80229880_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229880: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80229884: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80229888: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022988C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80229890: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x80229894: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80229898: addiu       $s3, $sp, 0x10
    ctx->r19 = ADD32(ctx->r29, 0X10);
    // 0x8022989C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802298A0: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802298A4: addiu       $a1, $a1, 0x2B90
    ctx->r5 = ADD32(ctx->r5, 0X2B90);
    // 0x802298A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802298AC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802298B0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802298B4: jal         0x8009A3B4
    // 0x802298B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802298B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x802298BC: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x802298C0: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x802298C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802298C8: jal         0x8009A3B4
    // 0x802298CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802298CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802298D0: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x802298D4: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x802298D8: jal         0x8009A3B4
    // 0x802298DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802298DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x802298E0: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x802298E4: addiu       $s0, $s1, 0x54
    ctx->r16 = ADD32(ctx->r17, 0X54);
    // 0x802298E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802298EC: jal         0x8009A3B4
    // 0x802298F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802298F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802298F4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x802298F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802298FC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229900: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229904: lw          $v0, 0x1DE8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1DE8);
    // 0x80229908: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022990C: jalr        $v0
    // 0x80229910: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80229910: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_4:
    // 0x80229914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229918: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x8022991C: jal         0x80031600
    // 0x80229920: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x80229920: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80229924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229928: jal         0x80031DA8
    // 0x8022992C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x8022992C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_6:
    // 0x80229930: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x80229934: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229938: jal         0x8009A3B4
    // 0x8022993C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022993C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80229940: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80229944: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80229948: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022994C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80229950: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80229954: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80229958: jr          $ra
    // 0x8022995C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022995C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80228C10_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C10: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80228C14: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80228C18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228C1C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80228C20: addiu       $s4, $sp, 0x10
    ctx->r20 = ADD32(ctx->r29, 0X10);
    // 0x80228C24: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80228C28: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80228C2C: addiu       $a1, $a1, 0x2B90
    ctx->r5 = ADD32(ctx->r5, 0X2B90);
    // 0x80228C30: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80228C34: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80228C38: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80228C3C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80228C40: jal         0x8009A3B4
    // 0x80228C44: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80228C44: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x80228C48: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80228C4C: addiu       $s3, $s0, 0x14
    ctx->r19 = ADD32(ctx->r16, 0X14);
    // 0x80228C50: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80228C54: jal         0x8009A3B4
    // 0x80228C58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80228C58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80228C5C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80228C60: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80228C64: jal         0x8009A3B4
    // 0x80228C68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80228C68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80228C6C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80228C70: addiu       $s1, $s0, 0x54
    ctx->r17 = ADD32(ctx->r16, 0X54);
    // 0x80228C74: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228C78: jal         0x8009A3B4
    // 0x80228C7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80228C7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80228C80: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228C84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228C88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228C8C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228C90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228C94: lw          $v0, 0x1DD8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1DD8);
    // 0x80228C98: addiu       $s2, $s0, 0xD0
    ctx->r18 = ADD32(ctx->r16, 0XD0);
    // 0x80228C9C: jalr        $v0
    // 0x80228CA0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80228CA0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
    // 0x80228CA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228CA8: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80228CAC: jal         0x80031600
    // 0x80228CB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x80228CB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80228CB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228CB8: jal         0x80031DA8
    // 0x80228CBC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x80228CBC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_6:
    // 0x80228CC0: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80228CC4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80228CC8: jal         0x8009A3B4
    // 0x80228CCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80228CCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80228CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228CD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228CD8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80228CDC: jal         0x80047284
    // 0x80228CE0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_8;
    // 0x80228CE0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x80228CE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228CE8: jal         0x8022931C
    // 0x80228CEC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8022931C_ovl15(rdram, ctx);
        goto after_9;
    // 0x80228CEC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_9:
    // 0x80228CF0: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80228CF4: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80228CF8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80228CFC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80228D00: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80228D04: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80228D08: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80228D0C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80228D10: jr          $ra
    // 0x80228D14: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80228D14: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802288B0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802288B4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802288B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802288BC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802288C0: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x802288C4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802288C8: addiu       $s3, $sp, 0x10
    ctx->r19 = ADD32(ctx->r29, 0X10);
    // 0x802288CC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802288D0: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802288D4: addiu       $a1, $a1, 0x2B90
    ctx->r5 = ADD32(ctx->r5, 0X2B90);
    // 0x802288D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802288DC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802288E0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802288E4: jal         0x8009A3B4
    // 0x802288E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802288E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x802288EC: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x802288F0: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x802288F4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802288F8: jal         0x8009A3B4
    // 0x802288FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802288FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80228900: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80228904: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80228908: jal         0x8009A3B4
    // 0x8022890C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022890C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80228910: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80228914: addiu       $s0, $s1, 0x54
    ctx->r16 = ADD32(ctx->r17, 0X54);
    // 0x80228918: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022891C: jal         0x8009A3B4
    // 0x80228920: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80228920: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80228924: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80228928: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022892C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228930: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228934: lw          $v0, 0x1DD0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1DD0);
    // 0x80228938: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022893C: jalr        $v0
    // 0x80228940: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80228940: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_4:
    // 0x80228944: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228948: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x8022894C: jal         0x80031600
    // 0x80228950: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x80228950: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80228954: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228958: jal         0x80031DA8
    // 0x8022895C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x8022895C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_6:
    // 0x80228960: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x80228964: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228968: jal         0x8009A3B4
    // 0x8022896C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022896C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80228970: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228974: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228978: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022897C: jal         0x80047284
    // 0x80228980: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_8;
    // 0x80228980: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x80228984: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80228988: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8022898C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80228990: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80228994: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80228998: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022899C: jr          $ra
    // 0x802289A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802289A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022D7C8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D7C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D7CC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D7D0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022D7D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D7D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D7DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D7E0: lhu         $v0, 0x6($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X6);
    // 0x8022D7E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D7E8: sra         $v0, $v0, 18
    ctx->r2 = S32(SIGNED(ctx->r2) >> 18);
    // 0x8022D7EC: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x8022D7F0: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8022D7F4: lbu         $s1, 0x26D0($s1)
    ctx->r17 = MEM_BU(ctx->r17, 0X26D0);
    // 0x8022D7F8: jal         0x8003B878
    // 0x8022D7FC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022D7FC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D800: lbu         $a0, 0x5($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X5);
    // 0x8022D804: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8022D808: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D80C: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8022D810: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D814: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x8022D818: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x8022D81C: lh          $v1, 0xA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA);
    // 0x8022D820: lhu         $a0, 0xC($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XC);
    // 0x8022D824: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D828: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022D82C: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022D830: lh          $a1, 0xE($s2)
    ctx->r5 = MEM_H(ctx->r18, 0XE);
    // 0x8022D834: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8022D838: or          $v1, $s1, $v1
    ctx->r3 = ctx->r17 | ctx->r3;
    // 0x8022D83C: addiu       $a0, $s1, 0x1F
    ctx->r4 = ADD32(ctx->r17, 0X1F);
    // 0x8022D840: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8022D844: lui         $v1, 0x4E
    ctx->r3 = S32(0X4E << 16);
    // 0x8022D848: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x8022D84C: ori         $s1, $s1, 0x1F00
    ctx->r17 = ctx->r17 | 0X1F00;
    // 0x8022D850: ori         $a0, $a0, 0x1F00
    ctx->r4 = ctx->r4 | 0X1F00;
    // 0x8022D854: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022D858: sw          $s1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r17;
    // 0x8022D85C: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
    // 0x8022D860: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022D864: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x8022D868: lhu         $a0, 0x8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8);
    // 0x8022D86C: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022D870: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022D874: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x8022D878: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D87C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D880: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D884: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D888: jr          $ra
    // 0x8022D88C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D88C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225C40_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225C48: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80225C4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225C50: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225C54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225C58: lw          $v0, 0xA10($at)
    ctx->r2 = MEM_W(ctx->r1, 0XA10);
    // 0x80225C5C: jalr        $v0
    // 0x80225C60: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225C60: nop

    after_0:
    // 0x80225C64: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225C68: jr          $ra
    // 0x80225C6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DF10_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DF10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DF14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DF18: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022DF1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DF20: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DF24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DF28: lw          $v0, 0x29E8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X29E8);
    // 0x8022DF2C: jalr        $v0
    // 0x8022DF30: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022DF30: nop

    after_0:
    // 0x8022DF34: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DF38: jr          $ra
    // 0x8022DF3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DF3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802299E0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802299E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802299E4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802299E8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802299EC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802299F0: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802299F4: addiu       $a1, $a1, 0x2BB8
    ctx->r5 = ADD32(ctx->r5, 0X2BB8);
    // 0x802299F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802299FC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80229A00: jal         0x8009A3B4
    // 0x80229A04: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229A04: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x80229A08: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80229A0C: bne         $v0, $zero, L_80229B30
    if (ctx->r2 != 0) {
        // 0x80229A10: addiu       $s0, $s1, 0xD0
        ctx->r16 = ADD32(ctx->r17, 0XD0);
            goto L_80229B30;
    }
    // 0x80229A10: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x80229A14: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80229A18: lhu         $a1, 0x14($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X14);
    // 0x80229A1C: lhu         $a2, 0x16($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X16);
    // 0x80229A20: lhu         $a3, 0x18($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X18);
    // 0x80229A24: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x80229A28: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80229A2C: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x80229A30: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x80229A34: sh          $v0, 0xD8($s1)
    MEM_H(0XD8, ctx->r17) = ctx->r2;
    // 0x80229A38: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x80229A3C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80229A40: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80229A44: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x80229A48: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229A4C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80229A50: sh          $a1, 0xD0($s1)
    MEM_H(0XD0, ctx->r17) = ctx->r5;
    // 0x80229A54: sh          $a2, 0xD2($s1)
    MEM_H(0XD2, ctx->r17) = ctx->r6;
    // 0x80229A58: sh          $a3, 0xD4($s1)
    MEM_H(0XD4, ctx->r17) = ctx->r7;
    // 0x80229A5C: bne         $v1, $zero, L_80229A7C
    if (ctx->r3 != 0) {
        // 0x80229A60: sw          $v0, 0xDC($s1)
        MEM_W(0XDC, ctx->r17) = ctx->r2;
            goto L_80229A7C;
    }
    // 0x80229A60: sw          $v0, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r2;
    // 0x80229A64: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x80229A68: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x80229A6C: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x80229A70: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80229A74: j           L_80229A94
    // 0x80229A78: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
        goto L_80229A94;
    // 0x80229A78: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
L_80229A7C:
    // 0x80229A7C: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x80229A80: addiu       $v1, $zero, 0xC00
    ctx->r3 = ADD32(0, 0XC00);
    // 0x80229A84: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x80229A88: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80229A8C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80229A90: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_80229A94:
    // 0x80229A94: sh          $v0, 0xD6($s1)
    MEM_H(0XD6, ctx->r17) = ctx->r2;
    // 0x80229A98: jal         0x800324B4
    // 0x80229A9C: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80229A9C: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    after_1:
    // 0x80229AA0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80229AA4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229AA8: mflo        $v1
    ctx->r3 = lo;
    // 0x80229AAC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80229AB0: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    // 0x80229AB4: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80229AB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229ABC: jal         0x80032498
    // 0x80229AC0: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80229AC0: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    after_2:
    // 0x80229AC4: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80229AC8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229ACC: mflo        $v1
    ctx->r3 = lo;
    // 0x80229AD0: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x80229AD4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80229AD8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80229ADC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229AE0: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80229AE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229AE8: jal         0x8009A3B4
    // 0x80229AEC: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80229AEC: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_3:
    // 0x80229AF0: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x80229AF4: bne         $v0, $zero, L_80229B0C
    if (ctx->r2 != 0) {
        // 0x80229AF8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80229B0C;
    }
    // 0x80229AF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229AFC: jal         0x8004D5D4
    // 0x80229B00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_4;
    // 0x80229B00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x80229B04: j           L_80229B14
    // 0x80229B08: nop

        goto L_80229B14;
    // 0x80229B08: nop

L_80229B0C:
    // 0x80229B0C: jal         0x8004D5FC
    // 0x80229B10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5FC_289FC(rdram, ctx);
        goto after_5;
    // 0x80229B10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
L_80229B14:
    // 0x80229B14: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80229B18: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80229B1C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80229B20: sw          $v1, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r3;
    // 0x80229B24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229B28: j           L_80229BD0
    // 0x80229B2C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_80229BD0;
    // 0x80229B2C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80229B30:
    // 0x80229B30: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80229B34: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80229B38: jal         0x8009A3B4
    // 0x80229B3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80229B3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80229B40: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80229B44: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80229B48: jal         0x8009A3B4
    // 0x80229B4C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80229B4C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x80229B50: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80229B54: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80229B58: jal         0x8009A3B4
    // 0x80229B5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80229B5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80229B60: lhu         $v0, 0xD8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD8);
    // 0x80229B64: lhu         $a0, 0xD6($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XD6);
    // 0x80229B68: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80229B6C: lhu         $a1, 0xD6($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0XD6);
    // 0x80229B70: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229B74: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229B78: sh          $v0, 0xD8($s1)
    MEM_H(0XD8, ctx->r17) = ctx->r2;
    // 0x80229B7C: lh          $a0, 0xD8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XD8);
    // 0x80229B80: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80229B84: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229B88: jal         0x800324B4
    // 0x80229B8C: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_9;
    // 0x80229B8C: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_9:
    // 0x80229B90: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x80229B94: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229B98: mflo        $v1
    ctx->r3 = lo;
    // 0x80229B9C: lhu         $v0, 0xD0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD0);
    // 0x80229BA0: lh          $a0, 0xD8($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XD8);
    // 0x80229BA4: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80229BA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229BAC: jal         0x80032498
    // 0x80229BB0: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_10;
    // 0x80229BB0: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    after_10:
    // 0x80229BB4: lw          $v1, 0xDC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XDC);
    // 0x80229BB8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229BBC: mflo        $v1
    ctx->r3 = lo;
    // 0x80229BC0: lhu         $v0, 0xD4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XD4);
    // 0x80229BC4: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80229BC8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229BCC: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
L_80229BD0:
    // 0x80229BD0: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
    // 0x80229BD4: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80229BD8: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80229BDC: lh          $a2, 0x18($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X18);
    // 0x80229BE0: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x80229BE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80229BE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229BEC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229BF0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80229BF4: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80229BF8: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80229BFC: jal         0x80031600
    // 0x80229C00: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    func_80031600_CA00(rdram, ctx);
        goto after_11;
    // 0x80229C00: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    after_11:
    // 0x80229C04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229C08: jal         0x80031DA8
    // 0x80229C0C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_12;
    // 0x80229C0C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_12:
    // 0x80229C10: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x80229C14: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80229C18: jal         0x8009A3B4
    // 0x80229C1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80229C1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x80229C20: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80229C24: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80229C28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80229C2C: jr          $ra
    // 0x80229C30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80229C30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80229C34: nop

    // 0x80229C38: nop

    // 0x80229C3C: nop

;}
RECOMP_FUNC void func_8022A18C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A18C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A190: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A194: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A198: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022A19C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022A1A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A1A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A1A8: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x8022A1AC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022A1B0: addiu       $v0, $v0, 0x2488
    ctx->r2 = ADD32(ctx->r2, 0X2488);
    // 0x8022A1B4: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x8022A1B8: jal         0x800A3450
    // 0x8022A1BC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A1BC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x8022A1C0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022A1C4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022A1C8: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A1CC: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022A1D0: addiu       $s0, $s0, 0x24C8
    ctx->r16 = ADD32(ctx->r16, 0X24C8);
    // 0x8022A1D4: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x8022A1D8: beq         $v1, $zero, L_8022A1F4
    if (ctx->r3 == 0) {
        // 0x8022A1DC: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022A1F4;
    }
    // 0x8022A1DC: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022A1E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A1E4: beq         $v1, $v0, L_8022A214
    if (ctx->r3 == ctx->r2) {
        // 0x8022A1E8: nop
    
            goto L_8022A214;
    }
    // 0x8022A1E8: nop

    // 0x8022A1EC: j           L_8022A228
    // 0x8022A1F0: nop

        goto L_8022A228;
    // 0x8022A1F0: nop

L_8022A1F4:
    // 0x8022A1F4: jal         0x8022C1D8
    // 0x8022A1F8: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_8022C1D8_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022A1F8: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x8022A1FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A200: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022A204: jal         0x8022C218
    // 0x8022A208: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_8022C218_ovl15(rdram, ctx);
        goto after_2;
    // 0x8022A208: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022A20C: j           L_8022A280
    // 0x8022A210: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_8022A280;
    // 0x8022A210: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8022A214:
    // 0x8022A214: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022A218: jal         0x8022C1C8
    // 0x8022A21C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_3;
    // 0x8022A21C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x8022A220: j           L_8022A280
    // 0x8022A224: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_8022A280;
    // 0x8022A224: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_8022A228:
    // 0x8022A228: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x8022A22C: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x8022A230: bne         $v1, $v0, L_8022A240
    if (ctx->r3 != ctx->r2) {
        // 0x8022A234: nop
    
            goto L_8022A240;
    }
    // 0x8022A234: nop

    // 0x8022A238: j           L_8022A280
    // 0x8022A23C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_8022A280;
    // 0x8022A23C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_8022A240:
    // 0x8022A240: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022A244: jal         0x8022C1D8
    // 0x8022A248: nop

    func_8022C1D8_ovl15(rdram, ctx);
        goto after_4;
    // 0x8022A248: nop

    after_4:
    // 0x8022A24C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022A250: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022A254: beq         $v0, $zero, L_8022A268
    if (ctx->r2 == 0) {
        // 0x8022A258: nop
    
            goto L_8022A268;
    }
    // 0x8022A258: nop

    // 0x8022A25C: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8022A260: j           L_8022A278
    // 0x8022A264: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_8022A278;
    // 0x8022A264: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_8022A268:
    // 0x8022A268: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8022A26C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022A270: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A274: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_8022A278:
    // 0x8022A278: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022A27C: addiu       $s0, $s0, 0x24E8
    ctx->r16 = ADD32(ctx->r16, 0X24E8);
L_8022A280:
    // 0x8022A280: jal         0x800A3450
    // 0x8022A284: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8022A284: nop

    after_5:
    // 0x8022A288: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022A28C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022A290: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022A294: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x8022A298: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022A29C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022A2A0: beq         $v1, $v0, L_8022A2B8
    if (ctx->r3 == ctx->r2) {
        // 0x8022A2A4: nop
    
            goto L_8022A2B8;
    }
    // 0x8022A2A4: nop

    // 0x8022A2A8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022A2AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A2B0: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022A2B4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022A2B8:
    // 0x8022A2B8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A2BC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A2C0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A2C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A2C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A2CC: jr          $ra
    // 0x8022A2D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A2D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022C0CC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C0CC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C0D0: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x8022C0D4: bne         $a1, $a0, L_8022C128
    if (ctx->r5 != ctx->r4) {
        // 0x8022C0D8: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_8022C128;
    }
    // 0x8022C0D8: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022C0DC: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x8022C0E0: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8022C0E4: bne         $v1, $v0, L_8022C0F4
    if (ctx->r3 != ctx->r2) {
        // 0x8022C0E8: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022C0F4;
    }
    // 0x8022C0E8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022C0EC: j           L_8022C110
    // 0x8022C0F0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8022C110;
    // 0x8022C0F0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022C0F4:
    // 0x8022C0F4: bne         $v1, $v0, L_8022C104
    if (ctx->r3 != ctx->r2) {
        // 0x8022C0F8: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022C104;
    }
    // 0x8022C0F8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022C0FC: j           L_8022C110
    // 0x8022C100: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8022C110;
    // 0x8022C100: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022C104:
    // 0x8022C104: bne         $v1, $v0, L_8022C110
    if (ctx->r3 != ctx->r2) {
        // 0x8022C108: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022C110;
    }
    // 0x8022C108: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C10C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022C110:
    // 0x8022C110: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022C114: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8022C118: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x8022C11C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022C120: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022C124: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_8022C128:
    // 0x8022C128: jr          $ra
    // 0x8022C12C: nop

    TRACE_RETURN()
    return;
    // 0x8022C12C: nop

;}
RECOMP_FUNC void func_802287A0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802287A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802287A4: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x802287A8: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x802287AC: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x802287B0: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x802287B4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802287B8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802287BC: lw          $v0, 0x19A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X19A0);
    // 0x802287C0: jr          $ra
    // 0x802287C4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802287C4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80225BDC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BDC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80225BE0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225BE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BE8: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x80225BEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BF0: sb          $a0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r4;
    // 0x80225BF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225BF8: sb          $a1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r5;
    // 0x80225BFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C00: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225C04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C08: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225C0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C10: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225C14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C18: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225C1C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C20: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225C24: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C28: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225C2C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C30: jr          $ra
    // 0x80225C34: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80225C34: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x80225C38: nop

    // 0x80225C3C: nop

;}
RECOMP_FUNC void func_8022A3C4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A3C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A3C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A3CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A3D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A3D4: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022A3D8: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022A3DC: jal         0x8004FA7C
    // 0x8022A3E0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022A3E0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022A3E4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022A3E8: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022A3EC: bne         $v0, $zero, L_8022A418
    if (ctx->r2 != 0) {
        // 0x8022A3F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A418;
    }
    // 0x8022A3F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A3F4: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022A3F8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022A3FC: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x8022A400: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A408: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022A40C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022A410: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x8022A414: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_8022A418:
    // 0x8022A418: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A41C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022A420: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A424: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022A428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A42C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A430: jr          $ra
    // 0x8022A434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DE1C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DE20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DE24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DE28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DE2C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DE30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DE34: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022DE38: jal         0x8004D5D4
    // 0x8022DE3C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022DE3C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022DE40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DE44: addiu       $v0, $zero, -0x4B0
    ctx->r2 = ADD32(0, -0X4B0);
    // 0x8022DE48: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022DE4C: addiu       $v0, $zero, -0xED
    ctx->r2 = ADD32(0, -0XED);
    // 0x8022DE50: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022DE54: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x8022DE58: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x8022DE5C: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022DE60: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022DE64: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022DE68: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022DE6C: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022DE70: jal         0x8003E934
    // 0x8022DE74: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022DE74: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022DE78: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022DE7C: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x8022DE80: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022DE84: lh          $a3, 0x16($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X16);
    // 0x8022DE88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DE8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DE90: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8022DE94: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022DE98: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022DE9C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022DEA0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022DEA4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022DEA8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022DEAC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022DEB0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022DEB4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022DEB8: sb          $zero, 0x360($s0)
    MEM_B(0X360, ctx->r16) = 0;
    // 0x8022DEBC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022DEC0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022DEC4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022DEC8: sw          $a2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r6;
    // 0x8022DECC: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    // 0x8022DED0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DED4: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x8022DED8: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8022DEDC: sw          $a3, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r7;
    // 0x8022DEE0: jal         0x80050294
    // 0x8022DEE4: sw          $a3, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r7;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022DEE4: sw          $a3, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r7;
    after_2:
    // 0x8022DEE8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022DEEC: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022DEF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DEF4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022DEF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DEFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DF00: jr          $ra
    // 0x8022DF04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DF04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022DF08: nop

    // 0x8022DF0C: nop

;}
RECOMP_FUNC void func_80228AAC_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228AAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228AB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80228AB4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228AB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80228ABC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228AC0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80228AC4: addiu       $a0, $a0, -0x3A50
    ctx->r4 = ADD32(ctx->r4, -0X3A50);
    // 0x80228AC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228ACC: beq         $v1, $v0, L_80228B50
    if (ctx->r3 == ctx->r2) {
        // 0x80228AD0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80228B50;
    }
    // 0x80228AD0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80228AD4: beql        $v0, $zero, L_80228AEC
    if (ctx->r2 == 0) {
        // 0x80228AD8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228AEC;
    }
    goto skip_0;
    // 0x80228AD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80228ADC: beq         $v1, $zero, L_80228B04
    if (ctx->r3 == 0) {
        // 0x80228AE0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228B04;
    }
    // 0x80228AE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228AE4: j           L_80228BE4
    // 0x80228AE8: nop

        goto L_80228BE4;
    // 0x80228AE8: nop

L_80228AEC:
    // 0x80228AEC: beq         $v1, $v0, L_80228B74
    if (ctx->r3 == ctx->r2) {
        // 0x80228AF0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80228B74;
    }
    // 0x80228AF0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228AF4: beq         $v1, $v0, L_80228BC8
    if (ctx->r3 == ctx->r2) {
        // 0x80228AF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228BC8;
    }
    // 0x80228AF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228AFC: j           L_80228BE4
    // 0x80228B00: nop

        goto L_80228BE4;
    // 0x80228B00: nop

L_80228B04:
    // 0x80228B04: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80228B08: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80228B0C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80228B10: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80228B14: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80228B18: lh          $a0, -0x2400($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X2400);
    // 0x80228B1C: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x80228B20: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80228B24: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80228B28: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80228B2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228B30: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80228B34: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80228B38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228B3C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80228B40: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80228B44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B48: j           L_80228BE0
    // 0x80228B4C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_80228BE0;
    // 0x80228B4C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80228B50:
    // 0x80228B50: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228B54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228B58: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80228B5C: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x80228B60: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228B64: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228B68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B6C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80228B70: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80228B74:
    // 0x80228B74: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80228B78: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228B7C: slti        $v0, $v0, 0x190
    ctx->r2 = SIGNED(ctx->r2) < 0X190 ? 1 : 0;
    // 0x80228B80: beq         $v0, $zero, L_80228B8C
    if (ctx->r2 == 0) {
        // 0x80228B84: addiu       $v0, $v1, 0x8
        ctx->r2 = ADD32(ctx->r3, 0X8);
            goto L_80228B8C;
    }
    // 0x80228B84: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80228B88: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80228B8C:
    // 0x80228B8C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80228B90: addiu       $v0, $v1, -0x14
    ctx->r2 = ADD32(ctx->r3, -0X14);
    // 0x80228B94: sltiu       $v0, $v0, 0x64
    ctx->r2 = ctx->r2 < 0X64 ? 1 : 0;
    // 0x80228B98: beq         $v0, $zero, L_80228BB0
    if (ctx->r2 == 0) {
        // 0x80228B9C: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_80228BB0;
    }
    // 0x80228B9C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80228BA0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228BA4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80228BA8: j           L_80228BE0
    // 0x80228BAC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80228BE0;
    // 0x80228BAC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228BB0:
    // 0x80228BB0: bne         $v1, $v0, L_80228BE4
    if (ctx->r3 != ctx->r2) {
        // 0x80228BB4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228BE4;
    }
    // 0x80228BB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228BB8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228BBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228BC0: j           L_80228BE4
    // 0x80228BC4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80228BE4;
    // 0x80228BC4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228BC8:
    // 0x80228BC8: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80228BCC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228BD0: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x80228BD4: beq         $v0, $zero, L_80228BE0
    if (ctx->r2 == 0) {
        // 0x80228BD8: addiu       $v0, $v1, 0x10
        ctx->r2 = ADD32(ctx->r3, 0X10);
            goto L_80228BE0;
    }
    // 0x80228BD8: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80228BDC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80228BE0:
    // 0x80228BE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80228BE4:
    // 0x80228BE4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228BE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228BEC: jal         0x8004DA90
    // 0x80228BF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80228BF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80228BF4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228BF8: jal         0x8004DD04
    // 0x80228BFC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80228BFC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80228C00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80228C04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80228C08: jr          $ra
    // 0x80228C0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228C0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802263F0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802263F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802263F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802263FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226400: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226404: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80226408: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022640C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80226410: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80226414: beq         $v0, $zero, L_8022670C
    if (ctx->r2 == 0) {
        // 0x80226418: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022670C;
    }
    // 0x80226418: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022641C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226420: addu        $at, $at, $v0
    gpr jr_addend_80226428 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226424: lw          $v0, 0x2AA8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2AA8);
    // 0x80226428: jr          $v0
    // 0x8022642C: nop

    switch (jr_addend_80226428 >> 2) {
        case 0: goto L_80226430; break;
        case 1: goto L_80226444; break;
        case 2: goto L_80226460; break;
        case 3: goto L_802264C0; break;
        case 4: goto L_802265D8; break;
        case 5: goto L_80226654; break;
        default: switch_error(__func__, 0x80226428, 0x80232AA8);
    }
    // 0x8022642C: nop

L_80226430:
    // 0x80226430: jal         0x80036B58
    // 0x80226434: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_0;
    // 0x80226434: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x80226438: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8022643C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226440: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80226444:
    // 0x80226444: jal         0x8006FF84
    // 0x80226448: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_1;
    // 0x80226448: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022644C: beq         $v0, $zero, L_8022670C
    if (ctx->r2 == 0) {
        // 0x80226450: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022670C;
    }
    // 0x80226450: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226454: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226458: j           L_80226644
    // 0x8022645C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80226644;
    // 0x8022645C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80226460:
    // 0x80226460: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80226464: jal         0x8004CB2C
    // 0x80226468: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_2;
    // 0x80226468: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_2:
    // 0x8022646C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226470: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80226474: jal         0x8006033C
    // 0x80226478: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80226478: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_3:
    // 0x8022647C: bne         $v0, $zero, L_80226498
    if (ctx->r2 != 0) {
        // 0x80226480: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226498;
    }
    // 0x80226480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226484: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80226488: jal         0x8006036C
    // 0x8022648C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8022648C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_4:
    // 0x80226490: j           L_8022649C
    // 0x80226494: nop

        goto L_8022649C;
    // 0x80226494: nop

L_80226498:
    // 0x80226498: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
L_8022649C:
    // 0x8022649C: jal         0x80060590
    // 0x802264A0: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x802264A0: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_5:
    // 0x802264A4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802264A8: jal         0x8005FA7C
    // 0x802264AC: addiu       $a0, $a0, 0x113C
    ctx->r4 = ADD32(ctx->r4, 0X113C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_6;
    // 0x802264AC: addiu       $a0, $a0, 0x113C
    ctx->r4 = ADD32(ctx->r4, 0X113C);
    after_6:
    // 0x802264B0: jal         0x80226B04
    // 0x802264B4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80226B04_ovl15(rdram, ctx);
        goto after_7;
    // 0x802264B4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_7:
    // 0x802264B8: j           L_80226644
    // 0x802264BC: nop

        goto L_80226644;
    // 0x802264BC: nop

L_802264C0:
    // 0x802264C0: lbu         $v1, 0xBD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XBD);
    // 0x802264C4: addiu       $v0, $zero, 0x700
    ctx->r2 = ADD32(0, 0X700);
    // 0x802264C8: sh          $v0, 0x438($s0)
    MEM_H(0X438, ctx->r16) = ctx->r2;
    // 0x802264CC: lh          $a0, 0x438($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X438);
    // 0x802264D0: addiu       $v0, $zero, -0x25C
    ctx->r2 = ADD32(0, -0X25C);
    // 0x802264D4: sh          $v0, 0x43A($s0)
    MEM_H(0X43A, ctx->r16) = ctx->r2;
    // 0x802264D8: lh          $a1, 0x43A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X43A);
    // 0x802264DC: addiu       $v0, $zero, -0x4AA
    ctx->r2 = ADD32(0, -0X4AA);
    // 0x802264E0: sh          $v0, 0x43C($s0)
    MEM_H(0X43C, ctx->r16) = ctx->r2;
    // 0x802264E4: lh          $a2, 0x43C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X43C);
    // 0x802264E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802264EC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802264F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802264F4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802264F8: sh          $zero, 0x440($s0)
    MEM_H(0X440, ctx->r16) = 0;
    // 0x802264FC: sh          $zero, 0x442($s0)
    MEM_H(0X442, ctx->r16) = 0;
    // 0x80226500: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x80226504: sb          $zero, 0x448($s0)
    MEM_B(0X448, ctx->r16) = 0;
    // 0x80226508: sb          $v0, 0x76($s0)
    MEM_B(0X76, ctx->r16) = ctx->r2;
    // 0x8022650C: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80226510: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80226514: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80226518: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022651C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80226520: sb          $v1, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r3;
    // 0x80226524: sw          $a0, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->r4;
    // 0x80226528: sw          $a1, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->r5;
    // 0x8022652C: sw          $a2, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r6;
    // 0x80226530: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80226534: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226538: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022653C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226540: jal         0x8005F6B4
    // 0x80226544: sw          $v0, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r2;
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_8;
    // 0x80226544: sw          $v0, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r2;
    after_8:
    // 0x80226548: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022654C: bne         $v0, $zero, L_8022659C
    if (ctx->r2 != 0) {
        // 0x80226550: sw          $zero, 0xC($s1)
        MEM_W(0XC, ctx->r17) = 0;
            goto L_8022659C;
    }
    // 0x80226550: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x80226554: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80226558: addiu       $s0, $s0, 0x1164
    ctx->r16 = ADD32(ctx->r16, 0X1164);
    // 0x8022655C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226560: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226564: addiu       $v0, $v0, 0x11DC
    ctx->r2 = ADD32(ctx->r2, 0X11DC);
    // 0x80226568: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022656C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226570: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226574: addiu       $v0, $v0, 0x1228
    ctx->r2 = ADD32(ctx->r2, 0X1228);
    // 0x80226578: jal         0x8005FA7C
    // 0x8022657C: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_9;
    // 0x8022657C: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    after_9:
    // 0x80226580: jal         0x8005FA7C
    // 0x80226584: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_10;
    // 0x80226584: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_10:
    // 0x80226588: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x8022658C: jal         0x80036340
    // 0x80226590: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80036340_11740(rdram, ctx);
        goto after_11;
    // 0x80226590: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_11:
    // 0x80226594: j           L_802265B8
    // 0x80226598: nop

        goto L_802265B8;
    // 0x80226598: nop

L_8022659C:
    // 0x8022659C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802265A0: addiu       $v0, $v0, 0x1454
    ctx->r2 = ADD32(ctx->r2, 0X1454);
    // 0x802265A4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802265A8: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802265AC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802265B0: addiu       $v0, $v0, 0x1228
    ctx->r2 = ADD32(ctx->r2, 0X1228);
    // 0x802265B4: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
L_802265B8:
    // 0x802265B8: jal         0x80036E48
    // 0x802265BC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_12;
    // 0x802265BC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_12:
    // 0x802265C0: jal         0x8005FB90
    // 0x802265C4: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_13;
    // 0x802265C4: nop

    after_13:
    // 0x802265C8: jal         0x80060018
    // 0x802265CC: nop

    func_80060018_3B418(rdram, ctx);
        goto after_14;
    // 0x802265CC: nop

    after_14:
    // 0x802265D0: j           L_80226644
    // 0x802265D4: nop

        goto L_80226644;
    // 0x802265D4: nop

L_802265D8:
    // 0x802265D8: jal         0x8006072C
    // 0x802265DC: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_15;
    // 0x802265DC: nop

    after_15:
    // 0x802265E0: beq         $v0, $zero, L_802265F4
    if (ctx->r2 == 0) {
        // 0x802265E4: nop
    
            goto L_802265F4;
    }
    // 0x802265E4: nop

    // 0x802265E8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802265EC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802265F0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802265F4:
    // 0x802265F4: jal         0x8005FB90
    // 0x802265F8: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_16;
    // 0x802265F8: nop

    after_16:
    // 0x802265FC: jal         0x80060018
    // 0x80226600: nop

    func_80060018_3B418(rdram, ctx);
        goto after_17;
    // 0x80226600: nop

    after_17:
    // 0x80226604: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80226608: bne         $v0, $zero, L_80226628
    if (ctx->r2 != 0) {
        // 0x8022660C: nop
    
            goto L_80226628;
    }
    // 0x8022660C: nop

    // 0x80226610: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226614: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226618: bne         $v0, $zero, L_8022670C
    if (ctx->r2 != 0) {
        // 0x8022661C: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_8022670C;
    }
    // 0x8022661C: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80226620: j           L_8022663C
    // 0x80226624: ori         $a0, $a0, 0x3800
    ctx->r4 = ctx->r4 | 0X3800;
        goto L_8022663C;
    // 0x80226624: ori         $a0, $a0, 0x3800
    ctx->r4 = ctx->r4 | 0X3800;
L_80226628:
    // 0x80226628: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022662C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226630: bne         $v0, $zero, L_8022670C
    if (ctx->r2 != 0) {
        // 0x80226634: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_8022670C;
    }
    // 0x80226634: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80226638: ori         $a0, $a0, 0x3900
    ctx->r4 = ctx->r4 | 0X3900;
L_8022663C:
    // 0x8022663C: jal         0x80036B1C
    // 0x80226640: nop

    func_80036B1C_11F1C(rdram, ctx);
        goto after_18;
    // 0x80226640: nop

    after_18:
L_80226644:
    // 0x80226644: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80226648: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022664C: j           L_8022670C
    // 0x80226650: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8022670C;
    // 0x80226650: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80226654:
    // 0x80226654: jal         0x8006072C
    // 0x80226658: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_19;
    // 0x80226658: nop

    after_19:
    // 0x8022665C: beq         $v0, $zero, L_80226670
    if (ctx->r2 == 0) {
        // 0x80226660: nop
    
            goto L_80226670;
    }
    // 0x80226660: nop

    // 0x80226664: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226668: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022666C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80226670:
    // 0x80226670: lbu         $v0, 0xBD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBD);
    // 0x80226674: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80226678: jal         0x8005FB90
    // 0x8022667C: sb          $v0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r2;
    func_8005FB90_3AF90(rdram, ctx);
        goto after_20;
    // 0x8022667C: sb          $v0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r2;
    after_20:
    // 0x80226680: jal         0x80060018
    // 0x80226684: nop

    func_80060018_3B418(rdram, ctx);
        goto after_21;
    // 0x80226684: nop

    after_21:
    // 0x80226688: jal         0x80036B7C
    // 0x8022668C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_22;
    // 0x8022668C: nop

    after_22:
    // 0x80226690: beq         $v0, $zero, L_8022670C
    if (ctx->r2 == 0) {
        // 0x80226694: nop
    
            goto L_8022670C;
    }
    // 0x80226694: nop

    // 0x80226698: jal         0x80060170
    // 0x8022669C: nop

    func_80060170_3B570(rdram, ctx);
        goto after_23;
    // 0x8022669C: nop

    after_23:
    // 0x802266A0: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802266A4: bne         $v0, $zero, L_802266CC
    if (ctx->r2 != 0) {
        // 0x802266A8: nop
    
            goto L_802266CC;
    }
    // 0x802266A8: nop

    // 0x802266AC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802266B0: addiu       $v0, $v0, 0x1238
    ctx->r2 = ADD32(ctx->r2, 0X1238);
    // 0x802266B4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802266B8: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802266BC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802266C0: addiu       $v0, $v0, 0x1434
    ctx->r2 = ADD32(ctx->r2, 0X1434);
    // 0x802266C4: j           L_802266E8
    // 0x802266C8: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
        goto L_802266E8;
    // 0x802266C8: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
L_802266CC:
    // 0x802266CC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802266D0: addiu       $v0, $v0, 0x14A0
    ctx->r2 = ADD32(ctx->r2, 0X14A0);
    // 0x802266D4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802266D8: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802266DC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802266E0: addiu       $v0, $v0, 0x160C
    ctx->r2 = ADD32(ctx->r2, 0X160C);
    // 0x802266E4: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
L_802266E8:
    // 0x802266E8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802266EC: lbu         $v1, 0x4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4);
    // 0x802266F0: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x802266F4: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x802266F8: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    // 0x802266FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226700: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80226704: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80226708: sb          $v1, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r3;
L_8022670C:
    // 0x8022670C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226710: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226714: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226718: jr          $ra
    // 0x8022671C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022671C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C310_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C314: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C318: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C31C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022C320: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C328: jal         0x8009A3B4
    // 0x8022C32C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C32C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022C330: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022C334: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C338: jal         0x8009A3B4
    // 0x8022C33C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C33C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022C340: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022C344: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022C348: jal         0x8009A3B4
    // 0x8022C34C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C34C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022C350: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C354: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C358: bne         $v1, $zero, L_8022C374
    if (ctx->r3 != 0) {
        // 0x8022C35C: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_8022C374;
    }
    // 0x8022C35C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022C360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C364: jal         0x8022C3EC
    // 0x8022C368: addiu       $a1, $s0, 0x348
    ctx->r5 = ADD32(ctx->r16, 0X348);
    func_8022C3EC_ovl15(rdram, ctx);
        goto after_3;
    // 0x8022C368: addiu       $a1, $s0, 0x348
    ctx->r5 = ADD32(ctx->r16, 0X348);
    after_3:
    // 0x8022C36C: j           L_8022C384
    // 0x8022C370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022C384;
    // 0x8022C370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C374:
    // 0x8022C374: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C378: jal         0x8022C514
    // 0x8022C37C: addiu       $a1, $s0, 0x348
    ctx->r5 = ADD32(ctx->r16, 0X348);
    func_8022C514_ovl15(rdram, ctx);
        goto after_4;
    // 0x8022C37C: addiu       $a1, $s0, 0x348
    ctx->r5 = ADD32(ctx->r16, 0X348);
    after_4:
    // 0x8022C380: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C384:
    // 0x8022C384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022C388: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022C38C: jal         0x80047284
    // 0x8022C390: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_5;
    // 0x8022C390: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x8022C394: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C398: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C39C: beq         $v0, $zero, L_8022C3B4
    if (ctx->r2 == 0) {
        // 0x8022C3A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C3B4;
    }
    // 0x8022C3A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C3A4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022C3A8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022C3AC: jal         0x8003B564
    // 0x8022C3B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_6;
    // 0x8022C3B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
L_8022C3B4:
    // 0x8022C3B4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C3B8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022C3BC: beq         $a1, $v0, L_8022C3D4
    if (ctx->r5 == ctx->r2) {
        // 0x8022C3C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C3D4;
    }
    // 0x8022C3C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C3C4: jal         0x80050294
    // 0x8022C3C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022C3C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022C3CC: j           L_8022C3DC
    // 0x8022C3D0: nop

        goto L_8022C3DC;
    // 0x8022C3D0: nop

L_8022C3D4:
    // 0x8022C3D4: jal         0x8005044C
    // 0x8022C3D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x8022C3D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022C3DC:
    // 0x8022C3DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C3E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C3E4: jr          $ra
    // 0x8022C3E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C3E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B228_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B22C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B230: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B238: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B23C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B240: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022B244: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B248: jal         0x8022C1D8
    // 0x8022B24C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8022C1D8_ovl15(rdram, ctx);
        goto after_0;
    // 0x8022B24C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022B250: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B258: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022B25C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B260: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B268: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B26C: jr          $ra
    // 0x8022B270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022931C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022931C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80229320: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80229324: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80229328: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022932C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80229330: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80229334: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80229338: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8022933C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229340: beq         $v0, $zero, L_802293E0
    if (ctx->r2 == 0) {
        // 0x80229344: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_802293E0;
    }
    // 0x80229344: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80229348: addiu       $s1, $s2, 0x38
    ctx->r17 = ADD32(ctx->r18, 0X38);
    // 0x8022934C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229350: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80229354: jal         0x8009A3B4
    // 0x80229358: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229358: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022935C: addiu       $s0, $s2, 0x30
    ctx->r16 = ADD32(ctx->r18, 0X30);
    // 0x80229360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229364: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80229368: jal         0x8009A3B4
    // 0x8022936C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022936C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80229370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229374: lhu         $v0, 0x3A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X3A);
    // 0x80229378: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022937C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229380: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80229384: addiu       $v0, $v0, -0x280
    ctx->r2 = ADD32(ctx->r2, -0X280);
    // 0x80229388: sh          $v0, 0x3A($s2)
    MEM_H(0X3A, ctx->r18) = ctx->r2;
    // 0x8022938C: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x80229390: lui         $s0, 0x200
    ctx->r16 = S32(0X200 << 16);
    // 0x80229394: addiu       $v0, $s3, 0xC0
    ctx->r2 = ADD32(ctx->r19, 0XC0);
    // 0x80229398: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022939C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802293A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802293A4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802293A8: jal         0x80051E18
    // 0x802293AC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_2;
    // 0x802293AC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x802293B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802293B4: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x802293B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802293BC: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x802293C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802293C4: addiu       $v0, $s3, 0xC8
    ctx->r2 = ADD32(ctx->r19, 0XC8);
    // 0x802293C8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802293CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802293D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802293D4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802293D8: jal         0x80051E18
    // 0x802293DC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x802293DC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
L_802293E0:
    // 0x802293E0: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x802293E4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802293E8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802293EC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802293F0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802293F4: jr          $ra
    // 0x802293F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802293F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022B274_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B278: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B27C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022B280: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B284: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B288: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B28C: lw          $v0, 0x25C0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X25C0);
    // 0x8022B290: jalr        $v0
    // 0x8022B294: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022B294: nop

    after_0:
    // 0x8022B298: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B29C: jr          $ra
    // 0x8022B2A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B2A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A3A0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A3A0: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022A3A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A3A8: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022A3AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A3B0: bne         $v0, $zero, L_8022A3BC
    if (ctx->r2 != 0) {
        // 0x8022A3B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A3BC;
    }
    // 0x8022A3B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A3B8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022A3BC:
    // 0x8022A3BC: jr          $ra
    // 0x8022A3C0: nop

    TRACE_RETURN()
    return;
    // 0x8022A3C0: nop

;}
RECOMP_FUNC void func_8022C1C8_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C1C8: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022C1CC: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x8022C1D0: jr          $ra
    // 0x8022C1D4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x8022C1D4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_8022F564_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F568: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F56C: jal         0x8004F5C4
    // 0x8022F570: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022F570: nop

    after_0:
    // 0x8022F574: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F578: jr          $ra
    // 0x8022F57C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F57C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227B5C_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227B60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227B64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227B68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227B6C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227B70: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227B74: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80227B78: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80227B7C: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x80227B80: beq         $v0, $zero, L_80227FF0
    if (ctx->r2 == 0) {
        // 0x80227B84: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_80227FF0;
    }
    // 0x80227B84: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80227B88: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227B8C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227B90: addu        $at, $at, $v0
    gpr jr_addend_80227B98 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227B94: lw          $v0, 0x2B30($at)
    ctx->r2 = ADD32(ctx->r1, 0X2B30);
    // 0x80227B98: jr          $v0
    // 0x80227B9C: nop

    switch (jr_addend_80227B98 >> 2) {
        case 0: goto L_80227BA0; break;
        case 1: goto L_80227BCC; break;
        case 2: goto L_80227CBC; break;
        case 3: goto L_80227D00; break;
        case 4: goto L_80227D28; break;
        case 5: goto L_80227D4C; break;
        case 6: goto L_80227D84; break;
        case 7: goto L_80227DC4; break;
        case 8: goto L_80227E40; break;
        case 9: goto L_80227E78; break;
        case 10: goto L_80227EBC; break;
        case 11: goto L_80227F1C; break;
        default: switch_error(__func__, 0x80227B98, 0x80232B30);
    }
    // 0x80227B9C: nop

L_80227BA0:
    // 0x80227BA0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227BA4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80227BA8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80227BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227BB0: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227BB4: nop
    
            goto L_80227FF0;
    }
    // 0x80227BB4: nop

    // 0x80227BB8: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x80227BBC: beq         $v0, $v1, L_80227F0C
    if (ctx->r2 == ctx->r3) {
        // 0x80227BC0: nop
    
            goto L_80227F0C;
    }
    // 0x80227BC0: nop

    // 0x80227BC4: j           L_80227FF0
    // 0x80227BC8: nop

        goto L_80227FF0;
    // 0x80227BC8: nop

L_80227BCC:
    // 0x80227BCC: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80227BD0: sltiu       $v0, $v0, 0x11
    ctx->r2 = ctx->r2 < 0X11 ? 1 : 0;
    // 0x80227BD4: bne         $v0, $zero, L_80227BFC
    if (ctx->r2 != 0) {
        // 0x80227BD8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80227BFC;
    }
    // 0x80227BD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227BDC: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80227BE0: beq         $v1, $v0, L_80227BFC
    if (ctx->r3 == ctx->r2) {
        // 0x80227BE4: nop
    
            goto L_80227BFC;
    }
    // 0x80227BE4: nop

    // 0x80227BE8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80227BEC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227BF0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80227BF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227BF8: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_80227BFC:
    // 0x80227BFC: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80227C00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227C04: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227C08: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80227FF0;
    }
    // 0x80227C08: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80227C0C: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x80227C10: beq         $a1, $v0, L_80227C58
    if (ctx->r5 == ctx->r2) {
        // 0x80227C14: slti        $v0, $a1, 0x29
        ctx->r2 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
            goto L_80227C58;
    }
    // 0x80227C14: slti        $v0, $a1, 0x29
    ctx->r2 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
    // 0x80227C18: beq         $v0, $zero, L_80227C30
    if (ctx->r2 == 0) {
        // 0x80227C1C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80227C30;
    }
    // 0x80227C1C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227C20: beq         $a1, $v0, L_80227C4C
    if (ctx->r5 == ctx->r2) {
        // 0x80227C24: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227C4C;
    }
    // 0x80227C24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227C28: j           L_80227FF0
    // 0x80227C2C: nop

        goto L_80227FF0;
    // 0x80227C2C: nop

L_80227C30:
    // 0x80227C30: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80227C34: beq         $a1, $v0, L_80227C68
    if (ctx->r5 == ctx->r2) {
        // 0x80227C38: addiu       $v0, $zero, 0x82
        ctx->r2 = ADD32(0, 0X82);
            goto L_80227C68;
    }
    // 0x80227C38: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80227C3C: beq         $a1, $v0, L_80227C88
    if (ctx->r5 == ctx->r2) {
        // 0x80227C40: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227C88;
    }
    // 0x80227C40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227C44: j           L_80227FF0
    // 0x80227C48: nop

        goto L_80227FF0;
    // 0x80227C48: nop

L_80227C4C:
    // 0x80227C4C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227C50: j           L_80227FE8
    // 0x80227C54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_80227FE8;
    // 0x80227C54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_80227C58:
    // 0x80227C58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227C5C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227C60: j           L_80227FE8
    // 0x80227C64: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_80227FE8;
    // 0x80227C64: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80227C68:
    // 0x80227C68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227C6C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227C70: jal         0x80228214
    // 0x80227C74: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_80228214_ovl15(rdram, ctx);
        goto after_0;
    // 0x80227C74: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x80227C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227C7C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227C80: j           L_80227FE8
    // 0x80227C84: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_80227FE8;
    // 0x80227C84: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_80227C88:
    // 0x80227C88: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227C8C: jal         0x80228214
    // 0x80227C90: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80228214_ovl15(rdram, ctx);
        goto after_1;
    // 0x80227C90: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80227C94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227C98: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227C9C: jal         0x8022823C
    // 0x80227CA0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8022823C_ovl15(rdram, ctx);
        goto after_2;
    // 0x80227CA0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x80227CA4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227CA8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227CAC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80227CB0: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    // 0x80227CB4: j           L_80227F0C
    // 0x80227CB8: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
        goto L_80227F0C;
    // 0x80227CB8: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
L_80227CBC:
    // 0x80227CBC: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x80227CC0: slti        $v0, $v0, 0x26
    ctx->r2 = SIGNED(ctx->r2) < 0X26 ? 1 : 0;
    // 0x80227CC4: beq         $v0, $zero, L_80227CEC
    if (ctx->r2 == 0) {
        // 0x80227CC8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227CEC;
    }
    // 0x80227CC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227CCC: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x80227CD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227CD4: jal         0x8004DA90
    // 0x80227CD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80227CD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80227CDC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80227CE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227CE4: j           L_80227FF0
    // 0x80227CE8: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
        goto L_80227FF0;
    // 0x80227CE8: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_80227CEC:
    // 0x80227CEC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80227CF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227CF4: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x80227CF8: j           L_80227F0C
    // 0x80227CFC: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
        goto L_80227F0C;
    // 0x80227CFC: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
L_80227D00:
    // 0x80227D00: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80227D04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227D08: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227D0C: addiu       $v0, $zero, 0xD7
        ctx->r2 = ADD32(0, 0XD7);
            goto L_80227FF0;
    }
    // 0x80227D0C: addiu       $v0, $zero, 0xD7
    ctx->r2 = ADD32(0, 0XD7);
    // 0x80227D10: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80227D14: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227D18: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80227FF0;
    }
    // 0x80227D18: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80227D1C:
    // 0x80227D1C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227D20:
    // 0x80227D20: j           L_80227F0C
    // 0x80227D24: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
        goto L_80227F0C;
    // 0x80227D24: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
L_80227D28:
    // 0x80227D28: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80227D2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227D30: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227D34: addiu       $v0, $zero, 0x19A
        ctx->r2 = ADD32(0, 0X19A);
            goto L_80227FF0;
    }
    // 0x80227D34: addiu       $v0, $zero, 0x19A
    ctx->r2 = ADD32(0, 0X19A);
    // 0x80227D38: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80227D3C: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227D40: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80227FF0;
    }
    // 0x80227D40: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80227D44: j           L_80227D20
    // 0x80227D48: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80227D20;
    // 0x80227D48: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227D4C:
    // 0x80227D4C: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80227D50: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80227D54: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227D58: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FF0;
    }
    // 0x80227D58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227D5C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227D60: jal         0x80228214
    // 0x80227D64: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80228214_ovl15(rdram, ctx);
        goto after_4;
    // 0x80227D64: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_4:
    // 0x80227D68: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80227D6C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227D70: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227D74: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80227D78: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80227D7C: j           L_80227F0C
    // 0x80227D80: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
        goto L_80227F0C;
    // 0x80227D80: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
L_80227D84:
    // 0x80227D84: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227D88: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80227D8C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80227D90: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    // 0x80227D94: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80227D98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227D9C: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227DA0: addiu       $v0, $zero, 0x1C7
        ctx->r2 = ADD32(0, 0X1C7);
            goto L_80227FF0;
    }
    // 0x80227DA0: addiu       $v0, $zero, 0x1C7
    ctx->r2 = ADD32(0, 0X1C7);
    // 0x80227DA4: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80227DA8: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227DAC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FF0;
    }
    // 0x80227DAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227DB0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227DB4: jal         0x80228214
    // 0x80227DB8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80228214_ovl15(rdram, ctx);
        goto after_5;
    // 0x80227DB8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_5:
    // 0x80227DBC: j           L_80227F0C
    // 0x80227DC0: nop

        goto L_80227F0C;
    // 0x80227DC0: nop

L_80227DC4:
    // 0x80227DC4: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80227DC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227DCC: bne         $v1, $v0, L_80227E08
    if (ctx->r3 != ctx->r2) {
        // 0x80227DD0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227E08;
    }
    // 0x80227DD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227DD4: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x80227DD8: xori        $v1, $v0, 0x203
    ctx->r3 = ctx->r2 ^ 0X203;
    // 0x80227DDC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80227DE0: xori        $v0, $v0, 0x230
    ctx->r2 = ctx->r2 ^ 0X230;
    // 0x80227DE4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80227DE8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80227DEC: beq         $v1, $zero, L_80227E00
    if (ctx->r3 == 0) {
        // 0x80227DF0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227E00;
    }
    // 0x80227DF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227DF4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227DF8: jal         0x80228214
    // 0x80227DFC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80228214_ovl15(rdram, ctx);
        goto after_6;
    // 0x80227DFC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_6:
L_80227E00:
    // 0x80227E00: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80227E04: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80227E08:
    // 0x80227E08: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227E0C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227FF0;
    }
    // 0x80227E0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E10: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80227E14: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227E18: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FF0;
    }
    // 0x80227E18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227E1C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227E20: jal         0x80228214
    // 0x80227E24: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80228214_ovl15(rdram, ctx);
        goto after_7;
    // 0x80227E24: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_7:
    // 0x80227E28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227E2C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227E30: jal         0x8022823C
    // 0x80227E34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022823C_ovl15(rdram, ctx);
        goto after_8;
    // 0x80227E34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_8:
    // 0x80227E38: j           L_80227D1C
    // 0x80227E3C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80227D1C;
    // 0x80227E3C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80227E40:
    // 0x80227E40: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227E44: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80227E48: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80227E4C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227E50: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227E54: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_80227FF0;
    }
    // 0x80227E54: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80227E58: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80227E5C: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227E60: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FF0;
    }
    // 0x80227E60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227E64: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227E68: jal         0x80228214
    // 0x80227E6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80228214_ovl15(rdram, ctx);
        goto after_9;
    // 0x80227E6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80227E70: j           L_80227F0C
    // 0x80227E74: nop

        goto L_80227F0C;
    // 0x80227E74: nop

L_80227E78:
    // 0x80227E78: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80227E7C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80227E80: bne         $v1, $v0, L_80227E94
    if (ctx->r3 != ctx->r2) {
        // 0x80227E84: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227E94;
    }
    // 0x80227E84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227E88: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227E8C: jal         0x8022823C
    // 0x80227E90: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8022823C_ovl15(rdram, ctx);
        goto after_10;
    // 0x80227E90: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_10:
L_80227E94:
    // 0x80227E94: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80227E98: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x80227E9C: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227EA0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80227FF0;
    }
    // 0x80227EA0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80227EA4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227EA8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227EAC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80227EB0: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x80227EB4: j           L_80227F0C
    // 0x80227EB8: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
        goto L_80227F0C;
    // 0x80227EB8: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
L_80227EBC:
    // 0x80227EBC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227EC0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80227EC4: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x80227EC8: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    // 0x80227ECC: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80227ED0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227ED4: bne         $v1, $v0, L_80227FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227ED8: addiu       $v0, $zero, 0xA5
        ctx->r2 = ADD32(0, 0XA5);
            goto L_80227FF0;
    }
    // 0x80227ED8: addiu       $v0, $zero, 0xA5
    ctx->r2 = ADD32(0, 0XA5);
    // 0x80227EDC: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x80227EE0: beq         $a1, $v0, L_80227FB8
    if (ctx->r5 == ctx->r2) {
        // 0x80227EE4: slti        $v0, $a1, 0xA6
        ctx->r2 = SIGNED(ctx->r5) < 0XA6 ? 1 : 0;
            goto L_80227FB8;
    }
    // 0x80227EE4: slti        $v0, $a1, 0xA6
    ctx->r2 = SIGNED(ctx->r5) < 0XA6 ? 1 : 0;
    // 0x80227EE8: beq         $v0, $zero, L_80227F00
    if (ctx->r2 == 0) {
        // 0x80227EEC: addiu       $v0, $zero, 0x9B
        ctx->r2 = ADD32(0, 0X9B);
            goto L_80227F00;
    }
    // 0x80227EEC: addiu       $v0, $zero, 0x9B
    ctx->r2 = ADD32(0, 0X9B);
    // 0x80227EF0: beq         $a1, $v0, L_80227FE0
    if (ctx->r5 == ctx->r2) {
        // 0x80227EF4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FE0;
    }
    // 0x80227EF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227EF8: j           L_80227FF0
    // 0x80227EFC: nop

        goto L_80227FF0;
    // 0x80227EFC: nop

L_80227F00:
    // 0x80227F00: addiu       $v0, $zero, 0xAF
    ctx->r2 = ADD32(0, 0XAF);
    // 0x80227F04: bne         $a1, $v0, L_80227FF0
    if (ctx->r5 != ctx->r2) {
        // 0x80227F08: nop
    
            goto L_80227FF0;
    }
    // 0x80227F08: nop

L_80227F0C:
    // 0x80227F0C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227F10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227F14: j           L_80227FF0
    // 0x80227F18: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227FF0;
    // 0x80227F18: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227F1C:
    // 0x80227F1C: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x80227F20: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x80227F24: beq         $a1, $v0, L_80227FDC
    if (ctx->r5 == ctx->r2) {
        // 0x80227F28: slti        $v0, $a1, 0x12D
        ctx->r2 = SIGNED(ctx->r5) < 0X12D ? 1 : 0;
            goto L_80227FDC;
    }
    // 0x80227F28: slti        $v0, $a1, 0x12D
    ctx->r2 = SIGNED(ctx->r5) < 0X12D ? 1 : 0;
    // 0x80227F2C: beq         $v0, $zero, L_80227F68
    if (ctx->r2 == 0) {
        // 0x80227F30: addiu       $v0, $zero, 0xF5
        ctx->r2 = ADD32(0, 0XF5);
            goto L_80227F68;
    }
    // 0x80227F30: addiu       $v0, $zero, 0xF5
    ctx->r2 = ADD32(0, 0XF5);
    // 0x80227F34: beq         $a1, $v0, L_80227FDC
    if (ctx->r5 == ctx->r2) {
        // 0x80227F38: slti        $v0, $a1, 0xF6
        ctx->r2 = SIGNED(ctx->r5) < 0XF6 ? 1 : 0;
            goto L_80227FDC;
    }
    // 0x80227F38: slti        $v0, $a1, 0xF6
    ctx->r2 = SIGNED(ctx->r5) < 0XF6 ? 1 : 0;
    // 0x80227F3C: beq         $v0, $zero, L_80227F54
    if (ctx->r2 == 0) {
        // 0x80227F40: addiu       $v0, $zero, 0xB4
        ctx->r2 = ADD32(0, 0XB4);
            goto L_80227F54;
    }
    // 0x80227F40: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x80227F44: beq         $a1, $v0, L_80227FA0
    if (ctx->r5 == ctx->r2) {
        // 0x80227F48: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FA0;
    }
    // 0x80227F48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227F4C: j           L_80227FF0
    // 0x80227F50: nop

        goto L_80227FF0;
    // 0x80227F50: nop

L_80227F54:
    // 0x80227F54: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227F58: beq         $a1, $v0, L_80227FAC
    if (ctx->r5 == ctx->r2) {
        // 0x80227F5C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FAC;
    }
    // 0x80227F5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227F60: j           L_80227FF0
    // 0x80227F64: nop

        goto L_80227FF0;
    // 0x80227F64: nop

L_80227F68:
    // 0x80227F68: addiu       $v0, $zero, 0x145
    ctx->r2 = ADD32(0, 0X145);
    // 0x80227F6C: beq         $a1, $v0, L_80227FB8
    if (ctx->r5 == ctx->r2) {
        // 0x80227F70: slti        $v0, $a1, 0x146
        ctx->r2 = SIGNED(ctx->r5) < 0X146 ? 1 : 0;
            goto L_80227FB8;
    }
    // 0x80227F70: slti        $v0, $a1, 0x146
    ctx->r2 = SIGNED(ctx->r5) < 0X146 ? 1 : 0;
    // 0x80227F74: beq         $v0, $zero, L_80227F8C
    if (ctx->r2 == 0) {
        // 0x80227F78: addiu       $v0, $zero, 0x140
        ctx->r2 = ADD32(0, 0X140);
            goto L_80227F8C;
    }
    // 0x80227F78: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80227F7C: beq         $a1, $v0, L_80227FD0
    if (ctx->r5 == ctx->r2) {
        // 0x80227F80: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FD0;
    }
    // 0x80227F80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227F84: j           L_80227FF0
    // 0x80227F88: nop

        goto L_80227FF0;
    // 0x80227F88: nop

L_80227F8C:
    // 0x80227F8C: addiu       $v0, $zero, 0x159
    ctx->r2 = ADD32(0, 0X159);
    // 0x80227F90: beq         $a1, $v0, L_80227FE0
    if (ctx->r5 == ctx->r2) {
        // 0x80227F94: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227FE0;
    }
    // 0x80227F94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227F98: j           L_80227FF0
    // 0x80227F9C: nop

        goto L_80227FF0;
    // 0x80227F9C: nop

L_80227FA0:
    // 0x80227FA0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227FA4: j           L_80227FE8
    // 0x80227FA8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
        goto L_80227FE8;
    // 0x80227FA8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_80227FAC:
    // 0x80227FAC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227FB0: j           L_80227FE8
    // 0x80227FB4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
        goto L_80227FE8;
    // 0x80227FB4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_80227FB8:
    // 0x80227FB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227FBC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227FC0: jal         0x80228214
    // 0x80227FC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80228214_ovl15(rdram, ctx);
        goto after_11;
    // 0x80227FC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x80227FC8: j           L_80227FF0
    // 0x80227FCC: nop

        goto L_80227FF0;
    // 0x80227FCC: nop

L_80227FD0:
    // 0x80227FD0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227FD4: j           L_80227FE8
    // 0x80227FD8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
        goto L_80227FE8;
    // 0x80227FD8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_80227FDC:
    // 0x80227FDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227FE0:
    // 0x80227FE0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227FE4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_80227FE8:
    // 0x80227FE8: jal         0x8022823C
    // 0x80227FEC: nop

    func_8022823C_ovl15(rdram, ctx);
        goto after_12;
    // 0x80227FEC: nop

    after_12:
L_80227FF0:
    // 0x80227FF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227FF4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227FF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227FFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228000: jr          $ra
    // 0x80228004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802274B4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802274B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802274B8: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x802274BC: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x802274C0: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x802274C4: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x802274C8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802274CC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802274D0: lw          $v0, 0x1788($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1788);
    // 0x802274D4: jr          $ra
    // 0x802274D8: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802274D8: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_802251B4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251B4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802251B8: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x802251BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802251C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251C8: beq         $v1, $v0, L_802251E4
    if (ctx->r3 == ctx->r2) {
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
    // 0x802251D8: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802251DC: j           L_802251EC
    // 0x802251E0: addiu       $a1, $a1, 0x4CC
    ctx->r5 = ADD32(ctx->r5, 0X4CC);
        goto L_802251EC;
    // 0x802251E0: addiu       $a1, $a1, 0x4CC
    ctx->r5 = ADD32(ctx->r5, 0X4CC);
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
    // 0x80225258: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022525C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80225260: lw          $a0, 0x33C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X33C);
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
    // 0x802252B0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252B4: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x802252B8: lw          $v0, 0x444($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X444);
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
    // 0x802252D0: addiu       $a0, $a0, 0x4A4
    ctx->r4 = ADD32(ctx->r4, 0X4A4);
    // 0x802252D4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252DC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252E0: lw          $v1, 0x4B4($at)
    ctx->r3 = MEM_W(ctx->r1, 0X4B4);
    // 0x802252E4: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252E8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252EC: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252F0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252F4: addiu       $v0, $v0, 0x45C
    ctx->r2 = ADD32(ctx->r2, 0X45C);
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
    // 0x80225310: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225314: jal         0x80225330
    // 0x80225318: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    func_80225330_ovl15(rdram, ctx);
        goto after_4;
    // 0x80225318: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    after_4:
    // 0x8022531C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225320: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225324: jr          $ra
    // 0x80225328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022532C: nop

;}
RECOMP_FUNC void func_802276D4_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802276D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802276D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802276DC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802276E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802276E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802276E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802276EC: lw          $v0, 0x17C8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X17C8);
    // 0x802276F0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x802276F4: jalr        $v0
    // 0x802276F8: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802276F8: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    after_0:
    // 0x802276FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227700: jr          $ra
    // 0x80227704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226918_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226918: jr          $ra
    // 0x8022691C: nop

    TRACE_RETURN()
    return;
    // 0x8022691C: nop

;}
RECOMP_FUNC void func_80226144_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226148: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022614C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226154: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226158: bne         $v0, $zero, L_80226208
    if (ctx->r2 != 0) {
        // 0x8022615C: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_80226208;
    }
    // 0x8022615C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80226160: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x80226164: addiu       $a0, $zero, -0x1DD
    ctx->r4 = ADD32(0, -0X1DD);
    // 0x80226168: lui         $v1, 0xFE23
    ctx->r3 = S32(0XFE23 << 16);
    // 0x8022616C: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80226170: addiu       $v0, $zero, -0x122
    ctx->r2 = ADD32(0, -0X122);
    // 0x80226174: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80226178: lui         $v0, 0x30
    ctx->r2 = S32(0X30 << 16);
    // 0x8022617C: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80226180: lui         $v0, 0xFEDE
    ctx->r2 = S32(0XFEDE << 16);
    // 0x80226184: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80226188: addiu       $v0, $zero, 0x4E3
    ctx->r2 = ADD32(0, 0X4E3);
    // 0x8022618C: sh          $a0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r4;
    // 0x80226190: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x80226194: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80226198: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x8022619C: addiu       $v0, $zero, -0x17D
    ctx->r2 = ADD32(0, -0X17D);
    // 0x802261A0: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x802261A4: addiu       $v0, $zero, -0xA0
    ctx->r2 = ADD32(0, -0XA0);
    // 0x802261A8: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x802261AC: lui         $v0, 0xFE83
    ctx->r2 = S32(0XFE83 << 16);
    // 0x802261B0: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x802261B4: lui         $v0, 0xFF60
    ctx->r2 = S32(0XFF60 << 16);
    // 0x802261B8: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x802261BC: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x802261C0: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x802261C4: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x802261C8: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x802261CC: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x802261D0: addiu       $v0, $zero, -0x16
    ctx->r2 = ADD32(0, -0X16);
    // 0x802261D4: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x802261D8: addiu       $v0, $zero, -0x14C
    ctx->r2 = ADD32(0, -0X14C);
    // 0x802261DC: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x802261E0: lui         $v0, 0xFFEA
    ctx->r2 = S32(0XFFEA << 16);
    // 0x802261E4: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x802261E8: lui         $v0, 0xFEB4
    ctx->r2 = S32(0XFEB4 << 16);
    // 0x802261EC: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x802261F0: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
    // 0x802261F4: sh          $a0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r4;
    // 0x802261F8: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x802261FC: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80226200: jal         0x8004F4F8
    // 0x80226204: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80226204: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    after_0:
L_80226208:
    // 0x80226208: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022620C: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80226210: bne         $v1, $v0, L_80226244
    if (ctx->r3 != ctx->r2) {
        // 0x80226214: addiu       $v0, $zero, -0x1DD
        ctx->r2 = ADD32(0, -0X1DD);
            goto L_80226244;
    }
    // 0x80226214: addiu       $v0, $zero, -0x1DD
    ctx->r2 = ADD32(0, -0X1DD);
    // 0x80226218: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x8022621C: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x80226220: addiu       $v0, $zero, -0x7A
    ctx->r2 = ADD32(0, -0X7A);
    // 0x80226224: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80226228: lui         $v0, 0xFE23
    ctx->r2 = S32(0XFE23 << 16);
    // 0x8022622C: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x80226230: lui         $v0, 0xFF86
    ctx->r2 = S32(0XFF86 << 16);
    // 0x80226234: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x80226238: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x8022623C: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80226240: sh          $zero, 0x56($a1)
    MEM_H(0X56, ctx->r5) = 0;
L_80226244:
    // 0x80226244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226248: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022624C: jr          $ra
    // 0x80226250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
