#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022EADC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EADC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EAE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EAE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EAE8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EAEC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EAF0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EAF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EAF8: beq         $v1, $v0, L_8022EB78
    if (ctx->r3 == ctx->r2) {
        // 0x8022EAFC: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022EB78;
    }
    // 0x8022EAFC: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022EB00: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022EB04: beql        $v0, $zero, L_8022EB1C
    if (ctx->r2 == 0) {
        // 0x8022EB08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022EB1C;
    }
    goto skip_0;
    // 0x8022EB08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022EB0C: beq         $v1, $zero, L_8022EB2C
    if (ctx->r3 == 0) {
        // 0x8022EB10: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EB2C;
    }
    // 0x8022EB10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EB14: j           L_8022EC24
    // 0x8022EB18: nop

        goto L_8022EC24;
    // 0x8022EB18: nop

L_8022EB1C:
    // 0x8022EB1C: beq         $v1, $v0, L_8022EBC0
    if (ctx->r3 == ctx->r2) {
        // 0x8022EB20: nop
    
            goto L_8022EBC0;
    }
    // 0x8022EB20: nop

    // 0x8022EB24: j           L_8022EC24
    // 0x8022EB28: nop

        goto L_8022EC24;
    // 0x8022EB28: nop

L_8022EB2C:
    // 0x8022EB2C: lhu         $v1, 0x4E2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E2);
    // 0x8022EB30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022EB34: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EB38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EB3C: lhu         $a0, 0x4E2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E2);
    // 0x8022EB40: andi        $a1, $v1, 0x1
    ctx->r5 = ctx->r3 & 0X1;
    // 0x8022EB44: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022EB48: srav        $v1, $v1, $a1
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r5 & 31));
    // 0x8022EB4C: srav        $v0, $v0, $a1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r5 & 31));
    // 0x8022EB50: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EB54: andi        $a0, $a0, 0x2
    ctx->r4 = ctx->r4 & 0X2;
    // 0x8022EB58: sh          $v1, 0x4E6($s0)
    MEM_H(0X4E6, ctx->r16) = ctx->r3;
    // 0x8022EB5C: sh          $v1, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r3;
    // 0x8022EB60: beq         $a0, $zero, L_8022EB6C
    if (ctx->r4 == 0) {
        // 0x8022EB64: addiu       $v0, $zero, -0x200
        ctx->r2 = ADD32(0, -0X200);
            goto L_8022EB6C;
    }
    // 0x8022EB64: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8022EB68: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_8022EB6C:
    // 0x8022EB6C: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x8022EB70: sh          $v0, 0x51A($s0)
    MEM_H(0X51A, ctx->r16) = ctx->r2;
    // 0x8022EB74: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_8022EB78:
    // 0x8022EB78: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022EB7C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EB80: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022EB84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EB88: bgtz        $v0, L_8022EBA8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022EB8C: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8022EBA8;
    }
    // 0x8022EB8C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022EB90: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022EB94: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022EB98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EB9C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022EBA0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022EBA4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022EBA8:
    // 0x8022EBA8: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x8022EBAC: lhu         $v1, 0x3A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3A);
    // 0x8022EBB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EBB4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EBB8: j           L_8022EC24
    // 0x8022EBBC: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
        goto L_8022EC24;
    // 0x8022EBBC: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
L_8022EBC0:
    // 0x8022EBC0: lhu         $v0, 0x4E4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E4);
    // 0x8022EBC4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EBC8: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x8022EBCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EBD0: bgez        $v0, L_8022EC24
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EBD4: nop
    
            goto L_8022EC24;
    }
    // 0x8022EBD4: nop

    // 0x8022EBD8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022EBDC: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8022EBE0: bne         $v0, $zero, L_8022EC18
    if (ctx->r2 != 0) {
        // 0x8022EBE4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EC18;
    }
    // 0x8022EBE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EBE8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EBEC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022EBF0: bne         $v0, $zero, L_8022EC08
    if (ctx->r2 != 0) {
        // 0x8022EBF4: nop
    
            goto L_8022EC08;
    }
    // 0x8022EBF4: nop

    // 0x8022EBF8: jal         0x8006033C
    // 0x8022EBFC: lhu         $a0, 0x51C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X51C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022EBFC: lhu         $a0, 0x51C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X51C);
    after_0:
    // 0x8022EC00: beq         $v0, $zero, L_8022EC18
    if (ctx->r2 == 0) {
        // 0x8022EC04: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EC18;
    }
    // 0x8022EC04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022EC08:
    // 0x8022EC08: lhu         $v0, 0x4E0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E0);
    // 0x8022EC0C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022EC10: sh          $v0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r2;
    // 0x8022EC14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022EC18:
    // 0x8022EC18: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022EC1C: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8022EC20: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022EC24:
    // 0x8022EC24: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EC28: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022EC2C: bne         $v0, $zero, L_8022EC44
    if (ctx->r2 != 0) {
        // 0x8022EC30: nop
    
            goto L_8022EC44;
    }
    // 0x8022EC30: nop

    // 0x8022EC34: jal         0x8006033C
    // 0x8022EC38: lhu         $a0, 0x3C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X3C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022EC38: lhu         $a0, 0x3C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X3C);
    after_1:
    // 0x8022EC3C: beq         $v0, $zero, L_8022EC90
    if (ctx->r2 == 0) {
        // 0x8022EC40: nop
    
            goto L_8022EC90;
    }
    // 0x8022EC40: nop

L_8022EC44:
    // 0x8022EC44: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022EC48: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8022EC4C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022EC50: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022EC54: beq         $v0, $zero, L_8022EC70
    if (ctx->r2 == 0) {
        // 0x8022EC58: lui         $v1, 0xFF
        ctx->r3 = S32(0XFF << 16);
            goto L_8022EC70;
    }
    // 0x8022EC58: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022EC5C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x8022EC60: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022EC64: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EC68: beq         $v0, $zero, L_8022EC90
    if (ctx->r2 == 0) {
        // 0x8022EC6C: nop
    
            goto L_8022EC90;
    }
    // 0x8022EC6C: nop

L_8022EC70:
    // 0x8022EC70: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022EC74: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022EC78: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022EC7C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022EC80: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022EC84: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022EC88: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022EC8C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022EC90:
    // 0x8022EC90: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022EC94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EC98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EC9C: jr          $ra
    // 0x8022ECA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022ECA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230E88_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230E8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230E90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230E94: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x80230E98: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x80230E9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230EA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230EA4: jal         0x80050294
    // 0x80230EA8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230EA8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230EAC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230EB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230EB4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230EBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230EC0: jr          $ra
    // 0x80230EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230E10_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230E10: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x80230E14: lw          $a1, 0x1C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1C);
    // 0x80230E18: lw          $v1, 0x98($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X98);
    // 0x80230E1C: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80230E20: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80230E24: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x80230E28: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x80230E2C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80230E30: bne         $v1, $v0, L_80230E48
    if (ctx->r3 != ctx->r2) {
        // 0x80230E34: nop
    
            goto L_80230E48;
    }
    // 0x80230E34: nop

    // 0x80230E38: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80230E3C: sw          $a1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r5;
    // 0x80230E40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230E44: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80230E48:
    // 0x80230E48: jr          $ra
    // 0x80230E4C: nop

    TRACE_RETURN()
    return;
    // 0x80230E4C: nop

;}
RECOMP_FUNC void func_8022A27C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A27C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022A280: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A284: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A288: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022A28C: addiu       $s2, $sp, 0x10
    ctx->r18 = ADD32(ctx->r29, 0X10);
    // 0x8022A290: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022A294: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022A298: addiu       $a1, $a1, -0x20C
    ctx->r5 = ADD32(ctx->r5, -0X20C);
    // 0x8022A29C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A2A0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022A2A4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022A2A8: jal         0x8009A3B4
    // 0x8022A2AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022A2AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022A2B0: lw          $v1, 0x35C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X35C);
    // 0x8022A2B4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022A2B8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022A2BC: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8022A2C0: beq         $a0, $zero, L_8022A460
    if (ctx->r4 == 0) {
        // 0x8022A2C4: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022A460;
    }
    // 0x8022A2C4: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022A2C8: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022A2CC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022A2D0: beql        $v0, $zero, L_8022A458
    if (ctx->r2 == 0) {
        // 0x8022A2D4: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022A458;
    }
    goto skip_0;
    // 0x8022A2D4: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8022A2D8: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022A2DC: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022A2E0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022A2E4: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022A2E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A2EC: bgtz        $v0, L_8022A320
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022A2F0: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022A320;
    }
    // 0x8022A2F0: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022A2F4: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022A2F8: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A2FC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022A300: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022A304: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022A308: ori         $v0, $v0, 0x88
    ctx->r2 = ctx->r2 | 0X88;
    // 0x8022A30C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022A310: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022A314: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022A318: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022A31C: lbu         $a0, 0x9($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X9);
L_8022A320:
    // 0x8022A320: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022A324: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022A328: beq         $v0, $zero, L_8022A404
    if (ctx->r2 == 0) {
        // 0x8022A32C: lui         $v1, 0x2000
        ctx->r3 = S32(0X2000 << 16);
            goto L_8022A404;
    }
    // 0x8022A32C: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022A330: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x8022A334: lw          $v1, 0x35C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X35C);
    // 0x8022A338: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x8022A33C: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8022A340: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022A344: bne         $v1, $zero, L_8022A37C
    if (ctx->r3 != 0) {
        // 0x8022A348: sh          $a0, 0x352($s0)
        MEM_H(0X352, ctx->r16) = ctx->r4;
            goto L_8022A37C;
    }
    // 0x8022A348: sh          $a0, 0x352($s0)
    MEM_H(0X352, ctx->r16) = ctx->r4;
    // 0x8022A34C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A350: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022A354: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022A358: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A35C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A360: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022A364: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x8022A368: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022A36C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A370: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022A374: bne         $v0, $zero, L_8022A444
    if (ctx->r2 != 0) {
        // 0x8022A378: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022A444;
    }
    // 0x8022A378: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8022A37C:
    // 0x8022A37C: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022A380: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022A384: jal         0x8002A33C
    // 0x8022A388: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022A388: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022A38C: lhu         $v0, 0x36A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X36A);
    // 0x8022A390: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022A394: beq         $v0, $zero, L_8022A3E0
    if (ctx->r2 == 0) {
        // 0x8022A398: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022A3E0;
    }
    // 0x8022A398: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A39C: jal         0x8004EC38
    // 0x8022A3A0: addiu       $a1, $s0, 0x364
    ctx->r5 = ADD32(ctx->r16, 0X364);
    func_8004EC38_2A038(rdram, ctx);
        goto after_2;
    // 0x8022A3A0: addiu       $a1, $s0, 0x364
    ctx->r5 = ADD32(ctx->r16, 0X364);
    after_2:
    // 0x8022A3A4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022A3A8: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x8022A3AC: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x8022A3B0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022A3B4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A3B8: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022A3BC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A3C0: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022A3C4: beq         $v0, $zero, L_8022A3D4
    if (ctx->r2 == 0) {
        // 0x8022A3C8: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_8022A3D4;
    }
    // 0x8022A3C8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x8022A3CC: j           L_8022A3F0
    // 0x8022A3D0: sh          $a0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r4;
        goto L_8022A3F0;
    // 0x8022A3D0: sh          $a0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r4;
L_8022A3D4:
    // 0x8022A3D4: addiu       $v0, $a1, 0x800
    ctx->r2 = ADD32(ctx->r5, 0X800);
    // 0x8022A3D8: j           L_8022A3EC
    // 0x8022A3DC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
        goto L_8022A3EC;
    // 0x8022A3DC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_8022A3E0:
    // 0x8022A3E0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022A3E4: jal         0x8004EC38
    // 0x8022A3E8: addiu       $a1, $s0, 0x364
    ctx->r5 = ADD32(ctx->r16, 0X364);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8022A3E8: addiu       $a1, $s0, 0x364
    ctx->r5 = ADD32(ctx->r16, 0X364);
    after_3:
L_8022A3EC:
    // 0x8022A3EC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022A3F0:
    // 0x8022A3F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A3F4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A3F8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022A3FC: j           L_8022A44C
    // 0x8022A400: sh          $zero, 0xA($s3)
    MEM_H(0XA, ctx->r19) = 0;
        goto L_8022A44C;
    // 0x8022A400: sh          $zero, 0xA($s3)
    MEM_H(0XA, ctx->r19) = 0;
L_8022A404:
    // 0x8022A404: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x8022A408: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A40C: bne         $v0, $zero, L_8022A444
    if (ctx->r2 != 0) {
        // 0x8022A410: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022A444;
    }
    // 0x8022A410: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022A414: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A418: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022A41C: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022A420: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A424: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A428: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8022A42C: lh          $v0, 0x352($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X352);
    // 0x8022A430: lbu         $v1, 0x9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X9);
    // 0x8022A434: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022A438: bne         $v0, $zero, L_8022A444
    if (ctx->r2 != 0) {
        // 0x8022A43C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022A444;
    }
    // 0x8022A43C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022A440: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_8022A444:
    // 0x8022A444: jal         0x8002A33C
    // 0x8022A448: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022A448: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
L_8022A44C:
    // 0x8022A44C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022A450: j           L_8022A460
    // 0x8022A454: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
        goto L_8022A460;
    // 0x8022A454: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022A458:
    // 0x8022A458: jal         0x8002A33C
    // 0x8022A45C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022A45C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
L_8022A460:
    // 0x8022A460: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A464: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022A468: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022A46C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022A470: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A474: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A478: jr          $ra
    // 0x8022A47C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022A47C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80235610_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235610: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235614: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235618: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023561C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235620: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80235624: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235628: jal         0x8002C678
    // 0x8023562C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8023562C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80235630: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80235634: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235638: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8023563C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80235640: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80235644: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80235648: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023564C: jal         0x800319B4
    // 0x80235650: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80235650: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_1:
    // 0x80235654: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80235658: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023565C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80235660: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80235664: bne         $v0, $zero, L_8023568C
    if (ctx->r2 != 0) {
        // 0x80235668: addiu       $a0, $zero, 0x186
        ctx->r4 = ADD32(0, 0X186);
            goto L_8023568C;
    }
    // 0x80235668: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    // 0x8023566C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80235670: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235674: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235678: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023567C: jal         0x8002A2F8
    // 0x80235680: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80235680: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    after_2:
    // 0x80235684: jal         0x80060590
    // 0x80235688: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80235688: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_3:
L_8023568C:
    // 0x8023568C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235690: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235694: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235698: jr          $ra
    // 0x8023569C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023569C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234EE0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234EE0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80234EE4: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x80234EE8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80234EEC: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x80234EF0: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x80234EF4: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x80234EF8: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x80234EFC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234F00: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234F04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234F08: lw          $v0, -0xCA0($at)
    ctx->r2 = MEM_W(ctx->r1, -0XCA0);
    // 0x80234F0C: jalr        $v0
    // 0x80234F10: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80234F10: nop

    after_0:
    // 0x80234F14: lb          $v1, 0xD($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XD);
    // 0x80234F18: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80234F1C: bne         $v1, $v0, L_80234F50
    if (ctx->r3 != ctx->r2) {
        // 0x80234F20: nop
    
            goto L_80234F50;
    }
    // 0x80234F20: nop

    // 0x80234F24: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80234F28: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x80234F2C: lw          $v1, 0x30($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X30);
    // 0x80234F30: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80234F34: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80234F38: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80234F3C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80234F40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234F44: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80234F48: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234F4C: sw          $v1, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r3;
L_80234F50:
    // 0x80234F50: jal         0x8006033C
    // 0x80234F54: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80234F54: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_1:
    // 0x80234F58: beq         $v0, $zero, L_80234F78
    if (ctx->r2 == 0) {
        // 0x80234F5C: addiu       $v0, $zero, 0x17
        ctx->r2 = ADD32(0, 0X17);
            goto L_80234F78;
    }
    // 0x80234F5C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x80234F60: lb          $v1, 0xD($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XD);
    // 0x80234F64: bne         $v1, $v0, L_80234F78
    if (ctx->r3 != ctx->r2) {
        // 0x80234F68: nop
    
            goto L_80234F78;
    }
    // 0x80234F68: nop

    // 0x80234F6C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80234F70: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80234F74: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
