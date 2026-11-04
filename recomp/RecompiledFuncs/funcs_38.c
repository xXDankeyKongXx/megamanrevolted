#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022DDE0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DDE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022DDE4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022DDE8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DDEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022DDF0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022DDF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022DDF8: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022DDFC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022DE00: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022DE04: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022DE08: beq         $v0, $zero, L_8022E0B8
    if (ctx->r2 == 0) {
        // 0x8022DE0C: addiu       $s0, $s1, 0x4E0
        ctx->r16 = ADD32(ctx->r17, 0X4E0);
            goto L_8022E0B8;
    }
    // 0x8022DE0C: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x8022DE10: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022DE14: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DE18: addu        $at, $at, $v0
    gpr jr_addend_8022DE20 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DE1C: lw          $v0, -0x138($at)
    ctx->r2 = ADD32(ctx->r1, -0X138);
    // 0x8022DE20: jr          $v0
    // 0x8022DE24: nop

    switch (jr_addend_8022DE20 >> 2) {
        case 0: goto L_8022DE28; break;
        case 1: goto L_8022DE5C; break;
        case 2: goto L_8022DF38; break;
        case 3: goto L_8022DFC0; break;
        case 4: goto L_8022E074; break;
        default: switch_error(__func__, 0x8022DE20, 0x8023FEC8);
    }
    // 0x8022DE24: nop

L_8022DE28:
    // 0x8022DE28: addiu       $a0, $zero, 0xC3
    ctx->r4 = ADD32(0, 0XC3);
    // 0x8022DE2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DE30: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022DE34: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022DE38: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022DE3C: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8022DE40: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022DE44: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022DE48: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022DE4C: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x8022DE50: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x8022DE54: jal         0x8002A33C
    // 0x8022DE58: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022DE58: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    after_0:
L_8022DE5C:
    // 0x8022DE5C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022DE60: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DE64: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022DE68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DE6C: bgez        $v0, L_8022DE94
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DE70: addiu       $a0, $s1, 0x1C
        ctx->r4 = ADD32(ctx->r17, 0X1C);
            goto L_8022DE94;
    }
    // 0x8022DE70: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022DE74: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022DE78: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022DE7C: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8022DE80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DE84: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022DE88: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022DE8C: j           L_8022DF38
    // 0x8022DE90: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8022DF38;
    // 0x8022DE90: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022DE94:
    // 0x8022DE94: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8022DE98: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x8022DE9C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022DEA0: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x8022DEA4: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8022DEA8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022DEAC: jal         0x8004FAEC
    // 0x8022DEB0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x8022DEB0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022DEB4: bne         $v0, $zero, L_8022DED8
    if (ctx->r2 != 0) {
        // 0x8022DEB8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022DED8;
    }
    // 0x8022DEB8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DEBC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DEC0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022DEC4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022DEC8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022DECC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022DED0: j           L_8022E0B8
    // 0x8022DED4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8022E0B8;
    // 0x8022DED4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022DED8:
    // 0x8022DED8: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x8022DEDC: bne         $v1, $v0, L_8022E0B8
    if (ctx->r3 != ctx->r2) {
        // 0x8022DEE0: nop
    
            goto L_8022E0B8;
    }
    // 0x8022DEE0: nop

    // 0x8022DEE4: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8022DEE8: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022DEEC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022DEF0: bne         $v0, $zero, L_8022DEFC
    if (ctx->r2 != 0) {
        // 0x8022DEF4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022DEFC;
    }
    // 0x8022DEF4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DEF8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_8022DEFC:
    // 0x8022DEFC: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x8022DF00: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022DF04: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022DF08: bne         $v0, $zero, L_8022DF14
    if (ctx->r2 != 0) {
        // 0x8022DF0C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022DF14;
    }
    // 0x8022DF0C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DF10: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_8022DF14:
    // 0x8022DF14: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x8022DF18: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x8022DF1C: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x8022DF20: addiu       $a0, $zero, 0xC4
    ctx->r4 = ADD32(0, 0XC4);
    // 0x8022DF24: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022DF28: jal         0x8002A33C
    // 0x8022DF2C: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022DF2C: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    after_2:
    // 0x8022DF30: j           L_8022E0B8
    // 0x8022DF34: nop

        goto L_8022E0B8;
    // 0x8022DF34: nop

L_8022DF38:
    // 0x8022DF38: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8022DF3C: bne         $v0, $zero, L_8022E040
    if (ctx->r2 != 0) {
        // 0x8022DF40: nop
    
            goto L_8022E040;
    }
    // 0x8022DF40: nop

    // 0x8022DF44: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x8022DF48: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x8022DF4C: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x8022DF50: beq         $v0, $zero, L_8022DFAC
    if (ctx->r2 == 0) {
        // 0x8022DF54: nop
    
            goto L_8022DFAC;
    }
    // 0x8022DF54: nop

    // 0x8022DF58: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x8022DF5C: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x8022DF60: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x8022DF64: beq         $v0, $zero, L_8022DFAC
    if (ctx->r2 == 0) {
        // 0x8022DF68: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022DFAC;
    }
    // 0x8022DF68: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022DF6C: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022DF70: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8022DF74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DF78: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022DF7C: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8022DF80: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022DF84: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022DF88: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022DF8C: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
    // 0x8022DF90: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022DF94: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022DF98: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x8022DF9C: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022DFA0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022DFA4: j           L_8022DFC0
    // 0x8022DFA8: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_8022DFC0;
    // 0x8022DFA8: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8022DFAC:
    // 0x8022DFAC: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8022DFB0: beq         $v0, $zero, L_8022E0B8
    if (ctx->r2 == 0) {
        // 0x8022DFB4: nop
    
            goto L_8022E0B8;
    }
    // 0x8022DFB4: nop

    // 0x8022DFB8: j           L_8022E040
    // 0x8022DFBC: nop

        goto L_8022E040;
    // 0x8022DFBC: nop

L_8022DFC0:
    // 0x8022DFC0: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8022DFC4: bne         $v0, $zero, L_8022E040
    if (ctx->r2 != 0) {
        // 0x8022DFC8: nop
    
            goto L_8022E040;
    }
    // 0x8022DFC8: nop

    // 0x8022DFCC: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x8022DFD0: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x8022DFD4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022DFD8: beq         $v0, $zero, L_8022E034
    if (ctx->r2 == 0) {
        // 0x8022DFDC: nop
    
            goto L_8022E034;
    }
    // 0x8022DFDC: nop

    // 0x8022DFE0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x8022DFE4: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x8022DFE8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022DFEC: beq         $v0, $zero, L_8022E034
    if (ctx->r2 == 0) {
        // 0x8022DFF0: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8022E034;
    }
    // 0x8022DFF0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8022DFF4: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022DFF8: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8022DFFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E000: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022E004: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8022E008: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022E00C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022E010: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022E014: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x8022E018: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022E01C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022E020: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x8022E024: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022E028: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022E02C: j           L_8022E074
    // 0x8022E030: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_8022E074;
    // 0x8022E030: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8022E034:
    // 0x8022E034: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8022E038: beq         $v0, $zero, L_8022E050
    if (ctx->r2 == 0) {
        // 0x8022E03C: nop
    
            goto L_8022E050;
    }
    // 0x8022E03C: nop

L_8022E040:
    // 0x8022E040: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022E044: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E048: j           L_8022E0B8
    // 0x8022E04C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8022E0B8;
    // 0x8022E04C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022E050:
    // 0x8022E050: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8022E054: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022E058: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022E05C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022E060: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x8022E064: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022E068: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022E06C: j           L_8022E0B8
    // 0x8022E070: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_8022E0B8;
    // 0x8022E070: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8022E074:
    // 0x8022E074: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022E078: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E07C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022E080: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E084: bgez        $v0, L_8022E0B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022E088: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022E0B8;
    }
    // 0x8022E088: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022E08C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022E090: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022E094: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8022E098: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8022E09C: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8022E0A0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022E0A4: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022E0A8: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022E0AC: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
    // 0x8022E0B0: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x8022E0B4: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
L_8022E0B8:
    // 0x8022E0B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022E0BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022E0C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E0C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022E0C8: jr          $ra
    // 0x8022E0CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022E0CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802310D0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802310D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802310D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802310D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802310DC: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x802310E0: addiu       $a2, $a2, 0xD4
    ctx->r6 = ADD32(ctx->r6, 0XD4);
    // 0x802310E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802310E8: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x802310EC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802310F0: lw          $a0, 0xD0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD0);
    // 0x802310F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802310F8: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x802310FC: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x80231100: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231104: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231108: bne         $v0, $v1, L_80231164
    if (ctx->r2 != ctx->r3) {
        // 0x8023110C: addiu       $v1, $a0, 0x4
        ctx->r3 = ADD32(ctx->r4, 0X4);
            goto L_80231164;
    }
    // 0x8023110C: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80231110: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231114: sw          $v1, 0xD0($at)
    MEM_W(0XD0, ctx->r1) = ctx->r3;
    // 0x80231118: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    // 0x8023111C: bgtz        $v0, L_80231130
    if (SIGNED(ctx->r2) > 0) {
        // 0x80231120: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80231130;
    }
    // 0x80231120: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231124: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80231128: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023112C: sw          $v0, 0xD0($at)
    MEM_W(0XD0, ctx->r1) = ctx->r2;
L_80231130:
    // 0x80231130: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231134: lw          $v0, 0xD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XD0);
    // 0x80231138: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8023113C: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x80231140: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80231144: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80231148: jal         0x8003B85C
    // 0x8023114C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8023114C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80231150: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80231154: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80231158: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8023115C: jal         0x8003B840
    // 0x80231160: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80231160: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80231164:
    // 0x80231164: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x80231168: addiu       $a2, $a2, 0xDC
    ctx->r6 = ADD32(ctx->r6, 0XDC);
    // 0x8023116C: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80231170: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80231174: lw          $a0, 0xD8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XD8);
    // 0x80231178: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023117C: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80231180: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x80231184: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231188: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023118C: bne         $v0, $v1, L_802311E8
    if (ctx->r2 != ctx->r3) {
        // 0x80231190: addiu       $v1, $a0, 0x4
        ctx->r3 = ADD32(ctx->r4, 0X4);
            goto L_802311E8;
    }
    // 0x80231190: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80231194: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231198: sw          $v1, 0xD8($at)
    MEM_W(0XD8, ctx->r1) = ctx->r3;
    // 0x8023119C: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    // 0x802311A0: bgtz        $v0, L_802311B4
    if (SIGNED(ctx->r2) > 0) {
        // 0x802311A4: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_802311B4;
    }
    // 0x802311A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802311A8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x802311AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802311B0: sw          $v0, 0xD8($at)
    MEM_W(0XD8, ctx->r1) = ctx->r2;
L_802311B4:
    // 0x802311B4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802311B8: lw          $v0, 0xD8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XD8);
    // 0x802311BC: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x802311C0: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x802311C4: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802311C8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x802311CC: jal         0x8003B85C
    // 0x802311D0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802311D0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x802311D4: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x802311D8: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x802311DC: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x802311E0: jal         0x8003B840
    // 0x802311E4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802311E4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_802311E8:
    // 0x802311E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802311EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802311F0: jr          $ra
    // 0x802311F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802311F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235868_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235868: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8023586C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80235870: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80235874: bne         $v1, $v0, L_80235888
    if (ctx->r3 != ctx->r2) {
        // 0x80235878: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80235888;
    }
    // 0x80235878: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8023587C: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80235880: j           L_80235890
    // 0x80235884: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
        goto L_80235890;
    // 0x80235884: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
L_80235888:
    // 0x80235888: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8023588C: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
L_80235890:
    // 0x80235890: jr          $ra
    // 0x80235894: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80235894: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80235898: nop

    // 0x8023589C: nop

;}
RECOMP_FUNC void func_80238420_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238424: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238428: jal         0x8004F684
    // 0x8023842C: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8023842C: nop

    after_0:
    // 0x80238430: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238434: jr          $ra
    // 0x80238438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023843C: nop

;}
RECOMP_FUNC void func_80236DC4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236DC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236DC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236DCC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236DD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236DD4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80236DD8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236DDC: jal         0x8006033C
    // 0x80236DE0: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80236DE0: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
    after_0:
    // 0x80236DE4: bne         $v0, $zero, L_80236E18
    if (ctx->r2 != 0) {
        // 0x80236DE8: nop
    
            goto L_80236E18;
    }
    // 0x80236DE8: nop

    // 0x80236DEC: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80236DF0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80236DF4: beq         $v0, $zero, L_80236E18
    if (ctx->r2 == 0) {
        // 0x80236DF8: nop
    
            goto L_80236E18;
    }
    // 0x80236DF8: nop

    // 0x80236DFC: bltz        $v1, L_80236E18
    if (SIGNED(ctx->r3) < 0) {
        // 0x80236E00: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80236E18;
    }
    // 0x80236E00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236E04: jal         0x80238028
    // 0x80236E08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_1;
    // 0x80236E08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80236E0C: beq         $v0, $zero, L_80236E18
    if (ctx->r2 == 0) {
        // 0x80236E10: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236E18;
    }
    // 0x80236E10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236E14: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236E18:
    // 0x80236E18: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236E1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236E20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236E24: jr          $ra
    // 0x80236E28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236E28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238ACC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238ACC: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80238AD0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80238AD4: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80238AD8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80238ADC: bne         $v0, $zero, L_80238AF0
    if (ctx->r2 != 0) {
        // 0x80238AE0: nop
    
            goto L_80238AF0;
    }
    // 0x80238AE0: nop

    // 0x80238AE4: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80238AE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238AEC: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80238AF0:
    // 0x80238AF0: jr          $ra
    // 0x80238AF4: nop

    TRACE_RETURN()
    return;
    // 0x80238AF4: nop

;}
RECOMP_FUNC void func_80235500_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235500: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235504: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235508: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023550C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    // 0x80235510: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235514: jal         0x8006033C
    // 0x80235518: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80235518: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023551C: beq         $v0, $zero, L_8023558C
    if (ctx->r2 == 0) {
        // 0x80235520: nop
    
            goto L_8023558C;
    }
    // 0x80235520: nop

    // 0x80235524: jal         0x8006033C
    // 0x80235528: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80235528: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_1:
    // 0x8023552C: bne         $v0, $zero, L_802355FC
    if (ctx->r2 != 0) {
        // 0x80235530: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_802355FC;
    }
    // 0x80235530: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80235534: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80235538: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023553C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80235540: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80235544: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80235548: jal         0x8002C678
    // 0x8023554C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_2;
    // 0x8023554C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_2:
    // 0x80235550: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80235554: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80235558: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x8023555C: jal         0x800319B4
    // 0x80235560: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x80235560: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_3:
    // 0x80235564: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80235568: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8023556C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80235570: jal         0x8006036C
    // 0x80235574: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80235574: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_4:
    // 0x80235578: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x8023557C: jal         0x8002A33C
    // 0x80235580: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80235580: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_5:
    // 0x80235584: j           L_802355FC
    // 0x80235588: nop

        goto L_802355FC;
    // 0x80235588: nop

L_8023558C:
    // 0x8023558C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80235590: jal         0x8003E6BC
    // 0x80235594: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_6;
    // 0x80235594: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_6:
    // 0x80235598: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x8023559C: beq         $v1, $v0, L_802355FC
    if (ctx->r3 == ctx->r2) {
        // 0x802355A0: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_802355FC;
    }
    // 0x802355A0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802355A4: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x802355A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802355AC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802355B0: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x802355B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802355B8: jal         0x8002C678
    // 0x802355BC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    func_8002C678_7A78(rdram, ctx);
        goto after_7;
    // 0x802355BC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    after_7:
    // 0x802355C0: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x802355C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802355C8: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x802355CC: jal         0x800319B4
    // 0x802355D0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_8;
    // 0x802355D0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_8:
    // 0x802355D4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802355D8: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x802355DC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802355E0: jal         0x8006036C
    // 0x802355E4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x802355E4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_9:
    // 0x802355E8: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x802355EC: jal         0x8002A33C
    // 0x802355F0: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x802355F0: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_10:
    // 0x802355F4: jal         0x80060590
    // 0x802355F8: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_80060590_3B990(rdram, ctx);
        goto after_11;
    // 0x802355F8: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_11:
L_802355FC:
    // 0x802355FC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235600: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235604: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235608: jr          $ra
    // 0x8023560C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023560C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226D30_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80226D34: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80226D38: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226D3C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80226D40: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80226D44: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80226D48: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80226D4C: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80226D50: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80226D54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226D58: jal         0x8009A3B4
    // 0x80226D5C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80226D5C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x80226D60: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80226D64: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80226D68: jal         0x8009A3B4
    // 0x80226D6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226D6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80226D70: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80226D74: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80226D78: jal         0x8009A3B4
    // 0x80226D7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80226D7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80226D80: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226D84: jal         0x800A3450
    // 0x80226D88: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80226D88: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_3:
    // 0x80226D8C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80226D90: sh          $v0, 0x32A($s1)
    MEM_H(0X32A, ctx->r17) = ctx->r2;
    // 0x80226D94: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80226D98: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226D9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226DA0: lw          $v0, -0x17A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X17A0);
    // 0x80226DA4: jalr        $v0
    // 0x80226DA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80226DA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80226DAC: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80226DB0: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80226DB4: beq         $v0, $a1, L_80226DD0
    if (ctx->r2 == ctx->r5) {
        // 0x80226DB8: addiu       $s2, $s1, 0x328
        ctx->r18 = ADD32(ctx->r17, 0X328);
            goto L_80226DD0;
    }
    // 0x80226DB8: addiu       $s2, $s1, 0x328
    ctx->r18 = ADD32(ctx->r17, 0X328);
    // 0x80226DBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226DC0: jal         0x80050294
    // 0x80226DC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80226DC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80226DC8: j           L_80226DD8
    // 0x80226DCC: nop

        goto L_80226DD8;
    // 0x80226DCC: nop

L_80226DD0:
    // 0x80226DD0: jal         0x8005044C
    // 0x80226DD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80226DD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80226DD8:
    // 0x80226DD8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80226DDC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80226DE0: beq         $v0, $zero, L_80226DF8
    if (ctx->r2 == 0) {
        // 0x80226DE4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80226DF8;
    }
    // 0x80226DE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226DE8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80226DEC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80226DF0: jal         0x8003B564
    // 0x80226DF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x80226DF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_80226DF8:
    // 0x80226DF8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80226DFC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226E00: beql        $v0, $zero, L_80226E6C
    if (ctx->r2 == 0) {
        // 0x80226E04: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_80226E6C;
    }
    goto skip_0;
    // 0x80226E04: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_0:
    // 0x80226E08: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80226E0C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80226E10: beq         $v0, $zero, L_80226E68
    if (ctx->r2 == 0) {
        // 0x80226E14: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_80226E68;
    }
    // 0x80226E14: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x80226E18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226E1C: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x80226E20: jal         0x8009A3B4
    // 0x80226E24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80226E24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80226E28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226E2C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80226E30: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80226E34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226E38: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x80226E3C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80226E40: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80226E44: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x80226E48: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80226E4C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80226E50: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80226E54: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x80226E58: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80226E5C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80226E60: jal         0x80051E18
    // 0x80226E64: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x80226E64: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_9:
L_80226E68:
    // 0x80226E68: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_80226E6C:
    // 0x80226E6C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80226E70: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80226E74: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80226E78: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80226E7C: jr          $ra
    // 0x80226E80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80226E80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80238AF8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238AF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238AFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238B00: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80238B04: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238B08: jal         0x8004F144
    // 0x80238B0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80238B0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80238B10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80238B14: beq         $s0, $zero, L_80238B90
    if (ctx->r16 == 0) {
        // 0x80238B18: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80238B90;
    }
    // 0x80238B18: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80238B1C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80238B20: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80238B24: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80238B28: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80238B2C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80238B30: jal         0x800324B4
    // 0x80238B34: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80238B34: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    after_1:
    // 0x80238B38: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80238B3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238B40: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80238B44: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238B48: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x80238B4C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80238B50: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238B54: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80238B58: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    // 0x80238B5C: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80238B60: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80238B64: jal         0x80032498
    // 0x80238B68: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80238B68: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    after_2:
    // 0x80238B6C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80238B70: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238B74: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80238B78: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238B7C: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x80238B80: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80238B84: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238B88: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80238B8C: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
L_80238B90:
    // 0x80238B90: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80238B94: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80238B98: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238B9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238BA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238BA4: jr          $ra
    // 0x80238BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238BA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236264_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236264: jr          $ra
    // 0x80236268: nop

    TRACE_RETURN()
    return;
    // 0x80236268: nop

;}
RECOMP_FUNC void func_80236714_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236714: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x80236718: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023671C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80236720: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236724: lw          $v1, -0x3A10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A10);
    // 0x80236728: lhu         $v0, 0x38($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X38);
    // 0x8023672C: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x80236730: lhu         $v0, 0x3A($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X3A);
    // 0x80236734: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x80236738: lhu         $v0, 0x3C($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X3C);
    // 0x8023673C: jr          $ra
    // 0x80236740: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80236740: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_802383D4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802383D4: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x802383D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802383DC: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x802383E0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802383E4: bne         $v0, $zero, L_802383F8
    if (ctx->r2 != 0) {
        // 0x802383E8: nop
    
            goto L_802383F8;
    }
    // 0x802383E8: nop

    // 0x802383EC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802383F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802383F4: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_802383F8:
    // 0x802383F8: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x802383FC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80238400: jr          $ra
    // 0x80238404: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80238404: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80232430_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232434: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232438: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023243C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232440: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80232444: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80232448: addiu       $v0, $zero, 0x77
    ctx->r2 = ADD32(0, 0X77);
    // 0x8023244C: bne         $v1, $v0, L_80232468
    if (ctx->r3 != ctx->r2) {
        // 0x80232450: addiu       $a1, $zero, 0x14
        ctx->r5 = ADD32(0, 0X14);
            goto L_80232468;
    }
    // 0x80232450: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80232454: jal         0x80050294
    // 0x80232458: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232458: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023245C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232460: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232464: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232468:
    // 0x80232468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023246C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232470: jr          $ra
    // 0x80232474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233DF4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233DF4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80233DF8: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80233DFC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80233E00: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80233E04: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x80233E08: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80233E0C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80233E10: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80233E14: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80233E18: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80233E1C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80233E20: lw          $v0, 0xD4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XD4);
    // 0x80233E24: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80233E28: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80233E2C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80233E30: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233E34: beq         $v0, $zero, L_80233E40
    if (ctx->r2 == 0) {
        // 0x80233E38: addiu       $s0, $s4, 0xC0
        ctx->r16 = ADD32(ctx->r20, 0XC0);
            goto L_80233E40;
    }
    // 0x80233E38: addiu       $s0, $s4, 0xC0
    ctx->r16 = ADD32(ctx->r20, 0XC0);
    // 0x80233E3C: sb          $zero, 0xC8($s4)
    MEM_B(0XC8, ctx->r20) = 0;
L_80233E40:
    // 0x80233E40: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x80233E44: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x80233E48: beq         $v0, $zero, L_802343EC
    if (ctx->r2 == 0) {
        // 0x80233E4C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802343EC;
    }
    // 0x80233E4C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80233E50: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233E54: addu        $at, $at, $v0
    gpr jr_addend_80233E5C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233E58: lw          $v0, -0x78($at)
    ctx->r2 = ADD32(ctx->r1, -0X78);
    // 0x80233E5C: jr          $v0
    // 0x80233E60: nop

    switch (jr_addend_80233E5C >> 2) {
        case 0: goto L_80233E64; break;
        case 1: goto L_80233EB8; break;
        case 2: goto L_80233F04; break;
        case 3: goto L_80233F74; break;
        case 4: goto L_80234040; break;
        case 5: goto L_802340C8; break;
        case 6: goto L_80234258; break;
        case 7: goto L_80234300; break;
        case 8: goto L_80234388; break;
        default: switch_error(__func__, 0x80233E5C, 0x8023FF88);
    }
    // 0x80233E60: nop

L_80233E64:
    // 0x80233E64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233E68: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80233E6C: sh          $zero, 0x54($s4)
    MEM_H(0X54, ctx->r20) = 0;
    // 0x80233E70: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80233E74: lbu         $v1, 0xE($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XE);
    // 0x80233E78: addiu       $a0, $zero, 0xC5
    ctx->r4 = ADD32(0, 0XC5);
    // 0x80233E7C: lhu         $a1, 0x56($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X56);
    // 0x80233E80: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80233E84: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80233E88: sh          $v0, 0x58($s4)
    MEM_H(0X58, ctx->r20) = ctx->r2;
    // 0x80233E8C: sb          $v1, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r3;
    // 0x80233E90: sh          $a1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r5;
    // 0x80233E94: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x80233E98: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80233E9C: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x80233EA0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80233EA4: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    // 0x80233EA8: andi        $v1, $v1, 0xFFEF
    ctx->r3 = ctx->r3 & 0XFFEF;
    // 0x80233EAC: ori         $v1, $v1, 0x48
    ctx->r3 = ctx->r3 | 0X48;
    // 0x80233EB0: jal         0x8002A33C
    // 0x80233EB4: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80233EB4: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    after_0:
L_80233EB8:
    // 0x80233EB8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80233EBC: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80233EC0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80233EC4: bgez        $v0, L_80233EF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233EC8: sh          $v1, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r3;
            goto L_80233EF0;
    }
    // 0x80233EC8: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x80233ECC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233ED0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80233ED4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80233ED8: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x80233EDC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80233EE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233EE4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80233EE8: j           L_80233F04
    // 0x80233EEC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_80233F04;
    // 0x80233EEC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80233EF0:
    // 0x80233EF0: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80233EF4: beq         $v0, $zero, L_802343D4
    if (ctx->r2 == 0) {
        // 0x80233EF8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_802343D4;
    }
    // 0x80233EF8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80233EFC: j           L_802343DC
    // 0x80233F00: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
        goto L_802343DC;
    // 0x80233F00: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
L_80233F04:
    // 0x80233F04: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80233F08: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233F0C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80233F10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233F14: bltz        $v0, L_80233F44
    if (SIGNED(ctx->r2) < 0) {
        // 0x80233F18: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80233F44;
    }
    // 0x80233F18: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80233F1C: lhu         $v0, 0x44($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X44);
    // 0x80233F20: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    // 0x80233F24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80233F28: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233F2C: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80233F30: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x80233F34: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80233F38: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80233F3C: j           L_802343E4
    // 0x80233F40: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
        goto L_802343E4;
    // 0x80233F40: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
L_80233F44:
    // 0x80233F44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233F48: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80233F4C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80233F50: sh          $v0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r2;
    // 0x80233F54: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233F58: sh          $v0, 0x4E($s4)
    MEM_H(0X4E, ctx->r20) = ctx->r2;
    // 0x80233F5C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80233F60: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x80233F64: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80233F68: sh          $v0, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = ctx->r2;
    // 0x80233F6C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80233F70: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80233F74:
    // 0x80233F74: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80233F78: beq         $v0, $zero, L_80233F9C
    if (ctx->r2 == 0) {
        // 0x80233F7C: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80233F9C;
    }
    // 0x80233F7C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80233F80: lhu         $v0, 0x44($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X44);
    // 0x80233F84: lhu         $v1, 0x4C($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X4C);
    // 0x80233F88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233F8C: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x80233F90: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80233F94: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233F98: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80233F9C:
    // 0x80233F9C: lhu         $a1, 0x44($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X44);
    // 0x80233FA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233FA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80233FA8: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80233FAC: jal         0x8004DA90
    // 0x80233FB0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80233FB0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_1:
    // 0x80233FB4: jal         0x80040F30
    // 0x80233FB8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80233FB8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_2:
    // 0x80233FBC: andi        $v0, $v0, 0x3F00
    ctx->r2 = ctx->r2 & 0X3F00;
    // 0x80233FC0: bne         $v0, $zero, L_80233FD8
    if (ctx->r2 != 0) {
        // 0x80233FC4: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_80233FD8;
    }
    // 0x80233FC4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80233FC8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80233FCC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233FD0: beql        $v0, $zero, L_80234010
    if (ctx->r2 == 0) {
        // 0x80233FD4: addiu       $a0, $s1, 0x1C
        ctx->r4 = ADD32(ctx->r17, 0X1C);
            goto L_80234010;
    }
    goto skip_0;
    // 0x80233FD4: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    skip_0:
L_80233FD8:
    // 0x80233FD8: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80233FDC: bne         $v0, $zero, L_80234010
    if (ctx->r2 != 0) {
        // 0x80233FE0: addiu       $a0, $s1, 0x1C
        ctx->r4 = ADD32(ctx->r17, 0X1C);
            goto L_80234010;
    }
    // 0x80233FE0: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80233FE4: lbu         $v1, 0xE($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XE);
    // 0x80233FE8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80233FEC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233FF0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80233FF4: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x80233FF8: jal         0x80034904
    // 0x80233FFC: sb          $v1, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r3;
    func_80034904_FD04(rdram, ctx);
        goto after_3;
    // 0x80233FFC: sb          $v1, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r3;
    after_3:
    // 0x80234000: addiu       $a0, $zero, 0xC6
    ctx->r4 = ADD32(0, 0XC6);
    // 0x80234004: jal         0x8002A33C
    // 0x80234008: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80234008: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_4:
    // 0x8023400C: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
L_80234010:
    // 0x80234010: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x80234014: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x80234018: lh          $v1, 0x56($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X56);
    // 0x8023401C: addiu       $a3, $s4, 0x1C
    ctx->r7 = ADD32(ctx->r20, 0X1C);
    // 0x80234020: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80234024: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80234028: jal         0x8004FC28
    // 0x8023402C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FC28_2B028(rdram, ctx);
        goto after_5;
    // 0x8023402C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x80234030: beq         $v0, $zero, L_802343EC
    if (ctx->r2 == 0) {
        // 0x80234034: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802343EC;
    }
    // 0x80234034: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80234038: j           L_802343EC
    // 0x8023403C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
        goto L_802343EC;
    // 0x8023403C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
L_80234040:
    // 0x80234040: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80234044: lhu         $a1, 0x44($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X44);
    // 0x80234048: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023404C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80234050: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80234054: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80234058: jal         0x8004DA90
    // 0x8023405C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x8023405C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_6:
    // 0x80234060: jal         0x80040F30
    // 0x80234064: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_7;
    // 0x80234064: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_7:
    // 0x80234068: lhu         $v1, 0x44($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X44);
    // 0x8023406C: andi        $v0, $v0, 0x3F00
    ctx->r2 = ctx->r2 & 0X3F00;
    // 0x80234070: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234074: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x80234078: beq         $v0, $zero, L_802340A8
    if (ctx->r2 == 0) {
        // 0x8023407C: sh          $v1, 0x44($s4)
        MEM_H(0X44, ctx->r20) = ctx->r3;
            goto L_802340A8;
    }
    // 0x8023407C: sh          $v1, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r3;
    // 0x80234080: lbu         $v1, 0xE($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XE);
    // 0x80234084: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80234088: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023408C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80234090: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x80234094: jal         0x80034904
    // 0x80234098: sb          $v1, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r3;
    func_80034904_FD04(rdram, ctx);
        goto after_8;
    // 0x80234098: sb          $v1, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r3;
    after_8:
    // 0x8023409C: addiu       $a0, $zero, 0xC6
    ctx->r4 = ADD32(0, 0XC6);
    // 0x802340A0: jal         0x8002A33C
    // 0x802340A4: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x802340A4: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_9:
L_802340A8:
    // 0x802340A8: lh          $v0, 0x44($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X44);
    // 0x802340AC: bne         $v0, $zero, L_802343EC
    if (ctx->r2 != 0) {
        // 0x802340B0: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_802343EC;
    }
    // 0x802340B0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x802340B4: lbu         $v0, 0xE($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XE);
    // 0x802340B8: sb          $v1, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r3;
    // 0x802340BC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x802340C0: j           L_802343EC
    // 0x802340C4: sb          $v0, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r2;
        goto L_802343EC;
    // 0x802340C4: sb          $v0, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r2;
