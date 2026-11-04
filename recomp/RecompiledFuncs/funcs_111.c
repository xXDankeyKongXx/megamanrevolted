#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022FA4C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA4C: jr          $ra
    // 0x8022FA50: nop

    TRACE_RETURN()
    return;
    // 0x8022FA50: nop

;}
RECOMP_FUNC void func_8022C7F4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C7F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022C7F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022C7FC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022C800: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022C804: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022C808: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022C80C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022C810: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022C814: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022C818: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C81C: lbu         $v0, 0xAD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XAD);
    // 0x8022C820: lbu         $a1, 0xAC($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022C824: addiu       $s0, $s2, 0x2E8
    ctx->r16 = ADD32(ctx->r18, 0X2E8);
    // 0x8022C828: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x8022C82C: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x8022C830: beq         $v0, $a1, L_8022CA2C
    if (ctx->r2 == ctx->r5) {
        // 0x8022C834: sb          $zero, 0x330($s2)
        MEM_B(0X330, ctx->r18) = 0;
            goto L_8022CA2C;
    }
    // 0x8022C834: sb          $zero, 0x330($s2)
    MEM_B(0X330, ctx->r18) = 0;
    // 0x8022C838: lbu         $t0, 0x33B($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X33B);
    // 0x8022C83C: bne         $t0, $zero, L_8022C9BC
    if (ctx->r8 != 0) {
        // 0x8022C840: addiu       $t0, $t0, -0x1
        ctx->r8 = ADD32(ctx->r8, -0X1);
            goto L_8022C9BC;
    }
    // 0x8022C840: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8022C844: jal         0x800502EC
    // 0x8022C848: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_0;
    // 0x8022C848: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022C84C: lbu         $v0, 0xAC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022C850: jal         0x8004EFE4
    // 0x8022C854: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x8022C854: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    after_1:
    // 0x8022C858: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022C85C: beq         $s3, $zero, L_8022CAD4
    if (ctx->r19 == 0) {
        // 0x8022C860: addiu       $a0, $zero, 0xDD
        ctx->r4 = ADD32(0, 0XDD);
            goto L_8022CAD4;
    }
    // 0x8022C860: addiu       $a0, $zero, 0xDD
    ctx->r4 = ADD32(0, 0XDD);
    // 0x8022C864: jal         0x8002A33C
    // 0x8022C868: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022C868: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_2:
    // 0x8022C86C: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x8022C870: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8022C874: sb          $s5, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r21;
    // 0x8022C878: sb          $s6, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r22;
    // 0x8022C87C: sb          $zero, 0x4($s3)
    MEM_B(0X4, ctx->r19) = 0;
    // 0x8022C880: sb          $s5, 0xF($s3)
    MEM_B(0XF, ctx->r19) = ctx->r21;
    // 0x8022C884: lhu         $v0, 0x188($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X188);
    // 0x8022C888: sh          $v0, 0x14($s3)
    MEM_H(0X14, ctx->r19) = ctx->r2;
    // 0x8022C88C: lhu         $v0, 0x18A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18A);
    // 0x8022C890: addiu       $v0, $v0, -0x41
    ctx->r2 = ADD32(ctx->r2, -0X41);
    // 0x8022C894: sh          $v0, 0x16($s3)
    MEM_H(0X16, ctx->r19) = ctx->r2;
    // 0x8022C898: lhu         $v0, 0x18C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18C);
    // 0x8022C89C: lh          $v1, 0x16($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X16);
    // 0x8022C8A0: addiu       $s1, $s3, 0x14
    ctx->r17 = ADD32(ctx->r19, 0X14);
    // 0x8022C8A4: sh          $v0, 0x18($s3)
    MEM_H(0X18, ctx->r19) = ctx->r2;
    // 0x8022C8A8: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8022C8AC: lh          $a1, 0x18($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X18);
    // 0x8022C8B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C8B4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C8B8: sw          $v1, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r3;
    // 0x8022C8BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C8C0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022C8C4: sw          $v0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r2;
    // 0x8022C8C8: sw          $a1, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r5;
    // 0x8022C8CC: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022C8D0: lh          $v0, 0x32C($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X32C);
    // 0x8022C8D4: addiu       $a3, $zero, 0xC00
    ctx->r7 = ADD32(0, 0XC00);
    // 0x8022C8D8: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x8022C8DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022C8E0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022C8E4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022C8E8: jal         0x8004DBA0
    // 0x8022C8EC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022C8EC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_3:
    // 0x8022C8F0: addiu       $s0, $s4, 0xC4
    ctx->r16 = ADD32(ctx->r20, 0XC4);
    // 0x8022C8F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C8F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022C8FC: jal         0x8009A3B4
    // 0x8022C900: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022C900: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022C904: lh          $v0, 0xC4($s4)
    ctx->r2 = MEM_H(ctx->r20, 0XC4);
    // 0x8022C908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C90C: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022C910: addiu       $a1, $s2, 0x318
    ctx->r5 = ADD32(ctx->r18, 0X318);
    // 0x8022C914: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C918: sw          $v0, 0x318($s2)
    MEM_W(0X318, ctx->r18) = ctx->r2;
    // 0x8022C91C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C920: lh          $v0, 0x4A76($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A76);
    // 0x8022C924: lh          $v1, 0x32C($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X32C);
    // 0x8022C928: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    // 0x8022C92C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C930: sw          $v0, 0x31C($s2)
    MEM_W(0X31C, ctx->r18) = ctx->r2;
    // 0x8022C934: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C938: lh          $v0, 0x4A78($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A78);
    // 0x8022C93C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8022C940: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022C944: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C948: sw          $v0, 0x320($s2)
    MEM_W(0X320, ctx->r18) = ctx->r2;
    // 0x8022C94C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022C950: jal         0x8004DBA0
    // 0x8022C954: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_5;
    // 0x8022C954: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
    // 0x8022C958: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022C95C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C960: lhu         $v0, 0x4A76($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A76);
    // 0x8022C964: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022C968: addiu       $v0, $v0, 0x50
    ctx->r2 = ADD32(ctx->r2, 0X50);
    // 0x8022C96C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C970: sh          $v0, 0x4A76($at)
    MEM_H(0X4A76, ctx->r1) = ctx->r2;
    // 0x8022C974: jal         0x8004E99C
    // 0x8022C978: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    func_8004E99C_29D9C(rdram, ctx);
        goto after_6;
    // 0x8022C978: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_6:
    // 0x8022C97C: jal         0x8004F144
    // 0x8022C980: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x8022C980: nop

    after_7:
    // 0x8022C984: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C988: beq         $v1, $zero, L_8022CAD4
    if (ctx->r3 == 0) {
        // 0x8022C98C: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_8022CAD4;
    }
    // 0x8022C98C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022C990: sb          $s5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r21;
    // 0x8022C994: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022C998: sb          $s5, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r21;
    // 0x8022C99C: sb          $s6, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r22;
    // 0x8022C9A0: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8022C9A4: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022C9A8: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x8022C9AC: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022C9B0: lhu         $v0, 0x18($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X18);
    // 0x8022C9B4: j           L_8022CAD4
    // 0x8022C9B8: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
        goto L_8022CAD4;
    // 0x8022C9B8: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_8022C9BC:
    // 0x8022C9BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022C9C0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022C9C4: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022C9C8: lhu         $v1, 0x32C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X32C);
    // 0x8022C9CC: addiu       $a2, $s2, 0x310
    ctx->r6 = ADD32(ctx->r18, 0X310);
    // 0x8022C9D0: addiu       $a3, $s2, 0x318
    ctx->r7 = ADD32(ctx->r18, 0X318);
    // 0x8022C9D4: sb          $t0, 0x33B($s2)
    MEM_B(0X33B, ctx->r18) = ctx->r8;
    // 0x8022C9D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C9DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C9E0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C9E4: jal         0x8004E150
    // 0x8022C9E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_8;
    // 0x8022C9E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_8:
    // 0x8022C9EC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C9F0: bne         $v0, $zero, L_8022CAD4
    if (ctx->r2 != 0) {
        // 0x8022C9F4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022CAD4;
    }
    // 0x8022C9F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022C9F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C9FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CA00: jal         0x800502EC
    // 0x8022CA04: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_9;
    // 0x8022CA04: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    after_9:
    // 0x8022CA08: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022CA0C: lbu         $a0, 0x334($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X334);
    // 0x8022CA10: lbu         $a1, 0x335($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X335);
    // 0x8022CA14: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022CA18: sb          $v0, 0x33B($s2)
    MEM_B(0X33B, ctx->r18) = ctx->r2;
    // 0x8022CA1C: sb          $v1, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r3;
    // 0x8022CA20: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
    // 0x8022CA24: j           L_8022CAD4
    // 0x8022CA28: sb          $a1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r5;
        goto L_8022CAD4;
    // 0x8022CA28: sb          $a1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r5;
L_8022CA2C:
    // 0x8022CA2C: lb          $v1, 0xA7($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XA7);
    // 0x8022CA30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022CA34: bne         $v1, $v0, L_8022CAD4
    if (ctx->r3 != ctx->r2) {
        // 0x8022CA38: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022CAD4;
    }
    // 0x8022CA38: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022CA3C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022CA40: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022CA44: lhu         $v1, 0x32C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X32C);
    // 0x8022CA48: addiu       $a2, $s2, 0x310
    ctx->r6 = ADD32(ctx->r18, 0X310);
    // 0x8022CA4C: addiu       $a3, $s2, 0x318
    ctx->r7 = ADD32(ctx->r18, 0X318);
    // 0x8022CA50: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CA54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CA58: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CA5C: jal         0x8004E150
    // 0x8022CA60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_10;
    // 0x8022CA60: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_10:
    // 0x8022CA64: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022CA68: beq         $v0, $zero, L_8022CAA4
    if (ctx->r2 == 0) {
        // 0x8022CA6C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022CAA4;
    }
    // 0x8022CA6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022CA70: lbu         $v0, 0x33A($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X33A);
    // 0x8022CA74: bne         $v0, $zero, L_8022CAA8
    if (ctx->r2 != 0) {
        // 0x8022CA78: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022CAA8;
    }
    // 0x8022CA78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CA7C: lbu         $v0, 0x336($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X336);
    // 0x8022CA80: lbu         $a0, 0x33A($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X33A);
    // 0x8022CA84: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022CA88: sb          $zero, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = 0;
    // 0x8022CA8C: sb          $v1, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r3;
    // 0x8022CA90: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8022CA94: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022CA98: sb          $v0, 0x336($s2)
    MEM_B(0X336, ctx->r18) = ctx->r2;
    // 0x8022CA9C: j           L_8022CAD4
    // 0x8022CAA0: sb          $a0, 0x33A($s2)
    MEM_B(0X33A, ctx->r18) = ctx->r4;
        goto L_8022CAD4;
    // 0x8022CAA0: sb          $a0, 0x33A($s2)
    MEM_B(0X33A, ctx->r18) = ctx->r4;
L_8022CAA4:
    // 0x8022CAA4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022CAA8:
    // 0x8022CAA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CAAC: jal         0x800502EC
    // 0x8022CAB0: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_11;
    // 0x8022CAB0: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    after_11:
    // 0x8022CAB4: lbu         $v0, 0xAC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022CAB8: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    // 0x8022CABC: lbu         $v0, 0x4C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4C);
    // 0x8022CAC0: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022CAC4: lbu         $v0, 0x4D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4D);
    // 0x8022CAC8: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x8022CACC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022CAD0: sb          $v0, 0x53($s0)
    MEM_B(0X53, ctx->r16) = ctx->r2;