L_80234F78:
    // 0x80234F78: jal         0x8006033C
    // 0x80234F7C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80234F7C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_2:
    // 0x80234F80: bne         $v0, $zero, L_80235210
    if (ctx->r2 != 0) {
        // 0x80234F84: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80235210;
    }
    // 0x80234F84: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80234F88: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x80234F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234F90: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80234F94: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80234F98: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x80234F9C: jal         0x8002C678
    // 0x80234FA0: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    func_8002C678_7A78(rdram, ctx);
        goto after_3;
    // 0x80234FA0: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    after_3:
    // 0x80234FA4: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x80234FA8: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x80234FAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234FB0: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x80234FB4: sll         $a0, $a0, 11
    ctx->r4 = S32(ctx->r4 << 11);
    // 0x80234FB8: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x80234FBC: jal         0x800319B4
    // 0x80234FC0: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x80234FC0: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x80234FC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234FC8: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80234FCC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234FD0: jal         0x800308E8
    // 0x80234FD4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800308E8_BCE8(rdram, ctx);
        goto after_5;
    // 0x80234FD4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x80234FD8: lh          $v1, 0x38($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X38);
    // 0x80234FDC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80234FE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234FE4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80234FE8: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80234FEC: lh          $v1, 0x3A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3A);
    // 0x80234FF0: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x80234FF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234FF8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80234FFC: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80235000: lh          $v1, 0x3C($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3C);
    // 0x80235004: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80235008: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x8023500C: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x80235010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235014: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235018: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8023501C: jal         0x80031E5C
    // 0x80235020: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_80031E5C_D25C(rdram, ctx);
        goto after_6;
    // 0x80235020: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_6:
    // 0x80235024: jal         0x80031E94
    // 0x80235028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_7;
    // 0x80235028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8023502C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80235030: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80235034: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80235038: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8023503C: jal         0x8009A3B4
    // 0x80235040: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80235040: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80235044: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80235048: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023504C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80235050: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80235054: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80235058: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8023505C: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80235060: jal         0x80031F0C
    // 0x80235064: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_9;
    // 0x80235064: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_9:
    // 0x80235068: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8023506C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80235070: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x80235074: jal         0x8009A3B4
    // 0x80235078: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80235078: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_10:
    // 0x8023507C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80235080: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80235084: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80235088: jal         0x8009A3B4
    // 0x8023508C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8023508C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_11:
    // 0x80235090: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80235094: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80235098: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023509C: jal         0x8009A3B4
    // 0x802350A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x802350A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
    // 0x802350A4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802350A8: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x802350AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802350B0: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x802350B4: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x802350B8: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x802350BC: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x802350C0: jal         0x80031F0C
    // 0x802350C4: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_13;
    // 0x802350C4: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_13:
    // 0x802350C8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x802350CC: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x802350D0: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x802350D4: jal         0x8009A3B4
    // 0x802350D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x802350D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_14:
    // 0x802350DC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802350E0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802350E4: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x802350E8: jal         0x8009A3B4
    // 0x802350EC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x802350EC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_15:
    // 0x802350F0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802350F4: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x802350F8: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    // 0x802350FC: jal         0x8009A3B4
    // 0x80235100: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x80235100: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_16:
    // 0x80235104: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80235108: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8023510C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80235110: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80235114: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80235118: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8023511C: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80235120: jal         0x80031F0C
    // 0x80235124: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_17;
    // 0x80235124: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_17:
    // 0x80235128: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8023512C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80235130: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x80235134: jal         0x8009A3B4
    // 0x80235138: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x80235138: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_18:
    // 0x8023513C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80235140: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80235144: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80235148: jal         0x8009A3B4
    // 0x8023514C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x8023514C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_19:
    // 0x80235150: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x80235154: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80235158: beq         $a2, $a1, L_80235210
    if (ctx->r6 == ctx->r5) {
        // 0x8023515C: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80235210;
    }
    // 0x8023515C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80235160: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x80235164: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80235168: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x8023516C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80235170: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80235174: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235178: mflo        $v0
    ctx->r2 = lo;
    // 0x8023517C: subu        $v1, $a2, $a1
    ctx->r3 = SUB32(ctx->r6, ctx->r5);
    // 0x80235180: nop

    // 0x80235184: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80235188: bne         $v1, $zero, L_80235194
    if (ctx->r3 != 0) {
        // 0x8023518C: nop
    
            goto L_80235194;
    }
    // 0x8023518C: nop

    // 0x80235190: break       7
    do_break(2149798288);
L_80235194:
    // 0x80235194: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80235198: bne         $v1, $at, L_802351AC
    if (ctx->r3 != ctx->r1) {
        // 0x8023519C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802351AC;
    }
    // 0x8023519C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802351A0: bne         $v0, $at, L_802351AC
    if (ctx->r2 != ctx->r1) {
        // 0x802351A4: nop
    
            goto L_802351AC;
    }
    // 0x802351A4: nop

    // 0x802351A8: break       6
    do_break(2149798312);
L_802351AC:
    // 0x802351AC: mflo        $v0
    ctx->r2 = lo;
    // 0x802351B0: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x802351B4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802351B8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802351BC: beq         $v0, $zero, L_80235210
    if (ctx->r2 == 0) {
        // 0x802351C0: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80235210;
    }
    // 0x802351C0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802351C4: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x802351C8: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x802351CC: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802351D0: beq         $v0, $zero, L_802351EC
    if (ctx->r2 == 0) {
        // 0x802351D4: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_802351EC;
    }
    // 0x802351D4: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802351D8: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x802351DC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802351E0: bne         $v0, $zero, L_80235204
    if (ctx->r2 != 0) {
        // 0x802351E4: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_80235204;
    }
    // 0x802351E4: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
    // 0x802351E8: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
L_802351EC:
    // 0x802351EC: beq         $v0, $zero, L_80235210
    if (ctx->r2 == 0) {
        // 0x802351F0: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80235210;
    }
    // 0x802351F0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802351F4: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x802351F8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802351FC: beq         $v0, $zero, L_8023520C
    if (ctx->r2 == 0) {
        // 0x80235200: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_8023520C;
    }
    // 0x80235200: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
L_80235204:
    // 0x80235204: j           L_80235214
    // 0x80235208: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
        goto L_80235214;
    // 0x80235208: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
L_8023520C:
    // 0x8023520C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_80235210:
    // 0x80235210: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80235214:
    // 0x80235214: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    // 0x80235218: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x8023521C: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x80235220: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x80235224: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x80235228: jr          $ra
    // 0x8023522C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x8023522C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8022A730_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A730: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022A734: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022A738: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A73C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022A740: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022A744: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022A748: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022A74C: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022A750: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022A754: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A758: jal         0x8009A3B4
    // 0x8022A75C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022A75C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022A760: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022A764: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022A768: jal         0x8009A3B4
    // 0x8022A76C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A76C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022A770: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022A774: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8022A778: jal         0x8009A3B4
    // 0x8022A77C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022A77C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022A780: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022A784: jal         0x800A3450
    // 0x8022A788: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022A788: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022A78C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022A790: sh          $v0, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r2;
    // 0x8022A794: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022A798: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A79C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A7A0: lw          $v0, -0x1620($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1620);
    // 0x8022A7A4: jalr        $v0
    // 0x8022A7A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022A7A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022A7AC: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022A7B0: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022A7B4: beq         $v0, $a1, L_8022A7D0
    if (ctx->r2 == ctx->r5) {
        // 0x8022A7B8: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022A7D0;
    }
    // 0x8022A7B8: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022A7BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A7C0: jal         0x80050294
    // 0x8022A7C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022A7C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022A7C8: j           L_8022A7D8
    // 0x8022A7CC: nop

        goto L_8022A7D8;
    // 0x8022A7CC: nop

L_8022A7D0:
    // 0x8022A7D0: jal         0x8005044C
    // 0x8022A7D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022A7D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_8022A7D8:
    // 0x8022A7D8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022A7DC: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022A7E0: beq         $v0, $zero, L_8022A7F0
    if (ctx->r2 == 0) {
        // 0x8022A7E4: addiu       $a0, $s1, 0x208
        ctx->r4 = ADD32(ctx->r17, 0X208);
            goto L_8022A7F0;
    }
    // 0x8022A7E4: addiu       $a0, $s1, 0x208
    ctx->r4 = ADD32(ctx->r17, 0X208);
    // 0x8022A7E8: jal         0x80031DA8
    // 0x8022A7EC: addiu       $a1, $s2, 0x34
    ctx->r5 = ADD32(ctx->r18, 0X34);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_7;
    // 0x8022A7EC: addiu       $a1, $s2, 0x34
    ctx->r5 = ADD32(ctx->r18, 0X34);
    after_7:
L_8022A7F0:
    // 0x8022A7F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A7F4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022A7F8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022A7FC: jal         0x8003B564
    // 0x8022A800: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x8022A800: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x8022A804: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022A808: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022A80C: beq         $v0, $zero, L_8022A868
    if (ctx->r2 == 0) {
        // 0x8022A810: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_8022A868;
    }
    // 0x8022A810: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x8022A814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A818: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8022A81C: jal         0x8009A3B4
    // 0x8022A820: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022A820: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8022A824: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A828: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022A82C: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022A830: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A834: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x8022A838: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022A83C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022A840: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x8022A844: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022A848: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022A84C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022A850: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A854: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022A858: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x8022A85C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022A860: jal         0x80051E18
    // 0x8022A864: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_10;
    // 0x8022A864: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_10:
L_8022A868:
    // 0x8022A868: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    // 0x8022A86C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022A870: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022A874: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A878: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022A87C: jr          $ra
    // 0x8022A880: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022A880: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80226500_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226500: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226504: bne         $v0, $zero, L_8022652C
    if (ctx->r2 != 0) {
        // 0x80226508: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022652C;
    }
    // 0x80226508: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022650C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226510: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226514: lui         $v0, 0xFC20
    ctx->r2 = S32(0XFC20 << 16);
    // 0x80226518: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x8022651C: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80226520: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226524: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x80226528: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_8022652C:
    // 0x8022652C: jr          $ra
    // 0x80226530: nop

    TRACE_RETURN()
    return;
    // 0x80226530: nop

;}
RECOMP_FUNC void func_80239018_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239018: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023901C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80239020: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80239024: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80239028: lbu         $s4, 0x4F($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0X4F);
    // 0x8023902C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80239030: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239034: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80239038: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8023903C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80239040: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80239044: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80239048: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x8023904C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80239050: jal         0x8004F144
    // 0x80239054: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80239054: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80239058: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023905C: beq         $s1, $zero, L_802390E4
    if (ctx->r17 == 0) {
        // 0x80239060: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802390E4;
    }
    // 0x80239060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239064: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80239068: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x8023906C: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x80239070: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80239074: sb          $s2, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r18;
    // 0x80239078: sb          $s3, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r19;
    // 0x8023907C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80239080: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x80239084: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80239088: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x8023908C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80239090: sh          $s5, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r21;
    // 0x80239094: beq         $s4, $zero, L_802390A8
    if (ctx->r20 == 0) {
        // 0x80239098: sh          $v0, 0x20($s1)
        MEM_H(0X20, ctx->r17) = ctx->r2;
            goto L_802390A8;
    }
    // 0x80239098: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x8023909C: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802390A0: j           L_802390B0
    // 0x802390A4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_802390B0;
    // 0x802390A4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_802390A8:
    // 0x802390A8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802390AC: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
L_802390B0:
    // 0x802390B0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x802390B4: sw          $s6, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r22;
    // 0x802390B8: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x802390BC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802390C0: blez        $v0, L_802390E4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802390C4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_802390E4;
    }
    // 0x802390C4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802390C8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_802390CC:
    // 0x802390CC: jal         0x80238E88
    // 0x802390D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80238E88_ovl2(rdram, ctx);
        goto after_1;
    // 0x802390D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x802390D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802390D8: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x802390DC: bne         $v0, $zero, L_802390CC
    if (ctx->r2 != 0) {
        // 0x802390E0: nop
    
            goto L_802390CC;
    }
    // 0x802390E0: nop

L_802390E4:
    // 0x802390E4: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x802390E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802390EC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802390F0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802390F4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802390F8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802390FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80239100: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80239104: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80239108: jr          $ra
    // 0x8023910C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023910C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023266C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023266C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232670: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232674: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023267C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232680: bne         $v0, $zero, L_802326A0
    if (ctx->r2 != 0) {
        // 0x80232684: addiu       $a1, $zero, 0x16
        ctx->r5 = ADD32(0, 0X16);
            goto L_802326A0;
    }
    // 0x80232684: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x80232688: jal         0x80050294
    // 0x8023268C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023268C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80232690: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232694: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232698: j           L_802326B0
    // 0x8023269C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802326B0;
    // 0x8023269C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802326A0:
    // 0x802326A0: jal         0x800504EC
    // 0x802326A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_1;
    // 0x802326A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802326A8: jal         0x8005129C
    // 0x802326AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_2;
    // 0x802326AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_802326B0:
    // 0x802326B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802326B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802326B8: jr          $ra
    // 0x802326BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802326BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FBDC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FBDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FBE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FBE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FBE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FBEC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022FBF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FBF4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022FBF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FBFC: beq         $v1, $v0, L_8022FCA4
    if (ctx->r3 == ctx->r2) {
        // 0x8022FC00: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022FCA4;
    }
    // 0x8022FC00: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022FC04: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022FC08: beql        $v0, $zero, L_8022FC20
    if (ctx->r2 == 0) {
        // 0x8022FC0C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022FC20;
    }
    goto skip_0;
    // 0x8022FC0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022FC10: beq         $v1, $zero, L_8022FC30
    if (ctx->r3 == 0) {
        // 0x8022FC14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FC30;
    }
    // 0x8022FC14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FC18: j           L_8022FDC8
    // 0x8022FC1C: nop

        goto L_8022FDC8;
    // 0x8022FC1C: nop

L_8022FC20:
    // 0x8022FC20: beq         $v1, $v0, L_8022FD04
    if (ctx->r3 == ctx->r2) {
        // 0x8022FC24: addiu       $s2, $s0, 0x14
        ctx->r18 = ADD32(ctx->r16, 0X14);
            goto L_8022FD04;
    }
    // 0x8022FC24: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022FC28: j           L_8022FDC8
    // 0x8022FC2C: nop

        goto L_8022FDC8;
    // 0x8022FC2C: nop

L_8022FC30:
    // 0x8022FC30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022FC34: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022FC38: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022FC3C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022FC40: lhu         $v0, -0x143C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X143C);
    // 0x8022FC44: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022FC48: lhu         $v1, -0x1440($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1440);
    // 0x8022FC4C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022FC50: lhu         $a0, -0x143A($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X143A);
    // 0x8022FC54: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FC58: sh          $zero, 0xA2($at)
    MEM_H(0XA2, ctx->r1) = 0;
    // 0x8022FC5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FC60: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8022FC64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FC68: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022FC6C: lhu         $v0, -0x143E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X143E);
    // 0x8022FC70: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022FC74: sra         $a0, $a0, 17
    ctx->r4 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022FC78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FC7C: sh          $v1, 0xA0($at)
    MEM_H(0XA0, ctx->r1) = ctx->r3;
    // 0x8022FC80: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022FC84: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FC88: sh          $v0, 0xA4($at)
    MEM_H(0XA4, ctx->r1) = ctx->r2;
    // 0x8022FC8C: lhu         $v1, 0x4E0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E0);
    // 0x8022FC90: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022FC94: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x8022FC98: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
    // 0x8022FC9C: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x8022FCA0: sh          $v1, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r3;
L_8022FCA4:
    // 0x8022FCA4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022FCA8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FCAC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022FCB0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FCB4: bltz        $v0, L_8022FCE8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022FCB8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022FCE8;
    }
    // 0x8022FCB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FCBC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022FCC0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022FCC4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022FCC8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    // 0x8022FCCC: jal         0x8004F820
    // 0x8022FCD0: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022FCD0: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_0:
    // 0x8022FCD4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FCD8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FCDC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FCE0: j           L_8022FDC8
    // 0x8022FCE4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_8022FDC8;
    // 0x8022FCE4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022FCE8:
    // 0x8022FCE8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022FCEC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FCF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022FCF4: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x8022FCF8: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022FCFC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022FD00: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
L_8022FD04:
    // 0x8022FD04: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022FD08: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022FD0C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022FD10: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    // 0x8022FD14: jal         0x8004F820
    // 0x8022FD18: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022FD18: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x8022FD1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FD20: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x8022FD24: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FD28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FD2C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022FD30: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FD34: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FD38: jal         0x8004DA90
    // 0x8022FD3C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022FD3C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022FD40: jal         0x80040F30
    // 0x8022FD44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022FD44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022FD48: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x8022FD4C: beq         $v0, $zero, L_8022FD5C
    if (ctx->r2 == 0) {
        // 0x8022FD50: addiu       $a0, $zero, 0xD5
        ctx->r4 = ADD32(0, 0XD5);
            goto L_8022FD5C;
    }
    // 0x8022FD50: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x8022FD54: jal         0x8002A33C
    // 0x8022FD58: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022FD58: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
L_8022FD5C:
    // 0x8022FD5C: lh          $a2, 0x14($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X14);
    // 0x8022FD60: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022FD64: lh          $a0, -0x1440($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1440);
    // 0x8022FD68: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022FD6C: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8022FD70: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022FD74: lh          $v1, -0x143E($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X143E);
    // 0x8022FD78: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FD7C: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x8022FD80: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022FD84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FD88: bltz        $v0, L_8022FDB8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022FD8C: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_8022FDB8;
    }
    // 0x8022FD8C: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8022FD90: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022FD94: lh          $v0, -0x143C($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X143C);
    // 0x8022FD98: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x8022FD9C: beq         $v0, $zero, L_8022FDC8
    if (ctx->r2 == 0) {
        // 0x8022FDA0: nop
    
            goto L_8022FDC8;
    }
    // 0x8022FDA0: nop

    // 0x8022FDA4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022FDA8: lh          $v0, -0x143A($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X143A);
    // 0x8022FDAC: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022FDB0: beq         $v0, $zero, L_8022FDC8
    if (ctx->r2 == 0) {
        // 0x8022FDB4: nop
    
            goto L_8022FDC8;
    }
    // 0x8022FDB4: nop

