#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022C754_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C758: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C75C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C764: jal         0x8022DC58
    // 0x8022C768: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022DC58_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022C768: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8022C76C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C770: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C774: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022C778: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022C77C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022C780: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022C784: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022C788: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022C78C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022C790: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x8022C794: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x8022C798: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x8022C79C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C7A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C7A4: jr          $ra
    // 0x8022C7A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C7A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C7AC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C7AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022C7B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C7B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C7B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022C7BC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022C7C0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022C7C4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C7C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C7CC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C7D0: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022C7D4: bne         $v1, $v0, L_8022C7F0
    if (ctx->r3 != ctx->r2) {
        // 0x8022C7D8: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022C7F0;
    }
    // 0x8022C7D8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022C7DC: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022C7E0: addiu       $s1, $s1, -0x2130
    ctx->r17 = ADD32(ctx->r17, -0X2130);
    // 0x8022C7E4: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022C7E8: j           L_8022C800
    // 0x8022C7EC: addiu       $s3, $s3, -0x2110
    ctx->r19 = ADD32(ctx->r19, -0X2110);
        goto L_8022C800;
    // 0x8022C7EC: addiu       $s3, $s3, -0x2110
    ctx->r19 = ADD32(ctx->r19, -0X2110);
L_8022C7F0:
    // 0x8022C7F0: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022C7F4: addiu       $s1, $s1, -0x2140
    ctx->r17 = ADD32(ctx->r17, -0X2140);
    // 0x8022C7F8: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022C7FC: addiu       $s3, $s3, -0x2120
    ctx->r19 = ADD32(ctx->r19, -0X2120);
L_8022C800:
    // 0x8022C800: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x8022C804: jal         0x800A3450
    // 0x8022C808: addiu       $s4, $s4, -0x2100
    ctx->r20 = ADD32(ctx->r20, -0X2100);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022C808: addiu       $s4, $s4, -0x2100
    ctx->r20 = ADD32(ctx->r20, -0X2100);
    after_0:
    // 0x8022C80C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022C810: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022C814: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x8022C818: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C81C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x8022C820: beq         $v1, $v0, L_8022C8AC
    if (ctx->r3 == ctx->r2) {
        // 0x8022C824: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022C8AC;
    }
    // 0x8022C824: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C828: beql        $v0, $zero, L_8022C840
    if (ctx->r2 == 0) {
        // 0x8022C82C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C840;
    }
    goto skip_0;
    // 0x8022C82C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C830: beq         $v1, $zero, L_8022C850
    if (ctx->r3 == 0) {
        // 0x8022C834: nop
    
            goto L_8022C850;
    }
    // 0x8022C834: nop

    // 0x8022C838: j           L_8022C93C
    // 0x8022C83C: nop

        goto L_8022C93C;
    // 0x8022C83C: nop

L_8022C840:
    // 0x8022C840: beq         $v1, $v0, L_8022C8C0
    if (ctx->r3 == ctx->r2) {
        // 0x8022C844: nop
    
            goto L_8022C8C0;
    }
    // 0x8022C844: nop

    // 0x8022C848: j           L_8022C93C
    // 0x8022C84C: nop

        goto L_8022C93C;
    // 0x8022C84C: nop

L_8022C850:
    // 0x8022C850: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022C854: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022C858: bne         $v0, $zero, L_8022C87C
    if (ctx->r2 != 0) {
        // 0x8022C85C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C87C;
    }
    // 0x8022C85C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C860: jal         0x800A3450
    // 0x8022C864: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022C864: nop

    after_1:
    // 0x8022C868: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022C86C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022C870: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022C874: beq         $v0, $zero, L_8022C888
    if (ctx->r2 == 0) {
        // 0x8022C878: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C888;
    }
    // 0x8022C878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C87C:
    // 0x8022C87C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022C880: j           L_8022C89C
    // 0x8022C884: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022C89C;
    // 0x8022C884: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022C888:
    // 0x8022C888: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C88C: jal         0x8022DC18
    // 0x8022C890: nop

    func_8022DC18_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022C890: nop

    after_2:
    // 0x8022C894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C898: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022C89C:
    // 0x8022C89C: jal         0x8022DC58
    // 0x8022C8A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8022DC58_ovl3(rdram, ctx);
        goto after_3;
    // 0x8022C8A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022C8A4: j           L_8022C960
    // 0x8022C8A8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_8022C960;
    // 0x8022C8A8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022C8AC:
    // 0x8022C8AC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C8B0: jal         0x8022DC08
    // 0x8022C8B4: nop

    func_8022DC08_ovl3(rdram, ctx);
        goto after_4;
    // 0x8022C8B4: nop

    after_4:
    // 0x8022C8B8: j           L_8022C960
    // 0x8022C8BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022C960;
    // 0x8022C8BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022C8C0:
    // 0x8022C8C0: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022C8C4: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x8022C8C8: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x8022C8CC: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x8022C8D0: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x8022C8D4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022C8D8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022C8DC: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x8022C8E0: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x8022C8E4: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x8022C8E8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022C8EC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022C8F0: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8022C8F4: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8022C8F8: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022C8FC: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022C900: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022C904: beq         $v1, $zero, L_8022C934
    if (ctx->r3 == 0) {
        // 0x8022C908: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_8022C934;
    }
    // 0x8022C908: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022C90C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022C910: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022C914: beq         $v0, $zero, L_8022C934
    if (ctx->r2 == 0) {
        // 0x8022C918: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C934;
    }
    // 0x8022C918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C91C: jal         0x8022DC58
    // 0x8022C920: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022DC58_ovl3(rdram, ctx);
        goto after_5;
    // 0x8022C920: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8022C924: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C928: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C92C: j           L_8022C960
    // 0x8022C930: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022C960;
    // 0x8022C930: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022C934:
    // 0x8022C934: j           L_8022C960
    // 0x8022C938: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_8022C960;
    // 0x8022C938: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_8022C93C:
    // 0x8022C93C: jal         0x800A3450
    // 0x8022C940: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022C940: nop

    after_6:
    // 0x8022C944: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C948: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C94C: jal         0x8022DC18
    // 0x8022C950: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8022DC18_ovl3(rdram, ctx);
        goto after_7;
    // 0x8022C950: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x8022C954: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C95C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_8022C960:
    // 0x8022C960: jal         0x800A3450
    // 0x8022C964: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x8022C964: nop

    after_8:
    // 0x8022C968: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022C96C: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x8022C970: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022C974: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x8022C978: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022C97C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022C980: beq         $v1, $v0, L_8022C998
    if (ctx->r3 == ctx->r2) {
        // 0x8022C984: nop
    
            goto L_8022C998;
    }
    // 0x8022C984: nop

    // 0x8022C988: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C98C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C990: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022C994: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C998:
    // 0x8022C998: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022C99C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022C9A0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C9A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C9A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C9AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C9B0: jr          $ra
    // 0x8022C9B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022C9B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80232214_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232214: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232218: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023221C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232224: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232228: bne         $v0, $zero, L_80232244
    if (ctx->r2 != 0) {
        // 0x8023222C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80232244;
    }
    // 0x8023222C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232230: jal         0x80050294
    // 0x80232234: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232234: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80232238: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023223C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232240: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232244:
    // 0x80232244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232248: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023224C: jr          $ra
    // 0x80232250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80232254: nop

    // 0x80232258: nop

    // 0x8023225C: nop

;}
RECOMP_FUNC void func_802333EC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802333EC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802333F0: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x802333F4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802333F8: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x802333FC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80233400: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80233404: jal         0x8003F754
    // 0x80233408: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_8003F754_1AB54(rdram, ctx);
        goto after_0;
    // 0x80233408: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023340C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80233410: beq         $a0, $zero, L_80233438
    if (ctx->r4 == 0) {
        // 0x80233414: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_80233438;
    }
    // 0x80233414: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80233418: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x8023341C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233420: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80233424: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80233428: jal         0x800711A8
    // 0x8023342C: lw          $a1, -0x1DB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1DB4);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_1;
    // 0x8023342C: lw          $a1, -0x1DB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1DB4);
    after_1:
    // 0x80233430: j           L_80233448
    // 0x80233434: addiu       $a0, $zero, 0xF2
    ctx->r4 = ADD32(0, 0XF2);
        goto L_80233448;
    // 0x80233434: addiu       $a0, $zero, 0xF2
    ctx->r4 = ADD32(0, 0XF2);
L_80233438:
    // 0x80233438: lw          $v0, 0x9C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X9C);
    // 0x8023343C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233440: beq         $v0, $zero, L_80233470
    if (ctx->r2 == 0) {
        // 0x80233444: addiu       $a0, $zero, 0xF2
        ctx->r4 = ADD32(0, 0XF2);
            goto L_80233470;
    }
    // 0x80233444: addiu       $a0, $zero, 0xF2
    ctx->r4 = ADD32(0, 0XF2);
L_80233448:
    // 0x80233448: lbu         $v1, 0x8($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X8);
    // 0x8023344C: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80233450: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80233454: sb          $v0, 0xB($s3)
    MEM_B(0XB, ctx->r19) = ctx->r2;
    // 0x80233458: sw          $zero, 0xD0($s3)
    MEM_W(0XD0, ctx->r19) = 0;
    // 0x8023345C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233460: jal         0x8002A33C
    // 0x80233464: sb          $v1, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80233464: sb          $v1, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r3;
    after_2:
    // 0x80233468: j           L_8023372C
    // 0x8023346C: nop

        goto L_8023372C;
    // 0x8023346C: nop

L_80233470:
    // 0x80233470: addiu       $a0, $s3, 0x34
    ctx->r4 = ADD32(ctx->r19, 0X34);
    // 0x80233474: addiu       $s1, $s3, 0x1C
    ctx->r17 = ADD32(ctx->r19, 0X1C);
    // 0x80233478: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023347C: jal         0x8009A3B4
    // 0x80233480: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80233480: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80233484: addiu       $a0, $s3, 0x2C
    ctx->r4 = ADD32(ctx->r19, 0X2C);
    // 0x80233488: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x8023348C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80233490: jal         0x8009A3B4
    // 0x80233494: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80233494: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80233498: lb          $v0, 0xC($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XC);
    // 0x8023349C: bltz        $v0, L_80233534
    if (SIGNED(ctx->r2) < 0) {
        // 0x802334A0: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_80233534;
    }
    // 0x802334A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802334A4: addiu       $s1, $s3, 0xD8
    ctx->r17 = ADD32(ctx->r19, 0XD8);
    // 0x802334A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802334AC: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x802334B0: lhu         $v1, 0x16($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X16);
    // 0x802334B4: lhu         $a3, 0x18($s3)
    ctx->r7 = MEM_HU(ctx->r19, 0X18);
    // 0x802334B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802334BC: sh          $v0, 0x90($s3)
    MEM_H(0X90, ctx->r19) = ctx->r2;
    // 0x802334C0: sh          $v1, 0x92($s3)
    MEM_H(0X92, ctx->r19) = ctx->r3;
    // 0x802334C4: jal         0x8009A3B4
    // 0x802334C8: sh          $a3, 0x94($s3)
    MEM_H(0X94, ctx->r19) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802334C8: sh          $a3, 0x94($s3)
    MEM_H(0X94, ctx->r19) = ctx->r7;
    after_5:
    // 0x802334CC: addiu       $s0, $s3, 0xE0
    ctx->r16 = ADD32(ctx->r19, 0XE0);
    // 0x802334D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802334D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802334D8: jal         0x8009A3B4
    // 0x802334DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802334DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x802334E0: addiu       $s1, $s3, 0xE8
    ctx->r17 = ADD32(ctx->r19, 0XE8);
    // 0x802334E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802334E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802334EC: jal         0x8009A3B4
    // 0x802334F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802334F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x802334F4: addiu       $s2, $s3, 0xF0
    ctx->r18 = ADD32(ctx->r19, 0XF0);
    // 0x802334F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802334FC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233500: jal         0x8009A3B4
    // 0x80233504: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80233504: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80233508: addiu       $s0, $s3, 0xF8
    ctx->r16 = ADD32(ctx->r19, 0XF8);
    // 0x8023350C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233510: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80233514: jal         0x8009A3B4
    // 0x80233518: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80233518: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8023351C: addiu       $a0, $s3, 0x100
    ctx->r4 = ADD32(ctx->r19, 0X100);
    // 0x80233520: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80233524: jal         0x8009A3B4
    // 0x80233528: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80233528: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8023352C: j           L_8023372C
    // 0x80233530: nop

        goto L_8023372C;
    // 0x80233530: nop

L_80233534:
    // 0x80233534: lbu         $v0, 0xB($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XB);
    // 0x80233538: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023353C: sb          $v0, 0xB($s3)
    MEM_B(0XB, ctx->r19) = ctx->r2;
    // 0x80233540: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80233544: bne         $v0, $zero, L_8023355C
    if (ctx->r2 != 0) {
        // 0x80233548: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_8023355C;
    }
    // 0x80233548: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x8023354C: jal         0x8004F4F8
    // 0x80233550: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_11;
    // 0x80233550: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_11:
    // 0x80233554: j           L_802336CC
    // 0x80233558: nop

        goto L_802336CC;
    // 0x80233558: nop

L_8023355C:
    // 0x8023355C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233560: jal         0x802337F4
    // 0x80233564: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_802337F4_ovl3(rdram, ctx);
        goto after_12;
    // 0x80233564: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_12:
    // 0x80233568: lui         $v0, 0xFFE
    ctx->r2 = S32(0XFFE << 16);
    // 0x8023356C: ori         $v0, $v0, 0xC430
    ctx->r2 = ctx->r2 | 0XC430;
    // 0x80233570: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80233574: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80233578: addiu       $s0, $s3, 0xA4
    ctx->r16 = ADD32(ctx->r19, 0XA4);
    // 0x8023357C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80233580: addiu       $a3, $zero, 0x1F9
    ctx->r7 = ADD32(0, 0X1F9);
    // 0x80233584: jal         0x80051B48
    // 0x80233588: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80051B48_2CF48(rdram, ctx);
        goto after_13;
    // 0x80233588: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_13:
    // 0x8023358C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233590: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80233594: jal         0x8009A3B4
    // 0x80233598: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x80233598: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x8023359C: lh          $v1, 0x28($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X28);
    // 0x802335A0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802335A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802335A8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802335AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802335B0: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x802335B4: sh          $v0, 0x44($s3)
    MEM_H(0X44, ctx->r19) = ctx->r2;
    // 0x802335B8: lh          $v1, 0x2A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2A);
    // 0x802335BC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802335C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802335C4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802335C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802335CC: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x802335D0: sh          $v0, 0x46($s3)
    MEM_H(0X46, ctx->r19) = ctx->r2;
    // 0x802335D4: lh          $v0, 0x44($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X44);
    // 0x802335D8: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x802335DC: lh          $a2, 0x2C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2C);
    // 0x802335E0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802335E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802335E8: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x802335EC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802335F0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802335F4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802335F8: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x802335FC: sh          $v0, 0x48($s3)
    MEM_H(0X48, ctx->r19) = ctx->r2;
    // 0x80233600: lh          $a3, 0x48($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X48);
    // 0x80233604: lh          $v0, 0x46($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X46);
    // 0x80233608: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023360C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80233610: sw          $v1, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r3;
    // 0x80233614: lw          $v1, 0x20($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X20);
    // 0x80233618: lw          $a2, 0x24($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X24);
    // 0x8023361C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80233620: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233624: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    // 0x80233628: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8023362C: sw          $v1, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r3;
    // 0x80233630: jal         0x8004DD04
    // 0x80233634: sw          $a2, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_15;
    // 0x80233634: sw          $a2, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r6;
    after_15:
    // 0x80233638: jal         0x802338C0
    // 0x8023363C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_802338C0_ovl3(rdram, ctx);
        goto after_16;
    // 0x8023363C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_16:
    // 0x80233640: addiu       $a0, $s3, 0x100
    ctx->r4 = ADD32(ctx->r19, 0X100);
    // 0x80233644: addiu       $s0, $s3, 0xF8
    ctx->r16 = ADD32(ctx->r19, 0XF8);
    // 0x80233648: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023364C: jal         0x8009A3B4
    // 0x80233650: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x80233650: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x80233654: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233658: addiu       $s0, $s3, 0xF0
    ctx->r16 = ADD32(ctx->r19, 0XF0);
    // 0x8023365C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80233660: jal         0x8009A3B4
    // 0x80233664: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x80233664: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_18:
    // 0x80233668: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023366C: addiu       $s0, $s3, 0xE8
    ctx->r16 = ADD32(ctx->r19, 0XE8);
    // 0x80233670: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80233674: jal         0x8009A3B4
    // 0x80233678: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x80233678: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_19:
    // 0x8023367C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233680: addiu       $s0, $s3, 0xE0
    ctx->r16 = ADD32(ctx->r19, 0XE0);
    // 0x80233684: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80233688: jal         0x8009A3B4
    // 0x8023368C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_20;
    // 0x8023368C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_20:
    // 0x80233690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233694: addiu       $s0, $s3, 0xD8
    ctx->r16 = ADD32(ctx->r19, 0XD8);
    // 0x80233698: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023369C: jal         0x8009A3B4
    // 0x802336A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_21;
    // 0x802336A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_21:
    // 0x802336A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802336A8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802336AC: jal         0x8009A3B4
    // 0x802336B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_22;
    // 0x802336B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_22:
    // 0x802336B4: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x802336B8: lhu         $v1, 0x16($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X16);
    // 0x802336BC: lhu         $a0, 0x18($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X18);
    // 0x802336C0: sh          $v0, 0x90($s3)
    MEM_H(0X90, ctx->r19) = ctx->r2;
    // 0x802336C4: sh          $v1, 0x92($s3)
    MEM_H(0X92, ctx->r19) = ctx->r3;
    // 0x802336C8: sh          $a0, 0x94($s3)
    MEM_H(0X94, ctx->r19) = ctx->r4;
L_802336CC:
    // 0x802336CC: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x802336D0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802336D4: beq         $v0, $zero, L_80233728
    if (ctx->r2 == 0) {
        // 0x802336D8: addiu       $v0, $s3, 0x9C
        ctx->r2 = ADD32(ctx->r19, 0X9C);
            goto L_80233728;
    }
    // 0x802336D8: addiu       $v0, $s3, 0x9C
    ctx->r2 = ADD32(ctx->r19, 0X9C);
    // 0x802336DC: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x802336E0: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x802336E4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802336E8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802336EC: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x802336F0: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x802336F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802336F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802336FC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233700: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233704: lw          $v1, -0x1DC0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1DC0);
    // 0x80233708: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8023370C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233710: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80233714: lui         $v0, 0x4900
    ctx->r2 = S32(0X4900 << 16);
    // 0x80233718: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023371C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233720: jal         0x80051E18
    // 0x80233724: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_23;
    // 0x80233724: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_23:
L_80233728:
    // 0x80233728: sw          $zero, 0x9C($s3)
    MEM_W(0X9C, ctx->r19) = 0;
L_8023372C:
    // 0x8023372C: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x80233730: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80233734: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80233738: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8023373C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80233740: jr          $ra
    // 0x80233744: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80233744: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_802377C4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802377C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802377C8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802377CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802377D0: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x802377D4: bgtz        $v0, L_802377EC
    if (SIGNED(ctx->r2) > 0) {
        // 0x802377D8: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_802377EC;
    }
    // 0x802377D8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802377DC: jal         0x8004F5C4
    // 0x802377E0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x802377E0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x802377E4: j           L_80237804
    // 0x802377E8: nop

        goto L_80237804;
    // 0x802377E8: nop

L_802377EC:
    // 0x802377EC: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x802377F0: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x802377F4: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x802377F8: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x802377FC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80237800: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_80237804:
    // 0x80237804: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237808: jr          $ra
    // 0x8023780C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023780C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237400_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237400: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80237404: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80237408: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023740C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80237410: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80237414: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80237418: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023741C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80237420: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80237424: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80237428: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8023742C: beq         $v0, $zero, L_8023767C
    if (ctx->r2 == 0) {
        // 0x80237430: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023767C;
    }
    // 0x80237430: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80237434: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237438: addu        $at, $at, $v0
    gpr jr_addend_80237440 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023743C: lw          $v0, -0xA00($at)
    ctx->r2 = ADD32(ctx->r1, -0XA00);
    // 0x80237440: jr          $v0
    // 0x80237444: nop

    switch (jr_addend_80237440 >> 2) {
        case 0: goto L_80237448; break;
        case 1: goto L_8023748C; break;
        case 2: goto L_8023753C; break;
        case 3: goto L_8023758C; break;
        case 4: goto L_8023762C; break;
        default: switch_error(__func__, 0x80237440, 0x8023F600);
    }
    // 0x80237444: nop

L_80237448:
    // 0x80237448: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8023744C: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80237450: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80237454: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80237458: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8023745C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80237460: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80237464: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80237468: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8023746C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80237470: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80237474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237478: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8023747C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237480: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x80237484: j           L_8023767C
    // 0x80237488: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_8023767C;
    // 0x80237488: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_8023748C:
    // 0x8023748C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80237490: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x80237494: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x80237498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023749C: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x802374A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802374A4: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x802374A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802374AC: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x802374B0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802374B4: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x802374B8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802374BC: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x802374C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802374C4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x802374C8: beq         $a0, $v0, L_80237510
    if (ctx->r4 == ctx->r2) {
        // 0x802374CC: sw          $v1, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r3;
            goto L_80237510;
    }
    // 0x802374CC: sw          $v1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r3;
    // 0x802374D0: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x802374D4: beql        $v0, $zero, L_802374EC
    if (ctx->r2 == 0) {
        // 0x802374D8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802374EC;
    }
    goto skip_0;
    // 0x802374D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802374DC: beq         $a0, $zero, L_802374FC
    if (ctx->r4 == 0) {
        // 0x802374E0: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_802374FC;
    }
    // 0x802374E0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x802374E4: j           L_8023767C
    // 0x802374E8: nop

        goto L_8023767C;
    // 0x802374E8: nop

L_802374EC:
    // 0x802374EC: beq         $a0, $v0, L_80237528
    if (ctx->r4 == ctx->r2) {
        // 0x802374F0: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80237528;
    }
    // 0x802374F0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x802374F4: j           L_8023767C
    // 0x802374F8: nop

        goto L_8023767C;
    // 0x802374F8: nop

L_802374FC:
    // 0x802374FC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80237500: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80237504: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80237508: j           L_8023767C
    // 0x8023750C: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8023767C;
    // 0x8023750C: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80237510:
    // 0x80237510: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80237514: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80237518: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8023751C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80237520: j           L_8023767C
    // 0x80237524: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8023767C;
    // 0x80237524: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_80237528:
    // 0x80237528: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8023752C: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80237530: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
    // 0x80237534: j           L_8023767C
    // 0x80237538: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8023767C;
    // 0x80237538: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_8023753C:
    // 0x8023753C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80237540: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80237544: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x80237548: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8023754C: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x80237550: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80237554: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80237558: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8023755C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80237560: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80237564: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237568: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8023756C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80237570: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x80237574: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80237578: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8023757C: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x80237580: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80237584: j           L_8023767C
    // 0x80237588: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
        goto L_8023767C;
    // 0x80237588: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
L_8023758C:
    // 0x8023758C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80237590: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
    // 0x80237594: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80237598: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023759C: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x802375A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802375A4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802375A8: addiu       $a1, $a1, -0xA08
    ctx->r5 = ADD32(ctx->r5, -0XA08);
    // 0x802375AC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x802375B0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x802375B4: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x802375B8: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x802375BC: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x802375C0: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x802375C4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802375C8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x802375CC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802375D0: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x802375D4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x802375D8: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x802375DC: jal         0x8009A3B4
    // 0x802375E0: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802375E0: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_0:
    // 0x802375E4: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x802375E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802375EC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802375F0: addiu       $a1, $a1, -0xA04
    ctx->r5 = ADD32(ctx->r5, -0XA04);
    // 0x802375F4: jal         0x8009A3B4
    // 0x802375F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802375F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x802375FC: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x80237600: lb          $v1, 0xC($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XC);
    // 0x80237604: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80237608: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023760C: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x80237610: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80237614: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80237618: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8023761C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80237620: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80237624: j           L_8023767C
    // 0x80237628: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
        goto L_8023767C;
    // 0x80237628: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
L_8023762C:
    // 0x8023762C: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x80237630: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80237634: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x80237638: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x8023763C: ori         $a0, $a0, 0x80
    ctx->r4 = ctx->r4 | 0X80;
    // 0x80237640: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80237644: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80237648: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8023764C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80237650: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x80237654: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237658: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8023765C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80237660: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x80237664: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80237668: sw          $a0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r4;
    // 0x8023766C: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    // 0x80237670: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80237674: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80237678: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
L_8023767C:
    // 0x8023767C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80237680: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80237684: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80237688: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023768C: jr          $ra
    // 0x80237690: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80237690: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80237EF4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237EF4: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80237EF8: bne         $v0, $zero, L_80237F0C
    if (ctx->r2 != 0) {
        // 0x80237EFC: nop
    
            goto L_80237F0C;
    }
    // 0x80237EFC: nop

    // 0x80237F00: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80237F04: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80237F08: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_80237F0C:
    // 0x80237F0C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80237F10: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80237F14: sh          $v1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r3;
    // 0x80237F18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237F1C: jr          $ra
    // 0x80237F20: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80237F20: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_802310A8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802310A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802310AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802310B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802310B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802310B8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802310BC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802310C0: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x802310C4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x802310C8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802310CC: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x802310D0: beq         $a0, $zero, L_8023113C
    if (ctx->r4 == 0) {
        // 0x802310D4: lui         $v0, 0x1800
        ctx->r2 = S32(0X1800 << 16);
            goto L_8023113C;
    }
    // 0x802310D4: lui         $v0, 0x1800
    ctx->r2 = S32(0X1800 << 16);
    // 0x802310D8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802310DC: beql        $v0, $zero, L_80231128
    if (ctx->r2 == 0) {
        // 0x802310E0: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80231128;
    }
    goto skip_0;
    // 0x802310E0: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x802310E4: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x802310E8: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x802310EC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802310F0: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x802310F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802310F8: bgtz        $v0, L_80231110
    if (SIGNED(ctx->r2) > 0) {
        // 0x802310FC: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_80231110;
    }
    // 0x802310FC: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80231100: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80231104: andi        $v0, $v0, 0xFFC5
    ctx->r2 = ctx->r2 & 0XFFC5;
    // 0x80231108: ori         $v0, $v0, 0x81
    ctx->r2 = ctx->r2 | 0X81;
    // 0x8023110C: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
L_80231110:
    // 0x80231110: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80231114: jal         0x8002A33C
    // 0x80231118: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80231118: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8023111C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80231120: j           L_80231130
    // 0x80231124: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
        goto L_80231130;
    // 0x80231124: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80231128:
    // 0x80231128: jal         0x8002A33C
    // 0x8023112C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023112C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_80231130:
    // 0x80231130: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80231134: j           L_80231144
    // 0x80231138: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
        goto L_80231144;
    // 0x80231138: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
L_8023113C:
    // 0x8023113C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80231140: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
L_80231144:
    // 0x80231144: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80231148: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023114C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231150: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231154: jr          $ra
    // 0x80231158: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231158: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CC68_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CC6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CC70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CC74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CC78: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CC7C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CC80: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022CC84: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CC88: jal         0x8022DC18
    // 0x8022CC8C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8022DC18_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022CC8C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022CC90: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CC94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CC98: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022CC9C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CCA0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CCA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CCA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CCAC: jr          $ra
    // 0x8022CCB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CCB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228734_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228734: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228738: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022873C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228740: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228744: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228748: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022874C: bne         $v0, $zero, L_8022877C
    if (ctx->r2 != 0) {
        // 0x80228750: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022877C;
    }
    // 0x80228750: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80228754: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228758: jal         0x80050294
    // 0x8022875C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022875C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228764: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228768: jal         0x80228C84
    // 0x8022876C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80228C84_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022876C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80228770: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228774: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228778: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022877C:
    // 0x8022877C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228780: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80228784: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80228788: beq         $v1, $v0, L_802287D4
    if (ctx->r3 == ctx->r2) {
        // 0x8022878C: slti        $v0, $v1, 0x97
        ctx->r2 = SIGNED(ctx->r3) < 0X97 ? 1 : 0;
            goto L_802287D4;
    }
    // 0x8022878C: slti        $v0, $v1, 0x97
    ctx->r2 = SIGNED(ctx->r3) < 0X97 ? 1 : 0;
    // 0x80228790: beq         $v0, $zero, L_802287A8
    if (ctx->r2 == 0) {
        // 0x80228794: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_802287A8;
    }
    // 0x80228794: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80228798: beq         $v1, $v0, L_802287C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022879C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802287C8;
    }
    // 0x8022879C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802287A0: j           L_802287E8
    // 0x802287A4: nop

        goto L_802287E8;
    // 0x802287A4: nop

L_802287A8:
    // 0x802287A8: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x802287AC: beq         $v1, $v0, L_802287C4
    if (ctx->r3 == ctx->r2) {
        // 0x802287B0: addiu       $v0, $zero, 0x104
        ctx->r2 = ADD32(0, 0X104);
            goto L_802287C4;
    }
    // 0x802287B0: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x802287B4: beq         $v1, $v0, L_802287D8
    if (ctx->r3 == ctx->r2) {
        // 0x802287B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802287D8;
    }
    // 0x802287B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802287BC: j           L_802287E8
    // 0x802287C0: nop

        goto L_802287E8;
    // 0x802287C0: nop

L_802287C4:
    // 0x802287C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802287C8:
    // 0x802287C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802287CC: j           L_802287E0
    // 0x802287D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_802287E0;
    // 0x802287D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_802287D4:
    // 0x802287D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802287D8:
    // 0x802287D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802287DC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_802287E0:
    // 0x802287E0: jal         0x80228C84
    // 0x802287E4: nop

    func_80228C84_ovl3(rdram, ctx);
        goto after_2;
    // 0x802287E4: nop

    after_2:
L_802287E8:
    // 0x802287E8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802287EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802287F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802287F4: jr          $ra
    // 0x802287F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802287F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802325B4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802325B4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802325B8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x802325BC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802325C0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802325C4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x802325C8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x802325CC: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x802325D0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802325D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802325D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802325DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802325E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802325E4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802325E8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802325EC: jal         0x80071110
    // 0x802325F0: lbu         $a1, -0x1F2E($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1F2E);
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x802325F0: lbu         $a1, -0x1F2E($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1F2E);
    after_0:
    // 0x802325F4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802325F8: beq         $v1, $zero, L_80232668
    if (ctx->r3 == 0) {
        // 0x802325FC: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80232668;
    }
    // 0x802325FC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80232600: bne         $v1, $v0, L_802328D0
    if (ctx->r3 != ctx->r2) {
        // 0x80232604: nop
    
            goto L_802328D0;
    }
    // 0x80232604: nop

    // 0x80232608: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8023260C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80232610: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232614: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232618: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023261C: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80232620: lw          $v0, 0xC8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC8);
    // 0x80232624: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232628: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023262C: lw          $v1, -0x1F2C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1F2C);
    // 0x80232630: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80232634: beql        $v0, $zero, L_8023266C
    if (ctx->r2 == 0) {
        // 0x80232638: addiu       $a0, $s2, 0x34
        ctx->r4 = ADD32(ctx->r18, 0X34);
            goto L_8023266C;
    }
    goto skip_0;
    // 0x80232638: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    skip_0:
    // 0x8023263C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80232640: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80232644: lbu         $v0, -0x1F34($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1F34);
    // 0x80232648: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023264C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232650: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232654: lw          $v0, -0x1E0C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1E0C);
    // 0x80232658: jalr        $v0
    // 0x8023265C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023265C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80232660: jal         0x8004F4F8
    // 0x80232664: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80232664: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
L_80232668:
    // 0x80232668: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
L_8023266C:
    // 0x8023266C: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80232670: jal         0x8009A3B4
    // 0x80232674: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80232674: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80232678: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8023267C: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x80232680: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80232684: jal         0x8009A3B4
    // 0x80232688: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80232688: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8023268C: addiu       $a0, $s2, 0xF0
    ctx->r4 = ADD32(ctx->r18, 0XF0);
    // 0x80232690: addiu       $s0, $s2, 0xE8
    ctx->r16 = ADD32(ctx->r18, 0XE8);
    // 0x80232694: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232698: jal         0x8009A3B4
    // 0x8023269C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023269C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x802326A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802326A4: addiu       $s0, $s2, 0xE0
    ctx->r16 = ADD32(ctx->r18, 0XE0);
    // 0x802326A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802326AC: jal         0x8009A3B4
    // 0x802326B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802326B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x802326B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802326B8: addiu       $s0, $s2, 0xD8
    ctx->r16 = ADD32(ctx->r18, 0XD8);
    // 0x802326BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802326C0: jal         0x8009A3B4
    // 0x802326C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802326C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x802326C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802326CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802326D0: jal         0x8009A3B4
    // 0x802326D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802326D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x802326D8: lbu         $v1, 0xB($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XB);
    // 0x802326DC: addiu       $v0, $v1, 0xFF
    ctx->r2 = ADD32(ctx->r3, 0XFF);
    // 0x802326E0: beq         $v1, $zero, L_802328D0
    if (ctx->r3 == 0) {
        // 0x802326E4: sb          $v0, 0xB($s2)
        MEM_B(0XB, ctx->r18) = ctx->r2;
            goto L_802328D0;
    }
    // 0x802326E4: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x802326E8: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x802326EC: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x802326F0: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x802326F4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802326F8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x802326FC: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x80232700: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    // 0x80232704: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x80232708: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x8023270C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80232710: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x80232714: ori         $a1, $zero, 0xD0FC
    ctx->r5 = 0 | 0XD0FC;
    // 0x80232718: lh          $a0, 0x4($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X4);
    // 0x8023271C: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80232720: addiu       $v1, $v1, 0x687E
    ctx->r3 = ADD32(ctx->r3, 0X687E);
    // 0x80232724: sltu        $v1, $a1, $v1
    ctx->r3 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x80232728: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8023272C: bne         $v1, $zero, L_80232750
    if (ctx->r3 != 0) {
        // 0x80232730: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_80232750;
    }
    // 0x80232730: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80232734: addiu       $v0, $a2, 0x687E
    ctx->r2 = ADD32(ctx->r6, 0X687E);
    // 0x80232738: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8023273C: bne         $v0, $zero, L_80232750
    if (ctx->r2 != 0) {
        // 0x80232740: addiu       $v0, $a0, 0x687E
        ctx->r2 = ADD32(ctx->r4, 0X687E);
            goto L_80232750;
    }
    // 0x80232740: addiu       $v0, $a0, 0x687E
    ctx->r2 = ADD32(ctx->r4, 0X687E);
    // 0x80232744: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80232748: beq         $v0, $zero, L_80232778
    if (ctx->r2 == 0) {
        // 0x8023274C: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_80232778;
    }
    // 0x8023274C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_80232750:
    // 0x80232750: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80232754: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80232758: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8023275C: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80232760: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x80232764: sra         $a0, $a0, 2
    ctx->r4 = S32(SIGNED(ctx->r4) >> 2);
    // 0x80232768: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8023276C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80232770: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80232774: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_80232778:
    // 0x80232778: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x8023277C: jal         0x80032308
    // 0x80232780: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80032308_D708(rdram, ctx);
        goto after_9;
    // 0x80232780: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80232784: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80232788: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023278C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232790: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80232794: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232798: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023279C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802327A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802327A4: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x802327A8: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x802327AC: lw          $a3, -0x1F48($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1F48);
    // 0x802327B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802327B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802327B8: lw          $v0, -0x1F44($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1F44);
    // 0x802327BC: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x802327C0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x802327C4: jal         0x80051B48
    // 0x802327C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80051B48_2CF48(rdram, ctx);
        goto after_10;
    // 0x802327C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_10:
    // 0x802327CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802327D0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x802327D4: jal         0x8009A3B4
    // 0x802327D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x802327D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x802327DC: lh          $a0, 0x6E($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X6E);
    // 0x802327E0: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x802327E4: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802327E8: mflo        $v0
    ctx->r2 = lo;
    // 0x802327EC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802327F0: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x802327F4: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x802327F8: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802327FC: mflo        $v0
    ctx->r2 = lo;
    // 0x80232800: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80232804: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x80232808: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x8023280C: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232810: mflo        $v0
    ctx->r2 = lo;
    // 0x80232814: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80232818: lh          $a0, 0x6E($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X6E);
    // 0x8023281C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80232820: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    // 0x80232824: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80232828: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023282C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232830: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80232834: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232838: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023283C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232840: lh          $v1, -0x1F4C($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X1F4C);
    // 0x80232844: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80232848: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023284C: lhu         $a1, -0x1F4A($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X1F4A);
    // 0x80232850: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80232854: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80232858: bnel        $v0, $zero, L_80232864
    if (ctx->r2 != 0) {
        // 0x8023285C: sh          $a0, 0x6E($s2)
        MEM_H(0X6E, ctx->r18) = ctx->r4;
            goto L_80232864;
    }
    goto skip_1;
    // 0x8023285C: sh          $a0, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r4;
    skip_1:
    // 0x80232860: sh          $a1, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r5;