L_8022CAD4:
    // 0x8022CAD4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022CAD8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022CADC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022CAE0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022CAE4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022CAE8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022CAEC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CAF0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022CAF4: jr          $ra
    // 0x8022CAF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022CAF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802293EC_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802293EC: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x802293F0: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x802293F4: sh          $zero, 0x35C($a0)
    MEM_H(0X35C, ctx->r4) = 0;
    // 0x802293F8: sh          $zero, 0x35E($a0)
    MEM_H(0X35E, ctx->r4) = 0;
    // 0x802293FC: sh          $zero, 0x362($a0)
    MEM_H(0X362, ctx->r4) = 0;
    // 0x80229400: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80229404: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x80229408: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022940C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80229410: sh          $v0, 0x366($a0)
    MEM_H(0X366, ctx->r4) = ctx->r2;
    // 0x80229414: sh          $v0, 0x360($a0)
    MEM_H(0X360, ctx->r4) = ctx->r2;
    // 0x80229418: jr          $ra
    // 0x8022941C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022941C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8022D53C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D53C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D540: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D544: jal         0x8004F418
    // 0x8022D548: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022D548: nop

    after_0:
    // 0x8022D54C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D550: jr          $ra
    // 0x8022D554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225380_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225384: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225388: jal         0x80060798
    // 0x8022538C: nop

    func_80060798_3BB98(rdram, ctx);
        goto after_0;
    // 0x8022538C: nop

    after_0:
    // 0x80225390: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80225394: lb          $a1, -0x3BC6($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X3BC6);
    // 0x80225398: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022539C: addiu       $v0, $v0, 0xBD8
    ctx->r2 = ADD32(ctx->r2, 0XBD8);
    // 0x802253A0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802253A4: addiu       $a0, $a0, 0xBD0
    ctx->r4 = ADD32(ctx->r4, 0XBD0);
    // 0x802253A8: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x802253AC: jal         0x8006100C
    // 0x802253B0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_8006100C_3C40C(rdram, ctx);
        goto after_1;
    // 0x802253B0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_1:
    // 0x802253B4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802253B8: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    // 0x802253BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802253C0: jr          $ra
    // 0x802253C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CBC0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CBC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CBC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022CBC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CBCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022CBD0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CBD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CBD8: beq         $v1, $v0, L_8022CC3C
    if (ctx->r3 == ctx->r2) {
        // 0x8022CBDC: sb          $zero, 0x330($s0)
        MEM_B(0X330, ctx->r16) = 0;
            goto L_8022CC3C;
    }
    // 0x8022CBDC: sb          $zero, 0x330($s0)
    MEM_B(0X330, ctx->r16) = 0;
    // 0x8022CBE0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022CBE4: beql        $v0, $zero, L_8022CBFC
    if (ctx->r2 == 0) {
        // 0x8022CBE8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022CBFC;
    }
    goto skip_0;
    // 0x8022CBE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022CBEC: beq         $v1, $zero, L_8022CC0C
    if (ctx->r3 == 0) {
        // 0x8022CBF0: nop
    
            goto L_8022CC0C;
    }
    // 0x8022CBF0: nop

    // 0x8022CBF4: j           L_8022CCF8
    // 0x8022CBF8: nop

        goto L_8022CCF8;
    // 0x8022CBF8: nop

L_8022CBFC:
    // 0x8022CBFC: beq         $v1, $v0, L_8022CC9C
    if (ctx->r3 == ctx->r2) {
        // 0x8022CC00: nop
    
            goto L_8022CC9C;
    }
    // 0x8022CC00: nop

    // 0x8022CC04: j           L_8022CCF8
    // 0x8022CC08: nop

        goto L_8022CCF8;
    // 0x8022CC08: nop

L_8022CC0C:
    // 0x8022CC0C: lbu         $v0, 0x333($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X333);
    // 0x8022CC10: beq         $v0, $zero, L_8022CC7C
    if (ctx->r2 == 0) {
        // 0x8022CC14: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022CC7C;
    }
    // 0x8022CC14: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CC18: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CC1C: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022CC20: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CC24: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022CC28: sb          $v0, 0x333($s0)
    MEM_B(0X333, ctx->r16) = ctx->r2;
    // 0x8022CC2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022CC30: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022CC34: j           L_8022CC64
    // 0x8022CC38: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
        goto L_8022CC64;
    // 0x8022CC38: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
L_8022CC3C:
    // 0x8022CC3C: lbu         $v0, 0x333($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X333);
    // 0x8022CC40: beq         $v0, $zero, L_8022CC7C
    if (ctx->r2 == 0) {
        // 0x8022CC44: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022CC7C;
    }
    // 0x8022CC44: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CC48: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CC4C: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022CC50: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CC54: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022CC58: sb          $v0, 0x333($s0)
    MEM_B(0X333, ctx->r16) = ctx->r2;
    // 0x8022CC5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022CC60: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_8022CC64:
    // 0x8022CC64: jal         0x8004DBA0
    // 0x8022CC68: nop

    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x8022CC68: nop

    after_0:
    // 0x8022CC6C: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022CC70: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x8022CC74: j           L_8022CCF8
    // 0x8022CC78: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_8022CCF8;
    // 0x8022CC78: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022CC7C:
    // 0x8022CC7C: lbu         $v1, 0x332($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X332);
    // 0x8022CC80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CC84: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CC88: sb          $zero, 0x336($s0)
    MEM_B(0X336, ctx->r16) = 0;
    // 0x8022CC8C: sb          $zero, 0x33B($s0)
    MEM_B(0X33B, ctx->r16) = 0;
    // 0x8022CC90: andi        $v1, $v1, 0xFB
    ctx->r3 = ctx->r3 & 0XFB;
    // 0x8022CC94: j           L_8022CCF8
    // 0x8022CC98: sb          $v1, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r3;
        goto L_8022CCF8;
    // 0x8022CC98: sb          $v1, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r3;
L_8022CC9C:
    // 0x8022CC9C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022CCA0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022CCA4: beq         $v0, $a1, L_8022CCB4
    if (ctx->r2 == ctx->r5) {
        // 0x8022CCA8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CCB4;
    }
    // 0x8022CCA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CCAC: j           L_8022CCE8
    // 0x8022CCB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_8022CCE8;
    // 0x8022CCB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8022CCB4:
    // 0x8022CCB4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022CCB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022CCBC: bne         $v1, $v0, L_8022CCF8
    if (ctx->r3 != ctx->r2) {
        // 0x8022CCC0: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022CCF8;
    }
    // 0x8022CCC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CCC4: lbu         $v0, 0x332($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X332);
    // 0x8022CCC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CCCC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022CCD0: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022CCD4: sb          $zero, 0x336($s0)
    MEM_B(0X336, ctx->r16) = 0;
    // 0x8022CCD8: sb          $zero, 0x33B($s0)
    MEM_B(0X33B, ctx->r16) = 0;
    // 0x8022CCDC: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022CCE0: andi        $v0, $v0, 0xFB
    ctx->r2 = ctx->r2 & 0XFB;
    // 0x8022CCE4: sb          $v0, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r2;
L_8022CCE8:
    // 0x8022CCE8: jal         0x800502EC
    // 0x8022CCEC: nop

    func_800502EC_2B6EC(rdram, ctx);
        goto after_1;
    // 0x8022CCEC: nop

    after_1:
    // 0x8022CCF0: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022CCF4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
L_8022CCF8:
    // 0x8022CCF8: jal         0x80040F30
    // 0x8022CCFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022CCFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022CD00: andi        $v0, $v0, 0x3000
    ctx->r2 = ctx->r2 & 0X3000;
    // 0x8022CD04: bne         $v0, $zero, L_8022CD20
    if (ctx->r2 != 0) {
        // 0x8022CD08: nop
    
            goto L_8022CD20;
    }
    // 0x8022CD08: nop

    // 0x8022CD0C: jal         0x8003E934
    // 0x8022CD10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022CD10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022CD14: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022CD18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CD1C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022CD20:
    // 0x8022CD20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CD24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022CD28: jr          $ra
    // 0x8022CD2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CD2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226F2C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F2C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226F30: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226F34: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80226F38: bne         $v0, $zero, L_80226FF0
    if (ctx->r2 != 0) {
        // 0x80226F3C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80226FF0;
    }
    // 0x80226F3C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80226F40: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226F44: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80226F48: bne         $v1, $v0, L_80226F98
    if (ctx->r3 != ctx->r2) {
        // 0x80226F4C: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80226F98;
    }
    // 0x80226F4C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80226F50: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226F54: lbu         $v1, -0x3BC8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC8);
    // 0x80226F58: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226F5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F60: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226F64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226F68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F6C: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226F70: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226F74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F78: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226F7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F80: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226F84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F88: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226F8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F90: j           L_80226FD4
    // 0x80226F94: sb          $v1, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r3;
        goto L_80226FD4;
    // 0x80226F94: sb          $v1, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r3;
L_80226F98:
    // 0x80226F98: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226F9C: lbu         $v0, -0x3BC8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BC8);
    // 0x80226FA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226FA4: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x80226FA8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80226FAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226FB0: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80226FB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226FB8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226FBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226FC0: sb          $v1, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r3;
    // 0x80226FC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226FC8: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x80226FCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226FD0: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
L_80226FD4:
    // 0x80226FD4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80226FD8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226FDC: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80226FE0: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80226FE4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226FE8: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80226FEC: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_80226FF0:
    // 0x80226FF0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226FF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226FF8: bne         $v1, $v0, L_80227014
    if (ctx->r3 != ctx->r2) {
        // 0x80226FFC: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80227014;
    }
    // 0x80226FFC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80227000: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80227004: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x80227008: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022700C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80227010: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_80227014:
    // 0x80227014: bne         $v1, $v0, L_80227028
    if (ctx->r3 != ctx->r2) {
        // 0x80227018: nop
    
            goto L_80227028;
    }
    // 0x80227018: nop

    // 0x8022701C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80227020: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80227024: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_80227028:
    // 0x80227028: jr          $ra
    // 0x8022702C: nop

    TRACE_RETURN()
    return;
    // 0x8022702C: nop

