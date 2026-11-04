#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023B674_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B678: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023B67C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B680: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023B684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B688: bne         $v1, $v0, L_8023B6EC
    if (ctx->r3 != ctx->r2) {
        // 0x8023B68C: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8023B6EC;
    }
    // 0x8023B68C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8023B690: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x8023B694: sb          $v1, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r3;
    // 0x8023B698: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023B69C: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8023B6A0: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8023B6A4: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x8023B6A8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023B6AC: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x8023B6B0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8023B6B4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023B6B8: lw          $v1, 0x28($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X28);
    // 0x8023B6BC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023B6C0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8023B6C4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023B6C8: jal         0x8004F488
    // 0x8023B6CC: lw          $a0, 0x24($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X24);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8023B6CC: lw          $a0, 0x24($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X24);
    after_0:
    // 0x8023B6D0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023B6D4: jal         0x8005FA7C
    // 0x8023B6D8: addiu       $a0, $a0, -0x404
    ctx->r4 = ADD32(ctx->r4, -0X404);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x8023B6D8: addiu       $a0, $a0, -0x404
    ctx->r4 = ADD32(ctx->r4, -0X404);
    after_1:
    // 0x8023B6DC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B6E0: addiu       $a0, $a0, 0x47B8
    ctx->r4 = ADD32(ctx->r4, 0X47B8);
    // 0x8023B6E4: jal         0x8023B794
    // 0x8023B6E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8023B794_ovl25(rdram, ctx);
        goto after_2;
    // 0x8023B6E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_8023B6EC:
    // 0x8023B6EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B6F0: jr          $ra
    // 0x8023B6F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B6F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228B24_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228B28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228B2C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228B30: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228B34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228B38: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x80228B3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228B40: beq         $v1, $v0, L_80228BD0
    if (ctx->r3 == ctx->r2) {
        // 0x80228B44: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_80228BD0;
    }
    // 0x80228B44: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80228B48: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80228B4C: beql        $v0, $zero, L_80228B64
    if (ctx->r2 == 0) {
        // 0x80228B50: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228B64;
    }
    goto skip_0;
    // 0x80228B50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80228B54: beql        $v1, $zero, L_80228B74
    if (ctx->r3 == 0) {
        // 0x80228B58: sh          $zero, 0xE($s0)
        MEM_H(0XE, ctx->r16) = 0;
            goto L_80228B74;
    }
    goto skip_1;
    // 0x80228B58: sh          $zero, 0xE($s0)
    MEM_H(0XE, ctx->r16) = 0;
    skip_1:
    // 0x80228B5C: j           L_80228D50
    // 0x80228B60: nop

        goto L_80228D50;
    // 0x80228B60: nop

L_80228B64:
    // 0x80228B64: beq         $v1, $v0, L_80228BFC
    if (ctx->r3 == ctx->r2) {
        // 0x80228B68: nop
    
            goto L_80228BFC;
    }
    // 0x80228B68: nop

    // 0x80228B6C: j           L_80228D50
    // 0x80228B70: nop

        goto L_80228D50;
    // 0x80228B70: nop

L_80228B74:
    // 0x80228B74: sh          $zero, 0x12($s0)
    MEM_H(0X12, ctx->r16) = 0;
    // 0x80228B78: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x80228B7C: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x80228B80: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80228B84: bgezl       $v0, L_80228BA0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228B88: addiu       $v0, $zero, -0x300
        ctx->r2 = ADD32(0, -0X300);
            goto L_80228BA0;
    }
    goto skip_2;
    // 0x80228B88: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    skip_2:
    // 0x80228B8C: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80228B90: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80228B94: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80228B98: j           L_80228BAC
    // 0x80228B9C: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
        goto L_80228BAC;
    // 0x80228B9C: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
L_80228BA0:
    // 0x80228BA0: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80228BA4: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80228BA8: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
L_80228BAC:
    // 0x80228BAC: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x80228BB0: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80228BB4: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80228BB8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80228BBC: sh          $v1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r3;
    // 0x80228BC0: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x80228BC4: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80228BC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228BCC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
L_80228BD0:
    // 0x80228BD0: lh          $v0, 0x1A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1A);
    // 0x80228BD4: bne         $v0, $zero, L_80228BEC
    if (ctx->r2 != 0) {
        // 0x80228BD8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228BEC;
    }
    // 0x80228BD8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228BDC: jal         0x802291C8
    // 0x80228BE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_802291C8_ovl25(rdram, ctx);
        goto after_0;
    // 0x80228BE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80228BE4: j           L_80228D50
    // 0x80228BE8: nop

        goto L_80228D50;
    // 0x80228BE8: nop

L_80228BEC:
    // 0x80228BEC: jal         0x8022935C
    // 0x80228BF0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8022935C_ovl25(rdram, ctx);
        goto after_1;
    // 0x80228BF0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228BF4: j           L_80228D50
    // 0x80228BF8: nop

        goto L_80228D50;
    // 0x80228BF8: nop

L_80228BFC:
    // 0x80228BFC: lh          $v1, 0xE($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE);
    // 0x80228C00: slti        $v0, $v1, 0x50
    ctx->r2 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
    // 0x80228C04: beq         $v0, $zero, L_80228D30
    if (ctx->r2 == 0) {
        // 0x80228C08: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_80228D30;
    }
    // 0x80228C08: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80228C0C: beq         $v1, $v0, L_80228CD8
    if (ctx->r3 == ctx->r2) {
        // 0x80228C10: slti        $v0, $v1, 0x31
        ctx->r2 = SIGNED(ctx->r3) < 0X31 ? 1 : 0;
            goto L_80228CD8;
    }
    // 0x80228C10: slti        $v0, $v1, 0x31
    ctx->r2 = SIGNED(ctx->r3) < 0X31 ? 1 : 0;
    // 0x80228C14: beq         $v0, $zero, L_80228C44
    if (ctx->r2 == 0) {
        // 0x80228C18: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80228C44;
    }
    // 0x80228C18: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80228C1C: beq         $v1, $v0, L_80228CC0
    if (ctx->r3 == ctx->r2) {
        // 0x80228C20: slti        $v0, $v1, 0x21
        ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
            goto L_80228CC0;
    }
    // 0x80228C20: slti        $v0, $v1, 0x21
    ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x80228C24: beq         $v0, $zero, L_80228D20
    if (ctx->r2 == 0) {
        // 0x80228C28: nop
    
            goto L_80228D20;
    }
    // 0x80228C28: nop

    // 0x80228C2C: beq         $v1, $zero, L_80228C60
    if (ctx->r3 == 0) {
        // 0x80228C30: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80228C60;
    }
    // 0x80228C30: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80228C34: beq         $v1, $v0, L_80228CB4
    if (ctx->r3 == ctx->r2) {
        // 0x80228C38: nop
    
            goto L_80228CB4;
    }
    // 0x80228C38: nop

    // 0x80228C3C: j           L_80228D20
    // 0x80228C40: nop

        goto L_80228D20;
    // 0x80228C40: nop

L_80228C44:
    // 0x80228C44: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80228C48: beq         $v1, $v0, L_80228CF4
    if (ctx->r3 == ctx->r2) {
        // 0x80228C4C: addiu       $v0, $zero, 0x48
        ctx->r2 = ADD32(0, 0X48);
            goto L_80228CF4;
    }
    // 0x80228C4C: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x80228C50: beq         $v1, $v0, L_80228D14
    if (ctx->r3 == ctx->r2) {
        // 0x80228C54: nop
    
            goto L_80228D14;
    }
    // 0x80228C54: nop

    // 0x80228C58: j           L_80228D20
    // 0x80228C5C: nop

        goto L_80228D20;
    // 0x80228C5C: nop

L_80228C60:
    // 0x80228C60: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80228C64: bgezl       $v0, L_80228C8C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228C68: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80228C8C;
    }
    goto skip_3;
    // 0x80228C68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_3:
    // 0x80228C6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228C70: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x80228C74: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80228C78: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x80228C7C: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80228C80: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80228C84: j           L_80228CA4
    // 0x80228C88: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
        goto L_80228CA4;
    // 0x80228C88: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
L_80228C8C:
    // 0x80228C8C: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x80228C90: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80228C94: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x80228C98: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80228C9C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80228CA0: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
L_80228CA4:
    // 0x80228CA4: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x80228CA8: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80228CAC: j           L_80228D20
    // 0x80228CB0: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
        goto L_80228D20;
    // 0x80228CB0: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80228CB4:
    // 0x80228CB4: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80228CB8: j           L_80228D1C
    // 0x80228CBC: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
        goto L_80228D1C;
    // 0x80228CBC: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_80228CC0:
    // 0x80228CC0: sh          $zero, 0x12($s0)
    MEM_H(0X12, ctx->r16) = 0;
    // 0x80228CC4: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80228CC8: bltz        $v0, L_80228D04
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228CCC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80228D04;
    }
    // 0x80228CCC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228CD0: j           L_80228D0C
    // 0x80228CD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80228D0C;
    // 0x80228CD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228CD8:
    // 0x80228CD8: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80228CDC: bgez        $v0, L_80228CE8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228CE0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80228CE8;
    }
    // 0x80228CE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228CE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228CE8:
    // 0x80228CE8: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x80228CEC: j           L_80228D20
    // 0x80228CF0: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
        goto L_80228D20;
    // 0x80228CF0: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
L_80228CF4:
    // 0x80228CF4: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80228CF8: bgez        $v0, L_80228D0C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228CFC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228D0C;
    }
    // 0x80228CFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228D00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80228D04:
    // 0x80228D04: j           L_80228D20
    // 0x80228D08: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
        goto L_80228D20;
    // 0x80228D08: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80228D0C:
    // 0x80228D0C: j           L_80228D20
    // 0x80228D10: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
        goto L_80228D20;
    // 0x80228D10: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80228D14:
    // 0x80228D14: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80228D18: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
L_80228D1C:
    // 0x80228D1C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80228D20:
    // 0x80228D20: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x80228D24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228D28: j           L_80228D50
    // 0x80228D2C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_80228D50;
    // 0x80228D2C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_80228D30:
    // 0x80228D30: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80228D34: sh          $zero, 0x12($s0)
    MEM_H(0X12, ctx->r16) = 0;
    // 0x80228D38: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x80228D3C: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x80228D40: sh          $zero, 0xE($s0)
    MEM_H(0XE, ctx->r16) = 0;
    // 0x80228D44: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80228D48: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80228D4C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_80228D50:
    // 0x80228D50: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x80228D54: lhu         $v1, 0x12($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12);
    // 0x80228D58: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x80228D5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228D60: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80228D64: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x80228D68: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80228D6C: lhu         $a1, 0x44($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X44);
    // 0x80228D70: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228D74: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x80228D78: lhu         $v0, 0x48($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X48);
    // 0x80228D7C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80228D80: lhu         $a2, 0x46($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X46);
    // 0x80228D84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228D88: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80228D8C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80228D90: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80228D94: lhu         $a3, 0x48($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X48);
    // 0x80228D98: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80228D9C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80228DA0: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80228DA4: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80228DA8: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x80228DAC: sh          $a0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r4;
    // 0x80228DB0: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80228DB4: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80228DB8: beq         $v0, $zero, L_80228DE4
    if (ctx->r2 == 0) {
        // 0x80228DBC: lui         $a1, 0x8
        ctx->r5 = S32(0X8 << 16);
            goto L_80228DE4;
    }
    // 0x80228DBC: lui         $a1, 0x8
    ctx->r5 = S32(0X8 << 16);
    // 0x80228DC0: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x80228DC4: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80228DC8: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x80228DCC: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80228DD0: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x80228DD4: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80228DD8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80228DDC: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x80228DE0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80228DE4:
    // 0x80228DE4: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80228DE8: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80228DEC: lh          $a0, 0x18($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X18);
    // 0x80228DF0: lw          $a2, 0x80($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X80);
    // 0x80228DF4: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x80228DF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228DFC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228E00: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80228E04: sltu        $a1, $a1, $a2
    ctx->r5 = ctx->r5 < ctx->r6 ? 1 : 0;
    // 0x80228E08: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80228E0C: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80228E10: bne         $a1, $zero, L_80228E38
    if (ctx->r5 != 0) {
        // 0x80228E14: sw          $a0, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->r4;
            goto L_80228E38;
    }
    // 0x80228E14: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x80228E18: lhu         $v1, 0x4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4);
    // 0x80228E1C: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x80228E20: bne         $v0, $zero, L_80228E38
    if (ctx->r2 != 0) {
        // 0x80228E24: ori         $v0, $v1, 0x80
        ctx->r2 = ctx->r3 | 0X80;
            goto L_80228E38;
    }
    // 0x80228E24: ori         $v0, $v1, 0x80
    ctx->r2 = ctx->r3 | 0X80;
    // 0x80228E28: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80228E2C: addiu       $a0, $zero, 0x150
    ctx->r4 = ADD32(0, 0X150);
    // 0x80228E30: jal         0x8002A33C
    // 0x80228E34: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80228E34: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
L_80228E38:
    // 0x80228E38: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x80228E3C: lui         $v0, 0x24
    ctx->r2 = S32(0X24 << 16);
    // 0x80228E40: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80228E44: beq         $v0, $zero, L_80228E58
    if (ctx->r2 == 0) {
        // 0x80228E48: nop
    
            goto L_80228E58;
    }
    // 0x80228E48: nop

    // 0x80228E4C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80228E50: andi        $v0, $v0, 0xFF7F
    ctx->r2 = ctx->r2 & 0XFF7F;
    // 0x80228E54: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80228E58:
    // 0x80228E58: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228E5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228E60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228E64: jr          $ra
    // 0x80228E68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228E68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233A88_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233A88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233A8C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80233A90: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80233A94: addiu       $a0, $zero, 0x141
    ctx->r4 = ADD32(0, 0X141);
    // 0x80233A98: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233A9C: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80233AA0: jal         0x8002A33C
    // 0x80233AA4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80233AA4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80233AA8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233AAC: jr          $ra
    // 0x80233AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233E5C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233E5C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80233E60: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80233E64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233E68: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80233E6C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233E70: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80233E74: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x80233E78: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x80233E7C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80233E80: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80233E84: bne         $v0, $zero, L_80233ECC
    if (ctx->r2 != 0) {
        // 0x80233E88: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_80233ECC;
    }
    // 0x80233E88: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x80233E8C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80233E90: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80233E94: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80233E98: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80233E9C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80233EA0: bne         $v0, $zero, L_80233EB4
    if (ctx->r2 != 0) {
        // 0x80233EA4: sb          $v1, 0x97($s0)
        MEM_B(0X97, ctx->r16) = ctx->r3;
            goto L_80233EB4;
    }
    // 0x80233EA4: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    // 0x80233EA8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80233EAC: j           L_80233EBC
    // 0x80233EB0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_80233EBC;
    // 0x80233EB0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80233EB4:
    // 0x80233EB4: lui         $v0, 0x2C60
    ctx->r2 = S32(0X2C60 << 16);
    // 0x80233EB8: ori         $v0, $v0, 0x60C0
    ctx->r2 = ctx->r2 | 0X60C0;
L_80233EBC:
    // 0x80233EBC: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80233EC0: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x80233EC4: j           L_80233F1C
    // 0x80233EC8: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
        goto L_80233F1C;
    // 0x80233EC8: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
L_80233ECC:
    // 0x80233ECC: bne         $v0, $zero, L_80233EF0
    if (ctx->r2 != 0) {
        // 0x80233ED0: nop
    
            goto L_80233EF0;
    }
    // 0x80233ED0: nop

    // 0x80233ED4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233ED8: lbu         $v0, -0x1230($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1230);
    // 0x80233EDC: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80233EE0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233EE4: lbu         $v0, -0x122F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X122F);
    // 0x80233EE8: j           L_80233F08
    // 0x80233EEC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80233F08;
    // 0x80233EEC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80233EF0:
    // 0x80233EF0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233EF4: lbu         $v0, -0x1224($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1224);
    // 0x80233EF8: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80233EFC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233F00: lbu         $v0, -0x1223($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1223);
    // 0x80233F04: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80233F08:
    // 0x80233F08: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80233F0C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80233F10: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80233F14: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80233F18: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
L_80233F1C:
    // 0x80233F1C: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    // 0x80233F20: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80233F24: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80233F28: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80233F2C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80233F30: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80233F34: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x80233F38: sh          $a0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r4;
    // 0x80233F3C: bne         $v0, $zero, L_80233F68
    if (ctx->r2 != 0) {
        // 0x80233F40: sh          $a1, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r5;
            goto L_80233F68;
    }
    // 0x80233F40: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x80233F44: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80233F48: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80233F4C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80233F50: bne         $v0, $zero, L_80233F60
    if (ctx->r2 != 0) {
        // 0x80233F54: sh          $v1, 0x98($s0)
        MEM_H(0X98, ctx->r16) = ctx->r3;
            goto L_80233F60;
    }
    // 0x80233F54: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x80233F58: j           L_80233F74
    // 0x80233F5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80233F74;
    // 0x80233F5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80233F60:
    // 0x80233F60: j           L_80233F74
    // 0x80233F64: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_80233F74;
    // 0x80233F64: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_80233F68:
    // 0x80233F68: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80233F6C: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80233F70: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80233F74:
    // 0x80233F74: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80233F78: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80233F7C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80233F80: bne         $v0, $zero, L_80233F8C
    if (ctx->r2 != 0) {
        // 0x80233F84: addiu       $v0, $zero, 0x4B
        ctx->r2 = ADD32(0, 0X4B);
            goto L_80233F8C;
    }
    // 0x80233F84: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x80233F88: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_80233F8C:
    // 0x80233F8C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80233F90: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x80233F94: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80233F98: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x80233F9C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233FA0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80233FA4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80233FA8: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80233FAC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233FB0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233FB4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80233FB8: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80233FBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233FC0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80233FC4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80233FC8: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80233FCC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80233FD0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233FD4: jal         0x80051E18
    // 0x80233FD8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x80233FD8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x80233FDC: jal         0x8003F754
    // 0x80233FE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_1;
    // 0x80233FE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80233FE4: bne         $v0, $zero, L_80233FF4
    if (ctx->r2 != 0) {
        // 0x80233FE8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233FF4;
    }
    // 0x80233FE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80233FEC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233FF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80233FF4:
    // 0x80233FF4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233FF8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80233FFC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80234000: jr          $ra
    // 0x80234004: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80234004: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80227030_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227034: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022703C: jal         0x800A3450
    // 0x80227040: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80227040: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80227044: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80227048: bne         $v1, $zero, L_802270C0
    if (ctx->r3 != 0) {
        // 0x8022704C: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_802270C0;
    }
    // 0x8022704C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80227050: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80227054: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80227058: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x8022705C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80227060: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80227064: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x80227068: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022706C: sra         $v0, $a0, 18
    ctx->r2 = S32(SIGNED(ctx->r4) >> 18);
    // 0x80227070: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80227074: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80227078: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022707C: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x80227080: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80227084: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x80227088: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022708C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80227090: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80227094: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80227098: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022709C: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x802270A0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x802270A4: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x802270A8: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x802270AC: sra         $a0, $a0, 22
    ctx->r4 = S32(SIGNED(ctx->r4) >> 22);
    // 0x802270B0: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x802270B4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802270B8: j           L_80227104
    // 0x802270BC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_80227104;
    // 0x802270BC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_802270C0:
    // 0x802270C0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802270C4: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x802270C8: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x802270CC: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x802270D0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802270D4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x802270D8: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x802270DC: lh          $v1, 0x6($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6);
    // 0x802270E0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x802270E4: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x802270E8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x802270EC: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x802270F0: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x802270F4: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x802270F8: bne         $v1, $zero, L_80227104
    if (ctx->r3 != 0) {
        // 0x802270FC: sh          $a1, 0xC($s0)
        MEM_H(0XC, ctx->r16) = ctx->r5;
            goto L_80227104;
    }
    // 0x802270FC: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x80227100: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80227104:
    // 0x80227104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227108: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022710C: jr          $ra
    // 0x80227110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E960_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E960: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E964: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022E968: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E96C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022E970: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022E974: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E978: addiu       $v0, $v0, -0xC
    ctx->r2 = ADD32(ctx->r2, -0XC);
    // 0x8022E97C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E980: addiu       $a0, $v0, -0x400
    ctx->r4 = ADD32(ctx->r2, -0X400);
    // 0x8022E984: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8022E988: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022E98C: jal         0x800324B4
    // 0x8022E990: sh          $a0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r4;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8022E990: sh          $a0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r4;
    after_0:
    // 0x8022E994: lh          $a0, 0x4E0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4E0);
    // 0x8022E998: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8022E99C: lhu         $a1, 0x4EA($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4EA);
    // 0x8022E9A0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E9A4: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x8022E9A8: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x8022E9AC: addiu       $a1, $a1, -0x800
    ctx->r5 = ADD32(ctx->r5, -0X800);
    // 0x8022E9B0: jal         0x80032498
    // 0x8022E9B4: sh          $a1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r5;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8022E9B4: sh          $a1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r5;
    after_1:
    // 0x8022E9B8: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8022E9BC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E9C0: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022E9C4: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x8022E9C8: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x8022E9CC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022E9D0: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022E9D4: lh          $a1, 0x4E4($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X4E4);
    // 0x8022E9D8: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022E9DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E9E0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E9E4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E9E8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022E9EC: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x8022E9F0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022E9F4: bne         $a1, $zero, L_8022EA4C
    if (ctx->r5 != 0) {
        // 0x8022E9F8: sw          $a0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r4;
            goto L_8022EA4C;
    }
    // 0x8022E9F8: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022E9FC: lh          $v1, 0x4E6($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4E6);
    // 0x8022EA00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EA04: bne         $v1, $v0, L_8022EA1C
    if (ctx->r3 != ctx->r2) {
        // 0x8022EA08: addiu       $v1, $zero, 0xF
        ctx->r3 = ADD32(0, 0XF);
            goto L_8022EA1C;
    }
    // 0x8022EA08: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x8022EA0C: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8022EA10: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x8022EA14: j           L_8022EA2C
    // 0x8022EA18: sh          $zero, 0x4E6($s0)
    MEM_H(0X4E6, ctx->r16) = 0;
        goto L_8022EA2C;
    // 0x8022EA18: sh          $zero, 0x4E6($s0)
    MEM_H(0X4E6, ctx->r16) = 0;
L_8022EA1C:
    // 0x8022EA1C: lhu         $v0, 0x4E6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E6);
    // 0x8022EA20: sh          $v1, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r3;
    // 0x8022EA24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EA28: sh          $v0, 0x4E6($s0)
    MEM_H(0X4E6, ctx->r16) = ctx->r2;
L_8022EA2C:
    // 0x8022EA2C: jal         0x8022FBFC
    // 0x8022EA30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FBFC_ovl25(rdram, ctx);
        goto after_2;
    // 0x8022EA30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022EA34: addiu       $a0, $zero, 0x1A3
    ctx->r4 = ADD32(0, 0X1A3);
    // 0x8022EA38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EA3C: jal         0x8002A2F8
    // 0x8022EA40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x8022EA40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022EA44: j           L_8022EA54
    // 0x8022EA48: nop

        goto L_8022EA54;
    // 0x8022EA48: nop