L_8022FDB8:
    // 0x8022FDB8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022FDBC: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x8022FDC0: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x8022FDC4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022FDC8:
    // 0x8022FDC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FDCC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022FDD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FDD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FDD8: jr          $ra
    // 0x8022FDDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FDDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226720_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226720: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80226724: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80226728: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022672C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80226730: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80226734: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80226738: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022673C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80226740: lw          $v1, 0x28($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X28);
    // 0x80226744: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x80226748: lhu         $s2, 0x14($v1)
    ctx->r18 = MEM_HU(ctx->r3, 0X14);
    // 0x8022674C: lhu         $s3, 0x16($v1)
    ctx->r19 = MEM_HU(ctx->r3, 0X16);
    // 0x80226750: lhu         $s4, 0x18($v1)
    ctx->r20 = MEM_HU(ctx->r3, 0X18);
    // 0x80226754: bne         $v0, $zero, L_80226768
    if (ctx->r2 != 0) {
        // 0x80226758: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226768;
    }
    // 0x80226758: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022675C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226760: lw          $v0, 0x28($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X28);
    // 0x80226764: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80226768:
    // 0x80226768: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022676C: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x80226770: bne         $v1, $v0, L_802267FC
    if (ctx->r3 != ctx->r2) {
        // 0x80226774: addiu       $v0, $zero, 0xF0
        ctx->r2 = ADD32(0, 0XF0);
            goto L_802267FC;
    }
    // 0x80226774: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80226778: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022677C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226780: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80226784: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80226788: addiu       $v0, $s2, -0x40
    ctx->r2 = ADD32(ctx->r18, -0X40);
    // 0x8022678C: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80226790: addiu       $v0, $s3, -0x174
    ctx->r2 = ADD32(ctx->r19, -0X174);
    // 0x80226794: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80226798: addiu       $v0, $s4, 0x58
    ctx->r2 = ADD32(ctx->r20, 0X58);
    // 0x8022679C: addiu       $s0, $zero, -0x2
    ctx->r16 = ADD32(0, -0X2);
    // 0x802267A0: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x802267A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802267A8: jal         0x80239018
    // 0x802267AC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80239018_ovl2(rdram, ctx);
        goto after_0;
    // 0x802267AC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x802267B0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802267B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802267B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802267BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802267C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802267C4: sw          $v0, 0x70($at)
    MEM_W(0X70, ctx->r1) = ctx->r2;
    // 0x802267C8: addiu       $v0, $zero, -0x15E
    ctx->r2 = ADD32(0, -0X15E);
    // 0x802267CC: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x802267D0: addiu       $v0, $zero, -0x226
    ctx->r2 = ADD32(0, -0X226);
    // 0x802267D4: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x802267D8: addiu       $v0, $zero, -0x384
    ctx->r2 = ADD32(0, -0X384);
    // 0x802267DC: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x802267E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802267E4: jal         0x80239018
    // 0x802267E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80239018_ovl2(rdram, ctx);
        goto after_1;
    // 0x802267E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x802267EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802267F0: sw          $v0, 0x80($at)
    MEM_W(0X80, ctx->r1) = ctx->r2;
    // 0x802267F4: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x802267F8: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_802267FC:
    // 0x802267FC: bne         $v1, $v0, L_80226840
    if (ctx->r3 != ctx->r2) {
        // 0x80226800: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_80226840;
    }
    // 0x80226800: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80226804: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226808: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022680C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80226810: addiu       $v0, $s2, 0x7E
    ctx->r2 = ADD32(ctx->r18, 0X7E);
    // 0x80226814: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80226818: addiu       $v0, $s3, -0x180
    ctx->r2 = ADD32(ctx->r19, -0X180);
    // 0x8022681C: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80226820: addiu       $v0, $s4, 0x28
    ctx->r2 = ADD32(ctx->r20, 0X28);
    // 0x80226824: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80226828: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x8022682C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80226830: jal         0x80239018
    // 0x80226834: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80239018_ovl2(rdram, ctx);
        goto after_2;
    // 0x80226834: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x80226838: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022683C: sw          $v0, 0x74($at)
    MEM_W(0X74, ctx->r1) = ctx->r2;
L_80226840:
    // 0x80226840: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80226844: addiu       $v0, $zero, 0xF5
    ctx->r2 = ADD32(0, 0XF5);
    // 0x80226848: bne         $v1, $v0, L_80226898
    if (ctx->r3 != ctx->r2) {
        // 0x8022684C: addiu       $v0, $zero, 0x104
        ctx->r2 = ADD32(0, 0X104);
            goto L_80226898;
    }
    // 0x8022684C: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x80226850: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80226854: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226858: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022685C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80226860: addiu       $v0, $s2, 0x38
    ctx->r2 = ADD32(ctx->r18, 0X38);
    // 0x80226864: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80226868: addiu       $v0, $s3, -0xE8
    ctx->r2 = ADD32(ctx->r19, -0XE8);
    // 0x8022686C: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80226870: addiu       $v0, $s4, 0x78
    ctx->r2 = ADD32(ctx->r20, 0X78);
    // 0x80226874: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80226878: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x8022687C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80226880: jal         0x80239018
    // 0x80226884: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80239018_ovl2(rdram, ctx);
        goto after_3;
    // 0x80226884: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x80226888: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022688C: sw          $v0, 0x78($at)
    MEM_W(0X78, ctx->r1) = ctx->r2;
    // 0x80226890: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80226894: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
L_80226898:
    // 0x80226898: bne         $v1, $v0, L_802268DC
    if (ctx->r3 != ctx->r2) {
        // 0x8022689C: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_802268DC;
    }
    // 0x8022689C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802268A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802268A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802268A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802268AC: addiu       $v0, $s2, -0x28
    ctx->r2 = ADD32(ctx->r18, -0X28);
    // 0x802268B0: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x802268B4: addiu       $v0, $s3, -0x128
    ctx->r2 = ADD32(ctx->r19, -0X128);
    // 0x802268B8: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x802268BC: addiu       $v0, $s4, 0xC4
    ctx->r2 = ADD32(ctx->r20, 0XC4);
    // 0x802268C0: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x802268C4: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x802268C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802268CC: jal         0x80239018
    // 0x802268D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80239018_ovl2(rdram, ctx);
        goto after_4;
    // 0x802268D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_4:
    // 0x802268D4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802268D8: sw          $v0, 0x7C($at)
    MEM_W(0X7C, ctx->r1) = ctx->r2;
L_802268DC:
    // 0x802268DC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802268E0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802268E4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802268E8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802268EC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802268F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802268F4: jr          $ra
    // 0x802268F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802268F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022C100_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C100: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022C104: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C108: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C10C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022C110: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022C114: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022C118: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C11C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022C120: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022C124: beq         $v1, $zero, L_8022C140
    if (ctx->r3 == 0) {
        // 0x8022C128: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022C140;
    }
    // 0x8022C128: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022C12C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C130: beq         $v1, $v0, L_8022C158
    if (ctx->r3 == ctx->r2) {
        // 0x8022C134: nop
    
            goto L_8022C158;
    }
    // 0x8022C134: nop

    // 0x8022C138: j           L_8022C334
    // 0x8022C13C: nop

        goto L_8022C334;
    // 0x8022C13C: nop

L_8022C140:
    // 0x8022C140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C144: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C148: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C14C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022C150: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x8022C154: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
L_8022C158:
    // 0x8022C158: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022C15C: lui         $v0, 0xC
    ctx->r2 = S32(0XC << 16);
    // 0x8022C160: ori         $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 | 0X7FFF;
    // 0x8022C164: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022C168: bne         $v0, $zero, L_8022C1C0
    if (ctx->r2 != 0) {
        // 0x8022C16C: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_8022C1C0;
    }
    // 0x8022C16C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C170: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022C174: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022C178: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x8022C17C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C180: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x8022C184: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8022C188: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022C18C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C190: jal         0x8004FAEC
    // 0x8022C194: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_0;
    // 0x8022C194: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022C198: beq         $v0, $zero, L_8022C1A8
    if (ctx->r2 == 0) {
        // 0x8022C19C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022C1A8;
    }
    // 0x8022C19C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022C1A0: j           L_8022C1B8
    // 0x8022C1A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C1B8;
    // 0x8022C1A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C1A8:
    // 0x8022C1A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C1AC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C1B0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022C1B4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022C1B8:
    // 0x8022C1B8: j           L_8022C334
    // 0x8022C1BC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022C334;
    // 0x8022C1BC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022C1C0:
    // 0x8022C1C0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C1C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C1C8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022C1CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C1D0: bgezl       $v0, L_8022C22C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C1D4: addiu       $s1, $s0, 0x14
        ctx->r17 = ADD32(ctx->r16, 0X14);
            goto L_8022C22C;
    }
    goto skip_0;
    // 0x8022C1D4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x8022C1D8: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C1DC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x8022C1E0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022C1E4: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x8022C1E8: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8022C1EC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022C1F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C1F4: jal         0x8004FAEC
    // 0x8022C1F8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x8022C1F8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022C1FC: beq         $v0, $zero, L_8022C20C
    if (ctx->r2 == 0) {
        // 0x8022C200: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C20C;
    }
    // 0x8022C200: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C204: j           L_8022C21C
    // 0x8022C208: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022C21C;
    // 0x8022C208: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C20C:
    // 0x8022C20C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C210: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022C214: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C218: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_8022C21C:
    // 0x8022C21C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022C220: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022C224: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x8022C228: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
L_8022C22C:
    // 0x8022C22C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C230: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C234: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022C238: jal         0x8004F820
    // 0x8022C23C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022C23C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_2:
    // 0x8022C240: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C244: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022C248: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C24C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C250: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C254: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C258: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C25C: jal         0x8004DA90
    // 0x8022C260: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022C260: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_3:
    // 0x8022C264: jal         0x80040F30
    // 0x8022C268: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x8022C268: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022C26C: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022C270: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x8022C274: bne         $v1, $zero, L_8022C288
    if (ctx->r3 != 0) {
        // 0x8022C278: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_8022C288;
    }
    // 0x8022C278: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022C27C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x8022C280: jal         0x8002A33C
    // 0x8022C284: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022C284: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
L_8022C288:
    // 0x8022C288: jal         0x8003E934
    // 0x8022C28C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8022C28C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022C290: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C294: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022C298: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022C29C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C2A0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022C2A4: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022C2A8: bltz        $v0, L_8022C2C0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C2AC: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022C2C0;
    }
    // 0x8022C2AC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C2B0: beq         $v0, $zero, L_8022C2D4
    if (ctx->r2 == 0) {
        // 0x8022C2B4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C2D4;
    }
    // 0x8022C2B4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C2B8: j           L_8022C314
    // 0x8022C2BC: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
        goto L_8022C314;
    // 0x8022C2BC: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
L_8022C2C0:
    // 0x8022C2C0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022C2C4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022C2C8: bne         $v0, $zero, L_8022C314
    if (ctx->r2 != 0) {
        // 0x8022C2CC: andi        $v0, $s2, 0xF00
        ctx->r2 = ctx->r18 & 0XF00;
            goto L_8022C314;
    }
    // 0x8022C2CC: andi        $v0, $s2, 0xF00
    ctx->r2 = ctx->r18 & 0XF00;
    // 0x8022C2D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022C2D4:
    // 0x8022C2D4: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022C2D8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022C2DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C2E0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022C2E4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022C2E8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022C2EC: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022C2F0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022C2F4: jal         0x8009A3B4
    // 0x8022C2F8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022C2F8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_7:
    // 0x8022C2FC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C300: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022C304: jal         0x8009A3B4
    // 0x8022C308: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022C308: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_8:
    // 0x8022C30C: j           L_8022C334
    // 0x8022C310: nop

        goto L_8022C334;
    // 0x8022C310: nop

L_8022C314:
    // 0x8022C314: beq         $v0, $zero, L_8022C334
    if (ctx->r2 == 0) {
        // 0x8022C318: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022C334;
    }
    // 0x8022C318: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022C31C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022C320: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022C324: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022C328: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022C32C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022C330: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022C334:
    // 0x8022C334: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022C338: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022C33C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C344: jr          $ra
    // 0x8022C348: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022C348: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023BFF0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BFF0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8023BFF4: lui         $a3, 0xE200
    ctx->r7 = S32(0XE200 << 16);
    // 0x8023BFF8: ori         $a3, $a3, 0x1C
    ctx->r7 = ctx->r7 | 0X1C;
    // 0x8023BFFC: lui         $a2, 0xC810
    ctx->r6 = S32(0XC810 << 16);
    // 0x8023C000: ori         $a2, $a2, 0x49D8
    ctx->r6 = ctx->r6 | 0X49D8;
    // 0x8023C004: lui         $t0, 0x4040
    ctx->r8 = S32(0X4040 << 16);
    // 0x8023C008: ori         $t0, $t0, 0x4080
    ctx->r8 = ctx->r8 | 0X4080;
    // 0x8023C00C: lui         $t1, 0xFC40
    ctx->r9 = S32(0XFC40 << 16);
    // 0x8023C010: ori         $t1, $t1, 0x97FF
    ctx->r9 = ctx->r9 | 0X97FF;
    // 0x8023C014: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8023C018: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8023C01C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023C020: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    // 0x8023C024: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8023C028: lui         $s0, 0xE700
    ctx->r16 = S32(0XE700 << 16);
    // 0x8023C02C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8023C030: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8023C034: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8023C038: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8023C03C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8023C040: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8023C044: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8023C048: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8023C04C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8023C050: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x8023C054: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C058: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8023C05C: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x8023C060: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C064: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8023C068: lui         $v1, 0xDE00
    ctx->r3 = S32(0XDE00 << 16);
    // 0x8023C06C: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8023C070: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8023C074: addiu       $v1, $v1, -0x1660
    ctx->r3 = ADD32(ctx->r3, -0X1660);
    // 0x8023C078: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8023C07C: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x8023C080: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C084: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8023C088: addiu       $v1, $v0, 0x20
    ctx->r3 = ADD32(ctx->r2, 0X20);
    // 0x8023C08C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C090: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8023C094: lui         $v1, 0xFA00
    ctx->r3 = S32(0XFA00 << 16);
    // 0x8023C098: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x8023C09C: addiu       $v1, $v0, 0x28
    ctx->r3 = ADD32(ctx->r2, 0X28);
    // 0x8023C0A0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C0A4: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8023C0A8: addiu       $v1, $zero, -0x1C8
    ctx->r3 = ADD32(0, -0X1C8);
    // 0x8023C0AC: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x8023C0B0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8023C0B4: sw          $a3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r7;
    // 0x8023C0B8: sw          $a2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r6;
    // 0x8023C0BC: sw          $t0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r8;
    // 0x8023C0C0: sw          $t1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r9;
    // 0x8023C0C4: jal         0x80087248
    // 0x8023C0C8: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    func_80087248_62648(rdram, ctx);
        goto after_0;
    // 0x8023C0C8: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    after_0:
    // 0x8023C0CC: lui         $t0, 0xF500
    ctx->r8 = S32(0XF500 << 16);
    // 0x8023C0D0: ori         $t0, $t0, 0x100
    ctx->r8 = ctx->r8 | 0X100;
    // 0x8023C0D4: lui         $t1, 0x703
    ctx->r9 = S32(0X703 << 16);
    // 0x8023C0D8: ori         $t1, $t1, 0xC000
    ctx->r9 = ctx->r9 | 0XC000;
    // 0x8023C0DC: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    // 0x8023C0E0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8023C0E4: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8023C0E8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8023C0EC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8023C0F0: lui         $s1, 0xE600
    ctx->r17 = S32(0XE600 << 16);
    // 0x8023C0F4: addiu       $a3, $v1, 0x8
    ctx->r7 = ADD32(ctx->r3, 0X8);
    // 0x8023C0F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C0FC: sw          $a3, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r7;
    // 0x8023C100: lui         $a3, 0xFD10
    ctx->r7 = S32(0XFD10 << 16);
    // 0x8023C104: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8023C108: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8023C10C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C110: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8023C114: lui         $v0, 0xE800
    ctx->r2 = S32(0XE800 << 16);
    // 0x8023C118: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x8023C11C: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x8023C120: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C124: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8023C128: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x8023C12C: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x8023C130: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x8023C134: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C138: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8023C13C: addiu       $v0, $v1, 0x28
    ctx->r2 = ADD32(ctx->r3, 0X28);
    // 0x8023C140: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C144: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8023C148: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x8023C14C: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x8023C150: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x8023C154: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x8023C158: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x8023C15C: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x8023C160: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
    // 0x8023C164: sw          $s1, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r17;
    // 0x8023C168: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x8023C16C: sw          $t1, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r9;
    // 0x8023C170: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C174: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8023C178: sw          $s0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r16;
    // 0x8023C17C: jal         0x8002CA30
    // 0x8023C180: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
    func_8002CA30_7E30(rdram, ctx);
        goto after_1;
    // 0x8023C180: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
    after_1:
    // 0x8023C184: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
    // 0x8023C188: beq         $t1, $zero, L_8023C264
    if (ctx->r9 == 0) {
        // 0x8023C18C: lui         $v1, 0xFD48
        ctx->r3 = S32(0XFD48 << 16);
            goto L_8023C264;
    }
    // 0x8023C18C: lui         $v1, 0xFD48
    ctx->r3 = S32(0XFD48 << 16);
    // 0x8023C190: ori         $v1, $v1, 0x3F
    ctx->r3 = ctx->r3 | 0X3F;
    // 0x8023C194: lui         $a1, 0xF548
    ctx->r5 = S32(0XF548 << 16);
    // 0x8023C198: ori         $a1, $a1, 0x400
    ctx->r5 = ctx->r5 | 0X400;
    // 0x8023C19C: lui         $a0, 0x701
    ctx->r4 = S32(0X701 << 16);
    // 0x8023C1A0: ori         $a0, $a0, 0x4050
    ctx->r4 = ctx->r4 | 0X4050;
    // 0x8023C1A4: lui         $a2, 0x703
    ctx->r6 = S32(0X703 << 16);
    // 0x8023C1A8: ori         $a2, $a2, 0xE07C
    ctx->r6 = ctx->r6 | 0XE07C;
    // 0x8023C1AC: lui         $t0, 0xF540
    ctx->r8 = S32(0XF540 << 16);
    // 0x8023C1B0: ori         $t0, $t0, 0x400
    ctx->r8 = ctx->r8 | 0X400;
    // 0x8023C1B4: lui         $a3, 0x1
    ctx->r7 = S32(0X1 << 16);
    // 0x8023C1B8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8023C1BC: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8023C1C0: ori         $a3, $a3, 0x4050
    ctx->r7 = ctx->r7 | 0X4050;
    // 0x8023C1C4: lui         $t2, 0x7
    ctx->r10 = S32(0X7 << 16);
    // 0x8023C1C8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8023C1CC: lw          $t1, 0x4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4);
    // 0x8023C1D0: ori         $t2, $t2, 0xC07C
    ctx->r10 = ctx->r10 | 0XC07C;
    // 0x8023C1D4: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x8023C1D8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C1DC: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8023C1E0: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x8023C1E4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C1E8: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8023C1EC: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x8023C1F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C1F4: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8023C1F8: addiu       $v1, $v0, 0x20
    ctx->r3 = ADD32(ctx->r2, 0X20);
    // 0x8023C1FC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C200: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8023C204: lui         $v1, 0xF400
    ctx->r3 = S32(0XF400 << 16);
    // 0x8023C208: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x8023C20C: addiu       $v1, $v0, 0x28
    ctx->r3 = ADD32(ctx->r2, 0X28);
    // 0x8023C210: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C214: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8023C218: addiu       $v1, $v0, 0x30
    ctx->r3 = ADD32(ctx->r2, 0X30);
    // 0x8023C21C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C220: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8023C224: addiu       $v1, $v0, 0x38
    ctx->r3 = ADD32(ctx->r2, 0X38);
    // 0x8023C228: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C22C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8023C230: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x8023C234: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    // 0x8023C238: sw          $a0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r4;
    // 0x8023C23C: sw          $s1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r17;
    // 0x8023C240: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x8023C244: sw          $a2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r6;
    // 0x8023C248: sw          $s0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r16;
    // 0x8023C24C: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x8023C250: sw          $t0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r8;
    // 0x8023C254: sw          $a3, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r7;
    // 0x8023C258: sw          $v1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r3;
    // 0x8023C25C: sw          $t2, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r10;
    // 0x8023C260: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