;}
RECOMP_FUNC void func_80225750_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225754: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225758: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022575C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225760: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225764: bne         $v0, $zero, L_80225788
    if (ctx->r2 != 0) {
        // 0x80225768: nop
    
            goto L_80225788;
    }
    // 0x80225768: nop

    // 0x8022576C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225770: jal         0x800607C4
    // 0x80225774: addiu       $a0, $a0, 0xB98
    ctx->r4 = ADD32(ctx->r4, 0XB98);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225774: addiu       $a0, $a0, 0xB98
    ctx->r4 = ADD32(ctx->r4, 0XB98);
    after_0:
    // 0x80225778: jal         0x800712C4
    // 0x8022577C: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_1;
    // 0x8022577C: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    after_1:
    // 0x80225780: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225784: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225788:
    // 0x80225788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022578C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225790: jr          $ra
    // 0x80225794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022ACA8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ACA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022ACAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ACB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ACB4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022ACB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022ACBC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022ACC0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022ACC4: jal         0x8004FA7C
    // 0x8022ACC8: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022ACC8: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022ACCC: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022ACD0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022ACD4: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022ACD8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022ACDC: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x8022ACE0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022ACE4: beq         $v1, $zero, L_8022AD18
    if (ctx->r3 == 0) {
        // 0x8022ACE8: nop
    
            goto L_8022AD18;
    }
    // 0x8022ACE8: nop

    // 0x8022ACEC: jal         0x8022AE38
    // 0x8022ACF0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022AE38_ovl14(rdram, ctx);
        goto after_1;
    // 0x8022ACF0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x8022ACF4: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022ACF8: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022ACFC: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022AD00: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AD04: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022AD08: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022AD0C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022AD10: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022AD14: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022AD18:
    // 0x8022AD18: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AD1C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022AD20: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AD24: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022AD28: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AD2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AD30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AD34: jr          $ra
    // 0x8022AD38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AD38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D6C0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D6C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022D6C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022D6C8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D6CC: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022D6D0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022D6D4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022D6D8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022D6DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022D6E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022D6E4: lb          $v0, 0x36D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X36D);
    // 0x8022D6E8: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022D6EC: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022D6F0: beq         $v0, $zero, L_8022D930
    if (ctx->r2 == 0) {
        // 0x8022D6F4: addiu       $s4, $s1, 0x308
        ctx->r20 = ADD32(ctx->r17, 0X308);
            goto L_8022D930;
    }
    // 0x8022D6F4: addiu       $s4, $s1, 0x308
    ctx->r20 = ADD32(ctx->r17, 0X308);
    // 0x8022D6F8: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022D6FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D700: addiu       $s5, $s3, 0x14
    ctx->r21 = ADD32(ctx->r19, 0X14);
    // 0x8022D704: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022D708: lhu         $v0, 0x322($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X322);
    // 0x8022D70C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022D710: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8022D714: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022D718: jal         0x8004F820
    // 0x8022D71C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022D71C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8022D720: lhu         $v1, 0x322($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X322);
    // 0x8022D724: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D728: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D72C: jal         0x8004EFE4
    // 0x8022D730: sh          $v1, 0x322($s1)
    MEM_H(0X322, ctx->r17) = ctx->r3;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x8022D730: sh          $v1, 0x322($s1)
    MEM_H(0X322, ctx->r17) = ctx->r3;
    after_1:
    // 0x8022D734: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022D738: beq         $s2, $zero, L_8022D914
    if (ctx->r18 == 0) {
        // 0x8022D73C: addiu       $a0, $zero, 0x148
        ctx->r4 = ADD32(0, 0X148);
            goto L_8022D914;
    }
    // 0x8022D73C: addiu       $a0, $zero, 0x148
    ctx->r4 = ADD32(0, 0X148);
    // 0x8022D740: jal         0x8002A33C
    // 0x8022D744: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022D744: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022D748: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022D74C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D750: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x8022D754: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x8022D758: sb          $zero, 0x4($s2)
    MEM_B(0X4, ctx->r18) = 0;
    // 0x8022D75C: sb          $v1, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r3;
    // 0x8022D760: lhu         $v0, 0x198($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X198);
    // 0x8022D764: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x8022D768: lhu         $v0, 0x19A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19A);
    // 0x8022D76C: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8022D770: lhu         $v0, 0x19C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19C);
    // 0x8022D774: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x8022D778: addiu       $a0, $s3, 0xC4
    ctx->r4 = ADD32(ctx->r19, 0XC4);
    // 0x8022D77C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022D780: sh          $v0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r2;
    // 0x8022D784: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022D788: lh          $a3, 0x18($s2)
    ctx->r7 = MEM_H(ctx->r18, 0X18);
    // 0x8022D78C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D790: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D794: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x8022D798: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D79C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022D7A0: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8022D7A4: jal         0x8009A3B4
    // 0x8022D7A8: sw          $a3, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022D7A8: sw          $a3, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r7;
    after_3:
    // 0x8022D7AC: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x8022D7B0: addiu       $a1, $s1, 0x190
    ctx->r5 = ADD32(ctx->r17, 0X190);
    // 0x8022D7B4: jal         0x8009A3B4
    // 0x8022D7B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022D7B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022D7BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D7C0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022D7C4: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022D7C8: lhu         $v1, 0x322($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X322);
    // 0x8022D7CC: addiu       $a2, $s1, 0x34C
    ctx->r6 = ADD32(ctx->r17, 0X34C);
    // 0x8022D7D0: addiu       $a3, $s1, 0x354
    ctx->r7 = ADD32(ctx->r17, 0X354);
    // 0x8022D7D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D7D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D7DC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D7E0: jal         0x8004E150
    // 0x8022D7E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_5;
    // 0x8022D7E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022D7E8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022D7EC: beq         $v0, $zero, L_8022D828
    if (ctx->r2 == 0) {
        // 0x8022D7F0: nop
    
            goto L_8022D828;
    }
    // 0x8022D7F0: nop

    // 0x8022D7F4: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8022D7F8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022D7FC: lhu         $v1, 0x49C6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C6);
    // 0x8022D800: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022D804: lhu         $a0, 0x49C8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X49C8);
    // 0x8022D808: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022D80C: sh          $v0, 0xC4($s3)
    MEM_H(0XC4, ctx->r19) = ctx->r2;
    // 0x8022D810: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D814: sh          $v1, 0x4A76($at)
    MEM_H(0X4A76, ctx->r1) = ctx->r3;
    // 0x8022D818: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D81C: sh          $a0, 0x4A78($at)
    MEM_H(0X4A78, ctx->r1) = ctx->r4;
    // 0x8022D820: j           L_8022D8B8
    // 0x8022D824: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
        goto L_8022D8B8;
    // 0x8022D824: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8022D828:
    // 0x8022D828: lw          $a0, 0x80($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X80);
    // 0x8022D82C: jal         0x80032424
    // 0x8022D830: nop

    func_80032424_D824(rdram, ctx);
        goto after_6;
    // 0x8022D830: nop

    after_6:
    // 0x8022D834: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8022D838: lh          $a0, 0x322($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X322);
    // 0x8022D83C: sw          $v0, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->r2;
    // 0x8022D840: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x8022D844: jal         0x80032498
    // 0x8022D848: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80032498_D898(rdram, ctx);
        goto after_7;
    // 0x8022D848: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_7:
    // 0x8022D84C: lh          $a0, 0x322($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X322);
    // 0x8022D850: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8022D854: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022D858: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x8022D85C: jal         0x800324B4
    // 0x8022D860: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_800324B4_D8B4(rdram, ctx);
        goto after_8;
    // 0x8022D860: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_8:
    // 0x8022D864: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022D868: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D86C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D870: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022D874: lhu         $v1, 0x49C6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C6);
    // 0x8022D878: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x8022D87C: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022D880: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D884: sh          $v1, 0x4A76($at)
    MEM_H(0X4A76, ctx->r1) = ctx->r3;
    // 0x8022D888: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8022D88C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022D890: sh          $a0, 0xC4($s3)
    MEM_H(0XC4, ctx->r19) = ctx->r4;
    // 0x8022D894: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x8022D898: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D89C: mflo        $s0
    ctx->r16 = lo;
    // 0x8022D8A0: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022D8A4: srl         $s0, $s0, 12
    ctx->r16 = S32(U32(ctx->r16) >> 12);
    // 0x8022D8A8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022D8AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D8B0: sh          $v0, 0x4A78($at)
    MEM_H(0X4A78, ctx->r1) = ctx->r2;
    // 0x8022D8B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8022D8B8:
    // 0x8022D8B8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022D8BC: lh          $a2, 0x5E($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X5E);
    // 0x8022D8C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D8C4: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    // 0x8022D8C8: jal         0x8004E458
    // 0x8022D8CC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E458_29858(rdram, ctx);
        goto after_9;
    // 0x8022D8CC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_9:
    // 0x8022D8D0: jal         0x8022DB00
    // 0x8022D8D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022DB00_ovl14(rdram, ctx);
        goto after_10;
    // 0x8022D8D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x8022D8D8: jal         0x8004F144
    // 0x8022D8DC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_11;
    // 0x8022D8DC: nop

    after_11:
    // 0x8022D8E0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D8E4: beq         $v1, $zero, L_8022D914
    if (ctx->r3 == 0) {
        // 0x8022D8E8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D914;
    }
    // 0x8022D8E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D8EC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022D8F0: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8022D8F4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022D8F8: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x8022D8FC: lhu         $v0, 0x198($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X198);
    // 0x8022D900: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022D904: lhu         $v0, 0x19A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19A);
    // 0x8022D908: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022D90C: lhu         $v0, 0x19C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19C);
    // 0x8022D910: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_8022D914:
    // 0x8022D914: lbu         $v0, 0x65($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X65);
    // 0x8022D918: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
    // 0x8022D91C: sb          $v1, 0x66($s4)
    MEM_B(0X66, ctx->r20) = ctx->r3;
    // 0x8022D920: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D924: sb          $v0, 0x65($s4)
    MEM_B(0X65, ctx->r20) = ctx->r2;
    // 0x8022D928: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D92C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022D930:
    // 0x8022D930: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022D934: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D938: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022D93C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022D940: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022D944: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D948: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022D94C: jr          $ra
    // 0x8022D950: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022D950: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022AF80_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AF80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AF84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AF88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AF8C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022AF90: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022AF94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AF98: jal         0x8009A3B4
    // 0x8022AF9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022AF9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022AFA0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022AFA4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022AFA8: jal         0x8009A3B4
    // 0x8022AFAC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AFAC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022AFB0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022AFB4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022AFB8: jal         0x8009A3B4
    // 0x8022AFBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022AFBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022AFC0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022AFC4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AFC8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AFCC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AFD0: lw          $v0, 0x198C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X198C);
    // 0x8022AFD4: jalr        $v0
    // 0x8022AFD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022AFD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022AFDC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AFE0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022AFE4: beq         $v0, $zero, L_8022AFFC
    if (ctx->r2 == 0) {
        // 0x8022AFE8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AFFC;
    }
    // 0x8022AFE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AFEC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022AFF0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022AFF4: jal         0x8003B564
    // 0x8022AFF8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022AFF8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022AFFC:
    // 0x8022AFFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B000: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B004: jr          $ra
    // 0x8022B008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802293BC_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802293BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802293C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802293C4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802293C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802293CC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802293D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802293D4: lw          $v0, 0x1858($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1858);
    // 0x802293D8: jalr        $v0
    // 0x802293DC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802293DC: nop

    after_0:
    // 0x802293E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802293E4: jr          $ra
    // 0x802293E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802293E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C144_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C148: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C14C: jal         0x8004F418
    // 0x8022C150: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022C150: nop

    after_0:
    // 0x8022C154: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C158: jr          $ra
    // 0x8022C15C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C15C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A6C0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A6C0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022A6C4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022A6C8: bne         $v0, $zero, L_8022A700
    if (ctx->r2 != 0) {
        // 0x8022A6CC: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022A700;
    }
    // 0x8022A6CC: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022A6D0: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x8022A6D4: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x8022A6D8: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022A6DC: beq         $v1, $zero, L_8022A6EC
    if (ctx->r3 == 0) {
        // 0x8022A6E0: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_8022A6EC;
    }
    // 0x8022A6E0: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x8022A6E4: j           L_8022A6F0
    // 0x8022A6E8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022A6F0;
    // 0x8022A6E8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022A6EC:
    // 0x8022A6EC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022A6F0:
    // 0x8022A6F0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022A6F4: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x8022A6F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A6FC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_8022A700:
    // 0x8022A700: jr          $ra
    // 0x8022A704: nop

    TRACE_RETURN()
    return;
    // 0x8022A704: nop

;}
RECOMP_FUNC void func_802299DC_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802299DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802299E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802299E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802299E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802299EC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802299F0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802299F4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802299F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802299FC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80229A00: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80229A04: bne         $v1, $v0, L_80229A20
    if (ctx->r3 != ctx->r2) {
        // 0x80229A08: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80229A20;
    }
    // 0x80229A08: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80229A0C: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80229A10: addiu       $s1, $s1, 0x18E0
    ctx->r17 = ADD32(ctx->r17, 0X18E0);
    // 0x80229A14: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x80229A18: j           L_80229A30
    // 0x80229A1C: addiu       $s3, $s3, 0x1900
    ctx->r19 = ADD32(ctx->r19, 0X1900);
        goto L_80229A30;
    // 0x80229A1C: addiu       $s3, $s3, 0x1900
    ctx->r19 = ADD32(ctx->r19, 0X1900);
L_80229A20:
    // 0x80229A20: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80229A24: addiu       $s1, $s1, 0x18D0
    ctx->r17 = ADD32(ctx->r17, 0X18D0);
    // 0x80229A28: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x80229A2C: addiu       $s3, $s3, 0x18F0
    ctx->r19 = ADD32(ctx->r19, 0X18F0);
L_80229A30:
    // 0x80229A30: lui         $s4, 0x8023
    ctx->r20 = S32(0X8023 << 16);
    // 0x80229A34: jal         0x800A3450
    // 0x80229A38: addiu       $s4, $s4, 0x1910
    ctx->r20 = ADD32(ctx->r20, 0X1910);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80229A38: addiu       $s4, $s4, 0x1910
    ctx->r20 = ADD32(ctx->r20, 0X1910);
    after_0:
    // 0x80229A3C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229A40: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80229A44: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x80229A48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229A4C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80229A50: beq         $v1, $v0, L_80229ADC
    if (ctx->r3 == ctx->r2) {
        // 0x80229A54: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80229ADC;
    }
    // 0x80229A54: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229A58: beql        $v0, $zero, L_80229A70
    if (ctx->r2 == 0) {
        // 0x80229A5C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229A70;
    }
    goto skip_0;
    // 0x80229A5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80229A60: beq         $v1, $zero, L_80229A80
    if (ctx->r3 == 0) {
        // 0x80229A64: nop
    
            goto L_80229A80;
    }
    // 0x80229A64: nop

    // 0x80229A68: j           L_80229B6C
    // 0x80229A6C: nop

        goto L_80229B6C;
    // 0x80229A6C: nop

L_80229A70:
    // 0x80229A70: beq         $v1, $v0, L_80229AF0
    if (ctx->r3 == ctx->r2) {
        // 0x80229A74: nop
    
            goto L_80229AF0;
    }
    // 0x80229A74: nop

    // 0x80229A78: j           L_80229B6C
    // 0x80229A7C: nop

        goto L_80229B6C;
    // 0x80229A7C: nop