L_8022EA4C:
    // 0x8022EA4C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EA50: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
L_8022EA54:
    // 0x8022EA54: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
    // 0x8022EA58: bne         $v0, $zero, L_8022EAA8
    if (ctx->r2 != 0) {
        // 0x8022EA5C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022EAA8;
    }
    // 0x8022EA5C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022EA60: jal         0x800A3450
    // 0x8022EA64: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022EA64: nop

    after_4:
    // 0x8022EA68: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022EA6C: bne         $v0, $zero, L_8022EAB0
    if (ctx->r2 != 0) {
        // 0x8022EA70: nop
    
            goto L_8022EAB0;
    }
    // 0x8022EA70: nop

    // 0x8022EA74: jal         0x800A3450
    // 0x8022EA78: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8022EA78: nop

    after_5:
    // 0x8022EA7C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022EA80: beq         $v0, $zero, L_8022EA98
    if (ctx->r2 == 0) {
        // 0x8022EA84: nop
    
            goto L_8022EA98;
    }
    // 0x8022EA84: nop

    // 0x8022EA88: jal         0x8022F448
    // 0x8022EA8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022F448_ovl25(rdram, ctx);
        goto after_6;
    // 0x8022EA8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022EA90: j           L_8022EAB0
    // 0x8022EA94: nop

        goto L_8022EAB0;
    // 0x8022EA94: nop

L_8022EA98:
    // 0x8022EA98: jal         0x8022F3EC
    // 0x8022EA9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022F3EC_ovl25(rdram, ctx);
        goto after_7;
    // 0x8022EA9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022EAA0: j           L_8022EAB0
    // 0x8022EAA4: nop

        goto L_8022EAB0;
    // 0x8022EAA4: nop

L_8022EAA8:
    // 0x8022EAA8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022EAAC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_8022EAB0:
    // 0x8022EAB0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022EAB4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022EAB8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022EABC: jr          $ra
    // 0x8022EAC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022EAC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802266E0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266E0: andi        $a1, $a1, 0x3F
    ctx->r5 = ctx->r5 & 0X3F;
    // 0x802266E4: jr          $ra
    // 0x802266E8: sb          $a1, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x802266E8: sb          $a1, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80238658_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238658: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023865C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238660: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80238664: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238668: jal         0x80238DD4
    // 0x8023866C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80238DD4_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023866C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80238670: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80238674: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80238678: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023867C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80238680: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80238684: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80238688: addiu       $v0, $zero, -0x5C1
    ctx->r2 = ADD32(0, -0X5C1);
    // 0x8023868C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238690: sh          $v0, 0x49C6($at)
    MEM_H(0X49C6, ctx->r1) = ctx->r2;
    // 0x80238694: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80238698: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023869C: sh          $v0, 0x49C8($at)
    MEM_H(0X49C8, ctx->r1) = ctx->r2;
    // 0x802386A0: lui         $v0, 0xFA3F
    ctx->r2 = S32(0XFA3F << 16);
    // 0x802386A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802386A8: sw          $v0, 0x49D0($at)
    MEM_W(0X49D0, ctx->r1) = ctx->r2;
    // 0x802386AC: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x802386B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802386B4: sw          $v0, 0x49D4($at)
    MEM_W(0X49D4, ctx->r1) = ctx->r2;
    // 0x802386B8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802386BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802386C0: sh          $zero, 0x49C4($at)
    MEM_H(0X49C4, ctx->r1) = 0;
    // 0x802386C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802386C8: sw          $zero, 0x49CC($at)
    MEM_W(0X49CC, ctx->r1) = 0;
    // 0x802386CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802386D0: sh          $zero, 0x4A08($at)
    MEM_H(0X4A08, ctx->r1) = 0;
    // 0x802386D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802386D8: sh          $zero, 0x4A04($at)
    MEM_H(0X4A04, ctx->r1) = 0;
    // 0x802386DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802386E0: sh          $v0, 0x4A06($at)
    MEM_H(0X4A06, ctx->r1) = ctx->r2;
    // 0x802386E4: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x802386E8: jal         0x8009A3B4
    // 0x802386EC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802386EC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_1:
    // 0x802386F0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802386F4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802386F8: jal         0x8009A3B4
    // 0x802386FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802386FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80238700: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80238704: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80238708: jal         0x8009A3B4
    // 0x8023870C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023870C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80238710: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80238714: lw          $v1, 0x3230($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3230);
    // 0x80238718: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023871C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238720: sb          $v0, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = ctx->r2;
    // 0x80238724: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238728: sb          $zero, 0x4A24($at)
    MEM_B(0X4A24, ctx->r1) = 0;
    // 0x8023872C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238730: sw          $v1, 0x4A70($at)
    MEM_W(0X4A70, ctx->r1) = ctx->r3;
    // 0x80238734: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80238738: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8023873C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80238740: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80238744: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238748: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023874C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238750: jr          $ra
    // 0x80238754: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238754: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B734_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B738: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B73C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023B740: bne         $v0, $zero, L_8023B750
    if (ctx->r2 != 0) {
        // 0x8023B744: nop
    
            goto L_8023B750;
    }
    // 0x8023B744: nop

    // 0x8023B748: jal         0x8004F488
    // 0x8023B74C: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8023B74C: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    after_0:
L_8023B750:
    // 0x8023B750: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B754: jr          $ra
    // 0x8023B758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E1CC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E1CC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022E1D0: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022E1D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E1D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E1DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E1E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E1E4: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022E1E8: addiu       $v0, $zero, 0xEB
    ctx->r2 = ADD32(0, 0XEB);
    // 0x8022E1EC: beq         $v1, $v0, L_8022E30C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E1F0: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_8022E30C;
    }
    // 0x8022E1F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E1F4: slti        $v0, $v1, 0xEC
    ctx->r2 = SIGNED(ctx->r3) < 0XEC ? 1 : 0;
    // 0x8022E1F8: beq         $v0, $zero, L_8022E260
    if (ctx->r2 == 0) {
        // 0x8022E1FC: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_8022E260;
    }
    // 0x8022E1FC: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022E200: beq         $v1, $v0, L_8022E2C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022E204: slti        $v0, $v1, 0x5B
        ctx->r2 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
            goto L_8022E2C8;
    }
    // 0x8022E204: slti        $v0, $v1, 0x5B
    ctx->r2 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
    // 0x8022E208: beq         $v0, $zero, L_8022E228
    if (ctx->r2 == 0) {
        // 0x8022E20C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E228;
    }
    // 0x8022E20C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E210: beq         $v1, $v0, L_8022E350
    if (ctx->r3 == ctx->r2) {
        // 0x8022E214: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_8022E350;
    }
    // 0x8022E214: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022E218: beq         $v1, $v0, L_8022E2BC
    if (ctx->r3 == ctx->r2) {
        // 0x8022E21C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E2BC;
    }
    // 0x8022E21C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E220: j           L_8022E364
    // 0x8022E224: nop

        goto L_8022E364;
    // 0x8022E224: nop

L_8022E228:
    // 0x8022E228: addiu       $v0, $zero, 0xB9
    ctx->r2 = ADD32(0, 0XB9);
    // 0x8022E22C: beq         $v1, $v0, L_8022E2D8
    if (ctx->r3 == ctx->r2) {
        // 0x8022E230: slti        $v0, $v1, 0xBA
        ctx->r2 = SIGNED(ctx->r3) < 0XBA ? 1 : 0;
            goto L_8022E2D8;
    }
    // 0x8022E230: slti        $v0, $v1, 0xBA
    ctx->r2 = SIGNED(ctx->r3) < 0XBA ? 1 : 0;
    // 0x8022E234: beq         $v0, $zero, L_8022E24C
    if (ctx->r2 == 0) {
        // 0x8022E238: addiu       $v0, $zero, 0xA5
        ctx->r2 = ADD32(0, 0XA5);
            goto L_8022E24C;
    }
    // 0x8022E238: addiu       $v0, $zero, 0xA5
    ctx->r2 = ADD32(0, 0XA5);
    // 0x8022E23C: beq         $v1, $v0, L_8022E2BC
    if (ctx->r3 == ctx->r2) {
        // 0x8022E240: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E2BC;
    }
    // 0x8022E240: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E244: j           L_8022E364
    // 0x8022E248: nop

        goto L_8022E364;
    // 0x8022E248: nop

L_8022E24C:
    // 0x8022E24C: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8022E250: beq         $v1, $v0, L_8022E2F0
    if (ctx->r3 == ctx->r2) {
        // 0x8022E254: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E2F0;
    }
    // 0x8022E254: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E258: j           L_8022E364
    // 0x8022E25C: nop

        goto L_8022E364;
    // 0x8022E25C: nop

L_8022E260:
    // 0x8022E260: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8022E264: beq         $v1, $v0, L_8022E31C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E268: slti        $v0, $v1, 0x141
        ctx->r2 = SIGNED(ctx->r3) < 0X141 ? 1 : 0;
            goto L_8022E31C;
    }
    // 0x8022E268: slti        $v0, $v1, 0x141
    ctx->r2 = SIGNED(ctx->r3) < 0X141 ? 1 : 0;
    // 0x8022E26C: beq         $v0, $zero, L_8022E28C
    if (ctx->r2 == 0) {
        // 0x8022E270: addiu       $v0, $zero, 0x104
        ctx->r2 = ADD32(0, 0X104);
            goto L_8022E28C;
    }
    // 0x8022E270: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x8022E274: beq         $v1, $v0, L_8022E2FC
    if (ctx->r3 == ctx->r2) {
        // 0x8022E278: addiu       $v0, $zero, 0x136
        ctx->r2 = ADD32(0, 0X136);
            goto L_8022E2FC;
    }
    // 0x8022E278: addiu       $v0, $zero, 0x136
    ctx->r2 = ADD32(0, 0X136);
    // 0x8022E27C: beq         $v1, $v0, L_8022E310
    if (ctx->r3 == ctx->r2) {
        // 0x8022E280: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E310;
    }
    // 0x8022E280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E284: j           L_8022E364
    // 0x8022E288: nop

        goto L_8022E364;
    // 0x8022E288: nop

L_8022E28C:
    // 0x8022E28C: addiu       $v0, $zero, 0x1AE
    ctx->r2 = ADD32(0, 0X1AE);
    // 0x8022E290: beq         $v1, $v0, L_8022E350
    if (ctx->r3 == ctx->r2) {
        // 0x8022E294: slti        $v0, $v1, 0x1AF
        ctx->r2 = SIGNED(ctx->r3) < 0X1AF ? 1 : 0;
            goto L_8022E350;
    }
    // 0x8022E294: slti        $v0, $v1, 0x1AF
    ctx->r2 = SIGNED(ctx->r3) < 0X1AF ? 1 : 0;
    // 0x8022E298: beq         $v0, $zero, L_8022E2B0
    if (ctx->r2 == 0) {
        // 0x8022E29C: addiu       $v0, $zero, 0x168
        ctx->r2 = ADD32(0, 0X168);
            goto L_8022E2B0;
    }
    // 0x8022E29C: addiu       $v0, $zero, 0x168
    ctx->r2 = ADD32(0, 0X168);
    // 0x8022E2A0: beq         $v1, $v0, L_8022E344
    if (ctx->r3 == ctx->r2) {
        // 0x8022E2A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E344;
    }
    // 0x8022E2A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E2A8: j           L_8022E364
    // 0x8022E2AC: nop

        goto L_8022E364;
    // 0x8022E2AC: nop

L_8022E2B0:
    // 0x8022E2B0: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x8022E2B4: bne         $v1, $v0, L_8022E364
    if (ctx->r3 != ctx->r2) {
        // 0x8022E2B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E364;
    }
    // 0x8022E2B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022E2BC:
    // 0x8022E2BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E2C0: j           L_8022E35C
    // 0x8022E2C4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
        goto L_8022E35C;
    // 0x8022E2C4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
L_8022E2C8:
    // 0x8022E2C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E2CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E2D0: j           L_8022E35C
    // 0x8022E2D4: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
        goto L_8022E35C;
    // 0x8022E2D4: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
L_8022E2D8:
    // 0x8022E2D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E2DC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8022E2E0: jal         0x80050294
    // 0x8022E2E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022E2E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022E2E8: j           L_8022E364
    // 0x8022E2EC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
        goto L_8022E364;
    // 0x8022E2EC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_8022E2F0:
    // 0x8022E2F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E2F4: j           L_8022E35C
    // 0x8022E2F8: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
        goto L_8022E35C;
    // 0x8022E2F8: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
L_8022E2FC:
    // 0x8022E2FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E300: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E304: j           L_8022E35C
    // 0x8022E308: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
        goto L_8022E35C;
    // 0x8022E308: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
L_8022E30C:
    // 0x8022E30C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022E310:
    // 0x8022E310: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E314: j           L_8022E35C
    // 0x8022E318: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
        goto L_8022E35C;
    // 0x8022E318: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
L_8022E31C:
    // 0x8022E31C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E320: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022E324: jal         0x80050294
    // 0x8022E328: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022E328: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022E32C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E330: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E334: jal         0x8022E378
    // 0x8022E338: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8022E378_ovl25(rdram, ctx);
        goto after_2;
    // 0x8022E338: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x8022E33C: j           L_8022E364
    // 0x8022E340: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
        goto L_8022E364;
    // 0x8022E340: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_8022E344:
    // 0x8022E344: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E348: j           L_8022E35C
    // 0x8022E34C: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
        goto L_8022E35C;
    // 0x8022E34C: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
L_8022E350:
    // 0x8022E350: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E354: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E358: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_8022E35C:
    // 0x8022E35C: jal         0x8022E378
    // 0x8022E360: nop

    func_8022E378_ovl25(rdram, ctx);
        goto after_3;
    // 0x8022E360: nop

    after_3:
L_8022E364:
    // 0x8022E364: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E368: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E36C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E370: jr          $ra
    // 0x8022E374: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E374: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023AB14_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AB14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023AB18: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x8023AB1C: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8023AB20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AB24: sll         $s0, $a1, 3
    ctx->r16 = S32(ctx->r5 << 3);
    // 0x8023AB28: subu        $s0, $s0, $a1
    ctx->r16 = SUB32(ctx->r16, ctx->r5);
    // 0x8023AB2C: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x8023AB30: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023AB34: sll         $s2, $a0, 24
    ctx->r18 = S32(ctx->r4 << 24);
    // 0x8023AB38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023AB3C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8023AB40: addiu       $s1, $s1, 0x4448
    ctx->r17 = ADD32(ctx->r17, 0X4448);
    // 0x8023AB44: addu        $a0, $s0, $s1
    ctx->r4 = ADD32(ctx->r16, ctx->r17);
    // 0x8023AB48: sra         $s2, $s2, 21
    ctx->r18 = S32(SIGNED(ctx->r18) >> 21);
    // 0x8023AB4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023AB50: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023AB54: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8023AB58: lhu         $v0, -0x4D8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4D8);
    // 0x8023AB5C: addiu       $a1, $s1, -0xC
    ctx->r5 = ADD32(ctx->r17, -0XC);
    // 0x8023AB60: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    // 0x8023AB64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AB68: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8023AB6C: sh          $v0, 0x443C($at)
    MEM_H(0X443C, ctx->r1) = ctx->r2;
    // 0x8023AB70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023AB74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AB78: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8023AB7C: sw          $v0, 0x4434($at)
    MEM_W(0X4434, ctx->r1) = ctx->r2;
    // 0x8023AB80: jal         0x8009A3B4
    // 0x8023AB84: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023AB84: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x8023AB88: addiu       $a0, $s1, -0x8
    ctx->r4 = ADD32(ctx->r17, -0X8);
    // 0x8023AB8C: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8023AB90: addiu       $s1, $s1, -0x14
    ctx->r17 = ADD32(ctx->r17, -0X14);
    // 0x8023AB94: addu        $a1, $s0, $s1
    ctx->r5 = ADD32(ctx->r16, ctx->r17);
    // 0x8023AB98: jal         0x8009A3B4
    // 0x8023AB9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023AB9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8023ABA0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023ABA4: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8023ABA8: lhu         $v0, -0x4D6($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4D6);
    // 0x8023ABAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023ABB0: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8023ABB4: sh          $v0, 0x4450($at)
    MEM_H(0X4450, ctx->r1) = ctx->r2;
    // 0x8023ABB8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023ABBC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8023ABC0: lhu         $v0, -0x4D4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X4D4);
    // 0x8023ABC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023ABC8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8023ABCC: sh          $v0, 0x4452($at)
    MEM_H(0X4452, ctx->r1) = ctx->r2;
    // 0x8023ABD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023ABD4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023ABD8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023ABDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023ABE0: jr          $ra
    // 0x8023ABE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023ABE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023ABE8: nop

    // 0x8023ABEC: nop

;}
RECOMP_FUNC void func_8022FDC8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FDC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FDCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FDD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FDD4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FDD8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8022FDDC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022FDE0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FDE4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FDE8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022FDEC: jal         0x8004D5D4
    // 0x8022FDF0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022FDF0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FDF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FDF8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022FDFC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022FE00: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022FE04: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022FE08: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022FE0C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022FE10: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022FE14: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022FE18: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022FE1C: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x8022FE20: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    // 0x8022FE24: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022FE28: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022FE2C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022FE30: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022FE34: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022FE38: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022FE3C: jal         0x80229ED0
    // 0x8022FE40: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    func_80229ED0_ovl25(rdram, ctx);
        goto after_1;
    // 0x8022FE40: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    after_1:
    // 0x8022FE44: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8022FE48: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FE4C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FE50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FE54: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022FE58: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022FE5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FE60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FE64: jr          $ra
    // 0x8022FE68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FE68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BBF4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BBF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BBF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BBFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BC00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BC04: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BC08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BC0C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022BC10: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022BC14: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022BC18: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022BC1C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022BC20: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022BC24: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022BC28: jal         0x8004D5D4
    // 0x8022BC2C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022BC2C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022BC30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BC34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022BC38: jal         0x80050294
    // 0x8022BC3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022BC3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022BC40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BC44: addiu       $a1, $s0, 0x4E0
    ctx->r5 = ADD32(ctx->r16, 0X4E0);
    // 0x8022BC48: jal         0x8022BDA0
    // 0x8022BC4C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8022BDA0_ovl25(rdram, ctx);
        goto after_2;
    // 0x8022BC4C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
    // 0x8022BC50: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BC54: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022BC58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BC5C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022BC60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BC64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BC68: jr          $ra
    // 0x8022BC6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BC6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EF74_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EF74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EF78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022EF7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EF80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022EF84: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022EF88: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022EF8C: jal         0x8004DA90
    // 0x8022EF90: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022EF90: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    after_0:
    // 0x8022EF94: lh          $v0, 0x4E2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4E2);
    // 0x8022EF98: bne         $v0, $zero, L_8022EFB0
    if (ctx->r2 != 0) {
        // 0x8022EF9C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022EFB0;
    }
    // 0x8022EF9C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022EFA0: jal         0x8022F374
    // 0x8022EFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022F374_ovl25(rdram, ctx);
        goto after_1;
    // 0x8022EFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022EFA8: j           L_8022EFB8
    // 0x8022EFAC: nop

        goto L_8022EFB8;
    // 0x8022EFAC: nop

L_8022EFB0:
    // 0x8022EFB0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022EFB4: sh          $v0, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = ctx->r2;
L_8022EFB8:
    // 0x8022EFB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EFBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022EFC0: jr          $ra
    // 0x8022EFC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EFC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023183C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023183C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80231840: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80231844: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80231848: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023184C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80231850: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80231854: addiu       $s2, $s0, 0x20
    ctx->r18 = ADD32(ctx->r16, 0X20);
    // 0x80231858: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023185C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80231860: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80231864: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x80231868: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023186C: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80231870: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80231874: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x80231878: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x8023187C: lui         $fp, 0x8024
    ctx->r30 = S32(0X8024 << 16);
    // 0x80231880: addiu       $fp, $fp, 0xF80
    ctx->r30 = ADD32(ctx->r30, 0XF80);
    // 0x80231884: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80231888: lui         $s7, 0x8024
    ctx->r23 = S32(0X8024 << 16);
    // 0x8023188C: addiu       $s7, $s7, 0xFB0
    ctx->r23 = ADD32(ctx->r23, 0XFB0);
    // 0x80231890: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80231894: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_80231898:
    // 0x80231898: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023189C: sll         $v1, $a1, 3
    ctx->r3 = S32(ctx->r5 << 3);
    // 0x802318A0: addu        $v0, $s0, $v1
    ctx->r2 = ADD32(ctx->r16, ctx->r3);
    // 0x802318A4: lw          $a3, 0xD0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XD0);
    // 0x802318A8: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x802318AC: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802318B0: and         $a2, $a3, $v0
    ctx->r6 = ctx->r7 & ctx->r2;
    // 0x802318B4: beq         $a2, $zero, L_80231A18
    if (ctx->r6 == 0) {
        // 0x802318B8: addiu       $v1, $v1, 0x20
        ctx->r3 = ADD32(ctx->r3, 0X20);
            goto L_80231A18;
    }
    // 0x802318B8: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x802318BC: addu        $v0, $s0, $a1
    ctx->r2 = ADD32(ctx->r16, ctx->r5);
    // 0x802318C0: lbu         $a0, 0x130($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X130);
    // 0x802318C4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802318C8: bne         $a0, $v0, L_80231A0C
    if (ctx->r4 != ctx->r2) {
        // 0x802318CC: addu        $s2, $s0, $v1
        ctx->r18 = ADD32(ctx->r16, ctx->r3);
            goto L_80231A0C;
    }
    // 0x802318CC: addu        $s2, $s0, $v1
    ctx->r18 = ADD32(ctx->r16, ctx->r3);
    // 0x802318D0: lui         $v0, 0x1800
    ctx->r2 = S32(0X1800 << 16);
    // 0x802318D4: and         $v0, $a3, $v0
    ctx->r2 = ctx->r7 & ctx->r2;
    // 0x802318D8: beq         $v0, $zero, L_80231A0C
    if (ctx->r2 == 0) {
        // 0x802318DC: sltiu       $v0, $a1, 0xC
        ctx->r2 = ctx->r5 < 0XC ? 1 : 0;
            goto L_80231A0C;
    }
    // 0x802318DC: sltiu       $v0, $a1, 0xC
    ctx->r2 = ctx->r5 < 0XC ? 1 : 0;
    // 0x802318E0: beq         $v0, $zero, L_80231910
    if (ctx->r2 == 0) {
        // 0x802318E4: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_80231910;
    }
    // 0x802318E4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x802318E8: addu        $v0, $v0, $fp
    gpr jr_addend_802318F0 = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x802318EC: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802318F0: jr          $v0
    // 0x802318F4: nop

    switch (jr_addend_802318F0 >> 2) {
        case 0: goto L_80231900; break;
        case 1: goto L_80231908; break;
        case 2: goto L_80231910; break;
        case 3: goto L_80231910; break;
        case 4: goto L_80231910; break;
        case 5: goto L_80231910; break;
        case 6: goto L_80231910; break;
        case 7: goto L_80231910; break;
        case 8: goto L_80231910; break;
        case 9: goto L_802318F8; break;
        case 10: goto L_80231900; break;
        case 11: goto L_80231908; break;
        default: switch_error(__func__, 0x802318F0, 0x80240F80);
    }
    // 0x802318F4: nop