L_8023C264:
    // 0x8023C264: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x8023C268: addiu       $s5, $sp, 0x18
    ctx->r21 = ADD32(ctx->r29, 0X18);
    // 0x8023C26C: lui         $fp, 0xF200
    ctx->r30 = S32(0XF200 << 16);
    // 0x8023C270: lui         $s4, 0x600
    ctx->r20 = S32(0X600 << 16);
    // 0x8023C274: ori         $s4, $s4, 0x402
    ctx->r20 = ctx->r20 | 0X402;
    // 0x8023C278: addiu       $s3, $zero, -0x77FF
    ctx->r19 = ADD32(0, -0X77FF);
L_8023C27C:
    // 0x8023C27C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8023C280: addiu       $s7, $zero, 0x604
    ctx->r23 = ADD32(0, 0X604);
    // 0x8023C284: addiu       $s1, $zero, -0x77FF
    ctx->r17 = ADD32(0, -0X77FF);
L_8023C288:
    // 0x8023C288: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8023C28C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x8023C290: addiu       $a1, $a1, 0x4760
    ctx->r5 = ADD32(ctx->r5, 0X4760);
    // 0x8023C294: jal         0x8009A3B4
    // 0x8023C298: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023C298: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
    // 0x8023C29C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x8023C2A0: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
    // 0x8023C2A4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8023C2A8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8023C2AC: addiu       $v0, $zero, -0xA00
    ctx->r2 = ADD32(0, -0XA00);
    // 0x8023C2B0: sh          $s1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r17;
    // 0x8023C2B4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023C2B8: jal         0x800308E8
    // 0x8023C2BC: sh          $s3, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r19;
    func_800308E8_BCE8(rdram, ctx);
        goto after_3;
    // 0x8023C2BC: sh          $s3, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r19;
    after_3:
    // 0x8023C2C0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8023C2C4: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x8023C2C8: lw          $v0, 0x4774($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4774);
    // 0x8023C2CC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8023C2D0: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x8023C2D4: lw          $v1, 0x4778($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4778);
    // 0x8023C2D8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8023C2DC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x8023C2E0: lw          $a0, 0x477C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X477C);
    // 0x8023C2E4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023C2E8: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8023C2EC: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
    // 0x8023C2F0: addiu       $v0, $a3, -0x1
    ctx->r2 = ADD32(ctx->r7, -0X1);
    // 0x8023C2F4: sltiu       $v0, $v0, 0x3BFF
    ctx->r2 = ctx->r2 < 0X3BFF ? 1 : 0;
    // 0x8023C2F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8023C2FC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8023C300: beq         $v0, $zero, L_8023C4A4
    if (ctx->r2 == 0) {
        // 0x8023C304: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_8023C4A4;
    }
    // 0x8023C304: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8023C308: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x8023C30C: ori         $a3, $a3, 0x1
    ctx->r7 = ctx->r7 | 0X1;
    // 0x8023C310: div         $zero, $v0, $a3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r7)));
    // 0x8023C314: bne         $a3, $zero, L_8023C320
    if (ctx->r7 != 0) {
        // 0x8023C318: nop
    
            goto L_8023C320;
    }
    // 0x8023C318: nop

    // 0x8023C31C: break       7
    do_break(2149827356);
L_8023C320:
    // 0x8023C320: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023C324: bne         $a3, $at, L_8023C338
    if (ctx->r7 != ctx->r1) {
        // 0x8023C328: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023C338;
    }
    // 0x8023C328: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023C32C: bne         $v0, $at, L_8023C338
    if (ctx->r2 != ctx->r1) {
        // 0x8023C330: nop
    
            goto L_8023C338;
    }
    // 0x8023C330: nop

    // 0x8023C334: break       6
    do_break(2149827380);
L_8023C338:
    // 0x8023C338: mflo        $v0
    ctx->r2 = lo;
    // 0x8023C33C: addiu       $v0, $v0, 0x29F
    ctx->r2 = ADD32(ctx->r2, 0X29F);
    // 0x8023C340: sltiu       $v0, $v0, 0x53F
    ctx->r2 = ctx->r2 < 0X53F ? 1 : 0;
    // 0x8023C344: beql        $v0, $zero, L_8023C4A8
    if (ctx->r2 == 0) {
        // 0x8023C348: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8023C4A8;
    }
    goto skip_0;
    // 0x8023C348: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x8023C34C: sll         $v0, $a2, 8
    ctx->r2 = S32(ctx->r6 << 8);
    // 0x8023C350: div         $zero, $v0, $a3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r7)));
    // 0x8023C354: bne         $a3, $zero, L_8023C360
    if (ctx->r7 != 0) {
        // 0x8023C358: nop
    
            goto L_8023C360;
    }
    // 0x8023C358: nop

    // 0x8023C35C: break       7
    do_break(2149827420);
L_8023C360:
    // 0x8023C360: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023C364: bne         $a3, $at, L_8023C378
    if (ctx->r7 != ctx->r1) {
        // 0x8023C368: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023C378;
    }
    // 0x8023C368: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023C36C: bne         $v0, $at, L_8023C378
    if (ctx->r2 != ctx->r1) {
        // 0x8023C370: nop
    
            goto L_8023C378;
    }
    // 0x8023C370: nop

    // 0x8023C374: break       6
    do_break(2149827444);
L_8023C378:
    // 0x8023C378: mflo        $v0
    ctx->r2 = lo;
    // 0x8023C37C: addiu       $v0, $v0, 0x1B7
    ctx->r2 = ADD32(ctx->r2, 0X1B7);
    // 0x8023C380: sltiu       $v0, $v0, 0x36F
    ctx->r2 = ctx->r2 < 0X36F ? 1 : 0;
    // 0x8023C384: beql        $v0, $zero, L_8023C4A8
    if (ctx->r2 == 0) {
        // 0x8023C388: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8023C4A8;
    }
    goto skip_1;
    // 0x8023C388: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x8023C38C: jal         0x800281C8
    // 0x8023C390: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_800281C8_35C8(rdram, ctx);
        goto after_4;
    // 0x8023C390: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_4:
    // 0x8023C394: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023C398: beql        $s0, $zero, L_8023C4A8
    if (ctx->r16 == 0) {
        // 0x8023C39C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8023C4A8;
    }
    goto skip_2;
    // 0x8023C39C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x8023C3A0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8023C3A4: jal         0x8002C5A4
    // 0x8023C3A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002C5A4_79A4(rdram, ctx);
        goto after_5;
    // 0x8023C3A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8023C3AC: lui         $a1, 0xDA38
    ctx->r5 = S32(0XDA38 << 16);
    // 0x8023C3B0: ori         $a1, $a1, 0x3
    ctx->r5 = ctx->r5 | 0X3;
    // 0x8023C3B4: lui         $a2, 0x100
    ctx->r6 = S32(0X100 << 16);
    // 0x8023C3B8: ori         $a2, $a2, 0x4008
    ctx->r6 = ctx->r6 | 0X4008;
    // 0x8023C3BC: lui         $a3, 0x7
    ctx->r7 = S32(0X7 << 16);
    // 0x8023C3C0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8023C3C4: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8023C3C8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8023C3CC: lw          $a0, 0x6C94($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6C94);
    // 0x8023C3D0: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x8023C3D4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8023C3D8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C3DC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8023C3E0: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8023C3E4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C3E8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8023C3EC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023C3F0: addiu       $v0, $v0, -0x320
    ctx->r2 = ADD32(ctx->r2, -0X320);
    // 0x8023C3F4: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x8023C3F8: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x8023C3FC: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8023C400: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C404: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8023C408: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x8023C40C: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x8023C410: andi        $a0, $a0, 0x7C
    ctx->r4 = ctx->r4 & 0X7C;
    // 0x8023C414: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C418: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8023C41C: sll         $v0, $a0, 12
    ctx->r2 = S32(ctx->r4 << 12);
    // 0x8023C420: or          $v0, $v0, $fp
    ctx->r2 = ctx->r2 | ctx->r30;
    // 0x8023C424: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x8023C428: addiu       $a1, $a0, 0x7C
    ctx->r5 = ADD32(ctx->r4, 0X7C);
    // 0x8023C42C: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x8023C430: sll         $v0, $a1, 12
    ctx->r2 = S32(ctx->r5 << 12);
    // 0x8023C434: ori         $v0, $v0, 0x7C
    ctx->r2 = ctx->r2 | 0X7C;
    // 0x8023C438: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8023C43C: addiu       $v0, $v1, 0x28
    ctx->r2 = ADD32(ctx->r3, 0X28);
    // 0x8023C440: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C444: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8023C448: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x8023C44C: sw          $t3, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r11;
    // 0x8023C450: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C454: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8023C458: addiu       $v0, $v1, 0x38
    ctx->r2 = ADD32(ctx->r3, 0X38);
    // 0x8023C45C: or          $a0, $a0, $fp
    ctx->r4 = ctx->r4 | ctx->r30;
    // 0x8023C460: or          $a1, $a1, $a3
    ctx->r5 = ctx->r5 | ctx->r7;
    // 0x8023C464: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C468: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8023C46C: addiu       $v0, $v1, 0x40
    ctx->r2 = ADD32(ctx->r3, 0X40);
    // 0x8023C470: sw          $s0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r16;
    // 0x8023C474: sw          $a2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r6;
    // 0x8023C478: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x8023C47C: sw          $s4, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r20;
    // 0x8023C480: sw          $s7, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r23;
    // 0x8023C484: sw          $t3, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r11;
    // 0x8023C488: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
    // 0x8023C48C: sw          $a0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r4;
    // 0x8023C490: sw          $a1, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r5;
    // 0x8023C494: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023C498: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8023C49C: sw          $s4, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r20;
    // 0x8023C4A0: sw          $s7, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r23;
L_8023C4A4:
    // 0x8023C4A4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8023C4A8:
    // 0x8023C4A8: slti        $v0, $s2, 0x10
    ctx->r2 = SIGNED(ctx->r18) < 0X10 ? 1 : 0;
    // 0x8023C4AC: bne         $v0, $zero, L_8023C288
    if (ctx->r2 != 0) {
        // 0x8023C4B0: addiu       $s1, $s1, 0x1000
        ctx->r17 = ADD32(ctx->r17, 0X1000);
            goto L_8023C288;
    }
    // 0x8023C4B0: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
    // 0x8023C4B4: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8023C4B8: slti        $v0, $s6, 0x10
    ctx->r2 = SIGNED(ctx->r22) < 0X10 ? 1 : 0;
    // 0x8023C4BC: bne         $v0, $zero, L_8023C27C
    if (ctx->r2 != 0) {
        // 0x8023C4C0: addiu       $s3, $s3, 0x1000
        ctx->r19 = ADD32(ctx->r19, 0X1000);
            goto L_8023C27C;
    }
    // 0x8023C4C0: addiu       $s3, $s3, 0x1000
    ctx->r19 = ADD32(ctx->r19, 0X1000);
    // 0x8023C4C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023C4C8: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8023C4CC: sw          $v0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r2;
    // 0x8023C4D0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8023C4D4: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x8023C4D8: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8023C4DC: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8023C4E0: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8023C4E4: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8023C4E8: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8023C4EC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8023C4F0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8023C4F4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8023C4F8: jr          $ra
    // 0x8023C4FC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8023C4FC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8022AE58_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE58: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022AE5C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8022AE60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AE64: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022AE68: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022AE6C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022AE70: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AE74: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022AE78: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022AE7C: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x8022AE80: beq         $v0, $zero, L_8022B1F0
    if (ctx->r2 == 0) {
        // 0x8022AE84: addiu       $s2, $s0, 0x308
        ctx->r18 = ADD32(ctx->r16, 0X308);
            goto L_8022B1F0;
    }
    // 0x8022AE84: addiu       $s2, $s0, 0x308
    ctx->r18 = ADD32(ctx->r16, 0X308);
    // 0x8022AE88: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022AE8C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022AE90: addu        $at, $at, $v0
    gpr jr_addend_8022AE98 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AE94: lw          $v0, -0x200($at)
    ctx->r2 = ADD32(ctx->r1, -0X200);
    // 0x8022AE98: jr          $v0
    // 0x8022AE9C: nop

    switch (jr_addend_8022AE98 >> 2) {
        case 0: goto L_8022AEA0; break;
        case 1: goto L_8022AEB4; break;
        case 2: goto L_8022AF00; break;
        case 3: goto L_8022AF2C; break;
        case 4: goto L_8022AF84; break;
        case 5: goto L_8022AF90; break;
        case 6: goto L_8022B190; break;
        case 7: goto L_8022AFD8; break;
        case 8: goto L_8022B134; break;
        case 9: goto L_8022B190; break;
        case 10: goto L_8022B1B8; break;
        default: switch_error(__func__, 0x8022AE98, 0x8023FE00);
    }
    // 0x8022AE9C: nop

L_8022AEA0:
    // 0x8022AEA0: jal         0x8022ACDC
    // 0x8022AEA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022ACDC_ovl2(rdram, ctx);
        goto after_0;
    // 0x8022AEA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022AEA8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AEAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AEB0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022AEB4:
    // 0x8022AEB4: jal         0x8022B640
    // 0x8022AEB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B640_ovl2(rdram, ctx);
        goto after_1;
    // 0x8022AEB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022AEBC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022AEC0: beq         $v0, $zero, L_8022AEDC
    if (ctx->r2 == 0) {
        // 0x8022AEC4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AEDC;
    }
    // 0x8022AEC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AEC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AECC: jal         0x80050294
    // 0x8022AED0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022AED0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022AED4: j           L_8022AEF4
    // 0x8022AED8: nop

        goto L_8022AEF4;
    // 0x8022AED8: nop

L_8022AEDC:
    // 0x8022AEDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022AEE0: jal         0x80050294
    // 0x8022AEE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022AEE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8022AEE8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022AEEC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022AEF0: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022AEF4:
    // 0x8022AEF4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AEF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AEFC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022AF00:
    // 0x8022AF00: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x8022AF04: bne         $v0, $s0, L_8022B1F4
    if (ctx->r2 != ctx->r16) {
        // 0x8022AF08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B1F4;
    }
    // 0x8022AF08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AF0C: jal         0x8022B688
    // 0x8022AF10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B688_ovl2(rdram, ctx);
        goto after_4;
    // 0x8022AF10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022AF14: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022AF18: beql        $v0, $zero, L_8022B1F0
    if (ctx->r2 == 0) {
        // 0x8022AF1C: sw          $zero, 0x184($s1)
        MEM_W(0X184, ctx->r17) = 0;
            goto L_8022B1F0;
    }
    goto skip_0;
    // 0x8022AF1C: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    skip_0:
    // 0x8022AF20: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AF24: j           L_8022B1EC
    // 0x8022AF28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B1EC;
    // 0x8022AF28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022AF2C:
    // 0x8022AF2C: jal         0x8006FF84
    // 0x8022AF30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_5;
    // 0x8022AF30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8022AF34: beq         $v0, $zero, L_8022B1F0
    if (ctx->r2 == 0) {
        // 0x8022AF38: addiu       $a0, $zero, 0x3FE
        ctx->r4 = ADD32(0, 0X3FE);
            goto L_8022B1F0;
    }
    // 0x8022AF38: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x8022AF3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022AF40: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AF44: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022AF48: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022AF4C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022AF50: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x8022AF54: jal         0x8004CB2C
    // 0x8022AF58: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_6;
    // 0x8022AF58: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    after_6:
    // 0x8022AF5C: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AF60: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AF64: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8022AF68: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022AF6C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022AF70: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x8022AF74: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022AF78: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    // 0x8022AF7C: j           L_8022B1F0
    // 0x8022AF80: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
        goto L_8022B1F0;
    // 0x8022AF80: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
L_8022AF84:
    // 0x8022AF84: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AF88: j           L_8022B1EC
    // 0x8022AF8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B1EC;
    // 0x8022AF8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022AF90:
    // 0x8022AF90: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022AF94: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022AF98: bne         $v0, $zero, L_8022AFC0
    if (ctx->r2 != 0) {
        // 0x8022AF9C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AFC0;
    }
    // 0x8022AF9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AFA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022AFA4: jal         0x80050294
    // 0x8022AFA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022AFA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022AFAC: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x8022AFB0: jal         0x8002A33C
    // 0x8022AFB4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022AFB4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_8:
    // 0x8022AFB8: j           L_8022AFCC
    // 0x8022AFBC: nop

        goto L_8022AFCC;
    // 0x8022AFBC: nop