L_80229A80:
    // 0x80229A80: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80229A84: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80229A88: bne         $v0, $zero, L_80229AAC
    if (ctx->r2 != 0) {
        // 0x80229A8C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229AAC;
    }
    // 0x80229A8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229A90: jal         0x800A3450
    // 0x80229A94: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80229A94: nop

    after_1:
    // 0x80229A98: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229A9C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80229AA0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80229AA4: beq         $v0, $zero, L_80229AB8
    if (ctx->r2 == 0) {
        // 0x80229AA8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229AB8;
    }
    // 0x80229AA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80229AAC:
    // 0x80229AAC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80229AB0: j           L_80229ACC
    // 0x80229AB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80229ACC;
    // 0x80229AB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80229AB8:
    // 0x80229AB8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229ABC: jal         0x8022AE48
    // 0x80229AC0: nop

    func_8022AE48_ovl14(rdram, ctx);
        goto after_2;
    // 0x80229AC0: nop

    after_2:
    // 0x80229AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229AC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80229ACC:
    // 0x80229ACC: jal         0x8022AE88
    // 0x80229AD0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8022AE88_ovl14(rdram, ctx);
        goto after_3;
    // 0x80229AD0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x80229AD4: j           L_80229B90
    // 0x80229AD8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_80229B90;
    // 0x80229AD8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80229ADC:
    // 0x80229ADC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229AE0: jal         0x8022AE38
    // 0x80229AE4: nop

    func_8022AE38_ovl14(rdram, ctx);
        goto after_4;
    // 0x80229AE4: nop

    after_4:
    // 0x80229AE8: j           L_80229B90
    // 0x80229AEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80229B90;
    // 0x80229AEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80229AF0:
    // 0x80229AF0: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80229AF4: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x80229AF8: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x80229AFC: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80229B00: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x80229B04: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80229B08: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80229B0C: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x80229B10: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x80229B14: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80229B18: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80229B1C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80229B20: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x80229B24: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80229B28: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80229B2C: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x80229B30: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80229B34: beq         $v1, $zero, L_80229B64
    if (ctx->r3 == 0) {
        // 0x80229B38: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80229B64;
    }
    // 0x80229B38: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80229B3C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80229B40: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80229B44: beq         $v0, $zero, L_80229B64
    if (ctx->r2 == 0) {
        // 0x80229B48: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229B64;
    }
    // 0x80229B48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229B4C: jal         0x8022AE88
    // 0x80229B50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022AE88_ovl14(rdram, ctx);
        goto after_5;
    // 0x80229B50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80229B54: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229B58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229B5C: j           L_80229B90
    // 0x80229B60: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80229B90;
    // 0x80229B60: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80229B64:
    // 0x80229B64: j           L_80229B90
    // 0x80229B68: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_80229B90;
    // 0x80229B68: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_80229B6C:
    // 0x80229B6C: jal         0x800A3450
    // 0x80229B70: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80229B70: nop

    after_6:
    // 0x80229B74: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229B78: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229B7C: jal         0x8022AE48
    // 0x80229B80: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8022AE48_ovl14(rdram, ctx);
        goto after_7;
    // 0x80229B80: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x80229B84: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229B88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229B8C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_80229B90:
    // 0x80229B90: jal         0x800A3450
    // 0x80229B94: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x80229B94: nop

    after_8:
    // 0x80229B98: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229B9C: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80229BA0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80229BA4: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80229BA8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x80229BAC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229BB0: beq         $v1, $v0, L_80229BC8
    if (ctx->r3 == ctx->r2) {
        // 0x80229BB4: nop
    
            goto L_80229BC8;
    }
    // 0x80229BB4: nop

    // 0x80229BB8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229BBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229BC0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80229BC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229BC8:
    // 0x80229BC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80229BCC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80229BD0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80229BD4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229BD8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229BDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229BE0: jr          $ra
    // 0x80229BE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229BE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80229240_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229244: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229248: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022924C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229250: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80229254: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80229258: jal         0x8004FA7C
    // 0x8022925C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022925C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80229260: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229264: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229268: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022926C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229270: bne         $v0, $zero, L_802292D4
    if (ctx->r2 != 0) {
        // 0x80229274: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802292D4;
    }
    // 0x80229274: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80229278: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x8022927C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229280: beq         $v1, $zero, L_802292C4
    if (ctx->r3 == 0) {
        // 0x80229284: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_802292C4;
    }
    // 0x80229284: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229288: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022928C: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x80229290: jal         0x8009A3B4
    // 0x80229294: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229294: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80229298: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022929C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802292A0: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x802292A4: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x802292A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802292AC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802292B0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802292B4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802292B8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802292BC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x802292C0: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_802292C4:
    // 0x802292C4: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x802292C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802292CC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802292D0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_802292D4:
    // 0x802292D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802292D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802292DC: jr          $ra
    // 0x802292E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802292E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228D64_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228D64: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80228D68: bltzl       $v0, L_80228D70
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228D6C: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_80228D70;
    }
    goto skip_0;
    // 0x80228D6C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_80228D70:
    // 0x80228D70: jr          $ra
    // 0x80228D74: nop

    TRACE_RETURN()
    return;
    // 0x80228D74: nop

;}
RECOMP_FUNC void func_80228C3C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228C40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228C44: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228C48: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228C4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228C50: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x80228C54: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80228C58: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228C5C: addiu       $v0, $v0, 0x177C
    ctx->r2 = ADD32(ctx->r2, 0X177C);
    // 0x80228C60: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x80228C64: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x80228C68: jal         0x8022AE38
    // 0x80228C6C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_8022AE38_ovl14(rdram, ctx);
        goto after_0;
    // 0x80228C6C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80228C70: jal         0x800A3450
    // 0x80228C74: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80228C74: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x80228C78: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80228C7C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80228C80: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80228C84: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80228C88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228C8C: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x80228C90: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80228C94: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228C98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228C9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228CA0: jr          $ra
    // 0x80228CA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228CA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A290_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A290: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A294: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A298: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A29C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022A2A0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022A2A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A2A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A2AC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A2B0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022A2B4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A2B8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022A2BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A2C0: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x8022A2C4: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022A2C8: jal         0x8022AE38
    // 0x8022A2CC: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022AE38_ovl14(rdram, ctx);
        goto after_0;
    // 0x8022A2CC: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x8022A2D0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022A2D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A2D8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A2DC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022A2E0: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022A2E4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A2E8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022A2EC: jal         0x8004F820
    // 0x8022A2F0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022A2F0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022A2F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A2F8: bgez        $v0, L_8022A328
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A2FC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022A328;
    }
    // 0x8022A2FC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022A300: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A304: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A308: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A30C: jal         0x8004F820
    // 0x8022A310: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022A310: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022A314: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A318: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A31C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022A320: j           L_8022A344
    // 0x8022A324: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022A344;
    // 0x8022A324: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022A328:
    // 0x8022A328: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A32C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A330: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A334: jal         0x8004F820
    // 0x8022A338: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022A338: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022A33C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A340: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022A344:
    // 0x8022A344: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A348: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022A34C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022A350: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A354: jal         0x800610AC
    // 0x8022A358: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022A358: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022A35C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A360: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A364: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A368: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A36C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A370: jr          $ra
    // 0x8022A374: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A374: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022DCAC_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DCAC: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x8022DCB0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022DCB4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022DCB8: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022DCBC: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DCC0: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
    // 0x8022DCC4: bltzl       $v0, L_8022DCCC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022DCC8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022DCCC;
    }
    goto skip_0;
    // 0x8022DCC8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022DCCC:
    // 0x8022DCCC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022DCD0: bnel        $v0, $zero, L_8022DCF4
    if (ctx->r2 != 0) {
        // 0x8022DCD4: sh          $a3, 0x328($a0)
        MEM_H(0X328, ctx->r4) = ctx->r7;
            goto L_8022DCF4;
    }
    goto skip_1;
    // 0x8022DCD4: sh          $a3, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r7;
    skip_1:
    // 0x8022DCD8: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022DCDC: beq         $v0, $zero, L_8022DCEC
    if (ctx->r2 == 0) {
        // 0x8022DCE0: addiu       $v0, $a2, -0x20
        ctx->r2 = ADD32(ctx->r6, -0X20);
            goto L_8022DCEC;
    }
    // 0x8022DCE0: addiu       $v0, $a2, -0x20
    ctx->r2 = ADD32(ctx->r6, -0X20);
    // 0x8022DCE4: j           L_8022DCF4
    // 0x8022DCE8: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
        goto L_8022DCF4;
    // 0x8022DCE8: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022DCEC:
    // 0x8022DCEC: addiu       $v0, $a2, 0x20
    ctx->r2 = ADD32(ctx->r6, 0X20);
    // 0x8022DCF0: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022DCF4:
    // 0x8022DCF4: jr          $ra
    // 0x8022DCF8: nop

    TRACE_RETURN()
    return;
    // 0x8022DCF8: nop

;}
RECOMP_FUNC void func_8022E3E8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E3E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E3EC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022E3F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E3F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022E3F8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022E3FC: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x8022E400: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8022E404: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x8022E408: bne         $v0, $zero, L_8022E424
    if (ctx->r2 != 0) {
        // 0x8022E40C: sb          $v1, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r3;
            goto L_8022E424;
    }
    // 0x8022E40C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x8022E410: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x8022E414: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022E418: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022E41C: j           L_8022E4C8
    // 0x8022E420: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
        goto L_8022E4C8;
    // 0x8022E420: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
L_8022E424:
    // 0x8022E424: lui         $a0, 0x2AAA
    ctx->r4 = S32(0X2AAA << 16);
    // 0x8022E428: ori         $a0, $a0, 0xAAAB
    ctx->r4 = ctx->r4 | 0XAAAB;
    // 0x8022E42C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8022E430: addiu       $v1, $zero, 0xF0
    ctx->r3 = ADD32(0, 0XF0);
    // 0x8022E434: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E438: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E43C: sra         $v0, $v1, 31
    ctx->r2 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8022E440: mfhi        $t2
    ctx->r10 = hi;
    // 0x8022E444: subu        $a0, $t2, $v0
    ctx->r4 = SUB32(ctx->r10, ctx->r2);
    // 0x8022E448: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022E44C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022E450: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022E454: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E458: andi        $v0, $a1, 0x8
    ctx->r2 = ctx->r5 & 0X8;
    // 0x8022E45C: bne         $v0, $zero, L_8022E488
    if (ctx->r2 != 0) {
        // 0x8022E460: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_8022E488;
    }
    // 0x8022E460: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022E464: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E468: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E46C: lbu         $v1, 0x1A20($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1A20);
    // 0x8022E470: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8022E474: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E478: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E47C: lbu         $v0, 0x1A21($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1A21);
    // 0x8022E480: j           L_8022E4A8
    // 0x8022E484: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_8022E4A8;
    // 0x8022E484: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8022E488:
    // 0x8022E488: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E48C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E490: lbu         $v1, 0x1A2C($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1A2C);
    // 0x8022E494: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8022E498: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E49C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E4A0: lbu         $v0, 0x1A2D($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X1A2D);
    // 0x8022E4A4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8022E4A8:
    // 0x8022E4A8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8022E4AC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022E4B0: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x8022E4B4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E4B8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022E4BC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022E4C0: jal         0x8003B6B8
    // 0x8022E4C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_0;
    // 0x8022E4C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_8022E4C8:
    // 0x8022E4C8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022E4CC: beql        $v0, $zero, L_8022E574
    if (ctx->r2 == 0) {
        // 0x8022E4D0: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_8022E574;
    }
    goto skip_0;
    // 0x8022E4D0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x8022E4D4: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022E4D8: bgezl       $v0, L_8022E574
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022E4DC: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_8022E574;
    }
    goto skip_1;
    // 0x8022E4DC: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_1:
    // 0x8022E4E0: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022E4E4: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x8022E4E8: lhu         $t0, 0x4E($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022E4EC: lhu         $t1, 0x50($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X50);
    // 0x8022E4F0: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    // 0x8022E4F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E4F8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022E4FC: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022E500: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x8022E504: lh          $a2, 0x44($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X44);
    // 0x8022E508: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8022E50C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x8022E510: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022E514: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8022E518: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x8022E51C: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x8022E520: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x8022E524: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8022E528: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x8022E52C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022E530: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022E534: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x8022E538: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x8022E53C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022E540: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E544: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x8022E548: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x8022E54C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022E550: jal         0x8004DD04
    // 0x8022E554: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8022E554: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_1:
    // 0x8022E558: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022E55C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022E560: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x8022E564: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x8022E568: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x8022E56C: j           L_8022E57C
    // 0x8022E570: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
        goto L_8022E57C;
    // 0x8022E570: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_8022E574:
    // 0x8022E574: jal         0x8004F4F8
    // 0x8022E578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x8022E578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8022E57C:
    // 0x8022E57C: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x8022E580: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022E584: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E588: beq         $v0, $zero, L_8022E5A4
    if (ctx->r2 == 0) {
        // 0x8022E58C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022E5A4;
    }
    // 0x8022E58C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E590: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E594: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8022E598: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E59C: j           L_8022E61C
    // 0x8022E5A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022E61C;
    // 0x8022E5A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022E5A4:
    // 0x8022E5A4: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x8022E5A8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022E5AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E5B0: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x8022E5B4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022E5B8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022E5BC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022E5C0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8022E5C4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E5C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022E5CC: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022E5D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022E5D4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022E5D8: jal         0x80051E18
    // 0x8022E5DC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x8022E5DC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022E5E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E5E4: jal         0x8003F754
    // 0x8022E5E8: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    func_8003F754_1AB54(rdram, ctx);
        goto after_4;
    // 0x8022E5E8: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    after_4:
    // 0x8022E5EC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022E5F0: beq         $a0, $zero, L_8022E604
    if (ctx->r4 == 0) {
        // 0x8022E5F4: nop
    
            goto L_8022E604;
    }
    // 0x8022E5F4: nop

    // 0x8022E5F8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E5FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E600: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022E604:
    // 0x8022E604: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022E608: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022E60C: bne         $v0, $zero, L_8022E61C
    if (ctx->r2 != 0) {
        // 0x8022E610: nop
    
            goto L_8022E61C;
    }
    // 0x8022E610: nop

    // 0x8022E614: jal         0x800711A8
    // 0x8022E618: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_5;
    // 0x8022E618: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_5:
L_8022E61C:
    // 0x8022E61C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E620: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022E624: jr          $ra
    // 0x8022E628: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022E628: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022A378_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A378: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A37C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A380: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A384: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A388: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A38C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022A390: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A394: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022A398: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022A39C: bne         $v0, $zero, L_8022A3F8
    if (ctx->r2 != 0) {
        // 0x8022A3A0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022A3F8;
    }
    // 0x8022A3A0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022A3A4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A3A8: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022A3AC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A3B0: jal         0x8004F820
    // 0x8022A3B4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022A3B4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022A3B8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A3BC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A3C0: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022A3C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A3C8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A3CC: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022A3D0: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022A3D4: beq         $a0, $zero, L_8022A3F8
    if (ctx->r4 == 0) {
        // 0x8022A3D8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022A3F8;
    }
    // 0x8022A3D8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022A3DC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A3E0: jal         0x8022ADA0
    // 0x8022A3E4: nop

    func_8022ADA0_ovl14(rdram, ctx);
        goto after_1;
    // 0x8022A3E4: nop

    after_1:
    // 0x8022A3E8: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022A3EC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A3F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A3F4: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022A3F8:
    // 0x8022A3F8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022A3FC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022A400: bne         $v0, $zero, L_8022A424
    if (ctx->r2 != 0) {
        // 0x8022A404: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022A424;
    }
    // 0x8022A404: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022A408: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A40C: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022A410: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022A414: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022A418: jal         0x8022AE38
    // 0x8022A41C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022AE38_ovl14(rdram, ctx);
        goto after_2;
    // 0x8022A41C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022A420: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022A424:
    // 0x8022A424: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A428: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A42C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A430: jr          $ra
    // 0x8022A434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225678_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022567C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225680: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225688: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022568C: bne         $v0, $zero, L_802256B0
    if (ctx->r2 != 0) {
        // 0x80225690: nop
    
            goto L_802256B0;
    }
    // 0x80225690: nop

    // 0x80225694: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225698: jal         0x800607C4
    // 0x8022569C: addiu       $a0, $a0, 0xB80
    ctx->r4 = ADD32(ctx->r4, 0XB80);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022569C: addiu       $a0, $a0, 0xB80
    ctx->r4 = ADD32(ctx->r4, 0XB80);
    after_0:
    // 0x802256A0: jal         0x800712C4
    // 0x802256A4: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_1;
    // 0x802256A4: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    after_1:
    // 0x802256A8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802256AC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802256B0:
    // 0x802256B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802256B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802256B8: jr          $ra
    // 0x802256BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802256BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A574_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A574: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A578: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A57C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A580: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022A584: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022A588: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A58C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A590: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A594: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022A598: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8022A59C: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x8022A5A0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022A5A4: jal         0x8022AED4
    // 0x8022A5A8: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_8022AED4_ovl14(rdram, ctx);
        goto after_0;
    // 0x8022A5A8: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022A5AC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022A5B0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022A5B4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A5B8: beq         $v0, $zero, L_8022A64C
    if (ctx->r2 == 0) {
        // 0x8022A5BC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022A64C;
    }
    // 0x8022A5BC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022A5C0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A5C4: jal         0x8022AE38
    // 0x8022A5C8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_8022AE38_ovl14(rdram, ctx);
        goto after_1;
    // 0x8022A5C8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022A5CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A5D0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A5D4: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x8022A5D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A5DC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022A5E0: jal         0x8004F820
    // 0x8022A5E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022A5E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022A5E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A5EC: bgez        $v0, L_8022A618
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A5F0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022A618;
    }
    // 0x8022A5F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A5F4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A5F8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A5FC: jal         0x8004F820
    // 0x8022A600: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022A600: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022A604: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A608: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A60C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022A610: j           L_8022A630
    // 0x8022A614: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022A630;
    // 0x8022A614: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022A618:
    // 0x8022A618: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A61C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A620: jal         0x8004F820
    // 0x8022A624: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022A624: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x8022A628: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A62C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022A630:
    // 0x8022A630: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8022A634: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x8022A638: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A63C: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022A640: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022A644: j           L_8022A694
    // 0x8022A648: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_8022A694;
    // 0x8022A648: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022A64C:
    // 0x8022A64C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A650: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A654: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022A658: jal         0x8004F820
    // 0x8022A65C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022A65C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x8022A660: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A664: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022A668: beq         $v0, $zero, L_8022A678
    if (ctx->r2 == 0) {
        // 0x8022A66C: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_8022A678;
    }
    // 0x8022A66C: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x8022A670: j           L_8022A67C
    // 0x8022A674: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022A67C;
    // 0x8022A674: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022A678:
    // 0x8022A678: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022A67C:
    // 0x8022A67C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A680: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A684: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022A688: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022A68C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A690: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022A694:
    // 0x8022A694: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A698: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A69C: jal         0x800610AC
    // 0x8022A6A0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x8022A6A0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x8022A6A4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A6A8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A6AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A6B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A6B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A6B8: jr          $ra
    // 0x8022A6BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A6BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022FAB0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FAB0: jr          $ra
    // 0x8022FAB4: nop

    TRACE_RETURN()
    return;
    // 0x8022FAB4: nop

;}
RECOMP_FUNC void func_8022B850_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B850: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B854: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022B858: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B85C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B860: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022B864: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022B868: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022B86C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022B870: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022B874: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B878: bne         $v0, $s1, L_8022B95C
    if (ctx->r2 != ctx->r17) {
        // 0x8022B87C: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8022B95C;
    }
    // 0x8022B87C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B880: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022B884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B888: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022B88C: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x8022B890: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B894: jal         0x8004F820
    // 0x8022B898: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B898: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x8022B89C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B8A0: bgez        $v0, L_8022B8CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B8A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B8CC;
    }
    // 0x8022B8A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B8A8: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022B8AC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B8B0: jal         0x8004F820
    // 0x8022B8B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022B8B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022B8B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B8BC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B8C0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022B8C4: j           L_8022B8E4
    // 0x8022B8C8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022B8E4;
    // 0x8022B8C8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022B8CC:
    // 0x8022B8CC: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022B8D0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B8D4: jal         0x8004F820
    // 0x8022B8D8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022B8D8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022B8DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B8E0: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022B8E4:
    // 0x8022B8E4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x8022B8E8: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8022B8EC: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x8022B8F0: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x8022B8F4: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022B8F8: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8022B8FC: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8022B900: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x8022B904: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x8022B908: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022B90C: addiu       $s0, $s0, 0x1D40
    ctx->r16 = ADD32(ctx->r16, 0X1D40);
    // 0x8022B910: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8022B914: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x8022B918: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022B91C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B920: sw          $v0, 0x1D44($at)
    MEM_W(0X1D44, ctx->r1) = ctx->r2;
    // 0x8022B924: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x8022B928: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x8022B92C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B930: sw          $v0, 0x1D48($at)
    MEM_W(0X1D48, ctx->r1) = ctx->r2;
    // 0x8022B934: jal         0x8004EC38
    // 0x8022B938: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8022B938: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022B93C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B940: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022B944: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022B948: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022B94C: jal         0x80034FCC
    // 0x8022B950: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x8022B950: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x8022B954: j           L_8022B960
    // 0x8022B958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022B960;
    // 0x8022B958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B95C:
    // 0x8022B95C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022B960:
    // 0x8022B960: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022B964: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B968: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022B96C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B970: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B974: jr          $ra
    // 0x8022B978: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B978: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802256C0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802256C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802256C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802256CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802256D0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802256D4: bne         $v0, $zero, L_802256F8
    if (ctx->r2 != 0) {
        // 0x802256D8: nop
    
            goto L_802256F8;
    }
    // 0x802256D8: nop

    // 0x802256DC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802256E0: jal         0x800607C4
    // 0x802256E4: addiu       $a0, $a0, 0xB88
    ctx->r4 = ADD32(ctx->r4, 0XB88);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802256E4: addiu       $a0, $a0, 0xB88
    ctx->r4 = ADD32(ctx->r4, 0XB88);
    after_0:
    // 0x802256E8: jal         0x800712C4
    // 0x802256EC: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_1;
    // 0x802256EC: addiu       $a0, $zero, 0x173
    ctx->r4 = ADD32(0, 0X173);
    after_1:
    // 0x802256F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802256F4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802256F8:
    // 0x802256F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802256FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225700: jr          $ra
    // 0x80225704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A708_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A70C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A710: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A718: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022A71C: bgez        $v0, L_8022A750
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A720: nop
    
            goto L_8022A750;
    }
    // 0x8022A720: nop

    // 0x8022A724: jal         0x8022AE38
    // 0x8022A728: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022AE38_ovl14(rdram, ctx);
        goto after_0;
    // 0x8022A728: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022A72C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022A730: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022A734: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022A738: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A73C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022A740: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022A744: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022A748: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022A74C: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022A750:
    // 0x8022A750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A754: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A758: jr          $ra
    // 0x8022A75C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A75C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229E40_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229E44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229E48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229E50: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80229E54: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80229E58: jal         0x8004FA7C
    // 0x80229E5C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80229E5C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80229E60: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229E64: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80229E68: bne         $v0, $zero, L_80229E78
    if (ctx->r2 != 0) {
        // 0x80229E6C: nop
    
            goto L_80229E78;
    }
    // 0x80229E6C: nop

    // 0x80229E70: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x80229E74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229E78:
    // 0x80229E78: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229E7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229E80: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229E84: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229E8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229E90: jr          $ra
    // 0x80229E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225858_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225858: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022585C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225860: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225864: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80225868: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022586C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80225870: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x80225874: lh          $v0, 0xEE($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XEE);
    // 0x80225878: beq         $v1, $v0, L_8022588C
    if (ctx->r3 == ctx->r2) {
        // 0x8022587C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022588C;
    }
    // 0x8022587C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80225880: lhu         $v0, 0x4C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4C);
    // 0x80225884: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80225888: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022588C:
    // 0x8022588C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225890: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80225894: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225898: jal         0x8004DA90
    // 0x8022589C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022589C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802258A0: jal         0x8003F754
    // 0x802258A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_1;
    // 0x802258A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802258A8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802258AC: beql        $s1, $zero, L_802258E8
    if (ctx->r17 == 0) {
        // 0x802258B0: addiu       $s1, $s0, 0x14
        ctx->r17 = ADD32(ctx->r16, 0X14);
            goto L_802258E8;
    }
    goto skip_0;
    // 0x802258B0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    skip_0:
    // 0x802258B4: jal         0x800715F8
    // 0x802258B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800715F8_4C9F8(rdram, ctx);
        goto after_2;
    // 0x802258B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802258BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802258C0: jal         0x800711A8
    // 0x802258C4: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    func_800711A8_4C5A8(rdram, ctx);
        goto after_3;
    // 0x802258C4: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_3:
    // 0x802258C8: jal         0x8006036C
    // 0x802258CC: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x802258CC: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_4:
    // 0x802258D0: jal         0x8006036C
    // 0x802258D4: addiu       $a0, $zero, 0x31C
    ctx->r4 = ADD32(0, 0X31C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x802258D4: addiu       $a0, $zero, 0x31C
    ctx->r4 = ADD32(0, 0X31C);
    after_5:
    // 0x802258D8: addiu       $a0, $zero, 0x17F
    ctx->r4 = ADD32(0, 0X17F);
    // 0x802258DC: jal         0x8002A33C
    // 0x802258E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x802258E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x802258E4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
L_802258E8:
    // 0x802258E8: lbu         $a1, 0xF0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF0);
    // 0x802258EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802258F0: lw          $v0, 0xE0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE0);
    // 0x802258F4: lui         $s2, 0x8023
    ctx->r18 = S32(0X8023 << 16);
    // 0x802258F8: addiu       $s2, $s2, 0xC50
    ctx->r18 = ADD32(ctx->r18, 0XC50);
    // 0x802258FC: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80225900: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    // 0x80225904: jal         0x8004DE68
    // 0x80225908: sw          $v0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r2;
    func_8004DE68_29268(rdram, ctx);
        goto after_7;
    // 0x80225908: sw          $v0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r2;
    after_7:
    // 0x8022590C: lw          $v1, 0xE4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE4);
    // 0x80225910: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80225914: beq         $v1, $zero, L_802259C4
    if (ctx->r3 == 0) {
        // 0x80225918: sw          $v0, 0xE0($s0)
        MEM_W(0XE0, ctx->r16) = ctx->r2;
            goto L_802259C4;
    }
    // 0x80225918: sw          $v0, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r2;
    // 0x8022591C: lbu         $v0, 0xF0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF0);
    // 0x80225920: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
    // 0x80225924: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225928: sb          $v0, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = ctx->r2;
    // 0x8022592C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80225930: bne         $v0, $v1, L_8022595C
    if (ctx->r2 != ctx->r3) {
        // 0x80225934: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022595C;
    }
    // 0x80225934: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80225938: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    // 0x8022593C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80225940: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225944: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80225948: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022594C: jal         0x8002A33C
    // 0x80225950: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x80225950: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    after_8:
    // 0x80225954: j           L_802259C4
    // 0x80225958: nop

        goto L_802259C4;
    // 0x80225958: nop

L_8022595C:
    // 0x8022595C: lbu         $a1, 0xF0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF0);
    // 0x80225960: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225964: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80225968: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8022596C: jal         0x8004EC38
    // 0x80225970: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    func_8004EC38_2A038(rdram, ctx);
        goto after_9;
    // 0x80225970: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    after_9:
    // 0x80225974: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80225978: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022597C: sh          $v0, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r2;
    // 0x80225980: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80225984: bltzl       $v1, L_8022598C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225988: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_8022598C;
    }
    goto skip_1;
    // 0x80225988: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_1:
L_8022598C:
    // 0x8022598C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80225990: slti        $v0, $v1, 0x800
    ctx->r2 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x80225994: bne         $v0, $zero, L_802259A8
    if (ctx->r2 != 0) {
        // 0x80225998: sh          $v1, 0xEA($s0)
        MEM_H(0XEA, ctx->r16) = ctx->r3;
            goto L_802259A8;
    }
    // 0x80225998: sh          $v1, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r3;
    // 0x8022599C: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x802259A0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802259A4: sh          $v0, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r2;
L_802259A8:
    // 0x802259A8: lhu         $v0, 0xEA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XEA);
    // 0x802259AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802259B0: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802259B4: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x802259B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802259BC: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x802259C0: sh          $v1, 0xEC($s0)
    MEM_H(0XEC, ctx->r16) = ctx->r3;
L_802259C4:
    // 0x802259C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802259C8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802259CC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802259D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802259D4: jr          $ra
    // 0x802259D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802259D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022FB2C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FB2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FB30: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FB34: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022FB38: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FB3C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FB40: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FB44: lw          $v0, 0x1B00($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1B00);
    // 0x8022FB48: jalr        $v0
    // 0x8022FB4C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FB4C: nop

    after_0:
    // 0x8022FB50: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FB54: jr          $ra
    // 0x8022FB58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FB58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227DD4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227DD4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227DD8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80227DDC: beq         $v1, $zero, L_80227DF8
    if (ctx->r3 == 0) {
        // 0x80227DE0: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_80227DF8;
    }
    // 0x80227DE0: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x80227DE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227DE8: beq         $v1, $v0, L_80227E04
    if (ctx->r3 == ctx->r2) {
        // 0x80227DEC: nop
    
            goto L_80227E04;
    }
    // 0x80227DEC: nop

    // 0x80227DF0: j           L_80227E30
    // 0x80227DF4: nop

        goto L_80227E30;
    // 0x80227DF4: nop

L_80227DF8:
    // 0x80227DF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227DFC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80227E00: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80227E04:
    // 0x80227E04: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x80227E08: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x80227E0C: bne         $v0, $zero, L_80227E2C
    if (ctx->r2 != 0) {
        // 0x80227E10: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_80227E2C;
    }
    // 0x80227E10: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
    // 0x80227E14: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x80227E18: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80227E1C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80227E20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227E24: beq         $v0, $zero, L_80227E30
    if (ctx->r2 == 0) {
        // 0x80227E28: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_80227E30;
    }
    // 0x80227E28: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
L_80227E2C:
    // 0x80227E2C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80227E30:
    // 0x80227E30: jr          $ra
    // 0x80227E34: nop

    TRACE_RETURN()
    return;
    // 0x80227E34: nop

;}
RECOMP_FUNC void func_80225604_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225604: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225608: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022560C: jal         0x8006033C
    // 0x80225610: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225610: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_0:
    // 0x80225614: beq         $v0, $zero, L_80225624
    if (ctx->r2 == 0) {
        // 0x80225618: nop
    
            goto L_80225624;
    }
    // 0x80225618: nop

    // 0x8022561C: jal         0x80060690
    // 0x80225620: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x80225620: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_1:
L_80225624:
    // 0x80225624: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225628: jr          $ra
    // 0x8022562C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022562C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229D80_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D80: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80229D84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229D88: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80229D8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229D90: bne         $v0, $zero, L_80229D9C
    if (ctx->r2 != 0) {
        // 0x80229D94: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229D9C;
    }
    // 0x80229D94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D98: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80229D9C:
    // 0x80229D9C: jr          $ra
    // 0x80229DA0: nop

    TRACE_RETURN()
    return;
    // 0x80229DA0: nop

;}
RECOMP_FUNC void func_80228D0C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228D0C: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x80228D10: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80228D14: beq         $v0, $zero, L_80228D30
    if (ctx->r2 == 0) {
        // 0x80228D18: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80228D30;
    }
    // 0x80228D18: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228D1C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80228D20: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80228D24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228D28: bne         $v0, $zero, L_80228D5C
    if (ctx->r2 != 0) {
        // 0x80228D2C: nop
    
            goto L_80228D5C;
    }
    // 0x80228D2C: nop

L_80228D30:
    // 0x80228D30: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80228D34: bgez        $v0, L_80228D5C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228D38: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80228D5C;
    }
    // 0x80228D38: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80228D3C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x80228D40: bnel        $v1, $v0, L_80228D5C
    if (ctx->r3 != ctx->r2) {
        // 0x80228D44: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_80228D5C;
    }
    goto skip_0;
    // 0x80228D44: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x80228D48: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228D4C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80228D50: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80228D54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228D58: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80228D5C:
    // 0x80228D5C: jr          $ra
    // 0x80228D60: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80228D60: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80227758_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227758: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022775C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80227760: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227764: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80227768: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022776C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80227770: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227774: bne         $v0, $zero, L_80227868
    if (ctx->r2 != 0) {
        // 0x80227778: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80227868;
    }
    // 0x80227778: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022777C: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80227780: bne         $v1, $zero, L_80227798
    if (ctx->r3 != 0) {
        // 0x80227784: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227798;
    }
    // 0x80227784: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227788: jal         0x80036E48
    // 0x8022778C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8022778C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80227790: j           L_80227820
    // 0x80227794: nop

        goto L_80227820;
    // 0x80227794: nop

L_80227798:
    // 0x80227798: bne         $v1, $v0, L_80227830
    if (ctx->r3 != ctx->r2) {
        // 0x8022779C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227830;
    }
    // 0x8022779C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802277A0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802277A4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x802277A8: addiu       $v0, $zero, -0xCA0
    ctx->r2 = ADD32(0, -0XCA0);
    // 0x802277AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802277B0: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x802277B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802277B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802277BC: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x802277C0: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x802277C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802277C8: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x802277CC: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x802277D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802277D4: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x802277D8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802277DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802277E0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802277E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802277E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802277EC: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x802277F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802277F4: sb          $a0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r4;
    // 0x802277F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802277FC: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x80227800: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227804: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80227808: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022780C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80227810: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80227814: sb          $a0, -0x3B9F($at)
    MEM_B(-0X3B9F, ctx->r1) = ctx->r4;
    // 0x80227818: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022781C: sb          $v1, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = ctx->r3;
L_80227820:
    // 0x80227820: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227824: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227828: j           L_80227868
    // 0x8022782C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80227868;
    // 0x8022782C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80227830:
    // 0x80227830: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80227834: lb          $v1, 0x47CC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X47CC);
    // 0x80227838: bne         $v1, $v0, L_80227868
    if (ctx->r3 != ctx->r2) {
        // 0x8022783C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80227868;
    }
    // 0x8022783C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80227840: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227844: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80227848: bne         $v0, $zero, L_80227868
    if (ctx->r2 != 0) {
        // 0x8022784C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80227868;
    }
    // 0x8022784C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80227850: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80227854: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80227858: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022785C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80227860: jal         0x80070050
    // 0x80227864: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    func_80070050_4B450(rdram, ctx);
        goto after_1;
    // 0x80227864: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    after_1:
L_80227868:
    // 0x80227868: jal         0x8005FB90
    // 0x8022786C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_2;
    // 0x8022786C: nop

    after_2:
    // 0x80227870: jal         0x80060018
    // 0x80227874: nop

    func_80060018_3B418(rdram, ctx);
        goto after_3;
    // 0x80227874: nop

    after_3:
    // 0x80227878: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022787C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80227880: jr          $ra
    // 0x80227884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FAF8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FAF8: jr          $ra
    // 0x8022FAFC: nop

    TRACE_RETURN()
    return;
    // 0x8022FAFC: nop

;}
RECOMP_FUNC void func_8022FE3C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FE3C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FE40: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022FE44: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022FE48: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022FE4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FE50: bne         $v0, $s0, L_8022FE64
    if (ctx->r2 != ctx->r16) {
        // 0x8022FE54: sw          $ra, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r31;
            goto L_8022FE64;
    }
    // 0x8022FE54: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022FE58: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FE5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FE60: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022FE64:
    // 0x8022FE64: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022FE68: bne         $v0, $zero, L_8022FE84
    if (ctx->r2 != 0) {
        // 0x8022FE6C: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_8022FE84;
    }
    // 0x8022FE6C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022FE70: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022FE74: jal         0x8009A3B4
    // 0x8022FE78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022FE78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022FE7C: j           L_8022FEBC
    // 0x8022FE80: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
        goto L_8022FEBC;
    // 0x8022FE80: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8022FE84:
    // 0x8022FE84: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x8022FE88: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8022FE8C: lhu         $v0, 0x1E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E);
    // 0x8022FE90: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022FE94: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x8022FE98: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
    // 0x8022FE9C: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x8022FEA0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022FEA4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FEA8: beq         $v1, $v0, L_8022FEC0
    if (ctx->r3 == ctx->r2) {
        // 0x8022FEAC: addiu       $a1, $zero, 0x28
        ctx->r5 = ADD32(0, 0X28);
            goto L_8022FEC0;
    }
    // 0x8022FEAC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022FEB0: jal         0x8023012C
    // 0x8022FEB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023012C_ovl14(rdram, ctx);
        goto after_1;
    // 0x8022FEB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022FEB8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8022FEBC:
    // 0x8022FEBC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
L_8022FEC0:
    // 0x8022FEC0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022FEC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FEC8: addiu       $v0, $s0, 0x4C
    ctx->r2 = ADD32(ctx->r16, 0X4C);
    // 0x8022FECC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022FED0: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022FED4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022FED8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022FEDC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022FEE0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022FEE4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022FEE8: jal         0x80051E18
    // 0x8022FEEC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_2;
    // 0x8022FEEC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x8022FEF0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022FEF4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022FEF8: jr          $ra
    // 0x8022FEFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022FEFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80226180_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226180: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226184: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226188: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022618C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226190: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226194: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226198: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022619C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802261A0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802261A4: bne         $v0, $zero, L_80226368
    if (ctx->r2 != 0) {
        // 0x802261A8: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_80226368;
    }
    // 0x802261A8: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x802261AC: lw          $v0, 0xD0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD0);
    // 0x802261B0: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x802261B4: addiu       $v1, $zero, 0x33
    ctx->r3 = ADD32(0, 0X33);
    // 0x802261B8: beq         $v0, $v1, L_802261CC
    if (ctx->r2 == ctx->r3) {
        // 0x802261BC: nop
    
            goto L_802261CC;
    }
    // 0x802261BC: nop

    // 0x802261C0: lbu         $v0, 0xF2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF2);
    // 0x802261C4: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x802261C8: sb          $v0, 0xF2($s0)
    MEM_B(0XF2, ctx->r16) = ctx->r2;
L_802261CC:
    // 0x802261CC: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x802261D0: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x802261D4: beq         $v0, $v1, L_802261E8
    if (ctx->r2 == ctx->r3) {
        // 0x802261D8: nop
    
            goto L_802261E8;
    }
    // 0x802261D8: nop

    // 0x802261DC: lbu         $v0, 0xF2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF2);
    // 0x802261E0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802261E4: sb          $v0, 0xF2($s0)
    MEM_B(0XF2, ctx->r16) = ctx->r2;
L_802261E8:
    // 0x802261E8: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x802261EC: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x802261F0: beq         $v0, $v1, L_80226204
    if (ctx->r2 == ctx->r3) {
        // 0x802261F4: nop
    
            goto L_80226204;
    }
    // 0x802261F4: nop

    // 0x802261F8: lbu         $v0, 0xF2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF2);
    // 0x802261FC: andi        $v0, $v0, 0xFB
    ctx->r2 = ctx->r2 & 0XFB;
    // 0x80226200: sb          $v0, 0xF2($s0)
    MEM_B(0XF2, ctx->r16) = ctx->r2;
L_80226204:
    // 0x80226204: lw          $v0, 0xDC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XDC);
    // 0x80226208: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x8022620C: beq         $v0, $v1, L_80226220
    if (ctx->r2 == ctx->r3) {
        // 0x80226210: nop
    
            goto L_80226220;
    }
    // 0x80226210: nop

    // 0x80226214: lbu         $v0, 0xF2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF2);
    // 0x80226218: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x8022621C: sb          $v0, 0xF2($s0)
    MEM_B(0XF2, ctx->r16) = ctx->r2;
L_80226220:
    // 0x80226220: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226224: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226228: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022622C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226230: lw          $v0, 0xCC4($at)
    ctx->r2 = MEM_W(ctx->r1, 0XCC4);
    // 0x80226234: jalr        $v0
    // 0x80226238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022623C: lbu         $v0, 0xF4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF4);
    // 0x80226240: bne         $v0, $zero, L_8022629C
    if (ctx->r2 != 0) {
        // 0x80226244: nop
    
            goto L_8022629C;
    }
    // 0x80226244: nop

    // 0x80226248: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022624C: lhu         $v0, 0x4A60($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A60);
    // 0x80226250: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226254: lh          $a0, 0x4A1E($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4A1E);
    // 0x80226258: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022625C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226260: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x80226264: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226268: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8022626C: slt         $a0, $a0, $v1
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80226270: beq         $a0, $zero, L_8022629C
    if (ctx->r4 == 0) {
        // 0x80226274: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022629C;
    }
    // 0x80226274: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226278: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022627C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226280: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226284: bne         $v0, $zero, L_8022629C
    if (ctx->r2 != 0) {
        // 0x80226288: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022629C;
    }
    // 0x80226288: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022628C: jal         0x800616FC
    // 0x80226290: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x80226290: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_1:
    // 0x80226294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226298: sb          $v0, 0xF4($s0)
    MEM_B(0XF4, ctx->r16) = ctx->r2;