L_802318F8:
    // 0x802318F8: j           L_80231A18
    // 0x802318FC: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
        goto L_80231A18;
    // 0x802318FC: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
L_80231900:
    // 0x80231900: j           L_80231A18
    // 0x80231904: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
        goto L_80231A18;
    // 0x80231904: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
L_80231908:
    // 0x80231908: j           L_80231A18
    // 0x8023190C: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
        goto L_80231A18;
    // 0x8023190C: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
L_80231910:
    // 0x80231910: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80231914: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231918: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8023191C: addu        $v1, $v0, $s0
    ctx->r3 = ADD32(ctx->r2, ctx->r16);
    // 0x80231920: lhu         $v0, 0xA0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XA0);
    // 0x80231924: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x80231928: sh          $v0, 0xA0($v1)
    MEM_H(0XA0, ctx->r3) = ctx->r2;
    // 0x8023192C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231930: bgtzl       $v0, L_802319E4
    if (SIGNED(ctx->r2) > 0) {
        // 0x80231934: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_802319E4;
    }
    goto skip_0;
    // 0x80231934: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    skip_0:
    // 0x80231938: addu        $v0, $s0, $a0
    ctx->r2 = ADD32(ctx->r16, ctx->r4);
    // 0x8023193C: sh          $zero, 0xA0($v1)
    MEM_H(0XA0, ctx->r3) = 0;
    // 0x80231940: sb          $zero, 0x130($v0)
    MEM_B(0X130, ctx->r2) = 0;
    // 0x80231944: addiu       $v0, $s1, -0x2
    ctx->r2 = ADD32(ctx->r17, -0X2);
    // 0x80231948: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023194C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231950: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80231954: beq         $v0, $zero, L_802319E0
    if (ctx->r2 == 0) {
        // 0x80231958: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802319E0;
    }
    // 0x80231958: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023195C: addu        $v0, $v0, $s7
    gpr jr_addend_80231964 = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x80231960: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80231964: jr          $v0
    // 0x80231968: nop

    switch (jr_addend_80231964 >> 2) {
        case 0: goto L_8023196C; break;
        case 1: goto L_80231974; break;
        case 2: goto L_80231988; break;
        case 3: goto L_8023199C; break;
        case 4: goto L_802319B0; break;
        case 5: goto L_802319C0; break;
        case 6: goto L_802319D0; break;
        default: switch_error(__func__, 0x80231964, 0x80240FB0);
    }
    // 0x80231968: nop

L_8023196C:
    // 0x8023196C: j           L_80231978
    // 0x80231970: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
        goto L_80231978;
    // 0x80231970: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
L_80231974:
    // 0x80231974: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
L_80231978:
    // 0x80231978: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x8023197C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80231980: j           L_802319E0
    // 0x80231984: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
        goto L_802319E0;
    // 0x80231984: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_80231988:
    // 0x80231988: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023198C: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x80231990: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231994: j           L_802319E0
    // 0x80231998: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
        goto L_802319E0;
    // 0x80231998: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_8023199C:
    // 0x8023199C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802319A0: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x802319A4: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x802319A8: j           L_802319E0
    // 0x802319AC: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
        goto L_802319E0;
    // 0x802319AC: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_802319B0:
    // 0x802319B0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802319B4: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x802319B8: j           L_802319DC
    // 0x802319BC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_802319DC;
    // 0x802319BC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_802319C0:
    // 0x802319C0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802319C4: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x802319C8: j           L_802319DC
    // 0x802319CC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
        goto L_802319DC;
    // 0x802319CC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_802319D0:
    // 0x802319D0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802319D4: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x802319D8: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
L_802319DC:
    // 0x802319DC: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_802319E0:
    // 0x802319E0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_802319E4:
    // 0x802319E4: jal         0x8002A33C
    // 0x802319E8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802319E8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x802319EC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802319F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802319F4: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x802319F8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802319FC: jal         0x802325F8
    // 0x80231A00: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_802325F8_ovl25(rdram, ctx);
        goto after_1;
    // 0x80231A00: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_1:
    // 0x80231A04: j           L_80231A1C
    // 0x80231A08: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
        goto L_80231A1C;
    // 0x80231A08: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
L_80231A0C:
    // 0x80231A0C: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    // 0x80231A10: jal         0x8002A33C
    // 0x80231A14: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80231A14: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
L_80231A18:
    // 0x80231A18: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
L_80231A1C:
    // 0x80231A1C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80231A20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231A24: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231A28: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x80231A2C: bnel        $v0, $zero, L_80231898
    if (ctx->r2 != 0) {
        // 0x80231A30: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_80231898;
    }
    goto skip_1;
    // 0x80231A30: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    skip_1:
    // 0x80231A34: beq         $s4, $zero, L_80231A98
    if (ctx->r20 == 0) {
        // 0x80231A38: nop
    
            goto L_80231A98;
    }
    // 0x80231A38: nop

    // 0x80231A3C: lhu         $v0, 0xA0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA0);
    // 0x80231A40: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x80231A44: sh          $v0, 0xA0($s0)
    MEM_H(0XA0, ctx->r16) = ctx->r2;
    // 0x80231A48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231A4C: bgtz        $v0, L_80231A70
    if (SIGNED(ctx->r2) > 0) {
        // 0x80231A50: nop
    
            goto L_80231A70;
    }
    // 0x80231A50: nop

    // 0x80231A54: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80231A58: sh          $zero, 0xA0($s0)
    MEM_H(0XA0, ctx->r16) = 0;
    // 0x80231A5C: sb          $zero, 0x13A($s0)
    MEM_B(0X13A, ctx->r16) = 0;
    // 0x80231A60: sb          $zero, 0x130($s0)
    MEM_B(0X130, ctx->r16) = 0;
    // 0x80231A64: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x80231A68: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231A6C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_80231A70:
    // 0x80231A70: lhu         $v0, 0xA0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA0);
    // 0x80231A74: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80231A78: addiu       $a1, $s0, 0x70
    ctx->r5 = ADD32(ctx->r16, 0X70);
    // 0x80231A7C: jal         0x8002A33C
    // 0x80231A80: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80231A80: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
    after_3:
    // 0x80231A84: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80231A88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231A8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231A90: jal         0x802325F8
    // 0x80231A94: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_802325F8_ovl25(rdram, ctx);
        goto after_4;
    // 0x80231A94: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_4:
L_80231A98:
    // 0x80231A98: beq         $s5, $zero, L_80231AFC
    if (ctx->r21 == 0) {
        // 0x80231A9C: nop
    
            goto L_80231AFC;
    }
    // 0x80231A9C: nop

    // 0x80231AA0: lhu         $v0, 0xA2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA2);
    // 0x80231AA4: subu        $v0, $v0, $s5
    ctx->r2 = SUB32(ctx->r2, ctx->r21);
    // 0x80231AA8: sh          $v0, 0xA2($s0)
    MEM_H(0XA2, ctx->r16) = ctx->r2;
    // 0x80231AAC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231AB0: bgtz        $v0, L_80231AD4
    if (SIGNED(ctx->r2) > 0) {
        // 0x80231AB4: nop
    
            goto L_80231AD4;
    }
    // 0x80231AB4: nop

    // 0x80231AB8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80231ABC: sh          $zero, 0xA2($s0)
    MEM_H(0XA2, ctx->r16) = 0;
    // 0x80231AC0: sb          $zero, 0x13B($s0)
    MEM_B(0X13B, ctx->r16) = 0;
    // 0x80231AC4: sb          $zero, 0x131($s0)
    MEM_B(0X131, ctx->r16) = 0;
    // 0x80231AC8: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x80231ACC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80231AD0: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_80231AD4:
    // 0x80231AD4: lhu         $v0, 0xA2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA2);
    // 0x80231AD8: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80231ADC: addiu       $a1, $s0, 0x78
    ctx->r5 = ADD32(ctx->r16, 0X78);
    // 0x80231AE0: jal         0x8002A33C
    // 0x80231AE4: sh          $v0, 0xB6($s0)
    MEM_H(0XB6, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80231AE4: sh          $v0, 0xB6($s0)
    MEM_H(0XB6, ctx->r16) = ctx->r2;
    after_5:
    // 0x80231AE8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80231AEC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231AF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80231AF4: jal         0x802325F8
    // 0x80231AF8: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_802325F8_ovl25(rdram, ctx);
        goto after_6;
    // 0x80231AF8: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_6:
L_80231AFC:
    // 0x80231AFC: beq         $s6, $zero, L_80231B74
    if (ctx->r22 == 0) {
        // 0x80231B00: nop
    
            goto L_80231B74;
    }
    // 0x80231B00: nop

    // 0x80231B04: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80231B08: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80231B0C: beq         $v0, $zero, L_80231B68
    if (ctx->r2 == 0) {
        // 0x80231B10: addiu       $a0, $zero, 0x9B
        ctx->r4 = ADD32(0, 0X9B);
            goto L_80231B68;
    }
    // 0x80231B10: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    // 0x80231B14: lhu         $v0, 0xB2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB2);
    // 0x80231B18: subu        $v0, $v0, $s6
    ctx->r2 = SUB32(ctx->r2, ctx->r22);
    // 0x80231B1C: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80231B20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231B24: bgtz        $v0, L_80231B4C
    if (SIGNED(ctx->r2) > 0) {
        // 0x80231B28: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80231B4C;
    }
    // 0x80231B28: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80231B2C: lbu         $v0, 0x141($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X141);
    // 0x80231B30: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80231B34: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80231B38: sb          $zero, 0x139($s0)
    MEM_B(0X139, ctx->r16) = 0;
    // 0x80231B3C: ori         $v0, $v0, 0x70
    ctx->r2 = ctx->r2 | 0X70;
    // 0x80231B40: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x80231B44: sb          $v0, 0x141($s0)
    MEM_B(0X141, ctx->r16) = ctx->r2;
    // 0x80231B48: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
L_80231B4C:
    // 0x80231B4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231B50: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80231B54: jal         0x802325F8
    // 0x80231B58: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_802325F8_ovl25(rdram, ctx);
        goto after_7;
    // 0x80231B58: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_7:
    // 0x80231B5C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80231B60: j           L_80231B6C
    // 0x80231B64: addiu       $a1, $s0, 0x68
    ctx->r5 = ADD32(ctx->r16, 0X68);
        goto L_80231B6C;
    // 0x80231B64: addiu       $a1, $s0, 0x68
    ctx->r5 = ADD32(ctx->r16, 0X68);
L_80231B68:
    // 0x80231B68: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_80231B6C:
    // 0x80231B6C: jal         0x8002A33C
    // 0x80231B70: nop

    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x80231B70: nop

    after_8:
L_80231B74:
    // 0x80231B74: lhu         $v0, 0x6E($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X6E);
    // 0x80231B78: sh          $v0, 0xB2($s3)
    MEM_H(0XB2, ctx->r19) = ctx->r2;
    // 0x80231B7C: lhu         $v1, 0xB2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB2);
    // 0x80231B80: lhu         $a0, 0xA0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA0);
    // 0x80231B84: lhu         $v0, 0xA2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA2);
    // 0x80231B88: lhu         $a1, 0xA4($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XA4);
    // 0x80231B8C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80231B90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231B94: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80231B98: sh          $a1, 0x6E($s3)
    MEM_H(0X6E, ctx->r19) = ctx->r5;
    // 0x80231B9C: lbu         $v1, 0x141($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X141);
    // 0x80231BA0: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80231BA4: beq         $v0, $zero, L_80231BDC
    if (ctx->r2 == 0) {
        // 0x80231BA8: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_80231BDC;
    }
    // 0x80231BA8: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x80231BAC: bne         $v0, $zero, L_80231BDC
    if (ctx->r2 != 0) {
        // 0x80231BB0: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_80231BDC;
    }
    // 0x80231BB0: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80231BB4: lh          $v1, 0xB2($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XB2);
    // 0x80231BB8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231BBC: beq         $v1, $v0, L_80231BDC
    if (ctx->r3 == ctx->r2) {
        // 0x80231BC0: nop
    
            goto L_80231BDC;
    }
    // 0x80231BC0: nop

    // 0x80231BC4: lbu         $v0, 0x140($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X140);
    // 0x80231BC8: lbu         $v1, 0x141($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X141);
    // 0x80231BCC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231BD0: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x80231BD4: sb          $v0, 0x140($s0)
    MEM_B(0X140, ctx->r16) = ctx->r2;
    // 0x80231BD8: sb          $v1, 0x141($s0)
    MEM_B(0X141, ctx->r16) = ctx->r3;
L_80231BDC:
    // 0x80231BDC: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80231BE0: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80231BE4: bne         $v0, $zero, L_80231C1C
    if (ctx->r2 != 0) {
        // 0x80231BE8: lui         $v0, 0x101
        ctx->r2 = S32(0X101 << 16);
            goto L_80231C1C;
    }
    // 0x80231BE8: lui         $v0, 0x101
    ctx->r2 = S32(0X101 << 16);
    // 0x80231BEC: lw          $v1, 0x130($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X130);
    // 0x80231BF0: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
    // 0x80231BF4: addiu       $a0, $zero, -0x100
    ctx->r4 = ADD32(0, -0X100);
    // 0x80231BF8: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80231BFC: bne         $v1, $v0, L_80231C1C
    if (ctx->r3 != ctx->r2) {
        // 0x80231C00: nop
    
            goto L_80231C1C;
    }
    // 0x80231C00: nop

    // 0x80231C04: lbu         $v0, 0x141($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X141);
    // 0x80231C08: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80231C0C: ori         $v0, $v0, 0xF
    ctx->r2 = ctx->r2 | 0XF;
    // 0x80231C10: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x80231C14: sb          $v0, 0x141($s0)
    MEM_B(0X141, ctx->r16) = ctx->r2;
    // 0x80231C18: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
L_80231C1C:
    // 0x80231C1C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80231C20: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x80231C24: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80231C28: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80231C2C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80231C30: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80231C34: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80231C38: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80231C3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231C40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231C44: jr          $ra
    // 0x80231C48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80231C48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022EFF8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EFF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EFFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F000: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F008: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022F00C: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022F010: jal         0x8004DA90
    // 0x8022F014: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022F014: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    after_0:
    // 0x8022F018: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022F01C: beq         $v0, $zero, L_8022F03C
    if (ctx->r2 == 0) {
        // 0x8022F020: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8022F03C;
    }
    // 0x8022F020: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8022F024: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F028: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022F02C: addiu       $v1, $zero, 0x22
    ctx->r3 = ADD32(0, 0X22);
    // 0x8022F030: sh          $v1, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = ctx->r3;
    // 0x8022F034: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F038: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022F03C:
    // 0x8022F03C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F040: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F044: jr          $ra
    // 0x8022F048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227470_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227470: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227474: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227478: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022747C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80227480: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80227484: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227488: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022748C: jal         0x8009A3B4
    // 0x80227490: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80227490: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80227494: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80227498: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022749C: jal         0x8009A3B4
    // 0x802274A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802274A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802274A4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802274A8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802274AC: jal         0x8009A3B4
    // 0x802274B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802274B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802274B4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802274B8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802274BC: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x802274C0: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x802274C4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802274C8: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x802274CC: beq         $v0, $zero, L_802275FC
    if (ctx->r2 == 0) {
        // 0x802274D0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802275FC;
    }
    // 0x802274D0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802274D4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802274D8: addu        $at, $at, $v0
    gpr jr_addend_802274E0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802274DC: lw          $v0, 0xC88($at)
    ctx->r2 = ADD32(ctx->r1, 0XC88);
    // 0x802274E0: jr          $v0
    // 0x802274E4: nop

    switch (jr_addend_802274E0 >> 2) {
        case 0: goto L_802274E8; break;
        case 1: goto L_80227548; break;
        case 2: goto L_80227554; break;
        case 3: goto L_8022756C; break;
        case 4: goto L_80227580; break;
        case 5: goto L_802275AC; break;
        case 6: goto L_802275F0; break;
        default: switch_error(__func__, 0x802274E0, 0x80240C88);
    }
    // 0x802274E4: nop

L_802274E8:
    // 0x802274E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802274EC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802274F0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x802274F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802274F8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x802274FC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80227500: jal         0x8004D5D4
    // 0x80227504: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80227504: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_3:
    // 0x80227508: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022750C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227510: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227514: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227518: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022751C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227520: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227524: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227528: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022752C: addiu       $v0, $zero, -0x13F
    ctx->r2 = ADD32(0, -0X13F);
    // 0x80227530: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80227534: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80227538: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x8022753C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227540: j           L_802275FC
    // 0x80227544: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_802275FC;
    // 0x80227544: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80227548:
    // 0x80227548: lbu         $v1, 0x7($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X7);
    // 0x8022754C: j           L_80227594
    // 0x80227550: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227594;
    // 0x80227550: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227554:
    // 0x80227554: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x80227558: addiu       $v0, $v0, 0x3F
    ctx->r2 = ADD32(ctx->r2, 0X3F);
    // 0x8022755C: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x80227560: lbu         $v1, 0x7($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X7);
    // 0x80227564: j           L_80227594
    // 0x80227568: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80227594;
    // 0x80227568: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022756C:
    // 0x8022756C: addiu       $v0, $zero, 0x1F4
    ctx->r2 = ADD32(0, 0X1F4);
    // 0x80227570: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x80227574: lbu         $v1, 0x7($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X7);
    // 0x80227578: j           L_80227594
    // 0x8022757C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80227594;
    // 0x8022757C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80227580:
    // 0x80227580: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x80227584: addiu       $v0, $v0, -0xAB
    ctx->r2 = ADD32(ctx->r2, -0XAB);
    // 0x80227588: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x8022758C: lbu         $v1, 0x7($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X7);
    // 0x80227590: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80227594:
    // 0x80227594: bne         $v1, $v0, L_802275FC
    if (ctx->r3 != ctx->r2) {
        // 0x80227598: nop
    
            goto L_802275FC;
    }
    // 0x80227598: nop

    // 0x8022759C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802275A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802275A4: j           L_802275FC
    // 0x802275A8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802275FC;
    // 0x802275A8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802275AC:
    // 0x802275AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802275B0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x802275B4: jal         0x8004D5D4
    // 0x802275B8: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_4;
    // 0x802275B8: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_4:
    // 0x802275BC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802275C0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802275C4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802275C8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802275CC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802275D0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802275D4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802275D8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802275DC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802275E0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x802275E4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802275E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802275EC: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_802275F0:
    // 0x802275F0: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x802275F4: addiu       $v0, $v0, -0xAB
    ctx->r2 = ADD32(ctx->r2, -0XAB);
    // 0x802275F8: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
L_802275FC:
    // 0x802275FC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227600: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80227604: beq         $a1, $v0, L_8022761C
    if (ctx->r5 == ctx->r2) {
        // 0x80227608: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022761C;
    }
    // 0x80227608: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022760C: jal         0x800502EC
    // 0x80227610: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_5;
    // 0x80227610: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80227614: j           L_80227624
    // 0x80227618: nop

        goto L_80227624;
    // 0x80227618: nop

L_8022761C:
    // 0x8022761C: jal         0x800504EC
    // 0x80227620: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_6;
    // 0x80227620: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80227624:
    // 0x80227624: jal         0x8005129C
    // 0x80227628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_7;
    // 0x80227628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022762C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227630: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227634: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227638: jr          $ra
    // 0x8022763C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022763C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802260D4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260D4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802260D8: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802260DC: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802260E0: beq         $v1, $v0, L_80226144
    if (ctx->r3 == ctx->r2) {
        // 0x802260E4: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_80226144;
    }
    // 0x802260E4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802260E8: slti        $v0, $v1, 0x29
    ctx->r2 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x802260EC: beq         $v0, $zero, L_8022610C
    if (ctx->r2 == 0) {
        // 0x802260F0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022610C;
    }
    // 0x802260F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802260F4: beq         $v1, $v0, L_80226144
    if (ctx->r3 == ctx->r2) {
        // 0x802260F8: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_80226144;
    }
    // 0x802260F8: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802260FC: beql        $v1, $v0, L_80226150
    if (ctx->r3 == ctx->r2) {
        // 0x80226100: sb          $zero, 0xC($a1)
        MEM_B(0XC, ctx->r5) = 0;
            goto L_80226150;
    }
    goto skip_0;
    // 0x80226100: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    skip_0:
    // 0x80226104: j           L_80226150
    // 0x80226108: nop

        goto L_80226150;
    // 0x80226108: nop

L_8022610C:
    // 0x8022610C: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80226110: beq         $v1, $v0, L_80226144
    if (ctx->r3 == ctx->r2) {
        // 0x80226114: slti        $v0, $v1, 0x47
        ctx->r2 = SIGNED(ctx->r3) < 0X47 ? 1 : 0;
            goto L_80226144;
    }
    // 0x80226114: slti        $v0, $v1, 0x47
    ctx->r2 = SIGNED(ctx->r3) < 0X47 ? 1 : 0;
    // 0x80226118: beq         $v0, $zero, L_80226130
    if (ctx->r2 == 0) {
        // 0x8022611C: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80226130;
    }
    // 0x8022611C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226120: beql        $v1, $v0, L_80226150
    if (ctx->r3 == ctx->r2) {
        // 0x80226124: sb          $zero, 0xC($a1)
        MEM_B(0XC, ctx->r5) = 0;
            goto L_80226150;
    }
    goto skip_1;
    // 0x80226124: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    skip_1:
    // 0x80226128: j           L_80226150
    // 0x8022612C: nop

        goto L_80226150;
    // 0x8022612C: nop

L_80226130:
    // 0x80226130: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80226134: beql        $v1, $v0, L_80226150
    if (ctx->r3 == ctx->r2) {
        // 0x80226138: sb          $zero, 0xC($a1)
        MEM_B(0XC, ctx->r5) = 0;
            goto L_80226150;
    }
    goto skip_2;
    // 0x80226138: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    skip_2:
    // 0x8022613C: j           L_80226150
    // 0x80226140: nop

        goto L_80226150;
    // 0x80226140: nop

L_80226144:
    // 0x80226144: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x80226148: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022614C: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
L_80226150:
    // 0x80226150: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x80226154: lhu         $a2, -0x730C($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X730C);
    // 0x80226158: andi        $v0, $a2, 0x3F
    ctx->r2 = ctx->r6 & 0X3F;
    // 0x8022615C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80226160: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80226164: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226168: lhu         $v0, -0x2400($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2400);
    // 0x8022616C: lhu         $v1, 0x16($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X16);
    // 0x80226170: lb          $a0, 0xC($a1)
    ctx->r4 = MEM_B(ctx->r5, 0XC);
    // 0x80226174: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226178: sra         $v0, $v0, 26
    ctx->r2 = S32(SIGNED(ctx->r2) >> 26);
    // 0x8022617C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226180: beq         $a0, $zero, L_802261A8
    if (ctx->r4 == 0) {
        // 0x80226184: sh          $v1, 0x16($a1)
        MEM_H(0X16, ctx->r5) = ctx->r3;
            goto L_802261A8;
    }
    // 0x80226184: sh          $v1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r3;
    // 0x80226188: andi        $v0, $a2, 0x3
    ctx->r2 = ctx->r6 & 0X3;
    // 0x8022618C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80226190: lhu         $v1, 0x58($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X58);
    // 0x80226194: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226198: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022619C: lhu         $v0, -0x24C4($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X24C4);
    // 0x802261A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802261A4: sh          $v1, 0x58($a1)
    MEM_H(0X58, ctx->r5) = ctx->r3;
L_802261A8:
    // 0x802261A8: jr          $ra
    // 0x802261AC: nop

    TRACE_RETURN()
    return;
    // 0x802261AC: nop

;}
RECOMP_FUNC void func_8023B794_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B794: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023B798: lhu         $v1, 0x4DE8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4DE8);
    // 0x8023B79C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B7A0: lhu         $a0, 0x4DEA($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X4DEA);
    // 0x8023B7A4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8023B7A8: lhu         $a2, 0x4DEC($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X4DEC);
    // 0x8023B7AC: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8023B7B0: lhu         $a3, 0x4DF2($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X4DF2);
    // 0x8023B7B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023B7B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B7BC: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023B7C0: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8023B7C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B7C8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8023B7CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023B7D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B7D4: sb          $a1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r5;
    // 0x8023B7D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B7DC: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023B7E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B7E4: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023B7E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B7EC: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8023B7F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B7F4: sh          $v1, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r3;
    // 0x8023B7F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B7FC: sh          $a0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r4;
    // 0x8023B800: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B804: sh          $a2, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r6;
    // 0x8023B808: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B80C: jr          $ra
    // 0x8023B810: sh          $a3, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x8023B810: sh          $a3, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r7;