L_8022AFC0:
    // 0x8022AFC0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AFC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AFC8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022AFCC:
    // 0x8022AFCC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AFD0: j           L_8022B1EC
    // 0x8022AFD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B1EC;
    // 0x8022AFD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022AFD8:
    // 0x8022AFD8: jal         0x8022B640
    // 0x8022AFDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B640_ovl2(rdram, ctx);
        goto after_9;
    // 0x8022AFDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022AFE0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022AFE4: beql        $v0, $zero, L_8022B118
    if (ctx->r2 == 0) {
        // 0x8022AFE8: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_8022B118;
    }
    goto skip_1;
    // 0x8022AFE8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_1:
    // 0x8022AFEC: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022AFF0: bne         $v1, $zero, L_8022B014
    if (ctx->r3 != 0) {
        // 0x8022AFF4: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022B014;
    }
    // 0x8022AFF4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022AFF8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AFFC: lb          $a3, 0xE($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XE);
    // 0x8022B000: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022B004: jal         0x800610AC
    // 0x8022B008: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_10;
    // 0x8022B008: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x8022B00C: j           L_8022B128
    // 0x8022B010: nop

        goto L_8022B128;
    // 0x8022B010: nop

L_8022B014:
    // 0x8022B014: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B018: bnel        $v1, $v0, L_8022B03C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B01C: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_8022B03C;
    }
    goto skip_2;
    // 0x8022B01C: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    skip_2:
    // 0x8022B020: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B024: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022B028: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B02C: jal         0x800610AC
    // 0x8022B030: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_11;
    // 0x8022B030: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x8022B034: j           L_8022B128
    // 0x8022B038: nop

        goto L_8022B128;
    // 0x8022B038: nop

L_8022B03C:
    // 0x8022B03C: beq         $v0, $zero, L_8022B0A0
    if (ctx->r2 == 0) {
        // 0x8022B040: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_8022B0A0;
    }
    // 0x8022B040: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x8022B044: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x8022B048: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8022B04C: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8022B050: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022B054: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022B058: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x8022B05C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022B060: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x8022B064: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022B068: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022B06C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022B070: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022B074: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x8022B078: mfhi        $t0
    ctx->r8 = hi;
    // 0x8022B07C: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8022B080: nop

    // 0x8022B084: jal         0x80069754
    // 0x8022B088: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    func_80069754_44B54(rdram, ctx);
        goto after_12;
    // 0x8022B088: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    after_12:
    // 0x8022B08C: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022B090: jal         0x8006036C
    // 0x8022B094: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x8022B094: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_13:
    // 0x8022B098: j           L_8022B128
    // 0x8022B09C: nop

        goto L_8022B128;
    // 0x8022B09C: nop

L_8022B0A0:
    // 0x8022B0A0: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022B0A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B0A8: beq         $v1, $v0, L_8022B114
    if (ctx->r3 == ctx->r2) {
        // 0x8022B0AC: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_8022B114;
    }
    // 0x8022B0AC: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8022B0B0: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022B0B4: xori        $v1, $v0, 0x40
    ctx->r3 = ctx->r2 ^ 0X40;
    // 0x8022B0B8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022B0BC: xori        $v0, $v0, 0x42
    ctx->r2 = ctx->r2 ^ 0X42;
    // 0x8022B0C0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022B0C4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022B0C8: beq         $v1, $zero, L_8022B0E8
    if (ctx->r3 == 0) {
        // 0x8022B0CC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B0E8;
    }
    // 0x8022B0CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B0D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022B0D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B0D8: jal         0x800610AC
    // 0x8022B0DC: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_14;
    // 0x8022B0DC: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    after_14:
    // 0x8022B0E0: j           L_8022B0FC
    // 0x8022B0E4: nop

        goto L_8022B0FC;
    // 0x8022B0E4: nop

L_8022B0E8:
    // 0x8022B0E8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022B0EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B0F0: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8022B0F4: jal         0x80069754
    // 0x8022B0F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_15;
    // 0x8022B0F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_15:
L_8022B0FC:
    // 0x8022B0FC: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022B100: jal         0x8006036C
    // 0x8022B104: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_16;
    // 0x8022B104: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_16:
    // 0x8022B108: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x8022B10C: j           L_8022B128
    // 0x8022B110: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_8022B128;
    // 0x8022B110: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_8022B114:
    // 0x8022B114: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_8022B118:
    // 0x8022B118: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022B11C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B120: jal         0x80069754
    // 0x8022B124: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_17;
    // 0x8022B124: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_17:
L_8022B128:
    // 0x8022B128: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B12C: j           L_8022B1EC
    // 0x8022B130: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B1EC;
    // 0x8022B130: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B134:
    // 0x8022B134: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B138: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022B13C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022B140: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022B144: bne         $v0, $zero, L_8022B1F4
    if (ctx->r2 != 0) {
        // 0x8022B148: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B1F4;
    }
    // 0x8022B148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B14C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022B150: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022B154: bne         $v0, $zero, L_8022B178
    if (ctx->r2 != 0) {
        // 0x8022B158: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8022B178;
    }
    // 0x8022B158: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022B15C: jal         0x80050294
    // 0x8022B160: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_18;
    // 0x8022B160: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_18:
    // 0x8022B164: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    // 0x8022B168: jal         0x8002A33C
    // 0x8022B16C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_19;
    // 0x8022B16C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_19:
    // 0x8022B170: j           L_8022B184
    // 0x8022B174: nop

        goto L_8022B184;
    // 0x8022B174: nop

L_8022B178:
    // 0x8022B178: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B17C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B180: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B184:
    // 0x8022B184: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B188: j           L_8022B1EC
    // 0x8022B18C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B1EC;
    // 0x8022B18C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B190:
    // 0x8022B190: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022B194: bgez        $v0, L_8022B1A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B198: nop
    
            goto L_8022B1A8;
    }
    // 0x8022B198: nop

    // 0x8022B19C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B1A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B1A4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B1A8:
    // 0x8022B1A8: jal         0x8005044C
    // 0x8022B1AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_20;
    // 0x8022B1AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x8022B1B0: j           L_8022B1F4
    // 0x8022B1B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022B1F4;
    // 0x8022B1B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022B1B8:
    // 0x8022B1B8: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x8022B1BC: jal         0x8004CB2C
    // 0x8022B1C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_21;
    // 0x8022B1C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_21:
    // 0x8022B1C4: jal         0x80070050
    // 0x8022B1C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_22;
    // 0x8022B1C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_22:
    // 0x8022B1CC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022B1D0: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022B1D4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B1D8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022B1DC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022B1E0: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022B1E4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8022B1E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B1EC:
    // 0x8022B1EC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B1F0:
    // 0x8022B1F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022B1F4:
    // 0x8022B1F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022B1F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B1FC: jal         0x80047284
    // 0x8022B200: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_23;
    // 0x8022B200: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_23:
    // 0x8022B204: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B208: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022B20C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B210: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022B214: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022B218: addiu       $v0, $s2, 0x18
    ctx->r2 = ADD32(ctx->r18, 0X18);
    // 0x8022B21C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022B220: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022B224: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022B228: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B22C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022B230: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022B234: jal         0x80051E18
    // 0x8022B238: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_24;
    // 0x8022B238: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_24:
    // 0x8022B23C: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x8022B240: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022B244: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022B248: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022B24C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022B250: jr          $ra
    // 0x8022B254: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022B254: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022BEA4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BEA4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022BEA8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022BEAC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022BEB0: addiu       $a0, $s1, 0x504
    ctx->r4 = ADD32(ctx->r17, 0X504);
    // 0x8022BEB4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022BEB8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022BEBC: addiu       $s2, $s1, 0x4E0
    ctx->r18 = ADD32(ctx->r17, 0X4E0);
    // 0x8022BEC0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022BEC4: jal         0x800540D0
    // 0x8022BEC8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022BEC8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022BECC: beq         $v0, $zero, L_8022BEE0
    if (ctx->r2 == 0) {
        // 0x8022BED0: nop
    
            goto L_8022BEE0;
    }
    // 0x8022BED0: nop

    // 0x8022BED4: lhu         $v0, 0x4E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E0);
    // 0x8022BED8: j           L_8022BEE8
    // 0x8022BEDC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_8022BEE8;
    // 0x8022BEDC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_8022BEE0:
    // 0x8022BEE0: lhu         $v0, 0x4E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E0);
    // 0x8022BEE4: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
L_8022BEE8:
    // 0x8022BEE8: sh          $v0, 0x4E0($s1)
    MEM_H(0X4E0, ctx->r17) = ctx->r2;
    // 0x8022BEEC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022BEF0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BEF4: beq         $v0, $zero, L_8022BF04
    if (ctx->r2 == 0) {
        // 0x8022BEF8: nop
    
            goto L_8022BF04;
    }
    // 0x8022BEF8: nop

    // 0x8022BEFC: jal         0x8022E234
    // 0x8022BF00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022E234_ovl2(rdram, ctx);
        goto after_1;
    // 0x8022BF00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
L_8022BF04:
    // 0x8022BF04: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022BF08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BF0C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BF10: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BF14: lw          $v0, -0x15AC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X15AC);
    // 0x8022BF18: jalr        $v0
    // 0x8022BF1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022BF1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022BF20: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022BF24: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022BF28: beq         $v0, $zero, L_8022BF90
    if (ctx->r2 == 0) {
        // 0x8022BF2C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022BF90;
    }
    // 0x8022BF2C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022BF30: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022BF34: beq         $v1, $v0, L_8022BF6C
    if (ctx->r3 == ctx->r2) {
        // 0x8022BF38: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_8022BF6C;
    }
    // 0x8022BF38: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x8022BF3C: beq         $v0, $zero, L_8022BF54
    if (ctx->r2 == 0) {
        // 0x8022BF40: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022BF54;
    }
    // 0x8022BF40: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BF44: beq         $v1, $v0, L_8022BF60
    if (ctx->r3 == ctx->r2) {
        // 0x8022BF48: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022BF60;
    }
    // 0x8022BF48: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022BF4C: j           L_8022BF7C
    // 0x8022BF50: nop

        goto L_8022BF7C;
    // 0x8022BF50: nop

L_8022BF54:
    // 0x8022BF54: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022BF58: bne         $v1, $v0, L_8022BF7C
    if (ctx->r3 != ctx->r2) {
        // 0x8022BF5C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022BF7C;
    }
    // 0x8022BF5C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022BF60:
    // 0x8022BF60: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x8022BF64: j           L_8022BF80
    // 0x8022BF68: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8022BF80;
    // 0x8022BF68: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022BF6C:
    // 0x8022BF6C: lh          $v0, 0x6E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6E);
    // 0x8022BF70: bgtz        $v0, L_8022BF7C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022BF74: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022BF7C;
    }
    // 0x8022BF74: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022BF78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022BF7C:
    // 0x8022BF7C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022BF80:
    // 0x8022BF80: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8022BF84: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022BF88: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022BF8C: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022BF90:
    // 0x8022BF90: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x8022BF94: beq         $v0, $zero, L_8022BFA4
    if (ctx->r2 == 0) {
        // 0x8022BF98: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022BFA4;
    }
    // 0x8022BF98: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BF9C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022BFA0: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
L_8022BFA4:
    // 0x8022BFA4: lh          $v0, 0x3C($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X3C);
    // 0x8022BFA8: beq         $v0, $zero, L_8022BFB8
    if (ctx->r2 == 0) {
        // 0x8022BFAC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022BFB8;
    }
    // 0x8022BFAC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BFB0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022BFB4: sh          $v0, 0x3C($s2)
    MEM_H(0X3C, ctx->r18) = ctx->r2;
L_8022BFB8:
    // 0x8022BFB8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022BFBC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BFC0: beq         $v0, $zero, L_8022BFD8
    if (ctx->r2 == 0) {
        // 0x8022BFC4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022BFD8;
    }
    // 0x8022BFC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BFC8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022BFCC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022BFD0: jal         0x8003B564
    // 0x8022BFD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x8022BFD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
L_8022BFD8:
    // 0x8022BFD8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022BFDC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022BFE0: beql        $v0, $zero, L_8022C04C
    if (ctx->r2 == 0) {
        // 0x8022BFE4: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_8022C04C;
    }
    goto skip_0;
    // 0x8022BFE4: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_0:
    // 0x8022BFE8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022BFEC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022BFF0: beq         $v0, $zero, L_8022C048
    if (ctx->r2 == 0) {
        // 0x8022BFF4: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_8022C048;
    }
    // 0x8022BFF4: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x8022BFF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BFFC: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8022C000: jal         0x8009A3B4
    // 0x8022C004: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022C004: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022C008: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C00C: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    // 0x8022C010: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022C014: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C018: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x8022C01C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C020: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022C024: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x8022C028: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022C02C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022C030: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022C034: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x8022C038: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022C03C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022C040: jal         0x80051E18
    // 0x8022C044: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_5;
    // 0x8022C044: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_5:
L_8022C048:
    // 0x8022C048: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_8022C04C:
    // 0x8022C04C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022C050: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022C054: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022C058: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022C05C: jr          $ra
    // 0x8022C060: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022C060: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_802321E0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802321E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802321E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802321E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802321EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802321F0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802321F4: beql        $v0, $zero, L_80232248
    if (ctx->r2 == 0) {
        // 0x802321F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232248;
    }
    goto skip_0;
    // 0x802321F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x802321FC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232200: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232204: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232208: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023220C: lw          $v0, -0xDE8($at)
    ctx->r2 = MEM_W(ctx->r1, -0XDE8);
    // 0x80232210: jalr        $v0
    // 0x80232214: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232214: nop

    after_0:
    // 0x80232218: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8023221C: jal         0x8004DD04
    // 0x80232220: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80232220: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80232224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232228: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x8023222C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80232230: jal         0x8003B564
    // 0x80232234: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_2;
    // 0x80232234: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80232238: jal         0x8005044C
    // 0x8023223C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x8023223C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80232240: j           L_802322BC
    // 0x80232244: nop

        goto L_802322BC;
    // 0x80232244: nop

L_80232248:
    // 0x80232248: jal         0x8004D5D4
    // 0x8023224C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_4;
    // 0x8023224C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x80232250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232254: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80232258: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023225C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232260: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x80232264: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80232268: lui         $v0, 0xE3FF
    ctx->r2 = S32(0XE3FF << 16);
    // 0x8023226C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80232270: lui         $v0, 0x300
    ctx->r2 = S32(0X300 << 16);
    // 0x80232274: jal         0x80050294
    // 0x80232278: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80232278: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    after_5:
    // 0x8023227C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80232280: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232284: sb          $v0, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = ctx->r2;
    // 0x80232288: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x8023228C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80232290: sb          $v0, 0x128($s0)
    MEM_B(0X128, ctx->r16) = ctx->r2;
    // 0x80232294: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80232298: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8023229C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802322A0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802322A4: addiu       $v0, $zero, 0x14A5
    ctx->r2 = ADD32(0, 0X14A5);
    // 0x802322A8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802322AC: sb          $zero, 0x103($s0)
    MEM_B(0X103, ctx->r16) = 0;
    // 0x802322B0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802322B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802322B8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_802322BC:
    // 0x802322BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802322C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802322C4: jr          $ra
    // 0x802322C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802322C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235FD8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235FD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235FDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235FE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235FE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235FE8: jal         0x8002C654
    // 0x80235FEC: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80235FEC: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    after_0:
    // 0x80235FF0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235FF4: lw          $v1, -0x3A2C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A2C);
    // 0x80235FF8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80235FFC: lhu         $v1, 0x1BA($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X1BA);
    // 0x80236000: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236004: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236008: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x8023600C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236010: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236014: jr          $ra
    // 0x80236018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802338B4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802338B4: jr          $ra
    // 0x802338B8: nop

    TRACE_RETURN()
    return;
    // 0x802338B8: nop

;}
RECOMP_FUNC void func_802323A4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802323A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802323A8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802323AC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x802323B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802323B4: jal         0x8004DA90
    // 0x802323B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802323B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802323BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802323C0: jr          $ra
    // 0x802323C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802323C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233320_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233324: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80233328: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023332C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233330: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80233334: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233338: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8023333C: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x80233340: bne         $v0, $zero, L_8023334C
    if (ctx->r2 != 0) {
        // 0x80233344: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023334C;
    }
    // 0x80233344: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233348: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
L_8023334C:
    // 0x8023334C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80233350: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x80233354: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    // 0x80233358: jal         0x8009A3B4
    // 0x8023335C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023335C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80233360: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233364: jr          $ra
    // 0x80233368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022861C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022861C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228620: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228624: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228628: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022862C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228630: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228634: beq         $v1, $zero, L_80228650
    if (ctx->r3 == 0) {
        // 0x80228638: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80228650;
    }
    // 0x80228638: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022863C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228640: beq         $v1, $v0, L_80228694
    if (ctx->r3 == ctx->r2) {
        // 0x80228644: nop
    
            goto L_80228694;
    }
    // 0x80228644: nop

    // 0x80228648: j           L_80228784
    // 0x8022864C: nop

        goto L_80228784;
    // 0x8022864C: nop

L_80228650:
    // 0x80228650: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80228654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228658: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022865C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228660: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228664: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80228668: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022866C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80228670: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80228674: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x80228678: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022867C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80228680: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80228684: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80228688: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022868C: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80228690: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