L_8022629C:
    // 0x8022629C: lbu         $v0, 0x25($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X25);
    // 0x802262A0: beq         $v0, $zero, L_802262B8
    if (ctx->r2 == 0) {
        // 0x802262A4: nop
    
            goto L_802262B8;
    }
    // 0x802262A4: nop

    // 0x802262A8: lb          $v0, 0x71($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X71);
    // 0x802262AC: bltz        $v0, L_802262C4
    if (SIGNED(ctx->r2) < 0) {
        // 0x802262B0: nop
    
            goto L_802262C4;
    }
    // 0x802262B0: nop

    // 0x802262B4: sb          $zero, 0x25($s1)
    MEM_B(0X25, ctx->r17) = 0;
L_802262B8:
    // 0x802262B8: lb          $v0, 0x71($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X71);
    // 0x802262BC: bgez        $v0, L_8022631C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802262C0: nop
    
            goto L_8022631C;
    }
    // 0x802262C0: nop

L_802262C4:
    // 0x802262C4: lbu         $v0, 0x25($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X25);
    // 0x802262C8: bne         $v0, $zero, L_8022631C
    if (ctx->r2 != 0) {
        // 0x802262CC: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022631C;
    }
    // 0x802262CC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802262D0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802262D4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802262D8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802262DC: bne         $v0, $zero, L_8022631C
    if (ctx->r2 != 0) {
        // 0x802262E0: nop
    
            goto L_8022631C;
    }
    // 0x802262E0: nop

    // 0x802262E4: lbu         $v0, 0x26($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X26);
    // 0x802262E8: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802262EC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802262F0: lbu         $a1, 0xCC0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0XCC0);
    // 0x802262F4: jal         0x800616FC
    // 0x802262F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x802262F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x802262FC: lbu         $a0, 0x26($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X26);
    // 0x80226300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226304: sb          $v0, 0x25($s1)
    MEM_B(0X25, ctx->r17) = ctx->r2;
    // 0x80226308: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022630C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80226310: beq         $v1, $v0, L_8022631C
    if (ctx->r3 == ctx->r2) {
        // 0x80226314: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022631C;
    }
    // 0x80226314: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80226318: sb          $v0, 0x26($s1)
    MEM_B(0X26, ctx->r17) = ctx->r2;
L_8022631C:
    // 0x8022631C: lw          $v0, 0x184($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X184);
    // 0x80226320: bne         $v0, $s0, L_80226368
    if (ctx->r2 != ctx->r16) {
        // 0x80226324: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80226368;
    }
    // 0x80226324: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226328: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022632C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226330: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226334: bne         $v0, $zero, L_80226368
    if (ctx->r2 != 0) {
        // 0x80226338: sw          $zero, 0x184($s2)
        MEM_W(0X184, ctx->r18) = 0;
            goto L_80226368;
    }
    // 0x80226338: sw          $zero, 0x184($s2)
    MEM_W(0X184, ctx->r18) = 0;
    // 0x8022633C: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80226340: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226344: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80226348: jal         0x8006FF84
    // 0x8022634C: sb          $v0, 0xBD($a0)
    MEM_B(0XBD, ctx->r4) = ctx->r2;
    func_8006FF84_4B384(rdram, ctx);
        goto after_3;
    // 0x8022634C: sb          $v0, 0xBD($a0)
    MEM_B(0XBD, ctx->r4) = ctx->r2;
    after_3:
    // 0x80226350: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226354: jal         0x800616FC
    // 0x80226358: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80226358: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_4:
    // 0x8022635C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226360: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226364: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80226368:
    // 0x80226368: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022636C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226370: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226374: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226378: jr          $ra
    // 0x8022637C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022637C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226618_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226618: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022661C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226620: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226624: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226628: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022662C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226630: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226634: bne         $v0, $zero, L_80226724
    if (ctx->r2 != 0) {
        // 0x80226638: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80226724;
    }
    // 0x80226638: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022663C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80226640: bne         $v1, $zero, L_80226658
    if (ctx->r3 != 0) {
        // 0x80226644: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226658;
    }
    // 0x80226644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226648: jal         0x80036E48
    // 0x8022664C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8022664C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80226650: j           L_802266E0
    // 0x80226654: nop

        goto L_802266E0;
    // 0x80226654: nop

L_80226658:
    // 0x80226658: bne         $v1, $v0, L_802266F0
    if (ctx->r3 != ctx->r2) {
        // 0x8022665C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802266F0;
    }
    // 0x8022665C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226660: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226664: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80226668: addiu       $v0, $zero, -0xCA0
    ctx->r2 = ADD32(0, -0XCA0);
    // 0x8022666C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226670: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80226674: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226678: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022667C: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80226680: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x80226684: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226688: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8022668C: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80226690: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226694: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80226698: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022669C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266A0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802266A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802266A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266AC: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x802266B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266B4: sb          $a0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r4;
    // 0x802266B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266BC: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x802266C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266C4: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802266C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266CC: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x802266D0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802266D4: sb          $a0, -0x3B9F($at)
    MEM_B(-0X3B9F, ctx->r1) = ctx->r4;
    // 0x802266D8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802266DC: sb          $v1, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = ctx->r3;
L_802266E0:
    // 0x802266E0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802266E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802266E8: j           L_80226724
    // 0x802266EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80226724;
    // 0x802266EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802266F0:
    // 0x802266F0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802266F4: lb          $v1, 0x47CC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X47CC);
    // 0x802266F8: bne         $v1, $v0, L_80226724
    if (ctx->r3 != ctx->r2) {
        // 0x802266FC: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80226724;
    }
    // 0x802266FC: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80226700: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226704: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226708: bne         $v0, $zero, L_80226724
    if (ctx->r2 != 0) {
        // 0x8022670C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80226724;
    }
    // 0x8022670C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80226710: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226714: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226718: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022671C: jal         0x80070050
    // 0x80226720: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_1;
    // 0x80226720: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_1:
L_80226724:
    // 0x80226724: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226728: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022672C: jr          $ra
    // 0x80226730: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226730: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80226734: nop

    // 0x80226738: nop

    // 0x8022673C: nop

;}
RECOMP_FUNC void func_8022E700_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E700: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E704: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E708: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022E70C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E710: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E714: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E718: lw          $v0, 0x1A50($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1A50);
    // 0x8022E71C: jalr        $v0
    // 0x8022E720: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E720: nop

    after_0:
    // 0x8022E724: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E728: jr          $ra
    // 0x8022E72C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E72C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EEF0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EEF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EEF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EEF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EEFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EF00: jal         0x80071110
    // 0x8022EF04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x8022EF04: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8022EF08: bne         $v0, $zero, L_8022EF1C
    if (ctx->r2 != 0) {
        // 0x8022EF0C: nop
    
            goto L_8022EF1C;
    }
    // 0x8022EF0C: nop

    // 0x8022EF10: lh          $v0, 0x7C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X7C);
    // 0x8022EF14: beq         $v0, $zero, L_8022EF58
    if (ctx->r2 == 0) {
        // 0x8022EF18: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_8022EF58;
    }
    // 0x8022EF18: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
L_8022EF1C:
    // 0x8022EF1C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EF20: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022EF24: beq         $v0, $zero, L_8022EF3C
    if (ctx->r2 == 0) {
        // 0x8022EF28: nop
    
            goto L_8022EF3C;
    }
    // 0x8022EF28: nop

    // 0x8022EF2C: jal         0x8004F4F8
    // 0x8022EF30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x8022EF30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022EF34: j           L_8022EF48
    // 0x8022EF38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022EF48;
    // 0x8022EF38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022EF3C:
    // 0x8022EF3C: jal         0x8004F568
    // 0x8022EF40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_2;
    // 0x8022EF40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022EF44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022EF48:
    // 0x8022EF48: jal         0x8022F164
    // 0x8022EF4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022F164_ovl14(rdram, ctx);
        goto after_3;
    // 0x8022EF4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8022EF50: j           L_8022F020
    // 0x8022EF54: nop

        goto L_8022F020;
    // 0x8022EF54: nop

L_8022EF58:
    // 0x8022EF58: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022EF5C: jal         0x8009A3B4
    // 0x8022EF60: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022EF60: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022EF64: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022EF68: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022EF6C: jal         0x8009A3B4
    // 0x8022EF70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022EF70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022EF74: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8022EF78: addiu       $v0, $v1, 0xFF
    ctx->r2 = ADD32(ctx->r3, 0XFF);
    // 0x8022EF7C: beq         $v1, $zero, L_8022EFE8
    if (ctx->r3 == 0) {
        // 0x8022EF80: sb          $v0, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r2;
            goto L_8022EFE8;
    }
    // 0x8022EF80: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022EF84: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8022EF88: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8022EF8C: lh          $a0, 0x48($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X48);
    // 0x8022EF90: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x8022EF94: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022EF98: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EF9C: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8022EFA0: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8022EFA4: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8022EFA8: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8022EFAC: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8022EFB0: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x8022EFB4: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x8022EFB8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022EFBC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EFC0: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x8022EFC4: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022EFC8: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x8022EFCC: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x8022EFD0: sh          $a0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r4;
    // 0x8022EFD4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022EFD8: sh          $v0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EFDC: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022EFE0: j           L_8022F018
    // 0x8022EFE4: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
        goto L_8022F018;
    // 0x8022EFE4: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
L_8022EFE8:
    // 0x8022EFE8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EFEC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022EFF0: beq         $v0, $zero, L_8022F008
    if (ctx->r2 == 0) {
        // 0x8022EFF4: nop
    
            goto L_8022F008;
    }
    // 0x8022EFF4: nop

    // 0x8022EFF8: jal         0x8004F4F8
    // 0x8022EFFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_6;
    // 0x8022EFFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022F000: j           L_8022F020
    // 0x8022F004: nop

        goto L_8022F020;
    // 0x8022F004: nop

L_8022F008:
    // 0x8022F008: jal         0x8004F568
    // 0x8022F00C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_7;
    // 0x8022F00C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022F010: j           L_8022F020
    // 0x8022F014: nop

        goto L_8022F020;
    // 0x8022F014: nop

L_8022F018:
    // 0x8022F018: jal         0x8022F030
    // 0x8022F01C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022F030_ovl14(rdram, ctx);
        goto after_8;
    // 0x8022F01C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022F020:
    // 0x8022F020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F024: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F028: jr          $ra
    // 0x8022F02C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F02C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228CA8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228CA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228CAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228CB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228CB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228CB8: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80228CBC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228CC0: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80228CC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228CC8: bne         $v0, $zero, L_80228CFC
    if (ctx->r2 != 0) {
        // 0x80228CCC: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80228CFC;
    }
    // 0x80228CCC: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80228CD0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80228CD4: bne         $v1, $v0, L_80228CE0
    if (ctx->r3 != ctx->r2) {
        // 0x80228CD8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228CE0;
    }
    // 0x80228CD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228CDC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
L_80228CE0:
    // 0x80228CE0: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80228CE4: jal         0x8022ADA0
    // 0x80228CE8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022ADA0_ovl14(rdram, ctx);
        goto after_0;
    // 0x80228CE8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x80228CEC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228CF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228CF4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228CF8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80228CFC:
    // 0x80228CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228D00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228D04: jr          $ra
    // 0x80228D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227FF8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227FF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227FFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228000: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228004: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228008: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022800C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228010: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80228014: beq         $v0, $zero, L_802281C0
    if (ctx->r2 == 0) {
        // 0x80228018: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802281C0;
    }
    // 0x80228018: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022801C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228020: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228024: addu        $at, $at, $v0
    gpr jr_addend_8022802C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228028: lw          $v0, 0x1C58($at)
    ctx->r2 = ADD32(ctx->r1, 0X1C58);
    // 0x8022802C: jr          $v0
    // 0x80228030: nop

    switch (jr_addend_8022802C >> 2) {
        case 0: goto L_80228034; break;
        case 1: goto L_80228078; break;
        case 2: goto L_802280D8; break;
        case 3: goto L_80228164; break;
        case 4: goto L_80228194; break;
        default: switch_error(__func__, 0x8022802C, 0x80231C58);
    }
    // 0x80228030: nop

L_80228034:
    // 0x80228034: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228038: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x8022803C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228040: addiu       $v0, $zero, -0xB
    ctx->r2 = ADD32(0, -0XB);
    // 0x80228044: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228048: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x8022804C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80228050: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80228054: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x80228058: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022805C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80228060: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80228064: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228068: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022806C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80228070: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x80228074: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_80228078:
    // 0x80228078: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022807C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228080: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228084: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228088: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022808C: bltz        $v0, L_802280BC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228090: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_802280BC;
    }
    // 0x80228090: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80228094: beq         $v0, $zero, L_802281C0
    if (ctx->r2 == 0) {
        // 0x80228098: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802281C0;
    }
    // 0x80228098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022809C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802280A0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802280A4: jal         0x8004DA90
    // 0x802280A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802280A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802280AC: jal         0x80040F30
    // 0x802280B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x802280B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802280B4: j           L_802281C0
    // 0x802280B8: nop

        goto L_802281C0;
    // 0x802280B8: nop