L_802340C8:
    // 0x802340C8: lbu         $v0, 0xE($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XE);
    // 0x802340CC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802340D0: beq         $v0, $zero, L_802343EC
    if (ctx->r2 == 0) {
        // 0x802340D4: addiu       $s2, $s4, 0x14
        ctx->r18 = ADD32(ctx->r20, 0X14);
            goto L_802343EC;
    }
    // 0x802340D4: addiu       $s2, $s4, 0x14
    ctx->r18 = ADD32(ctx->r20, 0X14);
    // 0x802340D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802340DC: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x802340E0: lb          $a0, 0xD($s4)
    ctx->r4 = MEM_B(ctx->r20, 0XD);
    // 0x802340E4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802340E8: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x802340EC: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x802340F0: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, 0X180);
    // 0x802340F4: jal         0x8004F820
    // 0x802340F8: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8004F820_2AC20(rdram, ctx);
        goto after_10;
    // 0x802340F8: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_10:
    // 0x802340FC: lhu         $v1, 0x56($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X56);
    // 0x80234100: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234104: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80234108: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023410C: bne         $v0, $zero, L_802343EC
    if (ctx->r2 != 0) {
        // 0x80234110: sh          $v1, 0x56($s4)
        MEM_H(0X56, ctx->r20) = ctx->r3;
            goto L_802343EC;
    }
    // 0x80234110: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    // 0x80234114: addiu       $s7, $sp, 0x18
    ctx->r23 = ADD32(ctx->r29, 0X18);
    // 0x80234118: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x8023411C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234120: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234124: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80234128: jal         0x8009A3B4
    // 0x8023412C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8023412C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    after_11:
    // 0x80234130: addiu       $s6, $sp, 0x28
    ctx->r22 = ADD32(ctx->r29, 0X28);
    // 0x80234134: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80234138: addiu       $s3, $s4, 0x1C
    ctx->r19 = ADD32(ctx->r20, 0X1C);
    // 0x8023413C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80234140: jal         0x8009A3B4
    // 0x80234144: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80234144: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_12:
    // 0x80234148: addiu       $s5, $sp, 0x20
    ctx->r21 = ADD32(ctx->r29, 0X20);
    // 0x8023414C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80234150: addiu       $s1, $s4, 0x54
    ctx->r17 = ADD32(ctx->r20, 0X54);
    // 0x80234154: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234158: jal         0x8009A3B4
    // 0x8023415C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x8023415C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x80234160: lw          $a1, 0x34($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34);
    // 0x80234164: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234168: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023416C: jal         0x8009A3B4
    // 0x80234170: addiu       $a1, $a1, 0x54
    ctx->r5 = ADD32(ctx->r5, 0X54);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x80234170: addiu       $a1, $a1, 0x54
    ctx->r5 = ADD32(ctx->r5, 0X54);
    after_14:
    // 0x80234174: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80234178: lb          $a1, 0xD($s4)
    ctx->r5 = MEM_B(ctx->r20, 0XD);
    // 0x8023417C: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80234180: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234184: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80234188: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023418C: jal         0x8009A3B4
    // 0x80234190: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x80234190: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_15:
    // 0x80234194: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80234198: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x8023419C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802341A0: lh          $v0, 0x14($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X14);
    // 0x802341A4: lh          $v1, 0x16($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X16);
    // 0x802341A8: lh          $t0, 0x18($s4)
    ctx->r8 = MEM_H(ctx->r20, 0X18);
    // 0x802341AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802341B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802341B4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802341B8: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x802341BC: sw          $v0, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->r2;
    // 0x802341C0: sw          $v1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r3;
    // 0x802341C4: jal         0x8004DA90
    // 0x802341C8: sw          $t0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r8;
    func_8004DA90_28E90(rdram, ctx);
        goto after_16;
    // 0x802341C8: sw          $t0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r8;
    after_16:
    // 0x802341CC: lh          $v1, 0x14($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X14);
    // 0x802341D0: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x802341D4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802341D8: bltzl       $v0, L_802341E0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802341DC: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_802341E0;
    }
    goto skip_1;
    // 0x802341DC: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_1:
L_802341E0:
    // 0x802341E0: lh          $v1, 0x16($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X16);
    // 0x802341E4: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x802341E8: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x802341EC: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x802341F0: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802341F4: bltzl       $v0, L_802341FC
    if (SIGNED(ctx->r2) < 0) {
        // 0x802341F8: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_802341FC;
    }
    goto skip_2;
    // 0x802341F8: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_2:
L_802341FC:
    // 0x802341FC: lh          $v1, 0x18($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X18);
    // 0x80234200: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80234204: sh          $v0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r2;
    // 0x80234208: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x8023420C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80234210: bltzl       $v0, L_80234218
    if (SIGNED(ctx->r2) < 0) {
        // 0x80234214: addiu       $v0, $v0, 0x1F
        ctx->r2 = ADD32(ctx->r2, 0X1F);
            goto L_80234218;
    }
    goto skip_3;
    // 0x80234214: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
    skip_3:
L_80234218:
    // 0x80234218: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023421C: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x80234220: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234224: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80234228: jal         0x8009A3B4
    // 0x8023422C: sh          $v0, 0x48($s4)
    MEM_H(0X48, ctx->r20) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x8023422C: sh          $v0, 0x48($s4)
    MEM_H(0X48, ctx->r20) = ctx->r2;
    after_17:
    // 0x80234230: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80234234: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x80234238: jal         0x8009A3B4
    // 0x8023423C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x8023423C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_18:
    // 0x80234240: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234244: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80234248: jal         0x8009A3B4
    // 0x8023424C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x8023424C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_19:
    // 0x80234250: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80234254: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80234258:
    // 0x80234258: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023425C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234260: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80234264: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234268: bgez        $v0, L_80234318
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023426C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80234318;
    }
    // 0x8023426C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80234270: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80234274: lb          $v0, 0xD($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XD);
    // 0x80234278: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8023427C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80234280: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234284: lh          $v1, 0x180($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X180);
    // 0x80234288: lh          $v0, 0x14($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X14);
    // 0x8023428C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80234290: bltzl       $v0, L_80234298
    if (SIGNED(ctx->r2) < 0) {
        // 0x80234294: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_80234298;
    }
    goto skip_4;
    // 0x80234294: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_4:
L_80234298:
    // 0x80234298: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023429C: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x802342A0: lb          $v0, 0xD($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XD);
    // 0x802342A4: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x802342A8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802342AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802342B0: lh          $v1, 0x182($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X182);
    // 0x802342B4: lh          $v0, 0x16($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X16);
    // 0x802342B8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802342BC: bltzl       $v0, L_802342C4
    if (SIGNED(ctx->r2) < 0) {
        // 0x802342C0: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_802342C4;
    }
    goto skip_5;
    // 0x802342C0: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_5:
L_802342C4:
    // 0x802342C4: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802342C8: sh          $v0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r2;
    // 0x802342CC: lb          $v0, 0xD($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XD);
    // 0x802342D0: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x802342D4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802342D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802342DC: lh          $v1, 0x184($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X184);
    // 0x802342E0: lh          $v0, 0x18($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X18);
    // 0x802342E4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802342E8: bltzl       $v0, L_802342F0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802342EC: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_802342F0;
    }
    goto skip_6;
    // 0x802342EC: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_6:
L_802342F0:
    // 0x802342F0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802342F4: sh          $v0, 0x48($s4)
    MEM_H(0X48, ctx->r20) = ctx->r2;
    // 0x802342F8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802342FC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80234300:
    // 0x80234300: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80234304: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234308: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8023430C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234310: bltz        $v0, L_80234370
    if (SIGNED(ctx->r2) < 0) {
        // 0x80234314: addiu       $a0, $zero, 0xC7
        ctx->r4 = ADD32(0, 0XC7);
            goto L_80234370;
    }
    // 0x80234314: addiu       $a0, $zero, 0xC7
    ctx->r4 = ADD32(0, 0XC7);
L_80234318:
    // 0x80234318: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
    // 0x8023431C: lhu         $a1, 0x44($s4)
    ctx->r5 = MEM_HU(ctx->r20, 0X44);
    // 0x80234320: lhu         $v1, 0x16($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X16);
    // 0x80234324: lhu         $a2, 0x46($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X46);
    // 0x80234328: lhu         $a0, 0x18($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X18);
    // 0x8023432C: lhu         $a3, 0x48($s4)
    ctx->r7 = MEM_HU(ctx->r20, 0X48);
    // 0x80234330: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80234334: sh          $v0, 0x14($s4)
    MEM_H(0X14, ctx->r20) = ctx->r2;
    // 0x80234338: lh          $v0, 0x14($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X14);
    // 0x8023433C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80234340: sh          $v1, 0x16($s4)
    MEM_H(0X16, ctx->r20) = ctx->r3;
    // 0x80234344: lh          $v1, 0x16($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X16);
    // 0x80234348: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x8023434C: sh          $a0, 0x18($s4)
    MEM_H(0X18, ctx->r20) = ctx->r4;
    // 0x80234350: lh          $a0, 0x18($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X18);
    // 0x80234354: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234358: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023435C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80234360: sw          $v0, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = ctx->r2;
    // 0x80234364: sw          $v1, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r3;
    // 0x80234368: j           L_802343EC
    // 0x8023436C: sw          $a0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r4;
        goto L_802343EC;
    // 0x8023436C: sw          $a0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r4;
L_80234370:
    // 0x80234370: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x80234374: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80234378: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8023437C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80234380: jal         0x8002A33C
    // 0x80234384: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_20;
    // 0x80234384: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    after_20:
L_80234388:
    // 0x80234388: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023438C: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80234390: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80234394: bgez        $v0, L_802343C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80234398: sh          $v1, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r3;
            goto L_802343C0;
    }
    // 0x80234398: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x8023439C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x802343A0: ori         $v0, $v0, 0x11
    ctx->r2 = ctx->r2 | 0X11;
    // 0x802343A4: andi        $v0, $v0, 0xFFB7
    ctx->r2 = ctx->r2 & 0XFFB7;
    // 0x802343A8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x802343AC: lbu         $v0, 0xE($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XE);
    // 0x802343B0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802343B4: andi        $v0, $v0, 0xE7
    ctx->r2 = ctx->r2 & 0XE7;
    // 0x802343B8: j           L_802343EC
    // 0x802343BC: sb          $v0, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r2;
        goto L_802343EC;
    // 0x802343BC: sb          $v0, 0xE($s4)
    MEM_B(0XE, ctx->r20) = ctx->r2;
L_802343C0:
    // 0x802343C0: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x802343C4: beq         $v0, $zero, L_802343D4
    if (ctx->r2 == 0) {
        // 0x802343C8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_802343D4;
    }
    // 0x802343C8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802343CC: j           L_802343DC
    // 0x802343D0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
        goto L_802343DC;
    // 0x802343D0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
L_802343D4:
    // 0x802343D4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802343D8: addiu       $a1, $zero, -0x40
    ctx->r5 = ADD32(0, -0X40);
L_802343DC:
    // 0x802343DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802343E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_802343E4:
    // 0x802343E4: jal         0x8004DA90
    // 0x802343E8: nop

    func_8004DA90_28E90(rdram, ctx);
        goto after_21;
    // 0x802343E8: nop

    after_21:
L_802343EC:
    // 0x802343EC: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x802343F0: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x802343F4: beq         $v0, $zero, L_802344B0
    if (ctx->r2 == 0) {
        // 0x802343F8: nop
    
            goto L_802344B0;
    }
    // 0x802343F8: nop

    // 0x802343FC: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80234400: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80234404: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80234408: bne         $v0, $zero, L_802344B0
    if (ctx->r2 != 0) {
        // 0x8023440C: sh          $v1, 0x6($s0)
        MEM_H(0X6, ctx->r16) = ctx->r3;
            goto L_802344B0;
    }
    // 0x8023440C: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x80234410: jal         0x8004F144
    // 0x80234414: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_22;
    // 0x80234414: nop

    after_22:
    // 0x80234418: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x8023441C: beq         $s5, $zero, L_802344B0
    if (ctx->r21 == 0) {
        // 0x80234420: addiu       $s3, $sp, 0x18
        ctx->r19 = ADD32(ctx->r29, 0X18);
            goto L_802344B0;
    }
    // 0x80234420: addiu       $s3, $sp, 0x18
    ctx->r19 = ADD32(ctx->r29, 0X18);
    // 0x80234424: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80234428: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x8023442C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234430: jal         0x8009A3B4
    // 0x80234434: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_23;
    // 0x80234434: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_23:
    // 0x80234438: addiu       $s2, $sp, 0x28
    ctx->r18 = ADD32(ctx->r29, 0X28);
    // 0x8023443C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80234440: addiu       $s1, $s4, 0x1C
    ctx->r17 = ADD32(ctx->r20, 0X1C);
    // 0x80234444: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234448: jal         0x8009A3B4
    // 0x8023444C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_24;
    // 0x8023444C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_24:
    // 0x80234450: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80234454: addiu       $a1, $zero, -0x300
    ctx->r5 = ADD32(0, -0X300);
    // 0x80234458: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023445C: jal         0x8004DA90
    // 0x80234460: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_25;
    // 0x80234460: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_25:
    // 0x80234464: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80234468: sb          $v0, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r2;
    // 0x8023446C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80234470: sb          $v0, 0x2($s5)
    MEM_B(0X2, ctx->r21) = ctx->r2;
    // 0x80234474: sb          $zero, 0x3($s5)
    MEM_B(0X3, ctx->r21) = 0;
    // 0x80234478: lhu         $v0, 0x14($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X14);
    // 0x8023447C: sh          $v0, 0x1C($s5)
    MEM_H(0X1C, ctx->r21) = ctx->r2;
    // 0x80234480: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x80234484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234488: sh          $v0, 0x1E($s5)
    MEM_H(0X1E, ctx->r21) = ctx->r2;
    // 0x8023448C: lhu         $v0, 0x18($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X18);
    // 0x80234490: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80234494: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234498: jal         0x8009A3B4
    // 0x8023449C: sh          $v0, 0x20($s5)
    MEM_H(0X20, ctx->r21) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_26;
    // 0x8023449C: sh          $v0, 0x20($s5)
    MEM_H(0X20, ctx->r21) = ctx->r2;
    after_26:
    // 0x802344A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802344A4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802344A8: jal         0x8009A3B4
    // 0x802344AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_27;
    // 0x802344AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_27:
L_802344B0:
    // 0x802344B0: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x802344B4: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x802344B8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x802344BC: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x802344C0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x802344C4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x802344C8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x802344CC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x802344D0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802344D4: jr          $ra
    // 0x802344D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x802344D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80232618_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232618: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023261C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232620: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232628: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023262C: bne         $v0, $zero, L_8023264C
    if (ctx->r2 != 0) {
        // 0x80232630: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_8023264C;
    }
    // 0x80232630: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x80232634: jal         0x80050294
    // 0x80232638: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232638: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023263C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232640: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232644: j           L_8023265C
    // 0x80232648: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023265C;
    // 0x80232648: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023264C:
    // 0x8023264C: jal         0x800504EC
    // 0x80232650: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_1;
    // 0x80232650: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232654: jal         0x8005129C
    // 0x80232658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_2;
    // 0x80232658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8023265C:
    // 0x8023265C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232660: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232664: jr          $ra
    // 0x80232668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227060_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227060: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80227064: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80227068: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022706C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80227070: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80227074: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80227078: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022707C: bne         $v0, $zero, L_802270A8
    if (ctx->r2 != 0) {
        // 0x80227080: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_802270A8;
    }
    // 0x80227080: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80227084: addiu       $a0, $s0, 0x34C
    ctx->r4 = ADD32(ctx->r16, 0X34C);
    // 0x80227088: jal         0x800540D0
    // 0x8022708C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022708C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80227090: beq         $v0, $zero, L_802270A8
    if (ctx->r2 == 0) {
        // 0x80227094: nop
    
            goto L_802270A8;
    }
    // 0x80227094: nop

    // 0x80227098: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022709C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x802270A0: j           L_802270B4
    // 0x802270A4: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_802270B4;
    // 0x802270A4: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_802270A8:
    // 0x802270A8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802270AC: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x802270B0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802270B4:
    // 0x802270B4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802270B8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802270BC: beq         $v0, $zero, L_802270CC
    if (ctx->r2 == 0) {
        // 0x802270C0: nop
    
            goto L_802270CC;
    }
    // 0x802270C0: nop

    // 0x802270C4: jal         0x80228970
    // 0x802270C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80228970_ovl2(rdram, ctx);
        goto after_1;
    // 0x802270C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802270CC:
    // 0x802270CC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802270D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802270D4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802270D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802270DC: lw          $v0, -0x1794($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1794);
    // 0x802270E0: jalr        $v0
    // 0x802270E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x802270E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802270E8: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x802270EC: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x802270F0: beq         $v0, $zero, L_80227188
    if (ctx->r2 == 0) {
        // 0x802270F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227188;
    }
    // 0x802270F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802270F8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802270FC: beq         $v1, $v0, L_80227114
    if (ctx->r3 == ctx->r2) {
        // 0x80227100: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80227114;
    }
    // 0x80227100: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227104: beq         $v1, $v0, L_80227120
    if (ctx->r3 == ctx->r2) {
        // 0x80227108: nop
    
            goto L_80227120;
    }
    // 0x80227108: nop

    // 0x8022710C: j           L_8022714C
    // 0x80227110: nop

        goto L_8022714C;
    // 0x80227110: nop

L_80227114:
    // 0x80227114: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80227118: j           L_8022716C
    // 0x8022711C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022716C;
    // 0x8022711C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227120:
    // 0x80227120: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80227124: slti        $v0, $v0, 0x33
    ctx->r2 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x80227128: beq         $v0, $zero, L_80227138
    if (ctx->r2 == 0) {
        // 0x8022712C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80227138;
    }
    // 0x8022712C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227130: j           L_8022716C
    // 0x80227134: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022716C;
    // 0x80227134: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227138:
    // 0x80227138: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x8022713C: bne         $v0, $zero, L_8022715C
    if (ctx->r2 != 0) {
        // 0x80227140: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022715C;
    }
    // 0x80227140: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80227144: j           L_80227164
    // 0x80227148: nop

        goto L_80227164;
    // 0x80227148: nop