L_80232864:
    // 0x80232864: jal         0x80232B00
    // 0x80232868: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80232B00_ovl3(rdram, ctx);
        goto after_12;
    // 0x80232868: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_12:
    // 0x8023286C: lh          $v0, 0x44($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X44);
    // 0x80232870: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x80232874: lh          $a0, 0x48($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X48);
    // 0x80232878: lw          $a1, 0x24($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X24);
    // 0x8023287C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80232880: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232884: lh          $v0, 0x46($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X46);
    // 0x80232888: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
    // 0x8023288C: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x80232890: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80232894: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80232898: sw          $a1, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r5;
    // 0x8023289C: lhu         $a0, 0x24($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X24);
    // 0x802328A0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802328A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802328A8: lhu         $v0, 0x1C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1C);
    // 0x802328AC: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x802328B0: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x802328B4: sh          $a0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r4;
    // 0x802328B8: sh          $a0, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r4;
    // 0x802328BC: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x802328C0: sh          $v0, 0xAC($s2)
    MEM_H(0XAC, ctx->r18) = ctx->r2;
    // 0x802328C4: sh          $v1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r3;
    // 0x802328C8: j           L_8023291C
    // 0x802328CC: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
        goto L_8023291C;
    // 0x802328CC: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
L_802328D0:
    // 0x802328D0: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x802328D4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802328D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802328DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802328E0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802328E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802328E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802328EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802328F0: lbu         $v0, -0x1F34($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1F34);
    // 0x802328F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802328F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802328FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232900: lw          $v0, -0x1E0C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1E0C);
    // 0x80232904: jalr        $v0
    // 0x80232908: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x80232908: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_13:
    // 0x8023290C: jal         0x8004F4F8
    // 0x80232910: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_14;
    // 0x80232910: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_14:
    // 0x80232914: j           L_80232968
    // 0x80232918: nop

        goto L_80232968;
    // 0x80232918: nop

L_8023291C:
    // 0x8023291C: jal         0x80232A5C
    // 0x80232920: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80232A5C_ovl3(rdram, ctx);
        goto after_15;
    // 0x80232920: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_15:
    // 0x80232924: jal         0x80232C0C
    // 0x80232928: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80232C0C_ovl3(rdram, ctx);
        goto after_16;
    // 0x80232928: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_16:
    // 0x8023292C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80232930: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80232934: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232938: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023293C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80232940: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232944: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232948: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023294C: lbu         $v0, -0x1F34($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1F34);
    // 0x80232950: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232954: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232958: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023295C: lw          $v0, -0x1E14($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1E14);
    // 0x80232960: jalr        $v0
    // 0x80232964: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_17;
    // 0x80232964: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_17:
L_80232968:
    // 0x80232968: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8023296C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80232970: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80232974: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80232978: jr          $ra
    // 0x8023297C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8023297C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022CB74_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CB74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CB78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CB7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CB80: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022CB84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CB88: jal         0x8022DCA4
    // 0x8022CB8C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022DCA4_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022CB8C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022CB90: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CB94: beq         $v0, $zero, L_8022CBC0
    if (ctx->r2 == 0) {
        // 0x8022CB98: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8022CBC0;
    }
    // 0x8022CB98: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022CB9C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CBA0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CBA4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022CBA8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022CBAC: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022CBB0: jal         0x8022DC08
    // 0x8022CBB4: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_8022DC08_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022CBB4: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x8022CBB8: j           L_8022CC00
    // 0x8022CBBC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022CC00;
    // 0x8022CBBC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022CBC0:
    // 0x8022CBC0: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022CBC4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CBC8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022CBCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CBD0: bne         $v0, $zero, L_8022CBE0
    if (ctx->r2 != 0) {
        // 0x8022CBD4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CBE0;
    }
    // 0x8022CBD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CBD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CBDC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022CBE0:
    // 0x8022CBE0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022CBE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CBE8: jal         0x8004DA90
    // 0x8022CBEC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022CBEC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022CBF0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CBF4: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8022CBF8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CBFC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022CC00:
    // 0x8022CC00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CC04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CC08: jr          $ra
    // 0x8022CC0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CC0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237E60_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237E64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237E68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237E6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237E70: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237E74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237E78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237E7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237E80: lw          $v0, -0x15AC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X15AC);
    // 0x80237E84: jalr        $v0
    // 0x80237E88: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80237E88: nop

    after_0:
    // 0x80237E8C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80237E90: beq         $v0, $zero, L_80237EE4
    if (ctx->r2 == 0) {
        // 0x80237E94: nop
    
            goto L_80237EE4;
    }
    // 0x80237E94: nop

    // 0x80237E98: jal         0x8003B878
    // 0x80237E9C: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_1;
    // 0x80237E9C: nop

    after_1:
    // 0x80237EA0: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x80237EA4: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x80237EA8: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80237EAC: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80237EB0: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80237EB4: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x80237EB8: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80237EBC: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x80237EC0: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x80237EC4: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x80237EC8: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80237ECC: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x80237ED0: srl         $v1, $v1, 16
    ctx->r3 = S32(U32(ctx->r3) >> 16);
    // 0x80237ED4: sw          $a0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r4;
    // 0x80237ED8: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x80237EDC: lhu         $v1, 0x24($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X24);
    // 0x80237EE0: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
L_80237EE4:
    // 0x80237EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237EE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237EEC: jr          $ra
    // 0x80237EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AE0C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AE10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AE14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AE18: jal         0x8004F144
    // 0x8022AE1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022AE1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022AE20: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022AE24: beq         $a0, $zero, L_8022AE60
    if (ctx->r4 == 0) {
        // 0x8022AE28: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022AE60;
    }
    // 0x8022AE28: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022AE2C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022AE30: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022AE34: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022AE38: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022AE3C: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8022AE40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AE44: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022AE48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AE4C: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x8022AE50: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    // 0x8022AE54: addiu       $a1, $s0, 0x1C0
    ctx->r5 = ADD32(ctx->r16, 0X1C0);
    // 0x8022AE58: jal         0x8009A3B4
    // 0x8022AE5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AE5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_8022AE60:
    // 0x8022AE60: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022AE64: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8022AE68: sb          $v1, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r3;
    // 0x8022AE6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AE70: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022AE74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AE78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AE7C: jr          $ra
    // 0x8022AE80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AE80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235B90_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235B90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235B94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235B98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235B9C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235BA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235BA4: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80235BA8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80235BAC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80235BB0: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80235BB4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235BB8: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80235BBC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80235BC0: lw          $a1, -0x181C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X181C);
    // 0x80235BC4: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80235BC8: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80235BCC: lw          $s1, -0x1808($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X1808);
    // 0x80235BD0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80235BD4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80235BD8: lw          $a0, -0x17BC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X17BC);
    // 0x80235BDC: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80235BE0: beq         $v0, $zero, L_80235DFC
    if (ctx->r2 == 0) {
        // 0x80235BE4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80235DFC;
    }
    // 0x80235BE4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80235BE8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235BEC: addu        $at, $at, $v0
    gpr jr_addend_80235BF4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235BF0: lw          $v0, -0xA20($at)
    ctx->r2 = ADD32(ctx->r1, -0XA20);
    // 0x80235BF4: jr          $v0
    // 0x80235BF8: nop

    switch (jr_addend_80235BF4 >> 2) {
        case 0: goto L_80235BFC; break;
        case 1: goto L_80235C18; break;
        case 2: goto L_80235C38; break;
        case 3: goto L_80235CBC; break;
        case 4: goto L_80235CD4; break;
        case 5: goto L_80235CF0; break;
        default: switch_error(__func__, 0x80235BF4, 0x8023F5E0);
    }
    // 0x80235BF8: nop

L_80235BFC:
    // 0x80235BFC: lw          $v0, 0x184($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X184);
    // 0x80235C00: bne         $v0, $s0, L_80235DFC
    if (ctx->r2 != ctx->r16) {
        // 0x80235C04: nop
    
            goto L_80235DFC;
    }
    // 0x80235C04: nop

    // 0x80235C08: lbu         $v0, 0xBD($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XBD);
    // 0x80235C0C: sw          $zero, 0x184($a2)
    MEM_W(0X184, ctx->r6) = 0;
    // 0x80235C10: j           L_80235CDC
    // 0x80235C14: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_80235CDC;
    // 0x80235C14: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_80235C18:
    // 0x80235C18: lui         $v0, 0x7FFF
    ctx->r2 = S32(0X7FFF << 16);
    // 0x80235C1C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80235C20: beq         $a1, $v0, L_80235CE0
    if (ctx->r5 == ctx->r2) {
        // 0x80235C24: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80235CE0;
    }
    // 0x80235C24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80235C28: jal         0x800616FC
    // 0x80235C2C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80235C2C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_0:
    // 0x80235C30: j           L_80235CE0
    // 0x80235C34: nop

        goto L_80235CE0;
    // 0x80235C34: nop

L_80235C38:
    // 0x80235C38: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x80235C3C: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80235C40: beq         $a1, $a2, L_80235C7C
    if (ctx->r5 == ctx->r6) {
        // 0x80235C44: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80235C7C;
    }
    // 0x80235C44: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80235C48: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80235C4C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80235C50: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80235C54: bne         $v0, $zero, L_80235DFC
    if (ctx->r2 != 0) {
        // 0x80235C58: nop
    
            goto L_80235DFC;
    }
    // 0x80235C58: nop

    // 0x80235C5C: beq         $a0, $a2, L_80235CB4
    if (ctx->r4 == ctx->r6) {
        // 0x80235C60: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80235CB4;
    }
    // 0x80235C60: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80235C64: jal         0x8006033C
    // 0x80235C68: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80235C68: nop

    after_1:
    // 0x80235C6C: bne         $v0, $zero, L_80235C94
    if (ctx->r2 != 0) {
        // 0x80235C70: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80235C94;
    }
    // 0x80235C70: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80235C74: j           L_80235CA8
    // 0x80235C78: nop

        goto L_80235CA8;
    // 0x80235C78: nop

L_80235C7C:
    // 0x80235C7C: beq         $a0, $a1, L_80235CB4
    if (ctx->r4 == ctx->r5) {
        // 0x80235C80: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80235CB4;
    }
    // 0x80235C80: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80235C84: jal         0x8006033C
    // 0x80235C88: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80235C88: nop

    after_2:
    // 0x80235C8C: beq         $v0, $zero, L_80235CA8
    if (ctx->r2 == 0) {
        // 0x80235C90: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80235CA8;
    }
    // 0x80235C90: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80235C94:
    // 0x80235C94: jal         0x80036E48
    // 0x80235C98: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x80235C98: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x80235C9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235CA0: j           L_80235DFC
    // 0x80235CA4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80235DFC;
    // 0x80235CA4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80235CA8:
    // 0x80235CA8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80235CAC: j           L_80235DFC
    // 0x80235CB0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80235DFC;
    // 0x80235CB0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80235CB4:
    // 0x80235CB4: j           L_80235DFC
    // 0x80235CB8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80235DFC;
    // 0x80235CB8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80235CBC:
    // 0x80235CBC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80235CC0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80235CC4: beq         $v0, $zero, L_80235CE0
    if (ctx->r2 == 0) {
        // 0x80235CC8: nop
    
            goto L_80235CE0;
    }
    // 0x80235CC8: nop

    // 0x80235CCC: j           L_80235DFC
    // 0x80235CD0: nop

        goto L_80235DFC;
    // 0x80235CD0: nop

L_80235CD4:
    // 0x80235CD4: lbu         $v0, 0xBD($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XBD);
    // 0x80235CD8: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
L_80235CDC:
    // 0x80235CDC: sb          $v0, 0xBD($a2)
    MEM_B(0XBD, ctx->r6) = ctx->r2;
L_80235CE0:
    // 0x80235CE0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80235CE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235CE8: j           L_80235DFC
    // 0x80235CEC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80235DFC;
    // 0x80235CEC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80235CF0:
    // 0x80235CF0: lui         $v0, 0x7FFF
    ctx->r2 = S32(0X7FFF << 16);
    // 0x80235CF4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80235CF8: beq         $s1, $v0, L_80235D20
    if (ctx->r17 == ctx->r2) {
        // 0x80235CFC: nop
    
            goto L_80235D20;
    }
    // 0x80235CFC: nop

    // 0x80235D00: beq         $a0, $v0, L_80235D18
    if (ctx->r4 == ctx->r2) {
        // 0x80235D04: nop
    
            goto L_80235D18;
    }
    // 0x80235D04: nop

    // 0x80235D08: jal         0x8006033C
    // 0x80235D0C: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80235D0C: nop

    after_4:
    // 0x80235D10: beq         $v0, $zero, L_80235D20
    if (ctx->r2 == 0) {
        // 0x80235D14: nop
    
            goto L_80235D20;
    }
    // 0x80235D14: nop

L_80235D18:
    // 0x80235D18: jal         0x8006036C
    // 0x80235D1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80235D1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
L_80235D20:
    // 0x80235D20: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80235D24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235D28: bne         $v1, $v0, L_80235DF4
    if (ctx->r3 != ctx->r2) {
        // 0x80235D2C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235DF4;
    }
    // 0x80235D2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235D30: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80235D34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235D38: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235D3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235D40: lw          $v1, -0x17D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X17D0);
    // 0x80235D44: lui         $v0, 0x7FFF
    ctx->r2 = S32(0X7FFF << 16);
    // 0x80235D48: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80235D4C: beq         $v1, $v0, L_80235DDC
    if (ctx->r3 == ctx->r2) {
        // 0x80235D50: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_80235DDC;
    }
    // 0x80235D50: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80235D54: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x80235D58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235D5C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80235D60: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x80235D64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235D68: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80235D6C: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x80235D70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235D74: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80235D78: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80235D7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235D80: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80235D84: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x80235D88: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235D8C: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80235D90: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80235D94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235D98: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80235D9C: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x80235DA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235DA4: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80235DA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235DAC: sb          $a0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r4;
    // 0x80235DB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235DB4: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80235DB8: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80235DBC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80235DC0: bne         $v1, $v0, L_80235DD4
    if (ctx->r3 != ctx->r2) {
        // 0x80235DC4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235DD4;
    }
    // 0x80235DC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235DC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235DCC: j           L_80235DDC
    // 0x80235DD0: sb          $a0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r4;
        goto L_80235DDC;
    // 0x80235DD0: sb          $a0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r4;
L_80235DD4:
    // 0x80235DD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235DD8: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
L_80235DDC:
    // 0x80235DDC: jal         0x80047B3C
    // 0x80235DE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_6;
    // 0x80235DE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80235DE4: jal         0x8004F4F8
    // 0x80235DE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_7;
    // 0x80235DE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80235DEC: j           L_80235DFC
    // 0x80235DF0: nop

        goto L_80235DFC;
    // 0x80235DF0: nop

L_80235DF4:
    // 0x80235DF4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80235DF8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80235DFC:
    // 0x80235DFC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235E00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235E04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235E08: jr          $ra
    // 0x80235E0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235E0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B11C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B11C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022B120: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B124: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B128: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022B12C: addiu       $s4, $s0, 0x3C8
    ctx->r20 = ADD32(ctx->r16, 0X3C8);
    // 0x8022B130: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022B134: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B138: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022B13C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022B140: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B144: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x8022B148: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B14C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B150: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022B154: jal         0x8009A3B4
    // 0x8022B158: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B158: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    after_0:
    // 0x8022B15C: addiu       $s3, $s0, 0x3D0
    ctx->r19 = ADD32(ctx->r16, 0X3D0);
    // 0x8022B160: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022B164: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022B168: jal         0x8009A3B4
    // 0x8022B16C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B16C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022B170: jal         0x800A3450
    // 0x8022B174: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022B174: nop

    after_2:
    // 0x8022B178: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022B17C: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022B180: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B184: andi        $s1, $v0, 0x3
    ctx->r17 = ctx->r2 & 0X3;
    // 0x8022B188: sll         $s1, $s1, 7
    ctx->r17 = S32(ctx->r17 << 7);
    // 0x8022B18C: jal         0x8004EC38
    // 0x8022B190: addiu       $s1, $s1, 0x100
    ctx->r17 = ADD32(ctx->r17, 0X100);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8022B190: addiu       $s1, $s1, 0x100
    ctx->r17 = ADD32(ctx->r17, 0X100);
    after_3:
    // 0x8022B194: jal         0x800A3450
    // 0x8022B198: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022B198: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_4:
    // 0x8022B19C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022B1A0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022B1A4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022B1A8: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8022B1AC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022B1B0: andi        $a2, $s0, 0xFFF
    ctx->r6 = ctx->r16 & 0XFFF;
    // 0x8022B1B4: sll         $a3, $s1, 4
    ctx->r7 = S32(ctx->r17 << 4);
    // 0x8022B1B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022B1BC: jal         0x8004DBA0
    // 0x8022B1C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_5;
    // 0x8022B1C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
    // 0x8022B1C4: jal         0x8004F144
    // 0x8022B1C8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_6;
    // 0x8022B1C8: nop

    after_6:
    // 0x8022B1CC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022B1D0: beq         $s0, $zero, L_8022B204
    if (ctx->r16 == 0) {
        // 0x8022B1D4: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8022B204;
    }
    // 0x8022B1D4: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022B1D8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022B1DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B1E0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B1E4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022B1E8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B1EC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022B1F0: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8022B1F4: jal         0x8009A3B4
    // 0x8022B1F8: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022B1F8: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_7:
    // 0x8022B1FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B200: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
L_8022B204:
    // 0x8022B204: jal         0x8004F144
    // 0x8022B208: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x8022B208: nop

    after_8:
    // 0x8022B20C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022B210: beq         $s0, $zero, L_8022B248
    if (ctx->r16 == 0) {
        // 0x8022B214: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8022B248;
    }
    // 0x8022B214: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022B218: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022B21C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B220: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B224: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022B228: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B22C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022B230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B234: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022B238: jal         0x8009A3B4
    // 0x8022B23C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022B23C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_9:
    // 0x8022B240: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B244: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