L_802280BC:
    // 0x802280BC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802280C0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802280C4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802280C8: addiu       $v1, $zero, 0x26
    ctx->r3 = ADD32(0, 0X26);
    // 0x802280CC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802280D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802280D4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802280D8:
    // 0x802280D8: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x802280DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802280E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802280E4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802280E8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802280EC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802280F0: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x802280F4: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x802280F8: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x802280FC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80228100: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80228104: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80228108: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022810C: jal         0x8004DA90
    // 0x80228110: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80228110: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x80228114: jal         0x80040F30
    // 0x80228118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80228118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022811C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228120: beq         $v1, $zero, L_802281C0
    if (ctx->r3 == 0) {
        // 0x80228124: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_802281C0;
    }
    // 0x80228124: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x80228128: bnel        $v0, $zero, L_80228130
    if (ctx->r2 != 0) {
        // 0x8022812C: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80228130;
    }
    goto skip_0;
    // 0x8022812C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_80228130:
    // 0x80228130: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x80228134: beq         $v0, $zero, L_802281C0
    if (ctx->r2 == 0) {
        // 0x80228138: nop
    
            goto L_802281C0;
    }
    // 0x80228138: nop

    // 0x8022813C: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80228140: bgtz        $v0, L_802281C0
    if (SIGNED(ctx->r2) > 0) {
        // 0x80228144: addiu       $v0, $zero, 0x26
        ctx->r2 = ADD32(0, 0X26);
            goto L_802281C0;
    }
    // 0x80228144: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80228148: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022814C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228150: addiu       $v1, $zero, 0x27
    ctx->r3 = ADD32(0, 0X27);
    // 0x80228154: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80228158: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022815C: j           L_802281C0
    // 0x80228160: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802281C0;
    // 0x80228160: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228164:
    // 0x80228164: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228168: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022816C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228170: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228174: bgez        $v0, L_802281C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228178: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_802281C0;
    }
    // 0x80228178: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022817C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80228180: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228184: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
    // 0x80228188: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022818C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228190: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228194:
    // 0x80228194: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80228198: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022819C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802281A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802281A4: bgez        $v0, L_802281C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802281A8: nop
    
            goto L_802281C0;
    }
    // 0x802281A8: nop

    // 0x802281AC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802281B0: ori         $v0, $v0, 0x109
    ctx->r2 = ctx->r2 | 0X109;
    // 0x802281B4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802281B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802281BC: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
L_802281C0:
    // 0x802281C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802281C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802281C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802281CC: jr          $ra
    // 0x802281D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802281D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227BA8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227BA8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80227BAC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80227BB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227BB4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80227BB8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80227BBC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80227BC0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80227BC4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227BC8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80227BCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227BD0: jal         0x8009A3B4
    // 0x80227BD4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80227BD4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227BD8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80227BDC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80227BE0: jal         0x8009A3B4
    // 0x80227BE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80227BE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80227BE8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80227BEC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80227BF0: jal         0x8009A3B4
    // 0x80227BF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80227BF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80227BF8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227BFC: jal         0x800A3450
    // 0x80227C00: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80227C00: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80227C04: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x80227C08: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x80227C0C: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x80227C10: andi        $v1, $v1, 0x104
    ctx->r3 = ctx->r3 & 0X104;
    // 0x80227C14: bne         $v1, $v0, L_80227C24
    if (ctx->r3 != ctx->r2) {
        // 0x80227C18: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80227C24;
    }
    // 0x80227C18: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80227C1C: jal         0x80228668
    // 0x80227C20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80228668_ovl14(rdram, ctx);
        goto after_4;
    // 0x80227C20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80227C24:
    // 0x80227C24: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227C28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227C2C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227C30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227C34: lw          $v0, 0x119C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X119C);
    // 0x80227C38: jalr        $v0
    // 0x80227C3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80227C3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80227C40: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80227C44: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80227C48: beq         $v0, $zero, L_80227C88
    if (ctx->r2 == 0) {
        // 0x80227C4C: nop
    
            goto L_80227C88;
    }
    // 0x80227C4C: nop

    // 0x80227C50: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80227C54: bltz        $v1, L_80227C78
    if (SIGNED(ctx->r3) < 0) {
        // 0x80227C58: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_80227C78;
    }
    // 0x80227C58: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80227C5C: bne         $v0, $zero, L_80227C74
    if (ctx->r2 != 0) {
        // 0x80227C60: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80227C74;
    }
    // 0x80227C60: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227C64: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227C68: bnel        $v1, $v0, L_80227C7C
    if (ctx->r3 != ctx->r2) {
        // 0x80227C6C: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_80227C7C;
    }
    goto skip_0;
    // 0x80227C6C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_0:
    // 0x80227C70: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80227C74:
    // 0x80227C74: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227C78:
    // 0x80227C78: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80227C7C:
    // 0x80227C7C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80227C80: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80227C84: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_80227C88:
    // 0x80227C88: lhu         $v0, 0x36($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X36);
    // 0x80227C8C: bne         $v0, $zero, L_80227CBC
    if (ctx->r2 != 0) {
        // 0x80227C90: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80227CBC;
    }
    // 0x80227C90: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80227C94: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80227C98: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80227C9C: beq         $v0, $zero, L_80227CBC
    if (ctx->r2 == 0) {
        // 0x80227CA0: nop
    
            goto L_80227CBC;
    }
    // 0x80227CA0: nop

    // 0x80227CA4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80227CA8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80227CAC: bne         $v0, $zero, L_80227CBC
    if (ctx->r2 != 0) {
        // 0x80227CB0: nop
    
            goto L_80227CBC;
    }
    // 0x80227CB0: nop

    // 0x80227CB4: jal         0x8004F418
    // 0x80227CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x80227CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80227CBC:
    // 0x80227CBC: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x80227CC0: beq         $v0, $zero, L_80227CD0
    if (ctx->r2 == 0) {
        // 0x80227CC4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80227CD0;
    }
    // 0x80227CC4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227CC8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80227CCC: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
L_80227CD0:
    // 0x80227CD0: lhu         $v0, 0x36($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X36);
    // 0x80227CD4: beq         $v0, $zero, L_80227CE0
    if (ctx->r2 == 0) {
        // 0x80227CD8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80227CE0;
    }
    // 0x80227CD8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227CDC: sh          $v0, 0x36($s2)
    MEM_H(0X36, ctx->r18) = ctx->r2;
L_80227CE0:
    // 0x80227CE0: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80227CE4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227CE8: beq         $v0, $a1, L_80227D00
    if (ctx->r2 == ctx->r5) {
        // 0x80227CEC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227D00;
    }
    // 0x80227CEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227CF0: jal         0x80050294
    // 0x80227CF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80227CF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80227CF8: j           L_80227D08
    // 0x80227CFC: nop

        goto L_80227D08;
    // 0x80227CFC: nop

L_80227D00:
    // 0x80227D00: jal         0x8005044C
    // 0x80227D04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80227D04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_80227D08:
    // 0x80227D08: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227D0C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227D10: beq         $v0, $zero, L_80227D28
    if (ctx->r2 == 0) {
        // 0x80227D14: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227D28;
    }
    // 0x80227D14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227D18: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80227D1C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80227D20: jal         0x8003B564
    // 0x80227D24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x80227D24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_80227D28:
    // 0x80227D28: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227D2C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80227D30: beq         $v0, $zero, L_80227DA0
    if (ctx->r2 == 0) {
        // 0x80227D34: nop
    
            goto L_80227DA0;
    }
    // 0x80227D34: nop

    // 0x80227D38: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80227D3C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227D40: beq         $v0, $zero, L_80227DA0
    if (ctx->r2 == 0) {
        // 0x80227D44: addiu       $s1, $s2, 0xC
        ctx->r17 = ADD32(ctx->r18, 0XC);
            goto L_80227DA0;
    }
    // 0x80227D44: addiu       $s1, $s2, 0xC
    ctx->r17 = ADD32(ctx->r18, 0XC);
    // 0x80227D48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227D4C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80227D50: jal         0x8009A3B4
    // 0x80227D54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80227D54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x80227D58: lhu         $v0, 0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XE);
    // 0x80227D5C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x80227D60: sh          $v0, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r2;
    // 0x80227D64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227D68: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80227D6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227D70: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80227D74: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80227D78: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x80227D7C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227D80: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80227D84: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80227D88: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80227D8C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80227D90: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80227D94: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80227D98: jal         0x80051E18
    // 0x80227D9C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_11;
    // 0x80227D9C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_11:
L_80227DA0:
    // 0x80227DA0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80227DA4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80227DA8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80227DAC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80227DB0: jr          $ra
    // 0x80227DB4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80227DB4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80229380_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229384: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229388: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022938C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229390: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80229394: bgez        $v0, L_802293AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229398: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802293AC;
    }
    // 0x80229398: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022939C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802293A0: jal         0x8022AE48
    // 0x802293A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8022AE48_ovl14(rdram, ctx);
        goto after_0;
    // 0x802293A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x802293A8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802293AC:
    // 0x802293AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802293B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802293B4: jr          $ra
    // 0x802293B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802293B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E62C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E62C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E630: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E638: jal         0x8004F144
    // 0x8022E63C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022E63C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022E640: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022E644: beql        $a1, $zero, L_8022E678
    if (ctx->r5 == 0) {
        // 0x8022E648: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_8022E678;
    }
    goto skip_0;
    // 0x8022E648: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x8022E64C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022E650: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E654: beq         $v0, $zero, L_8022E66C
    if (ctx->r2 == 0) {
        // 0x8022E658: nop
    
            goto L_8022E66C;
    }
    // 0x8022E658: nop

    // 0x8022E65C: jal         0x8022E690
    // 0x8022E660: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E690_ovl14(rdram, ctx);
        goto after_1;
    // 0x8022E660: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022E664: j           L_8022E678
    // 0x8022E668: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_8022E678;
    // 0x8022E668: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8022E66C:
    // 0x8022E66C: jal         0x8022E6D0
    // 0x8022E670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E6D0_ovl14(rdram, ctx);
        goto after_2;
    // 0x8022E670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022E674: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8022E678:
    // 0x8022E678: jal         0x8004F4F8
    // 0x8022E67C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_3;
    // 0x8022E67C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022E680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E684: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E688: jr          $ra
    // 0x8022E68C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E68C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B808_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B808: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022B80C: beq         $a1, $zero, L_8022B81C
    if (ctx->r5 == 0) {
        // 0x8022B810: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022B81C;
    }
    // 0x8022B810: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B814: j           L_8022B820
    // 0x8022B818: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
        goto L_8022B820;
    // 0x8022B818: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
L_8022B81C:
    // 0x8022B81C: sb          $v0, 0x107($a0)
    MEM_B(0X107, ctx->r4) = ctx->r2;
L_8022B820:
    // 0x8022B820: jr          $ra
    // 0x8022B824: nop

    TRACE_RETURN()
    return;
    // 0x8022B824: nop

;}
RECOMP_FUNC void func_80225458_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225458: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022545C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225460: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225464: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225468: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022546C: bne         $v0, $zero, L_802254C0
    if (ctx->r2 != 0) {
        // 0x80225470: nop
    
            goto L_802254C0;
    }
    // 0x80225470: nop

    // 0x80225474: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225478: jal         0x8005FA7C
    // 0x8022547C: addiu       $a0, $a0, 0xBA8
    ctx->r4 = ADD32(ctx->r4, 0XBA8);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8022547C: addiu       $a0, $a0, 0xBA8
    ctx->r4 = ADD32(ctx->r4, 0XBA8);
    after_0:
    // 0x80225480: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x80225484: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80225488: andi        $v1, $v1, 0xDF
    ctx->r3 = ctx->r3 & 0XDF;
    // 0x8022548C: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    // 0x80225490: addiu       $v0, $zero, 0xB00
    ctx->r2 = ADD32(0, 0XB00);
    // 0x80225494: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80225498: addiu       $v0, $zero, 0x900
    ctx->r2 = ADD32(0, 0X900);
    // 0x8022549C: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x802254A0: jal         0x8003E6BC
    // 0x802254A4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x802254A4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x802254A8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802254AC: lui         $a1, 0xE
    ctx->r5 = S32(0XE << 16);
    // 0x802254B0: jal         0x80071ACC
    // 0x802254B4: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_2;
    // 0x802254B4: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    after_2:
    // 0x802254B8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802254BC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802254C0:
    // 0x802254C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802254C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802254C8: jr          $ra
    // 0x802254CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802254CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023012C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023012C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80230130: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80230134: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80230138: andi        $v0, $v0, 0x60
    ctx->r2 = ctx->r2 & 0X60;
    // 0x8023013C: jr          $ra
    // 0x80230140: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80230140: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x80230144: nop

    // 0x80230148: nop

    // 0x8023014C: nop

;}