;}
RECOMP_FUNC void func_8022E008_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E00C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E010: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E014: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E018: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E01C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E020: bne         $v0, $zero, L_8022E044
    if (ctx->r2 != 0) {
        // 0x8022E024: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022E044;
    }
    // 0x8022E024: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022E028: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E02C: jal         0x8022E378
    // 0x8022E030: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8022E378_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022E030: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x8022E034: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E038: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022E03C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E040: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E044:
    // 0x8022E044: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022E048: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022E04C: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x8022E050: bne         $v1, $v0, L_8022E064
    if (ctx->r3 != ctx->r2) {
        // 0x8022E054: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E064;
    }
    // 0x8022E054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E058: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022E05C: jal         0x8022E378
    // 0x8022E060: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8022E378_ovl25(rdram, ctx);
        goto after_1;
    // 0x8022E060: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_1:
L_8022E064:
    // 0x8022E064: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E068: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E06C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E070: jr          $ra
    // 0x8022E074: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E074: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225994_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225994: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80225998: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022599C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802259A0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802259A4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802259A8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802259AC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x802259B0: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x802259B4: lui         $s5, 0x200
    ctx->r21 = S32(0X200 << 16);
    // 0x802259B8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802259BC: addiu       $s4, $zero, 0x80
    ctx->r20 = ADD32(0, 0X80);
    // 0x802259C0: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x802259C4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
L_802259C8:
    // 0x802259C8: sll         $s0, $s2, 24
    ctx->r16 = S32(ctx->r18 << 24);
    // 0x802259CC: sra         $s0, $s0, 21
    ctx->r16 = S32(SIGNED(ctx->r16) >> 21);
    // 0x802259D0: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x802259D4: addiu       $v0, $s0, 0x3C
    ctx->r2 = ADD32(ctx->r16, 0X3C);
    // 0x802259D8: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x802259DC: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x802259E0: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x802259E4: addiu       $a1, $zero, 0x140
    ctx->r5 = ADD32(0, 0X140);
    // 0x802259E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802259EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802259F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802259F4: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x802259F8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802259FC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80225A00: jal         0x80051E18
    // 0x80225A04: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x80225A04: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x80225A08: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x80225A0C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80225A10: addu        $s0, $s1, $s0
    ctx->r16 = ADD32(ctx->r17, ctx->r16);
    // 0x80225A14: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80225A18: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80225A1C: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80225A20: bne         $v0, $zero, L_802259C8
    if (ctx->r2 != 0) {
        // 0x80225A24: sw          $zero, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = 0;
            goto L_802259C8;
    }
    // 0x80225A24: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x80225A28: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x80225A2C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80225A30: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80225A34: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80225A38: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80225A3C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80225A40: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80225A44: jr          $ra
    // 0x80225A48: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80225A48: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80225A4C: nop

;}
RECOMP_FUNC void func_8022F0CC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F0CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F0D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F0D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F0D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F0DC: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022F0E0: beq         $v0, $zero, L_8022F11C
    if (ctx->r2 == 0) {
        // 0x8022F0E4: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_8022F11C;
    }
    // 0x8022F0E4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022F0E8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022F0EC: addiu       $v0, $zero, 0x900
    ctx->r2 = ADD32(0, 0X900);
    // 0x8022F0F0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022F0F4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022F0F8: addiu       $a0, $zero, 0x1A7
    ctx->r4 = ADD32(0, 0X1A7);
    // 0x8022F0FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F100: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F104: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022F108: jal         0x8002A2F8
    // 0x8022F10C: sh          $v0, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x8022F10C: sh          $v0, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F110: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F114: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F118: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022F11C:
    // 0x8022F11C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F120: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F124: jr          $ra
    // 0x8022F128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802361F0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802361F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802361F4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x802361F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802361FC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80236200: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80236204: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80236208: jal         0x80071060
    // 0x8023620C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80071060_4C460(rdram, ctx);
        goto after_0;
    // 0x8023620C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80236210: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80236214: lhu         $a0, 0x2C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2C);
    // 0x80236218: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8023621C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80236220: sh          $v1, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r3;
    // 0x80236224: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80236228: lhu         $a0, 0x2E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2E);
    // 0x8023622C: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x80236230: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80236234: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80236238: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    // 0x8023623C: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80236240: lhu         $v1, 0x30($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X30);
    // 0x80236244: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80236248: lb          $a0, 0x4B21($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4B21);
    // 0x8023624C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236250: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80236254: bne         $a0, $zero, L_80236260
    if (ctx->r4 != 0) {
        // 0x80236258: sh          $v0, 0x34($sp)
        MEM_H(0X34, ctx->r29) = ctx->r2;
            goto L_80236260;
    }
    // 0x80236258: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x8023625C: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
L_80236260:
    // 0x80236260: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236264: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80236268: beq         $v0, $zero, L_802362AC
    if (ctx->r2 == 0) {
        // 0x8023626C: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_802362AC;
    }
    // 0x8023626C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80236270: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x80236274: ori         $t0, $t0, 0x5
    ctx->r8 = ctx->r8 | 0X5;
    // 0x80236278: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8023627C: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x80236280: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80236284: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80236288: ori         $v0, $zero, 0xA000
    ctx->r2 = 0 | 0XA000;
    // 0x8023628C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80236290: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80236294: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80236298: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x8023629C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802362A0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802362A4: j           L_80236304
    // 0x802362A8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
        goto L_80236304;
    // 0x802362A8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
L_802362AC:
    // 0x802362AC: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802362B0: beq         $v0, $zero, L_802362CC
    if (ctx->r2 == 0) {
        // 0x802362B4: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_802362CC;
    }
    // 0x802362B4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x802362B8: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x802362BC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802362C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802362C4: j           L_802362E0
    // 0x802362C8: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_802362E0;
    // 0x802362C8: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_802362CC:
    // 0x802362CC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802362D0: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x802362D4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802362D8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802362DC: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_802362E0:
    // 0x802362E0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802362E4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802362E8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802362EC: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x802362F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802362F4: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x802362F8: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x802362FC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80236300: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80236304:
    // 0x80236304: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80236308: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8023630C: jal         0x80051F9C
    // 0x80236310: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_1;
    // 0x80236310: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80236314: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80236318: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8023631C: jr          $ra
    // 0x80236320: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80236320: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80236D2C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236D2C: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80236D30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236D34: bne         $v0, $zero, L_80236D4C
    if (ctx->r2 != 0) {
        // 0x80236D38: sw          $v0, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->r2;
            goto L_80236D4C;
    }
    // 0x80236D38: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
    // 0x80236D3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236D40: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80236D44: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80236D48: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
L_80236D4C:
    // 0x80236D4C: jr          $ra
    // 0x80236D50: nop

    TRACE_RETURN()
    return;
    // 0x80236D50: nop

;}
RECOMP_FUNC void func_802342B0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802342B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802342B4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802342B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802342BC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802342C0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802342C4: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802342C8: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x802342CC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x802342D0: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x802342D4: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x802342D8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802342DC: jal         0x8009A3B4
    // 0x802342E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802342E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802342E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802342E8: jr          $ra
    // 0x802342EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802342EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225EF0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225EF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225EF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225EF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225EFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225F00: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80225F04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225F08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225F0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225F10: lw          $v0, -0x24E0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X24E0);
    // 0x80225F14: jalr        $v0
    // 0x80225F18: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225F18: nop

    after_0:
    // 0x80225F1C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80225F20: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225F24: jal         0x8009A3B4
    // 0x80225F28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80225F28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80225F2C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80225F30: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80225F34: jal         0x8009A3B4
    // 0x80225F38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80225F38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80225F3C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80225F40: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80225F44: jal         0x8009A3B4
    // 0x80225F48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80225F48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80225F4C: jal         0x800504EC
    // 0x80225F50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_4;
    // 0x80225F50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80225F54: jal         0x8005129C
    // 0x80225F58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_5;
    // 0x80225F58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80225F5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225F60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F64: jr          $ra
    // 0x80225F68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225F68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236F14_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236F14: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80236F18: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80236F1C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80236F20: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80236F24: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80236F28: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80236F2C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80236F30: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236F34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236F38: lbu         $v0, 0xD($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XD);
    // 0x80236F3C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236F40: sb          $v0, 0xD($s3)
    MEM_B(0XD, ctx->r19) = ctx->r2;
    // 0x80236F44: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236F48: bne         $v0, $zero, L_8023712C
    if (ctx->r2 != 0) {
        // 0x80236F4C: addiu       $s5, $s3, 0x28
        ctx->r21 = ADD32(ctx->r19, 0X28);
            goto L_8023712C;
    }
    // 0x80236F4C: addiu       $s5, $s3, 0x28
    ctx->r21 = ADD32(ctx->r19, 0X28);
    // 0x80236F50: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80236F54: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80236F58: sb          $v1, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r3;
    // 0x80236F5C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80236F60: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80236F64: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80236F68: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80236F6C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80236F70: beq         $v1, $v0, L_80236F84
    if (ctx->r3 == ctx->r2) {
        // 0x80236F74: nop
    
            goto L_80236F84;
    }
    // 0x80236F74: nop

    // 0x80236F78: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80236F7C: beq         $v1, $v0, L_80236FE8
    if (ctx->r3 == ctx->r2) {
        // 0x80236F80: nop
    
            goto L_80236FE8;
    }
    // 0x80236F80: nop

L_80236F84:
    // 0x80236F84: jal         0x800A3450
    // 0x80236F88: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80236F88: nop

    after_0:
    // 0x80236F8C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80236F90: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80236F94: jal         0x800A3450
    // 0x80236F98: sll         $s2, $v0, 6
    ctx->r18 = S32(ctx->r2 << 6);
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80236F98: sll         $s2, $v0, 6
    ctx->r18 = S32(ctx->r2 << 6);
    after_1:
    // 0x80236F9C: andi        $s0, $v0, 0x7
    ctx->r16 = ctx->r2 & 0X7;
    // 0x80236FA0: addiu       $s0, $s0, 0xD
    ctx->r16 = ADD32(ctx->r16, 0XD);
    // 0x80236FA4: sll         $s0, $s0, 7
    ctx->r16 = S32(ctx->r16 << 7);
    // 0x80236FA8: jal         0x800324B4
    // 0x80236FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80236FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80236FB0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80236FB4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236FB8: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80236FBC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80236FC0: srl         $s4, $v0, 8
    ctx->r20 = S32(U32(ctx->r2) >> 8);
    // 0x80236FC4: jal         0x80032498
    // 0x80236FC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x80236FC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80236FCC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80236FD0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236FD4: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80236FD8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80236FDC: srl         $s0, $v0, 8
    ctx->r16 = S32(U32(ctx->r2) >> 8);
    // 0x80236FE0: j           L_80237044
    // 0x80236FE4: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
        goto L_80237044;
    // 0x80236FE4: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_80236FE8:
    // 0x80236FE8: jal         0x800A3450
    // 0x80236FEC: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80236FEC: nop

    after_4:
    // 0x80236FF0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80236FF4: jal         0x800A3450
    // 0x80236FF8: sll         $s2, $v0, 6
    ctx->r18 = S32(ctx->r2 << 6);
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80236FF8: sll         $s2, $v0, 6
    ctx->r18 = S32(ctx->r2 << 6);
    after_5:
    // 0x80236FFC: andi        $s0, $v0, 0x7
    ctx->r16 = ctx->r2 & 0X7;
    // 0x80237000: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80237004: sll         $s0, $s0, 7
    ctx->r16 = S32(ctx->r16 << 7);
    // 0x80237008: jal         0x800324B4
    // 0x8023700C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_6;
    // 0x8023700C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80237010: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80237014: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237018: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023701C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237020: srl         $s4, $v1, 6
    ctx->r20 = S32(U32(ctx->r3) >> 6);
    // 0x80237024: jal         0x80032498
    // 0x80237028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80032498_D898(rdram, ctx);
        goto after_7;
    // 0x80237028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8023702C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80237030: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237034: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80237038: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023703C: srl         $s0, $v1, 6
    ctx->r16 = S32(U32(ctx->r3) >> 6);
    // 0x80237040: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
L_80237044:
    // 0x80237044: sh          $v0, 0x24($s3)
    MEM_H(0X24, ctx->r19) = ctx->r2;
    // 0x80237048: lbu         $a0, 0xC($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0XC);
    // 0x8023704C: jal         0x80053ED8
    // 0x80237050: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_8;
    // 0x80237050: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    after_8:
    // 0x80237054: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80237058: jal         0x80032498
    // 0x8023705C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_80032498_D898(rdram, ctx);
        goto after_9;
    // 0x8023705C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_9:
    // 0x80237060: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80237064: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80237068: mflo        $v0
    ctx->r2 = lo;
    // 0x8023706C: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80237070: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80237074: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80237078: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023707C: jal         0x800324B4
    // 0x80237080: sh          $v1, 0x1C($s3)
    MEM_H(0X1C, ctx->r19) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_10;
    // 0x80237080: sh          $v1, 0x1C($s3)
    MEM_H(0X1C, ctx->r19) = ctx->r3;
    after_10:
    // 0x80237084: nop

    // 0x80237088: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023708C: mflo        $v0
    ctx->r2 = lo;
    // 0x80237090: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80237094: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80237098: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023709C: sh          $v1, 0x20($s3)
    MEM_H(0X20, ctx->r19) = ctx->r3;
    // 0x802370A0: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x802370A4: addu        $s0, $s5, $zero
    ctx->r16 = ADD32(ctx->r21, 0);
    // 0x802370A8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802370AC: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x802370B0: sh          $v0, 0x1E($s3)
    MEM_H(0X1E, ctx->r19) = ctx->r2;
L_802370B4:
    // 0x802370B4: jal         0x800A3450
    // 0x802370B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x802370B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_11:
    // 0x802370BC: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802370C0: jal         0x800A3450
    // 0x802370C4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_12;
    // 0x802370C4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_12:
    // 0x802370C8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802370CC: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x802370D0: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x802370D4: sltiu       $v0, $s1, 0xC
    ctx->r2 = ctx->r17 < 0XC ? 1 : 0;
    // 0x802370D8: bne         $v0, $zero, L_802370B4
    if (ctx->r2 != 0) {
        // 0x802370DC: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_802370B4;
    }
    // 0x802370DC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x802370E0: lbu         $v0, 0xB($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XB);
    // 0x802370E4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802370E8: beq         $v0, $zero, L_8023710C
    if (ctx->r2 == 0) {
        // 0x802370EC: nop
    
            goto L_8023710C;
    }
    // 0x802370EC: nop

    // 0x802370F0: jal         0x800A3450
    // 0x802370F4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_13;
    // 0x802370F4: nop

    after_13:
    // 0x802370F8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802370FC: bne         $v0, $zero, L_80237120
    if (ctx->r2 != 0) {
        // 0x80237100: addiu       $a0, $zero, 0xA4
        ctx->r4 = ADD32(0, 0XA4);
            goto L_80237120;
    }
    // 0x80237100: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x80237104: j           L_80237120
    // 0x80237108: addiu       $a0, $zero, 0xA5
    ctx->r4 = ADD32(0, 0XA5);
        goto L_80237120;
    // 0x80237108: addiu       $a0, $zero, 0xA5
    ctx->r4 = ADD32(0, 0XA5);
L_8023710C:
    // 0x8023710C: jal         0x800A3450
    // 0x80237110: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_14;
    // 0x80237110: nop

    after_14:
    // 0x80237114: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80237118: bne         $v0, $zero, L_8023712C
    if (ctx->r2 != 0) {
        // 0x8023711C: addiu       $a0, $zero, 0xA4
        ctx->r4 = ADD32(0, 0XA4);
            goto L_8023712C;
    }
    // 0x8023711C: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
L_80237120:
    // 0x80237120: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80237124: jal         0x8002A2F8
    // 0x80237128: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_15;
    // 0x80237128: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_15:
L_8023712C:
    // 0x8023712C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80237130: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80237134: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80237138: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023713C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80237140: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237144: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237148: jr          $ra
    // 0x8023714C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023714C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023A2A8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A2A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A2AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A2B0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023A2B4: bne         $v0, $zero, L_8023A2F0
    if (ctx->r2 != 0) {
        // 0x8023A2B8: nop
    
            goto L_8023A2F0;
    }
    // 0x8023A2B8: nop

    // 0x8023A2BC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023A2C0: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8023A2C4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023A2C8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A2CC: addiu       $a0, $a0, -0xC28
    ctx->r4 = ADD32(ctx->r4, -0XC28);
    // 0x8023A2D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A2D4: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x8023A2D8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8023A2DC: jal         0x8005FA7C
    // 0x8023A2E0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8023A2E0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x8023A2E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A2E8: jal         0x8023A980
    // 0x8023A2EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8023A980_ovl25(rdram, ctx);
        goto after_1;
    // 0x8023A2EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
L_8023A2F0:
    // 0x8023A2F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A2F4: jr          $ra
    // 0x8023A2F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A2F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023210C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023210C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232110: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232114: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80232118: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023211C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232120: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232124: lbu         $s1, 0xB($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0XB);
    // 0x80232128: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023212C: beq         $s1, $v0, L_802321C4
    if (ctx->r17 == ctx->r2) {
        // 0x80232130: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_802321C4;
    }
    // 0x80232130: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80232134: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x80232138: beql        $v0, $zero, L_80232150
    if (ctx->r2 == 0) {
        // 0x8023213C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232150;
    }
    goto skip_0;
    // 0x8023213C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80232140: beq         $s1, $zero, L_80232160
    if (ctx->r17 == 0) {
        // 0x80232144: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80232160;
    }
    // 0x80232144: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80232148: j           L_8023226C
    // 0x8023214C: nop

        goto L_8023226C;
    // 0x8023214C: nop

L_80232150:
    // 0x80232150: beq         $s1, $v0, L_80232258
    if (ctx->r17 == ctx->r2) {
        // 0x80232154: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_80232258;
    }
    // 0x80232154: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80232158: j           L_8023226C
    // 0x8023215C: nop

        goto L_8023226C;
    // 0x8023215C: nop

L_80232160:
    // 0x80232160: lbu         $v1, 0x141($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X141);
    // 0x80232164: bne         $v1, $v0, L_80232174
    if (ctx->r3 != ctx->r2) {
        // 0x80232168: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80232174;
    }
    // 0x80232168: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023216C: j           L_8023226C
    // 0x80232170: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_8023226C;
    // 0x80232170: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_80232174:
    // 0x80232174: lbu         $a1, 0x140($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X140);
    // 0x80232178: sb          $zero, 0x13F($s0)
    MEM_B(0X13F, ctx->r16) = 0;
L_8023217C:
    // 0x8023217C: lbu         $a0, 0x13F($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X13F);
    // 0x80232180: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80232184: srav        $v0, $a1, $v1
    ctx->r2 = S32(SIGNED(ctx->r5) >> (ctx->r3 & 31));
    // 0x80232188: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023218C: beq         $v0, $zero, L_802321A8
    if (ctx->r2 == 0) {
        // 0x80232190: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802321A8;
    }
    // 0x80232190: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80232194: lbu         $v0, 0x141($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X141);
    // 0x80232198: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x8023219C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802321A0: beq         $v0, $zero, L_8023224C
    if (ctx->r2 == 0) {
        // 0x802321A4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023224C;
    }
    // 0x802321A4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
L_802321A8:
    // 0x802321A8: sb          $v0, 0x13F($s0)
    MEM_B(0X13F, ctx->r16) = ctx->r2;
    // 0x802321AC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802321B0: sltiu       $v0, $v0, 0x7
    ctx->r2 = ctx->r2 < 0X7 ? 1 : 0;
    // 0x802321B4: beq         $v0, $zero, L_8023226C
    if (ctx->r2 == 0) {
        // 0x802321B8: nop
    
            goto L_8023226C;
    }
    // 0x802321B8: nop

    // 0x802321BC: j           L_8023217C
    // 0x802321C0: nop

        goto L_8023217C;
    // 0x802321C0: nop

L_802321C4:
    // 0x802321C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802321C8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802321CC: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x802321D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802321D4: bne         $v0, $zero, L_80232214
    if (ctx->r2 != 0) {
        // 0x802321D8: nop
    
            goto L_80232214;
    }
    // 0x802321D8: nop

    // 0x802321DC: lbu         $v0, 0x13F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X13F);
    // 0x802321E0: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802321E4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802321E8: lbu         $a1, -0x1460($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1460);
    // 0x802321EC: jal         0x800616FC
    // 0x802321F0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x802321F0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x802321F4: lbu         $v0, 0x13F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X13F);
    // 0x802321F8: lbu         $v1, 0x141($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X141);
    // 0x802321FC: sllv        $v0, $s1, $v0
    ctx->r2 = S32(ctx->r17 << (ctx->r2 & 31));
    // 0x80232200: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80232204: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232208: sb          $v1, 0x141($s0)
    MEM_B(0X141, ctx->r16) = ctx->r3;
    // 0x8023220C: j           L_8023226C
    // 0x80232210: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_8023226C;
    // 0x80232210: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_80232214:
    // 0x80232214: lbu         $v0, 0x141($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X141);
    // 0x80232218: lbu         $v1, 0x13F($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13F);
    // 0x8023221C: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x80232220: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80232224: beq         $v0, $zero, L_8023226C
    if (ctx->r2 == 0) {
        // 0x80232228: nop
    
            goto L_8023226C;
    }
    // 0x80232228: nop

    // 0x8023222C: jal         0x80061798
    // 0x80232230: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80061798_3CB98(rdram, ctx);
        goto after_1;
    // 0x80232230: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x80232234: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80232238: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023223C: jal         0x80036B00
    // 0x80232240: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_2;
    // 0x80232240: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80232244: j           L_8023226C
    // 0x80232248: sb          $zero, 0xB($s2)
    MEM_B(0XB, ctx->r18) = 0;
        goto L_8023226C;
    // 0x80232248: sb          $zero, 0xB($s2)
    MEM_B(0XB, ctx->r18) = 0;