L_8022B248:
    // 0x8022B248: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8022B24C: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x8022B250: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x8022B254: jal         0x8003491C
    // 0x8022B258: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_10;
    // 0x8022B258: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_10:
    // 0x8022B25C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022B260: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B264: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B268: jal         0x80238028
    // 0x8022B26C: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_80238028_ovl3(rdram, ctx);
        goto after_11;
    // 0x8022B26C: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_11:
    // 0x8022B270: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B274: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022B278: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022B27C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B280: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B284: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B288: jr          $ra
    // 0x8022B28C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022B28C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80232A40_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232A40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232A44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232A48: jal         0x80232BB0
    // 0x80232A4C: nop

    func_80232BB0_ovl3(rdram, ctx);
        goto after_0;
    // 0x80232A4C: nop

    after_0:
    // 0x80232A50: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232A54: jr          $ra
    // 0x80232A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C1F0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C1F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C1F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C1F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C1FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C200: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022C204: addiu       $s1, $s1, -0x218C
    ctx->r17 = ADD32(ctx->r17, -0X218C);
    // 0x8022C208: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C20C: jal         0x800A3450
    // 0x8022C210: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022C210: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x8022C214: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022C218: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022C21C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C220: lbu         $v1, -0x219C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X219C);
    // 0x8022C224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C228: beq         $v1, $v0, L_8022C2C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C22C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022C2C8;
    }
    // 0x8022C22C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022C230: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C234: beql        $v0, $zero, L_8022C24C
    if (ctx->r2 == 0) {
        // 0x8022C238: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C24C;
    }
    goto skip_0;
    // 0x8022C238: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C23C: beq         $v1, $zero, L_8022C25C
    if (ctx->r3 == 0) {
        // 0x8022C240: nop
    
            goto L_8022C25C;
    }
    // 0x8022C240: nop

    // 0x8022C244: j           L_8022C314
    // 0x8022C248: nop

        goto L_8022C314;
    // 0x8022C248: nop

L_8022C24C:
    // 0x8022C24C: beq         $v1, $v0, L_8022C2E8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C250: nop
    
            goto L_8022C2E8;
    }
    // 0x8022C250: nop

    // 0x8022C254: j           L_8022C314
    // 0x8022C258: nop

        goto L_8022C314;
    // 0x8022C258: nop

L_8022C25C:
    // 0x8022C25C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x8022C260: bne         $v0, $zero, L_8022C274
    if (ctx->r2 != 0) {
        // 0x8022C264: nop
    
            goto L_8022C274;
    }
    // 0x8022C264: nop

    // 0x8022C268: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C26C: j           L_8022C27C
    // 0x8022C270: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022C27C;
    // 0x8022C270: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022C274:
    // 0x8022C274: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C278: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8022C27C:
    // 0x8022C27C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C280: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022C284: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022C288: beq         $v0, $zero, L_8022C2A4
    if (ctx->r2 == 0) {
        // 0x8022C28C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C2A4;
    }
    // 0x8022C28C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C290: jal         0x8022DC58
    // 0x8022C294: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8022DC58_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022C294: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8022C298: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C29C: j           L_8022C2B8
    // 0x8022C2A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022C2B8;
    // 0x8022C2A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022C2A4:
    // 0x8022C2A4: jal         0x8022DC58
    // 0x8022C2A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022DC58_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022C2A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8022C2AC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C2B0: jal         0x8022DC18
    // 0x8022C2B4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_8022DC18_ovl3(rdram, ctx);
        goto after_3;
    // 0x8022C2B4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_8022C2B8:
    // 0x8022C2B8: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022C2BC: addiu       $s1, $s1, -0x218C
    ctx->r17 = ADD32(ctx->r17, -0X218C);
    // 0x8022C2C0: j           L_8022C314
    // 0x8022C2C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022C314;
    // 0x8022C2C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022C2C8:
    // 0x8022C2C8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C2CC: jal         0x8022DC08
    // 0x8022C2D0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_8022DC08_ovl3(rdram, ctx);
        goto after_4;
    // 0x8022C2D0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x8022C2D4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C2D8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C2DC: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x8022C2E0: j           L_8022C314
    // 0x8022C2E4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8022C314;
    // 0x8022C2E4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022C2E8:
    // 0x8022C2E8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C2EC: jal         0x8022DC18
    // 0x8022C2F0: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_8022DC18_ovl3(rdram, ctx);
        goto after_5;
    // 0x8022C2F0: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x8022C2F4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C2F8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C2FC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C300: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022C304: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C308: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022C30C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x8022C310: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C314:
    // 0x8022C314: jal         0x800A3450
    // 0x8022C318: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022C318: nop

    after_6:
    // 0x8022C31C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022C320: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022C324: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022C328: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022C32C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C330: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C334: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C338: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C33C: jr          $ra
    // 0x8022C340: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C340: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802314A0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802314A0: lhu         $v1, 0x14($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X14);
    // 0x802314A4: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x802314A8: beq         $v0, $zero, L_802314E4
    if (ctx->r2 == 0) {
        // 0x802314AC: addiu       $sp, $sp, -0x18
        ctx->r29 = ADD32(ctx->r29, -0X18);
            goto L_802314E4;
    }
    // 0x802314AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802314B0: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x802314B4: lh          $v1, 0x58($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X58);
    // 0x802314B8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x802314BC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802314C0: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x802314C4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x802314C8: slti        $v1, $v1, -0x7F
    ctx->r3 = SIGNED(ctx->r3) < -0X7F ? 1 : 0;
    // 0x802314CC: bnel        $v1, $zero, L_802315BC
    if (ctx->r3 != 0) {
        // 0x802314D0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802315BC;
    }
    goto skip_0;
    // 0x802314D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x802314D4: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x802314D8: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
    // 0x802314DC: j           L_802315BC
    // 0x802314E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802315BC;
    // 0x802314E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802314E4:
    // 0x802314E4: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x802314E8: beq         $v0, $zero, L_80231520
    if (ctx->r2 == 0) {
        // 0x802314EC: nop
    
            goto L_80231520;
    }
    // 0x802314EC: nop

    // 0x802314F0: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x802314F4: lh          $v1, 0x58($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X58);
    // 0x802314F8: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x802314FC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231500: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x80231504: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80231508: slti        $v1, $v1, 0x80
    ctx->r3 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x8023150C: beq         $v1, $zero, L_80231518
    if (ctx->r3 == 0) {
        // 0x80231510: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_80231518;
    }
    // 0x80231510: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80231514: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
L_80231518:
    // 0x80231518: j           L_802315BC
    // 0x8023151C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_802315BC;
    // 0x8023151C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80231520:
    // 0x80231520: lhu         $v0, 0x2A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2A);
    // 0x80231524: sll         $a3, $v0, 16
    ctx->r7 = S32(ctx->r2 << 16);
    // 0x80231528: sra         $a2, $a3, 16
    ctx->r6 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8023152C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80231530: bnel        $a2, $v0, L_80231570
    if (ctx->r6 != ctx->r2) {
        // 0x80231534: lui         $v0, 0x38E3
        ctx->r2 = S32(0X38E3 << 16);
            goto L_80231570;
    }
    goto skip_1;
    // 0x80231534: lui         $v0, 0x38E3
    ctx->r2 = S32(0X38E3 << 16);
    skip_1:
    // 0x80231538: lh          $v1, 0x58($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X58);
    // 0x8023153C: beq         $v1, $zero, L_80231560
    if (ctx->r3 == 0) {
        // 0x80231540: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80231560;
    }
    // 0x80231540: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80231544: blezl       $v1, L_80231550
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80231548: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_80231550;
    }
    goto skip_2;
    // 0x80231548: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    skip_2:
    // 0x8023154C: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
L_80231550:
    // 0x80231550: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
    // 0x80231554: lh          $v0, 0x58($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X58);
    // 0x80231558: bne         $v0, $zero, L_802315C0
    if (ctx->r2 != 0) {
        // 0x8023155C: nop
    
            goto L_802315C0;
    }
    // 0x8023155C: nop

L_80231560:
    // 0x80231560: lhu         $v0, 0x16($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X16);
    // 0x80231564: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80231568: j           L_802315BC
    // 0x8023156C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
        goto L_802315BC;
    // 0x8023156C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
L_80231570:
    // 0x80231570: ori         $v0, $v0, 0x8E39
    ctx->r2 = ctx->r2 | 0X8E39;
    // 0x80231574: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231578: sra         $v0, $a3, 31
    ctx->r2 = S32(SIGNED(ctx->r7) >> 31);
    // 0x8023157C: mfhi        $t0
    ctx->r8 = hi;
    // 0x80231580: sra         $v1, $t0, 3
    ctx->r3 = S32(SIGNED(ctx->r8) >> 3);
    // 0x80231584: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231588: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8023158C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231590: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231594: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x80231598: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023159C: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x802315A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802315A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802315A8: lhu         $v0, -0x1FBC($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1FBC);
    // 0x802315AC: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
    // 0x802315B0: lhu         $v0, 0x2A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2A);
    // 0x802315B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802315B8: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
L_802315BC:
    // 0x802315BC: sh          $v0, 0x2A($a1)
    MEM_H(0X2A, ctx->r5) = ctx->r2;
L_802315C0:
    // 0x802315C0: jr          $ra
    // 0x802315C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802315C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225150_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x42B4
    ctx->r2 = ADD32(ctx->r2, -0X42B4);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x41E8
    ctx->r2 = ADD32(ctx->r2, -0X41E8);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x41B4
    ctx->r2 = ADD32(ctx->r2, -0X41B4);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x4130
    ctx->r2 = ADD32(ctx->r2, -0X4130);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x40C8
    ctx->r2 = ADD32(ctx->r2, -0X40C8);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x4094
    ctx->r2 = ADD32(ctx->r2, -0X4094);
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
RECOMP_FUNC void func_80226EA0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226EA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226EA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226EA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226EAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226EB0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80226EB4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226EB8: beq         $v1, $v0, L_80226F0C
    if (ctx->r3 == ctx->r2) {
        // 0x80226EBC: nop
    
            goto L_80226F0C;
    }
    // 0x80226EBC: nop

    // 0x80226EC0: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80226EC4: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226EC8: jalr        $v0
    // 0x80226ECC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226ECC: nop

    after_0:
    // 0x80226ED0: jal         0x8006072C
    // 0x80226ED4: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_1;
    // 0x80226ED4: nop

    after_1:
    // 0x80226ED8: beq         $v0, $zero, L_80226F1C
    if (ctx->r2 == 0) {
        // 0x80226EDC: nop
    
            goto L_80226F1C;
    }
    // 0x80226EDC: nop

    // 0x80226EE0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226EE4: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x80226EE8: bne         $v0, $zero, L_80226F1C
    if (ctx->r2 != 0) {
        // 0x80226EEC: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_80226F1C;
    }
    // 0x80226EEC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80226EF0: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x80226EF4: jal         0x80036E48
    // 0x80226EF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80226EF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_2:
    // 0x80226EFC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226F00: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226F04: j           L_80226F18
    // 0x80226F08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226F18;
    // 0x80226F08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226F0C:
    // 0x80226F0C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226F10: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226F14: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_80226F18:
    // 0x80226F18: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226F1C:
    // 0x80226F1C: jal         0x8005FB90
    // 0x80226F20: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x80226F20: nop

    after_3:
    // 0x80226F24: jal         0x80060018
    // 0x80226F28: nop

    func_80060018_3B418(rdram, ctx);
        goto after_4;
    // 0x80226F28: nop

    after_4:
    // 0x80226F2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226F30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226F34: jr          $ra
    // 0x80226F38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226F38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227790_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227790: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227794: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80227798: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022779C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802277A0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802277A4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802277A8: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x802277AC: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x802277B0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802277B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802277B8: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x802277BC: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x802277C0: beq         $v1, $v0, L_802277DC
    if (ctx->r3 == ctx->r2) {
        // 0x802277C4: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_802277DC;
    }
    // 0x802277C4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x802277C8: bne         $v1, $v0, L_802277D8
    if (ctx->r3 != ctx->r2) {
        // 0x802277CC: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802277D8;
    }
    // 0x802277CC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802277D0: j           L_802277DC
    // 0x802277D4: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
        goto L_802277DC;
    // 0x802277D4: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_802277D8:
    // 0x802277D8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_802277DC:
    // 0x802277DC: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x802277E0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x802277E4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802277E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802277EC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802277F0: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x802277F4: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x802277F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802277FC: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227800: beq         $a0, $v1, L_80227828
    if (ctx->r4 == ctx->r3) {
        // 0x80227804: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80227828;
    }
    // 0x80227804: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80227808: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022780C: jal         0x8003B85C
    // 0x80227810: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80227810: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80227814: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80227818: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x8022781C: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x80227820: jal         0x8003B840
    // 0x80227824: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80227824: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80227828:
    // 0x80227828: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022782C: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x80227830: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80227834: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x80227838: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022783C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227840: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80227844: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80227848: beq         $v1, $v0, L_80227864
    if (ctx->r3 == ctx->r2) {
        // 0x8022784C: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80227864;
    }
    // 0x8022784C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80227850: bne         $v1, $v0, L_80227860
    if (ctx->r3 != ctx->r2) {
        // 0x80227854: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80227860;
    }
    // 0x80227854: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80227858: j           L_80227864
    // 0x8022785C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80227864;
    // 0x8022785C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80227860:
    // 0x80227860: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_80227864:
    // 0x80227864: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x80227868: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022786C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227870: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227874: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80227878: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x8022787C: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80227880: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227884: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227888: beq         $a0, $v1, L_802278B0
    if (ctx->r4 == ctx->r3) {
        // 0x8022788C: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_802278B0;
    }
    // 0x8022788C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80227890: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80227894: jal         0x8003B85C
    // 0x80227898: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80227898: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x8022789C: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x802278A0: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x802278A4: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x802278A8: jal         0x8003B840
    // 0x802278AC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802278AC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_802278B0:
    // 0x802278B0: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x802278B4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x802278B8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802278BC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802278C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802278C4: jr          $ra
    // 0x802278C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802278C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802278CC: nop

;}
RECOMP_FUNC void func_80230B68_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230B68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230B6C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230B70: jal         0x8004F418
    // 0x80230B74: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80230B74: nop

    after_0:
    // 0x80230B78: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230B7C: jr          $ra
    // 0x80230B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023503C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023503C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80235040: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80235044: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235048: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023504C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80235050: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80235054: addiu       $a0, $a0, -0x3A50
    ctx->r4 = ADD32(ctx->r4, -0X3A50);
    // 0x80235058: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023505C: beq         $v1, $v0, L_802350E0
    if (ctx->r3 == ctx->r2) {
        // 0x80235060: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802350E0;
    }
    // 0x80235060: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80235064: beql        $v0, $zero, L_8023507C
    if (ctx->r2 == 0) {
        // 0x80235068: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023507C;
    }
    goto skip_0;
    // 0x80235068: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023506C: beq         $v1, $zero, L_80235094
    if (ctx->r3 == 0) {
        // 0x80235070: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235094;
    }
    // 0x80235070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235074: j           L_80235174
    // 0x80235078: nop

        goto L_80235174;
    // 0x80235078: nop

L_8023507C:
    // 0x8023507C: beq         $v1, $v0, L_80235104
    if (ctx->r3 == ctx->r2) {
        // 0x80235080: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80235104;
    }
    // 0x80235080: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235084: beq         $v1, $v0, L_80235158
    if (ctx->r3 == ctx->r2) {
        // 0x80235088: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235158;
    }
    // 0x80235088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023508C: j           L_80235174
    // 0x80235090: nop

        goto L_80235174;
    // 0x80235090: nop

L_80235094:
    // 0x80235094: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80235098: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8023509C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802350A0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802350A4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802350A8: lh          $a0, -0x2400($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X2400);
    // 0x802350AC: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x802350B0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x802350B4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802350B8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802350BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802350C0: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x802350C4: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802350C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802350CC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x802350D0: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x802350D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802350D8: j           L_80235170
    // 0x802350DC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_80235170;
    // 0x802350DC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_802350E0:
    // 0x802350E0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802350E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802350E8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802350EC: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x802350F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802350F4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802350F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802350FC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80235100: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80235104:
    // 0x80235104: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80235108: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023510C: slti        $v0, $v0, 0x190
    ctx->r2 = SIGNED(ctx->r2) < 0X190 ? 1 : 0;
    // 0x80235110: beq         $v0, $zero, L_8023511C
    if (ctx->r2 == 0) {
        // 0x80235114: addiu       $v0, $v1, 0x8
        ctx->r2 = ADD32(ctx->r3, 0X8);
            goto L_8023511C;
    }
    // 0x80235114: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80235118: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8023511C:
    // 0x8023511C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80235120: addiu       $v0, $v1, -0x14
    ctx->r2 = ADD32(ctx->r3, -0X14);
    // 0x80235124: sltiu       $v0, $v0, 0x64
    ctx->r2 = ctx->r2 < 0X64 ? 1 : 0;
    // 0x80235128: beq         $v0, $zero, L_80235140
    if (ctx->r2 == 0) {
        // 0x8023512C: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_80235140;
    }
    // 0x8023512C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80235130: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80235134: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80235138: j           L_80235170
    // 0x8023513C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80235170;
    // 0x8023513C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80235140:
    // 0x80235140: bne         $v1, $v0, L_80235174
    if (ctx->r3 != ctx->r2) {
        // 0x80235144: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235174;
    }
    // 0x80235144: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235148: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023514C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235150: j           L_80235174
    // 0x80235154: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80235174;
    // 0x80235154: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80235158:
    // 0x80235158: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8023515C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235160: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x80235164: beq         $v0, $zero, L_80235170
    if (ctx->r2 == 0) {
        // 0x80235168: addiu       $v0, $v1, 0x10
        ctx->r2 = ADD32(ctx->r3, 0X10);
            goto L_80235170;
    }
    // 0x80235168: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8023516C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80235170:
    // 0x80235170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80235174:
    // 0x80235174: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80235178: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023517C: jal         0x8004DA90
    // 0x80235180: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80235180: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80235184: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80235188: jal         0x8004DD04
    // 0x8023518C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8023518C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80235190: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80235194: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235198: jr          $ra
    // 0x8023519C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023519C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225360_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225364: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225368: jal         0x80060798
    // 0x8022536C: nop

    func_80060798_3BB98(rdram, ctx);
        goto after_0;
    // 0x8022536C: nop

    after_0:
    // 0x80225370: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225374: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    // 0x80225378: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022537C: jr          $ra
    // 0x80225380: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225380: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238478_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238478: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023847C: addiu       $v1, $a0, 0x28
    ctx->r3 = ADD32(ctx->r4, 0X28);
    // 0x80238480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238484: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80238488: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8023848C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80238490: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x80238494: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