L_8022714C:
    // 0x8022714C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227150: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80227154: beq         $v0, $zero, L_80227164
    if (ctx->r2 == 0) {
        // 0x80227158: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80227164;
    }
    // 0x80227158: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022715C:
    // 0x8022715C: j           L_8022716C
    // 0x80227160: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022716C;
    // 0x80227160: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227164:
    // 0x80227164: jal         0x80228798
    // 0x80227168: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80228798_ovl2(rdram, ctx);
        goto after_3;
    // 0x80227168: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022716C:
    // 0x8022716C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80227170: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80227174: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80227178: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022717C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227180: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80227184: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80227188:
    // 0x80227188: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x8022718C: beq         $v0, $zero, L_8022719C
    if (ctx->r2 == 0) {
        // 0x80227190: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022719C;
    }
    // 0x80227190: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227194: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80227198: sh          $v0, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r2;
L_8022719C:
    // 0x8022719C: lh          $v0, 0x36($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X36);
    // 0x802271A0: beq         $v0, $zero, L_802271B0
    if (ctx->r2 == 0) {
        // 0x802271A4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802271B0;
    }
    // 0x802271A4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802271A8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802271AC: sh          $v0, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r2;
L_802271B0:
    // 0x802271B0: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x802271B4: beq         $v0, $zero, L_802271C4
    if (ctx->r2 == 0) {
        // 0x802271B8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802271C4;
    }
    // 0x802271B8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802271BC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802271C0: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_802271C4:
    // 0x802271C4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802271C8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802271CC: beq         $v0, $zero, L_8022725C
    if (ctx->r2 == 0) {
        // 0x802271D0: nop
    
            goto L_8022725C;
    }
    // 0x802271D0: nop

    // 0x802271D4: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x802271D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802271DC: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x802271E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802271E4: bgez        $v0, L_8022725C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802271E8: nop
    
            goto L_8022725C;
    }
    // 0x802271E8: nop

    // 0x802271EC: jal         0x8004F144
    // 0x802271F0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x802271F0: nop

    after_4:
    // 0x802271F4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802271F8: beq         $v1, $zero, L_80227234
    if (ctx->r3 == 0) {
        // 0x802271FC: sw          $v1, 0x40($s1)
        MEM_W(0X40, ctx->r17) = ctx->r3;
            goto L_80227234;
    }
    // 0x802271FC: sw          $v1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r3;
    // 0x80227200: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227204: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80227208: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x8022720C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80227210: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80227214: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x80227218: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022721C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80227220: lw          $a0, 0x40($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X40);
    // 0x80227224: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80227228: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022722C: jal         0x8009A3B4
    // 0x80227230: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80227230: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_5:
L_80227234:
    // 0x80227234: jal         0x8004F418
    // 0x80227238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x80227238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022723C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227240: lh          $a2, 0x6($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X6);
    // 0x80227244: addiu       $s0, $a0, 0x180
    ctx->r16 = ADD32(ctx->r4, 0X180);
    // 0x80227248: jal         0x8007A290
    // 0x8022724C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A290_55690(rdram, ctx);
        goto after_7;
    // 0x8022724C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80227250: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x80227254: jal         0x8002A33C
    // 0x80227258: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x80227258: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
L_8022725C:
    // 0x8022725C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80227260: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80227264: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80227268: jr          $ra
    // 0x8022726C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022726C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802325C4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802325C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802325C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802325CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802325D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802325D4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802325D8: bne         $v0, $zero, L_802325F8
    if (ctx->r2 != 0) {
        // 0x802325DC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_802325F8;
    }
    // 0x802325DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802325E0: jal         0x80050294
    // 0x802325E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802325E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802325E8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802325EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802325F0: j           L_80232608
    // 0x802325F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80232608;
    // 0x802325F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802325F8:
    // 0x802325F8: jal         0x800504EC
    // 0x802325FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_1;
    // 0x802325FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232600: jal         0x8005129C
    // 0x80232604: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_2;
    // 0x80232604: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80232608:
    // 0x80232608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023260C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232610: jr          $ra
    // 0x80232614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236B6C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236B6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236B70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236B74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236B78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236B7C: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80236B80: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80236B84: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80236B88: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x80236B8C: beq         $v1, $zero, L_80236C00
    if (ctx->r3 == 0) {
        // 0x80236B90: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_80236C00;
    }
    // 0x80236B90: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
    // 0x80236B94: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x80236B98: beql        $v0, $zero, L_80236BF8
    if (ctx->r2 == 0) {
        // 0x80236B9C: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80236BF8;
    }
    goto skip_0;
    // 0x80236B9C: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x80236BA0: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80236BA4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80236BA8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80236BAC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236BB0: bgtz        $v0, L_80236BDC
    if (SIGNED(ctx->r2) > 0) {
        // 0x80236BB4: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80236BDC;
    }
    // 0x80236BB4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80236BB8: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80236BBC: lhu         $v1, 0x2C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2C);
    // 0x80236BC0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x80236BC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236BC8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80236BCC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80236BD0: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x80236BD4: j           L_80236BE0
    // 0x80236BD8: sh          $v1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r3;
        goto L_80236BE0;
    // 0x80236BD8: sh          $v1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r3;
L_80236BDC:
    // 0x80236BDC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
L_80236BE0:
    // 0x80236BE0: jal         0x8002A33C
    // 0x80236BE4: nop

    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80236BE4: nop

    after_0:
    // 0x80236BE8: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80236BEC: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80236BF0: j           L_80236C00
    // 0x80236BF4: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
        goto L_80236C00;
    // 0x80236BF4: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
L_80236BF8:
    // 0x80236BF8: jal         0x8002A33C
    // 0x80236BFC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80236BFC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_1:
L_80236C00:
    // 0x80236C00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236C08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236C0C: jr          $ra
    // 0x80236C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80236C14: nop

    // 0x80236C18: nop

    // 0x80236C1C: nop

;}
RECOMP_FUNC void func_802319F0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802319F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802319F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802319F8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802319FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231A00: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231A04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231A08: lw          $v0, -0xEE4($at)
    ctx->r2 = MEM_W(ctx->r1, -0XEE4);
    // 0x80231A0C: jalr        $v0
    // 0x80231A10: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80231A10: nop

    after_0:
    // 0x80231A14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231A18: jr          $ra
    // 0x80231A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802324F0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802324F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802324F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802324F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802324FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232500: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232504: beq         $v0, $zero, L_8023254C
    if (ctx->r2 == 0) {
        // 0x80232508: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_8023254C;
    }
    // 0x80232508: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8023250C: jal         0x8004DD04
    // 0x80232510: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80232510: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80232514: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232518: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023251C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232520: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232524: lw          $v0, -0xDD0($at)
    ctx->r2 = MEM_W(ctx->r1, -0XDD0);
    // 0x80232528: jalr        $v0
    // 0x8023252C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023252C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232530: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232534: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x80232538: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023253C: jal         0x8003B564
    // 0x80232540: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_2;
    // 0x80232540: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80232544: j           L_802325B4
    // 0x80232548: nop

        goto L_802325B4;
    // 0x80232548: nop

L_8023254C:
    // 0x8023254C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80232550: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232554: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232558: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023255C: jal         0x8004D5D4
    // 0x80232560: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80232560: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x80232564: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232568: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023256C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232570: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80232574: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80232578: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8023257C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80232580: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80232584: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232588: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023258C: sb          $v0, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = ctx->r2;
    // 0x80232590: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x80232594: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80232598: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023259C: sb          $zero, 0x103($s0)
    MEM_B(0X103, ctx->r16) = 0;
    // 0x802325A0: jal         0x80050294
    // 0x802325A4: sb          $v0, 0x128($s0)
    MEM_B(0X128, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x802325A4: sb          $v0, 0x128($s0)
    MEM_B(0X128, ctx->r16) = ctx->r2;
    after_4:
    // 0x802325A8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802325AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802325B0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802325B4:
    // 0x802325B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802325B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802325BC: jr          $ra
    // 0x802325C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802325C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239920_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239920: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80239924: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80239928: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023992C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80239930: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80239934: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80239938: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x8023993C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80239940: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x80239944: addiu       $s3, $s3, -0x7B4
    ctx->r19 = ADD32(ctx->r19, -0X7B4);
    // 0x80239948: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023994C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_80239950:
    // 0x80239950: jal         0x8004F144
    // 0x80239954: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80239954: nop

    after_0:
    // 0x80239958: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023995C: beq         $s0, $zero, L_80239AB0
    if (ctx->r16 == 0) {
        // 0x80239960: addiu       $v0, $s2, 0x1
        ctx->r2 = ADD32(ctx->r18, 0X1);
            goto L_80239AB0;
    }
    // 0x80239960: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x80239964: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80239968: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023996C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239970: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80239974: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80239978: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023997C: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x80239980: sb          $s4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r20;
    // 0x80239984: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x80239988: beq         $v0, $zero, L_802399C4
    if (ctx->r2 == 0) {
        // 0x8023998C: sb          $s4, 0xC($s0)
        MEM_B(0XC, ctx->r16) = ctx->r20;
            goto L_802399C4;
    }
    // 0x8023998C: sb          $s4, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r20;
    // 0x80239990: jal         0x800A3450
    // 0x80239994: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80239994: nop

    after_1:
    // 0x80239998: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x8023999C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802399A0: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x802399A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802399A8: addiu       $v1, $v1, -0x7
    ctx->r3 = ADD32(ctx->r3, -0X7);
    // 0x802399AC: jal         0x800A3450
    // 0x802399B0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802399B0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x802399B4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802399B8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802399BC: j           L_802399F0
    // 0x802399C0: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
        goto L_802399F0;
    // 0x802399C0: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
L_802399C4:
    // 0x802399C4: jal         0x800A3450
    // 0x802399C8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802399C8: nop

    after_3:
    // 0x802399CC: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x802399D0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802399D4: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x802399D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802399DC: addiu       $v1, $v1, -0x7
    ctx->r3 = ADD32(ctx->r3, -0X7);
    // 0x802399E0: jal         0x800A3450
    // 0x802399E4: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x802399E4: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_4:
    // 0x802399E8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802399EC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_802399F0:
    // 0x802399F0: jal         0x800A3450
    // 0x802399F4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x802399F4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    after_5:
    // 0x802399F8: lui         $a0, 0x2AAA
    ctx->r4 = S32(0X2AAA << 16);
    // 0x802399FC: ori         $a0, $a0, 0xAAAB
    ctx->r4 = ctx->r4 | 0XAAAB;
    // 0x80239A00: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x80239A04: sra         $a1, $v1, 16
    ctx->r5 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80239A08: mult        $a1, $a0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80239A0C: lui         $a2, 0x3D48
    ctx->r6 = S32(0X3D48 << 16);
    // 0x80239A10: ori         $a2, $a2, 0x2E
    ctx->r6 = ctx->r6 | 0X2E;
    // 0x80239A14: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80239A18: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80239A1C: addiu       $v0, $v0, -0x180
    ctx->r2 = ADD32(ctx->r2, -0X180);
    // 0x80239A20: mfhi        $a3
    ctx->r7 = hi;
    // 0x80239A24: sra         $a0, $a3, 1
    ctx->r4 = S32(SIGNED(ctx->r7) >> 1);
    // 0x80239A28: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80239A2C: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80239A30: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80239A34: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80239A38: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80239A3C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80239A40: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80239A44: sra         $a1, $a1, 10
    ctx->r5 = S32(SIGNED(ctx->r5) >> 10);
    // 0x80239A48: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x80239A4C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80239A50: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80239A54: addiu       $v1, $v1, -0x1F
    ctx->r3 = ADD32(ctx->r3, -0X1F);
    // 0x80239A58: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x80239A5C: lhu         $v1, 0x1E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1E);
    // 0x80239A60: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80239A64: ori         $v0, $v0, 0x3028
    ctx->r2 = ctx->r2 | 0X3028;
    // 0x80239A68: sw          $a2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r6;
    // 0x80239A6C: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80239A70: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80239A74: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80239A78: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80239A7C: jal         0x800A3450
    // 0x80239A80: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80239A80: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    after_6:
    // 0x80239A84: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80239A88: addiu       $v0, $v0, 0x1D
    ctx->r2 = ADD32(ctx->r2, 0X1D);
    // 0x80239A8C: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x80239A90: jal         0x800A3450
    // 0x80239A94: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x80239A94: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    after_7:
    // 0x80239A98: lbu         $v1, 0x2($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X2);
    // 0x80239A9C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80239AA0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80239AA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80239AA8: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80239AAC: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
L_80239AB0:
    // 0x80239AB0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80239AB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239AB8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80239ABC: slti        $v0, $v0, 0x18
    ctx->r2 = SIGNED(ctx->r2) < 0X18 ? 1 : 0;
    // 0x80239AC0: bne         $v0, $zero, L_80239950
    if (ctx->r2 != 0) {
        // 0x80239AC4: nop
    
            goto L_80239950;
    }
    // 0x80239AC4: nop

    // 0x80239AC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80239ACC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80239AD0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80239AD4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80239AD8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80239ADC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239AE0: jr          $ra
    // 0x80239AE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80239AE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80239AE8: nop

    // 0x80239AEC: nop

;}
RECOMP_FUNC void func_802374C4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802374C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802374C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802374CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802374D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802374D4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802374D8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802374DC: jal         0x8006033C
    // 0x802374E0: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802374E0: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_0:
    // 0x802374E4: bne         $v0, $zero, L_8023759C
    if (ctx->r2 != 0) {
        // 0x802374E8: nop
    
            goto L_8023759C;
    }
    // 0x802374E8: nop

    // 0x802374EC: jal         0x8006033C
    // 0x802374F0: addiu       $a0, $zero, 0x617
    ctx->r4 = ADD32(0, 0X617);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802374F0: addiu       $a0, $zero, 0x617
    ctx->r4 = ADD32(0, 0X617);
    after_1:
    // 0x802374F4: bne         $v0, $zero, L_8023759C
    if (ctx->r2 != 0) {
        // 0x802374F8: nop
    
            goto L_8023759C;
    }
    // 0x802374F8: nop

    // 0x802374FC: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80237500: beq         $v1, $zero, L_80237518
    if (ctx->r3 == 0) {
        // 0x80237504: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237518;
    }
    // 0x80237504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237508: beq         $v1, $v0, L_80237554
    if (ctx->r3 == ctx->r2) {
        // 0x8023750C: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80237554;
    }
    // 0x8023750C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80237510: j           L_8023759C
    // 0x80237514: nop

        goto L_8023759C;
    // 0x80237514: nop

L_80237518:
    // 0x80237518: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023751C: jal         0x80238028
    // 0x80237520: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_2;
    // 0x80237520: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80237524: beq         $v0, $zero, L_8023759C
    if (ctx->r2 == 0) {
        // 0x80237528: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023759C;
    }
    // 0x80237528: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023752C: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80237530: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237534: jal         0x800616FC
    // 0x80237538: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80237538: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023753C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237540: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237544: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x80237548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023754C: j           L_80237584
    // 0x80237550: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_80237584;
    // 0x80237550: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_80237554:
    // 0x80237554: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237558: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023755C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237560: bne         $v0, $zero, L_8023759C
    if (ctx->r2 != 0) {
        // 0x80237564: nop
    
            goto L_8023759C;
    }
    // 0x80237564: nop

    // 0x80237568: jal         0x8006036C
    // 0x8023756C: addiu       $a0, $zero, 0x617
    ctx->r4 = ADD32(0, 0X617);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8023756C: addiu       $a0, $zero, 0x617
    ctx->r4 = ADD32(0, 0X617);
    after_4:
    // 0x80237570: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237574: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237578: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x8023757C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80237580: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