L_8023224C:
    // 0x8023224C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232250: j           L_8023226C
    // 0x80232254: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_8023226C;
    // 0x80232254: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_80232258:
    // 0x80232258: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023225C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80232260: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80232264: beql        $v0, $zero, L_8023226C
    if (ctx->r2 == 0) {
        // 0x80232268: sb          $zero, 0xB($s2)
        MEM_B(0XB, ctx->r18) = 0;
            goto L_8023226C;
    }
    goto skip_1;
    // 0x80232268: sb          $zero, 0xB($s2)
    MEM_B(0XB, ctx->r18) = 0;
    skip_1:
L_8023226C:
    // 0x8023226C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232270: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232274: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232278: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023227C: jr          $ra
    // 0x80232280: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232280: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AA58_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AA5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AA60: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022AA64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AA68: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022AA6C: jal         0x800A3450
    // 0x8022AA70: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022AA70: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022AA74: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x8022AA78: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022AA7C: bne         $v1, $zero, L_8022AAF8
    if (ctx->r3 != 0) {
        // 0x8022AA80: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_8022AAF8;
    }
    // 0x8022AA80: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022AA84: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022AA88: andi        $v1, $a2, 0x7
    ctx->r3 = ctx->r6 & 0X7;
    // 0x8022AA8C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022AA90: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022AA94: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022AA98: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x8022AA9C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022AAA0: sra         $v1, $a0, 18
    ctx->r3 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022AAA4: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022AAA8: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022AAAC: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8022AAB0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022AAB4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022AAB8: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022AABC: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022AAC0: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022AAC4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022AAC8: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8022AACC: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
    // 0x8022AAD0: sra         $v0, $a0, 22
    ctx->r2 = S32(SIGNED(ctx->r4) >> 22);
    // 0x8022AAD4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022AAD8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022AADC: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x8022AAE0: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022AAE4: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022AAE8: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022AAEC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022AAF0: j           L_8022AB7C
    // 0x8022AAF4: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022AB7C;
    // 0x8022AAF4: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022AAF8:
    // 0x8022AAF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AAFC: bne         $v1, $v0, L_8022AB7C
    if (ctx->r3 != ctx->r2) {
        // 0x8022AB00: nop
    
            goto L_8022AB7C;
    }
    // 0x8022AB00: nop

    // 0x8022AB04: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022AB08: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022AB0C: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022AB10: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022AB14: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022AB18: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022AB1C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8022AB20: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x8022AB24: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022AB28: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x8022AB2C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022AB30: sra         $v0, $v1, 20
    ctx->r2 = S32(SIGNED(ctx->r3) >> 20);
    // 0x8022AB34: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022AB38: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x8022AB3C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022AB40: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022AB44: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x8022AB48: sra         $v1, $v1, 22
    ctx->r3 = S32(SIGNED(ctx->r3) >> 22);
    // 0x8022AB4C: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x8022AB50: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022AB54: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x8022AB58: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022AB5C: bne         $v0, $zero, L_8022AB7C
    if (ctx->r2 != 0) {
        // 0x8022AB60: sh          $a0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r4;
            goto L_8022AB7C;
    }
    // 0x8022AB60: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
    // 0x8022AB64: lh          $v0, 0x12($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X12);
    // 0x8022AB68: slti        $v0, $v0, 0xB5
    ctx->r2 = SIGNED(ctx->r2) < 0XB5 ? 1 : 0;
    // 0x8022AB6C: bnel        $v0, $zero, L_8022AB7C
    if (ctx->r2 != 0) {
        // 0x8022AB70: sb          $zero, 0x4($s0)
        MEM_B(0X4, ctx->r16) = 0;
            goto L_8022AB7C;
    }
    goto skip_0;
    // 0x8022AB70: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    skip_0:
    // 0x8022AB74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AB78: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022AB7C:
    // 0x8022AB7C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AB80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AB84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AB88: jr          $ra
    // 0x8022AB8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AB8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226DF8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226DF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226DFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226E00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226E04: jal         0x800A3450
    // 0x80226E08: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80226E08: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80226E0C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80226E10: bne         $v1, $zero, L_80226E8C
    if (ctx->r3 != 0) {
        // 0x80226E14: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_80226E8C;
    }
    // 0x80226E14: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80226E18: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80226E1C: andi        $v1, $a3, 0x7
    ctx->r3 = ctx->r7 & 0X7;
    // 0x80226E20: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80226E24: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80226E28: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226E2C: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x80226E30: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80226E34: sra         $v1, $a0, 17
    ctx->r3 = S32(SIGNED(ctx->r4) >> 17);
    // 0x80226E38: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80226E3C: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80226E40: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
    // 0x80226E44: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226E48: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80226E4C: sra         $v0, $a0, 18
    ctx->r2 = S32(SIGNED(ctx->r4) >> 18);
    // 0x80226E50: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226E54: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x80226E58: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80226E5C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80226E60: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80226E64: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x80226E68: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x80226E6C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80226E70: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80226E74: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80226E78: sra         $a0, $a0, 20
    ctx->r4 = S32(SIGNED(ctx->r4) >> 20);
    // 0x80226E7C: andi        $a0, $a0, 0x3F
    ctx->r4 = ctx->r4 & 0X3F;
    // 0x80226E80: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80226E84: j           L_80226F04
    // 0x80226E88: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_80226F04;
    // 0x80226E88: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_80226E8C:
    // 0x80226E8C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226E90: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x80226E94: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x80226E98: lhu         $a2, 0xA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XA);
    // 0x80226E9C: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x80226EA0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80226EA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226EA8: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x80226EAC: addiu       $a2, $a2, -0xC
    ctx->r6 = ADD32(ctx->r6, -0XC);
    // 0x80226EB0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x80226EB4: andi        $v0, $a3, 0x7
    ctx->r2 = ctx->r7 & 0X7;
    // 0x80226EB8: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x80226EBC: addiu       $a1, $a1, -0xC
    ctx->r5 = ADD32(ctx->r5, -0XC);
    // 0x80226EC0: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x80226EC4: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x80226EC8: sra         $v0, $v1, 18
    ctx->r2 = S32(SIGNED(ctx->r3) >> 18);
    // 0x80226ECC: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x80226ED0: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x80226ED4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80226ED8: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80226EDC: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x80226EE0: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x80226EE4: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80226EE8: sh          $a2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r6;
    // 0x80226EEC: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x80226EF0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80226EF4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80226EF8: bne         $v0, $zero, L_80226F04
    if (ctx->r2 != 0) {
        // 0x80226EFC: sh          $a0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r4;
            goto L_80226F04;
    }
    // 0x80226EFC: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
    // 0x80226F00: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80226F04:
    // 0x80226F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226F08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226F0C: jr          $ra
    // 0x80226F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D2B4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D2B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022D2B8: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022D2BC: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x8022D2C0: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x8022D2C4: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8022D2C8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022D2CC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022D2D0: lw          $v0, -0x1A10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1A10);
    // 0x8022D2D4: jr          $ra
    // 0x8022D2D8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022D2D8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80236E48_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236E48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236E4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236E50: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x80236E54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236E58: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80236E5C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236E60: bne         $v0, $zero, L_80236E70
    if (ctx->r2 != 0) {
        // 0x80236E64: nop
    
            goto L_80236E70;
    }
    // 0x80236E64: nop

    // 0x80236E68: jal         0x8004F5C4
    // 0x80236E6C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80236E6C: nop

    after_0:
L_80236E70:
    // 0x80236E70: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236E74: jr          $ra
    // 0x80236E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228594_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228594: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228598: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022859C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802285A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802285A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802285A8: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x802285AC: beq         $v1, $zero, L_802285C8
    if (ctx->r3 == 0) {
        // 0x802285B0: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_802285C8;
    }
    // 0x802285B0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802285B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802285B8: beq         $v1, $v0, L_80228610
    if (ctx->r3 == ctx->r2) {
        // 0x802285BC: nop
    
            goto L_80228610;
    }
    // 0x802285BC: nop

    // 0x802285C0: j           L_80228758
    // 0x802285C4: nop

        goto L_80228758;
    // 0x802285C4: nop

L_802285C8:
    // 0x802285C8: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x802285CC: sh          $zero, 0xE($s0)
    MEM_H(0XE, ctx->r16) = 0;
    // 0x802285D0: sh          $zero, 0x10($s0)
    MEM_H(0X10, ctx->r16) = 0;
    // 0x802285D4: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x802285D8: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x802285DC: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x802285E0: beq         $v0, $zero, L_802285F4
    if (ctx->r2 == 0) {
        // 0x802285E4: sh          $zero, 0x18($s0)
        MEM_H(0X18, ctx->r16) = 0;
            goto L_802285F4;
    }
    // 0x802285E4: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x802285E8: srl         $v0, $v1, 2
    ctx->r2 = S32(U32(ctx->r3) >> 2);
    // 0x802285EC: j           L_80228600
    // 0x802285F0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
        goto L_80228600;
    // 0x802285F0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
L_802285F4:
    // 0x802285F4: srl         $v0, $v1, 4
    ctx->r2 = S32(U32(ctx->r3) >> 4);
    // 0x802285F8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802285FC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_80228600:
    // 0x80228600: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80228604: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80228608: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022860C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
L_80228610:
    // 0x80228610: lh          $v1, 0xE($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE);
    // 0x80228614: slti        $v0, $v1, 0x140
    ctx->r2 = SIGNED(ctx->r3) < 0X140 ? 1 : 0;
    // 0x80228618: beq         $v0, $zero, L_80228718
    if (ctx->r2 == 0) {
        // 0x8022861C: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_80228718;
    }
    // 0x8022861C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80228620: beq         $v1, $v0, L_802286C0
    if (ctx->r3 == ctx->r2) {
        // 0x80228624: slti        $v0, $v1, 0x81
        ctx->r2 = SIGNED(ctx->r3) < 0X81 ? 1 : 0;
            goto L_802286C0;
    }
    // 0x80228624: slti        $v0, $v1, 0x81
    ctx->r2 = SIGNED(ctx->r3) < 0X81 ? 1 : 0;
    // 0x80228628: beq         $v0, $zero, L_80228668
    if (ctx->r2 == 0) {
        // 0x8022862C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80228668;
    }
    // 0x8022862C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80228630: beq         $v1, $v0, L_802286D8
    if (ctx->r3 == ctx->r2) {
        // 0x80228634: slti        $v0, $v1, 0x21
        ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
            goto L_802286D8;
    }
    // 0x80228634: slti        $v0, $v1, 0x21
    ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x80228638: beql        $v0, $zero, L_80228650
    if (ctx->r2 == 0) {
        // 0x8022863C: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80228650;
    }
    goto skip_0;
    // 0x8022863C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    skip_0:
    // 0x80228640: beq         $v1, $zero, L_802286B0
    if (ctx->r3 == 0) {
        // 0x80228644: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802286B0;
    }
    // 0x80228644: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228648: j           L_802286F8
    // 0x8022864C: nop

        goto L_802286F8;
    // 0x8022864C: nop

L_80228650:
    // 0x80228650: beq         $v1, $v0, L_802286E0
    if (ctx->r3 == ctx->r2) {
        // 0x80228654: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_802286E0;
    }
    // 0x80228654: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80228658: beq         $v1, $v0, L_802286B8
    if (ctx->r3 == ctx->r2) {
        // 0x8022865C: addiu       $v0, $zero, -0x14
        ctx->r2 = ADD32(0, -0X14);
            goto L_802286B8;
    }
    // 0x8022865C: addiu       $v0, $zero, -0x14
    ctx->r2 = ADD32(0, -0X14);
    // 0x80228660: j           L_802286F8
    // 0x80228664: nop

        goto L_802286F8;
    // 0x80228664: nop

L_80228668:
    // 0x80228668: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8022866C: beq         $v1, $v0, L_802286E0
    if (ctx->r3 == ctx->r2) {
        // 0x80228670: slti        $v0, $v1, 0xE1
        ctx->r2 = SIGNED(ctx->r3) < 0XE1 ? 1 : 0;
            goto L_802286E0;
    }
    // 0x80228670: slti        $v0, $v1, 0xE1
    ctx->r2 = SIGNED(ctx->r3) < 0XE1 ? 1 : 0;
    // 0x80228674: beq         $v0, $zero, L_80228694
    if (ctx->r2 == 0) {
        // 0x80228678: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_80228694;
    }
    // 0x80228678: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022867C: beq         $v1, $v0, L_802286C8
    if (ctx->r3 == ctx->r2) {
        // 0x80228680: addiu       $v0, $zero, 0xC0
        ctx->r2 = ADD32(0, 0XC0);
            goto L_802286C8;
    }
    // 0x80228680: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80228684: beql        $v1, $v0, L_802286F8
    if (ctx->r3 == ctx->r2) {
        // 0x80228688: sh          $zero, 0x16($s0)
        MEM_H(0X16, ctx->r16) = 0;
            goto L_802286F8;
    }
    goto skip_1;
    // 0x80228688: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    skip_1:
    // 0x8022868C: j           L_802286F8
    // 0x80228690: nop

        goto L_802286F8;
    // 0x80228690: nop

L_80228694:
    // 0x80228694: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80228698: beq         $v1, $v0, L_802286E8
    if (ctx->r3 == ctx->r2) {
        // 0x8022869C: addiu       $v0, $zero, 0x120
        ctx->r2 = ADD32(0, 0X120);
            goto L_802286E8;
    }
    // 0x8022869C: addiu       $v0, $zero, 0x120
    ctx->r2 = ADD32(0, 0X120);
    // 0x802286A0: beq         $v1, $v0, L_802286F4
    if (ctx->r3 == ctx->r2) {
        // 0x802286A4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802286F4;
    }
    // 0x802286A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802286A8: j           L_802286F8
    // 0x802286AC: nop

        goto L_802286F8;
    // 0x802286AC: nop

L_802286B0:
    // 0x802286B0: j           L_802286E8
    // 0x802286B4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
        goto L_802286E8;
    // 0x802286B4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
L_802286B8:
    // 0x802286B8: j           L_802286F8
    // 0x802286BC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
        goto L_802286F8;
    // 0x802286BC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_802286C0:
    // 0x802286C0: j           L_802286F4
    // 0x802286C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802286F4;
    // 0x802286C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802286C8:
    // 0x802286C8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x802286CC: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x802286D0: j           L_802286F8
    // 0x802286D4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_802286F8;
    // 0x802286D4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_802286D8:
    // 0x802286D8: j           L_802286F8
    // 0x802286DC: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
        goto L_802286F8;
    // 0x802286DC: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
L_802286E0:
    // 0x802286E0: j           L_802286F8
    // 0x802286E4: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
        goto L_802286F8;
    // 0x802286E4: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
L_802286E8:
    // 0x802286E8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802286EC: j           L_802286F8
    // 0x802286F0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
        goto L_802286F8;
    // 0x802286F0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_802286F4:
    // 0x802286F4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
L_802286F8:
    // 0x802286F8: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x802286FC: lhu         $v1, 0xE($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE);
    // 0x80228700: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80228704: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228708: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022870C: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80228710: j           L_80228758
    // 0x80228714: sh          $v1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r3;
        goto L_80228758;
    // 0x80228714: sh          $v1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r3;
L_80228718:
    // 0x80228718: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022871C: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x80228720: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80228724: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80228728: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022872C: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x80228730: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80228734: beql        $v0, $zero, L_80228758
    if (ctx->r2 == 0) {
        // 0x80228738: sb          $zero, 0xB($s1)
        MEM_B(0XB, ctx->r17) = 0;
            goto L_80228758;
    }
    goto skip_2;
    // 0x80228738: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    skip_2:
    // 0x8022873C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80228740: beql        $v0, $zero, L_80228758
    if (ctx->r2 == 0) {
        // 0x80228744: sb          $zero, 0xB($s1)
        MEM_B(0XB, ctx->r17) = 0;
            goto L_80228758;
    }
    goto skip_3;
    // 0x80228744: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    skip_3:
    // 0x80228748: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022874C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228750: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80228754: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_80228758:
    // 0x80228758: lhu         $v0, 0x48($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X48);
    // 0x8022875C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80228760: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80228764: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80228768: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022876C: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80228770: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    // 0x80228774: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x80228778: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x8022877C: lh          $a0, 0x1C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X1C);
    // 0x80228780: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228784: jal         0x800324B4
    // 0x80228788: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80228788: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022878C: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x80228790: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80228794: mflo        $v1
    ctx->r3 = lo;
    // 0x80228798: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8022879C: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    // 0x802287A0: jal         0x80032498
    // 0x802287A4: lh          $a0, 0x1C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X1C);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x802287A4: lh          $a0, 0x1C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X1C);
    after_1:
    // 0x802287A8: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x802287AC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802287B0: mflo        $v1
    ctx->r3 = lo;
    // 0x802287B4: lh          $a0, 0x14($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X14);
    // 0x802287B8: lh          $v0, 0x2C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2C);
    // 0x802287BC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802287C0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x802287C4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802287C8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802287CC: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x802287D0: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802287D4: addiu       $v1, $v1, -0x600
    ctx->r3 = ADD32(ctx->r3, -0X600);
    // 0x802287D8: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x802287DC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x802287E0: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802287E4: beq         $v0, $zero, L_80228820
    if (ctx->r2 == 0) {
        // 0x802287E8: addiu       $v0, $zero, 0xA1
        ctx->r2 = ADD32(0, 0XA1);
            goto L_80228820;
    }
    // 0x802287E8: addiu       $v0, $zero, 0xA1
    ctx->r2 = ADD32(0, 0XA1);
    // 0x802287EC: lh          $v1, 0xE($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE);
    // 0x802287F0: bne         $v1, $v0, L_80228804
    if (ctx->r3 != ctx->r2) {
        // 0x802287F4: addiu       $v0, $zero, -0x600
        ctx->r2 = ADD32(0, -0X600);
            goto L_80228804;
    }
    // 0x802287F4: addiu       $v0, $zero, -0x600
    ctx->r2 = ADD32(0, -0X600);
    // 0x802287F8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x802287FC: j           L_8022880C
    // 0x80228800: addiu       $v0, $zero, -0x800
    ctx->r2 = ADD32(0, -0X800);
        goto L_8022880C;
    // 0x80228800: addiu       $v0, $zero, -0x800
    ctx->r2 = ADD32(0, -0X800);
L_80228804:
    // 0x80228804: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80228808: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_8022880C:
    // 0x8022880C: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    // 0x80228810: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80228814: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80228818: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x8022881C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80228820:
    // 0x80228820: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80228824: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80228828: lh          $a0, 0x18($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X18);
    // 0x8022882C: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x80228830: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228834: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228838: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022883C: slti        $a1, $a1, 0x300
    ctx->r5 = SIGNED(ctx->r5) < 0X300 ? 1 : 0;
    // 0x80228840: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80228844: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80228848: beq         $a1, $zero, L_8022885C
    if (ctx->r5 == 0) {
        // 0x8022884C: sw          $a0, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->r4;
            goto L_8022885C;
    }
    // 0x8022884C: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x80228850: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80228854: j           L_80228884
    // 0x80228858: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
        goto L_80228884;
    // 0x80228858: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
L_8022885C:
    // 0x8022885C: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80228860: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80228864: beq         $v0, $zero, L_80228888
    if (ctx->r2 == 0) {
        // 0x80228868: nop
    
            goto L_80228888;
    }
    // 0x80228868: nop

    // 0x8022886C: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x80228870: slti        $v0, $v0, -0x600
    ctx->r2 = SIGNED(ctx->r2) < -0X600 ? 1 : 0;
    // 0x80228874: beq         $v0, $zero, L_80228888
    if (ctx->r2 == 0) {
        // 0x80228878: nop
    
            goto L_80228888;
    }
    // 0x80228878: nop

    // 0x8022887C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80228880: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_80228884:
    // 0x80228884: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80228888:
    // 0x80228888: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022888C: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x80228890: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80228894: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80228898: bne         $v0, $zero, L_802288C8
    if (ctx->r2 != 0) {
        // 0x8022889C: lui         $v0, 0x24
        ctx->r2 = S32(0X24 << 16);
            goto L_802288C8;
    }
    // 0x8022889C: lui         $v0, 0x24
    ctx->r2 = S32(0X24 << 16);
    // 0x802288A0: lhu         $v1, 0x4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4);
    // 0x802288A4: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x802288A8: bne         $v0, $zero, L_802288C0
    if (ctx->r2 != 0) {
        // 0x802288AC: ori         $v0, $v1, 0x80
        ctx->r2 = ctx->r3 | 0X80;
            goto L_802288C0;
    }
    // 0x802288AC: ori         $v0, $v1, 0x80
    ctx->r2 = ctx->r3 | 0X80;
    // 0x802288B0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x802288B4: addiu       $a0, $zero, 0x150
    ctx->r4 = ADD32(0, 0X150);
    // 0x802288B8: jal         0x8002A33C
    // 0x802288BC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802288BC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
L_802288C0:
    // 0x802288C0: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x802288C4: lui         $v0, 0x24
    ctx->r2 = S32(0X24 << 16);
L_802288C8:
    // 0x802288C8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802288CC: beq         $v0, $zero, L_802288E0
    if (ctx->r2 == 0) {
        // 0x802288D0: nop
    
            goto L_802288E0;
    }
    // 0x802288D0: nop

    // 0x802288D4: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x802288D8: andi        $v0, $v0, 0xFF7F
    ctx->r2 = ctx->r2 & 0XFF7F;
    // 0x802288DC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_802288E0:
    // 0x802288E0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802288E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802288E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802288EC: jr          $ra
    // 0x802288F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802288F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023161C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023161C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231620: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231624: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231628: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023162C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231630: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80231634: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80231638: beq         $v0, $zero, L_80231750
    if (ctx->r2 == 0) {
        // 0x8023163C: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_80231750;
    }
    // 0x8023163C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80231640: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80231644: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231648: addu        $at, $at, $v0
    gpr jr_addend_80231650 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023164C: lw          $v0, 0xF68($at)
    ctx->r2 = ADD32(ctx->r1, 0XF68);
    // 0x80231650: jr          $v0
    // 0x80231654: nop

    switch (jr_addend_80231650 >> 2) {
        case 0: goto L_80231658; break;
        case 1: goto L_80231674; break;
        case 2: goto L_80231688; break;
        case 3: goto L_802316AC; break;
        case 4: goto L_802316EC; break;
        default: switch_error(__func__, 0x80231650, 0x80240F68);
    }
    // 0x80231654: nop

L_80231658:
    // 0x80231658: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8023165C: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x80231660: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80231664: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x80231668: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
    // 0x8023166C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231670: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80231674:
    // 0x80231674: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231678: jal         0x802324AC
    // 0x8023167C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_802324AC_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023167C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80231680: j           L_80231750
    // 0x80231684: nop

        goto L_80231750;
    // 0x80231684: nop