L_80238498:
    // 0x80238498: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8023849C: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x802384A0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802384A4: sltiu       $v0, $a1, 0x10
    ctx->r2 = ctx->r5 < 0X10 ? 1 : 0;
    // 0x802384A8: bne         $v0, $zero, L_80238498
    if (ctx->r2 != 0) {
        // 0x802384AC: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80238498;
    }
    // 0x802384AC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x802384B0: jr          $ra
    // 0x802384B4: nop

    TRACE_RETURN()
    return;
    // 0x802384B4: nop

;}
RECOMP_FUNC void func_80236B6C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236B6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236B70: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236B74: jal         0x8004F5C4
    // 0x80236B78: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80236B78: nop

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
    // 0x80236B88: nop

    // 0x80236B8C: nop

;}
RECOMP_FUNC void func_8022B67C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B67C: jr          $ra
    // 0x8022B680: nop

    TRACE_RETURN()
    return;
    // 0x8022B680: nop

    // 0x8022B684: nop

    // 0x8022B688: nop

    // 0x8022B68C: nop

;}
RECOMP_FUNC void func_802278D0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802278D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802278D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802278DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802278E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802278E4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802278E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802278EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802278F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802278F4: lw          $v0, -0x2EF0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2EF0);
    // 0x802278F8: jalr        $v0
    // 0x802278FC: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802278FC: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    after_0:
    // 0x80227900: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80227904: bne         $v0, $zero, L_80227918
    if (ctx->r2 != 0) {
        // 0x80227908: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227918;
    }
    // 0x80227908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022790C: jal         0x8005044C
    // 0x80227910: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80227910: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227918:
    // 0x80227918: jal         0x80227D80
    // 0x8022791C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80227D80_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022791C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80227920: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227924: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227928: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022792C: jr          $ra
    // 0x80227930: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227930: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B9B8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B9B8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023B9BC: bne         $v0, $zero, L_8023B9D4
    if (ctx->r2 != 0) {
        // 0x8023B9C0: nop
    
            goto L_8023B9D4;
    }
    // 0x8023B9C0: nop

    // 0x8023B9C4: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x8023B9C8: sb          $zero, 0x448($a0)
    MEM_B(0X448, ctx->r4) = 0;
    // 0x8023B9CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B9D0: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
L_8023B9D4:
    // 0x8023B9D4: jr          $ra
    // 0x8023B9D8: nop

    TRACE_RETURN()
    return;
    // 0x8023B9D8: nop

;}
RECOMP_FUNC void func_802251B4_ovl3(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x802251C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802251C8: bne         $v0, $zero, L_802251F8
    if (ctx->r2 != 0) {
        // 0x802251CC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251F8;
    }
    // 0x802251CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D0: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802251D4: bne         $v0, $zero, L_802251E4
    if (ctx->r2 != 0) {
        // 0x802251D8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802251E4;
    }
    // 0x802251D8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802251DC: bne         $v1, $v0, L_802251FC
    if (ctx->r3 != ctx->r2) {
        // 0x802251E0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802251FC;
    }
    // 0x802251E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_802251E4:
    // 0x802251E4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251E8: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251EC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802251F0: j           L_80225200
    // 0x802251F4: addiu       $a1, $a1, -0x3CFC
    ctx->r5 = ADD32(ctx->r5, -0X3CFC);
        goto L_80225200;
    // 0x802251F4: addiu       $a1, $a1, -0x3CFC
    ctx->r5 = ADD32(ctx->r5, -0X3CFC);
L_802251F8:
    // 0x802251F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_802251FC:
    // 0x802251FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80225200:
    // 0x80225200: jal         0x80037D80
    // 0x80225204: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x80225204: nop

    after_0:
    // 0x80225208: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8022520C: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x80225210: lb          $t1, 0x0($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X0);
    // 0x80225214: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80225218: addiu       $a0, $a0, 0xCB4
    ctx->r4 = ADD32(ctx->r4, 0XCB4);
    // 0x8022521C: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x80225220: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225224: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80225228: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022522C: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x80225230: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x80225234: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225238: sh          $a2, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r6;
    // 0x8022523C: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x80225240: lui         $a3, 0x7FE9
    ctx->r7 = S32(0X7FE9 << 16);
    // 0x80225244: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x80225248: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022524C: sb          $a1, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r5;
    // 0x80225250: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x80225254: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225258: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8022525C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80225260: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225264: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225268: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022526C: lb          $v1, -0x3BA0($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BA0);
    // 0x80225270: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225274: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225278: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022527C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225280: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225284: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225288: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022528C: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225290: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225294: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x80225298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022529C: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x802252A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252A4: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
    // 0x802252A8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252AC: sb          $t0, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r8;
    // 0x802252B0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252B4: sb          $a2, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r6;
    // 0x802252B8: beq         $v1, $zero, L_802252D0
    if (ctx->r3 == 0) {
        // 0x802252BC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802252D0;
    }
    // 0x802252BC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802252C0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252C4: sb          $v0, -0x3B9F($at)
    MEM_B(-0X3B9F, ctx->r1) = ctx->r2;
    // 0x802252C8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252CC: sb          $zero, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = 0;
L_802252D0:
    // 0x802252D0: sll         $v0, $t1, 2
    ctx->r2 = S32(ctx->r9 << 2);
    // 0x802252D4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802252D8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802252DC: lw          $a0, -0x3E5C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E5C);
    // 0x802252E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802252E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802252E8: lw          $v0, -0x3DC4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3DC4);
    // 0x802252EC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802252F0: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x802252F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252F8: jal         0x8004C790
    // 0x802252FC: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_1;
    // 0x802252FC: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_1:
    // 0x80225300: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225304: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225308: addiu       $a0, $a0, -0x3D44
    ctx->r4 = ADD32(ctx->r4, -0X3D44);
    // 0x8022530C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80225310: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225314: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225318: lw          $v1, -0x3D1C($at)
    ctx->r3 = MEM_W(ctx->r1, -0X3D1C);
    // 0x8022531C: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x80225320: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225324: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80225328: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022532C: addiu       $v0, $v0, -0x3DA4
    ctx->r2 = ADD32(ctx->r2, -0X3DA4);
    // 0x80225330: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225334: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225338: jal         0x80054FB8
    // 0x8022533C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_2;
    // 0x8022533C: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_2:
    // 0x80225340: jal         0x8004A614
    // 0x80225344: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_3;
    // 0x80225344: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x80225348: jal         0x80225360
    // 0x8022534C: nop

    func_80225360_ovl3(rdram, ctx);
        goto after_4;
    // 0x8022534C: nop

    after_4:
    // 0x80225350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225354: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225358: jr          $ra
    // 0x8022535C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022535C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BE78_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BE78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BE7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BE80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BE84: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BE88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BE8C: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022BE90: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022BE94: jal         0x8004FA7C
    // 0x8022BE98: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022BE98: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022BE9C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022BEA0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022BEA4: bne         $v0, $zero, L_8022BEC8
    if (ctx->r2 != 0) {
        // 0x8022BEA8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022BEC8;
    }
    // 0x8022BEA8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022BEAC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022BEB0: jal         0x8022DC08
    // 0x8022BEB4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_8022DC08_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022BEB4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022BEB8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022BEBC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022BEC0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022BEC4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022BEC8:
    // 0x8022BEC8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BECC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022BED0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BED4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022BED8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022BEDC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BEE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BEE4: jr          $ra
    // 0x8022BEE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BEE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E1A0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E1A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E1A4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022E1A8: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8022E1AC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022E1B0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022E1B4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022E1B8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8022E1BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E1C0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022E1C4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022E1C8: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x8022E1CC: addiu       $s6, $s6, -0xA88
    ctx->r22 = ADD32(ctx->r22, -0XA88);
    // 0x8022E1D0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022E1D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E1D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E1DC: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
L_8022E1E0:
    // 0x8022E1E0: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x8022E1E4: bne         $v0, $zero, L_8022E1F0
    if (ctx->r2 != 0) {
        // 0x8022E1E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E1F0;
    }
    // 0x8022E1E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E1EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022E1F0:
    // 0x8022E1F0: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8022E1F4: andi        $v1, $s2, 0xFF
    ctx->r3 = ctx->r18 & 0XFF;
    // 0x8022E1F8: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022E1FC: beq         $v0, $zero, L_8022E25C
    if (ctx->r2 == 0) {
        // 0x8022E200: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022E25C;
    }
    // 0x8022E200: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022E204: addu        $v0, $v0, $s6
    gpr jr_addend_8022E20C = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x8022E208: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8022E20C: jr          $v0
    // 0x8022E210: nop

    switch (jr_addend_8022E20C >> 2) {
        case 0: goto L_8022E214; break;
        case 1: goto L_8022E220; break;
        case 2: goto L_8022E22C; break;
        case 3: goto L_8022E238; break;
        case 4: goto L_8022E244; break;
        case 5: goto L_8022E250; break;
        default: switch_error(__func__, 0x8022E20C, 0x8023F578);
    }
    // 0x8022E210: nop

L_8022E214:
    // 0x8022E214: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022E218: j           L_8022E25C
    // 0x8022E21C: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
        goto L_8022E25C;
    // 0x8022E21C: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
L_8022E220:
    // 0x8022E220: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022E224: j           L_8022E258
    // 0x8022E228: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_8022E258;
    // 0x8022E228: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_8022E22C:
    // 0x8022E22C: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022E230: j           L_8022E258
    // 0x8022E234: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
        goto L_8022E258;
    // 0x8022E234: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_8022E238:
    // 0x8022E238: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x8022E23C: j           L_8022E25C
    // 0x8022E240: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
        goto L_8022E25C;
    // 0x8022E240: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
L_8022E244:
    // 0x8022E244: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x8022E248: j           L_8022E258
    // 0x8022E24C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_8022E258;
    // 0x8022E24C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_8022E250:
    // 0x8022E250: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x8022E254: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_8022E258:
    // 0x8022E258: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
L_8022E25C:
    // 0x8022E25C: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x8022E260: beq         $v0, $zero, L_8022E2C4
    if (ctx->r2 == 0) {
        // 0x8022E264: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_8022E2C4;
    }
    // 0x8022E264: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022E268: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022E26C: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x8022E270: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022E274: beq         $v0, $zero, L_8022E2A4
    if (ctx->r2 == 0) {
        // 0x8022E278: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022E2A4;
    }
    // 0x8022E278: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022E27C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022E280: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022E284:
    // 0x8022E284: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x8022E288: jal         0x8022E5C0
    // 0x8022E28C: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022E5C0_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022E28C: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022E290: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022E294: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022E298: sltu        $v0, $v0, $s1
    ctx->r2 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x8022E29C: bne         $v0, $zero, L_8022E284
    if (ctx->r2 != 0) {
        // 0x8022E2A0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022E284;
    }
    // 0x8022E2A0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022E2A4:
    // 0x8022E2A4: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022E2A8: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x8022E2AC: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x8022E2B0: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022E2B4: beq         $v0, $zero, L_8022E320
    if (ctx->r2 == 0) {
        // 0x8022E2B8: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022E320;
    }
    // 0x8022E2B8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022E2BC: j           L_8022E320
    // 0x8022E2C0: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
        goto L_8022E320;
    // 0x8022E2C0: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_8022E2C4:
    // 0x8022E2C4: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x8022E2C8: addu        $v1, $s3, $a0
    ctx->r3 = ADD32(ctx->r19, ctx->r4);
    // 0x8022E2CC: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x8022E2D0: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022E2D4: bnel        $v0, $zero, L_8022E324
    if (ctx->r2 != 0) {
        // 0x8022E2D8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8022E324;
    }
    goto skip_0;
    // 0x8022E2D8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x8022E2DC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022E2E0: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x8022E2E4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022E2E8: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    // 0x8022E2EC: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x8022E2F0: addu        $v1, $s3, $v0
    ctx->r3 = ADD32(ctx->r19, ctx->r2);
    // 0x8022E2F4: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_8022E2F8:
    // 0x8022E2F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022E2FC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022E300: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E304: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8022E308: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8022E30C: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x8022E310: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022E314: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022E318: bne         $v0, $zero, L_8022E2F8
    if (ctx->r2 != 0) {
        // 0x8022E31C: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_8022E2F8;
    }
    // 0x8022E31C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_8022E320:
    // 0x8022E320: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022E324:
    // 0x8022E324: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022E328: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x8022E32C: bne         $v0, $zero, L_8022E1E0
    if (ctx->r2 != 0) {
        // 0x8022E330: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_8022E1E0;
    }
    // 0x8022E330: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022E334: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E338: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022E33C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022E340: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022E344: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E348: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E34C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E350: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E354: jr          $ra
    // 0x8022E358: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022E358: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023A234_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A234: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A238: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A23C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023A240: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023A244: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A248: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8023A24C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023A250: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8023A254: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8023A258: beq         $v0, $zero, L_8023A454
    if (ctx->r2 == 0) {
        // 0x8023A25C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023A454;
    }
    // 0x8023A25C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023A260: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A264: addu        $at, $at, $v0
    gpr jr_addend_8023A26C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A268: lw          $v0, -0x990($at)
    ctx->r2 = ADD32(ctx->r1, -0X990);
    // 0x8023A26C: jr          $v0
    // 0x8023A270: nop

    switch (jr_addend_8023A26C >> 2) {
        case 0: goto L_8023A274; break;
        case 1: goto L_8023A29C; break;
        case 2: goto L_8023A30C; break;
        case 3: goto L_8023A374; break;
        case 4: goto L_8023A394; break;
        case 5: goto L_8023A3C4; break;
        case 6: goto L_8023A3F4; break;
        case 7: goto L_8023A41C; break;
        default: switch_error(__func__, 0x8023A26C, 0x8023F670);
    }
    // 0x8023A270: nop

L_8023A274:
    // 0x8023A274: jal         0x8023AC58
    // 0x8023A278: nop

    func_8023AC58_ovl3(rdram, ctx);
        goto after_0;
    // 0x8023A278: nop

    after_0:
    // 0x8023A27C: beq         $v0, $zero, L_8023A294
    if (ctx->r2 == 0) {
        // 0x8023A280: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023A294;
    }
    // 0x8023A280: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023A284: lbu         $v0, 0xBD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBD);
    // 0x8023A288: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8023A28C: j           L_8023A40C
    // 0x8023A290: sb          $v0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r2;
        goto L_8023A40C;
    // 0x8023A290: sb          $v0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r2;
L_8023A294:
    // 0x8023A294: j           L_8023A450
    // 0x8023A298: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8023A450;
    // 0x8023A298: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8023A29C:
    // 0x8023A29C: jal         0x80070E54
    // 0x8023A2A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070E54_4C254(rdram, ctx);
        goto after_1;
    // 0x8023A2A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023A2A4: bne         $v0, $zero, L_8023A454
    if (ctx->r2 != 0) {
        // 0x8023A2A8: addiu       $a0, $zero, 0x7F
        ctx->r4 = ADD32(0, 0X7F);
            goto L_8023A454;
    }
    // 0x8023A2A8: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
    // 0x8023A2AC: jal         0x8004CB2C
    // 0x8023A2B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_2;
    // 0x8023A2B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8023A2B4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A2B8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023A2BC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8023A2C0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023A2C4: beq         $v0, $zero, L_8023A2E8
    if (ctx->r2 == 0) {
        // 0x8023A2C8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023A2E8;
    }
    // 0x8023A2C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A2CC: jal         0x80061798
    // 0x8023A2D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_3;
    // 0x8023A2D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x8023A2D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A2D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023A2DC: jal         0x80036B00
    // 0x8023A2E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_4;
    // 0x8023A2E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8023A2E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8023A2E8:
    // 0x8023A2E8: jal         0x800616FC
    // 0x8023A2EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8023A2EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x8023A2F0: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    // 0x8023A2F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023A2F8: jal         0x8002A2F8
    // 0x8023A2FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_6;
    // 0x8023A2FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8023A300: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023A304: j           L_8023A410
    // 0x8023A308: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
        goto L_8023A410;
    // 0x8023A308: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
L_8023A30C:
    // 0x8023A30C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A310: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023A314: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8023A318: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023A31C: bne         $v0, $zero, L_8023A454
    if (ctx->r2 != 0) {
        // 0x8023A320: addiu       $a0, $zero, 0x7F
        ctx->r4 = ADD32(0, 0X7F);
            goto L_8023A454;
    }
    // 0x8023A320: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
    // 0x8023A324: jal         0x8004CB2C
    // 0x8023A328: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_7;
    // 0x8023A328: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x8023A32C: jal         0x8006033C
    // 0x8023A330: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x8023A330: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_8:
    // 0x8023A334: beq         $v0, $zero, L_8023A350
    if (ctx->r2 == 0) {
        // 0x8023A338: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_8023A350;
    }
    // 0x8023A338: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8023A33C: jal         0x800616FC
    // 0x8023A340: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_9;
    // 0x8023A340: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_9:
    // 0x8023A344: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023A348: j           L_8023A454
    // 0x8023A34C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8023A454;
    // 0x8023A34C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023A350:
    // 0x8023A350: jal         0x800616FC
    // 0x8023A354: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_10;
    // 0x8023A354: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_10:
    // 0x8023A358: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x8023A35C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023A360: jal         0x8002A2F8
    // 0x8023A364: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_11;
    // 0x8023A364: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x8023A368: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A36C: j           L_8023A454
    // 0x8023A370: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8023A454;
    // 0x8023A370: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023A374:
    // 0x8023A374: lbu         $v0, 0xBD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBD);
    // 0x8023A378: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023A37C: sh          $zero, -0x3AA4($at)
    MEM_H(-0X3AA4, ctx->r1) = 0;
    // 0x8023A380: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8023A384: sb          $v0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r2;
    // 0x8023A388: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023A38C: j           L_8023A450
    // 0x8023A390: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8023A450;
    // 0x8023A390: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8023A394:
    // 0x8023A394: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A398: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023A39C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8023A3A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023A3A4: bne         $v0, $zero, L_8023A454
    if (ctx->r2 != 0) {
        // 0x8023A3A8: nop
    
            goto L_8023A454;
    }
    // 0x8023A3A8: nop

    // 0x8023A3AC: jal         0x80036B58
    // 0x8023A3B0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_12;
    // 0x8023A3B0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_12:
    // 0x8023A3B4: jal         0x80036E48
    // 0x8023A3B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_13;
    // 0x8023A3B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_13:
    // 0x8023A3BC: j           L_8023A40C
    // 0x8023A3C0: nop

        goto L_8023A40C;
    // 0x8023A3C0: nop

L_8023A3C4:
    // 0x8023A3C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A3C8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023A3CC: bne         $v0, $zero, L_8023A454
    if (ctx->r2 != 0) {
        // 0x8023A3D0: nop
    
            goto L_8023A454;
    }
    // 0x8023A3D0: nop

    // 0x8023A3D4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023A3D8: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8023A3DC: bne         $v0, $zero, L_8023A454
    if (ctx->r2 != 0) {
        // 0x8023A3E0: nop
    
            goto L_8023A454;
    }
    // 0x8023A3E0: nop

    // 0x8023A3E4: jal         0x8004A268
    // 0x8023A3E8: nop

    func_8004A268_25668(rdram, ctx);
        goto after_14;
    // 0x8023A3E8: nop

    after_14:
    // 0x8023A3EC: j           L_8023A40C
    // 0x8023A3F0: nop

        goto L_8023A40C;
    // 0x8023A3F0: nop

L_8023A3F4:
    // 0x8023A3F4: jal         0x8006FF84
    // 0x8023A3F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_15;
    // 0x8023A3F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x8023A3FC: beq         $v0, $zero, L_8023A454
    if (ctx->r2 == 0) {
        // 0x8023A400: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023A454;
    }
    // 0x8023A400: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A404: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023A408: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8023A40C:
    // 0x8023A40C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
L_8023A410:
    // 0x8023A410: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A414: j           L_8023A454
    // 0x8023A418: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8023A454;
    // 0x8023A418: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023A41C:
    // 0x8023A41C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A420: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x8023A424: sb          $zero, 0x76($s0)
    MEM_B(0X76, ctx->r16) = 0;
    // 0x8023A428: sb          $zero, 0x449($s0)
    MEM_B(0X449, ctx->r16) = 0;
    // 0x8023A42C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8023A430: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023A434: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8023A438: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x8023A43C: jal         0x8006036C
    // 0x8023A440: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_16;
    // 0x8023A440: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_16:
    // 0x8023A444: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A448: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8023A44C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_8023A450:
    // 0x8023A450: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_8023A454:
    // 0x8023A454: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023A458: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A45C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A460: jr          $ra
    // 0x8023A464: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A464: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232F28_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232F28: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80232F2C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80232F30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232F34: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80232F38: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80232F3C: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x80232F40: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80232F44: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x80232F48: bne         $v0, $zero, L_80232F64
    if (ctx->r2 != 0) {
        // 0x80232F4C: sb          $v1, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r3;
            goto L_80232F64;
    }
    // 0x80232F4C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x80232F50: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80232F54: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80232F58: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80232F5C: j           L_80233008
    // 0x80232F60: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
        goto L_80233008;
    // 0x80232F60: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
L_80232F64:
    // 0x80232F64: lui         $a0, 0x2AAA
    ctx->r4 = S32(0X2AAA << 16);
    // 0x80232F68: ori         $a0, $a0, 0xAAAB
    ctx->r4 = ctx->r4 | 0XAAAB;
    // 0x80232F6C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80232F70: addiu       $v1, $zero, 0xF0
    ctx->r3 = ADD32(0, 0XF0);
    // 0x80232F74: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80232F78: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232F7C: sra         $v0, $v1, 31
    ctx->r2 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80232F80: mfhi        $t2
    ctx->r10 = hi;
    // 0x80232F84: subu        $a0, $t2, $v0
    ctx->r4 = SUB32(ctx->r10, ctx->r2);
    // 0x80232F88: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80232F8C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80232F90: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80232F94: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x80232F98: andi        $v0, $a1, 0x8
    ctx->r2 = ctx->r5 & 0X8;
    // 0x80232F9C: bne         $v0, $zero, L_80232FC8
    if (ctx->r2 != 0) {
        // 0x80232FA0: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_80232FC8;
    }
    // 0x80232FA0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80232FA4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232FA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232FAC: lbu         $v1, -0x1DF0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1DF0);
    // 0x80232FB0: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80232FB4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232FB8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232FBC: lbu         $v0, -0x1DEF($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1DEF);
    // 0x80232FC0: j           L_80232FE8
    // 0x80232FC4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80232FE8;
    // 0x80232FC4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80232FC8:
    // 0x80232FC8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232FCC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232FD0: lbu         $v1, -0x1DE4($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1DE4);
    // 0x80232FD4: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80232FD8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232FDC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232FE0: lbu         $v0, -0x1DE3($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1DE3);
    // 0x80232FE4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80232FE8:
    // 0x80232FE8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80232FEC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80232FF0: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80232FF4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232FF8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80232FFC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80233000: jal         0x8003B6B8
    // 0x80233004: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_0;
    // 0x80233004: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_80233008:
    // 0x80233008: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023300C: beql        $v0, $zero, L_802330B4
    if (ctx->r2 == 0) {
        // 0x80233010: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_802330B4;
    }
    goto skip_0;
    // 0x80233010: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x80233014: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80233018: bgezl       $v0, L_802330B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023301C: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_802330B4;
    }
    goto skip_1;
    // 0x8023301C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_1:
    // 0x80233020: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80233024: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x80233028: lhu         $t0, 0x4E($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X4E);
    // 0x8023302C: lhu         $t1, 0x50($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X50);
    // 0x80233030: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    // 0x80233034: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233038: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023303C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80233040: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x80233044: lh          $a2, 0x44($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X44);
    // 0x80233048: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8023304C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80233050: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80233054: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80233058: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x8023305C: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x80233060: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80233064: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80233068: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x8023306C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80233070: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233074: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x80233078: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x8023307C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80233080: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233084: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x80233088: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x8023308C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80233090: jal         0x8004DD04
    // 0x80233094: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80233094: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_1:
    // 0x80233098: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023309C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x802330A0: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x802330A4: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x802330A8: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x802330AC: j           L_802330BC
    // 0x802330B0: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
        goto L_802330BC;
    // 0x802330B0: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_802330B4:
    // 0x802330B4: jal         0x8004F4F8
    // 0x802330B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x802330B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_802330BC:
    // 0x802330BC: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x802330C0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x802330C4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802330C8: beq         $v0, $zero, L_802330E4
    if (ctx->r2 == 0) {
        // 0x802330CC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802330E4;
    }
    // 0x802330CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802330D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802330D4: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x802330D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802330DC: j           L_8023315C
    // 0x802330E0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8023315C;
    // 0x802330E0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802330E4:
    // 0x802330E4: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x802330E8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802330EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802330F0: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x802330F4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802330F8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802330FC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80233100: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80233104: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233108: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023310C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80233110: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80233114: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233118: jal         0x80051E18
    // 0x8023311C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x8023311C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_3:
    // 0x80233120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233124: jal         0x8003F754
    // 0x80233128: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    func_8003F754_1AB54(rdram, ctx);
        goto after_4;
    // 0x80233128: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    after_4:
    // 0x8023312C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80233130: beq         $a0, $zero, L_80233144
    if (ctx->r4 == 0) {
        // 0x80233134: nop
    
            goto L_80233144;
    }
    // 0x80233134: nop

    // 0x80233138: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023313C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233140: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80233144:
    // 0x80233144: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80233148: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8023314C: bne         $v0, $zero, L_8023315C
    if (ctx->r2 != 0) {
        // 0x80233150: nop
    
            goto L_8023315C;
    }
    // 0x80233150: nop

    // 0x80233154: jal         0x800711A8
    // 0x80233158: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_5;
    // 0x80233158: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_5:
L_8023315C:
    // 0x8023315C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80233160: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80233164: jr          $ra
    // 0x80233168: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80233168: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802329DC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802329DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802329E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802329E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802329E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802329EC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x802329F0: beq         $v1, $zero, L_80232A14
    if (ctx->r3 == 0) {
        // 0x802329F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232A14;
    }
    // 0x802329F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802329F8: bne         $v1, $v0, L_80232A08
    if (ctx->r3 != ctx->r2) {
        // 0x802329FC: addiu       $a0, $zero, 0x142
        ctx->r4 = ADD32(0, 0X142);
            goto L_80232A08;
    }
    // 0x802329FC: addiu       $a0, $zero, 0x142
    ctx->r4 = ADD32(0, 0X142);
    // 0x80232A00: jal         0x8002A33C
    // 0x80232A04: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80232A04: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_80232A08:
    // 0x80232A08: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80232A0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80232A10: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_80232A14:
    // 0x80232A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232A18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232A1C: jr          $ra
    // 0x80232A20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232A20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232C0C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232C0C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80232C10: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80232C14: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80232C18: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80232C1C: lui         $s5, 0x2E80
    ctx->r21 = S32(0X2E80 << 16);
    // 0x80232C20: ori         $s5, $s5, 0x8080
    ctx->r21 = ctx->r21 | 0X8080;
    // 0x80232C24: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x80232C28: lui         $fp, 0x3D48
    ctx->r30 = S32(0X3D48 << 16);
    // 0x80232C2C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80232C30: lui         $s7, 0x2E
    ctx->r23 = S32(0X2E << 16);
    // 0x80232C34: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80232C38: addiu       $s6, $zero, 0x14
    ctx->r22 = ADD32(0, 0X14);
    // 0x80232C3C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80232C40: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80232C44: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232C48: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80232C4C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80232C50: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232C54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_80232C58:
    // 0x80232C58: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80232C5C: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x80232C60: lbu         $s1, -0x1E04($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X1E04);
    // 0x80232C64: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80232C68: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x80232C6C: lbu         $s0, -0x1E03($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X1E03);
    // 0x80232C70: jal         0x8003B878
    // 0x80232C74: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x80232C74: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    after_0:
    // 0x80232C78: sw          $s5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r21;
    // 0x80232C7C: lw          $v1, 0xD8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD8);
    // 0x80232C80: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80232C84: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80232C88: lw          $a2, 0xDC($s3)
    ctx->r6 = MEM_W(ctx->r19, 0XDC);
    // 0x80232C8C: sll         $a0, $s0, 8
    ctx->r4 = S32(ctx->r16 << 8);
    // 0x80232C90: or          $v1, $s1, $fp
    ctx->r3 = ctx->r17 | ctx->r30;
    // 0x80232C94: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x80232C98: addiu       $a1, $s1, 0x1F
    ctx->r5 = ADD32(ctx->r17, 0X1F);
    // 0x80232C9C: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x80232CA0: or          $v1, $a1, $s7
    ctx->r3 = ctx->r5 | ctx->r23;
    // 0x80232CA4: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80232CA8: addiu       $s0, $s0, 0x1F
    ctx->r16 = ADD32(ctx->r16, 0X1F);
    // 0x80232CAC: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x80232CB0: or          $s1, $s0, $s1
    ctx->r17 = ctx->r16 | ctx->r17;
    // 0x80232CB4: or          $s0, $s0, $a1
    ctx->r16 = ctx->r16 | ctx->r5;
    // 0x80232CB8: sw          $a0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r4;
    // 0x80232CBC: sw          $s1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r17;
    // 0x80232CC0: sw          $s0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r16;
    // 0x80232CC4: sw          $s6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r22;
    // 0x80232CC8: sw          $a2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r6;
    // 0x80232CCC: slti        $v0, $s4, 0x4
    ctx->r2 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x80232CD0: bne         $v0, $zero, L_80232C58
    if (ctx->r2 != 0) {
        // 0x80232CD4: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_80232C58;
    }
    // 0x80232CD4: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x80232CD8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80232CDC: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x80232CE0: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80232CE4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80232CE8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80232CEC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80232CF0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80232CF4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232CF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232CFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232D00: jr          $ra
    // 0x80232D04: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80232D04: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80232D08: nop

    // 0x80232D0C: nop

;}
RECOMP_FUNC void func_8023B350_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B350: lhu         $v0, 0x38($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X38);
    // 0x8023B354: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8023B358: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8023B35C: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
    // 0x8023B360: lh          $v1, 0x38($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X38);
    // 0x8023B364: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023B368: bne         $v1, $zero, L_8023B374
    if (ctx->r3 != 0) {
        // 0x8023B36C: sh          $v0, 0x3A($a0)
        MEM_H(0X3A, ctx->r4) = ctx->r2;
            goto L_8023B374;
    }
    // 0x8023B36C: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x8023B370: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_8023B374:
    // 0x8023B374: jr          $ra
    // 0x8023B378: nop

    TRACE_RETURN()
    return;
    // 0x8023B378: nop

;}
RECOMP_FUNC void func_8022EA74_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EA74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EA78: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EA7C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022EA80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EA84: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EA88: jal         0x800A3450
    // 0x8022EA8C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022EA8C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022EA90: lbu         $a1, 0x4($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X4);
    // 0x8022EA94: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x8022EA98: bne         $v1, $zero, L_8022EB20
    if (ctx->r3 != 0) {
        // 0x8022EA9C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8022EB20;
    }
    // 0x8022EA9C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022EAA0: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8022EAA4: andi        $v1, $a0, 0x3
    ctx->r3 = ctx->r4 & 0X3;
    // 0x8022EAA8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022EAAC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022EAB0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022EAB4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022EAB8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022EABC: sra         $v1, $a0, 18
    ctx->r3 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022EAC0: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8022EAC4: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022EAC8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022EACC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022EAD0: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022EAD4: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022EAD8: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022EADC: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022EAE0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022EAE4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022EAE8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022EAEC: sra         $v0, $a0, 22
    ctx->r2 = S32(SIGNED(ctx->r4) >> 22);
    // 0x8022EAF0: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022EAF4: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x8022EAF8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022EAFC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022EB00: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022EB04: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x8022EB08: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022EB0C: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022EB10: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x8022EB14: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022EB18: j           L_8022EB70
    // 0x8022EB1C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022EB70;
    // 0x8022EB1C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022EB20:
    // 0x8022EB20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EB24: bne         $v1, $v0, L_8022EB70
    if (ctx->r3 != ctx->r2) {
        // 0x8022EB28: nop
    
            goto L_8022EB70;
    }
    // 0x8022EB28: nop

    // 0x8022EB2C: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8022EB30: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x8022EB34: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EB38: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022EB3C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022EB40: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    // 0x8022EB44: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022EB48: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x8022EB4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EB50: bne         $a0, $zero, L_8022EB70
    if (ctx->r4 != 0) {
        // 0x8022EB54: sb          $v0, 0x5($s0)
        MEM_B(0X5, ctx->r16) = ctx->r2;
            goto L_8022EB70;
    }
    // 0x8022EB54: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022EB58: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x8022EB5C: slti        $v0, $v0, 0x12D
    ctx->r2 = SIGNED(ctx->r2) < 0X12D ? 1 : 0;
    // 0x8022EB60: bnel        $v0, $zero, L_8022EB70
    if (ctx->r2 != 0) {
        // 0x8022EB64: sb          $zero, 0x4($s0)
        MEM_B(0X4, ctx->r16) = 0;
            goto L_8022EB70;
    }
    goto skip_0;
    // 0x8022EB64: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    skip_0:
    // 0x8022EB68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EB6C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022EB70:
    // 0x8022EB70: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022EB74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EB78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EB7C: jr          $ra
    // 0x8022EB80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EB80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225A24_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A24: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225A28: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80225A2C: beq         $v1, $v0, L_80225A74
    if (ctx->r3 == ctx->r2) {
        // 0x80225A30: slti        $v0, $v1, 0x33
        ctx->r2 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
            goto L_80225A74;
    }
    // 0x80225A30: slti        $v0, $v1, 0x33
    ctx->r2 = SIGNED(ctx->r3) < 0X33 ? 1 : 0;
    // 0x80225A34: beq         $v0, $zero, L_80225A7C
    if (ctx->r2 == 0) {
        // 0x80225A38: nop
    
            goto L_80225A7C;
    }
    // 0x80225A38: nop

    // 0x80225A3C: beq         $v1, $zero, L_80225A54
    if (ctx->r3 == 0) {
        // 0x80225A40: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80225A54;
    }
    // 0x80225A40: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80225A44: beq         $v1, $v0, L_80225A68
    if (ctx->r3 == ctx->r2) {
        // 0x80225A48: nop
    
            goto L_80225A68;
    }
    // 0x80225A48: nop

    // 0x80225A4C: j           L_80225A7C
    // 0x80225A50: nop

        goto L_80225A7C;
    // 0x80225A50: nop

L_80225A54:
    // 0x80225A54: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80225A58: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80225A5C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225A60: j           L_80225A78
    // 0x80225A64: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
        goto L_80225A78;
    // 0x80225A64: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80225A68:
    // 0x80225A68: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80225A6C: j           L_80225A7C
    // 0x80225A70: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
        goto L_80225A7C;
    // 0x80225A70: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_80225A74:
    // 0x80225A74: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
L_80225A78:
    // 0x80225A78: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_80225A7C:
    // 0x80225A7C: jr          $ra
    // 0x80225A80: nop

    TRACE_RETURN()
    return;
    // 0x80225A80: nop

;}
RECOMP_FUNC void func_8022BB48_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BB48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BB4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022BB50: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022BB54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BB58: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BB5C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BB60: lw          $v0, -0x2254($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2254);
    // 0x8022BB64: jalr        $v0
    // 0x8022BB68: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022BB68: nop

    after_0:
    // 0x8022BB6C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BB70: jr          $ra
    // 0x8022BB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802263F4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263F4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802263F8: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x802263FC: beq         $v1, $v0, L_8022644C
    if (ctx->r3 == ctx->r2) {
        // 0x80226400: slti        $v0, $v1, 0xB5
        ctx->r2 = SIGNED(ctx->r3) < 0XB5 ? 1 : 0;
            goto L_8022644C;
    }
    // 0x80226400: slti        $v0, $v1, 0xB5
    ctx->r2 = SIGNED(ctx->r3) < 0XB5 ? 1 : 0;
    // 0x80226404: beql        $v0, $zero, L_8022641C
    if (ctx->r2 == 0) {
        // 0x80226408: addiu       $v0, $zero, 0xFA
        ctx->r2 = ADD32(0, 0XFA);
            goto L_8022641C;
    }
    goto skip_0;
    // 0x80226408: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    skip_0:
    // 0x8022640C: beql        $v1, $zero, L_8022642C
    if (ctx->r3 == 0) {
        // 0x80226410: sb          $zero, 0x6($a0)
        MEM_B(0X6, ctx->r4) = 0;
            goto L_8022642C;
    }
    goto skip_1;
    // 0x80226410: sb          $zero, 0x6($a0)
    MEM_B(0X6, ctx->r4) = 0;
    skip_1:
    // 0x80226414: j           L_80226464
    // 0x80226418: nop

        goto L_80226464;
    // 0x80226418: nop