L_80237584:
    // 0x80237584: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237588: jal         0x8004CB2C
    // 0x8023758C: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_5;
    // 0x8023758C: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    after_5:
    // 0x80237590: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80237594: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237598: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_8023759C:
    // 0x8023759C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802375A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802375A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802375A8: jr          $ra
    // 0x802375AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802375AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237B28_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237B28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237B2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237B30: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237B34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237B38: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80237B3C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80237B40: jal         0x8006033C
    // 0x80237B44: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80237B44: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_0:
    // 0x80237B48: bne         $v0, $zero, L_80237C20
    if (ctx->r2 != 0) {
        // 0x80237B4C: nop
    
            goto L_80237C20;
    }
    // 0x80237B4C: nop

    // 0x80237B50: jal         0x8006033C
    // 0x80237B54: addiu       $a0, $zero, 0x61D
    ctx->r4 = ADD32(0, 0X61D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80237B54: addiu       $a0, $zero, 0x61D
    ctx->r4 = ADD32(0, 0X61D);
    after_1:
    // 0x80237B58: bne         $v0, $zero, L_80237C20
    if (ctx->r2 != 0) {
        // 0x80237B5C: nop
    
            goto L_80237C20;
    }
    // 0x80237B5C: nop

    // 0x80237B60: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80237B64: beq         $v1, $zero, L_80237B7C
    if (ctx->r3 == 0) {
        // 0x80237B68: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237B7C;
    }
    // 0x80237B68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237B6C: beq         $v1, $v0, L_80237BD8
    if (ctx->r3 == ctx->r2) {
        // 0x80237B70: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80237BD8;
    }
    // 0x80237B70: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80237B74: j           L_80237C20
    // 0x80237B78: nop

        goto L_80237C20;
    // 0x80237B78: nop

L_80237B7C:
    // 0x80237B7C: jal         0x8006033C
    // 0x80237B80: addiu       $a0, $zero, 0x60E
    ctx->r4 = ADD32(0, 0X60E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80237B80: addiu       $a0, $zero, 0x60E
    ctx->r4 = ADD32(0, 0X60E);
    after_2:
    // 0x80237B84: beq         $v0, $zero, L_80237C20
    if (ctx->r2 == 0) {
        // 0x80237B88: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80237C20;
    }
    // 0x80237B88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80237B8C: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80237B90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237B94: jal         0x800616FC
    // 0x80237B98: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80237B98: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_3:
    // 0x80237B9C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237BA0: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237BA4: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x80237BA8: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80237BAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237BB0: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80237BB4: jal         0x8004CB2C
    // 0x80237BB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_4;
    // 0x80237BB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80237BBC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80237BC0: addiu       $a0, $zero, 0x60E
    ctx->r4 = ADD32(0, 0X60E);
    // 0x80237BC4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237BC8: jal         0x80060590
    // 0x80237BCC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x80237BCC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_5:
    // 0x80237BD0: j           L_80237C20
    // 0x80237BD4: nop

        goto L_80237C20;
    // 0x80237BD4: nop

L_80237BD8:
    // 0x80237BD8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237BDC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80237BE0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237BE4: bne         $v0, $zero, L_80237C20
    if (ctx->r2 != 0) {
        // 0x80237BE8: nop
    
            goto L_80237C20;
    }
    // 0x80237BE8: nop

    // 0x80237BEC: jal         0x8006036C
    // 0x80237BF0: addiu       $a0, $zero, 0x61D
    ctx->r4 = ADD32(0, 0X61D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80237BF0: addiu       $a0, $zero, 0x61D
    ctx->r4 = ADD32(0, 0X61D);
    after_6:
    // 0x80237BF4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237BF8: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237BFC: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x80237C00: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80237C04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237C08: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80237C0C: jal         0x8004CB2C
    // 0x80237C10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_7;
    // 0x80237C10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x80237C14: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80237C18: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237C1C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80237C20:
    // 0x80237C20: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237C24: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237C28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237C2C: jr          $ra
    // 0x80237C30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237C30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802266B0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266B0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802266B4: bne         $v0, $zero, L_802266CC
    if (ctx->r2 != 0) {
        // 0x802266B8: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_802266CC;
    }
    // 0x802266B8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802266BC: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x802266C0: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802266C4: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x802266C8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_802266CC:
    // 0x802266CC: jr          $ra
    // 0x802266D0: nop

    TRACE_RETURN()
    return;
    // 0x802266D0: nop

;}
RECOMP_FUNC void func_80228C10_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228C14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228C18: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80228C1C: beq         $v0, $zero, L_80228C34
    if (ctx->r2 == 0) {
        // 0x80228C20: nop
    
            goto L_80228C34;
    }
    // 0x80228C20: nop

    // 0x80228C24: jal         0x80228DE4
    // 0x80228C28: nop

    func_80228DE4_ovl2(rdram, ctx);
        goto after_0;
    // 0x80228C28: nop

    after_0:
    // 0x80228C2C: j           L_80228C3C
    // 0x80228C30: nop

        goto L_80228C3C;
    // 0x80228C30: nop

L_80228C34:
    // 0x80228C34: jal         0x80228C48
    // 0x80228C38: nop

    func_80228C48_ovl2(rdram, ctx);
        goto after_1;
    // 0x80228C38: nop

    after_1:
L_80228C3C:
    // 0x80228C3C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228C40: jr          $ra
    // 0x80228C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225150_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x3254
    ctx->r2 = ADD32(ctx->r2, -0X3254);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x3174
    ctx->r2 = ADD32(ctx->r2, -0X3174);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x3150
    ctx->r2 = ADD32(ctx->r2, -0X3150);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x3120
    ctx->r2 = ADD32(ctx->r2, -0X3120);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x30E0
    ctx->r2 = ADD32(ctx->r2, -0X30E0);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x3058
    ctx->r2 = ADD32(ctx->r2, -0X3058);
    // 0x802251A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802251AC: jr          $ra
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_802309C0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802309C0: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802309C4: lui         $v1, 0x5
    ctx->r3 = S32(0X5 << 16);
    // 0x802309C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802309CC: jr          $ra
    // 0x802309D0: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802309D0: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022A4B8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A4B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A4BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A4C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A4C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A4C8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A4CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A4D0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A4D4: jal         0x8004D5D4
    // 0x8022A4D8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022A4D8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022A4DC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A4E0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A4E4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022A4E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A4EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A4F0: lh          $v0, -0x16C0($at)
    ctx->r2 = MEM_H(ctx->r1, -0X16C0);
    // 0x8022A4F4: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022A4F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A4FC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022A500: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A504: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A508: lh          $v0, -0x16BE($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X16BE);
    // 0x8022A50C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A510: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A514: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022A518: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A51C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A520: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A524: lh          $v0, -0x16BC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X16BC);
    // 0x8022A528: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022A52C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A530: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A534: jal         0x8004DD04
    // 0x8022A538: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8022A538: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022A53C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A540: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022A544: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022A548: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A54C: lhu         $v1, -0x16B8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X16B8);
    // 0x8022A550: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A554: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A558: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022A55C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022A560: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022A564: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022A568: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A56C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A570: lhu         $v0, -0x16BA($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X16BA);
    // 0x8022A574: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A578: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A57C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022A580: jal         0x80050294
    // 0x8022A584: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022A584: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022A588: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A58C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022A590: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022A594: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022A598: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022A59C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022A5A0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022A5A4: sh          $zero, 0x1E0($s0)
    MEM_H(0X1E0, ctx->r16) = 0;
    // 0x8022A5A8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022A5AC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022A5B0: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022A5B4: lhu         $a0, -0x16B2($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X16B2);
    // 0x8022A5B8: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x8022A5BC: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022A5C0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A5C4: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x8022A5C8: bne         $v0, $zero, L_8022A5D4
    if (ctx->r2 != 0) {
        // 0x8022A5CC: nop
    
            goto L_8022A5D4;
    }
    // 0x8022A5CC: nop

    // 0x8022A5D0: break       7
    do_break(2149754320);
L_8022A5D4:
    // 0x8022A5D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022A5D8: bne         $v0, $at, L_8022A5EC
    if (ctx->r2 != ctx->r1) {
        // 0x8022A5DC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022A5EC;
    }
    // 0x8022A5DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022A5E0: bne         $v1, $at, L_8022A5EC
    if (ctx->r3 != ctx->r1) {
        // 0x8022A5E4: nop
    
            goto L_8022A5EC;
    }
    // 0x8022A5E4: nop

    // 0x8022A5E8: break       6
    do_break(2149754344);
L_8022A5EC:
    // 0x8022A5EC: mflo        $v1
    ctx->r3 = lo;
    // 0x8022A5F0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A5F4: sh          $a0, 0x1E2($s0)
    MEM_H(0X1E2, ctx->r16) = ctx->r4;
    // 0x8022A5F8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022A5FC: sh          $v1, 0x1E4($s0)
    MEM_H(0X1E4, ctx->r16) = ctx->r3;
    // 0x8022A600: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022A604: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A608: lhu         $v1, -0x16B4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X16B4);
    // 0x8022A60C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A610: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022A614: sh          $v1, 0x1E6($s0)
    MEM_H(0X1E6, ctx->r16) = ctx->r3;
    // 0x8022A618: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A61C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A620: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A624: lhu         $v0, -0x16B6($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X16B6);
    // 0x8022A628: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022A62C: sh          $v0, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = ctx->r2;
    // 0x8022A630: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A634: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A638: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022A63C: lhu         $v1, -0x16BE($at)
    ctx->r3 = MEM_HU(ctx->r1, -0X16BE);
    // 0x8022A640: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A644: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A648: sh          $v1, 0x1DA($s0)
    MEM_H(0X1DA, ctx->r16) = ctx->r3;
    // 0x8022A64C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A650: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A654: jr          $ra
    // 0x8022A658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802345B0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802345B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802345B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802345B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802345BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802345C0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x802345C4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x802345C8: addiu       $a1, $a1, -0x3BC8
    ctx->r5 = ADD32(ctx->r5, -0X3BC8);
    // 0x802345CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802345D0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802345D4: sb          $a0, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r4;
    // 0x802345D8: sb          $a0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r4;
    // 0x802345DC: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x802345E0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802345E4: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802345E8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802345EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802345F0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802345F4: lw          $v1, -0xD40($at)
    ctx->r3 = MEM_W(ctx->r1, -0XD40);
    // 0x802345F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802345FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234600: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80234604: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x80234608: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8023460C: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x80234610: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80234614: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234618: sb          $a0, 0x160($at)
    MEM_B(0X160, ctx->r1) = ctx->r4;
    // 0x8023461C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234620: sb          $v0, 0x161($at)
    MEM_B(0X161, ctx->r1) = ctx->r2;
    // 0x80234624: sltiu       $v0, $v1, 0x1E
    ctx->r2 = ctx->r3 < 0X1E ? 1 : 0;
    // 0x80234628: beq         $v0, $zero, L_80234680
    if (ctx->r2 == 0) {
        // 0x8023462C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80234680;
    }
    // 0x8023462C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80234630: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234634: addu        $at, $at, $v0
    gpr jr_addend_8023463C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234638: lw          $v0, -0x50($at)
    ctx->r2 = ADD32(ctx->r1, -0X50);
    // 0x8023463C: jr          $v0
    // 0x80234640: nop

    switch (jr_addend_8023463C >> 2) {
        case 0: goto L_80234644; break;
        case 1: goto L_80234680; break;
        case 2: goto L_80234680; break;
        case 3: goto L_80234680; break;
        case 4: goto L_80234680; break;
        case 5: goto L_80234680; break;
        case 6: goto L_80234680; break;
        case 7: goto L_80234680; break;
        case 8: goto L_80234680; break;
        case 9: goto L_8023464C; break;
        case 10: goto L_80234680; break;
        case 11: goto L_80234680; break;
        case 12: goto L_80234680; break;
        case 13: goto L_80234680; break;
        case 14: goto L_80234654; break;
        case 15: goto L_80234680; break;
        case 16: goto L_80234680; break;
        case 17: goto L_80234680; break;
        case 18: goto L_80234680; break;
        case 19: goto L_8023465C; break;
        case 20: goto L_80234664; break;
        case 21: goto L_80234680; break;
        case 22: goto L_80234680; break;
        case 23: goto L_80234680; break;
        case 24: goto L_80234680; break;
        case 25: goto L_80234680; break;
        case 26: goto L_8023466C; break;
        case 27: goto L_80234680; break;
        case 28: goto L_80234680; break;
        case 29: goto L_80234674; break;
        default: switch_error(__func__, 0x8023463C, 0x8023FFB0);
    }
    // 0x80234640: nop

L_80234644:
    // 0x80234644: j           L_80234678
    // 0x80234648: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
        goto L_80234678;
    // 0x80234648: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
L_8023464C:
    // 0x8023464C: j           L_80234678
    // 0x80234650: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
        goto L_80234678;
    // 0x80234650: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
L_80234654:
    // 0x80234654: j           L_80234678
    // 0x80234658: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
        goto L_80234678;
    // 0x80234658: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
L_8023465C:
    // 0x8023465C: j           L_80234678
    // 0x80234660: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
        goto L_80234678;
    // 0x80234660: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
L_80234664:
    // 0x80234664: j           L_80234678
    // 0x80234668: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
        goto L_80234678;
    // 0x80234668: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
L_8023466C:
    // 0x8023466C: j           L_80234678
    // 0x80234670: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
        goto L_80234678;
    // 0x80234670: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
L_80234674:
    // 0x80234674: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
L_80234678:
    // 0x80234678: jal         0x80060590
    // 0x8023467C: nop

    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x8023467C: nop

    after_0:
L_80234680:
    // 0x80234680: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234684: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80234688: jal         0x802346A0
    // 0x8023468C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802346A0_ovl2(rdram, ctx);
        goto after_1;
    // 0x8023468C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80234690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234694: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234698: jr          $ra
    // 0x8023469C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023469C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230DE8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230DE8: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80230DEC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80230DF0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80230DF4: bne         $v1, $v0, L_80230E08
    if (ctx->r3 != ctx->r2) {
        // 0x80230DF8: nop
    
            goto L_80230E08;
    }
    // 0x80230DF8: nop

    // 0x80230DFC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80230E00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230E04: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80230E08:
    // 0x80230E08: jr          $ra
    // 0x80230E0C: nop

    TRACE_RETURN()
    return;
    // 0x80230E0C: nop

;}
RECOMP_FUNC void func_80225BE0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BE0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225BE4: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80225BE8: bne         $v0, $zero, L_80225C0C
    if (ctx->r2 != 0) {
        // 0x80225BEC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225C0C;
    }
    // 0x80225BEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225BF0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80225BF4: lui         $v0, 0xFEF0
    ctx->r2 = S32(0XFEF0 << 16);
    // 0x80225BF8: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x80225BFC: lui         $v0, 0xD59
    ctx->r2 = S32(0XD59 << 16);
    // 0x80225C00: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80225C04: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x80225C08: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
L_80225C0C:
    // 0x80225C0C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225C10: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80225C14: bne         $v1, $v0, L_80225C24
    if (ctx->r3 != ctx->r2) {
        // 0x80225C18: nop
    
            goto L_80225C24;
    }
    // 0x80225C18: nop

    // 0x80225C1C: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80225C20: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_80225C24:
    // 0x80225C24: jr          $ra
    // 0x80225C28: nop

    TRACE_RETURN()
    return;
    // 0x80225C28: nop

;}
RECOMP_FUNC void func_80230478_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023047C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230480: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230488: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023048C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230490: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230494: addu        $at, $at, $v0
    gpr jr_addend_8023049C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230498: lw          $v0, -0x1140($at)
    ctx->r2 = ADD32(ctx->r1, -0X1140);
    // 0x8023049C: jr          $v0
    // 0x802304A0: nop

    switch (jr_addend_8023049C >> 2) {
        case 0: goto L_802304A4; break;
        case 1: goto L_802304B8; break;
        case 2: goto L_802304E8; break;
        case 3: goto L_80230514; break;
        case 4: goto L_80230530; break;
        case 5: goto L_80230554; break;
        default: switch_error(__func__, 0x8023049C, 0x8023EEC0);
    }
    // 0x802304A0: nop

L_802304A4:
    // 0x802304A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802304A8: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x802304AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802304B0: j           L_80230540
    // 0x802304B4: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_80230540;
    // 0x802304B4: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_802304B8:
    // 0x802304B8: lui         $v1, 0xFFDF
    ctx->r3 = S32(0XFFDF << 16);
    // 0x802304BC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x802304C0: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x802304C4: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x802304C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802304CC: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x802304D0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802304D4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802304D8: beq         $v1, $v0, L_80230548
    if (ctx->r3 == ctx->r2) {
        // 0x802304DC: nop
    
            goto L_80230548;
    }
    // 0x802304DC: nop

    // 0x802304E0: j           L_80230554
    // 0x802304E4: nop

        goto L_80230554;
    // 0x802304E4: nop

L_802304E8:
    // 0x802304E8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x802304EC: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x802304F0: lui         $v1, 0xFFEC
    ctx->r3 = S32(0XFFEC << 16);
    // 0x802304F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802304F8: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x802304FC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80230500: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80230504: beq         $v1, $v0, L_80230548
    if (ctx->r3 == ctx->r2) {
        // 0x80230508: nop
    
            goto L_80230548;
    }
    // 0x80230508: nop

    // 0x8023050C: j           L_80230554
    // 0x80230510: nop

        goto L_80230554;
    // 0x80230510: nop

L_80230514:
    // 0x80230514: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80230518: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8023051C: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x80230520: beq         $v1, $v0, L_80230548
    if (ctx->r3 == ctx->r2) {
        // 0x80230524: nop
    
            goto L_80230548;
    }
    // 0x80230524: nop

    // 0x80230528: j           L_80230554
    // 0x8023052C: nop

        goto L_80230554;
    // 0x8023052C: nop