L_80231688:
    // 0x80231688: lbu         $v0, 0x140($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X140);
    // 0x8023168C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231690: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231694: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80231698: jal         0x80232AC0
    // 0x8023169C: sb          $v0, 0x140($s0)
    MEM_B(0X140, ctx->r16) = ctx->r2;
    func_80232AC0_ovl25(rdram, ctx);
        goto after_1;
    // 0x8023169C: sb          $v0, 0x140($s0)
    MEM_B(0X140, ctx->r16) = ctx->r2;
    after_1:
    // 0x802316A0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802316A4: j           L_8023174C
    // 0x802316A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023174C;
    // 0x802316A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802316AC:
    // 0x802316AC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x802316B0: beq         $v0, $zero, L_802316C4
    if (ctx->r2 == 0) {
        // 0x802316B4: nop
    
            goto L_802316C4;
    }
    // 0x802316B4: nop

    // 0x802316B8: lb          $v0, 0xC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XC);
    // 0x802316BC: bnel        $v0, $zero, L_802316E0
    if (ctx->r2 != 0) {
        // 0x802316C0: sh          $zero, 0x18($s0)
        MEM_H(0X18, ctx->r16) = 0;
            goto L_802316E0;
    }
    goto skip_0;
    // 0x802316C0: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    skip_0:
L_802316C4:
    // 0x802316C4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x802316C8: beq         $v0, $zero, L_80231750
    if (ctx->r2 == 0) {
        // 0x802316CC: nop
    
            goto L_80231750;
    }
    // 0x802316CC: nop

    // 0x802316D0: lb          $v0, 0xC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XC);
    // 0x802316D4: beq         $v0, $zero, L_80231750
    if (ctx->r2 == 0) {
        // 0x802316D8: nop
    
            goto L_80231750;
    }
    // 0x802316D8: nop

    // 0x802316DC: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
L_802316E0:
    // 0x802316E0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802316E4: j           L_8023174C
    // 0x802316E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023174C;
    // 0x802316E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802316EC:
    // 0x802316EC: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x802316F0: slti        $v0, $v1, 0x5A
    ctx->r2 = SIGNED(ctx->r3) < 0X5A ? 1 : 0;
    // 0x802316F4: beql        $v0, $zero, L_8023174C
    if (ctx->r2 == 0) {
        // 0x802316F8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023174C;
    }
    goto skip_1;
    // 0x802316F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x802316FC: bne         $v1, $zero, L_8023173C
    if (ctx->r3 != 0) {
        // 0x80231700: nop
    
            goto L_8023173C;
    }
    // 0x80231700: nop

    // 0x80231704: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x80231708: beq         $v1, $zero, L_80231720
    if (ctx->r3 == 0) {
        // 0x8023170C: nop
    
            goto L_80231720;
    }
    // 0x8023170C: nop

    // 0x80231710: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x80231714: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80231718: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8023171C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_80231720:
    // 0x80231720: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x80231724: beq         $v1, $zero, L_8023173C
    if (ctx->r3 == 0) {
        // 0x80231728: nop
    
            goto L_8023173C;
    }
    // 0x80231728: nop

    // 0x8023172C: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x80231730: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80231734: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80231738: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_8023173C:
    // 0x8023173C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80231740: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231744: j           L_80231750
    // 0x80231748: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
        goto L_80231750;
    // 0x80231748: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_8023174C:
    // 0x8023174C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80231750:
    // 0x80231750: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80231754: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80231758: bne         $v0, $zero, L_80231828
    if (ctx->r2 != 0) {
        // 0x8023175C: nop
    
            goto L_80231828;
    }
    // 0x8023175C: nop

    // 0x80231760: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x80231764: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231768: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023176C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80231770: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231774: lh          $v1, -0x2400($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2400);
    // 0x80231778: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x8023177C: sra         $v1, $v1, 6
    ctx->r3 = S32(SIGNED(ctx->r3) >> 6);
    // 0x80231780: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231784: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80231788: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023178C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80231790: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80231794: beq         $a0, $zero, L_802317B0
    if (ctx->r4 == 0) {
        // 0x80231798: nop
    
            goto L_802317B0;
    }
    // 0x80231798: nop

    // 0x8023179C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x802317A0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802317A4: lhu         $v1, -0x1466($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1466);
    // 0x802317A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802317AC: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
L_802317B0:
    // 0x802317B0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x802317B4: beq         $a0, $zero, L_802317D0
    if (ctx->r4 == 0) {
        // 0x802317B8: nop
    
            goto L_802317D0;
    }
    // 0x802317B8: nop

    // 0x802317BC: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x802317C0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802317C4: lhu         $v1, -0x1466($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1466);
    // 0x802317C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802317CC: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
L_802317D0:
    // 0x802317D0: lhu         $v1, 0x1A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1A);
    // 0x802317D4: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802317D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802317DC: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x802317E0: beq         $v0, $zero, L_80231828
    if (ctx->r2 == 0) {
        // 0x802317E4: sh          $v1, 0x1A($s0)
        MEM_H(0X1A, ctx->r16) = ctx->r3;
            goto L_80231828;
    }
    // 0x802317E4: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x802317E8: andi        $v0, $v1, 0x3F
    ctx->r2 = ctx->r3 & 0X3F;
    // 0x802317EC: bne         $v0, $zero, L_80231828
    if (ctx->r2 != 0) {
        // 0x802317F0: nop
    
            goto L_80231828;
    }
    // 0x802317F0: nop

    // 0x802317F4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802317F8: beq         $a0, $zero, L_80231808
    if (ctx->r4 == 0) {
        // 0x802317FC: nop
    
            goto L_80231808;
    }
    // 0x802317FC: nop

    // 0x80231800: jal         0x8004F4F8
    // 0x80231804: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80231804: nop

    after_2:
L_80231808:
    // 0x80231808: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x8023180C: beq         $a0, $zero, L_8023181C
    if (ctx->r4 == 0) {
        // 0x80231810: nop
    
            goto L_8023181C;
    }
    // 0x80231810: nop

    // 0x80231814: jal         0x8004F4F8
    // 0x80231818: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_3;
    // 0x80231818: nop

    after_3:
L_8023181C:
    // 0x8023181C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80231820: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80231824: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80231828:
    // 0x80231828: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023182C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231830: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231834: jr          $ra
    // 0x80231838: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231838: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023D00C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D00C: jr          $ra
    // 0x8023D010: nop

    TRACE_RETURN()
    return;
    // 0x8023D010: nop

;}
RECOMP_FUNC void func_80239A20_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239A20: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80239A24: bne         $v0, $zero, L_80239A88
    if (ctx->r2 != 0) {
        // 0x80239A28: addiu       $a2, $zero, 0x200
        ctx->r6 = ADD32(0, 0X200);
            goto L_80239A88;
    }
    // 0x80239A28: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80239A2C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80239A30: addiu       $v1, $v1, -0x3AA2
    ctx->r3 = ADD32(ctx->r3, -0X3AA2);
    // 0x80239A34: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x80239A38: bne         $v0, $zero, L_80239A78
    if (ctx->r2 != 0) {
        // 0x80239A3C: addiu       $v0, $zero, -0x200
        ctx->r2 = ADD32(0, -0X200);
            goto L_80239A78;
    }
    // 0x80239A3C: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x80239A40: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x80239A44: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80239A48: addiu       $v1, $v1, 0x5090
    ctx->r3 = ADD32(ctx->r3, 0X5090);
    // 0x80239A4C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
L_80239A50:
    // 0x80239A50: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80239A54: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80239A58: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x80239A5C: beq         $v0, $zero, L_80239A78
    if (ctx->r2 == 0) {
        // 0x80239A60: addiu       $a1, $a1, 0xC
        ctx->r5 = ADD32(ctx->r5, 0XC);
            goto L_80239A78;
    }
    // 0x80239A60: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x80239A64: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80239A68: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
    // 0x80239A6C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x80239A70: j           L_80239A50
    // 0x80239A74: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
        goto L_80239A50;
    // 0x80239A74: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
L_80239A78:
    // 0x80239A78: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80239A7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239A80: j           L_80239B08
    // 0x80239A84: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
        goto L_80239B08;
    // 0x80239A84: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80239A88:
    // 0x80239A88: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80239A8C: addiu       $v0, $v0, -0x3AA2
    ctx->r2 = ADD32(ctx->r2, -0X3AA2);
    // 0x80239A90: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80239A94: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80239A98: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80239A9C: addiu       $v1, $v1, 0x5090
    ctx->r3 = ADD32(ctx->r3, 0X5090);
    // 0x80239AA0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x80239AA4: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x80239AA8: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80239AAC:
    // 0x80239AAC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80239AB0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80239AB4: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x80239AB8: beq         $v0, $zero, L_80239AF0
    if (ctx->r2 == 0) {
        // 0x80239ABC: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80239AF0;
    }
    // 0x80239ABC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80239AC0: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x80239AC4: bne         $v0, $a2, L_80239AD8
    if (ctx->r2 != ctx->r6) {
        // 0x80239AC8: nop
    
            goto L_80239AD8;
    }
    // 0x80239AC8: nop

    // 0x80239ACC: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80239AD0: j           L_80239AE0
    // 0x80239AD4: addiu       $v0, $v0, -0x3C0
    ctx->r2 = ADD32(ctx->r2, -0X3C0);
        goto L_80239AE0;
    // 0x80239AD4: addiu       $v0, $v0, -0x3C0
    ctx->r2 = ADD32(ctx->r2, -0X3C0);
L_80239AD8:
    // 0x80239AD8: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80239ADC: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
L_80239AE0:
    // 0x80239AE0: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x80239AE4: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x80239AE8: j           L_80239AAC
    // 0x80239AEC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
        goto L_80239AAC;
    // 0x80239AEC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
L_80239AF0:
    // 0x80239AF0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80239AF4: addiu       $a0, $a0, -0x3AA2
    ctx->r4 = ADD32(ctx->r4, -0X3AA2);
    // 0x80239AF8: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x80239AFC: bne         $v1, $v0, L_80239B08
    if (ctx->r3 != ctx->r2) {
        // 0x80239B00: addiu       $v0, $zero, -0x200
        ctx->r2 = ADD32(0, -0X200);
            goto L_80239B08;
    }
    // 0x80239B00: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x80239B04: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_80239B08:
    // 0x80239B08: jr          $ra
    // 0x80239B0C: nop

    TRACE_RETURN()
    return;
    // 0x80239B0C: nop

;}
RECOMP_FUNC void func_8022D80C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D80C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022D810: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022D814: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x8022D818: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x8022D81C: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x8022D820: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022D824: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022D828: lw          $v0, -0x18D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X18D0);
    // 0x8022D82C: jr          $ra
    // 0x8022D830: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022D830: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_802372D8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802372D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802372DC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802372E0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802372E4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x802372E8: addiu       $fp, $s3, 0x28
    ctx->r30 = ADD32(ctx->r19, 0X28);
    // 0x802372EC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802372F0: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x802372F4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802372F8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x802372FC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80237300: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80237304: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80237308: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023730C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80237310: lb          $a0, 0xF($s3)
    ctx->r4 = MEM_B(ctx->r19, 0XF);
    // 0x80237314: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x80237318: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x8023731C: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80237320: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80237324: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80237328: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023732C: addiu       $s5, $v0, 0x64
    ctx->r21 = ADD32(ctx->r2, 0X64);
    // 0x80237330: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80237334: sll         $a1, $v1, 16
    ctx->r5 = S32(ctx->r3 << 16);
    // 0x80237338: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x8023733C: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x80237340: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80237344: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x80237348: or          $s7, $a1, $v1
    ctx->r23 = ctx->r5 | ctx->r3;
L_8023734C:
    // 0x8023734C: andi        $s1, $s4, 0xFF
    ctx->r17 = ctx->r20 & 0XFF;
    // 0x80237350: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    // 0x80237354: addu        $s1, $s1, $fp
    ctx->r17 = ADD32(ctx->r17, ctx->r30);
    // 0x80237358: lbu         $s0, 0x1($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X1);
    // 0x8023735C: sll         $s0, $s0, 7
    ctx->r16 = S32(ctx->r16 << 7);
    // 0x80237360: jal         0x800324B4
    // 0x80237364: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80237364: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80237368: nop

    // 0x8023736C: mult        $v0, $s5
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80237370: mflo        $s2
    ctx->r18 = lo;
    // 0x80237374: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237378: nop

    // 0x8023737C: jal         0x80032498
    // 0x80237380: sra         $s2, $s2, 12
    ctx->r18 = S32(SIGNED(ctx->r18) >> 12);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80237380: sra         $s2, $s2, 12
    ctx->r18 = S32(SIGNED(ctx->r18) >> 12);
    after_1:
    // 0x80237384: nop

    // 0x80237388: mult        $v0, $s5
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023738C: mflo        $s0
    ctx->r16 = lo;
    // 0x80237390: lbu         $s1, 0x0($s1)
    ctx->r17 = MEM_BU(ctx->r17, 0X0);
    // 0x80237394: sll         $s1, $s1, 7
    ctx->r17 = S32(ctx->r17 << 7);
    // 0x80237398: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023739C: jal         0x80032498
    // 0x802373A0: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x802373A0: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    after_2:
    // 0x802373A4: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x802373A8: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802373AC: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802373B0: mflo        $v0
    ctx->r2 = lo;
    // 0x802373B4: lhu         $v1, 0x1C($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X1C);
    // 0x802373B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802373BC: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802373C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802373C4: jal         0x800324B4
    // 0x802373C8: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x802373C8: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x802373CC: nop

    // 0x802373D0: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802373D4: mflo        $v0
    ctx->r2 = lo;
    // 0x802373D8: lhu         $v1, 0x20($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X20);
    // 0x802373DC: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802373E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802373E4: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x802373E8: lhu         $v0, 0x1E($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1E);
    // 0x802373EC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x802373F0: jal         0x8003B878
    // 0x802373F4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_8003B878_16C78(rdram, ctx);
        goto after_4;
    // 0x802373F4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_4:
    // 0x802373F8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802373FC: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80237400: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80237404: or          $v0, $s6, $v0
    ctx->r2 = ctx->r22 | ctx->r2;
    // 0x80237408: sw          $s7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r23;
    // 0x8023740C: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x80237410: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x80237414: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x80237418: lui         $v0, 0x4E
    ctx->r2 = S32(0X4E << 16);
    // 0x8023741C: ori         $v0, $v0, 0x5F
    ctx->r2 = ctx->r2 | 0X5F;
    // 0x80237420: or          $v0, $s6, $v0
    ctx->r2 = ctx->r22 | ctx->r2;
    // 0x80237424: addiu       $a2, $zero, 0x1F40
    ctx->r6 = ADD32(0, 0X1F40);
    // 0x80237428: sw          $a2, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r6;
    // 0x8023742C: addiu       $a2, $zero, 0x1F5F
    ctx->r6 = ADD32(0, 0X1F5F);
    // 0x80237430: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
    // 0x80237434: sw          $a2, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r6;
    // 0x80237438: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x8023743C: sw          $a0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r4;
    // 0x80237440: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80237444: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80237448: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023744C: beq         $v1, $v0, L_80237460
    if (ctx->r3 == ctx->r2) {
        // 0x80237450: nop
    
            goto L_80237460;
    }
    // 0x80237450: nop

    // 0x80237454: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80237458: beq         $v1, $v0, L_8023746C
    if (ctx->r3 == ctx->r2) {
        // 0x8023745C: nop
    
            goto L_8023746C;
    }
    // 0x8023745C: nop

L_80237460:
    // 0x80237460: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x80237464: j           L_80237474
    // 0x80237468: addiu       $v0, $v0, 0x50
    ctx->r2 = ADD32(ctx->r2, 0X50);
        goto L_80237474;
    // 0x80237468: addiu       $v0, $v0, 0x50
    ctx->r2 = ADD32(ctx->r2, 0X50);
L_8023746C:
    // 0x8023746C: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x80237470: addiu       $v0, $v0, 0x82
    ctx->r2 = ADD32(ctx->r2, 0X82);
L_80237474:
    // 0x80237474: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x80237478: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8023747C: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x80237480: sltiu       $v0, $v0, 0xC
    ctx->r2 = ctx->r2 < 0XC ? 1 : 0;
    // 0x80237484: bne         $v0, $zero, L_8023734C
    if (ctx->r2 != 0) {
        // 0x80237488: sw          $zero, 0x20($a1)
        MEM_W(0X20, ctx->r5) = 0;
            goto L_8023734C;
    }
    // 0x80237488: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    // 0x8023748C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80237490: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80237494: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80237498: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8023749C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802374A0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802374A4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802374A8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802374AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802374B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802374B4: jr          $ra
    // 0x802374B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802374B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022FD10_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FD10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FD14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FD18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FD1C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022FD20: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022FD24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FD28: jal         0x8009A3B4
    // 0x8022FD2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022FD2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022FD30: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022FD34: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022FD38: jal         0x8009A3B4
    // 0x8022FD3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022FD3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022FD40: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022FD44: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022FD48: jal         0x8009A3B4
    // 0x8022FD4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022FD4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022FD50: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FD54: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FD58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FD5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FD60: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    // 0x8022FD64: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FD68: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FD6C: lw          $v0, -0x1580($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1580);
    // 0x8022FD70: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022FD74: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x8022FD78: jalr        $v0
    // 0x8022FD7C: addiu       $a2, $s0, 0x440
    ctx->r6 = ADD32(ctx->r16, 0X440);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022FD7C: addiu       $a2, $s0, 0x440
    ctx->r6 = ADD32(ctx->r16, 0X440);
    after_3:
    // 0x8022FD80: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FD84: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022FD88: beq         $a1, $v0, L_8022FDA4
    if (ctx->r5 == ctx->r2) {
        // 0x8022FD8C: nop
    
            goto L_8022FDA4;
    }
    // 0x8022FD8C: nop

    // 0x8022FD90: lb          $a2, 0xD($s0)
    ctx->r6 = MEM_B(ctx->r16, 0XD);
    // 0x8022FD94: jal         0x80050294
    // 0x8022FD98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022FD98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022FD9C: j           L_8022FDB0
    // 0x8022FDA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022FDB0;
    // 0x8022FDA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022FDA4:
    // 0x8022FDA4: jal         0x8005044C
    // 0x8022FDA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022FDA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022FDAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022FDB0:
    // 0x8022FDB0: jal         0x8023007C
    // 0x8022FDB4: addiu       $a1, $a0, 0x440
    ctx->r5 = ADD32(ctx->r4, 0X440);
    func_8023007C_ovl25(rdram, ctx);
        goto after_6;
    // 0x8022FDB4: addiu       $a1, $a0, 0x440
    ctx->r5 = ADD32(ctx->r4, 0X440);
    after_6:
    // 0x8022FDB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FDBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FDC0: jr          $ra
    // 0x8022FDC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FDC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235454_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235454: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x80235458: lhu         $a3, 0x44($a0)
    ctx->r7 = MEM_HU(ctx->r4, 0X44);
    // 0x8023545C: lhu         $v1, 0x16($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X16);
    // 0x80235460: lhu         $t0, 0x46($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X46);
    // 0x80235464: lhu         $a2, 0x18($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X18);
    // 0x80235468: lhu         $t1, 0x48($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X48);
    // 0x8023546C: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80235470: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80235474: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x80235478: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x8023547C: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x80235480: sh          $a2, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r6;
    // 0x80235484: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80235488: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x8023548C: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80235490: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x80235494: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235498: mfhi        $t2
    ctx->r10 = hi;
    // 0x8023549C: srl         $a2, $t2, 2
    ctx->r6 = S32(U32(ctx->r10) >> 2);
    // 0x802354A0: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x802354A4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802354A8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802354AC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802354B0: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x802354B4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802354B8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802354BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802354C0: lbu         $v0, -0x10F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X10F8);
    // 0x802354C4: sb          $v0, 0x96($a0)
    MEM_B(0X96, ctx->r4) = ctx->r2;
    // 0x802354C8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802354CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802354D0: lbu         $v0, -0x10F7($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X10F7);
    // 0x802354D4: sb          $v0, 0x97($a0)
    MEM_B(0X97, ctx->r4) = ctx->r2;
    // 0x802354D8: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x802354DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802354E0: jr          $ra
    // 0x802354E4: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802354E4: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80226840_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226840: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80226844: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80226848: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8022684C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226850: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x80226854: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80226858: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8022685C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226860: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80226864: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80226868: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x8022686C: addiu       $s6, $s6, 0xC58
    ctx->r22 = ADD32(ctx->r22, 0XC58);
    // 0x80226870: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80226874: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226878: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022687C: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
L_80226880:
    // 0x80226880: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80226884: bne         $v0, $zero, L_80226890
    if (ctx->r2 != 0) {
        // 0x80226888: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226890;
    }
    // 0x80226888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022688C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80226890:
    // 0x80226890: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80226894: andi        $v1, $s2, 0xFF
    ctx->r3 = ctx->r18 & 0XFF;
    // 0x80226898: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022689C: beq         $v0, $zero, L_802268FC
    if (ctx->r2 == 0) {
        // 0x802268A0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802268FC;
    }
    // 0x802268A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802268A4: addu        $v0, $v0, $s6
    gpr jr_addend_802268AC = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x802268A8: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802268AC: jr          $v0
    // 0x802268B0: nop

    switch (jr_addend_802268AC >> 2) {
        case 0: goto L_802268B4; break;
        case 1: goto L_802268C0; break;
        case 2: goto L_802268CC; break;
        case 3: goto L_802268D8; break;
        case 4: goto L_802268E4; break;
        case 5: goto L_802268F0; break;
        default: switch_error(__func__, 0x802268AC, 0x80240C58);
    }
    // 0x802268B0: nop

L_802268B4:
    // 0x802268B4: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x802268B8: j           L_802268FC
    // 0x802268BC: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
        goto L_802268FC;
    // 0x802268BC: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
L_802268C0:
    // 0x802268C0: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x802268C4: j           L_802268F8
    // 0x802268C8: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_802268F8;
    // 0x802268C8: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_802268CC:
    // 0x802268CC: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x802268D0: j           L_802268F8
    // 0x802268D4: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
        goto L_802268F8;
    // 0x802268D4: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_802268D8:
    // 0x802268D8: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x802268DC: j           L_802268FC
    // 0x802268E0: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
        goto L_802268FC;
    // 0x802268E0: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
L_802268E4:
    // 0x802268E4: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x802268E8: j           L_802268F8
    // 0x802268EC: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_802268F8;
    // 0x802268EC: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_802268F0:
    // 0x802268F0: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x802268F4: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_802268F8:
    // 0x802268F8: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