L_80228694:
    // 0x80228694: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x80228698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022869C: bne         $v1, $v0, L_802286AC
    if (ctx->r3 != ctx->r2) {
        // 0x802286A0: addiu       $a0, $zero, 0xB5
        ctx->r4 = ADD32(0, 0XB5);
            goto L_802286AC;
    }
    // 0x802286A0: addiu       $a0, $zero, 0xB5
    ctx->r4 = ADD32(0, 0XB5);
    // 0x802286A4: jal         0x8002A33C
    // 0x802286A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802286A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_802286AC:
    // 0x802286AC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802286B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802286B4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802286B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802286BC: bgtz        $v0, L_802286D8
    if (SIGNED(ctx->r2) > 0) {
        // 0x802286C0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802286D8;
    }
    // 0x802286C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802286C4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802286C8: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x802286CC: sh          $v1, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r3;
    // 0x802286D0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802286D4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802286D8:
    // 0x802286D8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802286DC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802286E0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802286E4: jal         0x8004F820
    // 0x802286E8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802286E8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x802286EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802286F0: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x802286F4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x802286F8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802286FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228700: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228704: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228708: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022870C: jal         0x8004DA90
    // 0x80228710: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80228710: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x80228714: jal         0x80040F30
    // 0x80228718: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80228718: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022871C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228720: jal         0x8003E934
    // 0x80228724: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x80228724: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_4:
    // 0x80228728: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022872C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80228730: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80228734: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228738: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022873C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80228740: bltz        $v0, L_80228758
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228744: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80228758;
    }
    // 0x80228744: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80228748: beq         $v0, $zero, L_80228768
    if (ctx->r2 == 0) {
        // 0x8022874C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80228768;
    }
    // 0x8022874C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228750: j           L_80228784
    // 0x80228754: nop

        goto L_80228784;
    // 0x80228754: nop

L_80228758:
    // 0x80228758: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022875C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80228760: bne         $v0, $zero, L_80228784
    if (ctx->r2 != 0) {
        // 0x80228764: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80228784;
    }
    // 0x80228764: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80228768:
    // 0x80228768: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022876C: jal         0x8009A3B4
    // 0x80228770: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80228770: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80228774: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228778: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022877C: jal         0x8009A3B4
    // 0x80228780: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80228780: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
L_80228784:
    // 0x80228784: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228788: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022878C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228790: jr          $ra
    // 0x80228794: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228794: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229E78_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229E78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229E7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229E80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229E84: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229E88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229E8C: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x80229E90: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80229E94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229E98: beq         $v0, $zero, L_80229EA4
    if (ctx->r2 == 0) {
        // 0x80229E9C: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80229EA4;
    }
    // 0x80229E9C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80229EA0: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
L_80229EA4:
    // 0x80229EA4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229EA8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80229EAC: beq         $v0, $zero, L_8022A1A4
    if (ctx->r2 == 0) {
        // 0x80229EB0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022A1A4;
    }
    // 0x80229EB0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229EB4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229EB8: addu        $at, $at, $v0
    gpr jr_addend_80229EC0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229EBC: lw          $v0, -0x220($at)
    ctx->r2 = ADD32(ctx->r1, -0X220);
    // 0x80229EC0: jr          $v0
    // 0x80229EC4: nop

    switch (jr_addend_80229EC0 >> 2) {
        case 0: goto L_80229EC8; break;
        case 1: goto L_80229F0C; break;
        case 2: goto L_80229FC4; break;
        case 3: goto L_8022A020; break;
        case 4: goto L_8022A100; break;
        default: switch_error(__func__, 0x80229EC0, 0x8023FDE0);
    }
    // 0x80229EC4: nop

L_80229EC8:
    // 0x80229EC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229ECC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229ED0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80229ED4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229ED8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80229EDC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80229EE0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229EE4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80229EE8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80229EEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229EF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229EF4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80229EF8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229EFC: lbu         $v1, 0xA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XA);
    // 0x80229F00: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x80229F04: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80229F08: sh          $v1, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r3;
L_80229F0C:
    // 0x80229F0C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80229F10: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229F14: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80229F18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229F1C: bgez        $v0, L_80229F40
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229F20: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229F40;
    }
    // 0x80229F20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229F24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229F28: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229F2C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229F30: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229F34: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80229F38: j           L_80229FC4
    // 0x80229F3C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80229FC4;
    // 0x80229F3C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80229F40:
    // 0x80229F40: addiu       $a1, $zero, -0x50
    ctx->r5 = ADD32(0, -0X50);
    // 0x80229F44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229F48: jal         0x8004DA90
    // 0x80229F4C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80229F4C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80229F50: jal         0x80040F30
    // 0x80229F54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80229F54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229F58: jal         0x8003E934
    // 0x80229F5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80229F5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80229F60: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229F64: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80229F68: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80229F6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229F70: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229F74: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80229F78: bltz        $v0, L_80229F90
    if (SIGNED(ctx->r2) < 0) {
        // 0x80229F7C: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80229F90;
    }
    // 0x80229F7C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80229F80: beq         $v0, $zero, L_80229FA0
    if (ctx->r2 == 0) {
        // 0x80229F84: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229FA0;
    }
    // 0x80229F84: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229F88: j           L_8022A1A4
    // 0x80229F8C: nop

        goto L_8022A1A4;
    // 0x80229F8C: nop

L_80229F90:
    // 0x80229F90: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80229F94: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80229F98: bne         $v0, $zero, L_8022A1A4
    if (ctx->r2 != 0) {
        // 0x80229F9C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022A1A4;
    }
    // 0x80229F9C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80229FA0:
    // 0x80229FA0: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80229FA4: jal         0x8009A3B4
    // 0x80229FA8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80229FA8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80229FAC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80229FB0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80229FB4: jal         0x8009A3B4
    // 0x80229FB8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80229FB8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80229FBC: j           L_8022A1A4
    // 0x80229FC0: nop

        goto L_8022A1A4;
    // 0x80229FC0: nop

L_80229FC4:
    // 0x80229FC4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80229FC8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229FCC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80229FD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229FD4: bgez        $v0, L_8022A1A4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229FD8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A1A4;
    }
    // 0x80229FD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229FDC: addiu       $a1, $zero, 0x640
    ctx->r5 = ADD32(0, 0X640);
    // 0x80229FE0: addiu       $a2, $zero, -0x5A0
    ctx->r6 = ADD32(0, -0X5A0);
    // 0x80229FE4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80229FE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229FEC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229FF0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80229FF4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229FF8: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x80229FFC: jal         0x8004DA90
    // 0x8022A000: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022A000: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    after_5:
    // 0x8022A004: jal         0x80040F30
    // 0x8022A008: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_6;
    // 0x8022A008: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022A00C: addiu       $a0, $zero, 0xBA
    ctx->r4 = ADD32(0, 0XBA);
    // 0x8022A010: jal         0x8002A33C
    // 0x8022A014: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022A014: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_7:
    // 0x8022A018: j           L_8022A1A4
    // 0x8022A01C: nop

        goto L_8022A1A4;
    // 0x8022A01C: nop

L_8022A020:
    // 0x8022A020: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022A024: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A028: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022A02C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A030: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A034: bgez        $v0, L_8022A054
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A038: nop
    
            goto L_8022A054;
    }
    // 0x8022A038: nop

    // 0x8022A03C: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A040: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A044: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022A048: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A04C: j           L_8022A06C
    // 0x8022A050: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
        goto L_8022A06C;
    // 0x8022A050: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
L_8022A054:
    // 0x8022A054: nop

    // 0x8022A058: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A05C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A060: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022A064: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A068: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_8022A06C:
    // 0x8022A06C: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022A070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A074: addiu       $a1, $zero, 0x370
    ctx->r5 = ADD32(0, 0X370);
    // 0x8022A078: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022A07C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A080: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A084: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A088: jal         0x8004DA90
    // 0x8022A08C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_8;
    // 0x8022A08C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_8:
    // 0x8022A090: jal         0x80040F30
    // 0x8022A094: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_9;
    // 0x8022A094: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022A098: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A09C: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022A0A0: bnel        $v0, $zero, L_8022A0A8
    if (ctx->r2 != 0) {
        // 0x8022A0A4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022A0A8;
    }
    goto skip_0;
    // 0x8022A0A4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8022A0A8:
    // 0x8022A0A8: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022A0AC: beq         $v0, $zero, L_8022A0CC
    if (ctx->r2 == 0) {
        // 0x8022A0B0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022A0CC;
    }
    // 0x8022A0B0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A0B4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A0B8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A0BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A0C0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A0C4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022A0C8: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_8022A0CC:
    // 0x8022A0CC: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x8022A0D0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022A0D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A0D8: beq         $v0, $zero, L_8022A1A4
    if (ctx->r2 == 0) {
        // 0x8022A0DC: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8022A1A4;
    }
    // 0x8022A0DC: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8022A0E0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A0E4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022A0E8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022A0EC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022A0F0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A0F4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022A0F8: j           L_8022A1A4
    // 0x8022A0FC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
        goto L_8022A1A4;
    // 0x8022A0FC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
L_8022A100:
    // 0x8022A100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A104: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022A108: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A10C: jal         0x8004DA90
    // 0x8022A110: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_10;
    // 0x8022A110: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x8022A114: jal         0x80040F30
    // 0x8022A118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_11;
    // 0x8022A118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8022A11C: jal         0x8003E934
    // 0x8022A120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_12;
    // 0x8022A120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x8022A124: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A128: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022A12C: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022A130: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A134: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A138: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022A13C: bltz        $v0, L_8022A154
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A140: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022A154;
    }
    // 0x8022A140: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022A144: beq         $v0, $zero, L_8022A164
    if (ctx->r2 == 0) {
        // 0x8022A148: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022A164;
    }
    // 0x8022A148: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A14C: j           L_8022A180
    // 0x8022A150: nop

        goto L_8022A180;
    // 0x8022A150: nop

L_8022A154:
    // 0x8022A154: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022A158: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022A15C: bne         $v0, $zero, L_8022A180
    if (ctx->r2 != 0) {
        // 0x8022A160: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022A180;
    }
    // 0x8022A160: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022A164:
    // 0x8022A164: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022A168: jal         0x8009A3B4
    // 0x8022A16C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x8022A16C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x8022A170: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022A174: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022A178: jal         0x8009A3B4
    // 0x8022A17C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8022A17C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_14:
L_8022A180:
    // 0x8022A180: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022A184: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A188: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022A18C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A190: bgtz        $v0, L_8022A1A4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022A194: nop
    
            goto L_8022A1A4;
    }
    // 0x8022A194: nop

    // 0x8022A198: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A19C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A1A0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022A1A4:
    // 0x8022A1A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A1A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A1AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A1B0: jr          $ra
    // 0x8022A1B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A1B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228E54_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228E58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228E5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228E60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228E64: lhu         $v0, 0xC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC);
    // 0x80228E68: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228E6C: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80228E70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228E74: bne         $v0, $zero, L_80228EC8
    if (ctx->r2 != 0) {
        // 0x80228E78: addiu       $a1, $zero, 0x14A
        ctx->r5 = ADD32(0, 0X14A);
            goto L_80228EC8;
    }
    // 0x80228E78: addiu       $a1, $zero, 0x14A
    ctx->r5 = ADD32(0, 0X14A);
    // 0x80228E7C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80228E80: addiu       $a3, $zero, 0x244
    ctx->r7 = ADD32(0, 0X244);
    // 0x80228E84: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80228E88: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80228E8C: jal         0x8023A350
    // 0x80228E90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8023A350_ovl2(rdram, ctx);
        goto after_0;
    // 0x80228E90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80228E94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228E98: addiu       $a1, $zero, -0x14A
    ctx->r5 = ADD32(0, -0X14A);
    // 0x80228E9C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80228EA0: addiu       $a3, $zero, 0x244
    ctx->r7 = ADD32(0, 0X244);
    // 0x80228EA4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228EA8: sw          $v0, 0x90($at)
    MEM_W(0X90, ctx->r1) = ctx->r2;
    // 0x80228EAC: jal         0x8023A350
    // 0x80228EB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8023A350_ovl2(rdram, ctx);
        goto after_1;
    // 0x80228EB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80228EB4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228EB8: sw          $v0, 0x94($at)
    MEM_W(0X94, ctx->r1) = ctx->r2;
    // 0x80228EBC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228EC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228EC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228EC8:
    // 0x80228EC8: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x80228ECC: lui         $v1, 0xFFFC
    ctx->r3 = S32(0XFFFC << 16);
    // 0x80228ED0: ori         $v1, $v1, 0xF8B0
    ctx->r3 = ctx->r3 | 0XF8B0;
    // 0x80228ED4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228ED8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80228EDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228EE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228EE4: jr          $ra
    // 0x80228EE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228EE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231B60_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231B64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231B68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231B70: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231B74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231B78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231B7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231B80: lw          $v0, -0xED8($at)
    ctx->r2 = MEM_W(ctx->r1, -0XED8);
    // 0x80231B84: jalr        $v0
    // 0x80231B88: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80231B88: nop

    after_0:
    // 0x80231B8C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80231B90: jal         0x8004DD04
    // 0x80231B94: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80231B94: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80231B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231B9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231BA0: jr          $ra
    // 0x80231BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A52C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A52C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A530: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A534: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023A538: bne         $v0, $zero, L_8023A560
    if (ctx->r2 != 0) {
        // 0x8023A53C: nop
    
            goto L_8023A560;
    }
    // 0x8023A53C: nop

    // 0x8023A540: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023A544: bne         $v0, $zero, L_8023A550
    if (ctx->r2 != 0) {
        // 0x8023A548: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8023A550;
    }
    // 0x8023A548: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A54C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8023A550:
    // 0x8023A550: jal         0x8023A12C
    // 0x8023A554: nop

    func_8023A12C_ovl2(rdram, ctx);
        goto after_0;
    // 0x8023A554: nop

    after_0:
    // 0x8023A558: j           L_8023A5E4
    // 0x8023A55C: nop

        goto L_8023A5E4;
    // 0x8023A55C: nop

L_8023A560:
    // 0x8023A560: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023A564: bne         $v0, $zero, L_8023A584
    if (ctx->r2 != 0) {
        // 0x8023A568: nop
    
            goto L_8023A584;
    }
    // 0x8023A568: nop

    // 0x8023A56C: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8023A570: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8023A574: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023A578: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023A57C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8023A580: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
L_8023A584:
    // 0x8023A584: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x8023A588: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A58C: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    // 0x8023A590: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023A594: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023A598: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023A59C: bne         $v1, $v0, L_8023A5B4
    if (ctx->r3 != ctx->r2) {
        // 0x8023A5A0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023A5B4;
    }
    // 0x8023A5A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023A5A4: jal         0x8004F5C4
    // 0x8023A5A8: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x8023A5A8: nop

    after_1:
    // 0x8023A5AC: j           L_8023A5E4
    // 0x8023A5B0: nop

        goto L_8023A5E4;
    // 0x8023A5B0: nop

L_8023A5B4:
    // 0x8023A5B4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023A5B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A5BC: lw          $v1, -0x750($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X750);
    // 0x8023A5C0: lhu         $v0, 0x24($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X24);
    // 0x8023A5C4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8023A5C8: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x8023A5CC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8023A5D0: sltiu       $v0, $v0, 0x121
    ctx->r2 = ctx->r2 < 0X121 ? 1 : 0;
    // 0x8023A5D4: bne         $v0, $zero, L_8023A5E4
    if (ctx->r2 != 0) {
        // 0x8023A5D8: sw          $v1, 0x18($a0)
        MEM_W(0X18, ctx->r4) = ctx->r3;
            goto L_8023A5E4;
    }
    // 0x8023A5D8: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x8023A5DC: addiu       $v0, $zero, 0x120
    ctx->r2 = ADD32(0, 0X120);
    // 0x8023A5E0: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
L_8023A5E4:
    // 0x8023A5E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A5E8: jr          $ra
    // 0x8023A5EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A5EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802323F8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802323F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802323FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232400: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232404: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80232408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023240C: jal         0x80050294
    // 0x80232410: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232410: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80232414: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232418: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023241C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232424: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232428: jr          $ra
    // 0x8023242C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023242C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802344DC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802344DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802344E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802344E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802344E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802344EC: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    // 0x802344F0: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x802344F4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802344F8: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x802344FC: beq         $v1, $zero, L_80234564
    if (ctx->r3 == 0) {
        // 0x80234500: lui         $v0, 0x3800
        ctx->r2 = S32(0X3800 << 16);
            goto L_80234564;
    }
    // 0x80234500: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x80234504: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x80234508: beql        $v0, $zero, L_8023455C
    if (ctx->r2 == 0) {
        // 0x8023450C: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8023455C;
    }
    goto skip_0;
    // 0x8023450C: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x80234510: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x80234514: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80234518: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8023451C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234520: bgtz        $v0, L_80234540
    if (SIGNED(ctx->r2) > 0) {
        // 0x80234524: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80234540;
    }
    // 0x80234524: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80234528: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8023452C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234530: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234534: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80234538: j           L_80234544
    // 0x8023453C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80234544;
    // 0x8023453C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80234540:
    // 0x80234540: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
L_80234544:
    // 0x80234544: jal         0x8002A33C
    // 0x80234548: nop

    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80234548: nop

    after_0:
    // 0x8023454C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80234550: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80234554: j           L_80234564
    // 0x80234558: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
        goto L_80234564;
    // 0x80234558: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
L_8023455C:
    // 0x8023455C: jal         0x8002A33C
    // 0x80234560: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80234560: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_80234564:
    // 0x80234564: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023456C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234570: jr          $ra
    // 0x80234574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80234578: nop

    // 0x8023457C: nop

;}
RECOMP_FUNC void func_802321AC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802321AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802321B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802321B4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802321B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802321BC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802321C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802321C4: lw          $v0, -0xE28($at)
    ctx->r2 = MEM_W(ctx->r1, -0XE28);
    // 0x802321C8: jalr        $v0
    // 0x802321CC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802321CC: nop

    after_0:
    // 0x802321D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802321D4: jr          $ra
    // 0x802321D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802321D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802321DC: nop