L_80230530:
    // 0x80230530: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230534: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80230538: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023053C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_80230540:
    // 0x80230540: jal         0x80050294
    // 0x80230544: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230544: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
L_80230548:
    // 0x80230548: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023054C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230550: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230554:
    // 0x80230554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230558: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023055C: jr          $ra
    // 0x80230560: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230560: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230F84_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230F84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230F88: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230F8C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80230F90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230F94: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230F98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230F9C: lw          $v0, -0x115C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X115C);
    // 0x80230FA0: jalr        $v0
    // 0x80230FA4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230FA4: nop

    after_0:
    // 0x80230FA8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230FAC: jr          $ra
    // 0x80230FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022ABA8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ABA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022ABAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ABB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ABB4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022ABB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022ABBC: lw          $v1, 0x35C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X35C);
    // 0x8022ABC0: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022ABC4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022ABC8: and         $s1, $v1, $v0
    ctx->r17 = ctx->r3 & ctx->r2;
    // 0x8022ABCC: beq         $s1, $zero, L_8022AC34
    if (ctx->r17 == 0) {
        // 0x8022ABD0: lui         $v0, 0x1800
        ctx->r2 = S32(0X1800 << 16);
            goto L_8022AC34;
    }
    // 0x8022ABD0: lui         $v0, 0x1800
    ctx->r2 = S32(0X1800 << 16);
    // 0x8022ABD4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022ABD8: beq         $v0, $zero, L_8022AC2C
    if (ctx->r2 == 0) {
        // 0x8022ABDC: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022AC2C;
    }
    // 0x8022ABDC: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x8022ABE0: jal         0x8002A33C
    // 0x8022ABE4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022ABE4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022ABE8: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022ABEC: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022ABF0: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x8022ABF4: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022ABF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ABFC: bgtz        $v0, L_8022AC20
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022AC00: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022AC20;
    }
    // 0x8022AC00: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022AC04: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022AC08: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022AC0C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022AC10: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022AC14: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022AC18: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022AC1C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022AC20:
    // 0x8022AC20: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022AC24: j           L_8022AC34
    // 0x8022AC28: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
        goto L_8022AC34;
    // 0x8022AC28: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022AC2C:
    // 0x8022AC2C: jal         0x8002A33C
    // 0x8022AC30: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022AC30: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_8022AC34:
    // 0x8022AC34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AC38: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AC3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AC40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AC44: jr          $ra
    // 0x8022AC48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AC48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022AC4C: nop

;}
RECOMP_FUNC void func_8022B688_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B688: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022B68C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022B690: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022B694: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x8022B698: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8022B69C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B6A0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022B6A4: jal         0x8009A3B4
    // 0x8022B6A8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B6A8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022B6AC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022B6B0: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022B6B4: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022B6B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B6BC: jal         0x8009A3B4
    // 0x8022B6C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B6C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022B6C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B6C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022B6CC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8022B6D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B6D4: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8022B6D8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022B6DC: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8022B6E0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B6E4: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x8022B6E8: jal         0x8004DF78
    // 0x8022B6EC: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x8022B6EC: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022B6F0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022B6F4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022B6F8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022B6FC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B700: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022B704: jr          $ra
    // 0x8022B708: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022B708: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802268FC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802268FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226900: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226904: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226908: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022690C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80226910: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80226914: beq         $v0, $zero, L_80226B50
    if (ctx->r2 == 0) {
        // 0x80226918: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226B50;
    }
    // 0x80226918: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022691C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226920: addu        $at, $at, $v0
    gpr jr_addend_80226928 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226924: lw          $v0, -0x288($at)
    ctx->r2 = ADD32(ctx->r1, -0X288);
    // 0x80226928: jr          $v0
    // 0x8022692C: nop

    switch (jr_addend_80226928 >> 2) {
        case 0: goto L_80226930; break;
        case 1: goto L_80226954; break;
        case 2: goto L_80226970; break;
        case 3: goto L_8022698C; break;
        case 4: goto L_802269AC; break;
        case 5: goto L_80226A28; break;
        case 6: goto L_80226A68; break;
        default: switch_error(__func__, 0x80226928, 0x8023FD78);
    }
    // 0x8022692C: nop

L_80226930:
    // 0x80226930: jal         0x8004A1AC
    // 0x80226934: nop

    func_8004A1AC_255AC(rdram, ctx);
        goto after_0;
    // 0x80226934: nop

    after_0:
    // 0x80226938: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022693C: jal         0x8006FF84
    // 0x80226940: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_1;
    // 0x80226940: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_1:
    // 0x80226944: beq         $v0, $zero, L_80226B50
    if (ctx->r2 == 0) {
        // 0x80226948: nop
    
            goto L_80226B50;
    }
    // 0x80226948: nop

    // 0x8022694C: j           L_8022699C
    // 0x80226950: nop

        goto L_8022699C;
    // 0x80226950: nop

L_80226954:
    // 0x80226954: jal         0x8002A4A4
    // 0x80226958: nop

    func_8002A4A4_58A4(rdram, ctx);
        goto after_2;
    // 0x80226958: nop

    after_2:
    // 0x8022695C: lui         $a0, 0x102
    ctx->r4 = S32(0X102 << 16);
    // 0x80226960: jal         0x80036B1C
    // 0x80226964: ori         $a0, $a0, 0x2500
    ctx->r4 = ctx->r4 | 0X2500;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_3;
    // 0x80226964: ori         $a0, $a0, 0x2500
    ctx->r4 = ctx->r4 | 0X2500;
    after_3:
    // 0x80226968: j           L_8022699C
    // 0x8022696C: nop

        goto L_8022699C;
    // 0x8022696C: nop

L_80226970:
    // 0x80226970: jal         0x80036B7C
    // 0x80226974: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_4;
    // 0x80226974: nop

    after_4:
    // 0x80226978: beq         $v0, $zero, L_80226B50
    if (ctx->r2 == 0) {
        // 0x8022697C: addiu       $v1, $zero, 0x1E
        ctx->r3 = ADD32(0, 0X1E);
            goto L_80226B50;
    }
    // 0x8022697C: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x80226980: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226984: j           L_802269A0
    // 0x80226988: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
        goto L_802269A0;
    // 0x80226988: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
L_8022698C:
    // 0x8022698C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80226990: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226994: bne         $v0, $zero, L_80226B50
    if (ctx->r2 != 0) {
        // 0x80226998: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_80226B50;
    }
    // 0x80226998: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_8022699C:
    // 0x8022699C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
L_802269A0:
    // 0x802269A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802269A4: j           L_80226B50
    // 0x802269A8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_80226B50;
    // 0x802269A8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802269AC:
    // 0x802269AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802269B0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802269B4: lbu         $v0, 0x49B0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X49B0);
    // 0x802269B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802269BC: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x802269C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269C4: sb          $v0, 0x49B0($at)
    MEM_B(0X49B0, ctx->r1) = ctx->r2;
    // 0x802269C8: jal         0x8005F6B4
    // 0x802269CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_5;
    // 0x802269CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x802269D0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802269D4: addiu       $a0, $a0, -0x1B30
    ctx->r4 = ADD32(ctx->r4, -0X1B30);
    // 0x802269D8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802269DC: addiu       $v0, $v0, -0x1B08
    ctx->r2 = ADD32(ctx->r2, -0X1B08);
    // 0x802269E0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802269E4: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802269E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802269EC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802269F0: jal         0x8005FA7C
    // 0x802269F4: sb          $v0, -0x5F38($at)
    MEM_B(-0X5F38, ctx->r1) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_6;
    // 0x802269F4: sb          $v0, -0x5F38($at)
    MEM_B(-0X5F38, ctx->r1) = ctx->r2;
    after_6:
    // 0x802269F8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802269FC: jal         0x8005FA7C
    // 0x80226A00: addiu       $a0, $a0, -0x1B1C
    ctx->r4 = ADD32(ctx->r4, -0X1B1C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_7;
    // 0x80226A00: addiu       $a0, $a0, -0x1B1C
    ctx->r4 = ADD32(ctx->r4, -0X1B1C);
    after_7:
    // 0x80226A04: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80226A08: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226A0C: addiu       $v0, $v0, -0x1800
    ctx->r2 = ADD32(ctx->r2, -0X1800);
    // 0x80226A10: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x80226A14: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80226A18: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80226A1C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80226A20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226A24: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
L_80226A28:
    // 0x80226A28: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226A2C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226A30: bne         $v0, $zero, L_80226A68
    if (ctx->r2 != 0) {
        // 0x80226A34: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80226A68;
    }
    // 0x80226A34: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226A38: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80226A3C: beq         $v1, $v0, L_80226A54
    if (ctx->r3 == ctx->r2) {
        // 0x80226A40: nop
    
            goto L_80226A54;
    }
    // 0x80226A40: nop

    // 0x80226A44: jal         0x8006072C
    // 0x80226A48: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_8;
    // 0x80226A48: nop

    after_8:
    // 0x80226A4C: beq         $v0, $zero, L_80226A68
    if (ctx->r2 == 0) {
        // 0x80226A50: nop
    
            goto L_80226A68;
    }
    // 0x80226A50: nop

L_80226A54:
    // 0x80226A54: jal         0x80036E48
    // 0x80226A58: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_9;
    // 0x80226A58: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_9:
    // 0x80226A5C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226A60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226A64: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226A68:
    // 0x80226A68: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80226A6C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226A70: beq         $v1, $v0, L_80226A88
    if (ctx->r3 == ctx->r2) {
        // 0x80226A74: nop
    
            goto L_80226A88;
    }
    // 0x80226A74: nop

    // 0x80226A78: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80226A7C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226A80: jalr        $v0
    // 0x80226A84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x80226A84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
L_80226A88:
    // 0x80226A88: jal         0x8005FB90
    // 0x80226A8C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_11;
    // 0x80226A8C: nop

    after_11:
    // 0x80226A90: jal         0x80060018
    // 0x80226A94: nop

    func_80060018_3B418(rdram, ctx);
        goto after_12;
    // 0x80226A94: nop

    after_12:
    // 0x80226A98: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80226A9C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226AA0: bne         $v1, $v0, L_80226B50
    if (ctx->r3 != ctx->r2) {
        // 0x80226AA4: nop
    
            goto L_80226B50;
    }
    // 0x80226AA4: nop

    // 0x80226AA8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226AAC: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226AB0: bne         $v0, $zero, L_80226B50
    if (ctx->r2 != 0) {
        // 0x80226AB4: nop
    
            goto L_80226B50;
    }
    // 0x80226AB4: nop

    // 0x80226AB8: jal         0x8004A400
    // 0x80226ABC: nop

    func_8004A400_25800(rdram, ctx);
        goto after_13;
    // 0x80226ABC: nop

    after_13:
    // 0x80226AC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226AC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226AC8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226ACC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226AD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226AD4: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226AD8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226ADC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226AE0: sb          $zero, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = 0;
    // 0x80226AE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226AE8: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80226AEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226AF0: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80226AF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226AF8: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80226AFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B00: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226B04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B08: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226B0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B10: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226B14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B18: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226B1C: jal         0x80060590
    // 0x80226B20: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_80060590_3B990(rdram, ctx);
        goto after_14;
    // 0x80226B20: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_14:
    // 0x80226B24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226B28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226B2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226B30: jal         0x80036B00
    // 0x80226B34: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    func_80036B00_11F00(rdram, ctx);
        goto after_15;
    // 0x80226B34: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    after_15:
    // 0x80226B38: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226B3C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80226B40: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80226B44: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80226B48: jal         0x80070050
    // 0x80226B4C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_16;
    // 0x80226B4C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    after_16:
L_80226B50:
    // 0x80226B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226B54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226B58: jr          $ra
    // 0x80226B5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226B5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225D94_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225D98: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225D9C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80225DA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225DA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225DA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225DAC: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x80225DB0: bne         $v0, $zero, L_80225E1C
    if (ctx->r2 != 0) {
        // 0x80225DB4: nop
    
            goto L_80225E1C;
    }
    // 0x80225DB4: nop

    // 0x80225DB8: jal         0x8004F228
    // 0x80225DBC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    func_8004F228_2A628(rdram, ctx);
        goto after_0;
    // 0x80225DBC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_0:
    // 0x80225DC0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225DC4: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x80225DC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225DCC: sb          $s1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r17;
    // 0x80225DD0: sb          $s0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r16;
    // 0x80225DD4: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
    // 0x80225DD8: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80225DDC: jal         0x8004F228
    // 0x80225DE0: sb          $zero, 0x5($v1)
    MEM_B(0X5, ctx->r3) = 0;
    func_8004F228_2A628(rdram, ctx);
        goto after_1;
    // 0x80225DE0: sb          $zero, 0x5($v1)
    MEM_B(0X5, ctx->r3) = 0;
    after_1:
    // 0x80225DE4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225DE8: sb          $s1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r17;
    // 0x80225DEC: sb          $s0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r16;
    // 0x80225DF0: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
    // 0x80225DF4: sb          $s0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r16;
    // 0x80225DF8: jal         0x8004F228
    // 0x80225DFC: sb          $zero, 0x5($v1)
    MEM_B(0X5, ctx->r3) = 0;
    func_8004F228_2A628(rdram, ctx);
        goto after_2;
    // 0x80225DFC: sb          $zero, 0x5($v1)
    MEM_B(0X5, ctx->r3) = 0;
    after_2:
    // 0x80225E00: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225E04: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225E08: sb          $s1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r17;
    // 0x80225E0C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80225E10: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
    // 0x80225E14: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80225E18: sb          $zero, 0x5($v1)
    MEM_B(0X5, ctx->r3) = 0;
L_80225E1C:
    // 0x80225E1C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80225E20: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80225E24: bne         $v1, $v0, L_80225E48
    if (ctx->r3 != ctx->r2) {
        // 0x80225E28: addiu       $v0, $zero, 0x21
        ctx->r2 = ADD32(0, 0X21);
            goto L_80225E48;
    }
    // 0x80225E28: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x80225E2C: lw          $v0, 0x44($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X44);
    // 0x80225E30: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225E34: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225E38: lw          $v0, 0x44($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X44);
    // 0x80225E3C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225E40: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80225E44: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
L_80225E48:
    // 0x80225E48: bne         $v1, $v0, L_80225E60
    if (ctx->r3 != ctx->r2) {
        // 0x80225E4C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80225E60;
    }
    // 0x80225E4C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225E50: lw          $v0, 0x48($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X48);
    // 0x80225E54: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225E58: lw          $v0, 0x48($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X48);
    // 0x80225E5C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80225E60:
    // 0x80225E60: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80225E64: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80225E68: bne         $v1, $v0, L_80225E8C
    if (ctx->r3 != ctx->r2) {
        // 0x80225E6C: addiu       $v0, $zero, 0x31
        ctx->r2 = ADD32(0, 0X31);
            goto L_80225E8C;
    }
    // 0x80225E6C: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
    // 0x80225E70: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    // 0x80225E74: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225E78: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225E7C: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    // 0x80225E80: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225E84: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80225E88: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
L_80225E8C:
    // 0x80225E8C: bne         $v1, $v0, L_80225EB0
    if (ctx->r3 != ctx->r2) {
        // 0x80225E90: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80225EB0;
    }
    // 0x80225E90: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80225E94: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x80225E98: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225E9C: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x80225EA0: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225EA8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225EAC: sb          $v0, 0x60($at)
    MEM_B(0X60, ctx->r1) = ctx->r2;
L_80225EB0:
    // 0x80225EB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225EB4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225EB8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225EBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225EC0: jr          $ra
    // 0x80225EC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225EC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802251B4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251B4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802251B8: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x802251BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802251C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251C8: bne         $v1, $v0, L_802251E4
    if (ctx->r3 != ctx->r2) {
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
    // 0x802251D8: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802251DC: j           L_802251EC
    // 0x802251E0: addiu       $a1, $a1, -0x296C
    ctx->r5 = ADD32(ctx->r5, -0X296C);
        goto L_802251EC;
    // 0x802251E0: addiu       $a1, $a1, -0x296C
    ctx->r5 = ADD32(ctx->r5, -0X296C);
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
    // 0x802251F4: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x802251F8: lb          $t1, -0x3BC7($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X3BC7);
    // 0x802251FC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80225200: addiu       $a0, $a0, 0xCB4
    ctx->r4 = ADD32(ctx->r4, 0XCB4);
    // 0x80225204: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x80225208: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022520C: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80225210: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225214: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x80225218: lbu         $a1, 0x3($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3);
    // 0x8022521C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225220: sh          $a1, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r5;
    // 0x80225224: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x80225228: lui         $a3, 0x7FE9
    ctx->r7 = S32(0X7FE9 << 16);
    // 0x8022522C: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x80225230: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225234: sb          $a2, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r6;
    // 0x80225238: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x8022523C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225240: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80225244: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80225248: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022524C: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225250: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225254: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225258: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022525C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225260: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225264: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225268: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022526C: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225270: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80225274: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225278: sb          $a1, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r5;
    // 0x8022527C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80225280: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80225284: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225288: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x8022528C: sltiu       $v0, $t1, 0x5
    ctx->r2 = ctx->r9 < 0X5 ? 1 : 0;
    // 0x80225290: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225294: sb          $t0, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r8;
    // 0x80225298: beq         $v0, $zero, L_8022531C
    if (ctx->r2 == 0) {
        // 0x8022529C: sll         $v0, $t1, 2
        ctx->r2 = S32(ctx->r9 << 2);
            goto L_8022531C;
    }
    // 0x8022529C: sll         $v0, $t1, 2
    ctx->r2 = S32(ctx->r9 << 2);
    // 0x802252A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802252A4: addu        $at, $at, $v0
    gpr jr_addend_802252AC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802252A8: lw          $v0, -0x2E0($at)
    ctx->r2 = ADD32(ctx->r1, -0X2E0);
    // 0x802252AC: jr          $v0
    // 0x802252B0: nop

    switch (jr_addend_802252AC >> 2) {
        case 0: goto L_802252B4; break;
        case 1: goto L_802252E4; break;
        case 2: goto L_802252F0; break;
        case 3: goto L_802252F0; break;
        case 4: goto L_80225304; break;
        default: switch_error(__func__, 0x802252AC, 0x8023FD20);
    }
    // 0x802252B0: nop

L_802252B4:
    // 0x802252B4: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x802252B8: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    // 0x802252BC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x802252C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802252C4: sw          $v0, -0x35A4($at)
    MEM_W(-0X35A4, ctx->r1) = ctx->r2;
    // 0x802252C8: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x802252CC: andi        $v1, $v1, 0xFC
    ctx->r3 = ctx->r3 & 0XFC;
    // 0x802252D0: jal         0x8006036C
    // 0x802252D4: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x802252D4: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    after_1:
    // 0x802252D8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802252DC: j           L_8022531C
    // 0x802252E0: sb          $zero, 0xB62($at)
    MEM_B(0XB62, ctx->r1) = 0;
        goto L_8022531C;
    // 0x802252E0: sb          $zero, 0xB62($at)
    MEM_B(0XB62, ctx->r1) = 0;
L_802252E4:
    // 0x802252E4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x802252E8: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x802252EC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_802252F0:
    // 0x802252F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802252F4: sb          $v0, 0x44E($a1)
    MEM_B(0X44E, ctx->r5) = ctx->r2;
    // 0x802252F8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802252FC: j           L_8022531C
    // 0x80225300: sb          $v0, 0xB62($at)
    MEM_B(0XB62, ctx->r1) = ctx->r2;
        goto L_8022531C;
    // 0x80225300: sb          $v0, 0xB62($at)
    MEM_B(0XB62, ctx->r1) = ctx->r2;
L_80225304:
    // 0x80225304: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225308: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    // 0x8022530C: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x80225310: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x80225314: jal         0x8006036C
    // 0x80225318: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80225318: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    after_2:
L_8022531C:
    // 0x8022531C: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80225320: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x80225324: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225328: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022532C: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x80225330: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225334: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225338: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022533C: lw          $a0, -0x2BFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2BFC);
    // 0x80225340: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225344: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225348: lw          $v0, -0x2AF8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2AF8);
    // 0x8022534C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225350: jal         0x8004C790
    // 0x80225354: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_3;
    // 0x80225354: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_3:
    // 0x80225358: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8022535C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225360: addiu       $a0, $a0, -0x2AA8
    ctx->r4 = ADD32(ctx->r4, -0X2AA8);
    // 0x80225364: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80225368: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022536C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225370: lw          $v1, -0x29E0($at)
    ctx->r3 = MEM_W(ctx->r1, -0X29E0);
    // 0x80225374: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x80225378: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022537C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80225380: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225384: addiu       $v0, $v0, -0x2AE4
    ctx->r2 = ADD32(ctx->r2, -0X2AE4);
    // 0x80225388: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022538C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225390: jal         0x80054FB8
    // 0x80225394: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_4;
    // 0x80225394: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_4:
    // 0x80225398: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8022539C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802253A0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802253A4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802253A8: jal         0x8004A614
    // 0x802253AC: lw          $a0, -0x3628($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3628);
    func_8004A614_25A14(rdram, ctx);
        goto after_5;
    // 0x802253AC: lw          $a0, -0x3628($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3628);
    after_5:
    // 0x802253B0: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802253B4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802253B8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802253BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802253C0: lw          $v1, -0x2994($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2994);
    // 0x802253C4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802253C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802253CC: lw          $v0, -0x2990($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2990);
    // 0x802253D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x802253D4: sw          $v1, -0x3690($at)
    MEM_W(-0X3690, ctx->r1) = ctx->r3;
    // 0x802253D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x802253DC: sw          $v0, -0x368C($at)
    MEM_W(-0X368C, ctx->r1) = ctx->r2;
    // 0x802253E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802253E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802253E8: jr          $ra
    // 0x802253EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D050_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D054: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D058: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D05C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D060: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D064: beq         $v1, $zero, L_8022D080
    if (ctx->r3 == 0) {
        // 0x8022D068: addiu       $a0, $s0, 0x4E0
        ctx->r4 = ADD32(ctx->r16, 0X4E0);
            goto L_8022D080;
    }
    // 0x8022D068: addiu       $a0, $s0, 0x4E0
    ctx->r4 = ADD32(ctx->r16, 0X4E0);
    // 0x8022D06C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D070: beq         $v1, $v0, L_8022D0AC
    if (ctx->r3 == ctx->r2) {
        // 0x8022D074: nop
    
            goto L_8022D0AC;
    }
    // 0x8022D074: nop

    // 0x8022D078: j           L_8022D158
    // 0x8022D07C: nop

        goto L_8022D158;
    // 0x8022D07C: nop

L_8022D080:
    // 0x8022D080: lhu         $v1, 0x4E0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E0);
    // 0x8022D084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D088: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D08C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D090: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D094: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x8022D098: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022D09C: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x8022D0A0: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
    // 0x8022D0A4: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x8022D0A8: sh          $v1, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r3;
L_8022D0AC:
    // 0x8022D0AC: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8022D0B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D0B4: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022D0B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D0BC: bgtz        $v0, L_8022D0D0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022D0C0: nop
    
            goto L_8022D0D0;
    }
    // 0x8022D0C0: nop

    // 0x8022D0C4: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022D0C8: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x8022D0CC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_8022D0D0:
    // 0x8022D0D0: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022D0D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D0D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D0DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D0E0: sll         $a1, $a1, 19
    ctx->r5 = S32(ctx->r5 << 19);
    // 0x8022D0E4: jal         0x8004DA90
    // 0x8022D0E8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022D0E8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_0:
    // 0x8022D0EC: jal         0x80040F30
    // 0x8022D0F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022D0F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022D0F4: jal         0x8003E934
    // 0x8022D0F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022D0F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022D0FC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022D100: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022D104: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022D108: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D10C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022D110: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022D114: bltz        $v0, L_8022D12C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022D118: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022D12C;
    }
    // 0x8022D118: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022D11C: beq         $v0, $zero, L_8022D13C
    if (ctx->r2 == 0) {
        // 0x8022D120: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D13C;
    }
    // 0x8022D120: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D124: j           L_8022D158
    // 0x8022D128: nop

        goto L_8022D158;
    // 0x8022D128: nop