L_802268FC:
    // 0x802268FC: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x80226900: beq         $v0, $zero, L_80226964
    if (ctx->r2 == 0) {
        // 0x80226904: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_80226964;
    }
    // 0x80226904: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x80226908: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022690C: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x80226910: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80226914: beq         $v0, $zero, L_80226944
    if (ctx->r2 == 0) {
        // 0x80226918: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80226944;
    }
    // 0x80226918: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022691C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80226920: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_80226924:
    // 0x80226924: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x80226928: jal         0x80226C60
    // 0x8022692C: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_80226C60_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022692C: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x80226930: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80226934: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x80226938: sltu        $v0, $v0, $s1
    ctx->r2 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x8022693C: bne         $v0, $zero, L_80226924
    if (ctx->r2 != 0) {
        // 0x80226940: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80226924;
    }
    // 0x80226940: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_80226944:
    // 0x80226944: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x80226948: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x8022694C: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x80226950: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x80226954: beq         $v0, $zero, L_802269C0
    if (ctx->r2 == 0) {
        // 0x80226958: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802269C0;
    }
    // 0x80226958: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022695C: j           L_802269C0
    // 0x80226960: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
        goto L_802269C0;
    // 0x80226960: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_80226964:
    // 0x80226964: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x80226968: addu        $v1, $s3, $a0
    ctx->r3 = ADD32(ctx->r19, ctx->r4);
    // 0x8022696C: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x80226970: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x80226974: bnel        $v0, $zero, L_802269C4
    if (ctx->r2 != 0) {
        // 0x80226978: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802269C4;
    }
    goto skip_0;
    // 0x80226978: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x8022697C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226980: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x80226984: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80226988: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    // 0x8022698C: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x80226990: addu        $v1, $s3, $v0
    ctx->r3 = ADD32(ctx->r19, ctx->r2);
    // 0x80226994: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_80226998:
    // 0x80226998: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022699C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802269A0: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x802269A4: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x802269A8: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x802269AC: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x802269B0: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x802269B4: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x802269B8: bne         $v0, $zero, L_80226998
    if (ctx->r2 != 0) {
        // 0x802269BC: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_80226998;
    }
    // 0x802269BC: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_802269C0:
    // 0x802269C0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_802269C4:
    // 0x802269C4: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x802269C8: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x802269CC: bne         $v0, $zero, L_80226880
    if (ctx->r2 != 0) {
        // 0x802269D0: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_80226880;
    }
    // 0x802269D0: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x802269D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802269D8: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x802269DC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802269E0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802269E4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802269E8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802269EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802269F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802269F4: jr          $ra
    // 0x802269F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802269F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80226058_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226058: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022605C: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80226060: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80226064: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80226068: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022606C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80226070: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226074: lhu         $v0, -0x2400($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2400);
    // 0x80226078: lhu         $v1, 0x16($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X16);
    // 0x8022607C: lb          $a0, 0xC($a1)
    ctx->r4 = MEM_B(ctx->r5, 0XC);
    // 0x80226080: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226084: sra         $v0, $v0, 26
    ctx->r2 = S32(SIGNED(ctx->r2) >> 26);
    // 0x80226088: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022608C: sh          $v1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r3;
    // 0x80226090: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80226094: addiu       $v1, $v1, -0x2400
    ctx->r3 = ADD32(ctx->r3, -0X2400);
    // 0x80226098: beq         $a0, $zero, L_802260CC
    if (ctx->r4 == 0) {
        // 0x8022609C: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_802260CC;
    }
    // 0x8022609C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802260A0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802260A4: lw          $v0, -0x3A40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A40);
    // 0x802260A8: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802260AC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802260B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802260B4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802260B8: lhu         $v1, 0x58($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X58);
    // 0x802260BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802260C0: sra         $v0, $v0, 26
    ctx->r2 = S32(SIGNED(ctx->r2) >> 26);
    // 0x802260C4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802260C8: sh          $v1, 0x58($a1)
    MEM_H(0X58, ctx->r5) = ctx->r3;
L_802260CC:
    // 0x802260CC: jr          $ra
    // 0x802260D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802260D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8023ABF0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023ABF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023ABF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023ABF8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8023ABFC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023AC00: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AC04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023AC08: lw          $v0, -0x460($at)
    ctx->r2 = MEM_W(ctx->r1, -0X460);
    // 0x8023AC0C: jalr        $v0
    // 0x8023AC10: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023AC10: nop

    after_0:
    // 0x8023AC14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023AC18: jr          $ra
    // 0x8023AC1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AC1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B2A8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B2A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022B2AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022B2B0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022B2B4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022B2B8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022B2BC: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022B2C0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8022B2C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022B2C8: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B2CC: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x8022B2D0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B2D4: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022B2D8: beq         $a0, $v0, L_8022B2F4
    if (ctx->r4 == ctx->r2) {
        // 0x8022B2DC: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022B2F4;
    }
    // 0x8022B2DC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022B2E0: bne         $a0, $v0, L_8022B2F0
    if (ctx->r4 != ctx->r2) {
        // 0x8022B2E4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022B2F0;
    }
    // 0x8022B2E4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022B2E8: j           L_8022B2F4
    // 0x8022B2EC: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_8022B2F4;
    // 0x8022B2EC: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8022B2F0:
    // 0x8022B2F0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022B2F4:
    // 0x8022B2F4: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022B2F8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8022B2FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B300: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022B304: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022B308: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022B30C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022B310: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022B314: beq         $a0, $v1, L_8022B33C
    if (ctx->r4 == ctx->r3) {
        // 0x8022B318: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8022B33C;
    }
    // 0x8022B318: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022B31C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022B320: jal         0x8003B85C
    // 0x8022B324: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022B324: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8022B328: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022B32C: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8022B330: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022B334: jal         0x8003B840
    // 0x8022B338: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022B338: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022B33C:
    // 0x8022B33C: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x8022B340: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022B344: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8022B348: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8022B34C: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022B350: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x8022B354: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022B358: beq         $v1, $v0, L_8022B374
    if (ctx->r3 == ctx->r2) {
        // 0x8022B35C: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022B374;
    }
    // 0x8022B35C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022B360: bne         $v1, $v0, L_8022B370
    if (ctx->r3 != ctx->r2) {
        // 0x8022B364: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022B370;
    }
    // 0x8022B364: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022B368: j           L_8022B374
    // 0x8022B36C: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_8022B374;
    // 0x8022B36C: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_8022B370:
    // 0x8022B370: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_8022B374:
    // 0x8022B374: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x8022B378: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022B37C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B380: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022B384: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x8022B388: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8022B38C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022B390: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022B394: beq         $a0, $v1, L_8022B3BC
    if (ctx->r4 == ctx->r3) {
        // 0x8022B398: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8022B3BC;
    }
    // 0x8022B398: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022B39C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022B3A0: jal         0x8003B85C
    // 0x8022B3A4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022B3A4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x8022B3A8: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022B3AC: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022B3B0: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x8022B3B4: jal         0x8003B840
    // 0x8022B3B8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022B3B8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_8022B3BC:
    // 0x8022B3BC: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022B3C0: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x8022B3C4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022B3C8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022B3CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022B3D0: jr          $ra
    // 0x8022B3D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022B3D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022B3D8: nop

    // 0x8022B3DC: nop

;}
RECOMP_FUNC void func_8023723C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023723C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237240: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237244: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023724C: jal         0x80032498
    // 0x80237250: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80032498_D898(rdram, ctx);
        goto after_0;
    // 0x80237250: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x80237254: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80237258: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8023725C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237260: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x80237264: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80237268: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8023726C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237270: jal         0x800324B4
    // 0x80237274: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80237274: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    after_1:
    // 0x80237278: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8023727C: lbu         $a2, 0xF($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XF);
    // 0x80237280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237284: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80237288: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023728C: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x80237290: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80237294: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80237298: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8023729C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x802372A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802372A4: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x802372A8: sb          $a1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r5;
    // 0x802372AC: jal         0x802372D8
    // 0x802372B0: sb          $a2, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r6;
    func_802372D8_ovl25(rdram, ctx);
        goto after_2;
    // 0x802372B0: sb          $a2, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r6;
    after_2:
    // 0x802372B4: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x802372B8: bne         $v0, $zero, L_802372C8
    if (ctx->r2 != 0) {
        // 0x802372BC: nop
    
            goto L_802372C8;
    }
    // 0x802372BC: nop

    // 0x802372C0: jal         0x8004F5C4
    // 0x802372C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x802372C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_802372C8:
    // 0x802372C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802372CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802372D0: jr          $ra
    // 0x802372D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802372D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023327C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023327C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80233280: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80233284: slti        $v0, $v1, 0x64
    ctx->r2 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x80233288: beq         $v0, $zero, L_802332A0
    if (ctx->r2 == 0) {
        // 0x8023328C: slti        $v0, $v1, 0x8C
        ctx->r2 = SIGNED(ctx->r3) < 0X8C ? 1 : 0;
            goto L_802332A0;
    }
    // 0x8023328C: slti        $v0, $v1, 0x8C
    ctx->r2 = SIGNED(ctx->r3) < 0X8C ? 1 : 0;
    // 0x80233290: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x80233294: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x80233298: j           L_802332F4
    // 0x8023329C: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
        goto L_802332F4;
    // 0x8023329C: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
L_802332A0:
    // 0x802332A0: beq         $v0, $zero, L_802332C4
    if (ctx->r2 == 0) {
        // 0x802332A4: nop
    
            goto L_802332C4;
    }
    // 0x802332A4: nop

    // 0x802332A8: lhu         $v0, 0x58($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X58);
    // 0x802332AC: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x802332B0: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x802332B4: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x802332B8: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
    // 0x802332BC: j           L_802332F4
    // 0x802332C0: sh          $v1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r3;
        goto L_802332F4;
    // 0x802332C0: sh          $v1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r3;
L_802332C4:
    // 0x802332C4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802332C8: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x802332CC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802332D0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802332D4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802332D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802332DC: lhu         $v0, -0x2400($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2400);
    // 0x802332E0: lhu         $v1, 0x16($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X16);
    // 0x802332E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802332E8: sra         $v0, $v0, 27
    ctx->r2 = S32(SIGNED(ctx->r2) >> 27);
    // 0x802332EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802332F0: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
L_802332F4:
    // 0x802332F4: jr          $ra
    // 0x802332F8: nop

    TRACE_RETURN()
    return;
    // 0x802332F8: nop

;}
RECOMP_FUNC void func_802331B8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802331B8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802331BC: lb          $v1, 0xC($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC);
    // 0x802331C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802331C4: bne         $v1, $v0, L_80233210
    if (ctx->r3 != ctx->r2) {
        // 0x802331C8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233210;
    }
    // 0x802331C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802331CC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802331D0: lw          $v0, -0x3A40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A40);
    // 0x802331D4: lui         $v1, 0x6666
    ctx->r3 = S32(0X6666 << 16);
    // 0x802331D8: ori         $v1, $v1, 0x6667
    ctx->r3 = ctx->r3 | 0X6667;
    // 0x802331DC: addiu       $v0, $v0, -0x186
    ctx->r2 = ADD32(ctx->r2, -0X186);
    // 0x802331E0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802331E4: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x802331E8: addiu       $a0, $a0, 0x6E
    ctx->r4 = ADD32(ctx->r4, 0X6E);
    // 0x802331EC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x802331F0: mfhi        $a2
    ctx->r6 = hi;
    // 0x802331F4: sra         $v1, $a2, 3
    ctx->r3 = S32(SIGNED(ctx->r6) >> 3);
    // 0x802331F8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802331FC: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80233200: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80233204: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80233208: j           L_80233230
    // 0x8023320C: sh          $a0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r4;
        goto L_80233230;
    // 0x8023320C: sh          $a0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r4;
L_80233210:
    // 0x80233210: bne         $v1, $v0, L_80233230
    if (ctx->r3 != ctx->r2) {
        // 0x80233214: nop
    
            goto L_80233230;
    }
    // 0x80233214: nop

    // 0x80233218: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x8023321C: lhu         $v1, 0x58($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X58);
    // 0x80233220: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80233224: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80233228: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x8023322C: sh          $v1, 0x58($a1)
    MEM_H(0X58, ctx->r5) = ctx->r3;
L_80233230:
    // 0x80233230: jr          $ra
    // 0x80233234: nop

    TRACE_RETURN()
    return;
    // 0x80233234: nop

;}
RECOMP_FUNC void func_802397AC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802397AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802397B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802397B4: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x802397B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802397BC: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x802397C0: srav        $v0, $v1, $a2
    ctx->r2 = S32(SIGNED(ctx->r3) >> (ctx->r6 & 31));
L_802397C4:
    // 0x802397C4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802397C8: beql        $v0, $zero, L_802397D0
    if (ctx->r2 == 0) {
        // 0x802397CC: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_802397D0;
    }
    goto skip_0;
    // 0x802397CC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_0:
L_802397D0:
    // 0x802397D0: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x802397D4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x802397D8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802397DC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802397E0: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x802397E4: bne         $v0, $zero, L_802397C4
    if (ctx->r2 != 0) {
        // 0x802397E8: srav        $v0, $v1, $a2
        ctx->r2 = S32(SIGNED(ctx->r3) >> (ctx->r6 & 31));
            goto L_802397C4;
    }
    // 0x802397E8: srav        $v0, $v1, $a2
    ctx->r2 = S32(SIGNED(ctx->r3) >> (ctx->r6 & 31));
    // 0x802397EC: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
    // 0x802397F0: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802397F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802397F8: beq         $v1, $v0, L_80239848
    if (ctx->r3 == ctx->r2) {
        // 0x802397FC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80239848;
    }
    // 0x802397FC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80239800: beql        $v0, $zero, L_80239818
    if (ctx->r2 == 0) {
        // 0x80239804: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80239818;
    }
    goto skip_1;
    // 0x80239804: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x80239808: beql        $v1, $zero, L_80239828
    if (ctx->r3 == 0) {
        // 0x8023980C: addiu       $a0, $zero, 0x183
        ctx->r4 = ADD32(0, 0X183);
            goto L_80239828;
    }
    goto skip_2;
    // 0x8023980C: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    skip_2:
    // 0x80239810: j           L_80239948
    // 0x80239814: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80239948;
    // 0x80239814: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80239818:
    // 0x80239818: beq         $v1, $v0, L_802398C4
    if (ctx->r3 == ctx->r2) {
        // 0x8023981C: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_802398C4;
    }
    // 0x8023981C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239820: j           L_8023994C
    // 0x80239824: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
        goto L_8023994C;
    // 0x80239824: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_80239828:
    // 0x80239828: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023982C: jal         0x8002A2F8
    // 0x80239830: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80239830: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80239834: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80239838: lw          $v1, 0x3234($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3234);
    // 0x8023983C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239840: j           L_802399B8
    // 0x80239844: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
        goto L_802399B8;
    // 0x80239844: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
L_80239848:
    // 0x80239848: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023984C: lui         $t1, 0x8024
    ctx->r9 = S32(0X8024 << 16);
    // 0x80239850: addiu       $t1, $t1, 0x3240
    ctx->r9 = ADD32(ctx->r9, 0X3240);
    // 0x80239854: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80239858:
    // 0x80239858: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x8023985C: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    // 0x80239860: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80239864: srav        $v1, $v1, $v0
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r2 & 31));
    // 0x80239868: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8023986C: bnel        $v1, $zero, L_802398A4
    if (ctx->r3 != 0) {
        // 0x80239870: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_802398A4;
    }
    goto skip_3;
    // 0x80239870: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    skip_3:
    // 0x80239874: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239878: addu        $v1, $v0, $t1
    ctx->r3 = ADD32(ctx->r2, ctx->r9);
    // 0x8023987C: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x80239880: lb          $v0, 0xF($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XF);
    // 0x80239884: bne         $v0, $zero, L_802398A4
    if (ctx->r2 != 0) {
        // 0x80239888: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_802398A4;
    }
    // 0x80239888: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x8023988C: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x80239890: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80239894: sb          $a3, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r7;
    // 0x80239898: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8023989C: sb          $a3, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r7;
    // 0x802398A0: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
L_802398A4:
    // 0x802398A4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x802398A8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802398AC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802398B0: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x802398B4: bne         $v0, $zero, L_80239858
    if (ctx->r2 != 0) {
        // 0x802398B8: nop
    
            goto L_80239858;
    }
    // 0x802398B8: nop

    // 0x802398BC: j           L_802399A8
    // 0x802398C0: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
        goto L_802399A8;
    // 0x802398C0: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
L_802398C4:
    // 0x802398C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802398C8: lui         $t3, 0x8024
    ctx->r11 = S32(0X8024 << 16);
    // 0x802398CC: addiu       $t3, $t3, 0x3240
    ctx->r11 = ADD32(ctx->r11, 0X3240);
    // 0x802398D0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x802398D4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_802398D8:
    // 0x802398D8: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x802398DC: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    // 0x802398E0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802398E4: srav        $v1, $v1, $v0
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r2 & 31));
    // 0x802398E8: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x802398EC: bnel        $v1, $zero, L_80239928
    if (ctx->r3 != 0) {
        // 0x802398F0: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_80239928;
    }
    goto skip_4;
    // 0x802398F0: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    skip_4:
    // 0x802398F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802398F8: addu        $v1, $v0, $t3
    ctx->r3 = ADD32(ctx->r2, ctx->r11);
    // 0x802398FC: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x80239900: lb          $v0, 0xF($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XF);
    // 0x80239904: bne         $v0, $zero, L_80239928
    if (ctx->r2 != 0) {
        // 0x80239908: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_80239928;
    }
    // 0x80239908: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x8023990C: sb          $a3, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r7;
    // 0x80239910: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80239914: sb          $t2, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r10;
    // 0x80239918: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8023991C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80239920: sb          $t1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r9;
    // 0x80239924: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
L_80239928:
    // 0x80239928: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8023992C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80239930: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80239934: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x80239938: bne         $v0, $zero, L_802398D8
    if (ctx->r2 != 0) {
        // 0x8023993C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802398D8;
    }
    // 0x8023993C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80239940: j           L_802399A8
    // 0x80239944: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
        goto L_802399A8;
    // 0x80239944: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
L_80239948:
    // 0x80239948: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_8023994C:
    // 0x8023994C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80239950: addiu       $a1, $a1, 0x3240
    ctx->r5 = ADD32(ctx->r5, 0X3240);
L_80239954:
    // 0x80239954: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x80239958: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    // 0x8023995C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80239960: srav        $v1, $v1, $v0
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r2 & 31));
    // 0x80239964: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80239968: bnel        $v1, $zero, L_80239990
    if (ctx->r3 != 0) {
        // 0x8023996C: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_80239990;
    }
    goto skip_5;
    // 0x8023996C: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    skip_5:
    // 0x80239970: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239974: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80239978: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8023997C: sb          $a3, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r7;
    // 0x80239980: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80239984: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80239988: sb          $t0, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r8;
    // 0x8023998C: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
L_80239990:
    // 0x80239990: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80239994: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80239998: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023999C: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x802399A0: bne         $v0, $zero, L_80239954
    if (ctx->r2 != 0) {
        // 0x802399A4: nop
    
            goto L_80239954;
    }
    // 0x802399A4: nop

L_802399A8:
    // 0x802399A8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802399AC: lw          $v1, 0x3234($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3234);
    // 0x802399B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802399B4: sb          $t0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r8;
L_802399B8:
    // 0x802399B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802399BC: jr          $ra
    // 0x802399C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802399C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802356B4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802356B4: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x802356B8: lw          $v0, 0xD0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD0);
    // 0x802356BC: lhu         $v1, 0x14($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X14);
    // 0x802356C0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802356C4: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x802356C8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802356CC: sh          $v0, 0x10($a3)
    MEM_H(0X10, ctx->r7) = ctx->r2;
    // 0x802356D0: lw          $v0, 0xD0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD0);
    // 0x802356D4: lhu         $v1, 0x16($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X16);
    // 0x802356D8: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x802356DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802356E0: sh          $v0, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r2;
    // 0x802356E4: lw          $v0, 0xD0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD0);
    // 0x802356E8: lhu         $v1, 0x18($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X18);
    // 0x802356EC: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x802356F0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802356F4: sh          $v0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r2;
    // 0x802356F8: lbu         $v1, 0x9($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X9);
    // 0x802356FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235700: beq         $v1, $v0, L_802357F0
    if (ctx->r3 == ctx->r2) {
        // 0x80235704: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_802357F0;
    }
    // 0x80235704: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80235708: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023570C: beql        $v0, $zero, L_80235724
    if (ctx->r2 == 0) {
        // 0x80235710: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235724;
    }
    goto skip_0;
    // 0x80235710: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80235714: beq         $v1, $zero, L_8023573C
    if (ctx->r3 == 0) {
        // 0x80235718: nop
    
            goto L_8023573C;
    }
    // 0x80235718: nop

    // 0x8023571C: j           L_80235AE0
    // 0x80235720: nop

        goto L_80235AE0;
    // 0x80235720: nop

L_80235724:
    // 0x80235724: beq         $v1, $v0, L_80235884
    if (ctx->r3 == ctx->r2) {
        // 0x80235728: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80235884;
    }
    // 0x80235728: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023572C: beq         $v1, $v0, L_80235954
    if (ctx->r3 == ctx->r2) {
        // 0x80235730: nop
    
            goto L_80235954;
    }
    // 0x80235730: nop

    // 0x80235734: j           L_80235AE0
    // 0x80235738: nop

        goto L_80235AE0;
    // 0x80235738: nop

L_8023573C:
    // 0x8023573C: lh          $a0, 0x4($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X4);
    // 0x80235740: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x80235744: beql        $v0, $zero, L_802357D0
    if (ctx->r2 == 0) {
        // 0x80235748: sh          $zero, 0x4($a3)
        MEM_H(0X4, ctx->r7) = 0;
            goto L_802357D0;
    }
    goto skip_1;
    // 0x80235748: sh          $zero, 0x4($a3)
    MEM_H(0X4, ctx->r7) = 0;
    skip_1:
    // 0x8023574C: lh          $v1, 0x4C($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X4C);
    // 0x80235750: bltzl       $v1, L_80235758
    if (SIGNED(ctx->r3) < 0) {
        // 0x80235754: addiu       $v1, $v1, 0xF
        ctx->r3 = ADD32(ctx->r3, 0XF);
            goto L_80235758;
    }
    goto skip_2;
    // 0x80235754: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
    skip_2:
L_80235758:
    // 0x80235758: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8023575C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80235760: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80235764: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235768: mflo        $v1
    ctx->r3 = lo;
    // 0x8023576C: lh          $a0, 0x4E($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X4E);
    // 0x80235770: nop

    // 0x80235774: bgez        $a0, L_80235780
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80235778: sh          $v1, 0x44($a2)
        MEM_H(0X44, ctx->r6) = ctx->r3;
            goto L_80235780;
    }
    // 0x80235778: sh          $v1, 0x44($a2)
    MEM_H(0X44, ctx->r6) = ctx->r3;
    // 0x8023577C: addiu       $a0, $a0, 0xF
    ctx->r4 = ADD32(ctx->r4, 0XF);
L_80235780:
    // 0x80235780: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x80235784: sra         $v1, $a0, 4
    ctx->r3 = S32(SIGNED(ctx->r4) >> 4);
    // 0x80235788: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x8023578C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235790: mflo        $v1
    ctx->r3 = lo;
    // 0x80235794: lh          $a0, 0x50($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X50);
    // 0x80235798: nop

    // 0x8023579C: bgez        $a0, L_802357A8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802357A0: sh          $v1, 0x46($a2)
        MEM_H(0X46, ctx->r6) = ctx->r3;
            goto L_802357A8;
    }
    // 0x802357A0: sh          $v1, 0x46($a2)
    MEM_H(0X46, ctx->r6) = ctx->r3;
    // 0x802357A4: addiu       $a0, $a0, 0xF
    ctx->r4 = ADD32(ctx->r4, 0XF);