L_8022641C:
    // 0x8022641C: beql        $v1, $v0, L_8022645C
    if (ctx->r3 == ctx->r2) {
        // 0x80226420: sb          $zero, 0x6($a0)
        MEM_B(0X6, ctx->r4) = 0;
            goto L_8022645C;
    }
    goto skip_2;
    // 0x80226420: sb          $zero, 0x6($a0)
    MEM_B(0X6, ctx->r4) = 0;
    skip_2:
    // 0x80226424: j           L_80226464
    // 0x80226428: nop

        goto L_80226464;
    // 0x80226428: nop

L_8022642C:
    // 0x8022642C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226430: sw          $zero, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = 0;
    // 0x80226434: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80226438: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022643C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80226440: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80226444: j           L_80226464
    // 0x80226448: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
        goto L_80226464;
    // 0x80226448: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_8022644C:
    // 0x8022644C: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80226450: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226454: j           L_80226464
    // 0x80226458: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
        goto L_80226464;
    // 0x80226458: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_8022645C:
    // 0x8022645C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226460: sw          $zero, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = 0;
L_80226464:
    // 0x80226464: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80226468: beq         $v0, $zero, L_80226498
    if (ctx->r2 == 0) {
        // 0x8022646C: nop
    
            goto L_80226498;
    }
    // 0x8022646C: nop

    // 0x80226470: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80226474: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80226478: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022647C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80226480: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226484: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226488: lh          $v0, -0x31A8($at)
    ctx->r2 = MEM_H(ctx->r1, -0X31A8);
    // 0x8022648C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226490: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226494: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
L_80226498:
    // 0x80226498: jr          $ra
    // 0x8022649C: nop

    TRACE_RETURN()
    return;
    // 0x8022649C: nop

;}
RECOMP_FUNC void func_8023316C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023316C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233170: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233178: jal         0x8004F144
    // 0x8023317C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023317C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80233180: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80233184: beql        $a1, $zero, L_802331B8
    if (ctx->r5 == 0) {
        // 0x80233188: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_802331B8;
    }
    goto skip_0;
    // 0x80233188: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x8023318C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80233190: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233194: beq         $v0, $zero, L_802331AC
    if (ctx->r2 == 0) {
        // 0x80233198: nop
    
            goto L_802331AC;
    }
    // 0x80233198: nop

    // 0x8023319C: jal         0x802331D0
    // 0x802331A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802331D0_ovl3(rdram, ctx);
        goto after_1;
    // 0x802331A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802331A4: j           L_802331B8
    // 0x802331A8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_802331B8;
    // 0x802331A8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802331AC:
    // 0x802331AC: jal         0x80233210
    // 0x802331B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233210_ovl3(rdram, ctx);
        goto after_2;
    // 0x802331B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802331B4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802331B8:
    // 0x802331B8: jal         0x8004F4F8
    // 0x802331BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_3;
    // 0x802331BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802331C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802331C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802331C8: jr          $ra
    // 0x802331CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802331CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239A38_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239A38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80239A3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80239A40: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80239A44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239A48: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80239A4C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80239A50: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80239A54: jal         0x8023A9BC
    // 0x80239A58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8023A9BC_ovl3(rdram, ctx);
        goto after_0;
    // 0x80239A58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80239A5C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80239A60: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80239A64: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80239A68: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80239A6C: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x80239A70: beq         $v0, $zero, L_80239FE0
    if (ctx->r2 == 0) {
        // 0x80239A74: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80239FE0;
    }
    // 0x80239A74: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80239A78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239A7C: addu        $at, $at, $v0
    gpr jr_addend_80239A84 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239A80: lw          $v0, -0x9E8($at)
    ctx->r2 = ADD32(ctx->r1, -0X9E8);
    // 0x80239A84: jr          $v0
    // 0x80239A88: nop

    switch (jr_addend_80239A84 >> 2) {
        case 0: goto L_80239A8C; break;
        case 1: goto L_80239ABC; break;
        case 2: goto L_80239B28; break;
        case 3: goto L_80239B58; break;
        case 4: goto L_80239B88; break;
        case 5: goto L_80239BD8; break;
        case 6: goto L_80239C1C; break;
        case 7: goto L_80239C9C; break;
        case 8: goto L_80239D24; break;
        case 9: goto L_80239DAC; break;
        case 10: goto L_80239DF4; break;
        case 11: goto L_80239E3C; break;
        case 12: goto L_80239EE4; break;
        case 13: goto L_80239F20; break;
        case 14: goto L_80239F44; break;
        case 15: goto L_80239FC0; break;
        default: switch_error(__func__, 0x80239A84, 0x8023F618);
    }
    // 0x80239A88: nop

L_80239A8C:
    // 0x80239A8C: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x80239A90: sltiu       $v0, $v1, 0x14
    ctx->r2 = ctx->r3 < 0X14 ? 1 : 0;
    // 0x80239A94: beq         $v0, $zero, L_80239AA4
    if (ctx->r2 == 0) {
        // 0x80239A98: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80239AA4;
    }
    // 0x80239A98: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80239A9C: j           L_80239FE0
    // 0x80239AA0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
        goto L_80239FE0;
    // 0x80239AA0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_80239AA4:
    // 0x80239AA4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80239AA8: jal         0x800616FC
    // 0x80239AAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x80239AAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80239AB0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80239AB4: j           L_80239BCC
    // 0x80239AB8: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
        goto L_80239BCC;
    // 0x80239AB8: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
L_80239ABC:
    // 0x80239ABC: beq         $s0, $zero, L_80239FE0
    if (ctx->r16 == 0) {
        // 0x80239AC0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80239FE0;
    }
    // 0x80239AC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239AC4: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80239AC8: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x80239ACC: addiu       $a3, $a3, -0x1188
    ctx->r7 = ADD32(ctx->r7, -0X1188);
    // 0x80239AD0: jal         0x8023AADC
    // 0x80239AD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023AADC_ovl3(rdram, ctx);
        goto after_2;
    // 0x80239AD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80239AD8: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80239ADC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239AE0: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80239AE4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239AE8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80239AEC: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80239AF0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80239AF4: beq         $v0, $zero, L_80239B14
    if (ctx->r2 == 0) {
        // 0x80239AF8: sw          $zero, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = 0;
            goto L_80239B14;
    }
    // 0x80239AF8: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x80239AFC: jal         0x80061798
    // 0x80239B00: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80061798_3CB98(rdram, ctx);
        goto after_3;
    // 0x80239B00: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_3:
    // 0x80239B04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80239B08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80239B0C: jal         0x80036B00
    // 0x80239B10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_4;
    // 0x80239B10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
L_80239B14:
    // 0x80239B14: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80239B18: jal         0x800616FC
    // 0x80239B1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x80239B1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x80239B20: j           L_80239BC8
    // 0x80239B24: nop

        goto L_80239BC8;
    // 0x80239B24: nop

L_80239B28:
    // 0x80239B28: beq         $s0, $zero, L_80239FE0
    if (ctx->r16 == 0) {
        // 0x80239B2C: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_80239FE0;
    }
    // 0x80239B2C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80239B30: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239B34: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80239B38: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80239B3C: bne         $v0, $zero, L_80239FE0
    if (ctx->r2 != 0) {
        // 0x80239B40: nop
    
            goto L_80239FE0;
    }
    // 0x80239B40: nop

    // 0x80239B44: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x80239B48: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80239B4C: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80239B50: j           L_80239BC8
    // 0x80239B54: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
        goto L_80239BC8;
    // 0x80239B54: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
L_80239B58:
    // 0x80239B58: jal         0x80070E54
    // 0x80239B5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070E54_4C254(rdram, ctx);
        goto after_6;
    // 0x80239B5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x80239B60: bne         $v0, $zero, L_80239FE0
    if (ctx->r2 != 0) {
        // 0x80239B64: addiu       $a0, $zero, 0x101
        ctx->r4 = ADD32(0, 0X101);
            goto L_80239FE0;
    }
    // 0x80239B64: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    // 0x80239B68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239B6C: jal         0x8002A2F8
    // 0x80239B70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_7;
    // 0x80239B70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80239B74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80239B78: jal         0x800616FC
    // 0x80239B7C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_8;
    // 0x80239B7C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_8:
    // 0x80239B80: j           L_80239FA0
    // 0x80239B84: nop

        goto L_80239FA0;
    // 0x80239B84: nop

L_80239B88:
    // 0x80239B88: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239B8C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80239B90: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80239B94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80239B98: bne         $v0, $zero, L_80239FE0
    if (ctx->r2 != 0) {
        // 0x80239B9C: addiu       $a0, $zero, 0x100
        ctx->r4 = ADD32(0, 0X100);
            goto L_80239FE0;
    }
    // 0x80239B9C: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x80239BA0: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80239BA4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239BA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239BAC: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80239BB0: jal         0x8002A2F8
    // 0x80239BB4: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_9;
    // 0x80239BB4: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    after_9:
    // 0x80239BB8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80239BBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239BC0: jal         0x8002A2F8
    // 0x80239BC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_10;
    // 0x80239BC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
L_80239BC8:
    // 0x80239BC8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
L_80239BCC:
    // 0x80239BCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239BD0: j           L_80239FE0
    // 0x80239BD4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80239FE0;
    // 0x80239BD4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80239BD8:
    // 0x80239BD8: beq         $s0, $zero, L_80239FE0
    if (ctx->r16 == 0) {
        // 0x80239BDC: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_80239FE0;
    }
    // 0x80239BDC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80239BE0: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80239BE4: addiu       $s2, $s2, -0x1180
    ctx->r18 = ADD32(ctx->r18, -0X1180);
L_80239BE8:
    // 0x80239BE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239BEC: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80239BF0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80239BF4: jal         0x8023AADC
    // 0x80239BF8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_8023AADC_ovl3(rdram, ctx);
        goto after_11;
    // 0x80239BF8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_11:
    // 0x80239BFC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80239C00: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80239C04: bne         $v0, $zero, L_80239BE8
    if (ctx->r2 != 0) {
        // 0x80239C08: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80239BE8;
    }
    // 0x80239C08: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80239C0C: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80239C10: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80239C14: j           L_80239FB0
    // 0x80239C18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80239FB0;
    // 0x80239C18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80239C1C:
    // 0x80239C1C: beq         $s0, $zero, L_80239FE0
    if (ctx->r16 == 0) {
        // 0x80239C20: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_80239FE0;
    }
    // 0x80239C20: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x80239C24: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80239C28: addiu       $s2, $s2, -0x1168
    ctx->r18 = ADD32(ctx->r18, -0X1168);
L_80239C2C:
    // 0x80239C2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239C30: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80239C34: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80239C38: jal         0x8023AADC
    // 0x80239C3C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_8023AADC_ovl3(rdram, ctx);
        goto after_12;
    // 0x80239C3C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_12:
    // 0x80239C40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80239C44: slti        $v0, $s0, 0x7
    ctx->r2 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x80239C48: bne         $v0, $zero, L_80239C2C
    if (ctx->r2 != 0) {
        // 0x80239C4C: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80239C2C;
    }
    // 0x80239C4C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80239C50: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80239C54: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80239C58: addiu       $s2, $s2, -0x10B8
    ctx->r18 = ADD32(ctx->r18, -0X10B8);
L_80239C5C:
    // 0x80239C5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239C60: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80239C64: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80239C68: jal         0x8023AADC
    // 0x80239C6C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_8023AADC_ovl3(rdram, ctx);
        goto after_13;
    // 0x80239C6C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_13:
    // 0x80239C70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80239C74: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80239C78: bne         $v0, $zero, L_80239C5C
    if (ctx->r2 != 0) {
        // 0x80239C7C: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80239C5C;
    }
    // 0x80239C7C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80239C80: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80239C84: jal         0x800616FC
    // 0x80239C88: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_14;
    // 0x80239C88: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_14:
    // 0x80239C8C: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80239C90: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80239C94: j           L_80239FB0
    // 0x80239C98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80239FB0;
    // 0x80239C98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80239C9C:
    // 0x80239C9C: beq         $s0, $zero, L_80239FE0
    if (ctx->r16 == 0) {
        // 0x80239CA0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80239FE0;
    }
    // 0x80239CA0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80239CA4: addiu       $s3, $zero, 0x32
    ctx->r19 = ADD32(0, 0X32);
    // 0x80239CA8: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80239CAC: addiu       $s2, $s2, 0x1770
    ctx->r18 = ADD32(ctx->r18, 0X1770);
L_80239CB0:
    // 0x80239CB0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80239CB4: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80239CB8: beq         $v0, $zero, L_80239CD4
    if (ctx->r2 == 0) {
        // 0x80239CBC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80239CD4;
    }
    // 0x80239CBC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80239CC0: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80239CC4: bne         $v0, $s3, L_80239CD4
    if (ctx->r2 != ctx->r19) {
        // 0x80239CC8: nop
    
            goto L_80239CD4;
    }
    // 0x80239CC8: nop

    // 0x80239CCC: jal         0x8004F418
    // 0x80239CD0: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_15;
    // 0x80239CD0: nop

    after_15:
L_80239CD4:
    // 0x80239CD4: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80239CD8: bne         $v0, $zero, L_80239CB0
    if (ctx->r2 != 0) {
        // 0x80239CDC: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80239CB0;
    }
    // 0x80239CDC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80239CE0: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
    // 0x80239CE4: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80239CE8: addiu       $s2, $s2, -0x1150
    ctx->r18 = ADD32(ctx->r18, -0X1150);
L_80239CEC:
    // 0x80239CEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239CF0: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80239CF4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80239CF8: jal         0x8023AADC
    // 0x80239CFC: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_8023AADC_ovl3(rdram, ctx);
        goto after_16;
    // 0x80239CFC: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_16:
    // 0x80239D00: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80239D04: slti        $v0, $s0, 0xA
    ctx->r2 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80239D08: bne         $v0, $zero, L_80239CEC
    if (ctx->r2 != 0) {
        // 0x80239D0C: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80239CEC;
    }
    // 0x80239D0C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80239D10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80239D14: jal         0x800616FC
    // 0x80239D18: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_17;
    // 0x80239D18: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_17:
    // 0x80239D1C: j           L_80239FA0
    // 0x80239D20: nop

        goto L_80239FA0;
    // 0x80239D20: nop

L_80239D24:
    // 0x80239D24: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x80239D28: sltiu       $v0, $v1, 0x258
    ctx->r2 = ctx->r3 < 0X258 ? 1 : 0;
    // 0x80239D2C: bne         $v0, $zero, L_80239D60
    if (ctx->r2 != 0) {
        // 0x80239D30: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80239D60;
    }
    // 0x80239D30: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80239D34: addiu       $v0, $zero, 0x258
    ctx->r2 = ADD32(0, 0X258);
    // 0x80239D38: bne         $v1, $v0, L_80239D64
    if (ctx->r3 != ctx->r2) {
        // 0x80239D3C: nop
    
            goto L_80239D64;
    }
    // 0x80239D3C: nop

    // 0x80239D40: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239D44: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x80239D48: blez        $v0, L_80239D64
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80239D4C: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80239D64;
    }
    // 0x80239D4C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80239D50: jal         0x800616FC
    // 0x80239D54: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_18;
    // 0x80239D54: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_18:
    // 0x80239D58: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80239D5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80239D60:
    // 0x80239D60: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_80239D64:
    // 0x80239D64: beq         $s0, $zero, L_80239FE0
    if (ctx->r16 == 0) {
        // 0x80239D68: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_80239FE0;
    }
    // 0x80239D68: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x80239D6C: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80239D70: addiu       $s2, $s2, -0x1098
    ctx->r18 = ADD32(ctx->r18, -0X1098);
L_80239D74:
    // 0x80239D74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239D78: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80239D7C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80239D80: jal         0x8023AADC
    // 0x80239D84: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_8023AADC_ovl3(rdram, ctx);
        goto after_19;
    // 0x80239D84: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_19:
    // 0x80239D88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80239D8C: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x80239D90: bne         $v0, $zero, L_80239D74
    if (ctx->r2 != 0) {
        // 0x80239D94: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80239D74;
    }
    // 0x80239D94: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80239D98: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80239D9C: jal         0x800616FC
    // 0x80239DA0: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_20;
    // 0x80239DA0: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    after_20:
    // 0x80239DA4: j           L_80239FA0
    // 0x80239DA8: nop

        goto L_80239FA0;
    // 0x80239DA8: nop

L_80239DAC:
    // 0x80239DAC: beq         $s0, $zero, L_80239FE0
    if (ctx->r16 == 0) {
        // 0x80239DB0: addiu       $s0, $zero, 0xA
        ctx->r16 = ADD32(0, 0XA);
            goto L_80239FE0;
    }
    // 0x80239DB0: addiu       $s0, $zero, 0xA
    ctx->r16 = ADD32(0, 0XA);
    // 0x80239DB4: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80239DB8: addiu       $s2, $s2, -0x1138
    ctx->r18 = ADD32(ctx->r18, -0X1138);
L_80239DBC:
    // 0x80239DBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239DC0: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80239DC4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80239DC8: jal         0x8023AADC
    // 0x80239DCC: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_8023AADC_ovl3(rdram, ctx);
        goto after_21;
    // 0x80239DCC: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_21:
    // 0x80239DD0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80239DD4: slti        $v0, $s0, 0xD
    ctx->r2 = SIGNED(ctx->r16) < 0XD ? 1 : 0;
    // 0x80239DD8: bne         $v0, $zero, L_80239DBC
    if (ctx->r2 != 0) {
        // 0x80239DDC: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80239DBC;
    }
    // 0x80239DDC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80239DE0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80239DE4: jal         0x800616FC
    // 0x80239DE8: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_22;
    // 0x80239DE8: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_22:
    // 0x80239DEC: j           L_80239FA0
    // 0x80239DF0: nop

        goto L_80239FA0;
    // 0x80239DF0: nop

L_80239DF4:
    // 0x80239DF4: beq         $s0, $zero, L_80239FE0
    if (ctx->r16 == 0) {
        // 0x80239DF8: addiu       $s0, $zero, 0xD
        ctx->r16 = ADD32(0, 0XD);
            goto L_80239FE0;
    }
    // 0x80239DF8: addiu       $s0, $zero, 0xD
    ctx->r16 = ADD32(0, 0XD);
    // 0x80239DFC: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80239E00: addiu       $s2, $s2, -0x1120
    ctx->r18 = ADD32(ctx->r18, -0X1120);