L_8022D12C:
    // 0x8022D12C: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022D130: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022D134: bne         $v0, $zero, L_8022D158
    if (ctx->r2 != 0) {
        // 0x8022D138: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D158;
    }
    // 0x8022D138: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022D13C:
    // 0x8022D13C: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022D140: jal         0x8009A3B4
    // 0x8022D144: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022D144: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022D148: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022D14C: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022D150: jal         0x8009A3B4
    // 0x8022D154: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022D154: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
L_8022D158:
    // 0x8022D158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D15C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D160: jr          $ra
    // 0x8022D164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235C70_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235C70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235C74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235C78: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80235C7C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80235C80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80235C84: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80235C88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235C8C: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x80235C90: lhu         $a0, 0x3A($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X3A);
    // 0x80235C94: ori         $v0, $v0, 0x4E80
    ctx->r2 = ctx->r2 | 0X4E80;
    // 0x80235C98: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235C9C: sw          $v1, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r3;
    // 0x80235CA0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80235CA4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80235CA8: sh          $a0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r4;
    // 0x80235CAC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80235CB0: blez        $a0, L_80235D28
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80235CB4: nop
    
            goto L_80235D28;
    }
    // 0x80235CB4: nop

    // 0x80235CB8: jal         0x8004F144
    // 0x80235CBC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80235CBC: nop

    after_0:
    // 0x80235CC0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235CC4: beq         $v1, $zero, L_80235D00
    if (ctx->r3 == 0) {
        // 0x80235CC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235D00;
    }
    // 0x80235CC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235CCC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80235CD0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80235CD4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80235CD8: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80235CDC: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80235CE0: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x80235CE4: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x80235CE8: sh          $zero, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = 0;
    // 0x80235CEC: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80235CF0: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x80235CF4: sb          $zero, 0x8($v1)
    MEM_B(0X8, ctx->r3) = 0;
    // 0x80235CF8: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x80235CFC: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_80235D00:
    // 0x80235D00: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80235D04: addiu       $a0, $a0, 0x9E4
    ctx->r4 = ADD32(ctx->r4, 0X9E4);
    // 0x80235D08: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80235D0C: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x80235D10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235D14: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80235D18: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80235D1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235D20: j           L_80235DD0
    // 0x80235D24: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80235DD0;
    // 0x80235D24: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80235D28:
    // 0x80235D28: jal         0x800A3450
    // 0x80235D2C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80235D2C: nop

    after_1:
    // 0x80235D30: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80235D34: bne         $v0, $zero, L_80235DD0
    if (ctx->r2 != 0) {
        // 0x80235D38: nop
    
            goto L_80235DD0;
    }
    // 0x80235D38: nop

    // 0x80235D3C: jal         0x8004F144
    // 0x80235D40: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80235D40: nop

    after_2:
    // 0x80235D44: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80235D48: beq         $s0, $zero, L_80235DD0
    if (ctx->r16 == 0) {
        // 0x80235D4C: nop
    
            goto L_80235DD0;
    }
    // 0x80235D4C: nop

    // 0x80235D50: jal         0x800A3450
    // 0x80235D54: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80235D54: nop

    after_3:
    // 0x80235D58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235D5C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80235D60: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235D64: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80235D68: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x80235D6C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80235D70: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80235D74: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80235D78: jal         0x800A3450
    // 0x80235D7C: lh          $s2, 0x38($s1)
    ctx->r18 = MEM_H(ctx->r17, 0X38);
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80235D7C: lh          $s2, 0x38($s1)
    ctx->r18 = MEM_H(ctx->r17, 0X38);
    after_4:
    // 0x80235D80: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235D84: bne         $v0, $zero, L_80235D90
    if (ctx->r2 != 0) {
        // 0x80235D88: addiu       $v0, $s2, -0x182
        ctx->r2 = ADD32(ctx->r18, -0X182);
            goto L_80235D90;
    }
    // 0x80235D88: addiu       $v0, $s2, -0x182
    ctx->r2 = ADD32(ctx->r18, -0X182);
    // 0x80235D8C: addiu       $v0, $s2, 0x182
    ctx->r2 = ADD32(ctx->r18, 0X182);
L_80235D90:
    // 0x80235D90: jal         0x800A3450
    // 0x80235D94: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80235D94: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    after_5:
    // 0x80235D98: lhu         $v1, 0x3A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3A);
    // 0x80235D9C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x80235DA0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235DA4: addiu       $v1, $v1, -0xCF
    ctx->r3 = ADD32(ctx->r3, -0XCF);
    // 0x80235DA8: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80235DAC: jal         0x800A3450
    // 0x80235DB0: lh          $s1, 0x3C($s1)
    ctx->r17 = MEM_H(ctx->r17, 0X3C);
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80235DB0: lh          $s1, 0x3C($s1)
    ctx->r17 = MEM_H(ctx->r17, 0X3C);
    after_6:
    // 0x80235DB4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235DB8: bne         $v0, $zero, L_80235DC4
    if (ctx->r2 != 0) {
        // 0x80235DBC: addiu       $v0, $s1, -0x40
        ctx->r2 = ADD32(ctx->r17, -0X40);
            goto L_80235DC4;
    }
    // 0x80235DBC: addiu       $v0, $s1, -0x40
    ctx->r2 = ADD32(ctx->r17, -0X40);
    // 0x80235DC0: addiu       $v0, $s1, 0x40
    ctx->r2 = ADD32(ctx->r17, 0X40);
L_80235DC4:
    // 0x80235DC4: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80235DC8: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x80235DCC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80235DD0:
    // 0x80235DD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80235DD4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80235DD8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235DDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235DE0: jr          $ra
    // 0x80235DE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235DE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022653C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022653C: jr          $ra
    // 0x80226540: nop

    TRACE_RETURN()
    return;
    // 0x80226540: nop

;}
RECOMP_FUNC void func_8022F5A0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F5A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F5A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F5A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F5AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022F5B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022F5B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F5B8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F5BC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022F5C0: beq         $v0, $zero, L_8022F784
    if (ctx->r2 == 0) {
        // 0x8022F5C4: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022F784;
    }
    // 0x8022F5C4: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022F5C8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022F5CC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F5D0: addu        $at, $at, $v0
    gpr jr_addend_8022F5D8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F5D4: lw          $v0, -0xD8($at)
    ctx->r2 = ADD32(ctx->r1, -0XD8);
    // 0x8022F5D8: jr          $v0
    // 0x8022F5DC: nop

    switch (jr_addend_8022F5D8 >> 2) {
        case 0: goto L_8022F5E0; break;
        case 1: goto L_8022F620; break;
        case 2: goto L_8022F66C; break;
        case 3: goto L_8022F734; break;
        case 4: goto L_8022F760; break;
        default: switch_error(__func__, 0x8022F5D8, 0x8023FF28);
    }
    // 0x8022F5DC: nop

L_8022F5E0:
    // 0x8022F5E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F5E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F5E8: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022F5EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F5F0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022F5F4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022F5F8: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8022F5FC: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022F600: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F604: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F608: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022F60C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022F610: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x8022F614: jal         0x8003E934
    // 0x8022F618: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022F618: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    after_0:
    // 0x8022F61C: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
L_8022F620:
    // 0x8022F620: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022F624: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F628: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022F62C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F630: bgez        $v0, L_8022F784
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F634: nop
    
            goto L_8022F784;
    }
    // 0x8022F634: nop

    // 0x8022F638: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022F63C: lhu         $v1, 0x182($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X182);
    // 0x8022F640: addiu       $v0, $v0, 0xC8
    ctx->r2 = ADD32(ctx->r2, 0XC8);
    // 0x8022F644: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022F648: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022F64C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F650: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F654: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022F658: addiu       $v1, $v1, 0xC8
    ctx->r3 = ADD32(ctx->r3, 0XC8);
    // 0x8022F65C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F660: sh          $v1, 0x182($s0)
    MEM_H(0X182, ctx->r16) = ctx->r3;
    // 0x8022F664: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022F668: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_8022F66C:
    // 0x8022F66C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F670: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022F674: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F678: jal         0x8004DA90
    // 0x8022F67C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022F67C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022F680: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F684: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022F688: lh          $s2, 0x16($s0)
    ctx->r18 = MEM_H(ctx->r16, 0X16);
    // 0x8022F68C: lhu         $v1, 0x182($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X182);
    // 0x8022F690: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F694: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022F698: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F69C: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022F6A0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F6A4: jal         0x80040F30
    // 0x8022F6A8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022F6A8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022F6AC: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x8022F6B0: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022F6B4: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022F6B8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022F6BC: bne         $v0, $zero, L_8022F6D4
    if (ctx->r2 != 0) {
        // 0x8022F6C0: sh          $v1, 0x46($s0)
        MEM_H(0X46, ctx->r16) = ctx->r3;
            goto L_8022F6D4;
    }
    // 0x8022F6C0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022F6C4: lh          $v0, 0x3E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3E);
    // 0x8022F6C8: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022F6CC: bne         $v0, $zero, L_8022F728
    if (ctx->r2 != 0) {
        // 0x8022F6D0: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_8022F728;
    }
    // 0x8022F6D0: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_8022F6D4:
    // 0x8022F6D4: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x8022F6D8: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x8022F6DC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022F6E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F6E4: bgtz        $v1, L_8022F70C
    if (SIGNED(ctx->r3) > 0) {
        // 0x8022F6E8: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022F70C;
    }
    // 0x8022F6E8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022F6EC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022F6F0: addiu       $a0, $zero, 0xD3
    ctx->r4 = ADD32(0, 0XD3);
    // 0x8022F6F4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F6F8: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x8022F6FC: jal         0x8002A33C
    // 0x8022F700: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022F700: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022F704: j           L_8022F784
    // 0x8022F708: nop

        goto L_8022F784;
    // 0x8022F708: nop