;}
RECOMP_FUNC void func_802323C8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802323C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802323CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802323D0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802323D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802323D8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802323DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802323E0: lw          $v0, -0xE00($at)
    ctx->r2 = MEM_W(ctx->r1, -0XE00);
    // 0x802323E4: jalr        $v0
    // 0x802323E8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802323E8: nop

    after_0:
    // 0x802323EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802323F0: jr          $ra
    // 0x802323F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802323F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228F1C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228F20: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228F24: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80228F28: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
    // 0x80228F2C: jal         0x8004DD04
    // 0x80228F30: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80228F30: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80228F34: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228F38: jr          $ra
    // 0x80228F3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228F3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802362F0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802362F0: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x802362F4: lui         $v1, 0xFFFD
    ctx->r3 = S32(0XFFFD << 16);
    // 0x802362F8: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x802362FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236300: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
    // 0x80236304: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80236308: jr          $ra
    // 0x8023630C: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8023630C: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80225EC8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225EC8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225ECC: bne         $v0, $zero, L_80225EF8
    if (ctx->r2 != 0) {
        // 0x80225ED0: nop
    
            goto L_80225EF8;
    }
    // 0x80225ED0: nop

    // 0x80225ED4: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225ED8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225EDC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80225EE0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225EE4: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80225EE8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225EEC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225EF0: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80225EF4: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80225EF8:
    // 0x80225EF8: jr          $ra
    // 0x80225EFC: nop

    TRACE_RETURN()
    return;
    // 0x80225EFC: nop

;}
RECOMP_FUNC void func_80236FC8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236FC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236FCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236FD0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236FD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236FD8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80236FDC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236FE0: jal         0x8006033C
    // 0x80236FE4: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80236FE4: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_0:
    // 0x80236FE8: bne         $v0, $zero, L_80237064
    if (ctx->r2 != 0) {
        // 0x80236FEC: nop
    
            goto L_80237064;
    }
    // 0x80236FEC: nop

    // 0x80236FF0: jal         0x8006033C
    // 0x80236FF4: addiu       $a0, $zero, 0x613
    ctx->r4 = ADD32(0, 0X613);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80236FF4: addiu       $a0, $zero, 0x613
    ctx->r4 = ADD32(0, 0X613);
    after_1:
    // 0x80236FF8: bne         $v0, $zero, L_80237064
    if (ctx->r2 != 0) {
        // 0x80236FFC: nop
    
            goto L_80237064;
    }
    // 0x80236FFC: nop

    // 0x80237000: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80237004: beq         $v1, $zero, L_8023701C
    if (ctx->r3 == 0) {
        // 0x80237008: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023701C;
    }
    // 0x80237008: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023700C: beq         $v1, $v0, L_80237048
    if (ctx->r3 == ctx->r2) {
        // 0x80237010: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80237048;
    }
    // 0x80237010: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80237014: j           L_80237064
    // 0x80237018: nop

        goto L_80237064;
    // 0x80237018: nop

L_8023701C:
    // 0x8023701C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237020: jal         0x80238028
    // 0x80237024: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_2;
    // 0x80237024: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80237028: beq         $v0, $zero, L_80237064
    if (ctx->r2 == 0) {
        // 0x8023702C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80237064;
    }
    // 0x8023702C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80237030: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80237034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237038: jal         0x800616FC
    // 0x8023703C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8023703C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_3:
    // 0x80237040: j           L_80237064
    // 0x80237044: nop

        goto L_80237064;
    // 0x80237044: nop

L_80237048:
    // 0x80237048: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023704C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80237050: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237054: bne         $v0, $zero, L_80237064
    if (ctx->r2 != 0) {
        // 0x80237058: nop
    
            goto L_80237064;
    }
    // 0x80237058: nop

    // 0x8023705C: jal         0x8006036C
    // 0x80237060: addiu       $a0, $zero, 0x613
    ctx->r4 = ADD32(0, 0X613);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80237060: addiu       $a0, $zero, 0x613
    ctx->r4 = ADD32(0, 0X613);
    after_4:
L_80237064:
    // 0x80237064: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237068: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023706C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237070: jr          $ra
    // 0x80237074: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237074: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802373D8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802373D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802373DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802373E0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802373E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802373E8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802373EC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802373F0: jal         0x8006033C
    // 0x802373F4: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802373F4: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_0:
    // 0x802373F8: bne         $v0, $zero, L_802374B0
    if (ctx->r2 != 0) {
        // 0x802373FC: nop
    
            goto L_802374B0;
    }
    // 0x802373FC: nop

    // 0x80237400: jal         0x8006033C
    // 0x80237404: addiu       $a0, $zero, 0x616
    ctx->r4 = ADD32(0, 0X616);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80237404: addiu       $a0, $zero, 0x616
    ctx->r4 = ADD32(0, 0X616);
    after_1:
    // 0x80237408: bne         $v0, $zero, L_802374B0
    if (ctx->r2 != 0) {
        // 0x8023740C: nop
    
            goto L_802374B0;
    }
    // 0x8023740C: nop

    // 0x80237410: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80237414: beq         $v1, $zero, L_8023742C
    if (ctx->r3 == 0) {
        // 0x80237418: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023742C;
    }
    // 0x80237418: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023741C: beq         $v1, $v0, L_80237468
    if (ctx->r3 == ctx->r2) {
        // 0x80237420: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80237468;
    }
    // 0x80237420: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80237424: j           L_802374B0
    // 0x80237428: nop

        goto L_802374B0;
    // 0x80237428: nop

L_8023742C:
    // 0x8023742C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237430: jal         0x80238028
    // 0x80237434: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_2;
    // 0x80237434: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80237438: beq         $v0, $zero, L_802374B0
    if (ctx->r2 == 0) {
        // 0x8023743C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802374B0;
    }
    // 0x8023743C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80237440: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80237444: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237448: jal         0x800616FC
    // 0x8023744C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8023744C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_3:
    // 0x80237450: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237454: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237458: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x8023745C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237460: j           L_80237498
    // 0x80237464: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_80237498;
    // 0x80237464: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_80237468:
    // 0x80237468: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023746C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80237470: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237474: bne         $v0, $zero, L_802374B0
    if (ctx->r2 != 0) {
        // 0x80237478: nop
    
            goto L_802374B0;
    }
    // 0x80237478: nop

    // 0x8023747C: jal         0x8006036C
    // 0x80237480: addiu       $a0, $zero, 0x616
    ctx->r4 = ADD32(0, 0X616);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80237480: addiu       $a0, $zero, 0x616
    ctx->r4 = ADD32(0, 0X616);
    after_4:
    // 0x80237484: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237488: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8023748C: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x80237490: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80237494: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
L_80237498:
    // 0x80237498: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023749C: jal         0x8004CB2C
    // 0x802374A0: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_5;
    // 0x802374A0: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    after_5:
    // 0x802374A4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802374A8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802374AC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_802374B0:
    // 0x802374B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802374B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802374B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802374BC: jr          $ra
    // 0x802374C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802374C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239424_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239424: jr          $ra
    // 0x80239428: nop

    TRACE_RETURN()
    return;
    // 0x80239428: nop

;}
RECOMP_FUNC void func_80238418_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238418: jr          $ra
    // 0x8023841C: nop

    TRACE_RETURN()
    return;
    // 0x8023841C: nop

;}
RECOMP_FUNC void func_80225D70_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D70: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225D74: lw          $a0, 0x2C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2C);
    // 0x80225D78: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80225D7C: bne         $v1, $v0, L_80225D8C
    if (ctx->r3 != ctx->r2) {
        // 0x80225D80: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225D8C;
    }
    // 0x80225D80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225D84: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80225D88: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_80225D8C:
    // 0x80225D8C: jr          $ra
    // 0x80225D90: nop

    TRACE_RETURN()
    return;
    // 0x80225D90: nop

;}
RECOMP_FUNC void func_80226620_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226620: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226624: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226628: bne         $v0, $zero, L_80226640
    if (ctx->r2 != 0) {
        // 0x8022662C: lui         $v0, 0xFC38
        ctx->r2 = S32(0XFC38 << 16);
            goto L_80226640;
    }
    // 0x8022662C: lui         $v0, 0xFC38
    ctx->r2 = S32(0XFC38 << 16);
    // 0x80226630: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80226634: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226638: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022663C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226640:
    // 0x80226640: jr          $ra
    // 0x80226644: nop

    TRACE_RETURN()
    return;
    // 0x80226644: nop

;}
RECOMP_FUNC void func_80237078_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237078: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023707C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237080: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237084: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237088: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8023708C: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    // 0x80237090: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237094: jal         0x8006033C
    // 0x80237098: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80237098: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x8023709C: bne         $v0, $zero, L_80237190
    if (ctx->r2 != 0) {
        // 0x802370A0: nop
    
            goto L_80237190;
    }
    // 0x802370A0: nop

    // 0x802370A4: jal         0x8006033C
    // 0x802370A8: addiu       $a0, $zero, 0x614
    ctx->r4 = ADD32(0, 0X614);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802370A8: addiu       $a0, $zero, 0x614
    ctx->r4 = ADD32(0, 0X614);
    after_1:
    // 0x802370AC: bne         $v0, $zero, L_80237190
    if (ctx->r2 != 0) {
        // 0x802370B0: nop
    
            goto L_80237190;
    }
    // 0x802370B0: nop

    // 0x802370B4: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x802370B8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802370BC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802370C0: beq         $v1, $zero, L_802370D8
    if (ctx->r3 == 0) {
        // 0x802370C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802370D8;
    }
    // 0x802370C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802370C8: beq         $v1, $v0, L_80237144
    if (ctx->r3 == ctx->r2) {
        // 0x802370CC: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80237144;
    }
    // 0x802370CC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802370D0: j           L_80237190
    // 0x802370D4: nop

        goto L_80237190;
    // 0x802370D4: nop

L_802370D8:
    // 0x802370D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802370DC: jal         0x80238028
    // 0x802370E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_2;
    // 0x802370E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802370E4: beq         $v0, $zero, L_80237190
    if (ctx->r2 == 0) {
        // 0x802370E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237190;
    }
    // 0x802370E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802370EC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802370F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802370F4: lh          $v0, 0x4A06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A06);
    // 0x802370F8: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
    // 0x802370FC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80237100: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80237104: beq         $v0, $zero, L_80237118
    if (ctx->r2 == 0) {
        // 0x80237108: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80237118;
    }
    // 0x80237108: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023710C: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80237110: j           L_80237124
    // 0x80237114: nop

        goto L_80237124;
    // 0x80237114: nop

L_80237118:
    // 0x80237118: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x8023711C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80237120: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
L_80237124:
    // 0x80237124: jal         0x800616FC
    // 0x80237128: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80237128: nop

    after_3:
    // 0x8023712C: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80237130: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x80237134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237138: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8023713C: j           L_8023717C
    // 0x80237140: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
        goto L_8023717C;
    // 0x80237140: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
L_80237144:
    // 0x80237144: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237148: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023714C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237150: bne         $v0, $zero, L_80237190
    if (ctx->r2 != 0) {
        // 0x80237154: nop
    
            goto L_80237190;
    }
    // 0x80237154: nop

    // 0x80237158: jal         0x8006036C
    // 0x8023715C: addiu       $a0, $zero, 0x614
    ctx->r4 = ADD32(0, 0X614);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8023715C: addiu       $a0, $zero, 0x614
    ctx->r4 = ADD32(0, 0X614);
    after_4:
    // 0x80237160: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237164: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237168: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x8023716C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80237170: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80237174: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237178: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
L_8023717C:
    // 0x8023717C: jal         0x8004CB2C
    // 0x80237180: nop

    func_8004CB2C_27F2C(rdram, ctx);
        goto after_5;
    // 0x80237180: nop

    after_5:
    // 0x80237184: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80237188: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023718C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80237190:
    // 0x80237190: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237194: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80237198: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023719C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802371A0: jr          $ra
    // 0x802371A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802371A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F978_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F978: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F97C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F980: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F984: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F988: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F98C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F990: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F994: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022F998: beq         $v1, $zero, L_8022F9B4
    if (ctx->r3 == 0) {
        // 0x8022F99C: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022F9B4;
    }
    // 0x8022F99C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022F9A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F9A4: beq         $v1, $v0, L_8022F9F0
    if (ctx->r3 == ctx->r2) {
        // 0x8022F9A8: nop
    
            goto L_8022F9F0;
    }
    // 0x8022F9A8: nop

    // 0x8022F9AC: j           L_8022FA3C
    // 0x8022F9B0: nop

        goto L_8022FA3C;
    // 0x8022F9B0: nop

L_8022F9B4:
    // 0x8022F9B4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F9B8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F9BC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8022F9C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F9C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F9C8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F9CC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022F9D0: jal         0x8004F820
    // 0x8022F9D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F9D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F9D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F9DC: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022F9E0: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022F9E4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F9E8: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x8022F9EC: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
L_8022F9F0:
    // 0x8022F9F0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022F9F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F9F8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022F9FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FA00: bgtz        $v0, L_8022FA14
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022FA04: nop
    
            goto L_8022FA14;
    }
    // 0x8022FA04: nop

    // 0x8022FA08: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022FA0C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022FA10: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022FA14:
    // 0x8022FA14: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FA18: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022FA1C: lb          $a0, 0xA6($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA6);
    // 0x8022FA20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FA24: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FA28: beq         $a0, $zero, L_8022FA3C
    if (ctx->r4 == 0) {
        // 0x8022FA2C: sh          $v0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r2;
            goto L_8022FA3C;
    }
    // 0x8022FA2C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022FA30: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x8022FA34: jal         0x8002A33C
    // 0x8022FA38: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022FA38: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_8022FA3C:
    // 0x8022FA3C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022FA40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FA44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FA48: jr          $ra
    // 0x8022FA4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FA4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E734_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E734: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022E738: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022E73C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E740: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022E744: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022E748: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022E74C: lhu         $v0, 0x4E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E0);
    // 0x8022E750: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022E754: beq         $v0, $zero, L_8022E780
    if (ctx->r2 == 0) {
        // 0x8022E758: addiu       $s2, $s1, 0x4E0
        ctx->r18 = ADD32(ctx->r17, 0X4E0);
            goto L_8022E780;
    }
    // 0x8022E758: addiu       $s2, $s1, 0x4E0
    ctx->r18 = ADD32(ctx->r17, 0X4E0);
    // 0x8022E75C: addiu       $a0, $s1, 0x504
    ctx->r4 = ADD32(ctx->r17, 0X504);
    // 0x8022E760: jal         0x800540D0
    // 0x8022E764: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022E764: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022E768: beq         $v0, $zero, L_8022E780
    if (ctx->r2 == 0) {
        // 0x8022E76C: nop
    
            goto L_8022E780;
    }
    // 0x8022E76C: nop

    // 0x8022E770: lhu         $v0, 0x4E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E0);
    // 0x8022E774: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022E778: j           L_8022E78C
    // 0x8022E77C: sh          $v0, 0x4E0($s1)
    MEM_H(0X4E0, ctx->r17) = ctx->r2;
        goto L_8022E78C;
    // 0x8022E77C: sh          $v0, 0x4E0($s1)
    MEM_H(0X4E0, ctx->r17) = ctx->r2;
L_8022E780:
    // 0x8022E780: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E784: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x8022E788: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022E78C:
    // 0x8022E78C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E790: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E794: beq         $v0, $zero, L_8022E7C4
    if (ctx->r2 == 0) {
        // 0x8022E798: nop
    
            goto L_8022E7C4;
    }
    // 0x8022E798: nop

    // 0x8022E79C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022E7A0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022E7A4: bne         $v0, $zero, L_8022E7BC
    if (ctx->r2 != 0) {
        // 0x8022E7A8: nop
    
            goto L_8022E7BC;
    }
    // 0x8022E7A8: nop

    // 0x8022E7AC: jal         0x8006033C
    // 0x8022E7B0: lhu         $a0, 0x3C($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X3C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022E7B0: lhu         $a0, 0x3C($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X3C);
    after_1:
    // 0x8022E7B4: beq         $v0, $zero, L_8022E7C4
    if (ctx->r2 == 0) {
        // 0x8022E7B8: nop
    
            goto L_8022E7C4;
    }
    // 0x8022E7B8: nop

L_8022E7BC:
    // 0x8022E7BC: jal         0x8022FE94
    // 0x8022E7C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022FE94_ovl2(rdram, ctx);
        goto after_2;
    // 0x8022E7C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