L_802357A8:
    // 0x802357A8: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x802357AC: sra         $v1, $a0, 4
    ctx->r3 = S32(SIGNED(ctx->r4) >> 4);
    // 0x802357B0: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x802357B4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802357B8: mflo        $v1
    ctx->r3 = lo;
    // 0x802357BC: sh          $v1, 0x48($a2)
    MEM_H(0X48, ctx->r6) = ctx->r3;
    // 0x802357C0: lhu         $v0, 0x4($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X4);
    // 0x802357C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802357C8: j           L_80235AE0
    // 0x802357CC: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
        goto L_80235AE0;
    // 0x802357CC: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
L_802357D0:
    // 0x802357D0: lbu         $v0, 0x9($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X9);
    // 0x802357D4: sh          $zero, 0x44($a2)
    MEM_H(0X44, ctx->r6) = 0;
    // 0x802357D8: sh          $zero, 0x46($a2)
    MEM_H(0X46, ctx->r6) = 0;
    // 0x802357DC: sh          $zero, 0x48($a2)
    MEM_H(0X48, ctx->r6) = 0;
    // 0x802357E0: sh          $zero, 0x4C($a2)
    MEM_H(0X4C, ctx->r6) = 0;
    // 0x802357E4: sh          $zero, 0x4E($a2)
    MEM_H(0X4E, ctx->r6) = 0;
    // 0x802357E8: j           L_80235948
    // 0x802357EC: sh          $zero, 0x50($a2)
    MEM_H(0X50, ctx->r6) = 0;
        goto L_80235948;
    // 0x802357EC: sh          $zero, 0x50($a2)
    MEM_H(0X50, ctx->r6) = 0;
L_802357F0:
    // 0x802357F0: lhu         $v0, 0x4($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X4);
    // 0x802357F4: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802357F8: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802357FC: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x80235800: beq         $v0, $zero, L_80235860
    if (ctx->r2 == 0) {
        // 0x80235804: sra         $v1, $v1, 18
        ctx->r3 = S32(SIGNED(ctx->r3) >> 18);
            goto L_80235860;
    }
    // 0x80235804: sra         $v1, $v1, 18
    ctx->r3 = S32(SIGNED(ctx->r3) >> 18);
    // 0x80235808: sltiu       $v0, $v1, 0xF
    ctx->r2 = ctx->r3 < 0XF ? 1 : 0;
    // 0x8023580C: beq         $v0, $zero, L_80235840
    if (ctx->r2 == 0) {
        // 0x80235810: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80235840;
    }
    // 0x80235810: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80235814: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235818: addu        $at, $at, $v0
    gpr jr_addend_80235820 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023581C: lw          $v0, 0x1030($at)
    ctx->r2 = ADD32(ctx->r1, 0X1030);
    // 0x80235820: jr          $v0
    // 0x80235824: nop

    switch (jr_addend_80235820 >> 2) {
        case 0: goto L_80235838; break;
        case 1: goto L_80235840; break;
        case 2: goto L_80235830; break;
        case 3: goto L_80235840; break;
        case 4: goto L_80235840; break;
        case 5: goto L_80235840; break;
        case 6: goto L_80235828; break;
        case 7: goto L_80235840; break;
        case 8: goto L_80235840; break;
        case 9: goto L_80235840; break;
        case 10: goto L_80235830; break;
        case 11: goto L_80235840; break;
        case 12: goto L_80235840; break;
        case 13: goto L_80235840; break;
        case 14: goto L_80235838; break;
        default: switch_error(__func__, 0x80235820, 0x80241030);
    }
    // 0x80235824: nop

L_80235828:
    // 0x80235828: j           L_8023583C
    // 0x8023582C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8023583C;
    // 0x8023582C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80235830:
    // 0x80235830: j           L_80235840
    // 0x80235834: sh          $zero, 0x4E($a2)
    MEM_H(0X4E, ctx->r6) = 0;
        goto L_80235840;
    // 0x80235834: sh          $zero, 0x4E($a2)
    MEM_H(0X4E, ctx->r6) = 0;
L_80235838:
    // 0x80235838: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023583C:
    // 0x8023583C: sh          $v0, 0x4E($a2)
    MEM_H(0X4E, ctx->r6) = ctx->r2;
L_80235840:
    // 0x80235840: lhu         $v0, 0x4($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X4);
    // 0x80235844: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235848: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
    // 0x8023584C: lhu         $v0, 0x46($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X46);
    // 0x80235850: lhu         $v1, 0x4E($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X4E);
    // 0x80235854: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235858: j           L_80235AE0
    // 0x8023585C: sh          $v0, 0x46($a2)
    MEM_H(0X46, ctx->r6) = ctx->r2;
        goto L_80235AE0;
    // 0x8023585C: sh          $v0, 0x46($a2)
    MEM_H(0X46, ctx->r6) = ctx->r2;
L_80235860:
    // 0x80235860: sh          $zero, 0x4($a3)
    MEM_H(0X4, ctx->r7) = 0;
    // 0x80235864: lbu         $v0, 0x9($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X9);
    // 0x80235868: sh          $zero, 0x44($a2)
    MEM_H(0X44, ctx->r6) = 0;
    // 0x8023586C: sh          $zero, 0x46($a2)
    MEM_H(0X46, ctx->r6) = 0;
    // 0x80235870: sh          $zero, 0x48($a2)
    MEM_H(0X48, ctx->r6) = 0;
    // 0x80235874: sh          $zero, 0x4C($a2)
    MEM_H(0X4C, ctx->r6) = 0;
    // 0x80235878: sh          $zero, 0x4E($a2)
    MEM_H(0X4E, ctx->r6) = 0;
    // 0x8023587C: j           L_80235948
    // 0x80235880: sh          $zero, 0x50($a2)
    MEM_H(0X50, ctx->r6) = 0;
        goto L_80235948;
    // 0x80235880: sh          $zero, 0x50($a2)
    MEM_H(0X50, ctx->r6) = 0;
L_80235884:
    // 0x80235884: lhu         $v0, 0x10($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X10);
    // 0x80235888: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023588C: blez        $v0, L_8023589C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80235890: sra         $v1, $v0, 22
        ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
            goto L_8023589C;
    }
    // 0x80235890: sra         $v1, $v0, 22
    ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80235894: j           L_802358A0
    // 0x80235898: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
        goto L_802358A0;
    // 0x80235898: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
L_8023589C:
    // 0x8023589C: addiu       $v0, $v1, -0x4
    ctx->r2 = ADD32(ctx->r3, -0X4);
L_802358A0:
    // 0x802358A0: sh          $v0, 0x44($a2)
    MEM_H(0X44, ctx->r6) = ctx->r2;
    // 0x802358A4: lhu         $v0, 0x12($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X12);
    // 0x802358A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802358AC: blez        $v0, L_802358BC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802358B0: sra         $v1, $v0, 22
        ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
            goto L_802358BC;
    }
    // 0x802358B0: sra         $v1, $v0, 22
    ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
    // 0x802358B4: j           L_802358C0
    // 0x802358B8: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
        goto L_802358C0;
    // 0x802358B8: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
L_802358BC:
    // 0x802358BC: addiu       $v0, $v1, -0x4
    ctx->r2 = ADD32(ctx->r3, -0X4);
L_802358C0:
    // 0x802358C0: sh          $v0, 0x46($a2)
    MEM_H(0X46, ctx->r6) = ctx->r2;
    // 0x802358C4: lhu         $v0, 0x14($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X14);
    // 0x802358C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802358CC: blez        $v0, L_802358DC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802358D0: sra         $v1, $v0, 22
        ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
            goto L_802358DC;
    }
    // 0x802358D0: sra         $v1, $v0, 22
    ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
    // 0x802358D4: j           L_802358E0
    // 0x802358D8: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
        goto L_802358E0;
    // 0x802358D8: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
L_802358DC:
    // 0x802358DC: addiu       $v0, $v1, -0x4
    ctx->r2 = ADD32(ctx->r3, -0X4);
L_802358E0:
    // 0x802358E0: sh          $v0, 0x48($a2)
    MEM_H(0X48, ctx->r6) = ctx->r2;
    // 0x802358E4: lh          $v0, 0x10($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X10);
    // 0x802358E8: bltzl       $v0, L_802358F0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802358EC: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_802358F0;
    }
    goto skip_3;
    // 0x802358EC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_3:
L_802358F0:
    // 0x802358F0: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x802358F4: bnel        $v0, $zero, L_80235944
    if (ctx->r2 != 0) {
        // 0x802358F8: sh          $zero, 0x4($a3)
        MEM_H(0X4, ctx->r7) = 0;
            goto L_80235944;
    }
    goto skip_4;
    // 0x802358F8: sh          $zero, 0x4($a3)
    MEM_H(0X4, ctx->r7) = 0;
    skip_4:
    // 0x802358FC: lh          $v0, 0x12($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X12);
    // 0x80235900: bltzl       $v0, L_80235908
    if (SIGNED(ctx->r2) < 0) {
        // 0x80235904: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80235908;
    }
    goto skip_5;
    // 0x80235904: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_5:
L_80235908:
    // 0x80235908: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x8023590C: bnel        $v0, $zero, L_80235944
    if (ctx->r2 != 0) {
        // 0x80235910: sh          $zero, 0x4($a3)
        MEM_H(0X4, ctx->r7) = 0;
            goto L_80235944;
    }
    goto skip_6;
    // 0x80235910: sh          $zero, 0x4($a3)
    MEM_H(0X4, ctx->r7) = 0;
    skip_6:
    // 0x80235914: lh          $v0, 0x14($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X14);
    // 0x80235918: bltzl       $v0, L_80235934
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023591C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80235934;
    }
    goto skip_7;
    // 0x8023591C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_7:
    // 0x80235920: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80235924: bnel        $v0, $zero, L_80235944
    if (ctx->r2 != 0) {
        // 0x80235928: sh          $zero, 0x4($a3)
        MEM_H(0X4, ctx->r7) = 0;
            goto L_80235944;
    }
    goto skip_8;
    // 0x80235928: sh          $zero, 0x4($a3)
    MEM_H(0X4, ctx->r7) = 0;
    skip_8:
    // 0x8023592C: j           L_80235AE0
    // 0x80235930: nop

        goto L_80235AE0;
    // 0x80235930: nop

L_80235934:
    // 0x80235934: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80235938: beq         $v0, $zero, L_80235AE0
    if (ctx->r2 == 0) {
        // 0x8023593C: nop
    
            goto L_80235AE0;
    }
    // 0x8023593C: nop

    // 0x80235940: sh          $zero, 0x4($a3)
    MEM_H(0X4, ctx->r7) = 0;
L_80235944:
    // 0x80235944: lbu         $v0, 0x9($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X9);
L_80235948:
    // 0x80235948: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023594C: j           L_80235AE0
    // 0x80235950: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
        goto L_80235AE0;
    // 0x80235950: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
L_80235954:
    // 0x80235954: lbu         $v0, 0xE($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0XE);
    // 0x80235958: bne         $v0, $zero, L_802359C0
    if (ctx->r2 != 0) {
        // 0x8023595C: nop
    
            goto L_802359C0;
    }
    // 0x8023595C: nop

    // 0x80235960: lhu         $v0, 0x10($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X10);
    // 0x80235964: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235968: blez        $v0, L_80235978
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023596C: sra         $v1, $v0, 20
        ctx->r3 = S32(SIGNED(ctx->r2) >> 20);
            goto L_80235978;
    }
    // 0x8023596C: sra         $v1, $v0, 20
    ctx->r3 = S32(SIGNED(ctx->r2) >> 20);
    // 0x80235970: j           L_8023597C
    // 0x80235974: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
        goto L_8023597C;
    // 0x80235974: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
L_80235978:
    // 0x80235978: addiu       $v0, $v1, -0xC
    ctx->r2 = ADD32(ctx->r3, -0XC);
L_8023597C:
    // 0x8023597C: sh          $v0, 0x44($a2)
    MEM_H(0X44, ctx->r6) = ctx->r2;
    // 0x80235980: lhu         $v0, 0x12($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X12);
    // 0x80235984: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235988: blez        $v0, L_80235998
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023598C: sra         $v1, $v0, 20
        ctx->r3 = S32(SIGNED(ctx->r2) >> 20);
            goto L_80235998;
    }
    // 0x8023598C: sra         $v1, $v0, 20
    ctx->r3 = S32(SIGNED(ctx->r2) >> 20);
    // 0x80235990: j           L_8023599C
    // 0x80235994: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
        goto L_8023599C;
    // 0x80235994: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
L_80235998:
    // 0x80235998: addiu       $v0, $v1, -0xC
    ctx->r2 = ADD32(ctx->r3, -0XC);
L_8023599C:
    // 0x8023599C: sh          $v0, 0x46($a2)
    MEM_H(0X46, ctx->r6) = ctx->r2;
    // 0x802359A0: lhu         $v0, 0x14($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X14);
    // 0x802359A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802359A8: blez        $v0, L_802359B8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802359AC: sra         $v1, $v0, 20
        ctx->r3 = S32(SIGNED(ctx->r2) >> 20);
            goto L_802359B8;
    }
    // 0x802359AC: sra         $v1, $v0, 20
    ctx->r3 = S32(SIGNED(ctx->r2) >> 20);
    // 0x802359B0: j           L_80235A1C
    // 0x802359B4: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
        goto L_80235A1C;
    // 0x802359B4: addiu       $v0, $v1, 0xC
    ctx->r2 = ADD32(ctx->r3, 0XC);
L_802359B8:
    // 0x802359B8: j           L_80235A1C
    // 0x802359BC: addiu       $v0, $v1, -0xC
    ctx->r2 = ADD32(ctx->r3, -0XC);
        goto L_80235A1C;
    // 0x802359BC: addiu       $v0, $v1, -0xC
    ctx->r2 = ADD32(ctx->r3, -0XC);
L_802359C0:
    // 0x802359C0: lhu         $v0, 0x10($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X10);
    // 0x802359C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802359C8: blez        $v0, L_802359D8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802359CC: sra         $v1, $v0, 21
        ctx->r3 = S32(SIGNED(ctx->r2) >> 21);
            goto L_802359D8;
    }
    // 0x802359CC: sra         $v1, $v0, 21
    ctx->r3 = S32(SIGNED(ctx->r2) >> 21);
    // 0x802359D0: j           L_802359DC
    // 0x802359D4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
        goto L_802359DC;
    // 0x802359D4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
L_802359D8:
    // 0x802359D8: addiu       $v0, $v1, -0x8
    ctx->r2 = ADD32(ctx->r3, -0X8);
L_802359DC:
    // 0x802359DC: sh          $v0, 0x44($a2)
    MEM_H(0X44, ctx->r6) = ctx->r2;
    // 0x802359E0: lhu         $v0, 0x12($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X12);
    // 0x802359E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802359E8: blez        $v0, L_802359F8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802359EC: sra         $v1, $v0, 21
        ctx->r3 = S32(SIGNED(ctx->r2) >> 21);
            goto L_802359F8;
    }
    // 0x802359EC: sra         $v1, $v0, 21
    ctx->r3 = S32(SIGNED(ctx->r2) >> 21);
    // 0x802359F0: j           L_802359FC
    // 0x802359F4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
        goto L_802359FC;
    // 0x802359F4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
L_802359F8:
    // 0x802359F8: addiu       $v0, $v1, -0x8
    ctx->r2 = ADD32(ctx->r3, -0X8);
L_802359FC:
    // 0x802359FC: sh          $v0, 0x46($a2)
    MEM_H(0X46, ctx->r6) = ctx->r2;
    // 0x80235A00: lhu         $v0, 0x14($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X14);
    // 0x80235A04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235A08: blez        $v0, L_80235A18
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80235A0C: sra         $v1, $v0, 21
        ctx->r3 = S32(SIGNED(ctx->r2) >> 21);
            goto L_80235A18;
    }
    // 0x80235A0C: sra         $v1, $v0, 21
    ctx->r3 = S32(SIGNED(ctx->r2) >> 21);
    // 0x80235A10: j           L_80235A1C
    // 0x80235A14: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
        goto L_80235A1C;
    // 0x80235A14: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
L_80235A18:
    // 0x80235A18: addiu       $v0, $v1, -0x8
    ctx->r2 = ADD32(ctx->r3, -0X8);
L_80235A1C:
    // 0x80235A1C: sh          $v0, 0x48($a2)
    MEM_H(0X48, ctx->r6) = ctx->r2;
    // 0x80235A20: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x80235A24: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235A28: slti        $v0, $v0, 0x100
    ctx->r2 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x80235A2C: beq         $v0, $zero, L_80235A3C
    if (ctx->r2 == 0) {
        // 0x80235A30: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80235A3C;
    }
    // 0x80235A30: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80235A34: j           L_80235A4C
    // 0x80235A38: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
        goto L_80235A4C;
    // 0x80235A38: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
L_80235A3C:
    // 0x80235A3C: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x80235A40: sh          $zero, 0x4($a3)
    MEM_H(0X4, ctx->r7) = 0;
    // 0x80235A44: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80235A48: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
L_80235A4C:
    // 0x80235A4C: lh          $v0, 0x10($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X10);
    // 0x80235A50: bltzl       $v0, L_80235A6C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80235A54: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80235A6C;
    }
    goto skip_9;
    // 0x80235A54: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_9:
    // 0x80235A58: slti        $v0, $v0, 0x28
    ctx->r2 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x80235A5C: beq         $v0, $zero, L_80235AE0
    if (ctx->r2 == 0) {
        // 0x80235A60: nop
    
            goto L_80235AE0;
    }
    // 0x80235A60: nop

    // 0x80235A64: j           L_80235A78
    // 0x80235A68: nop

        goto L_80235A78;
    // 0x80235A68: nop

L_80235A6C:
    // 0x80235A6C: slti        $v0, $v0, 0x28
    ctx->r2 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x80235A70: beq         $v0, $zero, L_80235AE0
    if (ctx->r2 == 0) {
        // 0x80235A74: nop
    
            goto L_80235AE0;
    }
    // 0x80235A74: nop

L_80235A78:
    // 0x80235A78: lh          $v0, 0x12($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X12);
    // 0x80235A7C: bltzl       $v0, L_80235A98
    if (SIGNED(ctx->r2) < 0) {
        // 0x80235A80: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80235A98;
    }
    goto skip_10;
    // 0x80235A80: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_10:
    // 0x80235A84: slti        $v0, $v0, 0x28
    ctx->r2 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x80235A88: beq         $v0, $zero, L_80235AE0
    if (ctx->r2 == 0) {
        // 0x80235A8C: nop
    
            goto L_80235AE0;
    }
    // 0x80235A8C: nop

    // 0x80235A90: j           L_80235AA4
    // 0x80235A94: nop

        goto L_80235AA4;
    // 0x80235A94: nop

L_80235A98:
    // 0x80235A98: slti        $v0, $v0, 0x28
    ctx->r2 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x80235A9C: beq         $v0, $zero, L_80235AE0
    if (ctx->r2 == 0) {
        // 0x80235AA0: nop
    
            goto L_80235AE0;
    }
    // 0x80235AA0: nop

L_80235AA4:
    // 0x80235AA4: lh          $v0, 0x14($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X14);
    // 0x80235AA8: bltzl       $v0, L_80235AC4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80235AAC: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80235AC4;
    }
    goto skip_11;
    // 0x80235AAC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_11:
    // 0x80235AB0: slti        $v0, $v0, 0x28
    ctx->r2 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x80235AB4: beq         $v0, $zero, L_80235AE0
    if (ctx->r2 == 0) {
        // 0x80235AB8: nop
    
            goto L_80235AE0;
    }
    // 0x80235AB8: nop

    // 0x80235ABC: j           L_80235AD0
    // 0x80235AC0: nop

        goto L_80235AD0;
    // 0x80235AC0: nop

L_80235AC4:
    // 0x80235AC4: slti        $v0, $v0, 0x28
    ctx->r2 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x80235AC8: beq         $v0, $zero, L_80235AE0
    if (ctx->r2 == 0) {
        // 0x80235ACC: nop
    
            goto L_80235AE0;
    }
    // 0x80235ACC: nop

L_80235AD0:
    // 0x80235AD0: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x80235AD4: sh          $zero, 0x4($a3)
    MEM_H(0X4, ctx->r7) = 0;
    // 0x80235AD8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80235ADC: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
L_80235AE0:
    // 0x80235AE0: lhu         $v0, 0x2($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X2);
    // 0x80235AE4: lhu         $v1, 0x44($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X44);
    // 0x80235AE8: lhu         $a0, 0x14($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X14);
    // 0x80235AEC: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x80235AF0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80235AF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235AF8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80235AFC: lhu         $v0, 0x18($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X18);
    // 0x80235B00: lhu         $v1, 0x48($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X48);
    // 0x80235B04: sh          $a0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r4;
    // 0x80235B08: lhu         $a0, 0x2($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X2);
    // 0x80235B0C: lbu         $a1, 0x9($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X9);
    // 0x80235B10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235B14: srl         $a0, $a0, 4
    ctx->r4 = S32(U32(ctx->r4) >> 4);
    // 0x80235B18: sh          $v0, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r2;
    // 0x80235B1C: lhu         $v0, 0x46($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X46);
    // 0x80235B20: lhu         $v1, 0x16($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X16);
    // 0x80235B24: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x80235B28: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80235B2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235B30: bne         $a1, $zero, L_80235B54
    if (ctx->r5 != 0) {
        // 0x80235B34: sh          $v1, 0x16($a2)
        MEM_H(0X16, ctx->r6) = ctx->r3;
            goto L_80235B54;
    }
    // 0x80235B34: sh          $v1, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r3;
    // 0x80235B38: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235B3C: lbu         $v0, -0x10EC($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X10EC);
    // 0x80235B40: sb          $v0, 0x96($a2)
    MEM_B(0X96, ctx->r6) = ctx->r2;
    // 0x80235B44: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235B48: lbu         $v0, -0x10EB($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X10EB);
    // 0x80235B4C: j           L_80235B88
    // 0x80235B50: sb          $v0, 0x97($a2)
    MEM_B(0X97, ctx->r6) = ctx->r2;
        goto L_80235B88;
    // 0x80235B50: sb          $v0, 0x97($a2)
    MEM_B(0X97, ctx->r6) = ctx->r2;
L_80235B54:
    // 0x80235B54: lbu         $v0, 0x1($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X1);
    // 0x80235B58: andi        $v0, $v0, 0x1E
    ctx->r2 = ctx->r2 & 0X1E;
    // 0x80235B5C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235B60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235B64: lbu         $v1, -0x10EC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X10EC);
    // 0x80235B68: sb          $v1, 0x96($a2)
    MEM_B(0X96, ctx->r6) = ctx->r3;
    // 0x80235B6C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235B70: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235B74: lbu         $v0, -0x10EB($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X10EB);
    // 0x80235B78: sb          $v0, 0x97($a2)
    MEM_B(0X97, ctx->r6) = ctx->r2;
    // 0x80235B7C: lbu         $v0, 0x1($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X1);
    // 0x80235B80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235B84: sb          $v0, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r2;
L_80235B88:
    // 0x80235B88: jr          $ra
    // 0x80235B8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80235B8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