L_8022F70C:
    // 0x8022F70C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F710: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F714: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F718: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F71C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022F720: j           L_8022F734
    // 0x8022F724: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022F734;
    // 0x8022F724: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022F728:
    // 0x8022F728: sh          $s2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r18;
    // 0x8022F72C: j           L_8022F784
    // 0x8022F730: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8022F784;
    // 0x8022F730: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022F734:
    // 0x8022F734: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022F738: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F73C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022F740: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F744: bgez        $v0, L_8022F784
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F748: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022F784;
    }
    // 0x8022F748: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F74C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F750: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022F754: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F758: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022F75C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022F760:
    // 0x8022F760: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022F764: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F768: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022F76C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F770: bgez        $v0, L_8022F784
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F774: nop
    
            goto L_8022F784;
    }
    // 0x8022F774: nop

    // 0x8022F778: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022F77C: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x8022F780: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022F784:
    // 0x8022F784: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F788: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022F78C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F790: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F794: jr          $ra
    // 0x8022F798: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F798: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023AEC4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AEC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AEC8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023AECC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023AED0: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x8023AED4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023AED8: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x8023AEDC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023AEE0: bne         $v0, $zero, L_8023AEF8
    if (ctx->r2 != 0) {
        // 0x8023AEE4: lui         $v0, 0xFFDF
        ctx->r2 = S32(0XFFDF << 16);
            goto L_8023AEF8;
    }
    // 0x8023AEE4: lui         $v0, 0xFFDF
    ctx->r2 = S32(0XFFDF << 16);
    // 0x8023AEE8: jal         0x8004F5C4
    // 0x8023AEEC: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8023AEEC: nop

    after_0:
    // 0x8023AEF0: j           L_8023AF14
    // 0x8023AEF4: nop

        goto L_8023AF14;
    // 0x8023AEF4: nop

L_8023AEF8:
    // 0x8023AEF8: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8023AEFC: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x8023AF00: ori         $v0, $v0, 0xDFE0
    ctx->r2 = ctx->r2 | 0XDFE0;
    // 0x8023AF04: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AF08: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8023AF0C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x8023AF10: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
L_8023AF14:
    // 0x8023AF14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023AF18: jr          $ra
    // 0x8023AF1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AF1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FDE0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FDE0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022FDE4: addiu       $v1, $v1, -0x1438
    ctx->r3 = ADD32(ctx->r3, -0X1438);
    // 0x8022FDE8: lhu         $v0, 0x4E2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4E2);
    // 0x8022FDEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FDF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FDF4: andi        $a3, $v0, 0xF
    ctx->r7 = ctx->r2 & 0XF;
L_8022FDF8:
    // 0x8022FDF8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022FDFC: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8022FE00: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022FE04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FE08: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022FE0C: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022FE10: bne         $v0, $zero, L_8022FE30
    if (ctx->r2 != 0) {
        // 0x8022FE14: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8022FE30;
    }
    // 0x8022FE14: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8022FE18: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022FE1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FE20: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022FE24: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022FE28: bne         $v0, $zero, L_8022FDF8
    if (ctx->r2 != 0) {
        // 0x8022FE2C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8022FDF8;
    }
    // 0x8022FE2C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8022FE30:
    // 0x8022FE30: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FE34: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022FE38: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022FE3C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022FE40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FE44: beq         $v1, $v0, L_8022FE74
    if (ctx->r3 == ctx->r2) {
        // 0x8022FE48: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022FE74;
    }
    // 0x8022FE48: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022FE4C: beql        $v0, $zero, L_8022FE64
    if (ctx->r2 == 0) {
        // 0x8022FE50: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022FE64;
    }
    goto skip_0;
    // 0x8022FE50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022FE54: beql        $v1, $zero, L_8022FE8C
    if (ctx->r3 == 0) {
        // 0x8022FE58: sh          $zero, 0x66($a0)
        MEM_H(0X66, ctx->r4) = 0;
            goto L_8022FE8C;
    }
    goto skip_1;
    // 0x8022FE58: sh          $zero, 0x66($a0)
    MEM_H(0X66, ctx->r4) = 0;
    skip_1:
    // 0x8022FE5C: j           L_8022FE88
    // 0x8022FE60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022FE88;
    // 0x8022FE60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022FE64:
    // 0x8022FE64: beql        $v1, $v0, L_8022FE80
    if (ctx->r3 == ctx->r2) {
        // 0x8022FE68: addiu       $v0, $zero, -0x6
        ctx->r2 = ADD32(0, -0X6);
            goto L_8022FE80;
    }
    goto skip_2;
    // 0x8022FE68: addiu       $v0, $zero, -0x6
    ctx->r2 = ADD32(0, -0X6);
    skip_2:
    // 0x8022FE6C: j           L_8022FE88
    // 0x8022FE70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022FE88;
    // 0x8022FE70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022FE74:
    // 0x8022FE74: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022FE78: j           L_8022FE8C
    // 0x8022FE7C: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
        goto L_8022FE8C;
    // 0x8022FE7C: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022FE80:
    // 0x8022FE80: j           L_8022FE8C
    // 0x8022FE84: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
        goto L_8022FE8C;
    // 0x8022FE84: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022FE88:
    // 0x8022FE88: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022FE8C:
    // 0x8022FE8C: jr          $ra
    // 0x8022FE90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8022FE90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8023604C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023604C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80236050: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80236054: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236058: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8023605C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80236060: lw          $v1, -0x3A04($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A04);
    // 0x80236064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236068: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8023606C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80236070: lw          $v0, -0x3A04($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A04);
    // 0x80236074: jr          $ra
    // 0x80236078: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x80236078: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
;}
RECOMP_FUNC void func_8023A12C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A12C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8023A130: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x8023A134: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8023A138: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8023A13C: lw          $s1, 0x28($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X28);
    // 0x8023A140: lhu         $v0, 0x2C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2C);
    // 0x8023A144: lhu         $s0, 0x56($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X56);
    // 0x8023A148: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x8023A14C: lhu         $v0, 0x2E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2E);
    // 0x8023A150: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x8023A154: lhu         $v0, 0x30($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X30);
    // 0x8023A158: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023A15C: jal         0x8002C654
    // 0x8023A160: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8023A160: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x8023A164: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8023A168: sra         $a0, $s0, 16
    ctx->r4 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8023A16C: jal         0x800319B4
    // 0x8023A170: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8023A170: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x8023A174: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023A178: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8023A17C: jal         0x80031270
    // 0x8023A180: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x8023A180: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x8023A184: jal         0x8004F144
    // 0x8023A188: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x8023A188: nop

    after_3:
    // 0x8023A18C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8023A190: beq         $a1, $zero, L_8023A238
    if (ctx->r5 == 0) {
        // 0x8023A194: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023A238;
    }
    // 0x8023A194: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023A198: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8023A19C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A1A0: sb          $a0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r4;
    // 0x8023A1A4: sb          $v1, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r3;
    // 0x8023A1A8: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8023A1AC: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x8023A1B0: sb          $a0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r4;
    // 0x8023A1B4: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x8023A1B8: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x8023A1BC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023A1C0: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8023A1C4: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8023A1C8: bnel        $v1, $v0, L_8023A1DC
    if (ctx->r3 != ctx->r2) {
        // 0x8023A1CC: lui         $v0, 0x3C88
        ctx->r2 = S32(0X3C88 << 16);
            goto L_8023A1DC;
    }
    goto skip_0;
    // 0x8023A1CC: lui         $v0, 0x3C88
    ctx->r2 = S32(0X3C88 << 16);
    skip_0:
    // 0x8023A1D0: lui         $v0, 0x3CC8
    ctx->r2 = S32(0X3CC8 << 16);
    // 0x8023A1D4: j           L_8023A1E0
    // 0x8023A1D8: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
        goto L_8023A1E0;
    // 0x8023A1D8: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
L_8023A1DC:
    // 0x8023A1DC: ori         $v0, $v0, 0x26
    ctx->r2 = ctx->r2 | 0X26;
L_8023A1E0:
    // 0x8023A1E0: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
    // 0x8023A1E4: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
    // 0x8023A1E8: sh          $v0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r2;
    // 0x8023A1EC: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8023A1F0: sb          $v0, 0x22($a1)
    MEM_B(0X22, ctx->r5) = ctx->r2;
    // 0x8023A1F4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023A1F8: sb          $v0, 0x23($a1)
    MEM_B(0X23, ctx->r5) = ctx->r2;
    // 0x8023A1FC: lh          $v1, 0x1C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1C);
    // 0x8023A200: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x8023A204: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A208: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x8023A20C: lh          $v1, 0x20($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X20);
    // 0x8023A210: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x8023A214: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A218: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x8023A21C: lh          $a0, 0x24($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X24);
    // 0x8023A220: lhu         $v0, 0x3C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3C);
    // 0x8023A224: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8023A228: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023A22C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x8023A230: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023A234: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
L_8023A238:
    // 0x8023A238: jal         0x8004F144
    // 0x8023A23C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x8023A23C: nop

    after_4:
    // 0x8023A240: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8023A244: beq         $a1, $zero, L_8023A2EC
    if (ctx->r5 == 0) {
        // 0x8023A248: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8023A2EC;
    }
    // 0x8023A248: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023A24C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x8023A250: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A254: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x8023A258: sb          $a0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r4;
    // 0x8023A25C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8023A260: sb          $a0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r4;
    // 0x8023A264: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
    // 0x8023A268: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
    // 0x8023A26C: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x8023A270: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023A274: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8023A278: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8023A27C: bnel        $v1, $v0, L_8023A290
    if (ctx->r3 != ctx->r2) {
        // 0x8023A280: lui         $v0, 0x3C88
        ctx->r2 = S32(0X3C88 << 16);
            goto L_8023A290;
    }
    goto skip_1;
    // 0x8023A280: lui         $v0, 0x3C88
    ctx->r2 = S32(0X3C88 << 16);
    skip_1:
    // 0x8023A284: lui         $v0, 0x3CC8
    ctx->r2 = S32(0X3CC8 << 16);
    // 0x8023A288: j           L_8023A294
    // 0x8023A28C: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
        goto L_8023A294;
    // 0x8023A28C: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
L_8023A290:
    // 0x8023A290: ori         $v0, $v0, 0x26
    ctx->r2 = ctx->r2 | 0X26;
L_8023A294:
    // 0x8023A294: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
    // 0x8023A298: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x8023A29C: sh          $v0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r2;
    // 0x8023A2A0: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8023A2A4: sb          $v0, 0x22($a1)
    MEM_B(0X22, ctx->r5) = ctx->r2;
    // 0x8023A2A8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023A2AC: sb          $v0, 0x23($a1)
    MEM_B(0X23, ctx->r5) = ctx->r2;
    // 0x8023A2B0: lh          $v1, 0x1C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1C);
    // 0x8023A2B4: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x8023A2B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A2BC: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x8023A2C0: lh          $v1, 0x20($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X20);
    // 0x8023A2C4: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x8023A2C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A2CC: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x8023A2D0: lh          $a0, 0x24($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X24);
    // 0x8023A2D4: lhu         $v0, 0x3C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3C);
    // 0x8023A2D8: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8023A2DC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023A2E0: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x8023A2E4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023A2E8: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
L_8023A2EC:
    // 0x8023A2EC: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x8023A2F0: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8023A2F4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8023A2F8: jr          $ra
    // 0x8023A2FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8023A2FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_802266DC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266DC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802266E0: bne         $v0, $zero, L_80226704
    if (ctx->r2 != 0) {
        // 0x802266E4: nop
    
            goto L_80226704;
    }
    // 0x802266E4: nop

    // 0x802266E8: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x802266EC: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x802266F0: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x802266F4: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x802266F8: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x802266FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226700: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
L_80226704:
    // 0x80226704: jr          $ra
    // 0x80226708: nop

    TRACE_RETURN()
    return;
    // 0x80226708: nop

;}
RECOMP_FUNC void func_8022F4A8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F4A8: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022F4AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F4B0: beq         $v1, $v0, L_8022F510
    if (ctx->r3 == ctx->r2) {
        // 0x8022F4B4: addiu       $a1, $a0, 0x4E0
        ctx->r5 = ADD32(ctx->r4, 0X4E0);
            goto L_8022F510;
    }
    // 0x8022F4B4: addiu       $a1, $a0, 0x4E0
    ctx->r5 = ADD32(ctx->r4, 0X4E0);
    // 0x8022F4B8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022F4BC: beql        $v0, $zero, L_8022F4D4
    if (ctx->r2 == 0) {
        // 0x8022F4C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F4D4;
    }
    goto skip_0;
    // 0x8022F4C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022F4C4: beq         $v1, $zero, L_8022F4EC
    if (ctx->r3 == 0) {
        // 0x8022F4C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F4EC;
    }
    // 0x8022F4C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F4CC: j           L_8022F598
    // 0x8022F4D0: nop

        goto L_8022F598;
    // 0x8022F4D0: nop

L_8022F4D4:
    // 0x8022F4D4: beq         $v1, $v0, L_8022F53C
    if (ctx->r3 == ctx->r2) {
        // 0x8022F4D8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F53C;
    }
    // 0x8022F4D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F4DC: beq         $v1, $v0, L_8022F574
    if (ctx->r3 == ctx->r2) {
        // 0x8022F4E0: nop
    
            goto L_8022F574;
    }
    // 0x8022F4E0: nop

    // 0x8022F4E4: j           L_8022F598
    // 0x8022F4E8: nop

        goto L_8022F598;
    // 0x8022F4E8: nop

L_8022F4EC:
    // 0x8022F4EC: lhu         $v1, 0x4E0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4E0);
    // 0x8022F4F0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022F4F4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022F4F8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022F4FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F500: sh          $v0, 0x4E4($a0)
    MEM_H(0X4E4, ctx->r4) = ctx->r2;
    // 0x8022F504: sh          $zero, 0x4E8($a0)
    MEM_H(0X4E8, ctx->r4) = 0;
    // 0x8022F508: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x8022F50C: sh          $v1, 0x4E0($a0)
    MEM_H(0X4E0, ctx->r4) = ctx->r3;
L_8022F510:
    // 0x8022F510: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022F514: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F518: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022F51C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F520: bgez        $v0, L_8022F598
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F524: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F598;
    }
    // 0x8022F524: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F528: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022F52C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F530: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022F534: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022F538: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_8022F53C:
    // 0x8022F53C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022F540: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F544: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022F548: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F54C: bgez        $v0, L_8022F598
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F550: nop
    
            goto L_8022F598;
    }
    // 0x8022F550: nop

    // 0x8022F554: lh          $v0, 0x6E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6E);
    // 0x8022F558: blez        $v0, L_8022F574
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022F55C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F574;
    }
    // 0x8022F55C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F560: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022F564: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022F568: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022F56C: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022F570: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_8022F574:
    // 0x8022F574: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022F578: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F57C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022F580: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F584: bgez        $v0, L_8022F598
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F588: nop
    
            goto L_8022F598;
    }
    // 0x8022F588: nop

    // 0x8022F58C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022F590: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x8022F594: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022F598:
    // 0x8022F598: jr          $ra
    // 0x8022F59C: nop

    TRACE_RETURN()
    return;
    // 0x8022F59C: nop

;}
RECOMP_FUNC void func_80232478_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232478: jr          $ra
    // 0x8023247C: nop

    TRACE_RETURN()
    return;
    // 0x8023247C: nop

;}
RECOMP_FUNC void func_802263F4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263F4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802263F8: bne         $v0, $zero, L_80226420
    if (ctx->r2 != 0) {
        // 0x802263FC: lui         $v0, 0x1F4
        ctx->r2 = S32(0X1F4 << 16);
            goto L_80226420;
    }
    // 0x802263FC: lui         $v0, 0x1F4
    ctx->r2 = S32(0X1F4 << 16);
    // 0x80226400: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226404: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80226408: lui         $v0, 0xE3FF
    ctx->r2 = S32(0XE3FF << 16);
    // 0x8022640C: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80226410: lui         $v0, 0x180
    ctx->r2 = S32(0X180 << 16);
    // 0x80226414: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80226418: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022641C: sh          $v0, 0x15E($v1)
    MEM_H(0X15E, ctx->r3) = ctx->r2;
L_80226420:
    // 0x80226420: jr          $ra
    // 0x80226424: nop

    TRACE_RETURN()
    return;
    // 0x80226424: nop

;}