L_80239E04:
    // 0x80239E04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239E08: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80239E0C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80239E10: jal         0x8023AADC
    // 0x80239E14: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_8023AADC_ovl3(rdram, ctx);
        goto after_23;
    // 0x80239E14: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_23:
    // 0x80239E18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80239E1C: slti        $v0, $s0, 0x11
    ctx->r2 = SIGNED(ctx->r16) < 0X11 ? 1 : 0;
    // 0x80239E20: bne         $v0, $zero, L_80239E04
    if (ctx->r2 != 0) {
        // 0x80239E24: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80239E04;
    }
    // 0x80239E24: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80239E28: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80239E2C: jal         0x800616FC
    // 0x80239E30: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_24;
    // 0x80239E30: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_24:
    // 0x80239E34: j           L_80239FA0
    // 0x80239E38: nop

        goto L_80239FA0;
    // 0x80239E38: nop

L_80239E3C:
    // 0x80239E3C: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x80239E40: sltiu       $v0, $v1, 0x352
    ctx->r2 = ctx->r3 < 0X352 ? 1 : 0;
    // 0x80239E44: bne         $v0, $zero, L_80239E98
    if (ctx->r2 != 0) {
        // 0x80239E48: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80239E98;
    }
    // 0x80239E48: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80239E4C: addiu       $v0, $zero, 0x352
    ctx->r2 = ADD32(0, 0X352);
    // 0x80239E50: bne         $v1, $v0, L_80239E9C
    if (ctx->r3 != ctx->r2) {
        // 0x80239E54: nop
    
            goto L_80239E9C;
    }
    // 0x80239E54: nop

    // 0x80239E58: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80239E5C: lhu         $v0, -0x3BBA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BBA);
    // 0x80239E60: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80239E64: lh          $a0, -0x3BBC($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3BBC);
    // 0x80239E68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239E6C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80239E70: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x80239E74: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80239E78: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80239E7C: slt         $v1, $v1, $a0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80239E80: beq         $v1, $zero, L_80239E90
    if (ctx->r3 == 0) {
        // 0x80239E84: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80239E90;
    }
    // 0x80239E84: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80239E88: jal         0x800616FC
    // 0x80239E8C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_25;
    // 0x80239E8C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_25:
L_80239E90:
    // 0x80239E90: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80239E94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80239E98:
    // 0x80239E98: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_80239E9C:
    // 0x80239E9C: beq         $s0, $zero, L_80239FE0
    if (ctx->r16 == 0) {
        // 0x80239EA0: addiu       $s0, $zero, 0x11
        ctx->r16 = ADD32(0, 0X11);
            goto L_80239FE0;
    }
    // 0x80239EA0: addiu       $s0, $zero, 0x11
    ctx->r16 = ADD32(0, 0X11);
    // 0x80239EA4: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80239EA8: addiu       $s2, $s2, -0x1100
    ctx->r18 = ADD32(ctx->r18, -0X1100);
L_80239EAC:
    // 0x80239EAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239EB0: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80239EB4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80239EB8: jal         0x8023AADC
    // 0x80239EBC: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_8023AADC_ovl3(rdram, ctx);
        goto after_26;
    // 0x80239EBC: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_26:
    // 0x80239EC0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80239EC4: slti        $v0, $s0, 0x14
    ctx->r2 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
    // 0x80239EC8: bne         $v0, $zero, L_80239EAC
    if (ctx->r2 != 0) {
        // 0x80239ECC: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80239EAC;
    }
    // 0x80239ECC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80239ED0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80239ED4: jal         0x800616FC
    // 0x80239ED8: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_27;
    // 0x80239ED8: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_27:
    // 0x80239EDC: j           L_80239FA0
    // 0x80239EE0: nop

        goto L_80239FA0;
    // 0x80239EE0: nop

L_80239EE4:
    // 0x80239EE4: beq         $s0, $zero, L_80239FE0
    if (ctx->r16 == 0) {
        // 0x80239EE8: addiu       $s0, $zero, 0x14
        ctx->r16 = ADD32(0, 0X14);
            goto L_80239FE0;
    }
    // 0x80239EE8: addiu       $s0, $zero, 0x14
    ctx->r16 = ADD32(0, 0X14);
    // 0x80239EEC: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80239EF0: addiu       $s2, $s2, -0x10E8
    ctx->r18 = ADD32(ctx->r18, -0X10E8);
L_80239EF4:
    // 0x80239EF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239EF8: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80239EFC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80239F00: jal         0x8023AADC
    // 0x80239F04: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_8023AADC_ovl3(rdram, ctx);
        goto after_28;
    // 0x80239F04: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_28:
    // 0x80239F08: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80239F0C: slti        $v0, $s0, 0x18
    ctx->r2 = SIGNED(ctx->r16) < 0X18 ? 1 : 0;
    // 0x80239F10: bne         $v0, $zero, L_80239EF4
    if (ctx->r2 != 0) {
        // 0x80239F14: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80239EF4;
    }
    // 0x80239F14: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80239F18: j           L_80239FA0
    // 0x80239F1C: nop

        goto L_80239FA0;
    // 0x80239F1C: nop

L_80239F20:
    // 0x80239F20: beq         $s0, $zero, L_80239FE0
    if (ctx->r16 == 0) {
        // 0x80239F24: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80239FE0;
    }
    // 0x80239F24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239F28: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80239F2C: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x80239F30: addiu       $a3, $a3, -0x10C8
    ctx->r7 = ADD32(ctx->r7, -0X10C8);
    // 0x80239F34: jal         0x8023AADC
    // 0x80239F38: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_8023AADC_ovl3(rdram, ctx);
        goto after_29;
    // 0x80239F38: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_29:
    // 0x80239F3C: j           L_80239FA0
    // 0x80239F40: nop

        goto L_80239FA0;
    // 0x80239F40: nop

L_80239F44:
    // 0x80239F44: beq         $s0, $zero, L_80239FE0
    if (ctx->r16 == 0) {
        // 0x80239F48: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80239FE0;
    }
    // 0x80239F48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239F4C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x80239F50: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x80239F54: addiu       $a3, $a3, -0x10C0
    ctx->r7 = ADD32(ctx->r7, -0X10C0);
    // 0x80239F58: jal         0x8023AADC
    // 0x80239F5C: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    func_8023AADC_ovl3(rdram, ctx);
        goto after_30;
    // 0x80239F5C: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_30:
    // 0x80239F60: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x80239F64: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x80239F68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80239F6C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80239F70: addiu       $a0, $a0, 0x1780
    ctx->r4 = ADD32(ctx->r4, 0X1780);
L_80239F74:
    // 0x80239F74: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80239F78: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x80239F7C: beql        $v0, $zero, L_80239F94
    if (ctx->r2 == 0) {
        // 0x80239F80: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80239F94;
    }
    goto skip_0;
    // 0x80239F80: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80239F84: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80239F88: beql        $v0, $a2, L_80239F90
    if (ctx->r2 == ctx->r6) {
        // 0x80239F8C: sb          $a1, 0xF($v1)
        MEM_B(0XF, ctx->r3) = ctx->r5;
            goto L_80239F90;
    }
    goto skip_1;
    // 0x80239F8C: sb          $a1, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r5;
    skip_1:
L_80239F90:
    // 0x80239F90: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80239F94:
    // 0x80239F94: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x80239F98: bne         $v0, $zero, L_80239F74
    if (ctx->r2 != 0) {
        // 0x80239F9C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_80239F74;
    }
    // 0x80239F9C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_80239FA0:
    // 0x80239FA0: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80239FA4: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80239FA8: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x80239FAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80239FB0:
    // 0x80239FB0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80239FB4: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80239FB8: j           L_80239FE0
    // 0x80239FBC: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
        goto L_80239FE0;
    // 0x80239FBC: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
L_80239FC0:
    // 0x80239FC0: beq         $s0, $zero, L_80239FE0
    if (ctx->r16 == 0) {
        // 0x80239FC4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80239FE0;
    }
    // 0x80239FC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239FC8: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80239FCC: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x80239FD0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80239FD4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80239FD8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80239FDC: sb          $v1, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r3;
L_80239FE0:
    // 0x80239FE0: jal         0x8023AC38
    // 0x80239FE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023AC38_ovl3(rdram, ctx);
        goto after_31;
    // 0x80239FE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_31:
    // 0x80239FE8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80239FEC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80239FF0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80239FF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80239FF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239FFC: jr          $ra
    // 0x8023A000: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023A000: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80232260_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232264: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232268: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023226C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232270: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232274: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232278: lw          $v0, -0x1DFC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1DFC);
    // 0x8023227C: jalr        $v0
    // 0x80232280: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232280: nop

    after_0:
    // 0x80232284: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232288: jr          $ra
    // 0x8023228C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023228C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228C84_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C84: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228C88: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80228C8C: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
    // 0x80228C90: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80228C94: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x80228C98: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x80228C9C: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x80228CA0: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x80228CA4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228CA8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80228CAC: lw          $v0, -0x29C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X29C8);
    // 0x80228CB0: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x80228CB4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228CB8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80228CBC: lw          $v0, -0x2998($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2998);
    // 0x80228CC0: jr          $ra
    // 0x80228CC4: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80228CC4: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80225F30_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225F34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225F38: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225F3C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225F40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225F44: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80225F48: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80225F4C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80225F50: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80225F54: beq         $v0, $zero, L_802260EC
    if (ctx->r2 == 0) {
        // 0x80225F58: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802260EC;
    }
    // 0x80225F58: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225F5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225F60: addu        $at, $at, $v0
    gpr jr_addend_80225F68 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225F64: lw          $v0, -0xCA8($at)
    ctx->r2 = ADD32(ctx->r1, -0XCA8);
    // 0x80225F68: jr          $v0
    // 0x80225F6C: nop

    switch (jr_addend_80225F68 >> 2) {
        case 0: goto L_80225F70; break;
        case 1: goto L_80225FE0; break;
        case 2: goto L_8022601C; break;
        case 3: goto L_80226034; break;
        case 4: goto L_8022606C; break;
        case 5: goto L_802260B8; break;
        default: switch_error(__func__, 0x80225F68, 0x8023F358);
    }
    // 0x80225F6C: nop

L_80225F70:
    // 0x80225F70: addiu       $a0, $zero, 0x7E
    ctx->r4 = ADD32(0, 0X7E);
    // 0x80225F74: jal         0x8004CB2C
    // 0x80225F78: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80225F78: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80225F7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225F80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225F84: jal         0x8005F6B4
    // 0x80225F88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x80225F88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80225F8C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80225F90: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80225F94: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80225F98: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225F9C: addiu       $v0, $v0, -0x369C
    ctx->r2 = ADD32(ctx->r2, -0X369C);
    // 0x80225FA0: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x80225FA4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225FA8: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225FAC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225FB0: addiu       $v0, $v0, -0x3238
    ctx->r2 = ADD32(ctx->r2, -0X3238);
    // 0x80225FB4: jal         0x802269B4
    // 0x80225FB8: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    func_802269B4_ovl3(rdram, ctx);
        goto after_2;
    // 0x80225FB8: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    after_2:
    // 0x80225FBC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80225FC0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80225FC4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225FC8: sb          $v0, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = ctx->r2;
    // 0x80225FCC: jal         0x80036340
    // 0x80225FD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80036340_11740(rdram, ctx);
        goto after_3;
    // 0x80225FD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80225FD4: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80225FD8: j           L_802260B0
    // 0x80225FDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802260B0;
    // 0x80225FDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80225FE0:
    // 0x80225FE0: jal         0x8006FF84
    // 0x80225FE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_4;
    // 0x80225FE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80225FE8: beq         $v0, $zero, L_802260EC
    if (ctx->r2 == 0) {
        // 0x80225FEC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802260EC;
    }
    // 0x80225FEC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225FF0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80225FF4: lbu         $a0, 0xBD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XBD);
    // 0x80225FF8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80225FFC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80226000: andi        $v1, $v1, 0xFC
    ctx->r3 = ctx->r3 & 0XFC;
    // 0x80226004: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x80226008: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8022600C: sb          $a0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r4;
    // 0x80226010: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80226014: j           L_802260B0
    // 0x80226018: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802260B0;
    // 0x80226018: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022601C:
    // 0x8022601C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226020: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226024: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226028: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8022602C: j           L_802260B0
    // 0x80226030: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802260B0;
    // 0x80226030: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226034:
    // 0x80226034: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80226038: addiu       $s0, $s0, -0x3764
    ctx->r16 = ADD32(ctx->r16, -0X3764);
    // 0x8022603C: jal         0x8005FA7C
    // 0x80226040: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x80226040: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80226044: jal         0x8005FA7C
    // 0x80226048: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_6;
    // 0x80226048: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x8022604C: jal         0x8005FA7C
    // 0x80226050: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_7;
    // 0x80226050: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_7:
    // 0x80226054: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80226058: jal         0x80036B1C
    // 0x8022605C: ori         $a0, $a0, 0x3000
    ctx->r4 = ctx->r4 | 0X3000;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_8;
    // 0x8022605C: ori         $a0, $a0, 0x3000
    ctx->r4 = ctx->r4 | 0X3000;
    after_8:
    // 0x80226060: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80226064: j           L_802260B0
    // 0x80226068: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802260B0;
    // 0x80226068: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022606C:
    // 0x8022606C: jal         0x80036B7C
    // 0x80226070: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_9;
    // 0x80226070: nop

    after_9:
    // 0x80226074: beq         $v0, $zero, L_802260EC
    if (ctx->r2 == 0) {
        // 0x80226078: nop
    
            goto L_802260EC;
    }
    // 0x80226078: nop

    // 0x8022607C: jal         0x80036E48
    // 0x80226080: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_10;
    // 0x80226080: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_10:
    // 0x80226084: jal         0x80060170
    // 0x80226088: nop

    func_80060170_3B570(rdram, ctx);
        goto after_11;
    // 0x80226088: nop

    after_11:
    // 0x8022608C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226090: addiu       $v0, $v0, -0x364C
    ctx->r2 = ADD32(ctx->r2, -0X364C);
    // 0x80226094: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226098: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8022609C: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x802260A0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802260A4: addiu       $v1, $v1, -0x3228
    ctx->r3 = ADD32(ctx->r3, -0X3228);
    // 0x802260A8: sw          $v1, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r3;
    // 0x802260AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802260B0:
    // 0x802260B0: j           L_802260EC
    // 0x802260B4: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_802260EC;
    // 0x802260B4: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_802260B8:
    // 0x802260B8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802260BC: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802260C0: bne         $v0, $zero, L_802260EC
    if (ctx->r2 != 0) {
        // 0x802260C4: nop
    
            goto L_802260EC;
    }
    // 0x802260C4: nop

    // 0x802260C8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802260CC: lbu         $v1, 0x4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4);
    // 0x802260D0: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x802260D4: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x802260D8: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    // 0x802260DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802260E0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802260E4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802260E8: sb          $v1, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r3;
L_802260EC:
    // 0x802260EC: jal         0x8006072C
    // 0x802260F0: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_12;
    // 0x802260F0: nop

    after_12:
    // 0x802260F4: beq         $v0, $zero, L_80226108
    if (ctx->r2 == 0) {
        // 0x802260F8: nop
    
            goto L_80226108;
    }
    // 0x802260F8: nop

    // 0x802260FC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226100: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80226104: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80226108:
    // 0x80226108: jal         0x8005FB90
    // 0x8022610C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_13;
    // 0x8022610C: nop

    after_13:
    // 0x80226110: jal         0x80060018
    // 0x80226114: nop

    func_80060018_3B418(rdram, ctx);
        goto after_14;
    // 0x80226114: nop

    after_14:
    // 0x80226118: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022611C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226120: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226124: jr          $ra
    // 0x80226128: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226128: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AE84_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AE88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AE8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AE90: jal         0x8004F144
    // 0x8022AE94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022AE94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022AE98: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022AE9C: beq         $a0, $zero, L_8022AED8
    if (ctx->r4 == 0) {
        // 0x8022AEA0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022AED8;
    }
    // 0x8022AEA0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022AEA4: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022AEA8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022AEAC: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022AEB0: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022AEB4: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8022AEB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AEBC: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022AEC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AEC4: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x8022AEC8: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    // 0x8022AECC: addiu       $a1, $s0, 0x1B8
    ctx->r5 = ADD32(ctx->r16, 0X1B8);
    // 0x8022AED0: jal         0x8009A3B4
    // 0x8022AED4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AED4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_8022AED8:
    // 0x8022AED8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022AEDC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8022AEE0: sb          $v1, 0x117($s0)
    MEM_B(0X117, ctx->r16) = ctx->r3;
    // 0x8022AEE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AEE8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022AEEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AEF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AEF4: jr          $ra
    // 0x8022AEF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AEF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227934_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227938: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022793C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227940: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227944: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80227948: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022794C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227950: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227954: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227958: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022795C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227960: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227964: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80227968: jal         0x8004D5D4
    // 0x8022796C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022796C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80227970: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227974: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227978: jal         0x80050294
    // 0x8022797C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022797C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80227980: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227984: addiu       $a1, $s0, 0x4E0
    ctx->r5 = ADD32(ctx->r16, 0X4E0);
    // 0x80227988: jal         0x80227D3C
    // 0x8022798C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80227D3C_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022798C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80227990: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80227994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227998: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022799C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802279A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802279A4: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x802279A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802279AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802279B0: jr          $ra
    // 0x802279B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802279B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023211C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023211C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232120: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232124: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023212C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232130: bne         $v0, $zero, L_8023214C
    if (ctx->r2 != 0) {
        // 0x80232134: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8023214C;
    }
    // 0x80232134: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232138: jal         0x80050294
    // 0x8023213C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023213C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80232140: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232144: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232148: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023214C:
    // 0x8023214C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80232150: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80232154: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232158: bne         $v1, $v0, L_80232188
    if (ctx->r3 != ctx->r2) {
        // 0x8023215C: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_80232188;
    }
    // 0x8023215C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80232160: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80232164: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80232168: bne         $v1, $v0, L_80232180
    if (ctx->r3 != ctx->r2) {
        // 0x8023216C: addiu       $v0, $zero, 0x118
        ctx->r2 = ADD32(0, 0X118);
            goto L_80232180;
    }
    // 0x8023216C: addiu       $v0, $zero, 0x118
    ctx->r2 = ADD32(0, 0X118);
    // 0x80232170: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80232174: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232178: j           L_80232188
    // 0x8023217C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80232188;
    // 0x8023217C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80232180:
    // 0x80232180: beql        $v1, $v0, L_80232188
    if (ctx->r3 == ctx->r2) {
        // 0x80232184: sb          $zero, 0xD($s0)
        MEM_B(0XD, ctx->r16) = 0;
            goto L_80232188;
    }
    goto skip_0;
    // 0x80232184: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    skip_0:
L_80232188:
    // 0x80232188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023218C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232190: jr          $ra
    // 0x80232194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