L_8022E7C4:
    // 0x8022E7C4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022E7C8: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x8022E7CC: bne         $v0, $zero, L_8022E848
    if (ctx->r2 != 0) {
        // 0x8022E7D0: nop
    
            goto L_8022E848;
    }
    // 0x8022E7D0: nop

    // 0x8022E7D4: lh          $a2, 0x14($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X14);
    // 0x8022E7D8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022E7DC: lh          $a0, -0x1448($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1448);
    // 0x8022E7E0: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x8022E7E4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022E7E8: lh          $v1, -0x1446($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X1446);
    // 0x8022E7EC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E7F0: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x8022E7F4: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022E7F8: bne         $v0, $zero, L_8022E848
    if (ctx->r2 != 0) {
        // 0x8022E7FC: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_8022E848;
    }
    // 0x8022E7FC: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8022E800: lh          $v0, 0x6E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6E);
    // 0x8022E804: blez        $v0, L_8022E848
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022E808: nop
    
            goto L_8022E848;
    }
    // 0x8022E808: nop

    // 0x8022E80C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022E810: lh          $v0, -0x1444($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1444);
    // 0x8022E814: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x8022E818: beq         $v0, $zero, L_8022E834
    if (ctx->r2 == 0) {
        // 0x8022E81C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8022E834;
    }
    // 0x8022E81C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022E820: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022E824: lh          $v0, -0x1442($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1442);
    // 0x8022E828: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022E82C: bne         $v0, $zero, L_8022E848
    if (ctx->r2 != 0) {
        // 0x8022E830: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8022E848;
    }
    // 0x8022E830: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8022E834:
    // 0x8022E834: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022E838: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8022E83C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E840: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022E844: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022E848:
    // 0x8022E848: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022E84C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E850: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E854: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E858: lw          $v0, -0x1484($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1484);
    // 0x8022E85C: jalr        $v0
    // 0x8022E860: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022E860: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8022E864: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E868: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E86C: beq         $v0, $zero, L_8022E988
    if (ctx->r2 == 0) {
        // 0x8022E870: nop
    
            goto L_8022E988;
    }
    // 0x8022E870: nop

    // 0x8022E874: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022E878: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x8022E87C: beq         $v0, $zero, L_8022E954
    if (ctx->r2 == 0) {
        // 0x8022E880: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022E954;
    }
    // 0x8022E880: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022E884: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E888: addu        $at, $at, $v0
    gpr jr_addend_8022E890 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E88C: lw          $v0, -0x120($at)
    ctx->r2 = ADD32(ctx->r1, -0X120);
    // 0x8022E890: jr          $v0
    // 0x8022E894: nop

    switch (jr_addend_8022E890 >> 2) {
        case 0: goto L_8022E8C0; break;
        case 1: goto L_8022E954; break;
        case 2: goto L_8022E954; break;
        case 3: goto L_8022E954; break;
        case 4: goto L_8022E898; break;
        case 5: goto L_8022E964; break;
        case 6: goto L_8022E8D8; break;
        case 7: goto L_8022E8D8; break;
        case 8: goto L_8022E8D8; break;
        case 9: goto L_8022E954; break;
        case 10: goto L_8022E8C0; break;
        case 11: goto L_8022E8B4; break;
        default: switch_error(__func__, 0x8022E890, 0x8023FEE0);
    }
    // 0x8022E894: nop

L_8022E898:
    // 0x8022E898: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E89C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022E8A0: bne         $v0, $zero, L_8022E8E4
    if (ctx->r2 != 0) {
        // 0x8022E8A4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022E8E4;
    }
    // 0x8022E8A4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E8A8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022E8AC: j           L_8022E978
    // 0x8022E8B0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8022E978;
    // 0x8022E8B0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022E8B4:
    // 0x8022E8B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E8B8: j           L_8022E978
    // 0x8022E8BC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8022E978;
    // 0x8022E8BC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022E8C0:
    // 0x8022E8C0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E8C4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022E8C8: bne         $v0, $zero, L_8022E8E4
    if (ctx->r2 != 0) {
        // 0x8022E8CC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022E8E4;
    }
    // 0x8022E8CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E8D0: j           L_8022E978
    // 0x8022E8D4: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
        goto L_8022E978;
    // 0x8022E8D4: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_8022E8D8:
    // 0x8022E8D8: lh          $v0, 0x6E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6E);
    // 0x8022E8DC: blez        $v0, L_8022E8EC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022E8E0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022E8EC;
    }
    // 0x8022E8E0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022E8E4:
    // 0x8022E8E4: j           L_8022E978
    // 0x8022E8E8: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8022E978;
    // 0x8022E8E8: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022E8EC:
    // 0x8022E8EC: jal         0x8004F144
    // 0x8022E8F0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x8022E8F0: nop

    after_4:
    // 0x8022E8F4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E8F8: beq         $v1, $zero, L_8022E924
    if (ctx->r3 == 0) {
        // 0x8022E8FC: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022E924;
    }
    // 0x8022E8FC: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022E900: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022E904: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E908: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E90C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022E910: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E914: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022E918: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022E91C: jal         0x8009A3B4
    // 0x8022E920: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022E920: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_5:
L_8022E924:
    // 0x8022E924: jal         0x8004F488
    // 0x8022E928: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_6;
    // 0x8022E928: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8022E92C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E930: lb          $a2, 0xD($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XD);
    // 0x8022E934: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022E938: jal         0x8007A290
    // 0x8022E93C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A290_55690(rdram, ctx);
        goto after_7;
    // 0x8022E93C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022E940: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x8022E944: jal         0x8002A33C
    // 0x8022E948: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022E948: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022E94C: j           L_8022E97C
    // 0x8022E950: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_8022E97C;
    // 0x8022E950: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_8022E954:
    // 0x8022E954: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E958: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022E95C: beq         $v0, $zero, L_8022E970
    if (ctx->r2 == 0) {
        // 0x8022E960: nop
    
            goto L_8022E970;
    }
    // 0x8022E960: nop

L_8022E964:
    // 0x8022E964: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E968: j           L_8022E978
    // 0x8022E96C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8022E978;
    // 0x8022E96C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022E970:
    // 0x8022E970: jal         0x8022FDE0
    // 0x8022E974: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022FDE0_ovl2(rdram, ctx);
        goto after_9;
    // 0x8022E974: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
L_8022E978:
    // 0x8022E978: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_8022E97C:
    // 0x8022E97C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E980: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022E984: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022E988:
    // 0x8022E988: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x8022E98C: beq         $v0, $zero, L_8022E99C
    if (ctx->r2 == 0) {
        // 0x8022E990: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022E99C;
    }
    // 0x8022E990: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E994: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022E998: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
L_8022E99C:
    // 0x8022E99C: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x8022E9A0: beq         $v0, $zero, L_8022E9B0
    if (ctx->r2 == 0) {
        // 0x8022E9A4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022E9B0;
    }
    // 0x8022E9A4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E9A8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022E9AC: sh          $v0, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r2;
L_8022E9B0:
    // 0x8022E9B0: lh          $v0, 0x36($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X36);
    // 0x8022E9B4: beq         $v0, $zero, L_8022E9C4
    if (ctx->r2 == 0) {
        // 0x8022E9B8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022E9C4;
    }
    // 0x8022E9B8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E9BC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022E9C0: sh          $v0, 0x36($s2)
    MEM_H(0X36, ctx->r18) = ctx->r2;
L_8022E9C4:
    // 0x8022E9C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022E9C8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022E9CC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E9D0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022E9D4: jr          $ra
    // 0x8022E9D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022E9D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80230734_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230734: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80230738: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8023073C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x80230740: bne         $v1, $v0, L_80230758
    if (ctx->r3 != ctx->r2) {
        // 0x80230744: addiu       $v1, $zero, 0x1E
        ctx->r3 = ADD32(0, 0X1E);
            goto L_80230758;
    }
    // 0x80230744: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x80230748: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023074C: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80230750: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230754: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80230758:
    // 0x80230758: jr          $ra
    // 0x8023075C: nop

    TRACE_RETURN()
    return;
    // 0x8023075C: nop

;}
RECOMP_FUNC void func_80227F18_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227F1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227F24: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227F28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227F2C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227F30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227F34: beq         $v1, $v0, L_80227FB0
    if (ctx->r3 == ctx->r2) {
        // 0x80227F38: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80227FB0;
    }
    // 0x80227F38: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80227F3C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227F40: beql        $v0, $zero, L_80227F58
    if (ctx->r2 == 0) {
        // 0x80227F44: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227F58;
    }
    goto skip_0;
    // 0x80227F44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227F48: beq         $v1, $zero, L_80227F70
    if (ctx->r3 == 0) {
        // 0x80227F4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227F70;
    }
    // 0x80227F4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227F50: j           L_80228118
    // 0x80227F54: nop

        goto L_80228118;
    // 0x80227F54: nop

L_80227F58:
    // 0x80227F58: beq         $v1, $v0, L_80227FC0
    if (ctx->r3 == ctx->r2) {
        // 0x80227F5C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227FC0;
    }
    // 0x80227F5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227F60: beq         $v1, $v0, L_802280C8
    if (ctx->r3 == ctx->r2) {
        // 0x80227F64: nop
    
            goto L_802280C8;
    }
    // 0x80227F64: nop

    // 0x80227F68: j           L_80228118
    // 0x80227F6C: nop

        goto L_80228118;
    // 0x80227F6C: nop

L_80227F70:
    // 0x80227F70: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227F74: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80227F78: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227F7C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x80227F80: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227F84: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227F88: lbu         $v0, -0x175C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X175C);
    // 0x80227F8C: lhu         $a0, 0x328($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X328);
    // 0x80227F90: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x80227F94: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x80227F98: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80227F9C: andi        $v0, $a0, 0xFFF7
    ctx->r2 = ctx->r4 & 0XFFF7;
    // 0x80227FA0: bgtz        $v1, L_80227FB0
    if (SIGNED(ctx->r3) > 0) {
        // 0x80227FA4: sh          $v0, 0x328($s0)
        MEM_H(0X328, ctx->r16) = ctx->r2;
            goto L_80227FB0;
    }
    // 0x80227FA4: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x80227FA8: andi        $v0, $a0, 0xFFF3
    ctx->r2 = ctx->r4 & 0XFFF3;
    // 0x80227FAC: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_80227FB0:
    // 0x80227FB0: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80227FB4: bgez        $v0, L_80227FC0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227FB8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227FC0;
    }
    // 0x80227FB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227FBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227FC0:
    // 0x80227FC0: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x80227FC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227FC8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80227FCC: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x80227FD0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80227FD4: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80227FD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227FDC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227FE0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227FE4: lbu         $v0, -0x175B($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X175B);
    // 0x80227FE8: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80227FEC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80227FF0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227FF4: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x80227FF8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80227FFC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80228000: jal         0x8004DA90
    // 0x80228004: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80228004: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228008: jal         0x80040F30
    // 0x8022800C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022800C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228010: beq         $v0, $zero, L_80228118
    if (ctx->r2 == 0) {
        // 0x80228014: sw          $v0, 0x48($s1)
        MEM_W(0X48, ctx->r17) = ctx->r2;
            goto L_80228118;
    }
    // 0x80228014: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x80228018: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022801C: bnel        $v0, $zero, L_80228024
    if (ctx->r2 != 0) {
        // 0x80228020: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80228024;
    }
    goto skip_1;
    // 0x80228020: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_80228024:
    // 0x80228024: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x80228028: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022802C: beq         $v0, $zero, L_80228118
    if (ctx->r2 == 0) {
        // 0x80228030: addiu       $a0, $zero, 0xDE
        ctx->r4 = ADD32(0, 0XDE);
            goto L_80228118;
    }
    // 0x80228030: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    // 0x80228034: jal         0x8002A33C
    // 0x80228038: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80228038: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022803C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80228040: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80228044: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80228048: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022804C: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x80228050: beq         $v0, $zero, L_80228094
    if (ctx->r2 == 0) {
        // 0x80228054: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228094;
    }
    // 0x80228054: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228058: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022805C: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x80228060: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228064: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x80228068: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022806C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228070: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80228074: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228078: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022807C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80228080: lbu         $v1, -0x175C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X175C);
    // 0x80228084: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80228088: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022808C: j           L_80228118
    // 0x80228090: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80228118;
    // 0x80228090: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80228094:
    // 0x80228094: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80228098: bgtz        $v0, L_802280B0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022809C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802280B0;
    }
    // 0x8022809C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802280A0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802280A4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802280A8: j           L_80228118
    // 0x802280AC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80228118;
    // 0x802280AC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802280B0:
    // 0x802280B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802280B4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802280B8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802280BC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x802280C0: j           L_80228118
    // 0x802280C4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80228118;
    // 0x802280C4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_802280C8:
    // 0x802280C8: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x802280CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802280D0: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x802280D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802280D8: bgez        $v0, L_802280F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802280DC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802280F0;
    }
    // 0x802280DC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802280E0: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x802280E4: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x802280E8: j           L_80228118
    // 0x802280EC: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_80228118;
    // 0x802280EC: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_802280F0:
    // 0x802280F0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802280F4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802280F8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802280FC: jal         0x8004F820
    // 0x80228100: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80228100: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x80228104: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228108: sh          $v0, 0x36C($s0)
    MEM_H(0X36C, ctx->r16) = ctx->r2;
    // 0x8022810C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228110: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228114: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80228118:
    // 0x80228118: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022811C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228120: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228124: jr          $ra
    // 0x80228128: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228128: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802263D0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263D0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802263D4: bne         $v0, $zero, L_802263EC
    if (ctx->r2 != 0) {
        // 0x802263D8: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_802263EC;
    }
    // 0x802263D8: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x802263DC: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802263E0: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802263E4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802263E8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_802263EC:
    // 0x802263EC: jr          $ra
    // 0x802263F0: nop

    TRACE_RETURN()
    return;
    // 0x802263F0: nop

;}
RECOMP_FUNC void func_80239528_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023952C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239530: jal         0x8004F5C4
    // 0x80239534: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80239534: nop

    after_0:
    // 0x80239538: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023953C: jr          $ra
    // 0x80239540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80239544: nop

    // 0x80239548: nop

    // 0x8023954C: nop

;}
RECOMP_FUNC void func_8022AC50_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AC50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AC54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AC58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AC5C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022AC60: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022AC64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AC68: jal         0x8009A3B4
    // 0x8022AC6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022AC6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022AC70: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022AC74: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022AC78: jal         0x8009A3B4
    // 0x8022AC7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AC7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022AC80: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022AC84: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022AC88: jal         0x8009A3B4
    // 0x8022AC8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022AC8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022AC90: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022AC94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AC98: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022AC9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022ACA0: lw          $v0, -0x1600($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1600);
    // 0x8022ACA4: jalr        $v0
    // 0x8022ACA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022ACA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022ACAC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022ACB0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022ACB4: beq         $v0, $zero, L_8022ACCC
    if (ctx->r2 == 0) {
        // 0x8022ACB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022ACCC;
    }
    // 0x8022ACB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ACBC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022ACC0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022ACC4: jal         0x8003B564
    // 0x8022ACC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022ACC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022ACCC:
    // 0x8022ACCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022ACD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ACD4: jr          $ra
    // 0x8022ACD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ACD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228C48_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228C4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228C50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228C54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228C58: jal         0x8004D5D4
    // 0x80228C5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228C5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80228C60: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80228C64: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228C68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228C6C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80228C70: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80228C74: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80228C78: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80228C7C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80228C80: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228C84: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80228C88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228C8C: jal         0x80050294
    // 0x80228C90: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80228C90: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x80228C94: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228C98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228C9C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80228CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228CA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228CA8: jr          $ra
    // 0x80228CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802262A0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262A0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802262A4: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x802262A8: lw          $a2, 0x24($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X24);
    // 0x802262AC: bne         $v0, $zero, L_802262BC
    if (ctx->r2 != 0) {
        // 0x802262B0: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_802262BC;
    }
    // 0x802262B0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802262B4: addiu       $v0, $zero, 0x2108
    ctx->r2 = ADD32(0, 0X2108);
    // 0x802262B8: sh          $v0, 0x15E($a2)
    MEM_H(0X15E, ctx->r6) = ctx->r2;
L_802262BC:
    // 0x802262BC: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802262C0: addiu       $v0, $zero, 0x14A
    ctx->r2 = ADD32(0, 0X14A);
    // 0x802262C4: bne         $v1, $v0, L_802262E8
    if (ctx->r3 != ctx->r2) {
        // 0x802262C8: addiu       $v0, $zero, 0x1AE
        ctx->r2 = ADD32(0, 0X1AE);
            goto L_802262E8;
    }
    // 0x802262C8: addiu       $v0, $zero, 0x1AE
    ctx->r2 = ADD32(0, 0X1AE);
    // 0x802262CC: lw          $a0, 0x2C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X2C);
    // 0x802262D0: lw          $v1, 0x30($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X30);
    // 0x802262D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802262D8: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x802262DC: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x802262E0: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802262E4: addiu       $v0, $zero, 0x1AE
    ctx->r2 = ADD32(0, 0X1AE);
L_802262E8:
    // 0x802262E8: bne         $v1, $v0, L_802262F8
    if (ctx->r3 != ctx->r2) {
        // 0x802262EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802262F8;
    }
    // 0x802262EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802262F0: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
    // 0x802262F4: sb          $zero, 0xA($a2)
    MEM_B(0XA, ctx->r6) = 0;
L_802262F8:
    // 0x802262F8: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802262FC: addiu       $v0, $zero, 0x1B8
    ctx->r2 = ADD32(0, 0X1B8);
    // 0x80226300: bne         $v1, $v0, L_80226318
    if (ctx->r3 != ctx->r2) {
        // 0x80226304: addiu       $v0, $zero, 0x1EF
        ctx->r2 = ADD32(0, 0X1EF);
            goto L_80226318;
    }
    // 0x80226304: addiu       $v0, $zero, 0x1EF
    ctx->r2 = ADD32(0, 0X1EF);
    // 0x80226308: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022630C: sb          $v0, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r2;
    // 0x80226310: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80226314: addiu       $v0, $zero, 0x1EF
    ctx->r2 = ADD32(0, 0X1EF);
L_80226318:
    // 0x80226318: bne         $v1, $v0, L_80226330
    if (ctx->r3 != ctx->r2) {
        // 0x8022631C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226330;
    }
    // 0x8022631C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226320: lw          $a0, 0x2C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X2C);
    // 0x80226324: lw          $v1, 0x30($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X30);
    // 0x80226328: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8022632C: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
L_80226330:
    // 0x80226330: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80226334: addiu       $v0, $zero, 0x219
    ctx->r2 = ADD32(0, 0X219);
    // 0x80226338: bne         $v1, $v0, L_80226348
    if (ctx->r3 != ctx->r2) {
        // 0x8022633C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226348;
    }
    // 0x8022633C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226340: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
    // 0x80226344: sb          $zero, 0xA($a2)
    MEM_B(0XA, ctx->r6) = 0;
L_80226348:
    // 0x80226348: jr          $ra
    // 0x8022634C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022634C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80230E58_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230E58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230E5C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230E60: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80230E64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230E68: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230E6C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230E70: lw          $v0, -0x116C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X116C);
    // 0x80230E74: jalr        $v0
    // 0x80230E78: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230E78: nop

    after_0:
    // 0x80230E7C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230E80: jr          $ra
    // 0x80230E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
