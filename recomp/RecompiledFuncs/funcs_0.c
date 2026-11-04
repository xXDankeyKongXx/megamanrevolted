#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void alMainBusPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80097B40: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80097B44: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80097B48: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x80097B4C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80097B50: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x80097B54: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x80097B58: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80097B5C: ori         $v1, $v1, 0x440
    ctx->r3 = ctx->r3 | 0X440;
    // 0x80097B60: lui         $a1, 0x200
    ctx->r5 = S32(0X200 << 16);
    // 0x80097B64: ori         $a1, $a1, 0x580
    ctx->r5 = ctx->r5 | 0X580;
    // 0x80097B68: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80097B6C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80097B70: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80097B74: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80097B78: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80097B7C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80097B80: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80097B84: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80097B88: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80097B8C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x80097B90: lw          $a0, 0x1C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X1C);
    // 0x80097B94: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x80097B98: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80097B9C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80097BA0: sll         $v1, $s4, 1
    ctx->r3 = S32(ctx->r20 << 1);
    // 0x80097BA4: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x80097BA8: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x80097BAC: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x80097BB0: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x80097BB4: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x80097BB8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80097BBC: blez        $v0, L_80097C4C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80097BC0: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_80097C4C;
    }
    // 0x80097BC0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80097BC4: andi        $s7, $v1, 0xFFFF
    ctx->r23 = ctx->r3 & 0XFFFF;
    // 0x80097BC8: lui         $s2, 0xC00
    ctx->r18 = S32(0XC00 << 16);
    // 0x80097BCC: ori         $s2, $s2, 0x7FFF
    ctx->r18 = ctx->r18 | 0X7FFF;
    // 0x80097BD0: lui         $s6, 0x6C0
    ctx->r22 = S32(0X6C0 << 16);
    // 0x80097BD4: ori         $s6, $s6, 0x440
    ctx->r22 = ctx->r22 | 0X440;
    // 0x80097BD8: lui         $s5, 0x800
    ctx->r21 = S32(0X800 << 16);
    // 0x80097BDC: ori         $s5, $s5, 0x580
    ctx->r21 = ctx->r21 | 0X580;
    // 0x80097BE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_80097BE4:
    // 0x80097BE4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80097BE8: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80097BEC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80097BF0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80097BF4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80097BF8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80097BFC: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x80097C00: jalr        $v0
    // 0x80097C04: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80097C04: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_0:
    // 0x80097C08: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80097C0C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80097C10: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x80097C14: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80097C18: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x80097C1C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80097C20: sw          $s7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r23;
    // 0x80097C24: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x80097C28: sw          $s2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r18;
    // 0x80097C2C: sw          $s6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r22;
    // 0x80097C30: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x80097C34: sw          $s5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r21;
    // 0x80097C38: lw          $v0, 0x14($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X14);
    // 0x80097C3C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80097C40: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80097C44: bne         $v0, $zero, L_80097BE4
    if (ctx->r2 != 0) {
        // 0x80097C48: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_80097BE4;
    }
    // 0x80097C48: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
L_80097C4C:
    // 0x80097C4C: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x80097C50: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80097C54: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80097C58: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80097C5C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80097C60: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80097C64: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80097C68: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80097C6C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80097C70: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80097C74: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80097C78: jr          $ra
    // 0x80097C7C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80097C7C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8005CD74_38174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005CD74: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005CD78: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8005CD7C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8005CD80: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8005CD84: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8005CD88: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8005CD8C: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x8005CD90: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8005CD94: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8005CD98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8005CD9C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8005CDA0: addiu       $a1, $a1, 0x26E8
    ctx->r5 = ADD32(ctx->r5, 0X26E8);
    // 0x8005CDA4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8005CDA8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8005CDAC: jal         0x8009A3B4
    // 0x8005CDB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8005CDB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8005CDB4: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x8005CDB8: addiu       $s0, $s0, 0xB68
    ctx->r16 = ADD32(ctx->r16, 0XB68);
    // 0x8005CDBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8005CDC0: jal         0x8009A2B0
    // 0x8005CDC4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x8005CDC4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_1:
    // 0x8005CDC8: jal         0x80087AE8
    // 0x8005CDCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80087AE8_62EE8(rdram, ctx);
        goto after_2;
    // 0x8005CDCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8005CDD0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005CDD4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
L_8005CDD8:
    // 0x8005CDD8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8005CDDC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8005CDE0: lbu         $v1, 0xB68($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB68);
    // 0x8005CDE4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8005CDE8: bnel        $v1, $v0, L_8005CE38
    if (ctx->r3 != ctx->r2) {
        // 0x8005CDEC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8005CE38;
    }
    goto skip_0;
    // 0x8005CDEC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x8005CDF0: beq         $a0, $a1, L_8005CE0C
    if (ctx->r4 == ctx->r5) {
        // 0x8005CDF4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8005CE0C;
    }
    // 0x8005CDF4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8005CDF8: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8005CDFC: bne         $v0, $zero, L_8005CDD8
    if (ctx->r2 != 0) {
        // 0x8005CE00: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8005CDD8;
    }
    // 0x8005CE00: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8005CE04: j           L_8005CE38
    // 0x8005CE08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8005CE38;
    // 0x8005CE08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8005CE0C:
    // 0x8005CE0C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8005CE10: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8005CE14: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005CE18: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005CE1C: lbu         $v0, 0xB7C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0XB7C);
    // 0x8005CE20: sll         $v1, $s4, 16
    ctx->r3 = S32(ctx->r20 << 16);
    // 0x8005CE24: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8005CE28: sllv        $v0, $v0, $s3
    ctx->r2 = S32(ctx->r2 << (ctx->r19 & 31));
    // 0x8005CE2C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8005CE30: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x8005CE34: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_8005CE38:
    // 0x8005CE38: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8005CE3C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8005CE40: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8005CE44: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8005CE48: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8005CE4C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8005CE50: jr          $ra
    // 0x8005CE54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8005CE54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80060590_3B990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80060590: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80060594: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80060598: addiu       $a0, $a0, 0x55A8
    ctx->r4 = ADD32(ctx->r4, 0X55A8);
    // 0x8006059C: srl         $v0, $a2, 3
    ctx->r2 = S32(U32(ctx->r6) >> 3);
    // 0x800605A0: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x800605A4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x800605A8: andi        $a1, $a2, 0x7
    ctx->r5 = ctx->r6 & 0X7;
    // 0x800605AC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x800605B0: srav        $v0, $v0, $a1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r5 & 31));
    // 0x800605B4: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x800605B8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x800605BC: addiu       $v0, $a2, -0x500
    ctx->r2 = ADD32(ctx->r6, -0X500);
    // 0x800605C0: sltiu       $v0, $v0, 0x20
    ctx->r2 = ctx->r2 < 0X20 ? 1 : 0;
    // 0x800605C4: beq         $v0, $zero, L_8006062C
    if (ctx->r2 == 0) {
        // 0x800605C8: sb          $v1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r3;
            goto L_8006062C;
    }
    // 0x800605C8: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x800605CC: addiu       $a0, $a2, -0x4FF
    ctx->r4 = ADD32(ctx->r6, -0X4FF);
    // 0x800605D0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800605D4: addiu       $v1, $v1, 0x4E04
    ctx->r3 = ADD32(ctx->r3, 0X4E04);
    // 0x800605D8: addiu       $a1, $v1, 0x20
    ctx->r5 = ADD32(ctx->r3, 0X20);
L_800605DC:
    // 0x800605DC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x800605E0: bnel        $v0, $a0, L_800605F0
    if (ctx->r2 != ctx->r4) {
        // 0x800605E4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_800605F0;
    }
    goto skip_0;
    // 0x800605E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x800605E8: j           L_800605FC
    // 0x800605EC: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
        goto L_800605FC;
    // 0x800605EC: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_800605F0:
    // 0x800605F0: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800605F4: bne         $v0, $zero, L_800605DC
    if (ctx->r2 != 0) {
        // 0x800605F8: nop
    
            goto L_800605DC;
    }
    // 0x800605F8: nop

L_800605FC:
    // 0x800605FC: addiu       $a0, $a2, -0x4FF
    ctx->r4 = ADD32(ctx->r6, -0X4FF);
    // 0x80060600: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80060604: addiu       $v1, $v1, 0x4E00
    ctx->r3 = ADD32(ctx->r3, 0X4E00);
    // 0x80060608: addiu       $a1, $v1, 0x3
    ctx->r5 = ADD32(ctx->r3, 0X3);
L_8006060C:
    // 0x8006060C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80060610: bnel        $v0, $a0, L_80060620
    if (ctx->r2 != ctx->r4) {
        // 0x80060614: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80060620;
    }
    goto skip_1;
    // 0x80060614: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x80060618: j           L_8006062C
    // 0x8006061C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
        goto L_8006062C;
    // 0x8006061C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_80060620:
    // 0x80060620: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80060624: bne         $v0, $zero, L_8006060C
    if (ctx->r2 != 0) {
        // 0x80060628: nop
    
            goto L_8006060C;
    }
    // 0x80060628: nop

L_8006062C:
    // 0x8006062C: jr          $ra
    // 0x80060630: nop

    TRACE_RETURN()
    return;
    // 0x80060630: nop

;}
RECOMP_FUNC void func_80049ECC_252CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049ECC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80049ED0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80049ED4: jr          $ra
    // 0x80049ED8: sb          $v0, -0x3994($at)
    MEM_B(-0X3994, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80049ED8: sb          $v0, -0x3994($at)
    MEM_B(-0X3994, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8003ECF0_1A0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003ECF0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8003ECF4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8003ECF8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8003ECFC: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8003ED00: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8003ED04: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8003ED08: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8003ED0C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8003ED10: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8003ED14: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8003ED18: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x8003ED1C: ori         $a0, $zero, 0x8000
    ctx->r4 = 0 | 0X8000;
    // 0x8003ED20: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003ED24: lbu         $v1, 0x6B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B40);
    // 0x8003ED28: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8003ED2C: lhu         $a2, 0x49AE($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X49AE);
    // 0x8003ED30: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003ED34: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003ED38: subu        $a3, $v0, $v1
    ctx->r7 = SUB32(ctx->r2, ctx->r3);
    // 0x8003ED3C: sltu        $v0, $a3, $a2
    ctx->r2 = ctx->r7 < ctx->r6 ? 1 : 0;
    // 0x8003ED40: beq         $v0, $zero, L_8003ED98
    if (ctx->r2 == 0) {
        // 0x8003ED44: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8003ED98;
    }
    // 0x8003ED44: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8003ED48: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x8003ED4C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003ED50: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003ED54: lbu         $a0, -0x39A6($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X39A6);
    // 0x8003ED58: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003ED5C: lhu         $v1, -0x7386($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7386);
    // 0x8003ED60: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003ED64: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003ED68: sltu        $v1, $v0, $v1
    ctx->r3 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8003ED6C: beq         $v1, $zero, L_8003ED98
    if (ctx->r3 == 0) {
        // 0x8003ED70: nop
    
            goto L_8003ED98;
    }
    // 0x8003ED70: nop

    // 0x8003ED74: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003ED78: mflo        $v1
    ctx->r3 = lo;
    // 0x8003ED7C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8003ED80: lw          $a0, -0x35C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X35C0);
    // 0x8003ED84: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x8003ED88: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003ED8C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8003ED90: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003ED94: lh          $s0, 0x0($v1)
    ctx->r16 = MEM_H(ctx->r3, 0X0);
L_8003ED98:
    // 0x8003ED98: bgtz        $s0, L_8003EDAC
    if (SIGNED(ctx->r16) > 0) {
        // 0x8003ED9C: andi        $v0, $s0, 0x1F00
        ctx->r2 = ctx->r16 & 0X1F00;
            goto L_8003EDAC;
    }
    // 0x8003ED9C: andi        $v0, $s0, 0x1F00
    ctx->r2 = ctx->r16 & 0X1F00;
    // 0x8003EDA0: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8003EDA4: j           L_8003EF34
    // 0x8003EDA8: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
        goto L_8003EF34;
    // 0x8003EDA8: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
L_8003EDAC:
    // 0x8003EDAC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8003EDB0: addiu       $a0, $a0, -0x7158
    ctx->r4 = ADD32(ctx->r4, -0X7158);
    // 0x8003EDB4: jal         0x8009A3B4
    // 0x8003EDB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8003EDB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8003EDBC: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x8003EDC0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8003EDC4: lw          $v1, 0xB5C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB5C);
    // 0x8003EDC8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8003EDCC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003EDD0: addu        $a0, $v1, $v0
    ctx->r4 = ADD32(ctx->r3, ctx->r2);
    // 0x8003EDD4: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x8003EDD8: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x8003EDDC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8003EDE0: beq         $v0, $zero, L_8003EDFC
    if (ctx->r2 == 0) {
        // 0x8003EDE4: addiu       $s5, $zero, 0x7FFF
        ctx->r21 = ADD32(0, 0X7FFF);
            goto L_8003EDFC;
    }
    // 0x8003EDE4: addiu       $s5, $zero, 0x7FFF
    ctx->r21 = ADD32(0, 0X7FFF);
    // 0x8003EDE8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003EDEC: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003EDF0: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8003EDF4: j           L_8003EE0C
    // 0x8003EDF8: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
        goto L_8003EE0C;
    // 0x8003EDF8: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
L_8003EDFC:
    // 0x8003EDFC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003EE00: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003EE04: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x8003EE08: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
L_8003EE0C:
    // 0x8003EE0C: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8003EE10: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8003EE14: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x8003EE18: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8003EE1C: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8003EE20: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8003EE24: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8003EE28: addiu       $a0, $a0, -0x26B6
    ctx->r4 = ADD32(ctx->r4, -0X26B6);
    // 0x8003EE2C: jal         0x8009A2B0
    // 0x8003EE30: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x8003EE30: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x8003EE34: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x8003EE38: beq         $v0, $zero, L_8003EF34
    if (ctx->r2 == 0) {
        // 0x8003EE3C: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_8003EF34;
    }
    // 0x8003EE3C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x8003EE40: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8003EE44: addiu       $s6, $s6, -0x35F0
    ctx->r22 = ADD32(ctx->r22, -0X35F0);
    // 0x8003EE48: addiu       $s1, $s4, 0x8
    ctx->r17 = ADD32(ctx->r20, 0X8);
L_8003EE4C:
    // 0x8003EE4C: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x8003EE50: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x8003EE54: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8003EE58: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8003EE5C: lhu         $v0, -0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X6);
    // 0x8003EE60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003EE64: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8003EE68: lhu         $v1, 0x24($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X24);
    // 0x8003EE6C: lhu         $v0, -0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X4);
    // 0x8003EE70: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8003EE74: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8003EE78: lhu         $v0, -0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X2);
    // 0x8003EE7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003EE80: sh          $v1, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r3;
    // 0x8003EE84: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003EE88: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003EE8C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8003EE90: addu        $s3, $v1, $v0
    ctx->r19 = ADD32(ctx->r3, ctx->r2);
    // 0x8003EE94: lhu         $a1, 0x4($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X4);
    // 0x8003EE98: andi        $v0, $a1, 0xF0
    ctx->r2 = ctx->r5 & 0XF0;
    // 0x8003EE9C: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8003EEA0: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x8003EEA4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8003EEA8: jalr        $v0
    // 0x8003EEAC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8003EEAC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x8003EEB0: beql        $v0, $zero, L_8003EF24
    if (ctx->r2 == 0) {
        // 0x8003EEB4: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_8003EF24;
    }
    goto skip_0;
    // 0x8003EEB4: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    skip_0:
    // 0x8003EEB8: lw          $s2, 0x4($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X4);
    // 0x8003EEBC: addiu       $s0, $s3, 0x4
    ctx->r16 = ADD32(ctx->r19, 0X4);
L_8003EEC0:
    // 0x8003EEC0: lhu         $v1, 0x22($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X22);
    // 0x8003EEC4: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8003EEC8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8003EECC: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8003EED0: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x8003EED4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003EED8: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    // 0x8003EEDC: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x8003EEE0: jal         0x8003FC30
    // 0x8003EEE4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8003FC30_1B030(rdram, ctx);
        goto after_3;
    // 0x8003EEE4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x8003EEE8: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x8003EEEC: slt         $v0, $a0, $s5
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8003EEF0: beql        $v0, $zero, L_8003EF14
    if (ctx->r2 == 0) {
        // 0x8003EEF4: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003EF14;
    }
    goto skip_1;
    // 0x8003EEF4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_1:
    // 0x8003EEF8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003EEFC: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x8003EF00: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
    // 0x8003EF04: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003EF08: bnel        $v0, $zero, L_8003EF10
    if (ctx->r2 != 0) {
        // 0x8003EF0C: addu        $s5, $a0, $zero
        ctx->r21 = ADD32(ctx->r4, 0);
            goto L_8003EF10;
    }
    goto skip_2;
    // 0x8003EF0C: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    skip_2:
L_8003EF10:
    // 0x8003EF10: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8003EF14:
    // 0x8003EF14: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x8003EF18: bne         $s2, $zero, L_8003EEC0
    if (ctx->r18 != 0) {
        // 0x8003EF1C: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_8003EEC0;
    }
    // 0x8003EF1C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x8003EF20: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
L_8003EF24:
    // 0x8003EF24: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8003EF28: bne         $v0, $zero, L_8003EE4C
    if (ctx->r2 != 0) {
        // 0x8003EF2C: addiu       $s4, $s4, 0x10
        ctx->r20 = ADD32(ctx->r20, 0X10);
            goto L_8003EE4C;
    }
    // 0x8003EF2C: addiu       $s4, $s4, 0x10
    ctx->r20 = ADD32(ctx->r20, 0X10);
    // 0x8003EF30: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_8003EF34:
    // 0x8003EF34: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8003EF38: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8003EF3C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8003EF40: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8003EF44: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8003EF48: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8003EF4C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8003EF50: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8003EF54: jr          $ra
    // 0x8003EF58: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8003EF58: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8004F2C4_2A6C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F2C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004F2C8: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8004F2CC: lw          $a1, -0x72C8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X72C8);
    // 0x8004F2D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004F2D4: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8004F2D8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8004F2DC: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x8004F2E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004F2E4: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
    // 0x8004F2E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004F2EC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8004F2F0: addiu       $s1, $s1, 0x6B70
    ctx->r17 = ADD32(ctx->r17, 0X6B70);
    // 0x8004F2F4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8004F2F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_8004F2FC:
    // 0x8004F2FC: sllv        $v0, $a1, $a0
    ctx->r2 = S32(ctx->r5 << (ctx->r4 & 31));
    // 0x8004F300: bltzl       $v0, L_8004F348
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004F304: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8004F348;
    }
    goto skip_0;
    // 0x8004F304: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x8004F308: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004F30C: lw          $v0, -0x72C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X72C8);
    // 0x8004F310: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x8004F314: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004F318: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8004F31C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004F320: sw          $v0, -0x72C8($at)
    MEM_W(-0X72C8, ctx->r1) = ctx->r2;
    // 0x8004F324: lbu         $s0, 0x1($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X1);
    // 0x8004F328: jal         0x8009A2B0
    // 0x8004F32C: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8004F32C: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    after_0:
    // 0x8004F330: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8004F334: sb          $s3, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r19;
    // 0x8004F338: sb          $s2, 0x49($v0)
    MEM_B(0X49, ctx->r2) = ctx->r18;
    // 0x8004F33C: sb          $s2, 0x48($v0)
    MEM_B(0X48, ctx->r2) = ctx->r18;
    // 0x8004F340: j           L_8004F358
    // 0x8004F344: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
        goto L_8004F358;
    // 0x8004F344: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
L_8004F348:
    // 0x8004F348: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x8004F34C: bne         $v0, $zero, L_8004F2FC
    if (ctx->r2 != 0) {
        // 0x8004F350: addiu       $s1, $s1, 0x5C
        ctx->r17 = ADD32(ctx->r17, 0X5C);
            goto L_8004F2FC;
    }
    // 0x8004F350: addiu       $s1, $s1, 0x5C
    ctx->r17 = ADD32(ctx->r17, 0X5C);
    // 0x8004F354: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8004F358:
    // 0x8004F358: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8004F35C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8004F360: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004F364: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004F368: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004F36C: jr          $ra
    // 0x8004F370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8004F370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void __osIdCheckSum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009E6F4: addiu       $a3, $a0, 0x1C
    ctx->r7 = ADD32(ctx->r4, 0X1C);
    // 0x8009E6F8: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x8009E6FC: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
L_8009E700:
    // 0x8009E700: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8009E704: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8009E708: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8009E70C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x8009E710: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8009E714: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8009E718: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x8009E71C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8009E720: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x8009E724: sltu        $v0, $a0, $a3
    ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
    // 0x8009E728: bne         $v0, $zero, L_8009E700
    if (ctx->r2 != 0) {
        // 0x8009E72C: nop
    
            goto L_8009E700;
    }
    // 0x8009E72C: nop

    // 0x8009E730: jr          $ra
    // 0x8009E734: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x8009E734: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_800540BC_2F4BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800540BC: srl         $a2, $a2, 4
    ctx->r6 = S32(U32(ctx->r6) >> 4);
    // 0x800540C0: sb          $a1, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r5;
    // 0x800540C4: sb          $a2, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r6;
    // 0x800540C8: jr          $ra
    // 0x800540CC: sb          $zero, 0x7($a0)
    MEM_B(0X7, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x800540CC: sb          $zero, 0x7($a0)
    MEM_B(0X7, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8007DA78_58E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007DA78: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8007DA7C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007DA80: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8007DA84: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8007DA88: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8007DA8C: lui         $t0, 0x8018
    ctx->r8 = S32(0X8018 << 16);
    // 0x8007DA90: lh          $t0, -0x3E08($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X3E08);
    // 0x8007DA94: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8007DA98: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x8007DA9C: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x8007DAA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007DAA4: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x8007DAA8: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x8007DAAC: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x8007DAB0: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x8007DAB4: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x8007DAB8: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x8007DABC: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x8007DAC0: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x8007DAC4: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x8007DAC8: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x8007DACC: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x8007DAD0: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x8007DAD4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8007DAD8: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x8007DADC: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x8007DAE0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_8007DAE4:
    // 0x8007DAE4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8007DAE8: addiu       $v0, $zero, 0xDE
    ctx->r2 = ADD32(0, 0XDE);
    // 0x8007DAEC: srl         $v1, $a1, 24
    ctx->r3 = S32(U32(ctx->r5) >> 24);
    // 0x8007DAF0: beq         $v1, $v0, L_8007DECC
    if (ctx->r3 == ctx->r2) {
        // 0x8007DAF4: slti        $v0, $v1, 0xDF
        ctx->r2 = SIGNED(ctx->r3) < 0XDF ? 1 : 0;
            goto L_8007DECC;
    }
    // 0x8007DAF4: slti        $v0, $v1, 0xDF
    ctx->r2 = SIGNED(ctx->r3) < 0XDF ? 1 : 0;
    // 0x8007DAF8: beq         $v0, $zero, L_8007DB34
    if (ctx->r2 == 0) {
        // 0x8007DAFC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8007DB34;
    }
    // 0x8007DAFC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8007DB00: beq         $v1, $v0, L_8007DB74
    if (ctx->r3 == ctx->r2) {
        // 0x8007DB04: slti        $v0, $v1, 0x7
        ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
            goto L_8007DB74;
    }
    // 0x8007DB04: slti        $v0, $v1, 0x7
    ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x8007DB08: beq         $v0, $zero, L_8007DB20
    if (ctx->r2 == 0) {
        // 0x8007DB0C: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_8007DB20;
    }
    // 0x8007DB0C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007DB10: beq         $v1, $t0, L_8007DEA0
    if (ctx->r3 == ctx->r8) {
        // 0x8007DB14: lui         $v1, 0xFF
        ctx->r3 = S32(0XFF << 16);
            goto L_8007DEA0;
    }
    // 0x8007DB14: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8007DB18: j           L_8007DF98
    // 0x8007DB1C: nop

        goto L_8007DF98;
    // 0x8007DB1C: nop

L_8007DB20:
    // 0x8007DB20: addiu       $v0, $zero, 0xD9
    ctx->r2 = ADD32(0, 0XD9);
    // 0x8007DB24: beq         $v1, $v0, L_8007DED0
    if (ctx->r3 == ctx->r2) {
        // 0x8007DB28: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_8007DED0;
    }
    // 0x8007DB28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8007DB2C: j           L_8007DF98
    // 0x8007DB30: nop

        goto L_8007DF98;
    // 0x8007DB30: nop

L_8007DB34:
    // 0x8007DB34: addiu       $v0, $zero, 0xE2
    ctx->r2 = ADD32(0, 0XE2);
    // 0x8007DB38: beq         $v1, $v0, L_8007DECC
    if (ctx->r3 == ctx->r2) {
        // 0x8007DB3C: slti        $v0, $v1, 0xE3
        ctx->r2 = SIGNED(ctx->r3) < 0XE3 ? 1 : 0;
            goto L_8007DECC;
    }
    // 0x8007DB3C: slti        $v0, $v1, 0xE3
    ctx->r2 = SIGNED(ctx->r3) < 0XE3 ? 1 : 0;
    // 0x8007DB40: beq         $v0, $zero, L_8007DB58
    if (ctx->r2 == 0) {
        // 0x8007DB44: addiu       $v0, $zero, 0xDF
        ctx->r2 = ADD32(0, 0XDF);
            goto L_8007DB58;
    }
    // 0x8007DB44: addiu       $v0, $zero, 0xDF
    ctx->r2 = ADD32(0, 0XDF);
    // 0x8007DB48: beql        $v1, $v0, L_8007DF98
    if (ctx->r3 == ctx->r2) {
        // 0x8007DB4C: sw          $zero, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = 0;
            goto L_8007DF98;
    }
    goto skip_0;
    // 0x8007DB4C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    skip_0:
    // 0x8007DB50: j           L_8007DF98
    // 0x8007DB54: nop

        goto L_8007DF98;
    // 0x8007DB54: nop

L_8007DB58:
    // 0x8007DB58: addiu       $v0, $zero, 0xE7
    ctx->r2 = ADD32(0, 0XE7);
    // 0x8007DB5C: beq         $v1, $v0, L_8007DECC
    if (ctx->r3 == ctx->r2) {
        // 0x8007DB60: addiu       $v0, $zero, 0xF5
        ctx->r2 = ADD32(0, 0XF5);
            goto L_8007DECC;
    }
    // 0x8007DB60: addiu       $v0, $zero, 0xF5
    ctx->r2 = ADD32(0, 0XF5);
    // 0x8007DB64: beq         $v1, $v0, L_8007DEF8
    if (ctx->r3 == ctx->r2) {
        // 0x8007DB68: nop
    
            goto L_8007DEF8;
    }
    // 0x8007DB68: nop

    // 0x8007DB6C: j           L_8007DF98
    // 0x8007DB70: nop

        goto L_8007DF98;
    // 0x8007DB70: nop

L_8007DB74:
    // 0x8007DB74: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8007DB78: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007DB7C: bltz        $v1, L_8007DE50
    if (SIGNED(ctx->r3) < 0) {
        // 0x8007DB80: sw          $t0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r8;
            goto L_8007DE50;
    }
    // 0x8007DB80: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x8007DB84: srl         $v0, $a1, 17
    ctx->r2 = S32(U32(ctx->r5) >> 17);
    // 0x8007DB88: andi        $s4, $v0, 0x7F
    ctx->r20 = ctx->r2 & 0X7F;
    // 0x8007DB8C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8007DB90: andi        $v0, $a1, 0xFF00
    ctx->r2 = ctx->r5 & 0XFF00;
    // 0x8007DB94: srl         $s1, $v0, 9
    ctx->r17 = S32(U32(ctx->r2) >> 9);
    // 0x8007DB98: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8007DB9C: srl         $s2, $v0, 1
    ctx->r18 = S32(U32(ctx->r2) >> 1);
    // 0x8007DBA0: andi        $v0, $v1, 0xFF00
    ctx->r2 = ctx->r3 & 0XFF00;
    // 0x8007DBA4: jal         0x8007D63C
    // 0x8007DBA8: srl         $s3, $v0, 9
    ctx->r19 = S32(U32(ctx->r2) >> 9);
    func_8007D63C_58A3C(rdram, ctx);
        goto after_0;
    // 0x8007DBA8: srl         $s3, $v0, 9
    ctx->r19 = S32(U32(ctx->r2) >> 9);
    after_0:
    // 0x8007DBAC: jal         0x8007D63C
    // 0x8007DBB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8007D63C_58A3C(rdram, ctx);
        goto after_1;
    // 0x8007DBB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8007DBB4: jal         0x8007D63C
    // 0x8007DBB8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8007D63C_58A3C(rdram, ctx);
        goto after_2;
    // 0x8007DBB8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x8007DBBC: jal         0x8007D63C
    // 0x8007DBC0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8007D63C_58A3C(rdram, ctx);
        goto after_3;
    // 0x8007DBC0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_3:
    // 0x8007DBC4: sll         $v0, $s4, 3
    ctx->r2 = S32(ctx->r20 << 3);
    // 0x8007DBC8: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8007DBCC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007DBD0: lh          $v1, -0x3FA4($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3FA4);
    // 0x8007DBD4: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x8007DBD8: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8007DBDC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8007DBE0: lh          $a0, -0x3FA4($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3FA4);
    // 0x8007DBE4: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x8007DBE8: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8007DBEC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8007DBF0: lh          $a1, -0x3FA4($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3FA4);
    // 0x8007DBF4: sll         $v0, $s3, 3
    ctx->r2 = S32(ctx->r19 << 3);
    // 0x8007DBF8: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8007DBFC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8007DC00: lh          $a2, -0x3FA4($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X3FA4);
    // 0x8007DC04: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8007DC08: bnel        $v0, $zero, L_8007DC10
    if (ctx->r2 != 0) {
        // 0x8007DC0C: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8007DC10;
    }
    goto skip_1;
    // 0x8007DC0C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_1:
L_8007DC10:
    // 0x8007DC10: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007DC14: bnel        $v0, $zero, L_8007DC1C
    if (ctx->r2 != 0) {
        // 0x8007DC18: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007DC1C;
    }
    goto skip_2;
    // 0x8007DC18: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_2:
L_8007DC1C:
    // 0x8007DC1C: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8007DC20: bnel        $v0, $zero, L_8007DC28
    if (ctx->r2 != 0) {
        // 0x8007DC24: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8007DC28;
    }
    goto skip_3;
    // 0x8007DC24: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    skip_3:
L_8007DC28:
    // 0x8007DC28: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007DC2C: slt         $v0, $t0, $v1
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007DC30: beql        $v0, $zero, L_8007DE50
    if (ctx->r2 == 0) {
        // 0x8007DC34: sw          $zero, 0x44($sp)
        MEM_W(0X44, ctx->r29) = 0;
            goto L_8007DE50;
    }
    goto skip_4;
    // 0x8007DC34: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    skip_4:
    // 0x8007DC38: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007DC3C: lh          $v0, -0x448($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X448);
    // 0x8007DC40: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8007DC44: beq         $v0, $zero, L_8007DE50
    if (ctx->r2 == 0) {
        // 0x8007DC48: nop
    
            goto L_8007DE50;
    }
    // 0x8007DC48: nop

    // 0x8007DC4C: jal         0x8007D434
    // 0x8007DC50: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8007D434_58834(rdram, ctx);
        goto after_4;
    // 0x8007DC50: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_4:
    // 0x8007DC54: jal         0x8007D434
    // 0x8007DC58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8007D434_58834(rdram, ctx);
        goto after_5;
    // 0x8007DC58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8007DC5C: jal         0x8007D434
    // 0x8007DC60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8007D434_58834(rdram, ctx);
        goto after_6;
    // 0x8007DC60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x8007DC64: jal         0x8007D434
    // 0x8007DC68: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8007D434_58834(rdram, ctx);
        goto after_7;
    // 0x8007DC68: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_7:
    // 0x8007DC6C: sll         $t0, $s4, 2
    ctx->r8 = S32(ctx->r20 << 2);
    // 0x8007DC70: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x8007DC74: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x8007DC78: addu        $a3, $a3, $t0
    ctx->r7 = ADD32(ctx->r7, ctx->r8);
    // 0x8007DC7C: lh          $a3, -0x3EA8($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X3EA8);
    // 0x8007DC80: sll         $fp, $s1, 2
    ctx->r30 = S32(ctx->r17 << 2);
    // 0x8007DC84: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8007DC88: addu        $a0, $a0, $fp
    ctx->r4 = ADD32(ctx->r4, ctx->r30);
    // 0x8007DC8C: lh          $a0, -0x3EA8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3EA8);
    // 0x8007DC90: sll         $s6, $s2, 2
    ctx->r22 = S32(ctx->r18 << 2);
    // 0x8007DC94: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8007DC98: addu        $a1, $a1, $s6
    ctx->r5 = ADD32(ctx->r5, ctx->r22);
    // 0x8007DC9C: lh          $a1, -0x3EA8($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3EA8);
    // 0x8007DCA0: sll         $s5, $s3, 2
    ctx->r21 = S32(ctx->r19 << 2);
    // 0x8007DCA4: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8007DCA8: addu        $a2, $a2, $s5
    ctx->r6 = ADD32(ctx->r6, ctx->r21);
    // 0x8007DCAC: lh          $a2, -0x3EA8($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X3EA8);
    // 0x8007DCB0: slt         $v0, $a3, $a0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8007DCB4: beq         $v0, $zero, L_8007DCC0
    if (ctx->r2 == 0) {
        // 0x8007DCB8: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_8007DCC0;
    }
    // 0x8007DCB8: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x8007DCBC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_8007DCC0:
    // 0x8007DCC0: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007DCC4: bnel        $v0, $zero, L_8007DCCC
    if (ctx->r2 != 0) {
        // 0x8007DCC8: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007DCCC;
    }
    goto skip_5;
    // 0x8007DCC8: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_5:
L_8007DCCC:
    // 0x8007DCCC: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8007DCD0: bnel        $v0, $zero, L_8007DCD8
    if (ctx->r2 != 0) {
        // 0x8007DCD4: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8007DCD8;
    }
    goto skip_6;
    // 0x8007DCD4: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    skip_6:
L_8007DCD8:
    // 0x8007DCD8: slti        $v0, $v1, -0x9
    ctx->r2 = SIGNED(ctx->r3) < -0X9 ? 1 : 0;
    // 0x8007DCDC: bne         $v0, $zero, L_8007DE50
    if (ctx->r2 != 0) {
        // 0x8007DCE0: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_8007DE50;
    }
    // 0x8007DCE0: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x8007DCE4: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007DCE8: bnel        $v0, $zero, L_8007DCF0
    if (ctx->r2 != 0) {
        // 0x8007DCEC: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8007DCF0;
    }
    goto skip_7;
    // 0x8007DCEC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_7:
L_8007DCF0:
    // 0x8007DCF0: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007DCF4: bnel        $v0, $zero, L_8007DCFC
    if (ctx->r2 != 0) {
        // 0x8007DCF8: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007DCFC;
    }
    goto skip_8;
    // 0x8007DCF8: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_8:
L_8007DCFC:
    // 0x8007DCFC: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007DD00: bnel        $v0, $zero, L_8007DD08
    if (ctx->r2 != 0) {
        // 0x8007DD04: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8007DD08;
    }
    goto skip_9;
    // 0x8007DD04: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    skip_9:
L_8007DD08:
    // 0x8007DD08: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x8007DD0C: beq         $v0, $zero, L_8007DE50
    if (ctx->r2 == 0) {
        // 0x8007DD10: nop
    
            goto L_8007DE50;
    }
    // 0x8007DD10: nop

    // 0x8007DD14: jal         0x8007D538
    // 0x8007DD18: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8007D538_58938(rdram, ctx);
        goto after_8;
    // 0x8007DD18: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_8:
    // 0x8007DD1C: jal         0x8007D538
    // 0x8007DD20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8007D538_58938(rdram, ctx);
        goto after_9;
    // 0x8007DD20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8007DD24: jal         0x8007D538
    // 0x8007DD28: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8007D538_58938(rdram, ctx);
        goto after_10;
    // 0x8007DD28: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_10:
    // 0x8007DD2C: jal         0x8007D538
    // 0x8007DD30: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8007D538_58938(rdram, ctx);
        goto after_11;
    // 0x8007DD30: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_11:
    // 0x8007DD34: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8007DD38: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8007DD3C: addu        $a0, $a0, $fp
    ctx->r4 = ADD32(ctx->r4, ctx->r30);
    // 0x8007DD40: lh          $a0, -0x3EA6($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3EA6);
    // 0x8007DD44: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8007DD48: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x8007DD4C: lh          $a2, -0x3EA6($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X3EA6);
    // 0x8007DD50: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8007DD54: addu        $a1, $a1, $s6
    ctx->r5 = ADD32(ctx->r5, ctx->r22);
    // 0x8007DD58: lh          $a1, -0x3EA6($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3EA6);
    // 0x8007DD5C: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x8007DD60: addu        $a3, $a3, $s5
    ctx->r7 = ADD32(ctx->r7, ctx->r21);
    // 0x8007DD64: lh          $a3, -0x3EA6($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X3EA6);
    // 0x8007DD68: slt         $v0, $a2, $a0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8007DD6C: beq         $v0, $zero, L_8007DD78
    if (ctx->r2 == 0) {
        // 0x8007DD70: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8007DD78;
    }
    // 0x8007DD70: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8007DD74: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_8007DD78:
    // 0x8007DD78: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007DD7C: bnel        $v0, $zero, L_8007DD84
    if (ctx->r2 != 0) {
        // 0x8007DD80: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007DD84;
    }
    goto skip_10;
    // 0x8007DD80: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_10:
L_8007DD84:
    // 0x8007DD84: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8007DD88: bnel        $v0, $zero, L_8007DD90
    if (ctx->r2 != 0) {
        // 0x8007DD8C: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_8007DD90;
    }
    goto skip_11;
    // 0x8007DD8C: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_11:
L_8007DD90:
    // 0x8007DD90: slti        $v0, $v1, -0x9
    ctx->r2 = SIGNED(ctx->r3) < -0X9 ? 1 : 0;
    // 0x8007DD94: bne         $v0, $zero, L_8007DE50
    if (ctx->r2 != 0) {
        // 0x8007DD98: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8007DE50;
    }
    // 0x8007DD98: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8007DD9C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007DDA0: bnel        $v0, $zero, L_8007DDA8
    if (ctx->r2 != 0) {
        // 0x8007DDA4: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8007DDA8;
    }
    goto skip_12;
    // 0x8007DDA4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_12:
L_8007DDA8:
    // 0x8007DDA8: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007DDAC: bnel        $v0, $zero, L_8007DDB4
    if (ctx->r2 != 0) {
        // 0x8007DDB0: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007DDB4;
    }
    goto skip_13;
    // 0x8007DDB0: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_13:
L_8007DDB4:
    // 0x8007DDB4: slt         $v0, $a3, $v1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007DDB8: bnel        $v0, $zero, L_8007DDC0
    if (ctx->r2 != 0) {
        // 0x8007DDBC: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_8007DDC0;
    }
    goto skip_14;
    // 0x8007DDBC: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_14:
L_8007DDC0:
    // 0x8007DDC0: slti        $v0, $v1, 0x1B
    ctx->r2 = SIGNED(ctx->r3) < 0X1B ? 1 : 0;
    // 0x8007DDC4: beq         $v0, $zero, L_8007DE50
    if (ctx->r2 == 0) {
        // 0x8007DDC8: nop
    
            goto L_8007DE50;
    }
    // 0x8007DDC8: nop

    // 0x8007DDCC: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8007DDD0: lh          $a0, -0x3E08($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3E08);
    // 0x8007DDD4: bgez        $a0, L_8007DDE0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8007DDD8: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_8007DDE0;
    }
    // 0x8007DDD8: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8007DDDC: addiu       $a0, $a0, 0x1F
    ctx->r4 = ADD32(ctx->r4, 0X1F);
L_8007DDE0:
    // 0x8007DDE0: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8007DDE4: lh          $a1, -0x3E04($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3E04);
    // 0x8007DDE8: sra         $a0, $a0, 5
    ctx->r4 = S32(SIGNED(ctx->r4) >> 5);
    // 0x8007DDEC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007DDF0: addiu       $v0, $v0, -0x3E00
    ctx->r2 = ADD32(ctx->r2, -0X3E00);
    // 0x8007DDF4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8007DDF8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8007DDFC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8007DE00: andi        $v0, $a2, 0x1F
    ctx->r2 = ctx->r6 & 0X1F;
    // 0x8007DE04: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007DE08: sllv        $v0, $t0, $v0
    ctx->r2 = S32(ctx->r8 << (ctx->r2 & 31));
    // 0x8007DE0C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007DE10: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x8007DE14: bgez        $a1, L_8007DE20
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8007DE18: sw          $v1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r3;
            goto L_8007DE20;
    }
    // 0x8007DE18: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x8007DE1C: addiu       $a1, $a1, 0x1F
    ctx->r5 = ADD32(ctx->r5, 0X1F);
L_8007DE20:
    // 0x8007DE20: sra         $a0, $a1, 5
    ctx->r4 = S32(SIGNED(ctx->r5) >> 5);
    // 0x8007DE24: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007DE28: addiu       $v0, $v0, -0x3D90
    ctx->r2 = ADD32(ctx->r2, -0X3D90);
    // 0x8007DE2C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8007DE30: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8007DE34: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x8007DE38: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8007DE3C: andi        $v0, $a2, 0x1F
    ctx->r2 = ctx->r6 & 0X1F;
    // 0x8007DE40: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007DE44: sllv        $v0, $t0, $v0
    ctx->r2 = S32(ctx->r8 << (ctx->r2 & 31));
    // 0x8007DE48: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007DE4C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_8007DE50:
    // 0x8007DE50: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007DE54: lhu         $v0, -0x3E08($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3E08);
    // 0x8007DE58: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8007DE5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007DE60: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007DE64: sh          $v0, -0x3E08($at)
    MEM_H(-0X3E08, ctx->r1) = ctx->r2;
    // 0x8007DE68: beq         $t0, $zero, L_8007DE98
    if (ctx->r8 == 0) {
        // 0x8007DE6C: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_8007DE98;
    }
    // 0x8007DE6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8007DE70: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8007DE74: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007DE78: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8007DE7C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8007DE80: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8007DE84: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8007DE88: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007DE8C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007DE90: jal         0x8009A3B4
    // 0x8007DE94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x8007DE94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
L_8007DE98:
    // 0x8007DE98: j           L_8007DF98
    // 0x8007DE9C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_8007DF98;
    // 0x8007DE9C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8007DEA0:
    // 0x8007DEA0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8007DEA4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8007DEA8: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8007DEAC: addiu       $a0, $a0, -0x3E28
    ctx->r4 = ADD32(ctx->r4, -0X3E28);
    // 0x8007DEB0: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x8007DEB4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8007DEB8: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x8007DEBC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007DEC0: sw          $v0, -0x41B0($at)
    MEM_W(-0X41B0, ctx->r1) = ctx->r2;
    // 0x8007DEC4: jal         0x8009A2B0
    // 0x8007DEC8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    bzero_recomp(rdram, ctx);
        goto after_13;
    // 0x8007DEC8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_13:
L_8007DECC:
    // 0x8007DECC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
L_8007DED0:
    // 0x8007DED0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007DED4: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8007DED8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8007DEDC: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8007DEE0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007DEE4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007DEE8: jal         0x8009A3B4
    // 0x8007DEEC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8007DEEC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    after_14:
    // 0x8007DEF0: j           L_8007DF98
    // 0x8007DEF4: nop

        goto L_8007DF98;
    // 0x8007DEF4: nop

L_8007DEF8:
    // 0x8007DEF8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8007DEFC: beq         $t0, $zero, L_8007DF14
    if (ctx->r8 == 0) {
        // 0x8007DF00: nop
    
            goto L_8007DF14;
    }
    // 0x8007DF00: nop

    // 0x8007DF04: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x8007DF08: lw          $t0, -0x6F10($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X6F10);
    // 0x8007DF0C: j           L_8007DF64
    // 0x8007DF10: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
        goto L_8007DF64;
    // 0x8007DF10: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_8007DF14:
    // 0x8007DF14: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007DF18: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007DF1C: sltu        $v0, $s7, $v0
    ctx->r2 = ctx->r23 < ctx->r2 ? 1 : 0;
    // 0x8007DF20: beq         $v0, $zero, L_8007DF58
    if (ctx->r2 == 0) {
        // 0x8007DF24: nop
    
            goto L_8007DF58;
    }
    // 0x8007DF24: nop

L_8007DF28:
    // 0x8007DF28: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8007DF2C: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x8007DF30: jal         0x8009A3B4
    // 0x8007DF34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x8007DF34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_15:
    // 0x8007DF38: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8007DF3C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007DF40: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007DF44: addiu       $s7, $s7, 0x8
    ctx->r23 = ADD32(ctx->r23, 0X8);
    // 0x8007DF48: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x8007DF4C: sltu        $v0, $s7, $v0
    ctx->r2 = ctx->r23 < ctx->r2 ? 1 : 0;
    // 0x8007DF50: bne         $v0, $zero, L_8007DF28
    if (ctx->r2 != 0) {
        // 0x8007DF54: sw          $t0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r8;
            goto L_8007DF28;
    }
    // 0x8007DF54: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_8007DF58:
    // 0x8007DF58: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8007DF5C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007DF60: sw          $t0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r8;
L_8007DF64:
    // 0x8007DF64: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8007DF68: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x8007DF6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8007DF70: jal         0x80099F90
    // 0x8007DF74: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    bcopy_recomp(rdram, ctx);
        goto after_16;
    // 0x8007DF74: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_16:
    // 0x8007DF78: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007DF7C: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007DF80: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8007DF84: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8007DF88: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x8007DF8C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007DF90: sw          $s7, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r23;
    // 0x8007DF94: addiu       $s0, $s0, 0x30
    ctx->r16 = ADD32(ctx->r16, 0X30);
L_8007DF98:
    // 0x8007DF98: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DF9C: bne         $t0, $zero, L_8007DAE4
    if (ctx->r8 != 0) {
        // 0x8007DFA0: nop
    
            goto L_8007DAE4;
    }
    // 0x8007DFA0: nop

    // 0x8007DFA4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007DFA8: lh          $v0, -0x3E04($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3E04);
    // 0x8007DFAC: bgez        $v0, L_8007DFB8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8007DFB0: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8007DFB8;
    }
    // 0x8007DFB0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8007DFB4: addiu       $v0, $v0, 0x1F
    ctx->r2 = ADD32(ctx->r2, 0X1F);
L_8007DFB8:
    // 0x8007DFB8: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x8007DFBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007DFC0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007DFC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007DFC8: lw          $v0, -0x3D90($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3D90);
    // 0x8007DFCC: andi        $v1, $a0, 0x1F
    ctx->r3 = ctx->r4 & 0X1F;
    // 0x8007DFD0: srlv        $v0, $v0, $v1
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r3 & 31));
    // 0x8007DFD4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8007DFD8: bne         $v0, $zero, L_8007DFEC
    if (ctx->r2 != 0) {
        // 0x8007DFDC: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8007DFEC;
    }
    // 0x8007DFDC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8007DFE0: lhu         $t0, 0x3E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3E);
    // 0x8007DFE4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007DFE8: sh          $t0, -0x3E08($at)
    MEM_H(-0X3E08, ctx->r1) = ctx->r8;
L_8007DFEC:
    // 0x8007DFEC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007DFF0: sh          $v0, -0x3E04($at)
    MEM_H(-0X3E04, ctx->r1) = ctx->r2;
    // 0x8007DFF4: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x8007DFF8: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x8007DFFC: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x8007E000: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x8007E004: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x8007E008: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x8007E00C: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x8007E010: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x8007E014: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x8007E018: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x8007E01C: jr          $ra
    // 0x8007E020: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x8007E020: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_800598DC_34CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800598DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800598E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800598E4: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x800598E8: lw          $s0, -0x4850($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4850);
    // 0x800598EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800598F0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x800598F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800598F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800598FC: addu        $at, $at, $v0
    gpr jr_addend_80059904 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80059900: lw          $v0, -0x13EC($at)
    ctx->r2 = ADD32(ctx->r1, -0X13EC);
    // 0x80059904: jr          $v0
    // 0x80059908: nop

    switch (jr_addend_80059904 >> 2) {
        case 0: goto L_8005990C; break;
        case 1: goto L_800599BC; break;
        case 2: goto L_800599C4; break;
        default: switch_error(__func__, 0x80059904, 0x800AEC14);
    }
    // 0x80059908: nop

L_8005990C:
    // 0x8005990C: addiu       $t1, $zero, -0x30
    ctx->r9 = ADD32(0, -0X30);
    // 0x80059910: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
    // 0x80059914: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80059918: addiu       $t0, $zero, -0x48
    ctx->r8 = ADD32(0, -0X48);
    // 0x8005991C: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x80059920: lh          $a2, 0x16($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X16);
    // 0x80059924: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x80059928: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8005992C: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x80059930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80059934: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80059938: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
    // 0x8005993C: addiu       $v0, $zero, -0x150
    ctx->r2 = ADD32(0, -0X150);
    // 0x80059940: sh          $t1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r9;
    // 0x80059944: sh          $t0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r8;
    // 0x80059948: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8005994C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80059950: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80059954: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80059958: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8005995C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80059960: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x80059964: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80059968: sw          $a2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r6;
    // 0x8005996C: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    // 0x80059970: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    // 0x80059974: jal         0x8004D5D4
    // 0x80059978: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80059978: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_0:
    // 0x8005997C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80059980: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80059984: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80059988: sb          $v0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r2;
    // 0x8005998C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80059990: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80059994: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80059998: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8005999C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x800599A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800599A4: jal         0x80050294
    // 0x800599A8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x800599A8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x800599AC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x800599B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800599B4: j           L_800599C4
    // 0x800599B8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_800599C4;
    // 0x800599B8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_800599BC:
    // 0x800599BC: jal         0x8005044C
    // 0x800599C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x800599C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_800599C4:
    // 0x800599C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800599C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800599CC: jr          $ra
    // 0x800599D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800599D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80037D80_13180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037D80: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80037D84: lb          $v1, 0x47CC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X47CC);
    // 0x80037D88: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80037D8C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80037D90: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80037D94: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80037D98: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x80037D9C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80037DA0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80037DA4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80037DA8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80037DAC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80037DB0: bne         $v1, $v0, L_80037DD0
    if (ctx->r3 != ctx->r2) {
        // 0x80037DB4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80037DD0;
    }
    // 0x80037DB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80037DB8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80037DBC: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x80037DC0: beq         $v0, $zero, L_80037DE0
    if (ctx->r2 == 0) {
        // 0x80037DC4: nop
    
            goto L_80037DE0;
    }
    // 0x80037DC4: nop

    // 0x80037DC8: j           L_80037F54
    // 0x80037DCC: nop

        goto L_80037F54;
    // 0x80037DCC: nop

L_80037DD0:
    // 0x80037DD0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80037DD4: sw          $zero, -0x72E0($at)
    MEM_W(-0X72E0, ctx->r1) = 0;
    // 0x80037DD8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80037DDC: sw          $zero, -0xB90($at)
    MEM_W(-0XB90, ctx->r1) = 0;
L_80037DE0:
    // 0x80037DE0: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80037DE4: addiu       $s0, $s0, 0x4430
    ctx->r16 = ADD32(ctx->r16, 0X4430);
    // 0x80037DE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80037DEC: jal         0x8009A2B0
    // 0x80037DF0: addiu       $a1, $zero, 0x268
    ctx->r5 = ADD32(0, 0X268);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x80037DF0: addiu       $a1, $zero, 0x268
    ctx->r5 = ADD32(0, 0X268);
    after_0:
    // 0x80037DF4: beq         $s4, $zero, L_80037F54
    if (ctx->r20 == 0) {
        // 0x80037DF8: addu        $s2, $s0, $zero
        ctx->r18 = ADD32(ctx->r16, 0);
            goto L_80037F54;
    }
    // 0x80037DF8: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x80037DFC: addiu       $s1, $s2, 0x8
    ctx->r17 = ADD32(ctx->r18, 0X8);
    // 0x80037E00: addu        $s3, $s5, $zero
    ctx->r19 = ADD32(ctx->r21, 0);
L_80037E04:
    // 0x80037E04: lbu         $a0, 0x0($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X0);
    // 0x80037E08: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80037E0C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80037E10: beq         $v1, $v0, L_80037F54
    if (ctx->r3 == ctx->r2) {
        // 0x80037E14: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_80037F54;
    }
    // 0x80037E14: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80037E18: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80037E1C: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037E20: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x80037E24: beq         $v1, $v0, L_80037F3C
    if (ctx->r3 == ctx->r2) {
        // 0x80037E28: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_80037F3C;
    }
    // 0x80037E28: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80037E2C: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80037E30: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037E34: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x80037E38: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037E3C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80037E40: srl         $v1, $v1, 8
    ctx->r3 = S32(U32(ctx->r3) >> 8);
    // 0x80037E44: sb          $v1, -0x7($s1)
    MEM_B(-0X7, ctx->r17) = ctx->r3;
    // 0x80037E48: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037E4C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80037E50: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x80037E54: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037E58: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80037E5C: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x80037E60: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037E64: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80037E68: sh          $v1, 0x22($s1)
    MEM_H(0X22, ctx->r17) = ctx->r3;
    // 0x80037E6C: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037E70: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80037E74: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    // 0x80037E78: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037E7C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80037E80: sh          $zero, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = 0;
    // 0x80037E84: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    // 0x80037E88: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037E8C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80037E90: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    // 0x80037E94: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037E98: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80037E9C: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x80037EA0: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037EA4: sb          $v1, 0x24($s1)
    MEM_B(0X24, ctx->r17) = ctx->r3;
    // 0x80037EA8: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037EAC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80037EB0: srl         $v1, $v1, 8
    ctx->r3 = S32(U32(ctx->r3) >> 8);
    // 0x80037EB4: sb          $v1, 0x25($s1)
    MEM_B(0X25, ctx->r17) = ctx->r3;
    // 0x80037EB8: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037EBC: sb          $v1, 0x26($s1)
    MEM_B(0X26, ctx->r17) = ctx->r3;
    // 0x80037EC0: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037EC4: lbu         $a0, -0x7($s1)
    ctx->r4 = MEM_BU(ctx->r17, -0X7);
    // 0x80037EC8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80037ECC: srl         $v1, $v1, 8
    ctx->r3 = S32(U32(ctx->r3) >> 8);
    // 0x80037ED0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80037ED4: sb          $v1, 0x27($s1)
    MEM_B(0X27, ctx->r17) = ctx->r3;
    // 0x80037ED8: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037EDC: sb          $v1, 0x28($s1)
    MEM_B(0X28, ctx->r17) = ctx->r3;
    // 0x80037EE0: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80037EE4: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80037EE8: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x80037EEC: srl         $v1, $v1, 8
    ctx->r3 = S32(U32(ctx->r3) >> 8);
    // 0x80037EF0: beq         $a0, $zero, L_80037F3C
    if (ctx->r4 == 0) {
        // 0x80037EF4: sb          $v1, 0x29($s1)
        MEM_B(0X29, ctx->r17) = ctx->r3;
            goto L_80037F3C;
    }
    // 0x80037EF4: sb          $v1, 0x29($s1)
    MEM_B(0X29, ctx->r17) = ctx->r3;
    // 0x80037EF8: addiu       $s0, $s2, 0x18
    ctx->r16 = ADD32(ctx->r18, 0X18);
    // 0x80037EFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80037F00: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80037F04: jal         0x8009A3B4
    // 0x80037F08: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80037F08: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80037F0C: addiu       $a0, $s2, 0xC
    ctx->r4 = ADD32(ctx->r18, 0XC);
    // 0x80037F10: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80037F14: jal         0x8009A3B4
    // 0x80037F18: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80037F18: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x80037F1C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80037F20: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80037F24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80037F28: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80037F2C: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x80037F30: sw          $v0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r2;
    // 0x80037F34: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x80037F38: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
L_80037F3C:
    // 0x80037F3C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80037F40: addiu       $s1, $s1, 0x38
    ctx->r17 = ADD32(ctx->r17, 0X38);
    // 0x80037F44: addiu       $v0, $s5, 0xB
    ctx->r2 = ADD32(ctx->r21, 0XB);
    // 0x80037F48: slt         $v0, $s3, $v0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80037F4C: bne         $v0, $zero, L_80037E04
    if (ctx->r2 != 0) {
        // 0x80037F50: addiu       $s2, $s2, 0x38
        ctx->r18 = ADD32(ctx->r18, 0X38);
            goto L_80037E04;
    }
    // 0x80037F50: addiu       $s2, $s2, 0x38
    ctx->r18 = ADD32(ctx->r18, 0X38);
L_80037F54:
    // 0x80037F54: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80037F58: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80037F5C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80037F60: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80037F64: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80037F68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80037F6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80037F70: jr          $ra
    // 0x80037F74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80037F74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void alLoadParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80096A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80096A34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80096A38: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80096A3C: beq         $a1, $v0, L_80096B84
    if (ctx->r5 == ctx->r2) {
        // 0x80096A40: addu        $a3, $a0, $zero
        ctx->r7 = ADD32(ctx->r4, 0);
            goto L_80096B84;
    }
    // 0x80096A40: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80096A44: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80096A48: bne         $a1, $v0, L_80096BD0
    if (ctx->r5 != ctx->r2) {
        // 0x80096A4C: nop
    
            goto L_80096BD0;
    }
    // 0x80096A4C: nop

    // 0x80096A50: sw          $a2, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r6;
    // 0x80096A54: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80096A58: lw          $v1, 0x28($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X28);
    // 0x80096A5C: sw          $zero, 0x38($a3)
    MEM_W(0X38, ctx->r7) = 0;
    // 0x80096A60: sw          $v0, 0x44($a3)
    MEM_W(0X44, ctx->r7) = ctx->r2;
    // 0x80096A64: lbu         $v1, 0x8($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X8);
    // 0x80096A68: beq         $v1, $zero, L_80096A80
    if (ctx->r3 == 0) {
        // 0x80096A6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80096A80;
    }
    // 0x80096A6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80096A70: beq         $v1, $v0, L_80096B34
    if (ctx->r3 == ctx->r2) {
        // 0x80096A74: nop
    
            goto L_80096B34;
    }
    // 0x80096A74: nop

    // 0x80096A78: j           L_80096BD0
    // 0x80096A7C: nop

        goto L_80096BD0;
    // 0x80096A7C: nop

L_80096A80:
    // 0x80096A80: lw          $a0, 0x28($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X28);
    // 0x80096A84: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80096A88: addiu       $v0, $v0, 0x6250
    ctx->r2 = ADD32(ctx->r2, 0X6250);
    // 0x80096A8C: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x80096A90: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80096A94: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x80096A98: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x80096A9C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80096AA0: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80096AA4: mfhi        $t0
    ctx->r8 = hi;
    // 0x80096AA8: sra         $v1, $t0, 1
    ctx->r3 = S32(SIGNED(ctx->r8) >> 1);
    // 0x80096AAC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80096AB0: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80096AB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80096AB8: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80096ABC: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x80096AC0: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x80096AC4: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x80096AC8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80096ACC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80096AD0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80096AD4: mflo        $v1
    ctx->r3 = lo;
    // 0x80096AD8: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x80096ADC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80096AE0: sw          $v1, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r3;
    // 0x80096AE4: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x80096AE8: beq         $v0, $zero, L_80096B74
    if (ctx->r2 == 0) {
        // 0x80096AEC: addiu       $a2, $zero, 0x20
        ctx->r6 = ADD32(0, 0X20);
            goto L_80096B74;
    }
    // 0x80096AEC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80096AF0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80096AF4: lw          $v1, 0x28($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X28);
    // 0x80096AF8: sw          $v0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r2;
    // 0x80096AFC: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x80096B00: lw          $v1, 0x28($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X28);
    // 0x80096B04: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80096B08: sw          $v0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r2;
    // 0x80096B0C: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x80096B10: lw          $v1, 0x28($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X28);
    // 0x80096B14: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x80096B18: sw          $v0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r2;
    // 0x80096B1C: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    // 0x80096B20: lw          $a1, 0x18($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X18);
    // 0x80096B24: jal         0x80098D10
    // 0x80096B28: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    alCopy(rdram, ctx);
        goto after_0;
    // 0x80096B28: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x80096B2C: j           L_80096BD0
    // 0x80096B30: nop

        goto L_80096BD0;
    // 0x80096B30: nop

L_80096B34:
    // 0x80096B34: lw          $v1, 0x28($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X28);
    // 0x80096B38: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80096B3C: addiu       $v0, $v0, 0x6694
    ctx->r2 = ADD32(ctx->r2, 0X6694);
    // 0x80096B40: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x80096B44: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x80096B48: beql        $v0, $zero, L_80096B78
    if (ctx->r2 == 0) {
        // 0x80096B4C: sw          $zero, 0x24($a3)
        MEM_W(0X24, ctx->r7) = 0;
            goto L_80096B78;
    }
    goto skip_0;
    // 0x80096B4C: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
    skip_0:
    // 0x80096B50: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80096B54: lw          $v1, 0x28($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X28);
    // 0x80096B58: sw          $v0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r2;
    // 0x80096B5C: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x80096B60: lw          $v1, 0x28($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X28);
    // 0x80096B64: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80096B68: sw          $v0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r2;
    // 0x80096B6C: j           L_80096BC8
    // 0x80096B70: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
        goto L_80096BC8;
    // 0x80096B70: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
L_80096B74:
    // 0x80096B74: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_80096B78:
    // 0x80096B78: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x80096B7C: j           L_80096BD0
    // 0x80096B80: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
        goto L_80096BD0;
    // 0x80096B80: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_80096B84:
    // 0x80096B84: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x80096B88: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80096B8C: sw          $zero, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = 0;
    // 0x80096B90: sw          $a0, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r4;
    // 0x80096B94: beq         $v0, $zero, L_80096BD0
    if (ctx->r2 == 0) {
        // 0x80096B98: sw          $zero, 0x38($a3)
        MEM_W(0X38, ctx->r7) = 0;
            goto L_80096BD0;
    }
    // 0x80096B98: sw          $zero, 0x38($a3)
    MEM_W(0X38, ctx->r7) = 0;
    // 0x80096B9C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80096BA0: lw          $v1, 0x28($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X28);
    // 0x80096BA4: sw          $v0, 0x44($a3)
    MEM_W(0X44, ctx->r7) = ctx->r2;
    // 0x80096BA8: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x80096BAC: beq         $v0, $zero, L_80096BBC
    if (ctx->r2 == 0) {
        // 0x80096BB0: nop
    
            goto L_80096BBC;
    }
    // 0x80096BB0: nop

    // 0x80096BB4: bne         $v0, $a0, L_80096BD0
    if (ctx->r2 != ctx->r4) {
        // 0x80096BB8: nop
    
            goto L_80096BD0;
    }
    // 0x80096BB8: nop

L_80096BBC:
    // 0x80096BBC: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x80096BC0: beq         $v0, $zero, L_80096BD0
    if (ctx->r2 == 0) {
        // 0x80096BC4: nop
    
            goto L_80096BD0;
    }
    // 0x80096BC4: nop

L_80096BC8:
    // 0x80096BC8: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x80096BCC: sw          $v0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r2;
L_80096BD0:
    // 0x80096BD0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80096BD4: jr          $ra
    // 0x80096BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80096BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002B1D4_65D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002B1D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B1D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B1DC: jal         0x80092EB0
    // 0x8002B1E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_0;
    // 0x8002B1E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8002B1E4: jal         0x80087570
    // 0x8002B1E8: nop

    Graph_ThreadStop(rdram, ctx);
        goto after_1;
    // 0x8002B1E8: nop

    after_1:
    // 0x8002B1EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002B1F0: lhu         $v0, 0x6B2E($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6B2E);
    // 0x8002B1F4: lui         $s0, 0x8014
    ctx->r16 = S32(0X8014 << 16);
    // 0x8002B1F8: addiu       $s0, $s0, 0x2250
    ctx->r16 = ADD32(ctx->r16, 0X2250);
    // 0x8002B1FC: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8002B200: addiu       $a1, $a1, 0x7DA8
    ctx->r5 = ADD32(ctx->r5, 0X7DA8);
    // 0x8002B204: lui         $a2, 0x86
    ctx->r6 = S32(0X86 << 16);
    // 0x8002B208: addiu       $a2, $a2, 0x7EB0
    ctx->r6 = ADD32(ctx->r6, 0X7EB0);
    // 0x8002B20C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8002B210: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8002B214: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B218: sh          $v0, 0x22DA($at)
    MEM_H(0X22DA, ctx->r1) = ctx->r2;
    // 0x8002B21C: jal         0x80028D30
    // 0x8002B220: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    func_80028D30_4130(rdram, ctx);
        goto after_2;
    // 0x8002B220: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    after_2:
    // 0x8002B224: jal         0x8008A7D0
    // 0x8002B228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008A7D0_65BD0(rdram, ctx);
        goto after_3;
    // 0x8002B228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8002B22C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8002B230: addiu       $a0, $a0, -0x3F88
    ctx->r4 = ADD32(ctx->r4, -0X3F88);
    // 0x8002B234: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B238: sw          $v0, 0x22D0($at)
    MEM_W(0X22D0, ctx->r1) = ctx->r2;
    // 0x8002B23C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8002B240: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002B244: jal         0x8002BBBC
    // 0x8002B248: sh          $v0, -0x3F76($at)
    MEM_H(-0X3F76, ctx->r1) = ctx->r2;
    func_8002BBBC_6FBC(rdram, ctx);
        goto after_4;
    // 0x8002B248: sh          $v0, -0x3F76($at)
    MEM_H(-0X3F76, ctx->r1) = ctx->r2;
    after_4:
    // 0x8002B24C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B250: sb          $zero, 0x22D8($at)
    MEM_B(0X22D8, ctx->r1) = 0;
    // 0x8002B254: jal         0x80036B58
    // 0x8002B258: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_80036B58_11F58(rdram, ctx);
        goto after_5;
    // 0x8002B258: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_5:
    // 0x8002B25C: jal         0x80087590
    // 0x8002B260: nop

    func_80087590_62990(rdram, ctx);
        goto after_6;
    // 0x8002B260: nop

    after_6:
    // 0x8002B264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B268: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002B26C: jr          $ra
    // 0x8002B270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002B270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80049328_24728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049328: jr          $ra
    // 0x8004932C: nop

    TRACE_RETURN()
    return;
    // 0x8004932C: nop

;}
RECOMP_FUNC void func_800462AC_216AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800462AC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800462B0: lh          $v0, -0x35BA($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35BA);
    // 0x800462B4: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x800462B8: beq         $v1, $zero, L_80046300
    if (ctx->r3 == 0) {
        // 0x800462BC: nop
    
            goto L_80046300;
    }
    // 0x800462BC: nop

    // 0x800462C0: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x800462C4: blez        $v0, L_800462E8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800462C8: nop
    
            goto L_800462E8;
    }
    // 0x800462C8: nop

    // 0x800462CC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800462D0: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x800462D4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x800462D8: beq         $v0, $zero, L_80046300
    if (ctx->r2 == 0) {
        // 0x800462DC: andi        $v1, $v1, 0x1
        ctx->r3 = ctx->r3 & 0X1;
            goto L_80046300;
    }
    // 0x800462DC: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x800462E0: j           L_80046300
    // 0x800462E4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_80046300;
    // 0x800462E4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_800462E8:
    // 0x800462E8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800462EC: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x800462F0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x800462F4: bnel        $v0, $zero, L_80046300
    if (ctx->r2 != 0) {
        // 0x800462F8: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_80046300;
    }
    goto skip_0;
    // 0x800462F8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_0:
    // 0x800462FC: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
L_80046300:
    // 0x80046300: jr          $ra
    // 0x80046304: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    TRACE_RETURN()
    return;
    // 0x80046304: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_80036E40_12240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036E40: jr          $ra
    // 0x80036E44: nop

    TRACE_RETURN()
    return;
    // 0x80036E44: nop

;}
RECOMP_FUNC void func_8004DF78_29378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004DF78: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8004DF7C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8004DF80: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8004DF84: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8004DF88: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8004DF8C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8004DF90: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8004DF94: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8004DF98: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x8004DF9C: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x8004DFA0: jal         0x8002C654
    // 0x8004DFA4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8004DFA4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x8004DFA8: lhu         $v0, 0xC4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC4);
    // 0x8004DFAC: lhu         $v1, 0xC4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XC4);
    // 0x8004DFB0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004DFB4: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x8004DFB8: lhu         $v0, 0xC6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC6);
    // 0x8004DFBC: lhu         $v1, 0xC6($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XC6);
    // 0x8004DFC0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004DFC4: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x8004DFC8: lhu         $v0, 0xC8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC8);
    // 0x8004DFCC: lhu         $v1, 0xC8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XC8);
    // 0x8004DFD0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004DFD4: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x8004DFD8: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8004DFDC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8004DFE0: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    // 0x8004DFE4: jal         0x800319B4
    // 0x8004DFE8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8004DFE8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    after_1:
    // 0x8004DFEC: jal         0x80031E5C
    // 0x8004DFF0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80031E5C_D25C(rdram, ctx);
        goto after_2;
    // 0x8004DFF0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x8004DFF4: jal         0x80031E94
    // 0x8004DFF8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80031E94_D294(rdram, ctx);
        goto after_3;
    // 0x8004DFF8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x8004DFFC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8004E000: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8004E004: jal         0x80032068
    // 0x8004E008: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80032068_D468(rdram, ctx);
        goto after_4;
    // 0x8004E008: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x8004E00C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8004E010: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8004E014: bgez        $v0, L_8004E020
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004E018: srl         $a2, $a0, 31
        ctx->r6 = S32(U32(ctx->r4) >> 31);
            goto L_8004E020;
    }
    // 0x8004E018: srl         $a2, $a0, 31
    ctx->r6 = S32(U32(ctx->r4) >> 31);
    // 0x8004E01C: ori         $a2, $a2, 0x4
    ctx->r6 = ctx->r6 | 0X4;
L_8004E020:
    // 0x8004E020: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x8004E024: bgez        $a1, L_8004E034
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8004E028: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8004E034;
    }
    // 0x8004E028: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8004E02C: j           L_8004E06C
    // 0x8004E030: ori         $a2, $a2, 0x10
    ctx->r6 = ctx->r6 | 0X10;
        goto L_8004E06C;
    // 0x8004E030: ori         $a2, $a2, 0x10
    ctx->r6 = ctx->r6 | 0X10;
L_8004E034:
    // 0x8004E034: lh          $v1, 0x0($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X0);
    // 0x8004E038: bltz        $a0, L_8004E058
    if (SIGNED(ctx->r4) < 0) {
        // 0x8004E03C: subu        $v1, $v0, $v1
        ctx->r3 = SUB32(ctx->r2, ctx->r3);
            goto L_8004E058;
    }
    // 0x8004E03C: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E040: sllv        $v0, $a0, $v1
    ctx->r2 = S32(ctx->r4 << (ctx->r3 & 31));
    // 0x8004E044: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004E048: bnel        $v0, $zero, L_8004E06C
    if (ctx->r2 != 0) {
        // 0x8004E04C: ori         $a2, $a2, 0x2
        ctx->r6 = ctx->r6 | 0X2;
            goto L_8004E06C;
    }
    goto skip_0;
    // 0x8004E04C: ori         $a2, $a2, 0x2
    ctx->r6 = ctx->r6 | 0X2;
    skip_0:
    // 0x8004E050: j           L_8004E06C
    // 0x8004E054: nop

        goto L_8004E06C;
    // 0x8004E054: nop

L_8004E058:
    // 0x8004E058: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x8004E05C: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8004E060: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004E064: bnel        $v0, $zero, L_8004E06C
    if (ctx->r2 != 0) {
        // 0x8004E068: ori         $a2, $a2, 0x2
        ctx->r6 = ctx->r6 | 0X2;
            goto L_8004E06C;
    }
    goto skip_1;
    // 0x8004E068: ori         $a2, $a2, 0x2
    ctx->r6 = ctx->r6 | 0X2;
    skip_1:
L_8004E06C:
    // 0x8004E06C: lh          $v1, 0x2($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X2);
    // 0x8004E070: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x8004E074: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8004E078: bltz        $a0, L_8004E088
    if (SIGNED(ctx->r4) < 0) {
        // 0x8004E07C: subu        $v1, $v0, $v1
        ctx->r3 = SUB32(ctx->r2, ctx->r3);
            goto L_8004E088;
    }
    // 0x8004E07C: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E080: j           L_8004E090
    // 0x8004E084: sllv        $v1, $a0, $v1
    ctx->r3 = S32(ctx->r4 << (ctx->r3 & 31));
        goto L_8004E090;
    // 0x8004E084: sllv        $v1, $a0, $v1
    ctx->r3 = S32(ctx->r4 << (ctx->r3 & 31));
L_8004E088:
    // 0x8004E088: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x8004E08C: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
L_8004E090:
    // 0x8004E090: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x8004E094: bltzl       $v0, L_8004E0B0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004E098: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8004E0B0;
    }
    goto skip_2;
    // 0x8004E098: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
    // 0x8004E09C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004E0A0: bnel        $v0, $zero, L_8004E0BC
    if (ctx->r2 != 0) {
        // 0x8004E0A4: ori         $a2, $a2, 0x8
        ctx->r6 = ctx->r6 | 0X8;
            goto L_8004E0BC;
    }
    goto skip_3;
    // 0x8004E0A4: ori         $a2, $a2, 0x8
    ctx->r6 = ctx->r6 | 0X8;
    skip_3:
    // 0x8004E0A8: j           L_8004E0BC
    // 0x8004E0AC: nop

        goto L_8004E0BC;
    // 0x8004E0AC: nop

L_8004E0B0:
    // 0x8004E0B0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004E0B4: bnel        $v0, $zero, L_8004E0BC
    if (ctx->r2 != 0) {
        // 0x8004E0B8: ori         $a2, $a2, 0x8
        ctx->r6 = ctx->r6 | 0X8;
            goto L_8004E0BC;
    }
    goto skip_4;
    // 0x8004E0B8: ori         $a2, $a2, 0x8
    ctx->r6 = ctx->r6 | 0X8;
    skip_4:
L_8004E0BC:
    // 0x8004E0BC: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x8004E0C0: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x8004E0C4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8004E0C8: bltz        $a0, L_8004E0D8
    if (SIGNED(ctx->r4) < 0) {
        // 0x8004E0CC: subu        $v1, $v0, $v1
        ctx->r3 = SUB32(ctx->r2, ctx->r3);
            goto L_8004E0D8;
    }
    // 0x8004E0CC: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E0D0: j           L_8004E0E0
    // 0x8004E0D4: sllv        $v1, $a0, $v1
    ctx->r3 = S32(ctx->r4 << (ctx->r3 & 31));
        goto L_8004E0E0;
    // 0x8004E0D4: sllv        $v1, $a0, $v1
    ctx->r3 = S32(ctx->r4 << (ctx->r3 & 31));
L_8004E0D8:
    // 0x8004E0D8: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x8004E0DC: sllv        $v1, $v0, $v1
    ctx->r3 = S32(ctx->r2 << (ctx->r3 & 31));
L_8004E0E0:
    // 0x8004E0E0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8004E0E4: bltzl       $v0, L_8004E100
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004E0E8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8004E100;
    }
    goto skip_5;
    // 0x8004E0E8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_5:
    // 0x8004E0EC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004E0F0: bnel        $v0, $zero, L_8004E110
    if (ctx->r2 != 0) {
        // 0x8004E0F4: ori         $a2, $a2, 0x20
        ctx->r6 = ctx->r6 | 0X20;
            goto L_8004E110;
    }
    goto skip_6;
    // 0x8004E0F4: ori         $a2, $a2, 0x20
    ctx->r6 = ctx->r6 | 0X20;
    skip_6:
    // 0x8004E0F8: j           L_8004E114
    // 0x8004E0FC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
        goto L_8004E114;
    // 0x8004E0FC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
L_8004E100:
    // 0x8004E100: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004E104: beq         $v0, $zero, L_8004E114
    if (ctx->r2 == 0) {
        // 0x8004E108: addu        $v0, $a2, $zero
        ctx->r2 = ADD32(ctx->r6, 0);
            goto L_8004E114;
    }
    // 0x8004E108: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x8004E10C: ori         $a2, $a2, 0x20
    ctx->r6 = ctx->r6 | 0X20;
L_8004E110:
    // 0x8004E110: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
L_8004E114:
    // 0x8004E114: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x8004E118: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8004E11C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8004E120: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8004E124: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8004E128: jr          $ra
    // 0x8004E12C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8004E12C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8006B7C0_46BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006B7C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006B7C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006B7C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006B7CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8006B7D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006B7D4: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B7D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006B7DC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8006B7E0: beq         $v1, $v0, L_8006B8D8
    if (ctx->r3 == ctx->r2) {
        // 0x8006B7E4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8006B8D8;
    }
    // 0x8006B7E4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8006B7E8: beql        $v0, $zero, L_8006B800
    if (ctx->r2 == 0) {
        // 0x8006B7EC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006B800;
    }
    goto skip_0;
    // 0x8006B7EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8006B7F0: beq         $v1, $zero, L_8006B818
    if (ctx->r3 == 0) {
        // 0x8006B7F4: nop
    
            goto L_8006B818;
    }
    // 0x8006B7F4: nop

    // 0x8006B7F8: j           L_8006B968
    // 0x8006B7FC: nop

        goto L_8006B968;
    // 0x8006B7FC: nop

L_8006B800:
    // 0x8006B800: beq         $v1, $v0, L_8006B8E8
    if (ctx->r3 == ctx->r2) {
        // 0x8006B804: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8006B8E8;
    }
    // 0x8006B804: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8006B808: beq         $v1, $v0, L_8006B944
    if (ctx->r3 == ctx->r2) {
        // 0x8006B80C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8006B944;
    }
    // 0x8006B80C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006B810: j           L_8006B968
    // 0x8006B814: nop

        goto L_8006B968;
    // 0x8006B814: nop

L_8006B818:
    // 0x8006B818: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8006B81C: bne         $v0, $zero, L_8006B83C
    if (ctx->r2 != 0) {
        // 0x8006B820: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006B83C;
    }
    // 0x8006B820: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B824: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8006B828: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B82C: jal         0x8006FB90
    // 0x8006B830: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_0;
    // 0x8006B830: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8006B834: j           L_8006B850
    // 0x8006B838: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
        goto L_8006B850;
    // 0x8006B838: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
L_8006B83C:
    // 0x8006B83C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x8006B840: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B844: jal         0x8006FB90
    // 0x8006B848: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_1;
    // 0x8006B848: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8006B84C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_8006B850:
    // 0x8006B850: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8006B854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006B85C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8006B860: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8006B864: sb          $v0, 0x168($s0)
    MEM_B(0X168, ctx->r16) = ctx->r2;
    // 0x8006B868: sb          $v0, 0x169($s0)
    MEM_B(0X169, ctx->r16) = ctx->r2;
    // 0x8006B86C: jal         0x800700D8
    // 0x8006B870: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    func_800700D8_4B4D8(rdram, ctx);
        goto after_2;
    // 0x8006B870: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    after_2:
    // 0x8006B874: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8006B878: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8006B87C: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8006B880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B884: jal         0x8006FC34
    // 0x8006B888: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_3;
    // 0x8006B888: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    after_3:
    // 0x8006B88C: jal         0x8002A46C
    // 0x8006B890: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8002A46C_586C(rdram, ctx);
        goto after_4;
    // 0x8006B890: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_4:
    // 0x8006B894: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    // 0x8006B898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006B89C: jal         0x8002A2F8
    // 0x8006B8A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_5;
    // 0x8006B8A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8006B8A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8006B8A8:
    // 0x8006B8A8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8006B8AC: jal         0x80089EE4
    // 0x8006B8B0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80089EE4_652E4(rdram, ctx);
        goto after_6;
    // 0x8006B8B0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_6:
    // 0x8006B8B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006B8B8: slti        $v0, $s1, 0x2710
    ctx->r2 = SIGNED(ctx->r17) < 0X2710 ? 1 : 0;
    // 0x8006B8BC: bne         $v0, $zero, L_8006B8A8
    if (ctx->r2 != 0) {
        // 0x8006B8C0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006B8A8;
    }
    // 0x8006B8C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006B8C4: jal         0x80034634
    // 0x8006B8C8: nop

    func_80034634_FA34(rdram, ctx);
        goto after_7;
    // 0x8006B8C8: nop

    after_7:
    // 0x8006B8CC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B8D0: j           L_8006B938
    // 0x8006B8D4: sh          $zero, 0x108($s0)
    MEM_H(0X108, ctx->r16) = 0;
        goto L_8006B938;
    // 0x8006B8D4: sh          $zero, 0x108($s0)
    MEM_H(0X108, ctx->r16) = 0;
L_8006B8D8:
    // 0x8006B8D8: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x8006B8DC: bne         $v0, $v1, L_8006B8E8
    if (ctx->r2 != ctx->r3) {
        // 0x8006B8E0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8006B8E8;
    }
    // 0x8006B8E0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8006B8E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006B8E8:
    // 0x8006B8E8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8006B8EC: bne         $v0, $zero, L_8006B900
    if (ctx->r2 != 0) {
        // 0x8006B8F0: nop
    
            goto L_8006B900;
    }
    // 0x8006B8F0: nop

    // 0x8006B8F4: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8006B8F8: j           L_8006B908
    // 0x8006B8FC: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
        goto L_8006B908;
    // 0x8006B8FC: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
L_8006B900:
    // 0x8006B900: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8006B904: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
L_8006B908:
    // 0x8006B908: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8006B90C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8006B910: beq         $a1, $zero, L_8006B930
    if (ctx->r5 == 0) {
        // 0x8006B914: nop
    
            goto L_8006B930;
    }
    // 0x8006B914: nop

    // 0x8006B918: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8006B91C: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8006B920: jal         0x8006FC34
    // 0x8006B924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_8;
    // 0x8006B924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8006B928: j           L_8006B968
    // 0x8006B92C: nop

        goto L_8006B968;
    // 0x8006B92C: nop

L_8006B930:
    // 0x8006B930: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B934: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
L_8006B938:
    // 0x8006B938: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006B93C: j           L_8006B968
    // 0x8006B940: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006B968;
    // 0x8006B940: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006B944:
    // 0x8006B944: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006B948: bne         $v1, $v0, L_8006B968
    if (ctx->r3 != ctx->r2) {
        // 0x8006B94C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8006B968;
    }
    // 0x8006B94C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8006B950: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006B954: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8006B958: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8006B95C: sb          $zero, 0x71($s0)
    MEM_B(0X71, ctx->r16) = 0;
    // 0x8006B960: sb          $zero, 0x168($s0)
    MEM_B(0X168, ctx->r16) = 0;
    // 0x8006B964: sb          $zero, 0x169($s0)
    MEM_B(0X169, ctx->r16) = 0;
L_8006B968:
    // 0x8006B968: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8006B96C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006B970: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006B974: jr          $ra
    // 0x8006B978: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8006B978: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80057400_32800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80057400: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80057404: lbu         $v0, 0x4E00($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4E00);
    // 0x80057408: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8005740C: lbu         $v1, 0x4E01($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4E01);
    // 0x80057410: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80057414: lbu         $a0, 0x4E02($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4E02);
    // 0x80057418: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005741C: lbu         $a1, 0x4B20($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4B20);
    // 0x80057420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80057424: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80057428: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8005742C: sw          $zero, -0x4890($at)
    MEM_W(-0X4890, ctx->r1) = 0;
    // 0x80057430: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80057434: sb          $a0, -0x4886($at)
    MEM_B(-0X4886, ctx->r1) = ctx->r4;
    // 0x80057438: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8005743C: sb          $v0, -0x4888($at)
    MEM_B(-0X4888, ctx->r1) = ctx->r2;
    // 0x80057440: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80057444: sb          $v1, -0x4887($at)
    MEM_B(-0X4887, ctx->r1) = ctx->r3;
    // 0x80057448: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8005744C: sb          $a1, -0x4885($at)
    MEM_B(-0X4885, ctx->r1) = ctx->r5;
    // 0x80057450: jal         0x80089F70
    // 0x80057454: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80089F70_65370(rdram, ctx);
        goto after_0;
    // 0x80057454: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x80057458: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8005745C: jr          $ra
    // 0x80057460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80057460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void __scTaskComplete(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009B1B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009B1B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8009B1B8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8009B1BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009B1C0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8009B1C4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8009B1C8: bne         $v0, $zero, L_8009B22C
    if (ctx->r2 != 0) {
        // 0x8009B1CC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8009B22C;
    }
    // 0x8009B1CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8009B1D0: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
    // 0x8009B1D4: lw          $a1, 0x54($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X54);
    // 0x8009B1D8: jal         0x8009A710
    // 0x8009B1DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8009B1DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8009B1E0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8009B1E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8009B1E8: bne         $v1, $v0, L_8009B22C
    if (ctx->r3 != ctx->r2) {
        // 0x8009B1EC: addiu       $v1, $zero, 0x60
        ctx->r3 = ADD32(0, 0X60);
            goto L_8009B22C;
    }
    // 0x8009B1EC: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x8009B1F0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8009B1F4: andi        $v0, $v0, 0x60
    ctx->r2 = ctx->r2 & 0X60;
    // 0x8009B1F8: bne         $v0, $v1, L_8009B22C
    if (ctx->r2 != ctx->r3) {
        // 0x8009B1FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8009B22C;
    }
    // 0x8009B1FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8009B200: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8009B204: lw          $v0, -0x294($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X294);
    // 0x8009B208: beq         $v0, $zero, L_8009B220
    if (ctx->r2 == 0) {
        // 0x8009B20C: nop
    
            goto L_8009B220;
    }
    // 0x8009B20C: nop

    // 0x8009B210: jal         0x8009CBE0
    // 0x8009B214: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    osViBlack_recomp(rdram, ctx);
        goto after_1;
    // 0x8009B214: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x8009B218: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009B21C: sw          $zero, -0x294($at)
    MEM_W(-0X294, ctx->r1) = 0;
L_8009B220:
    // 0x8009B220: jal         0x8009C880
    // 0x8009B224: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    osViSwapBuffer_recomp(rdram, ctx);
        goto after_2;
    // 0x8009B224: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    after_2:
    // 0x8009B228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8009B22C:
    // 0x8009B22C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009B230: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8009B234: jr          $ra
    // 0x8009B238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8009B238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80033950_ED50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80033950: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80033954: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80033958: jal         0x80034A7C
    // 0x8003395C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_80034A7C_FE7C(rdram, ctx);
        goto after_0;
    // 0x8003395C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x80033960: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80033964: lbu         $v1, 0x434C($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X434C);
    // 0x80033968: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8003396C: addiu       $s0, $s0, 0x4348
    ctx->r16 = ADD32(ctx->r16, 0X4348);
    // 0x80033970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80033974: beq         $v1, $v0, L_80033990
    if (ctx->r3 == ctx->r2) {
        // 0x80033978: nop
    
            goto L_80033990;
    }
    // 0x80033978: nop

    // 0x8003397C: jal         0x8005F550
    // 0x80033980: nop

    func_8005F550_3A950(rdram, ctx);
        goto after_1;
    // 0x80033980: nop

    after_1:
    // 0x80033984: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033988: j           L_80034328
    // 0x8003398C: sw          $zero, 0x281C($at)
    MEM_W(0X281C, ctx->r1) = 0;
        goto L_80034328;
    // 0x8003398C: sw          $zero, 0x281C($at)
    MEM_W(0X281C, ctx->r1) = 0;
L_80033990:
    // 0x80033990: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80033994: lw          $v0, 0x281C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X281C);
    // 0x80033998: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003399C: lbu         $v1, 0x434E($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X434E);
    // 0x800339A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800339A4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800339A8: beq         $v1, $zero, L_800339CC
    if (ctx->r3 == 0) {
        // 0x800339AC: sw          $v0, 0x281C($at)
        MEM_W(0X281C, ctx->r1) = ctx->r2;
            goto L_800339CC;
    }
    // 0x800339AC: sw          $v0, 0x281C($at)
    MEM_W(0X281C, ctx->r1) = ctx->r2;
    // 0x800339B0: jal         0x80034338
    // 0x800339B4: nop

    func_80034338_F738(rdram, ctx);
        goto after_2;
    // 0x800339B4: nop

    after_2:
    // 0x800339B8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800339BC: lbu         $v0, 0x434E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X434E);
    // 0x800339C0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800339C4: j           L_80034328
    // 0x800339C8: sw          $v0, 0x2820($at)
    MEM_W(0X2820, ctx->r1) = ctx->r2;
        goto L_80034328;
    // 0x800339C8: sw          $v0, 0x2820($at)
    MEM_W(0X2820, ctx->r1) = ctx->r2;
L_800339CC:
    // 0x800339CC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800339D0: lbu         $v1, 0x434D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X434D);
    // 0x800339D4: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x800339D8: beq         $v0, $zero, L_80034010
    if (ctx->r2 == 0) {
        // 0x800339DC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80034010;
    }
    // 0x800339DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800339E0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800339E4: addu        $at, $at, $v0
    gpr jr_addend_800339EC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800339E8: lw          $v0, 0x1D50($at)
    ctx->r2 = ADD32(ctx->r1, 0X1D50);
    // 0x800339EC: jr          $v0
    // 0x800339F0: nop

    switch (jr_addend_800339EC >> 2) {
        case 0: goto L_800339F4; break;
        case 1: goto L_80033E78; break;
        case 2: goto L_80033E94; break;
        case 3: goto L_80033EF4; break;
        case 4: goto L_80033F48; break;
        case 5: goto L_80034010; break;
        case 6: goto L_80034060; break;
        default: switch_error(__func__, 0x800339EC, 0x800D1D50);
    }
    // 0x800339F0: nop

L_800339F4:
    // 0x800339F4: lb          $v0, 0xA($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA);
    // 0x800339F8: bltz        $v0, L_80033C20
    if (SIGNED(ctx->r2) < 0) {
        // 0x800339FC: nop
    
            goto L_80033C20;
    }
    // 0x800339FC: nop

    // 0x80033A00: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80033A04: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x80033A08: bne         $v0, $zero, L_80033A6C
    if (ctx->r2 != 0) {
        // 0x80033A0C: nop
    
            goto L_80033A6C;
    }
    // 0x80033A0C: nop

    // 0x80033A10: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80033A14: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x80033A18: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80033A1C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80033A20: lw          $v0, 0x49DC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X49DC);
    // 0x80033A24: bne         $v1, $v0, L_80033A44
    if (ctx->r3 != ctx->r2) {
        // 0x80033A28: nop
    
            goto L_80033A44;
    }
    // 0x80033A28: nop

    // 0x80033A2C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80033A30: lh          $v1, 0x49C8($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C8);
    // 0x80033A34: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80033A38: lh          $v0, 0x49E0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49E0);
    // 0x80033A3C: beq         $v1, $v0, L_80033A6C
    if (ctx->r3 == ctx->r2) {
        // 0x80033A40: nop
    
            goto L_80033A6C;
    }
    // 0x80033A40: nop

L_80033A44:
    // 0x80033A44: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    // 0x80033A48: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80033A4C: lh          $v0, 0x49C6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C6);
    // 0x80033A50: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x80033A54: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80033A58: lh          $a1, 0x49C8($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X49C8);
    // 0x80033A5C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80033A60: sw          $a0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r4;
    // 0x80033A64: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80033A68: sw          $a1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r5;
L_80033A6C:
    // 0x80033A6C: lb          $v0, 0xA($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA);
    // 0x80033A70: beq         $v0, $zero, L_80033BB8
    if (ctx->r2 == 0) {
        // 0x80033A74: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80033BB8;
    }
    // 0x80033A74: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80033A78: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80033A7C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80033A80: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80033A84: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80033A88: bltzl       $v0, L_80033A90
    if (SIGNED(ctx->r2) < 0) {
        // 0x80033A8C: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_80033A90;
    }
    goto skip_0;
    // 0x80033A8C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
L_80033A90:
    // 0x80033A90: lb          $t3, 0xA($s0)
    ctx->r11 = MEM_B(ctx->r16, 0XA);
    // 0x80033A94: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x80033A98: mult        $a0, $t3
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033A9C: mflo        $a0
    ctx->r4 = lo;
    // 0x80033AA0: lw          $a3, 0x3C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X3C);
    // 0x80033AA4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80033AA8: subu        $t0, $v0, $t3
    ctx->r8 = SUB32(ctx->r2, ctx->r11);
    // 0x80033AAC: mult        $a3, $t0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033AB0: mflo        $a3
    ctx->r7 = lo;
    // 0x80033AB4: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x80033AB8: nop

    // 0x80033ABC: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033AC0: mflo        $v0
    ctx->r2 = lo;
    // 0x80033AC4: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x80033AC8: nop

    // 0x80033ACC: mult        $a1, $t0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033AD0: mflo        $a1
    ctx->r5 = lo;
    // 0x80033AD4: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80033AD8: nop

    // 0x80033ADC: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033AE0: mflo        $v1
    ctx->r3 = lo;
    // 0x80033AE4: lw          $a2, 0x8C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8C);
    // 0x80033AE8: nop

    // 0x80033AEC: mult        $a2, $t0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033AF0: mflo        $a2
    ctx->r6 = lo;
    // 0x80033AF4: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80033AF8: sra         $a0, $a0, 6
    ctx->r4 = S32(SIGNED(ctx->r4) >> 6);
    // 0x80033AFC: sw          $a0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r4;
    // 0x80033B00: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80033B04: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80033B08: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x80033B0C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80033B10: sra         $v1, $v1, 6
    ctx->r3 = S32(SIGNED(ctx->r3) >> 6);
    // 0x80033B14: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80033B18: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80033B1C: bne         $a0, $v0, L_80033B34
    if (ctx->r4 != ctx->r2) {
        // 0x80033B20: sw          $v1, 0x4C($s0)
        MEM_W(0X4C, ctx->r16) = ctx->r3;
            goto L_80033B34;
    }
    // 0x80033B20: sw          $v1, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r3;
    // 0x80033B24: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80033B28: lh          $v0, 0x4A06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A06);
    // 0x80033B2C: j           L_80033B58
    // 0x80033B30: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
        goto L_80033B58;
    // 0x80033B30: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
L_80033B34:
    // 0x80033B34: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80033B38: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033B3C: mflo        $v0
    ctx->r2 = lo;
    // 0x80033B40: lw          $v1, 0x40($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X40);
    // 0x80033B44: nop

    // 0x80033B48: mult        $v1, $t0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033B4C: mflo        $v1
    ctx->r3 = lo;
    // 0x80033B50: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80033B54: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
L_80033B58:
    // 0x80033B58: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80033B5C: lw          $v1, 0x68($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X68);
    // 0x80033B60: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033B64: mflo        $v1
    ctx->r3 = lo;
    // 0x80033B68: lw          $a2, 0x88($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X88);
    // 0x80033B6C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80033B70: subu        $a0, $a0, $t3
    ctx->r4 = SUB32(ctx->r4, ctx->r11);
    // 0x80033B74: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033B78: mflo        $a2
    ctx->r6 = lo;
    // 0x80033B7C: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
    // 0x80033B80: nop

    // 0x80033B84: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033B88: mflo        $v0
    ctx->r2 = lo;
    // 0x80033B8C: lw          $a1, 0x90($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X90);
    // 0x80033B90: nop

    // 0x80033B94: mult        $a1, $a0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033B98: mflo        $a1
    ctx->r5 = lo;
    // 0x80033B9C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80033BA0: sra         $v1, $v1, 6
    ctx->r3 = S32(SIGNED(ctx->r3) >> 6);
    // 0x80033BA4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80033BA8: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x80033BAC: sw          $v1, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r3;
    // 0x80033BB0: j           L_80034060
    // 0x80033BB4: sw          $v0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r2;
        goto L_80034060;
    // 0x80033BB4: sw          $v0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r2;
L_80033BB8:
    // 0x80033BB8: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80033BBC: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80033BC0: lw          $a1, 0x8C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8C);
    // 0x80033BC4: lbu         $a2, 0x8($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X8);
    // 0x80033BC8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80033BCC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80033BD0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80033BD4: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x80033BD8: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x80033BDC: bne         $a2, $v0, L_80033BF4
    if (ctx->r6 != ctx->r2) {
        // 0x80033BE0: sw          $a1, 0x4C($s0)
        MEM_W(0X4C, ctx->r16) = ctx->r5;
            goto L_80033BF4;
    }
    // 0x80033BE0: sw          $a1, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r5;
    // 0x80033BE4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80033BE8: lh          $v0, 0x4A06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A06);
    // 0x80033BEC: j           L_80033BF8
    // 0x80033BF0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
        goto L_80033BF8;
    // 0x80033BF0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
L_80033BF4:
    // 0x80033BF4: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
L_80033BF8:
    // 0x80033BF8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80033BFC: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x80033C00: lw          $v1, 0x90($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X90);
    // 0x80033C04: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x80033C08: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    // 0x80033C0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80033C10: bne         $a0, $v0, L_80034060
    if (ctx->r4 != ctx->r2) {
        // 0x80033C14: sw          $v1, 0x50($s0)
        MEM_W(0X50, ctx->r16) = ctx->r3;
            goto L_80034060;
    }
    // 0x80033C14: sw          $v1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r3;
    // 0x80033C18: j           L_80034060
    // 0x80033C1C: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
        goto L_80034060;
    // 0x80033C1C: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
L_80033C20:
    // 0x80033C20: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80033C24: bne         $v0, $zero, L_80034060
    if (ctx->r2 != 0) {
        // 0x80033C28: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80034060;
    }
    // 0x80033C28: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80033C2C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80033C30: bne         $v1, $v0, L_80033C48
    if (ctx->r3 != ctx->r2) {
        // 0x80033C34: nop
    
            goto L_80033C48;
    }
    // 0x80033C34: nop

    // 0x80033C38: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80033C3C: lh          $v0, 0x4A06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A06);
    // 0x80033C40: j           L_80033EEC
    // 0x80033C44: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
        goto L_80033EEC;
    // 0x80033C44: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
L_80033C48:
    // 0x80033C48: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80033C4C: lh          $a0, 0x49C4($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C4);
    // 0x80033C50: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80033C54: lh          $v0, 0x49C6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C6);
    // 0x80033C58: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x80033C5C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80033C60: lh          $a1, 0x49C8($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X49C8);
    // 0x80033C64: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x80033C68: lw          $a2, 0x281C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X281C);
    // 0x80033C6C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80033C70: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    // 0x80033C74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80033C78: sw          $a0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r4;
    // 0x80033C7C: bne         $a2, $v0, L_80033C94
    if (ctx->r6 != ctx->r2) {
        // 0x80033C80: sw          $a1, 0x50($s0)
        MEM_W(0X50, ctx->r16) = ctx->r5;
            goto L_80033C94;
    }
    // 0x80033C80: sw          $a1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r5;
    // 0x80033C84: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80033C88: lh          $v0, 0x4A06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A06);
    // 0x80033C8C: j           L_80033D6C
    // 0x80033C90: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
        goto L_80033D6C;
    // 0x80033C90: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
L_80033C94:
    // 0x80033C94: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80033C98: lh          $v0, 0x4A64($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A64);
    // 0x80033C9C: bgez        $v0, L_80033CA8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80033CA0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80033CA8;
    }
    // 0x80033CA0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80033CA4: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_80033CA8:
    // 0x80033CA8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033CAC: sw          $v1, 0x284C($at)
    MEM_W(0X284C, ctx->r1) = ctx->r3;
    // 0x80033CB0: beq         $v1, $zero, L_80033CFC
    if (ctx->r3 == 0) {
        // 0x80033CB4: slti        $v0, $v1, 0x48
        ctx->r2 = SIGNED(ctx->r3) < 0X48 ? 1 : 0;
            goto L_80033CFC;
    }
    // 0x80033CB4: slti        $v0, $v1, 0x48
    ctx->r2 = SIGNED(ctx->r3) < 0X48 ? 1 : 0;
    // 0x80033CB8: bne         $v0, $zero, L_80033CE8
    if (ctx->r2 != 0) {
        // 0x80033CBC: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_80033CE8;
    }
    // 0x80033CBC: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80033CC0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80033CC4: lw          $v0, -0x7260($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7260);
    // 0x80033CC8: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80033CCC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033CD0: sw          $v0, -0x7260($at)
    MEM_W(-0X7260, ctx->r1) = ctx->r2;
    // 0x80033CD4: slti        $v0, $v0, 0x48
    ctx->r2 = SIGNED(ctx->r2) < 0X48 ? 1 : 0;
    // 0x80033CD8: bne         $v0, $zero, L_80033D50
    if (ctx->r2 != 0) {
        // 0x80033CDC: addiu       $v0, $zero, 0x48
        ctx->r2 = ADD32(0, 0X48);
            goto L_80033D50;
    }
    // 0x80033CDC: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x80033CE0: j           L_80033D48
    // 0x80033CE4: nop

        goto L_80033D48;
    // 0x80033CE4: nop

L_80033CE8:
    // 0x80033CE8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80033CEC: bltzl       $v0, L_80033CF4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80033CF0: addiu       $v0, $v0, 0x7
        ctx->r2 = ADD32(ctx->r2, 0X7);
            goto L_80033CF4;
    }
    goto skip_1;
    // 0x80033CF0: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    skip_1:
L_80033CF4:
    // 0x80033CF4: j           L_80033D48
    // 0x80033CF8: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
        goto L_80033D48;
    // 0x80033CF8: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
L_80033CFC:
    // 0x80033CFC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80033D00: lh          $a0, 0x4A06($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4A06);
    // 0x80033D04: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x80033D08: jal         0x80035240
    // 0x80033D0C: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80035240_10640(rdram, ctx);
        goto after_3;
    // 0x80033D0C: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_3:
    // 0x80033D10: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80033D14: slti        $v0, $v1, 0x200
    ctx->r2 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x80033D18: bne         $v0, $zero, L_80033D28
    if (ctx->r2 != 0) {
        // 0x80033D1C: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80033D28;
    }
    // 0x80033D1C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80033D20: j           L_80033D48
    // 0x80033D24: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_80033D48;
    // 0x80033D24: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80033D28:
    // 0x80033D28: bltzl       $v0, L_80033D30
    if (SIGNED(ctx->r2) < 0) {
        // 0x80033D2C: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_80033D30;
    }
    goto skip_2;
    // 0x80033D2C: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    skip_2:
L_80033D30:
    // 0x80033D30: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80033D34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033D38: sw          $v0, -0x7260($at)
    MEM_W(-0X7260, ctx->r1) = ctx->r2;
    // 0x80033D3C: slti        $v0, $v0, 0x18
    ctx->r2 = SIGNED(ctx->r2) < 0X18 ? 1 : 0;
    // 0x80033D40: beq         $v0, $zero, L_80033D50
    if (ctx->r2 == 0) {
        // 0x80033D44: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_80033D50;
    }
    // 0x80033D44: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_80033D48:
    // 0x80033D48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033D4C: sw          $v0, -0x7260($at)
    MEM_W(-0X7260, ctx->r1) = ctx->r2;
L_80033D50:
    // 0x80033D50: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80033D54: lh          $a0, 0x4A06($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4A06);
    // 0x80033D58: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80033D5C: lw          $a1, -0x7260($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7260);
    // 0x80033D60: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80033D64: jal         0x80035180
    // 0x80033D68: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80035180_10580(rdram, ctx);
        goto after_4;
    // 0x80033D68: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_4:
L_80033D6C:
    // 0x80033D6C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80033D70: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80033D74: lb          $v1, 0x4DFD($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4DFD);
    // 0x80033D78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80033D7C: bne         $v1, $v0, L_80033E00
    if (ctx->r3 != ctx->r2) {
        // 0x80033D80: nop
    
            goto L_80033E00;
    }
    // 0x80033D80: nop

    // 0x80033D84: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80033D88: addiu       $a0, $a0, 0x2730
    ctx->r4 = ADD32(ctx->r4, 0X2730);
    // 0x80033D8C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80033D90: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80033D94: lw          $v1, 0x9C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9C);
    // 0x80033D98: lw          $t0, 0xA0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XA0);
    // 0x80033D9C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80033DA0: addiu       $a2, $a2, -0x7228
    ctx->r6 = ADD32(ctx->r6, -0X7228);
    // 0x80033DA4: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80033DA8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033DAC: sh          $v1, 0x2732($at)
    MEM_H(0X2732, ctx->r1) = ctx->r3;
    // 0x80033DB0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033DB4: sh          $t0, 0x2734($at)
    MEM_H(0X2734, ctx->r1) = ctx->r8;
    // 0x80033DB8: jal         0x8003F780
    // 0x80033DBC: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    func_8003F780_1AB80(rdram, ctx);
        goto after_5;
    // 0x80033DBC: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    after_5:
    // 0x80033DC0: bne         $v0, $zero, L_80033DE8
    if (ctx->r2 != 0) {
        // 0x80033DC4: addiu       $v1, $zero, 0x3C
        ctx->r3 = ADD32(0, 0X3C);
            goto L_80033DE8;
    }
    // 0x80033DC4: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x80033DC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80033DCC: lw          $v0, -0x725C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X725C);
    // 0x80033DD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033DD4: sw          $v1, -0x7240($at)
    MEM_W(-0X7240, ctx->r1) = ctx->r3;
    // 0x80033DD8: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80033DDC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033DE0: j           L_80033E30
    // 0x80033DE4: sw          $v0, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r2;
        goto L_80033E30;
    // 0x80033DE4: sw          $v0, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r2;
L_80033DE8:
    // 0x80033DE8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80033DEC: lw          $v0, -0x7240($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7240);
    // 0x80033DF0: beq         $v0, $zero, L_80033E10
    if (ctx->r2 == 0) {
        // 0x80033DF4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80033E10;
    }
    // 0x80033DF4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80033DF8: j           L_80033E28
    // 0x80033DFC: nop

        goto L_80033E28;
    // 0x80033DFC: nop

L_80033E00:
    // 0x80033E00: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80033E04: lw          $v0, -0x7240($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7240);
    // 0x80033E08: bne         $v0, $zero, L_80033E28
    if (ctx->r2 != 0) {
        // 0x80033E0C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80033E28;
    }
    // 0x80033E0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80033E10:
    // 0x80033E10: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80033E14: lw          $v0, -0x725C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X725C);
    // 0x80033E18: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x80033E1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033E20: j           L_80033E30
    // 0x80033E24: sw          $v0, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r2;
        goto L_80033E30;
    // 0x80033E24: sw          $v0, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r2;
L_80033E28:
    // 0x80033E28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033E2C: sw          $v0, -0x7240($at)
    MEM_W(-0X7240, ctx->r1) = ctx->r2;
L_80033E30:
    // 0x80033E30: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80033E34: lw          $v0, -0x725C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X725C);
    // 0x80033E38: slti        $v0, $v0, 0x301
    ctx->r2 = SIGNED(ctx->r2) < 0X301 ? 1 : 0;
    // 0x80033E3C: bne         $v0, $zero, L_80033E4C
    if (ctx->r2 != 0) {
        // 0x80033E40: addiu       $v0, $zero, 0x300
        ctx->r2 = ADD32(0, 0X300);
            goto L_80033E4C;
    }
    // 0x80033E40: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80033E44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033E48: sw          $v0, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r2;
L_80033E4C:
    // 0x80033E4C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80033E50: lw          $v0, -0x725C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X725C);
    // 0x80033E54: slti        $v0, $v0, 0x200
    ctx->r2 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x80033E58: beq         $v0, $zero, L_80033E68
    if (ctx->r2 == 0) {
        // 0x80033E5C: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80033E68;
    }
    // 0x80033E5C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80033E60: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033E64: sw          $v0, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r2;
L_80033E68:
    // 0x80033E68: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80033E6C: lw          $v0, -0x725C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X725C);
    // 0x80033E70: j           L_80034060
    // 0x80033E74: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
        goto L_80034060;
    // 0x80033E74: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_80033E78:
    // 0x80033E78: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80033E7C: lhu         $v0, -0x73AA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X73AA);
    // 0x80033E80: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x80033E84: beq         $v0, $zero, L_80034060
    if (ctx->r2 == 0) {
        // 0x80033E88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80034060;
    }
    // 0x80033E88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80033E8C: j           L_80034060
    // 0x80033E90: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80034060;
    // 0x80033E90: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80033E94:
    // 0x80033E94: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80033E98: lhu         $v0, -0x73AA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X73AA);
    // 0x80033E9C: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x80033EA0: beq         $v0, $zero, L_80033EAC
    if (ctx->r2 == 0) {
        // 0x80033EA4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80033EAC;
    }
    // 0x80033EA4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80033EA8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80033EAC:
    // 0x80033EAC: lw          $v0, 0xE0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE0);
    // 0x80033EB0: beq         $v0, $zero, L_80034060
    if (ctx->r2 == 0) {
        // 0x80033EB4: nop
    
            goto L_80034060;
    }
    // 0x80033EB4: nop

    // 0x80033EB8: lh          $v0, 0x14($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X14);
    // 0x80033EBC: lw          $v1, 0xE0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE0);
    // 0x80033EC0: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    // 0x80033EC4: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x80033EC8: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x80033ECC: lw          $a0, 0xE0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0);
    // 0x80033ED0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80033ED4: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    // 0x80033ED8: lh          $v0, 0x18($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X18);
    // 0x80033EDC: lw          $v1, 0xE0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE0);
    // 0x80033EE0: sw          $v0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r2;
    // 0x80033EE4: lh          $v0, 0x56($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X56);
    // 0x80033EE8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
L_80033EEC:
    // 0x80033EEC: j           L_80034060
    // 0x80033EF0: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
        goto L_80034060;
    // 0x80033EF0: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_80033EF4:
    // 0x80033EF4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80033EF8: lhu         $v0, -0x73AA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X73AA);
    // 0x80033EFC: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x80033F00: beq         $v0, $zero, L_80033F10
    if (ctx->r2 == 0) {
        // 0x80033F04: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80033F10;
    }
    // 0x80033F04: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80033F08: j           L_80034024
    // 0x80033F0C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80034024;
    // 0x80033F0C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80033F10:
    // 0x80033F10: lw          $v0, 0xE0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE0);
    // 0x80033F14: beq         $v0, $zero, L_80034060
    if (ctx->r2 == 0) {
        // 0x80033F18: nop
    
            goto L_80034060;
    }
    // 0x80033F18: nop

    // 0x80033F1C: lh          $v0, 0x14($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X14);
    // 0x80033F20: lw          $v1, 0xE0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE0);
    // 0x80033F24: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    // 0x80033F28: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x80033F2C: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x80033F30: lw          $a0, 0xE0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0);
    // 0x80033F34: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80033F38: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    // 0x80033F3C: lh          $v0, 0x18($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X18);
    // 0x80033F40: j           L_80034060
    // 0x80033F44: sw          $v0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r2;
        goto L_80034060;
    // 0x80033F44: sw          $v0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r2;
L_80033F48:
    // 0x80033F48: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80033F4C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80033F50: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80033F54: andi        $a0, $v0, 0xFFF
    ctx->r4 = ctx->r2 & 0XFFF;
    // 0x80033F58: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80033F5C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80033F60: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80033F64: beq         $v0, $zero, L_80033F90
    if (ctx->r2 == 0) {
        // 0x80033F68: subu        $a2, $v1, $a0
        ctx->r6 = SUB32(ctx->r3, ctx->r4);
            goto L_80033F90;
    }
    // 0x80033F68: subu        $a2, $v1, $a0
    ctx->r6 = SUB32(ctx->r3, ctx->r4);
    // 0x80033F6C: slti        $v0, $a2, 0x61
    ctx->r2 = SIGNED(ctx->r6) < 0X61 ? 1 : 0;
    // 0x80033F70: bne         $v0, $zero, L_80033FBC
    if (ctx->r2 != 0) {
        // 0x80033F74: addiu       $v0, $v1, -0x1000
        ctx->r2 = ADD32(ctx->r3, -0X1000);
            goto L_80033FBC;
    }
    // 0x80033F74: addiu       $v0, $v1, -0x1000
    ctx->r2 = ADD32(ctx->r3, -0X1000);
    // 0x80033F78: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80033F7C: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80033F80: beq         $v0, $zero, L_80033FD4
    if (ctx->r2 == 0) {
        // 0x80033F84: addiu       $a1, $zero, -0x60
        ctx->r5 = ADD32(0, -0X60);
            goto L_80033FD4;
    }
    // 0x80033F84: addiu       $a1, $zero, -0x60
    ctx->r5 = ADD32(0, -0X60);
    // 0x80033F88: j           L_80033FD4
    // 0x80033F8C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
        goto L_80033FD4;
    // 0x80033F8C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
L_80033F90:
    // 0x80033F90: beq         $a0, $v1, L_80033FBC
    if (ctx->r4 == ctx->r3) {
        // 0x80033F94: subu        $a2, $a0, $v1
        ctx->r6 = SUB32(ctx->r4, ctx->r3);
            goto L_80033FBC;
    }
    // 0x80033F94: subu        $a2, $a0, $v1
    ctx->r6 = SUB32(ctx->r4, ctx->r3);
    // 0x80033F98: slti        $v0, $a2, 0x61
    ctx->r2 = SIGNED(ctx->r6) < 0X61 ? 1 : 0;
    // 0x80033F9C: bne         $v0, $zero, L_80033FBC
    if (ctx->r2 != 0) {
        // 0x80033FA0: addiu       $v0, $a0, -0x1000
        ctx->r2 = ADD32(ctx->r4, -0X1000);
            goto L_80033FBC;
    }
    // 0x80033FA0: addiu       $v0, $a0, -0x1000
    ctx->r2 = ADD32(ctx->r4, -0X1000);
    // 0x80033FA4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80033FA8: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80033FAC: beq         $v0, $zero, L_80033FD4
    if (ctx->r2 == 0) {
        // 0x80033FB0: addiu       $a1, $zero, 0x60
        ctx->r5 = ADD32(0, 0X60);
            goto L_80033FD4;
    }
    // 0x80033FB0: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x80033FB4: j           L_80033FD4
    // 0x80033FB8: addiu       $a1, $zero, -0x60
    ctx->r5 = ADD32(0, -0X60);
        goto L_80033FD4;
    // 0x80033FB8: addiu       $a1, $zero, -0x60
    ctx->r5 = ADD32(0, -0X60);
L_80033FBC:
    // 0x80033FBC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80033FC0: addiu       $a0, $a0, -0x722C
    ctx->r4 = ADD32(ctx->r4, -0X722C);
    // 0x80033FC4: jal         0x80034A54
    // 0x80033FC8: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    func_80034A54_FE54(rdram, ctx);
        goto after_6;
    // 0x80033FC8: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    after_6:
    // 0x80033FCC: j           L_80033FE0
    // 0x80033FD0: nop

        goto L_80033FE0;
    // 0x80033FD0: nop

L_80033FD4:
    // 0x80033FD4: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80033FD8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80033FDC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_80033FE0:
    // 0x80033FE0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80033FE4: lh          $a0, 0x49C4($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C4);
    // 0x80033FE8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80033FEC: lh          $v0, 0x49C6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C6);
    // 0x80033FF0: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x80033FF4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80033FF8: lh          $a1, 0x49C8($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X49C8);
    // 0x80033FFC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80034000: sw          $a0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r4;
    // 0x80034004: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    // 0x80034008: j           L_80034060
    // 0x8003400C: sw          $a1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r5;
        goto L_80034060;
    // 0x8003400C: sw          $a1, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r5;
L_80034010:
    // 0x80034010: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80034014: lhu         $v0, -0x73AA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X73AA);
    // 0x80034018: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8003401C: bnel        $v0, $zero, L_80034024
    if (ctx->r2 != 0) {
        // 0x80034020: sb          $zero, 0x5($s0)
        MEM_B(0X5, ctx->r16) = 0;
            goto L_80034024;
    }
    goto skip_3;
    // 0x80034020: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    skip_3:
L_80034024:
    // 0x80034024: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80034028: lh          $a1, 0x49C4($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X49C4);
    // 0x8003402C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80034030: lh          $v0, 0x49C6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C6);
    // 0x80034034: lw          $a0, 0x5C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X5C);
    // 0x80034038: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003403C: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80034040: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80034044: lh          $a2, 0x49C8($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X49C8);
    // 0x80034048: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003404C: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80034050: sw          $a1, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r5;
    // 0x80034054: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    // 0x80034058: sw          $a2, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r6;
    // 0x8003405C: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
L_80034060:
    // 0x80034060: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80034064: lbu         $t3, 0x2($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2);
    // 0x80034068: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8003406C: subu        $t2, $v0, $v1
    ctx->r10 = SUB32(ctx->r2, ctx->r3);
    // 0x80034070: beq         $t3, $zero, L_800342D0
    if (ctx->r11 == 0) {
        // 0x80034074: subu        $t4, $t2, $t3
        ctx->r12 = SUB32(ctx->r10, ctx->r11);
            goto L_800342D0;
    }
    // 0x80034074: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x80034078: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x8003407C: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80034080: slt         $v0, $a3, $a0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80034084: beq         $v0, $zero, L_800340A8
    if (ctx->r2 == 0) {
        // 0x80034088: subu        $v1, $a0, $a3
        ctx->r3 = SUB32(ctx->r4, ctx->r7);
            goto L_800340A8;
    }
    // 0x80034088: subu        $v1, $a0, $a3
    ctx->r3 = SUB32(ctx->r4, ctx->r7);
    // 0x8003408C: addiu       $v0, $a0, -0x1000
    ctx->r2 = ADD32(ctx->r4, -0X1000);
    // 0x80034090: subu        $v0, $a3, $v0
    ctx->r2 = SUB32(ctx->r7, ctx->r2);
    // 0x80034094: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80034098: bnel        $v0, $zero, L_800340C0
    if (ctx->r2 != 0) {
        // 0x8003409C: addiu       $a3, $a3, 0x1000
        ctx->r7 = ADD32(ctx->r7, 0X1000);
            goto L_800340C0;
    }
    goto skip_4;
    // 0x8003409C: addiu       $a3, $a3, 0x1000
    ctx->r7 = ADD32(ctx->r7, 0X1000);
    skip_4:
    // 0x800340A0: j           L_800340C0
    // 0x800340A4: nop

        goto L_800340C0;
    // 0x800340A4: nop

L_800340A8:
    // 0x800340A8: subu        $v1, $a3, $a0
    ctx->r3 = SUB32(ctx->r7, ctx->r4);
    // 0x800340AC: addiu       $a1, $a3, -0x1000
    ctx->r5 = ADD32(ctx->r7, -0X1000);
    // 0x800340B0: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    // 0x800340B4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800340B8: bnel        $v0, $zero, L_800340C0
    if (ctx->r2 != 0) {
        // 0x800340BC: addu        $a3, $a1, $zero
        ctx->r7 = ADD32(ctx->r5, 0);
            goto L_800340C0;
    }
    goto skip_5;
    // 0x800340BC: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    skip_5:
L_800340C0:
    // 0x800340C0: lw          $t1, 0x78($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X78);
    // 0x800340C4: mult        $t1, $t4
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800340C8: mflo        $t1
    ctx->r9 = lo;
    // 0x800340CC: lw          $v0, 0x48($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X48);
    // 0x800340D0: nop

    // 0x800340D4: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800340D8: mflo        $v0
    ctx->r2 = lo;
    // 0x800340DC: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x800340E0: nop

    // 0x800340E4: div         $zero, $t1, $t2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r10)));
    // 0x800340E8: bne         $t2, $zero, L_800340F4
    if (ctx->r10 != 0) {
        // 0x800340EC: nop
    
            goto L_800340F4;
    }
    // 0x800340EC: nop

    // 0x800340F0: break       7
    do_break(2147696880);
L_800340F4:
    // 0x800340F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800340F8: bne         $t2, $at, L_8003410C
    if (ctx->r10 != ctx->r1) {
        // 0x800340FC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003410C;
    }
    // 0x800340FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80034100: bne         $t1, $at, L_8003410C
    if (ctx->r9 != ctx->r1) {
        // 0x80034104: nop
    
            goto L_8003410C;
    }
    // 0x80034104: nop

    // 0x80034108: break       6
    do_break(2147696904);
L_8003410C:
    // 0x8003410C: mflo        $t1
    ctx->r9 = lo;
    // 0x80034110: lw          $t0, 0x7C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X7C);
    // 0x80034114: nop

    // 0x80034118: mult        $t0, $t4
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003411C: mflo        $t0
    ctx->r8 = lo;
    // 0x80034120: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x80034124: nop

    // 0x80034128: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003412C: mflo        $v0
    ctx->r2 = lo;
    // 0x80034130: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80034134: nop

    // 0x80034138: div         $zero, $t0, $t2
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r10)));
    // 0x8003413C: bne         $t2, $zero, L_80034148
    if (ctx->r10 != 0) {
        // 0x80034140: nop
    
            goto L_80034148;
    }
    // 0x80034140: nop

    // 0x80034144: break       7
    do_break(2147696964);
L_80034148:
    // 0x80034148: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003414C: bne         $t2, $at, L_80034160
    if (ctx->r10 != ctx->r1) {
        // 0x80034150: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80034160;
    }
    // 0x80034150: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80034154: bne         $t0, $at, L_80034160
    if (ctx->r8 != ctx->r1) {
        // 0x80034158: nop
    
            goto L_80034160;
    }
    // 0x80034158: nop

    // 0x8003415C: break       6
    do_break(2147696988);
L_80034160:
    // 0x80034160: mflo        $t0
    ctx->r8 = lo;
    // 0x80034164: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x80034168: nop

    // 0x8003416C: mult        $a1, $t4
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034170: mflo        $a1
    ctx->r5 = lo;
    // 0x80034174: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80034178: nop

    // 0x8003417C: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034180: mflo        $v0
    ctx->r2 = lo;
    // 0x80034184: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80034188: nop

    // 0x8003418C: div         $zero, $a1, $t2
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r10)));
    // 0x80034190: bne         $t2, $zero, L_8003419C
    if (ctx->r10 != 0) {
        // 0x80034194: nop
    
            goto L_8003419C;
    }
    // 0x80034194: nop

    // 0x80034198: break       7
    do_break(2147697048);
L_8003419C:
    // 0x8003419C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800341A0: bne         $t2, $at, L_800341B4
    if (ctx->r10 != ctx->r1) {
        // 0x800341A4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800341B4;
    }
    // 0x800341A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800341A8: bne         $a1, $at, L_800341B4
    if (ctx->r5 != ctx->r1) {
        // 0x800341AC: nop
    
            goto L_800341B4;
    }
    // 0x800341AC: nop

    // 0x800341B0: break       6
    do_break(2147697072);
L_800341B4:
    // 0x800341B4: mflo        $a1
    ctx->r5 = lo;
    // 0x800341B8: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x800341BC: nop

    // 0x800341C0: mult        $a2, $t4
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800341C4: mflo        $a2
    ctx->r6 = lo;
    // 0x800341C8: nop

    // 0x800341CC: nop

    // 0x800341D0: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800341D4: mflo        $v0
    ctx->r2 = lo;
    // 0x800341D8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x800341DC: nop

    // 0x800341E0: div         $zero, $a2, $t2
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r10)));
    // 0x800341E4: bne         $t2, $zero, L_800341F0
    if (ctx->r10 != 0) {
        // 0x800341E8: nop
    
            goto L_800341F0;
    }
    // 0x800341E8: nop

    // 0x800341EC: break       7
    do_break(2147697132);
L_800341F0:
    // 0x800341F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800341F4: bne         $t2, $at, L_80034208
    if (ctx->r10 != ctx->r1) {
        // 0x800341F8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80034208;
    }
    // 0x800341F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800341FC: bne         $a2, $at, L_80034208
    if (ctx->r6 != ctx->r1) {
        // 0x80034200: nop
    
            goto L_80034208;
    }
    // 0x80034200: nop

    // 0x80034204: break       6
    do_break(2147697156);
L_80034208:
    // 0x80034208: mflo        $a2
    ctx->r6 = lo;
    // 0x8003420C: lw          $a3, 0x38($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X38);
    // 0x80034210: nop

    // 0x80034214: mult        $a3, $t4
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034218: mflo        $a3
    ctx->r7 = lo;
    // 0x8003421C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80034220: nop

    // 0x80034224: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034228: mflo        $v0
    ctx->r2 = lo;
    // 0x8003422C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80034230: nop

    // 0x80034234: div         $zero, $a3, $t2
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r10)));
    // 0x80034238: bne         $t2, $zero, L_80034244
    if (ctx->r10 != 0) {
        // 0x8003423C: nop
    
            goto L_80034244;
    }
    // 0x8003423C: nop

    // 0x80034240: break       7
    do_break(2147697216);
L_80034244:
    // 0x80034244: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80034248: bne         $t2, $at, L_8003425C
    if (ctx->r10 != ctx->r1) {
        // 0x8003424C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003425C;
    }
    // 0x8003424C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80034250: bne         $a3, $at, L_8003425C
    if (ctx->r7 != ctx->r1) {
        // 0x80034254: nop
    
            goto L_8003425C;
    }
    // 0x80034254: nop

    // 0x80034258: break       6
    do_break(2147697240);
L_8003425C:
    // 0x8003425C: mflo        $a3
    ctx->r7 = lo;
    // 0x80034260: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80034264: nop

    // 0x80034268: mult        $v1, $t4
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003426C: mflo        $v1
    ctx->r3 = lo;
    // 0x80034270: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x80034274: nop

    // 0x80034278: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003427C: mflo        $v0
    ctx->r2 = lo;
    // 0x80034280: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80034284: nop

    // 0x80034288: div         $zero, $v1, $t2
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r10)));
    // 0x8003428C: bne         $t2, $zero, L_80034298
    if (ctx->r10 != 0) {
        // 0x80034290: nop
    
            goto L_80034298;
    }
    // 0x80034290: nop

    // 0x80034294: break       7
    do_break(2147697300);
L_80034298:
    // 0x80034298: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003429C: bne         $t2, $at, L_800342B0
    if (ctx->r10 != ctx->r1) {
        // 0x800342A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800342B0;
    }
    // 0x800342A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800342A4: bne         $v1, $at, L_800342B0
    if (ctx->r3 != ctx->r1) {
        // 0x800342A8: nop
    
            goto L_800342B0;
    }
    // 0x800342A8: nop

    // 0x800342AC: break       6
    do_break(2147697324);
L_800342B0:
    // 0x800342B0: mflo        $v1
    ctx->r3 = lo;
    // 0x800342B4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x800342B8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800342BC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800342C0: jal         0x80032FC0
    // 0x800342C4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80032FC0_E3C0(rdram, ctx);
        goto after_7;
    // 0x800342C4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_7:
    // 0x800342C8: j           L_80034328
    // 0x800342CC: nop

        goto L_80034328;
    // 0x800342CC: nop

L_800342D0:
    // 0x800342D0: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x800342D4: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x800342D8: lbu         $t1, 0x7($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X7);
    // 0x800342DC: lw          $t0, 0x10($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X10);
    // 0x800342E0: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x800342E4: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x800342E8: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x800342EC: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x800342F0: addu        $a2, $t0, $a2
    ctx->r6 = ADD32(ctx->r8, ctx->r6);
    // 0x800342F4: addu        $a3, $v1, $a3
    ctx->r7 = ADD32(ctx->r3, ctx->r7);
    // 0x800342F8: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x800342FC: jal         0x80032FC0
    // 0x80034300: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    func_80032FC0_E3C0(rdram, ctx);
        goto after_8;
    // 0x80034300: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    after_8:
    // 0x80034304: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x80034308: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8003430C: beq         $v0, $zero, L_80034328
    if (ctx->r2 == 0) {
        // 0x80034310: sltiu       $v0, $v0, 0xA
        ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
            goto L_80034328;
    }
    // 0x80034310: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x80034314: beq         $v0, $zero, L_80034324
    if (ctx->r2 == 0) {
        // 0x80034318: addiu       $v0, $v1, -0xA
        ctx->r2 = ADD32(ctx->r3, -0XA);
            goto L_80034324;
    }
    // 0x80034318: addiu       $v0, $v1, -0xA
    ctx->r2 = ADD32(ctx->r3, -0XA);
    // 0x8003431C: j           L_80034328
    // 0x80034320: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
        goto L_80034328;
    // 0x80034320: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
L_80034324:
    // 0x80034324: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
L_80034328:
    // 0x80034328: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8003432C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80034330: jr          $ra
    // 0x80034334: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80034334: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8006EB70_49F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006EB70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006EB74: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8006EB78: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8006EB7C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8006EB80: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8006EB84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006EB88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006EB8C: lbu         $v1, 0x9($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X9);
    // 0x8006EB90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006EB94: beq         $v1, $v0, L_8006EC00
    if (ctx->r3 == ctx->r2) {
        // 0x8006EB98: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8006EC00;
    }
    // 0x8006EB98: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8006EB9C: beql        $v0, $zero, L_8006EBB4
    if (ctx->r2 == 0) {
        // 0x8006EBA0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006EBB4;
    }
    goto skip_0;
    // 0x8006EBA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8006EBA4: beq         $v1, $zero, L_8006EBCC
    if (ctx->r3 == 0) {
        // 0x8006EBA8: addiu       $a0, $s3, 0x438
        ctx->r4 = ADD32(ctx->r19, 0X438);
            goto L_8006EBCC;
    }
    // 0x8006EBA8: addiu       $a0, $s3, 0x438
    ctx->r4 = ADD32(ctx->r19, 0X438);
    // 0x8006EBAC: j           L_8006ED20
    // 0x8006EBB0: nop

        goto L_8006ED20;
    // 0x8006EBB0: nop

L_8006EBB4:
    // 0x8006EBB4: beq         $v1, $v0, L_8006EC18
    if (ctx->r3 == ctx->r2) {
        // 0x8006EBB8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8006EC18;
    }
    // 0x8006EBB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8006EBBC: beq         $v1, $v0, L_8006ECFC
    if (ctx->r3 == ctx->r2) {
        // 0x8006EBC0: nop
    
            goto L_8006ECFC;
    }
    // 0x8006EBC0: nop

    // 0x8006EBC4: j           L_8006ED20
    // 0x8006EBC8: nop

        goto L_8006ED20;
    // 0x8006EBC8: nop

L_8006EBCC:
    // 0x8006EBCC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x8006EBD0: jal         0x8009A3B4
    // 0x8006EBD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8006EBD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8006EBD8: addiu       $a0, $s3, 0x428
    ctx->r4 = ADD32(ctx->r19, 0X428);
    // 0x8006EBDC: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x8006EBE0: jal         0x8009A3B4
    // 0x8006EBE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8006EBE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8006EBE8: addiu       $a0, $s3, 0x440
    ctx->r4 = ADD32(ctx->r19, 0X440);
    // 0x8006EBEC: addiu       $a1, $s3, 0x54
    ctx->r5 = ADD32(ctx->r19, 0X54);
    // 0x8006EBF0: jal         0x8009A3B4
    // 0x8006EBF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8006EBF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8006EBF8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8006EBFC: sb          $v0, 0x448($s3)
    MEM_B(0X448, ctx->r19) = ctx->r2;
L_8006EC00:
    // 0x8006EC00: jal         0x800700D8
    // 0x8006EC04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_800700D8_4B4D8(rdram, ctx);
        goto after_3;
    // 0x8006EC04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_3:
    // 0x8006EC08: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8006EC0C: sb          $v0, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r2;
    // 0x8006EC10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006EC14: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
L_8006EC18:
    // 0x8006EC18: addiu       $a0, $s3, 0x2C
    ctx->r4 = ADD32(ctx->r19, 0X2C);
    // 0x8006EC1C: addiu       $s0, $s3, 0x14
    ctx->r16 = ADD32(ctx->r19, 0X14);
    // 0x8006EC20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8006EC24: jal         0x8009A3B4
    // 0x8006EC28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8006EC28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8006EC2C: addiu       $a0, $s3, 0x34
    ctx->r4 = ADD32(ctx->r19, 0X34);
    // 0x8006EC30: addiu       $s2, $s3, 0x1C
    ctx->r18 = ADD32(ctx->r19, 0X1C);
    // 0x8006EC34: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8006EC38: jal         0x8009A3B4
    // 0x8006EC3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8006EC3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8006EC40: addiu       $a0, $s3, 0x5C
    ctx->r4 = ADD32(ctx->r19, 0X5C);
    // 0x8006EC44: addiu       $s1, $s3, 0x54
    ctx->r17 = ADD32(ctx->r19, 0X54);
    // 0x8006EC48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8006EC4C: jal         0x8009A3B4
    // 0x8006EC50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8006EC50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8006EC54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006EC58: lbu         $v0, 0xAC($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XAC);
    // 0x8006EC5C: addiu       $a1, $s3, 0x438
    ctx->r5 = ADD32(ctx->r19, 0X438);
    // 0x8006EC60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8006EC64: jal         0x8009A3B4
    // 0x8006EC68: sb          $v0, 0xAD($s3)
    MEM_B(0XAD, ctx->r19) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8006EC68: sb          $v0, 0xAD($s3)
    MEM_B(0XAD, ctx->r19) = ctx->r2;
    after_7:
    // 0x8006EC6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8006EC70: addiu       $a1, $s3, 0x428
    ctx->r5 = ADD32(ctx->r19, 0X428);
    // 0x8006EC74: jal         0x8009A3B4
    // 0x8006EC78: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8006EC78: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_8:
    // 0x8006EC7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8006EC80: addiu       $a1, $s3, 0x440
    ctx->r5 = ADD32(ctx->r19, 0X440);
    // 0x8006EC84: jal         0x8009A3B4
    // 0x8006EC88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8006EC88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8006EC8C: lbu         $v0, 0xBD($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XBD);
    // 0x8006EC90: lbu         $a1, 0x448($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X448);
    // 0x8006EC94: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x8006EC98: sb          $v0, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r2;
    // 0x8006EC9C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8006ECA0: beq         $a1, $v0, L_8006ECD8
    if (ctx->r5 == ctx->r2) {
        // 0x8006ECA4: nop
    
            goto L_8006ECD8;
    }
    // 0x8006ECA4: nop

    // 0x8006ECA8: lbu         $a2, 0xAC($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0XAC);
    // 0x8006ECAC: bne         $a2, $a1, L_8006ECC4
    if (ctx->r6 != ctx->r5) {
        // 0x8006ECB0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8006ECC4;
    }
    // 0x8006ECB0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8006ECB4: lb          $v1, 0xA7($s3)
    ctx->r3 = MEM_B(ctx->r19, 0XA7);
    // 0x8006ECB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006ECBC: bne         $v1, $v0, L_8006ECD8
    if (ctx->r3 != ctx->r2) {
        // 0x8006ECC0: addu        $a1, $a2, $zero
        ctx->r5 = ADD32(ctx->r6, 0);
            goto L_8006ECD8;
    }
    // 0x8006ECC0: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
L_8006ECC4:
    // 0x8006ECC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006ECC8: jal         0x8006FB90
    // 0x8006ECCC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_10;
    // 0x8006ECCC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x8006ECD0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8006ECD4: sb          $v0, 0x448($s3)
    MEM_B(0X448, ctx->r19) = ctx->r2;
L_8006ECD8:
    // 0x8006ECD8: lb          $v0, 0xA6($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XA6);
    // 0x8006ECDC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8006ECE0: beq         $v0, $zero, L_8006ED20
    if (ctx->r2 == 0) {
        // 0x8006ECE4: addiu       $a0, $zero, 0x90
        ctx->r4 = ADD32(0, 0X90);
            goto L_8006ED20;
    }
    // 0x8006ECE4: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    // 0x8006ECE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006ECEC: jal         0x8002A2F8
    // 0x8006ECF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_11;
    // 0x8006ECF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x8006ECF4: j           L_8006ED20
    // 0x8006ECF8: nop

        goto L_8006ED20;
    // 0x8006ECF8: nop

L_8006ECFC:
    // 0x8006ECFC: jal         0x80070100
    // 0x8006ED00: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_80070100_4B500(rdram, ctx);
        goto after_12;
    // 0x8006ED00: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_12:
    // 0x8006ED04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006ED08: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x8006ED0C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8006ED10: sb          $zero, 0xB($s3)
    MEM_B(0XB, ctx->r19) = 0;
    // 0x8006ED14: sb          $zero, 0xA($s3)
    MEM_B(0XA, ctx->r19) = 0;
    // 0x8006ED18: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    // 0x8006ED1C: sb          $v0, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r2;
L_8006ED20:
    // 0x8006ED20: jal         0x800472C0
    // 0x8006ED24: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_13;
    // 0x8006ED24: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_13:
    // 0x8006ED28: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8006ED2C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8006ED30: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8006ED34: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006ED38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006ED3C: jr          $ra
    // 0x8006ED40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8006ED40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800354C0_108C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800354C0: jr          $ra
    // 0x800354C4: nop

    TRACE_RETURN()
    return;
    // 0x800354C4: nop

    // 0x800354C8: nop

    // 0x800354CC: nop

;}
RECOMP_FUNC void func_80062E6C_3E26C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062E6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80062E70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80062E74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80062E78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80062E7C: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80062E80: lbu         $a0, 0x2($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X2);
    // 0x80062E84: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80062E88: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80062E8C: jal         0x8006036C
    // 0x80062E90: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80062E90: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    after_0:
    // 0x80062E94: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80062E98: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80062E9C: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x80062EA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80062EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80062EA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80062EAC: jr          $ra
    // 0x80062EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80062EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80036954_11D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036954: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80036958: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003695C: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x80036960: addiu       $s0, $s0, 0x28D0
    ctx->r16 = ADD32(ctx->r16, 0X28D0);
    // 0x80036964: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80036968: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8003696C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80036970: addiu       $s3, $zero, -0x8
    ctx->r19 = ADD32(0, -0X8);
    // 0x80036974: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80036978: lui         $s2, 0x8019
    ctx->r18 = S32(0X8019 << 16);
    // 0x8003697C: addiu       $s2, $s2, 0x3C38
    ctx->r18 = ADD32(ctx->r18, 0X3C38);
    // 0x80036980: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80036984: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80036988: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
L_8003698C:
    // 0x8003698C: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
    // 0x80036990: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80036994: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80036998: addiu       $a1, $a1, -0x3768
    ctx->r5 = ADD32(ctx->r5, -0X3768);
    // 0x8003699C: lui         $a2, 0x199
    ctx->r6 = S32(0X199 << 16);
    // 0x800369A0: addiu       $a2, $a2, -0x62C0
    ctx->r6 = ADD32(ctx->r6, -0X62C0);
    // 0x800369A4: jal         0x80028D30
    // 0x800369A8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_0;
    // 0x800369A8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_0:
    // 0x800369AC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x800369B0: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x800369B4: and         $s0, $v0, $s3
    ctx->r16 = ctx->r2 & ctx->r19;
    // 0x800369B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800369BC: slti        $v0, $s1, 0x9
    ctx->r2 = SIGNED(ctx->r17) < 0X9 ? 1 : 0;
    // 0x800369C0: bne         $v0, $zero, L_8003698C
    if (ctx->r2 != 0) {
        // 0x800369C4: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_8003698C;
    }
    // 0x800369C4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x800369C8: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x800369CC: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x800369D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800369D4: sw          $zero, 0x3C38($at)
    MEM_W(0X3C38, ctx->r1) = 0;
    // 0x800369D8: addiu       $a0, $zero, 0x300
    ctx->r4 = ADD32(0, 0X300);
    // 0x800369DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800369E0: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    // 0x800369E4: jal         0x8002C764
    // 0x800369E8: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_8002C764_7B64(rdram, ctx);
        goto after_1;
    // 0x800369E8: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_1:
    // 0x800369EC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x800369F0: lui         $s5, 0xFF00
    ctx->r21 = S32(0XFF00 << 16);
    // 0x800369F4: lui         $s4, 0x100
    ctx->r20 = S32(0X100 << 16);
    // 0x800369F8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800369FC: lui         $s1, 0x8019
    ctx->r17 = S32(0X8019 << 16);
    // 0x80036A00: addiu       $s1, $s1, 0x3C38
    ctx->r17 = ADD32(ctx->r17, 0X3C38);
L_80036A04:
    // 0x80036A04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80036A08: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80036A0C: lw          $v0, -0x3768($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3768);
    // 0x80036A10: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80036A14: and         $v0, $v0, $s5
    ctx->r2 = ctx->r2 & ctx->r21;
    // 0x80036A18: beql        $v0, $s4, L_80036A38
    if (ctx->r2 == ctx->r20) {
        // 0x80036A1C: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80036A38;
    }
    goto skip_0;
    // 0x80036A1C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    skip_0:
    // 0x80036A20: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80036A24: addu        $a1, $s0, $v0
    ctx->r5 = ADD32(ctx->r16, ctx->r2);
    // 0x80036A28: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x80036A2C: jal         0x8002FDC0
    // 0x80036A30: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_8002FDC0_B1C0(rdram, ctx);
        goto after_2;
    // 0x80036A30: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_2:
    // 0x80036A34: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_80036A38:
    // 0x80036A38: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80036A3C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80036A40: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80036A44: addu        $a1, $s0, $v0
    ctx->r5 = ADD32(ctx->r16, ctx->r2);
    // 0x80036A48: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x80036A4C: jal         0x800870A0
    // 0x80036A50: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_800870A0_624A0(rdram, ctx);
        goto after_3;
    // 0x80036A50: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_3:
    // 0x80036A54: slti        $v0, $s3, 0x9
    ctx->r2 = SIGNED(ctx->r19) < 0X9 ? 1 : 0;
    // 0x80036A58: bne         $v0, $zero, L_80036A04
    if (ctx->r2 != 0) {
        // 0x80036A5C: nop
    
            goto L_80036A04;
    }
    // 0x80036A5C: nop

    // 0x80036A60: jal         0x800892B0
    // 0x80036A64: nop

    func_800892B0_646B0(rdram, ctx);
        goto after_4;
    // 0x80036A64: nop

    after_4:
    // 0x80036A68: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80036A6C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80036A70: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80036A74: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80036A78: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80036A7C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80036A80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80036A84: jr          $ra
    // 0x80036A88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80036A88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80075F78_51378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80075F78: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x80075F7C: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x80075F80: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x80075F84: addiu       $t4, $t4, 0x10D5
    ctx->r12 = ADD32(ctx->r12, 0X10D5);
    // 0x80075F88: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x80075F8C: addiu       $t3, $t3, 0x2BFC
    ctx->r11 = ADD32(ctx->r11, 0X2BFC);
    // 0x80075F90: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80075F94: addiu       $a3, $a3, 0x2F00
    ctx->r7 = ADD32(ctx->r7, 0X2F00);
    // 0x80075F98: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
L_80075F9C:
    // 0x80075F9C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80075FA0: lb          $v0, 0x599E($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X599E);
    // 0x80075FA4: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80075FA8: bne         $v0, $t5, L_80076010
    if (ctx->r2 != ctx->r13) {
        // 0x80075FAC: sll         $v1, $v0, 7
        ctx->r3 = S32(ctx->r2 << 7);
            goto L_80076010;
    }
    // 0x80075FAC: sll         $v1, $v0, 7
    ctx->r3 = S32(ctx->r2 << 7);
    // 0x80075FB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80075FB4: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
L_80075FB8:
    // 0x80075FB8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80075FBC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80075FC0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80075FC4: lbu         $v1, 0x10C8($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X10C8);
    // 0x80075FC8: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80075FCC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80075FD0: sb          $v1, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r3;
    // 0x80075FD4: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x80075FD8: bne         $v0, $zero, L_80075FB8
    if (ctx->r2 != 0) {
        // 0x80075FDC: nop
    
            goto L_80075FB8;
    }
    // 0x80075FDC: nop

    // 0x80075FE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80075FE4: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
L_80075FE8:
    // 0x80075FE8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80075FEC: lbu         $v1, 0x0($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0X0);
    // 0x80075FF0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80075FF4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80075FF8: sb          $v1, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r3;
    // 0x80075FFC: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x80076000: bne         $v0, $zero, L_80075FE8
    if (ctx->r2 != 0) {
        // 0x80076004: nop
    
            goto L_80075FE8;
    }
    // 0x80076004: nop

    // 0x80076008: j           L_8007613C
    // 0x8007600C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
        goto L_8007613C;
    // 0x8007600C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_80076010:
    // 0x80076010: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80076014: addiu       $v0, $v0, -0x2E10
    ctx->r2 = ADD32(ctx->r2, -0X2E10);
    // 0x80076018: addu        $a2, $v1, $v0
    ctx->r6 = ADD32(ctx->r3, ctx->r2);
    // 0x8007601C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80076020: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
L_80076024:
    // 0x80076024: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x80076028: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x8007602C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80076030: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80076034: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80076038: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007603C: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x80076040: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80076044: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80076048: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8007604C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80076050: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80076054: slti        $v0, $a1, 0xD
    ctx->r2 = SIGNED(ctx->r5) < 0XD ? 1 : 0;
    // 0x80076058: bne         $v0, $zero, L_80076024
    if (ctx->r2 != 0) {
        // 0x8007605C: nop
    
            goto L_80076024;
    }
    // 0x8007605C: nop

    // 0x80076060: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80076064: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80076068: addiu       $v0, $v0, 0x2F20
    ctx->r2 = ADD32(ctx->r2, 0X2F20);
    // 0x8007606C: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
L_80076070:
    // 0x80076070: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80076074: addu        $v0, $a2, $a1
    ctx->r2 = ADD32(ctx->r6, ctx->r5);
    // 0x80076078: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8007607C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80076080: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80076084: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80076088: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x8007608C: bne         $v0, $zero, L_80076070
    if (ctx->r2 != 0) {
        // 0x80076090: nop
    
            goto L_80076070;
    }
    // 0x80076090: nop

    // 0x80076094: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80076098: lb          $v0, 0x599E($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X599E);
    // 0x8007609C: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x800760A0: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x800760A4: addu        $a2, $t1, $v0
    ctx->r6 = ADD32(ctx->r9, ctx->r2);
    // 0x800760A8: addiu       $v1, $a2, 0x1
    ctx->r3 = ADD32(ctx->r6, 0X1);
    // 0x800760AC: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800760B0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800760B4: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x800760B8: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x800760BC: addiu       $a1, $v0, 0x1
    ctx->r5 = ADD32(ctx->r2, 0X1);
    // 0x800760C0: mfhi        $t6
    ctx->r14 = hi;
    // 0x800760C4: sra         $v0, $t6, 2
    ctx->r2 = S32(SIGNED(ctx->r14) >> 2);
    // 0x800760C8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800760CC: bne         $v0, $zero, L_800760E0
    if (ctx->r2 != 0) {
        // 0x800760D0: addu        $v0, $a1, $v0
        ctx->r2 = ADD32(ctx->r5, ctx->r2);
            goto L_800760E0;
    }
    // 0x800760D0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x800760D4: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x800760D8: j           L_800760E8
    // 0x800760DC: addiu       $v0, $zero, 0x4F
    ctx->r2 = ADD32(0, 0X4F);
        goto L_800760E8;
    // 0x800760DC: addiu       $v0, $zero, 0x4F
    ctx->r2 = ADD32(0, 0X4F);
L_800760E0:
    // 0x800760E0: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x800760E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_800760E8:
    // 0x800760E8: sb          $v0, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r2;
    // 0x800760EC: lui         $v0, 0x6666
    ctx->r2 = S32(0X6666 << 16);
    // 0x800760F0: ori         $v0, $v0, 0x6667
    ctx->r2 = ctx->r2 | 0X6667;
    // 0x800760F4: addiu       $a0, $a2, 0x1
    ctx->r4 = ADD32(ctx->r6, 0X1);
    // 0x800760F8: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800760FC: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    // 0x80076100: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80076104: sra         $v0, $a0, 31
    ctx->r2 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80076108: mfhi        $t6
    ctx->r14 = hi;
    // 0x8007610C: sra         $v1, $t6, 2
    ctx->r3 = S32(SIGNED(ctx->r14) >> 2);
    // 0x80076110: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80076114: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80076118: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007611C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80076120: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80076124: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80076128: sb          $a1, -0x2($a2)
    MEM_B(-0X2, ctx->r6) = ctx->r5;
    // 0x8007612C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80076130: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80076134: sb          $v0, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r2;
    // 0x80076138: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_8007613C:
    // 0x8007613C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80076140: slti        $v0, $t1, 0x6
    ctx->r2 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x80076144: bne         $v0, $zero, L_80075F9C
    if (ctx->r2 != 0) {
        // 0x80076148: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_80075F9C;
    }
    // 0x80076148: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x8007614C: jr          $ra
    // 0x80076150: nop

    TRACE_RETURN()
    return;
    // 0x80076150: nop

;}
RECOMP_FUNC void func_80032920_DD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80032924: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80032928: jal         0x80032A90
    // 0x8003292C: nop

    func_80032A90_DE90(rdram, ctx);
        goto after_0;
    // 0x8003292C: nop

    after_0:
    // 0x80032930: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x80032934: addiu       $a1, $a1, 0x7B70
    ctx->r5 = ADD32(ctx->r5, 0X7B70);
    // 0x80032938: jal         0x800290C8
    // 0x8003293C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_800290C8_44C8(rdram, ctx);
        goto after_1;
    // 0x8003293C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x80032940: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80032944: jal         0x80026810
    // 0x80032948: addiu       $a0, $a0, 0x2958
    ctx->r4 = ADD32(ctx->r4, 0X2958);
    func_80026810_1C10(rdram, ctx);
        goto after_2;
    // 0x80032948: addiu       $a0, $a0, 0x2958
    ctx->r4 = ADD32(ctx->r4, 0X2958);
    after_2:
    // 0x8003294C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80032950: jr          $ra
    // 0x80032954: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80032954: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80060918_3BD18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80060918: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8006091C: lw          $v0, -0x5810($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5810);
    // 0x80060920: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80060924: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80060928: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8006092C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80060930: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80060934: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80060938: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8006093C: beq         $v0, $zero, L_80060A8C
    if (ctx->r2 == 0) {
        // 0x80060940: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80060A8C;
    }
    // 0x80060940: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80060944: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x80060948: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x8006094C: lui         $s2, 0x801E
    ctx->r18 = S32(0X801E << 16);
    // 0x80060950: addiu       $s2, $s2, -0x71D8
    ctx->r18 = ADD32(ctx->r18, -0X71D8);
    // 0x80060954: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80060958: lw          $v0, -0x5810($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5810);
L_8006095C:
    // 0x8006095C: srlv        $v1, $s4, $s1
    ctx->r3 = S32(U32(ctx->r20) >> (ctx->r17 & 31));
    // 0x80060960: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80060964: beq         $v0, $zero, L_80060A78
    if (ctx->r2 == 0) {
        // 0x80060968: nop
    
            goto L_80060A78;
    }
    // 0x80060968: nop

    // 0x8006096C: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x80060970: jal         0x8004DA68
    // 0x80060974: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x80060974: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    after_0:
    // 0x80060978: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8006097C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80060980: beq         $v1, $v0, L_800609BC
    if (ctx->r3 == ctx->r2) {
        // 0x80060984: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_800609BC;
    }
    // 0x80060984: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x80060988: beq         $v0, $zero, L_800609A0
    if (ctx->r2 == 0) {
        // 0x8006098C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_800609A0;
    }
    // 0x8006098C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80060990: beq         $v1, $v0, L_800609E4
    if (ctx->r3 == ctx->r2) {
        // 0x80060994: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_800609E4;
    }
    // 0x80060994: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80060998: j           L_80060A5C
    // 0x8006099C: nop

        goto L_80060A5C;
    // 0x8006099C: nop

L_800609A0:
    // 0x800609A0: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x800609A4: beq         $v1, $v0, L_80060A20
    if (ctx->r3 == ctx->r2) {
        // 0x800609A8: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_80060A20;
    }
    // 0x800609A8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x800609AC: beq         $v1, $v0, L_80060A38
    if (ctx->r3 == ctx->r2) {
        // 0x800609B0: nop
    
            goto L_80060A38;
    }
    // 0x800609B0: nop

    // 0x800609B4: j           L_80060A5C
    // 0x800609B8: nop

        goto L_80060A5C;
    // 0x800609B8: nop

L_800609BC:
    // 0x800609BC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x800609C0: sb          $s3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r19;
    // 0x800609C4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800609C8: lw          $v0, -0x22A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22A0);
    // 0x800609CC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800609D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800609D4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x800609D8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x800609DC: j           L_80060A4C
    // 0x800609E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80060A4C;
    // 0x800609E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_800609E4:
    // 0x800609E4: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x800609E8: beq         $v1, $v0, L_80060A10
    if (ctx->r3 == ctx->r2) {
        // 0x800609EC: sll         $v1, $v1, 2
        ctx->r3 = S32(ctx->r3 << 2);
            goto L_80060A10;
    }
    // 0x800609EC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800609F0: sb          $s3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r19;
    // 0x800609F4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800609F8: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x800609FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80060A00: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80060A04: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80060A08: j           L_80060A4C
    // 0x80060A0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80060A4C;
    // 0x80060A0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80060A10:
    // 0x80060A10: jal         0x8004F418
    // 0x80060A14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80060A14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80060A18: j           L_80060A5C
    // 0x80060A1C: nop

        goto L_80060A5C;
    // 0x80060A1C: nop

L_80060A20:
    // 0x80060A20: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80060A24: sb          $s3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r19;
    // 0x80060A28: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80060A2C: lw          $v1, -0x26A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26A8);
    // 0x80060A30: j           L_80060A4C
    // 0x80060A34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80060A4C;
    // 0x80060A34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80060A38:
    // 0x80060A38: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80060A3C: sb          $s3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r19;
    // 0x80060A40: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80060A44: lw          $v1, -0x2344($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2344);
    // 0x80060A48: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80060A4C:
    // 0x80060A4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80060A50: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80060A54: jalr        $v0
    // 0x80060A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80060A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80060A5C:
    // 0x80060A5C: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80060A60: lw          $v1, -0x5810($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5810);
    // 0x80060A64: srlv        $v0, $s4, $s1
    ctx->r2 = S32(U32(ctx->r20) >> (ctx->r17 & 31));
    // 0x80060A68: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80060A6C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80060A70: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80060A74: sw          $v1, -0x5810($at)
    MEM_W(-0X5810, ctx->r1) = ctx->r3;
L_80060A78:
    // 0x80060A78: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80060A7C: lw          $v0, -0x5810($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5810);
    // 0x80060A80: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80060A84: bne         $v0, $zero, L_8006095C
    if (ctx->r2 != 0) {
        // 0x80060A88: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8006095C;
    }
    // 0x80060A88: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80060A8C:
    // 0x80060A8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80060A90: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80060A94: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80060A98: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80060A9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80060AA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80060AA4: jr          $ra
    // 0x80060AA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80060AA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80073828_4EC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80073828: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007382C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80073830: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80073834: lb          $s1, -0x3BC8($s1)
    ctx->r17 = MEM_B(ctx->r17, -0X3BC8);
    // 0x80073838: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8007383C: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x80073840: addiu       $s3, $s3, -0x3C18
    ctx->r19 = ADD32(ctx->r19, -0X3C18);
    // 0x80073844: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80073848: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8007384C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80073850: jal         0x80072E10
    // 0x80073854: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80072E10_4E210(rdram, ctx);
        goto after_0;
    // 0x80073854: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80073858: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8007385C: lb          $v1, 0x47CC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X47CC);
    // 0x80073860: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80073864: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80073868: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8007386C: beq         $v1, $v0, L_800738DC
    if (ctx->r3 == ctx->r2) {
        // 0x80073870: nop
    
            goto L_800738DC;
    }
    // 0x80073870: nop

    // 0x80073874: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80073878: addiu       $s0, $s0, -0x35A7
    ctx->r16 = ADD32(ctx->r16, -0X35A7);
    // 0x8007387C: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x80073880: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x80073884: beq         $v1, $zero, L_800738C0
    if (ctx->r3 == 0) {
        // 0x80073888: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_800738C0;
    }
    // 0x80073888: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8007388C: beq         $v1, $v0, L_800738C0
    if (ctx->r3 == ctx->r2) {
        // 0x80073890: nop
    
            goto L_800738C0;
    }
    // 0x80073890: nop

    // 0x80073894: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80073898: lh          $v0, -0x3BAE($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3BAE);
    // 0x8007389C: beq         $v0, $v1, L_800738C0
    if (ctx->r2 == ctx->r3) {
        // 0x800738A0: nop
    
            goto L_800738C0;
    }
    // 0x800738A0: nop

    // 0x800738A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800738A8: sh          $a1, -0x3BAE($at)
    MEM_H(-0X3BAE, ctx->r1) = ctx->r5;
    // 0x800738AC: jal         0x80035698
    // 0x800738B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80035698_10A98(rdram, ctx);
        goto after_1;
    // 0x800738B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800738B4: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x800738B8: jal         0x80036340
    // 0x800738BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80036340_11740(rdram, ctx);
        goto after_2;
    // 0x800738BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
L_800738C0:
    // 0x800738C0: jal         0x80073C34
    // 0x800738C4: nop

    func_80073C34_4F034(rdram, ctx);
        goto after_3;
    // 0x800738C4: nop

    after_3:
    // 0x800738C8: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x800738CC: jal         0x8004CB2C
    // 0x800738D0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_4;
    // 0x800738D0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_4:
    // 0x800738D4: jal         0x8004F6DC
    // 0x800738D8: nop

    func_8004F6DC_2AADC(rdram, ctx);
        goto after_5;
    // 0x800738D8: nop

    after_5:
L_800738DC:
    // 0x800738DC: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x800738E0: addiu       $s0, $s0, -0x3A50
    ctx->r16 = ADD32(ctx->r16, -0X3A50);
    // 0x800738E4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800738E8: bne         $v0, $zero, L_80073900
    if (ctx->r2 != 0) {
        // 0x800738EC: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_80073900;
    }
    // 0x800738EC: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x800738F0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800738F4: sb          $zero, 0xB61($at)
    MEM_B(0XB61, ctx->r1) = 0;
    // 0x800738F8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800738FC: sb          $zero, -0x72EC($at)
    MEM_B(-0X72EC, ctx->r1) = 0;
L_80073900:
    // 0x80073900: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80073904: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80073908: lw          $v0, 0x3908($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3908);
    // 0x8007390C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80073910: sw          $zero, -0x3690($at)
    MEM_W(-0X3690, ctx->r1) = 0;
    // 0x80073914: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80073918: sw          $zero, -0x368C($at)
    MEM_W(-0X368C, ctx->r1) = 0;
    // 0x8007391C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80073920: jalr        $v0
    // 0x80073924: sb          $zero, 0xB62($at)
    MEM_B(0XB62, ctx->r1) = 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80073924: sb          $zero, 0xB62($at)
    MEM_B(0XB62, ctx->r1) = 0;
    after_6:
    // 0x80073928: jal         0x80038550
    // 0x8007392C: nop

    func_80038550_13950(rdram, ctx);
        goto after_7;
    // 0x8007392C: nop

    after_7:
    // 0x80073930: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80073934: bne         $v0, $zero, L_8007395C
    if (ctx->r2 != 0) {
        // 0x80073938: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8007395C;
    }
    // 0x80073938: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8007393C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80073940: lb          $v1, 0x47CC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X47CC);
    // 0x80073944: beq         $v1, $v0, L_8007395C
    if (ctx->r3 == ctx->r2) {
        // 0x80073948: nop
    
            goto L_8007395C;
    }
    // 0x80073948: nop

    // 0x8007394C: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80073950: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    // 0x80073954: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80073958: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
L_8007395C:
    // 0x8007395C: jal         0x800736E0
    // 0x80073960: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800736E0_4EAE0(rdram, ctx);
        goto after_8;
    // 0x80073960: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x80073964: jal         0x8003B7F4
    // 0x80073968: nop

    func_8003B7F4_16BF4(rdram, ctx);
        goto after_9;
    // 0x80073968: nop

    after_9:
    // 0x8007396C: jal         0x80047260
    // 0x80073970: nop

    func_80047260_22660(rdram, ctx);
        goto after_10;
    // 0x80073970: nop

    after_10:
    // 0x80073974: jal         0x80051AF0
    // 0x80073978: nop

    func_80051AF0_2CEF0(rdram, ctx);
        goto after_11;
    // 0x80073978: nop

    after_11:
    // 0x8007397C: jal         0x80036BCC
    // 0x80073980: nop

    func_80036BCC_11FCC(rdram, ctx);
        goto after_12;
    // 0x80073980: nop

    after_12:
    // 0x80073984: sb          $zero, 0x7E($s3)
    MEM_B(0X7E, ctx->r19) = 0;
    // 0x80073988: jal         0x80060590
    // 0x8007398C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_80060590_3B990(rdram, ctx);
        goto after_13;
    // 0x8007398C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_13:
    // 0x80073990: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80073994: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80073998: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8007399C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800739A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800739A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800739A8: jr          $ra
    // 0x800739AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800739AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002C420_7820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002C420: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x8002C424: lh          $a1, 0x0($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X0);
    // 0x8002C428: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x8002C42C: lui         $a2, 0xFFFF
    ctx->r6 = S32(0XFFFF << 16);
    // 0x8002C430: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x8002C434: and         $a1, $a1, $a2
    ctx->r5 = ctx->r5 & ctx->r6;
    // 0x8002C438: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8002C43C: sra         $v1, $v1, 28
    ctx->r3 = S32(SIGNED(ctx->r3) >> 28);
    // 0x8002C440: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8002C444: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8002C448: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8002C44C: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x8002C450: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8002C454: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x8002C458: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x8002C45C: lh          $a1, 0x6($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X6);
    // 0x8002C460: lhu         $v1, 0x8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8);
    // 0x8002C464: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x8002C468: and         $a1, $a1, $a2
    ctx->r5 = ctx->r5 & ctx->r6;
    // 0x8002C46C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8002C470: sra         $v1, $v1, 28
    ctx->r3 = S32(SIGNED(ctx->r3) >> 28);
    // 0x8002C474: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8002C478: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8002C47C: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    // 0x8002C480: lh          $v1, 0xA($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA);
    // 0x8002C484: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8002C488: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x8002C48C: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8002C490: lh          $a1, 0xC($a0)
    ctx->r5 = MEM_H(ctx->r4, 0XC);
    // 0x8002C494: lhu         $v1, 0xE($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XE);
    // 0x8002C498: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x8002C49C: and         $a1, $a1, $a2
    ctx->r5 = ctx->r5 & ctx->r6;
    // 0x8002C4A0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8002C4A4: sra         $v1, $v1, 28
    ctx->r3 = S32(SIGNED(ctx->r3) >> 28);
    // 0x8002C4A8: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8002C4AC: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8002C4B0: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x8002C4B4: lh          $v1, 0x10($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X10);
    // 0x8002C4B8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8002C4BC: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x8002C4C0: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8002C4C4: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x8002C4C8: lhu         $a1, 0x18($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X18);
    // 0x8002C4CC: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x8002C4D0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8002C4D4: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x8002C4D8: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8002C4DC: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x8002C4E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8002C4E4: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x8002C4E8: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x8002C4EC: lh          $a1, 0x2($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X2);
    // 0x8002C4F0: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
    // 0x8002C4F4: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x8002C4F8: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x8002C4FC: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8002C500: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8002C504: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8002C508: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x8002C50C: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
    // 0x8002C510: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x8002C514: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8002C518: lh          $v1, 0x6($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X6);
    // 0x8002C51C: lh          $a1, 0x8($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X8);
    // 0x8002C520: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
    // 0x8002C524: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x8002C528: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x8002C52C: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8002C530: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8002C534: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x8002C538: lh          $v1, 0xA($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA);
    // 0x8002C53C: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
    // 0x8002C540: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x8002C544: sw          $v1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r3;
    // 0x8002C548: lh          $v1, 0xC($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XC);
    // 0x8002C54C: lh          $a1, 0xE($a0)
    ctx->r5 = MEM_H(ctx->r4, 0XE);
    // 0x8002C550: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
    // 0x8002C554: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x8002C558: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x8002C55C: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8002C560: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8002C564: sw          $v1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r3;
    // 0x8002C568: lh          $v1, 0x10($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X10);
    // 0x8002C56C: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
    // 0x8002C570: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x8002C574: sw          $v1, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r3;
    // 0x8002C578: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x8002C57C: lhu         $a1, 0x1A($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X1A);
    // 0x8002C580: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8002C584: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x8002C588: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8002C58C: sw          $v1, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r3;
    // 0x8002C590: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8002C594: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8002C598: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x8002C59C: jr          $ra
    // 0x8002C5A0: sw          $v1, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8002C5A0: sw          $v1, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_80077FB0_533B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80077FB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077FB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80077FB8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80077FBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80077FC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80077FC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80077FC8: lw          $v0, -0x3324($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3324);
    // 0x80077FCC: jalr        $v0
    // 0x80077FD0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80077FD0: nop

    after_0:
    // 0x80077FD4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80077FD8: jr          $ra
    // 0x80077FDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80077FDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80032E88_E288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80032E8C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80032E90: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80032E94: jal         0x80032D70
    // 0x80032E98: addiu       $a0, $a0, -0x7840
    ctx->r4 = ADD32(ctx->r4, -0X7840);
    func_80032D70_E170(rdram, ctx);
        goto after_0;
    // 0x80032E98: addiu       $a0, $a0, -0x7840
    ctx->r4 = ADD32(ctx->r4, -0X7840);
    after_0:
    // 0x80032E9C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80032EA0: jr          $ra
    // 0x80032EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80032EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80029CF4_50F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029CF4: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80029CF8: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x80029CFC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80029D00: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x80029D04: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80029D08: sw          $s3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r19;
    // 0x80029D0C: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80029D10: lw          $a2, 0xB8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB8);
    // 0x80029D14: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80029D18: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x80029D1C: sw          $ra, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r31;
    // 0x80029D20: jal         0x8009A3E0
    // 0x80029D24: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x80029D24: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    after_0:
    // 0x80029D28: jal         0x8009A390
    // 0x80029D2C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    strlen_recomp(rdram, ctx);
        goto after_1;
    // 0x80029D2C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x80029D30: jal         0x800281C8
    // 0x80029D34: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_800281C8_35C8(rdram, ctx);
        goto after_2;
    // 0x80029D34: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_2:
    // 0x80029D38: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80029D3C: beq         $s0, $zero, L_80029D80
    if (ctx->r16 == 0) {
        // 0x80029D40: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80029D80;
    }
    // 0x80029D40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80029D44: jal         0x800A35A0
    // 0x80029D48: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800A35A0_7E9A0(rdram, ctx);
        goto after_3;
    // 0x80029D48: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x80029D4C: jal         0x800281C8
    // 0x80029D50: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_800281C8_35C8(rdram, ctx);
        goto after_4;
    // 0x80029D50: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_4:
    // 0x80029D54: beq         $v0, $zero, L_80029D80
    if (ctx->r2 == 0) {
        // 0x80029D58: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80029D80;
    }
    // 0x80029D58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80029D5C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80029D60: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x80029D64: addiu       $a2, $a2, -0x677C
    ctx->r6 = ADD32(ctx->r6, -0X677C);
    // 0x80029D68: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80029D6C: sh          $s1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r17;
    // 0x80029D70: sh          $s2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r18;
    // 0x80029D74: sb          $s3, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r19;
    // 0x80029D78: jal         0x800283A8
    // 0x80029D7C: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    func_800283A8_37A8(rdram, ctx);
        goto after_5;
    // 0x80029D7C: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    after_5:
L_80029D80:
    // 0x80029D80: lw          $ra, 0xA0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA0);
    // 0x80029D84: lw          $s3, 0x9C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X9C);
    // 0x80029D88: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x80029D8C: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x80029D90: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x80029D94: jr          $ra
    // 0x80029D98: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    TRACE_RETURN()
    return;
    // 0x80029D98: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_8008ABE8_65FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008ABE8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008ABEC: bne         $a1, $zero, L_8008ABF8
    if (ctx->r5 != 0) {
        // 0x8008ABF0: addu        $t0, $a1, $zero
        ctx->r8 = ADD32(ctx->r5, 0);
            goto L_8008ABF8;
    }
    // 0x8008ABF0: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x8008ABF4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_8008ABF8:
    // 0x8008ABF8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008ABFC: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008AC00: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8008AC04: lw          $a2, 0x4F8C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4F8C);
    // 0x8008AC08: blez        $v0, L_8008ACA8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008AC0C: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_8008ACA8;
    }
    // 0x8008AC0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8008AC10: andi        $t2, $a0, 0x1
    ctx->r10 = ctx->r4 & 0X1;
    // 0x8008AC14: andi        $a0, $a0, 0x2
    ctx->r4 = ctx->r4 & 0X2;
    // 0x8008AC18: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8008AC1C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8008AC20: addiu       $t3, $zero, -0x2
    ctx->r11 = ADD32(0, -0X2);
    // 0x8008AC24: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
    // 0x8008AC28: addiu       $v1, $a2, 0x10
    ctx->r3 = ADD32(ctx->r6, 0X10);
L_8008AC2C:
    // 0x8008AC2C: lw          $v0, 0x68($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X68);
    // 0x8008AC30: beq         $v0, $zero, L_8008AC48
    if (ctx->r2 == 0) {
        // 0x8008AC34: nop
    
            goto L_8008AC48;
    }
    // 0x8008AC34: nop

    // 0x8008AC38: bne         $t2, $zero, L_8008AC50
    if (ctx->r10 != 0) {
        // 0x8008AC3C: nop
    
            goto L_8008AC50;
    }
    // 0x8008AC3C: nop

    // 0x8008AC40: j           L_8008AC98
    // 0x8008AC44: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
        goto L_8008AC98;
    // 0x8008AC44: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_8008AC48:
    // 0x8008AC48: beql        $a0, $zero, L_8008AC98
    if (ctx->r4 == 0) {
        // 0x8008AC4C: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_8008AC98;
    }
    goto skip_0;
    // 0x8008AC4C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_0:
L_8008AC50:
    // 0x8008AC50: lw          $v0, -0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, -0XC);
    // 0x8008AC54: beql        $v0, $zero, L_8008AC98
    if (ctx->r2 == 0) {
        // 0x8008AC58: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_8008AC98;
    }
    goto skip_1;
    // 0x8008AC58: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_1:
    // 0x8008AC5C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8008AC60: bnel        $v0, $t5, L_8008AC98
    if (ctx->r2 != ctx->r13) {
        // 0x8008AC64: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_8008AC98;
    }
    goto skip_2;
    // 0x8008AC64: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_2:
    // 0x8008AC68: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8008AC6C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8008AC70: beql        $v0, $zero, L_8008AC90
    if (ctx->r2 == 0) {
        // 0x8008AC74: sw          $t0, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->r8;
            goto L_8008AC90;
    }
    goto skip_3;
    // 0x8008AC74: sw          $t0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r8;
    skip_3:
    // 0x8008AC78: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x8008AC7C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8008AC80: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8008AC84: and         $v0, $v0, $t3
    ctx->r2 = ctx->r2 & ctx->r11;
    // 0x8008AC88: j           L_8008AC94
    // 0x8008AC8C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_8008AC94;
    // 0x8008AC8C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_8008AC90:
    // 0x8008AC90: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
L_8008AC94:
    // 0x8008AC94: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_8008AC98:
    // 0x8008AC98: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
    // 0x8008AC9C: slt         $v0, $a3, $t1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8008ACA0: bne         $v0, $zero, L_8008AC2C
    if (ctx->r2 != 0) {
        // 0x8008ACA4: addiu       $a2, $a2, 0x13C
        ctx->r6 = ADD32(ctx->r6, 0X13C);
            goto L_8008AC2C;
    }
    // 0x8008ACA4: addiu       $a2, $a2, 0x13C
    ctx->r6 = ADD32(ctx->r6, 0X13C);
L_8008ACA8:
    // 0x8008ACA8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8008ACAC: jr          $ra
    // 0x8008ACB0: nop

    TRACE_RETURN()
    return;
    // 0x8008ACB0: nop

;}
RECOMP_FUNC void func_8004D624_28A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004D624: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x8004D628: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x8004D62C: lw          $a1, 0x7FB0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7FB0);
    // 0x8004D630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004D634: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004D638: jal         0x8004D64C
    // 0x8004D63C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8004D64C_28A4C(rdram, ctx);
        goto after_0;
    // 0x8004D63C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x8004D640: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004D644: jr          $ra
    // 0x8004D648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004D648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004D80C_28C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004D80C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004D810: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8004D814: lui         $s3, 0x801E
    ctx->r19 = S32(0X801E << 16);
    // 0x8004D818: lw          $s3, -0x714C($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X714C);
    // 0x8004D81C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004D820: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8004D824: addiu       $s0, $s0, -0x420
    ctx->r16 = ADD32(ctx->r16, -0X420);
    // 0x8004D828: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004D82C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8004D830: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004D834: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8004D838: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
L_8004D83C:
    // 0x8004D83C: sllv        $v0, $s3, $s1
    ctx->r2 = S32(ctx->r19 << (ctx->r17 & 31));
    // 0x8004D840: bgezl       $v0, L_8004D874
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004D844: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004D874;
    }
    goto skip_0;
    // 0x8004D844: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x8004D848: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x8004D84C: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8004D850: lw          $v1, -0x267C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X267C);
    // 0x8004D854: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004D858: bnel        $v0, $zero, L_8004D874
    if (ctx->r2 != 0) {
        // 0x8004D85C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004D874;
    }
    goto skip_1;
    // 0x8004D85C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x8004D860: jal         0x80047B3C
    // 0x8004D864: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_0;
    // 0x8004D864: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8004D868: jal         0x8004F418
    // 0x8004D86C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8004D86C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8004D870: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8004D874:
    // 0x8004D874: slti        $v0, $s1, 0x12
    ctx->r2 = SIGNED(ctx->r17) < 0X12 ? 1 : 0;
    // 0x8004D878: bne         $v0, $zero, L_8004D83C
    if (ctx->r2 != 0) {
        // 0x8004D87C: addiu       $s0, $s0, 0x3C8
        ctx->r16 = ADD32(ctx->r16, 0X3C8);
            goto L_8004D83C;
    }
    // 0x8004D87C: addiu       $s0, $s0, 0x3C8
    ctx->r16 = ADD32(ctx->r16, 0X3C8);
    // 0x8004D880: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8004D884: addiu       $s0, $s0, -0x5F40
    ctx->r16 = ADD32(ctx->r16, -0X5F40);
    // 0x8004D888: lui         $s3, 0x801E
    ctx->r19 = S32(0X801E << 16);
    // 0x8004D88C: lw          $s3, -0x7798($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X7798);
    // 0x8004D890: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_8004D894:
    // 0x8004D894: sllv        $v0, $s3, $s1
    ctx->r2 = S32(ctx->r19 << (ctx->r17 & 31));
    // 0x8004D898: bgezl       $v0, L_8004D8CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004D89C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004D8CC;
    }
    goto skip_2;
    // 0x8004D89C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x8004D8A0: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x8004D8A4: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8004D8A8: lw          $v1, -0x267C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X267C);
    // 0x8004D8AC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004D8B0: bnel        $v0, $zero, L_8004D8CC
    if (ctx->r2 != 0) {
        // 0x8004D8B4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004D8CC;
    }
    goto skip_3;
    // 0x8004D8B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x8004D8B8: jal         0x80047B3C
    // 0x8004D8BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_2;
    // 0x8004D8BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8004D8C0: jal         0x8004F488
    // 0x8004D8C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_3;
    // 0x8004D8C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8004D8C8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8004D8CC:
    // 0x8004D8CC: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x8004D8D0: bne         $v0, $zero, L_8004D894
    if (ctx->r2 != 0) {
        // 0x8004D8D4: addiu       $s0, $s0, 0x5AC
        ctx->r16 = ADD32(ctx->r16, 0X5AC);
            goto L_8004D894;
    }
    // 0x8004D8D4: addiu       $s0, $s0, 0x5AC
    ctx->r16 = ADD32(ctx->r16, 0X5AC);
    // 0x8004D8D8: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8004D8DC: addiu       $s0, $s0, 0x59A0
    ctx->r16 = ADD32(ctx->r16, 0X59A0);
    // 0x8004D8E0: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x8004D8E4: lw          $s3, -0x3FB0($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X3FB0);
    // 0x8004D8E8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_8004D8EC:
    // 0x8004D8EC: sllv        $v0, $s3, $s1
    ctx->r2 = S32(ctx->r19 << (ctx->r17 & 31));
    // 0x8004D8F0: bgezl       $v0, L_8004D924
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004D8F4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004D924;
    }
    goto skip_4;
    // 0x8004D8F4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x8004D8F8: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x8004D8FC: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8004D900: lw          $v1, -0x267C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X267C);
    // 0x8004D904: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004D908: bnel        $v0, $zero, L_8004D924
    if (ctx->r2 != 0) {
        // 0x8004D90C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004D924;
    }
    goto skip_5;
    // 0x8004D90C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x8004D910: jal         0x80047B3C
    // 0x8004D914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_4;
    // 0x8004D914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8004D918: jal         0x8004F568
    // 0x8004D91C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_5;
    // 0x8004D91C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8004D920: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8004D924:
    // 0x8004D924: slti        $v0, $s1, 0x10
    ctx->r2 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x8004D928: bne         $v0, $zero, L_8004D8EC
    if (ctx->r2 != 0) {
        // 0x8004D92C: addiu       $s0, $s0, 0x118
        ctx->r16 = ADD32(ctx->r16, 0X118);
            goto L_8004D8EC;
    }
    // 0x8004D92C: addiu       $s0, $s0, 0x118
    ctx->r16 = ADD32(ctx->r16, 0X118);
    // 0x8004D930: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x8004D934: addiu       $s0, $s0, -0x2100
    ctx->r16 = ADD32(ctx->r16, -0X2100);
    // 0x8004D938: lui         $s3, 0x801E
    ctx->r19 = S32(0X801E << 16);
    // 0x8004D93C: lw          $s3, -0x781C($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X781C);
    // 0x8004D940: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_8004D944:
    // 0x8004D944: sllv        $v0, $s3, $s1
    ctx->r2 = S32(ctx->r19 << (ctx->r17 & 31));
    // 0x8004D948: bgezl       $v0, L_8004D97C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004D94C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004D97C;
    }
    goto skip_6;
    // 0x8004D94C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_6:
    // 0x8004D950: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x8004D954: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8004D958: lw          $v1, -0x267C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X267C);
    // 0x8004D95C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004D960: bnel        $v0, $zero, L_8004D97C
    if (ctx->r2 != 0) {
        // 0x8004D964: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004D97C;
    }
    goto skip_7;
    // 0x8004D964: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_7:
    // 0x8004D968: jal         0x80047B3C
    // 0x8004D96C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_6;
    // 0x8004D96C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8004D970: jal         0x8004F4F8
    // 0x8004D974: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_7;
    // 0x8004D974: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8004D978: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8004D97C:
    // 0x8004D97C: slti        $v0, $s1, 0x20
    ctx->r2 = SIGNED(ctx->r17) < 0X20 ? 1 : 0;
    // 0x8004D980: bne         $v0, $zero, L_8004D944
    if (ctx->r2 != 0) {
        // 0x8004D984: addiu       $s0, $s0, 0x118
        ctx->r16 = ADD32(ctx->r16, 0X118);
            goto L_8004D944;
    }
    // 0x8004D984: addiu       $s0, $s0, 0x118
    ctx->r16 = ADD32(ctx->r16, 0X118);
    // 0x8004D988: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x8004D98C: addiu       $s2, $s2, -0x2290
    ctx->r18 = ADD32(ctx->r18, -0X2290);
    // 0x8004D990: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8004D994: lui         $s4, 0x801C
    ctx->r20 = S32(0X801C << 16);
    // 0x8004D998: addiu       $s4, $s4, -0x3F64
    ctx->r20 = ADD32(ctx->r20, -0X3F64);
L_8004D99C:
    // 0x8004D99C: lw          $s3, 0x0($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X0);
    // 0x8004D9A0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8004D9A4:
    // 0x8004D9A4: sllv        $v0, $s3, $s0
    ctx->r2 = S32(ctx->r19 << (ctx->r16 & 31));
    // 0x8004D9A8: bgezl       $v0, L_8004D9D4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004D9AC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004D9D4;
    }
    goto skip_8;
    // 0x8004D9AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_8:
    // 0x8004D9B0: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x8004D9B4: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8004D9B8: lw          $v1, -0x267C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X267C);
    // 0x8004D9BC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004D9C0: bnel        $v0, $zero, L_8004D9D4
    if (ctx->r2 != 0) {
        // 0x8004D9C4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004D9D4;
    }
    goto skip_9;
    // 0x8004D9C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_9:
    // 0x8004D9C8: jal         0x8004F5C4
    // 0x8004D9CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_8;
    // 0x8004D9CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x8004D9D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004D9D4:
    // 0x8004D9D4: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x8004D9D8: bne         $v0, $zero, L_8004D9A4
    if (ctx->r2 != 0) {
        // 0x8004D9DC: addiu       $s2, $s2, 0x58
        ctx->r18 = ADD32(ctx->r18, 0X58);
            goto L_8004D9A4;
    }
    // 0x8004D9DC: addiu       $s2, $s2, 0x58
    ctx->r18 = ADD32(ctx->r18, 0X58);
    // 0x8004D9E0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004D9E4: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x8004D9E8: bne         $v0, $zero, L_8004D99C
    if (ctx->r2 != 0) {
        // 0x8004D9EC: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_8004D99C;
    }
    // 0x8004D9EC: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8004D9F0: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8004D9F4: addiu       $s0, $s0, 0x6B70
    ctx->r16 = ADD32(ctx->r16, 0X6B70);
    // 0x8004D9F8: lui         $s3, 0x801E
    ctx->r19 = S32(0X801E << 16);
    // 0x8004D9FC: lw          $s3, -0x72C8($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X72C8);
    // 0x8004DA00: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_8004DA04:
    // 0x8004DA04: sllv        $v0, $s3, $s1
    ctx->r2 = S32(ctx->r19 << (ctx->r17 & 31));
    // 0x8004DA08: bgezl       $v0, L_8004DA3C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004DA0C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004DA3C;
    }
    goto skip_10;
    // 0x8004DA0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_10:
    // 0x8004DA10: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x8004DA14: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8004DA18: lw          $v1, -0x267C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X267C);
    // 0x8004DA1C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004DA20: bnel        $v0, $zero, L_8004DA3C
    if (ctx->r2 != 0) {
        // 0x8004DA24: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004DA3C;
    }
    goto skip_11;
    // 0x8004DA24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_11:
    // 0x8004DA28: jal         0x80047B3C
    // 0x8004DA2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_9;
    // 0x8004DA2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8004DA30: jal         0x8004F684
    // 0x8004DA34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_10;
    // 0x8004DA34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x8004DA38: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8004DA3C:
    // 0x8004DA3C: slti        $v0, $s1, 0x20
    ctx->r2 = SIGNED(ctx->r17) < 0X20 ? 1 : 0;
    // 0x8004DA40: bne         $v0, $zero, L_8004DA04
    if (ctx->r2 != 0) {
        // 0x8004DA44: addiu       $s0, $s0, 0x5C
        ctx->r16 = ADD32(ctx->r16, 0X5C);
            goto L_8004DA04;
    }
    // 0x8004DA44: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x8004DA48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004DA4C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8004DA50: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8004DA54: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004DA58: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004DA5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004DA60: jr          $ra
    // 0x8004DA64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8004DA64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80087590_62990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
;}
RECOMP_FUNC void func_80057464_32864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80057464: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80057468: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8005746C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80057470: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80057474: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80057478: jal         0x800572DC
    // 0x8005747C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_800572DC_326DC(rdram, ctx);
        goto after_0;
    // 0x8005747C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x80057480: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x80057484: addiu       $s0, $s0, -0x4890
    ctx->r16 = ADD32(ctx->r16, -0X4890);
    // 0x80057488: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8005748C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80057490: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80057494: addu        $at, $at, $v0
    gpr jr_addend_8005749C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80057498: lw          $v0, -0x1740($at)
    ctx->r2 = ADD32(ctx->r1, -0X1740);
    // 0x8005749C: jr          $v0
    // 0x800574A0: nop

    switch (jr_addend_8005749C >> 2) {
        case 0: goto L_800574A4; break;
        case 1: goto L_800574E8; break;
        case 2: goto L_80057570; break;
        case 3: goto L_800579F4; break;
        case 4: goto L_80057D4C; break;
        case 5: goto L_80057F48; break;
        case 6: goto L_800584D8; break;
        case 7: goto L_8005861C; break;
        case 8: goto L_800586E8; break;
        default: switch_error(__func__, 0x8005749C, 0x800AE8C0);
    }
    // 0x800574A0: nop

L_800574A4:
    // 0x800574A4: jal         0x80061724
    // 0x800574A8: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_1;
    // 0x800574A8: nop

    after_1:
    // 0x800574AC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800574B0: lw          $a1, 0x28B4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X28B4);
    // 0x800574B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800574B8: jal         0x80061510
    // 0x800574BC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_2;
    // 0x800574BC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_2:
    // 0x800574C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800574C4: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800574C8: jal         0x8004B6A0
    // 0x800574CC: ori         $a1, $a1, 0x6
    ctx->r5 = ctx->r5 | 0X6;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_3;
    // 0x800574CC: ori         $a1, $a1, 0x6
    ctx->r5 = ctx->r5 | 0X6;
    after_3:
    // 0x800574D0: jal         0x8005699C
    // 0x800574D4: nop

    func_8005699C_31D9C(rdram, ctx);
        goto after_4;
    // 0x800574D4: nop

    after_4:
    // 0x800574D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800574DC: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x800574E0: j           L_80058768
    // 0x800574E4: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
        goto L_80058768;
    // 0x800574E4: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
L_800574E8:
    // 0x800574E8: jal         0x8005699C
    // 0x800574EC: nop

    func_8005699C_31D9C(rdram, ctx);
        goto after_5;
    // 0x800574EC: nop

    after_5:
    // 0x800574F0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800574F4: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x800574F8: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x800574FC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80057500: beq         $v0, $zero, L_8005753C
    if (ctx->r2 == 0) {
        // 0x80057504: andi        $a0, $v1, 0xFF
        ctx->r4 = ctx->r3 & 0XFF;
            goto L_8005753C;
    }
    // 0x80057504: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x80057508: sltiu       $v0, $a0, 0x5
    ctx->r2 = ctx->r4 < 0X5 ? 1 : 0;
    // 0x8005750C: bne         $v0, $zero, L_80057528
    if (ctx->r2 != 0) {
        // 0x80057510: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_80057528;
    }
    // 0x80057510: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x80057514: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80057518: beq         $a0, $v0, L_80057568
    if (ctx->r4 == ctx->r2) {
        // 0x8005751C: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_80057568;
    }
    // 0x8005751C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80057520: j           L_80058768
    // 0x80057524: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80058768;
    // 0x80057524: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80057528:
    // 0x80057528: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8005752C: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x80057530: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x80057534: j           L_800586E0
    // 0x80057538: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
        goto L_800586E0;
    // 0x80057538: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
L_8005753C:
    // 0x8005753C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80057540: addiu       $v1, $v1, -0x783A
    ctx->r3 = ADD32(ctx->r3, -0X783A);
    // 0x80057544: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80057548: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8005754C: beq         $v0, $zero, L_80057558
    if (ctx->r2 == 0) {
        // 0x80057550: lui         $v0, 0x700
        ctx->r2 = S32(0X700 << 16);
            goto L_80057558;
    }
    // 0x80057550: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x80057554: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_80057558:
    // 0x80057558: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8005755C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80057560: beq         $v0, $zero, L_800586E0
    if (ctx->r2 == 0) {
        // 0x80057564: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_800586E0;
    }
    // 0x80057564: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
L_80057568:
    // 0x80057568: j           L_800586E0
    // 0x8005756C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_800586E0;
    // 0x8005756C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_80057570:
    // 0x80057570: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x80057574: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80057578: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8005757C: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80057580: beq         $v0, $zero, L_800586E0
    if (ctx->r2 == 0) {
        // 0x80057584: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_800586E0;
    }
    // 0x80057584: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80057588: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005758C: addu        $at, $at, $v0
    gpr jr_addend_80057594 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80057590: lw          $v0, 0x24C0($at)
    ctx->r2 = ADD32(ctx->r1, 0X24C0);
    // 0x80057594: jr          $v0
    // 0x80057598: nop

    switch (jr_addend_80057594 >> 2) {
        case 0: goto L_8005759C; break;
        case 1: goto L_800575C0; break;
        case 2: goto L_800575D4; break;
        case 3: goto L_80057740; break;
        case 4: goto L_800578A4; break;
        case 5: goto L_8005799C; break;
        case 6: goto L_8005799C; break;
        case 7: goto L_80057AF8; break;
        default: switch_error(__func__, 0x80057594, 0x800D24C0);
    }
    // 0x80057598: nop

L_8005759C:
    // 0x8005759C: jal         0x80061724
    // 0x800575A0: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_6;
    // 0x800575A0: nop

    after_6:
    // 0x800575A4: jal         0x8004B5E8
    // 0x800575A8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_7;
    // 0x800575A8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_7:
    // 0x800575AC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800575B0: jal         0x80036A8C
    // 0x800575B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80036A8C_11E8C(rdram, ctx);
        goto after_8;
    // 0x800575B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_8:
    // 0x800575B8: j           L_800586A4
    // 0x800575BC: nop

        goto L_800586A4;
    // 0x800575BC: nop

L_800575C0:
    // 0x800575C0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800575C4: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x800575C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800575CC: j           L_8005869C
    // 0x800575D0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
        goto L_8005869C;
    // 0x800575D0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
L_800575D4:
    // 0x800575D4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800575D8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x800575DC: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x800575E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800575E4: beq         $v0, $zero, L_8005764C
    if (ctx->r2 == 0) {
        // 0x800575E8: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_8005764C;
    }
    // 0x800575E8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x800575EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800575F0: lbu         $v0, 0x77F3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X77F3);
    // 0x800575F4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x800575F8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x800575FC: beq         $v0, $v1, L_80057634
    if (ctx->r2 == ctx->r3) {
        // 0x80057600: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80057634;
    }
    // 0x80057600: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80057604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80057608: jal         0x8002A2F8
    // 0x8005760C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_9;
    // 0x8005760C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x80057610: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80057614: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80057618: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8005761C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80057620: ori         $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 | 0X4000;
    // 0x80057624: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80057628: sw          $v0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r2;
    // 0x8005762C: j           L_800586E0
    // 0x80057630: sb          $v1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r3;
        goto L_800586E0;
    // 0x80057630: sb          $v1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r3;
L_80057634:
    // 0x80057634: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x80057638: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005763C: jal         0x8002A2F8
    // 0x80057640: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_10;
    // 0x80057640: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x80057644: j           L_80058768
    // 0x80057648: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80058768;
    // 0x80057648: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8005764C:
    // 0x8005764C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80057650: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80057654: andi        $v0, $v0, 0x8008
    ctx->r2 = ctx->r2 & 0X8008;
    // 0x80057658: beq         $v0, $zero, L_80057684
    if (ctx->r2 == 0) {
        // 0x8005765C: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_80057684;
    }
    // 0x8005765C: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x80057660: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80057664: jal         0x8002A2F8
    // 0x80057668: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_11;
    // 0x80057668: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x8005766C: jal         0x80061724
    // 0x80057670: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_12;
    // 0x80057670: nop

    after_12:
    // 0x80057674: jal         0x8004B5E8
    // 0x80057678: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_13;
    // 0x80057678: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_13:
    // 0x8005767C: j           L_80057688
    // 0x80057680: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80057688;
    // 0x80057680: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80057684:
    // 0x80057684: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80057688:
    // 0x80057688: beq         $v0, $zero, L_800576A0
    if (ctx->r2 == 0) {
        // 0x8005768C: nop
    
            goto L_800576A0;
    }
    // 0x8005768C: nop

    // 0x80057690: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80057694: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x80057698: j           L_800586E0
    // 0x8005769C: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
        goto L_800586E0;
    // 0x8005769C: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_800576A0:
    // 0x800576A0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800576A4: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x800576A8: andi        $v0, $v0, 0xC00
    ctx->r2 = ctx->r2 & 0XC00;
    // 0x800576AC: beq         $v0, $zero, L_800586E0
    if (ctx->r2 == 0) {
        // 0x800576B0: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_800586E0;
    }
    // 0x800576B0: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x800576B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800576B8: jal         0x8002A2F8
    // 0x800576BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_14;
    // 0x800576BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
    // 0x800576C0: jal         0x80061724
    // 0x800576C4: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_15;
    // 0x800576C4: nop

    after_15:
    // 0x800576C8: jal         0x8004B5E8
    // 0x800576CC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_16;
    // 0x800576CC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_16:
    // 0x800576D0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800576D4: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x800576D8: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x800576DC: beq         $v0, $zero, L_8005770C
    if (ctx->r2 == 0) {
        // 0x800576E0: nop
    
            goto L_8005770C;
    }
    // 0x800576E0: nop

    // 0x800576E4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800576E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800576EC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x800576F0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x800576F4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800576F8: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800576FC: beq         $v0, $zero, L_80057734
    if (ctx->r2 == 0) {
        // 0x80057700: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80057734;
    }
    // 0x80057700: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80057704: j           L_80057734
    // 0x80057708: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_80057734;
    // 0x80057708: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8005770C:
    // 0x8005770C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80057710: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80057714: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80057718: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8005771C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80057720: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x80057724: bnel        $v0, $zero, L_80057738
    if (ctx->r2 != 0) {
        // 0x80057728: sb          $zero, 0x1($s0)
        MEM_B(0X1, ctx->r16) = 0;
            goto L_80057738;
    }
    goto skip_0;
    // 0x80057728: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    skip_0:
    // 0x8005772C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80057730: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80057734:
    // 0x80057734: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
L_80057738:
    // 0x80057738: j           L_800586E0
    // 0x8005773C: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
        goto L_800586E0;
    // 0x8005773C: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
L_80057740:
    // 0x80057740: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80057744: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80057748: beq         $v1, $v0, L_80057850
    if (ctx->r3 == ctx->r2) {
        // 0x8005774C: slti        $v0, $v1, 0x43
        ctx->r2 = SIGNED(ctx->r3) < 0X43 ? 1 : 0;
            goto L_80057850;
    }
    // 0x8005774C: slti        $v0, $v1, 0x43
    ctx->r2 = SIGNED(ctx->r3) < 0X43 ? 1 : 0;
    // 0x80057750: beq         $v0, $zero, L_80057770
    if (ctx->r2 == 0) {
        // 0x80057754: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80057770;
    }
    // 0x80057754: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80057758: beq         $v1, $v0, L_80057784
    if (ctx->r3 == ctx->r2) {
        // 0x8005775C: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_80057784;
    }
    // 0x8005775C: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80057760: beq         $v1, $v0, L_800577C0
    if (ctx->r3 == ctx->r2) {
        // 0x80057764: nop
    
            goto L_800577C0;
    }
    // 0x80057764: nop

    // 0x80057768: j           L_80057874
    // 0x8005776C: nop

        goto L_80057874;
    // 0x8005776C: nop

L_80057770:
    // 0x80057770: addiu       $v0, $zero, 0x43
    ctx->r2 = ADD32(0, 0X43);
    // 0x80057774: beq         $v1, $v0, L_80057864
    if (ctx->r3 == ctx->r2) {
        // 0x80057778: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80057864;
    }
    // 0x80057778: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005777C: j           L_80057874
    // 0x80057780: nop

        goto L_80057874;
    // 0x80057780: nop

L_80057784:
    // 0x80057784: jal         0x8004A344
    // 0x80057788: nop

    func_8004A344_25744(rdram, ctx);
        goto after_17;
    // 0x80057788: nop

    after_17:
    // 0x8005778C: bne         $v0, $zero, L_800577B0
    if (ctx->r2 != 0) {
        // 0x80057790: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800577B0;
    }
    // 0x80057790: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80057794: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057798: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005779C: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
L_800577A0:
    // 0x800577A0: jal         0x80061510
    // 0x800577A4: nop

    func_80061510_3C910(rdram, ctx);
        goto after_18;
    // 0x800577A4: nop

    after_18:
    // 0x800577A8: j           L_8005798C
    // 0x800577AC: nop

        goto L_8005798C;
    // 0x800577AC: nop

L_800577B0:
    // 0x800577B0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800577B4: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x800577B8: j           L_8005869C
    // 0x800577BC: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
        goto L_8005869C;
    // 0x800577BC: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
L_800577C0:
    // 0x800577C0: lb          $s2, 0x172($s1)
    ctx->r18 = MEM_B(ctx->r17, 0X172);
    // 0x800577C4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800577C8: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x800577CC: lbu         $v1, -0x1750($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1750);
    // 0x800577D0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800577D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800577D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800577DC: sll         $v1, $s2, 3
    ctx->r3 = S32(ctx->r18 << 3);
    // 0x800577E0: addu        $s3, $s1, $v1
    ctx->r19 = ADD32(ctx->r17, ctx->r3);
    // 0x800577E4: lb          $a0, 0x4F5($s3)
    ctx->r4 = MEM_B(ctx->r19, 0X4F5);
    // 0x800577E8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800577EC: addiu       $v1, $v1, -0x1A6C
    ctx->r3 = ADD32(ctx->r3, -0X1A6C);
    // 0x800577F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800577F4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800577F8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x800577FC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80057800: bne         $v1, $v0, L_8005781C
    if (ctx->r3 != ctx->r2) {
        // 0x80057804: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8005781C;
    }
    // 0x80057804: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80057808: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005780C: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80057810: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80057814: j           L_800577A0
    // 0x80057818: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
        goto L_800577A0;
    // 0x80057818: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
L_8005781C:
    // 0x8005781C: jal         0x8007108C
    // 0x80057820: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8007108C_4C48C(rdram, ctx);
        goto after_19;
    // 0x80057820: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_19:
    // 0x80057824: lh          $v1, 0x4FA($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4FA);
    // 0x80057828: bne         $v0, $v1, L_80057840
    if (ctx->r2 != ctx->r3) {
        // 0x8005782C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80057840;
    }
    // 0x8005782C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80057830: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057834: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80057838: j           L_800577A0
    // 0x8005783C: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
        goto L_800577A0;
    // 0x8005783C: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
L_80057840:
    // 0x80057840: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057844: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80057848: j           L_8005869C
    // 0x8005784C: addiu       $a2, $zero, 0x52
    ctx->r6 = ADD32(0, 0X52);
        goto L_8005869C;
    // 0x8005784C: addiu       $a2, $zero, 0x52
    ctx->r6 = ADD32(0, 0X52);
L_80057850:
    // 0x80057850: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057854: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80057858: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005785C: j           L_8005869C
    // 0x80057860: addiu       $a2, $zero, 0x54
    ctx->r6 = ADD32(0, 0X54);
        goto L_8005869C;
    // 0x80057860: addiu       $a2, $zero, 0x54
    ctx->r6 = ADD32(0, 0X54);
L_80057864:
    // 0x80057864: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057868: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005786C: j           L_8005869C
    // 0x80057870: addiu       $a2, $zero, 0x56
    ctx->r6 = ADD32(0, 0X56);
        goto L_8005869C;
    // 0x80057870: addiu       $a2, $zero, 0x56
    ctx->r6 = ADD32(0, 0X56);
L_80057874:
    // 0x80057874: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80057878: sltiu       $v0, $v0, 0x58
    ctx->r2 = ctx->r2 < 0X58 ? 1 : 0;
    // 0x8005787C: beq         $v0, $zero, L_80057894
    if (ctx->r2 == 0) {
        // 0x80057880: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80057894;
    }
    // 0x80057880: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80057884: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057888: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005788C: j           L_800577A0
    // 0x80057890: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
        goto L_800577A0;
    // 0x80057890: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
L_80057894:
    // 0x80057894: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057898: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005789C: j           L_800577A0
    // 0x800578A0: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
        goto L_800577A0;
    // 0x800578A0: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
L_800578A4:
    // 0x800578A4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800578A8: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x800578AC: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x800578B0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800578B4: beq         $v0, $zero, L_800586E0
    if (ctx->r2 == 0) {
        // 0x800578B8: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_800586E0;
    }
    // 0x800578B8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x800578BC: bne         $v0, $zero, L_800586A4
    if (ctx->r2 != 0) {
        // 0x800578C0: addiu       $v0, $zero, 0x42
        ctx->r2 = ADD32(0, 0X42);
            goto L_800586A4;
    }
    // 0x800578C0: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x800578C4: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x800578C8: beq         $v1, $v0, L_80057948
    if (ctx->r3 == ctx->r2) {
        // 0x800578CC: slti        $v0, $v1, 0x43
        ctx->r2 = SIGNED(ctx->r3) < 0X43 ? 1 : 0;
            goto L_80057948;
    }
    // 0x800578CC: slti        $v0, $v1, 0x43
    ctx->r2 = SIGNED(ctx->r3) < 0X43 ? 1 : 0;
    // 0x800578D0: beq         $v0, $zero, L_800578F0
    if (ctx->r2 == 0) {
        // 0x800578D4: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_800578F0;
    }
    // 0x800578D4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x800578D8: beq         $v1, $v0, L_80057904
    if (ctx->r3 == ctx->r2) {
        // 0x800578DC: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_80057904;
    }
    // 0x800578DC: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x800578E0: beq         $v1, $v0, L_80057928
    if (ctx->r3 == ctx->r2) {
        // 0x800578E4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80057928;
    }
    // 0x800578E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800578E8: j           L_8005798C
    // 0x800578EC: nop

        goto L_8005798C;
    // 0x800578EC: nop

L_800578F0:
    // 0x800578F0: addiu       $v0, $zero, 0x43
    ctx->r2 = ADD32(0, 0X43);
    // 0x800578F4: beq         $v1, $v0, L_8005796C
    if (ctx->r3 == ctx->r2) {
        // 0x800578F8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8005796C;
    }
    // 0x800578F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800578FC: j           L_8005798C
    // 0x80057900: nop

        goto L_8005798C;
    // 0x80057900: nop

L_80057904:
    // 0x80057904: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057908: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005790C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80057910: jal         0x80061510
    // 0x80057914: addiu       $a2, $zero, 0x51
    ctx->r6 = ADD32(0, 0X51);
    func_80061510_3C910(rdram, ctx);
        goto after_20;
    // 0x80057914: addiu       $a2, $zero, 0x51
    ctx->r6 = ADD32(0, 0X51);
    after_20:
    // 0x80057918: jal         0x8004A3B0
    // 0x8005791C: nop

    func_8004A3B0_257B0(rdram, ctx);
        goto after_21;
    // 0x8005791C: nop

    after_21:
    // 0x80057920: j           L_80057988
    // 0x80057924: addiu       $v0, $zero, 0x540
    ctx->r2 = ADD32(0, 0X540);
        goto L_80057988;
    // 0x80057924: addiu       $v0, $zero, 0x540
    ctx->r2 = ADD32(0, 0X540);
L_80057928:
    // 0x80057928: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005792C: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80057930: jal         0x80061510
    // 0x80057934: addiu       $a2, $zero, 0x53
    ctx->r6 = ADD32(0, 0X53);
    func_80061510_3C910(rdram, ctx);
        goto after_22;
    // 0x80057934: addiu       $a2, $zero, 0x53
    ctx->r6 = ADD32(0, 0X53);
    after_22:
    // 0x80057938: jal         0x80071020
    // 0x8005793C: nop

    func_80071020_4C420(rdram, ctx);
        goto after_23;
    // 0x8005793C: nop

    after_23:
    // 0x80057940: j           L_80057988
    // 0x80057944: addiu       $v0, $zero, 0x541
    ctx->r2 = ADD32(0, 0X541);
        goto L_80057988;
    // 0x80057944: addiu       $v0, $zero, 0x541
    ctx->r2 = ADD32(0, 0X541);
L_80057948:
    // 0x80057948: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005794C: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80057950: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80057954: jal         0x80061510
    // 0x80057958: addiu       $a2, $zero, 0x55
    ctx->r6 = ADD32(0, 0X55);
    func_80061510_3C910(rdram, ctx);
        goto after_24;
    // 0x80057958: addiu       $a2, $zero, 0x55
    ctx->r6 = ADD32(0, 0X55);
    after_24:
    // 0x8005795C: jal         0x8004B58C
    // 0x80057960: addiu       $a0, $zero, 0x708
    ctx->r4 = ADD32(0, 0X708);
    func_8004B58C_2698C(rdram, ctx);
        goto after_25;
    // 0x80057960: addiu       $a0, $zero, 0x708
    ctx->r4 = ADD32(0, 0X708);
    after_25:
    // 0x80057964: j           L_80057988
    // 0x80057968: addiu       $v0, $zero, 0x542
    ctx->r2 = ADD32(0, 0X542);
        goto L_80057988;
    // 0x80057968: addiu       $v0, $zero, 0x542
    ctx->r2 = ADD32(0, 0X542);
L_8005796C:
    // 0x8005796C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057970: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80057974: jal         0x80061510
    // 0x80057978: addiu       $a2, $zero, 0x57
    ctx->r6 = ADD32(0, 0X57);
    func_80061510_3C910(rdram, ctx);
        goto after_26;
    // 0x80057978: addiu       $a2, $zero, 0x57
    ctx->r6 = ADD32(0, 0X57);
    after_26:
    // 0x8005797C: jal         0x8004B580
    // 0x80057980: addiu       $a0, $zero, 0x384
    ctx->r4 = ADD32(0, 0X384);
    func_8004B580_26980(rdram, ctx);
        goto after_27;
    // 0x80057980: addiu       $a0, $zero, 0x384
    ctx->r4 = ADD32(0, 0X384);
    after_27:
    // 0x80057984: addiu       $v0, $zero, 0x543
    ctx->r2 = ADD32(0, 0X543);
L_80057988:
    // 0x80057988: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
L_8005798C:
    // 0x8005798C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80057990: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80057994: j           L_800586E0
    // 0x80057998: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
        goto L_800586E0;
    // 0x80057998: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8005799C:
    // 0x8005799C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800579A0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x800579A4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x800579A8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800579AC: bne         $v0, $zero, L_80058768
    if (ctx->r2 != 0) {
        // 0x800579B0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80058768;
    }
    // 0x800579B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800579B4: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x800579B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x800579BC: bne         $v1, $v0, L_800579CC
    if (ctx->r3 != ctx->r2) {
        // 0x800579C0: nop
    
            goto L_800579CC;
    }
    // 0x800579C0: nop

    // 0x800579C4: jal         0x80060590
    // 0x800579C8: lhu         $a0, 0xC($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC);
    func_80060590_3B990(rdram, ctx);
        goto after_28;
    // 0x800579C8: lhu         $a0, 0xC($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC);
    after_28:
L_800579CC:
    // 0x800579CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800579D0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x800579D4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x800579D8: sb          $v1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r3;
    // 0x800579DC: addiu       $v1, $zero, -0x4001
    ctx->r3 = ADD32(0, -0X4001);
    // 0x800579E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800579E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800579E8: sw          $v0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r2;
    // 0x800579EC: j           L_80058768
    // 0x800579F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80058768;
    // 0x800579F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800579F4:
    // 0x800579F4: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x800579F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800579FC: beq         $v1, $v0, L_80057A5C
    if (ctx->r3 == ctx->r2) {
        // 0x80057A00: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80057A5C;
    }
    // 0x80057A00: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80057A04: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80057A08: beql        $v0, $zero, L_80057A20
    if (ctx->r2 == 0) {
        // 0x80057A0C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80057A20;
    }
    goto skip_1;
    // 0x80057A0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x80057A10: beq         $v1, $zero, L_80057A38
    if (ctx->r3 == 0) {
        // 0x80057A14: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80057A38;
    }
    // 0x80057A14: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80057A18: j           L_80058768
    // 0x80057A1C: nop

        goto L_80058768;
    // 0x80057A1C: nop

L_80057A20:
    // 0x80057A20: beq         $v1, $v0, L_80057A88
    if (ctx->r3 == ctx->r2) {
        // 0x80057A24: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80057A88;
    }
    // 0x80057A24: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80057A28: beq         $v1, $v0, L_80057B6C
    if (ctx->r3 == ctx->r2) {
        // 0x80057A2C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80057B6C;
    }
    // 0x80057A2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80057A30: j           L_80058768
    // 0x80057A34: nop

        goto L_80058768;
    // 0x80057A34: nop

L_80057A38:
    // 0x80057A38: jal         0x80061724
    // 0x80057A3C: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_29;
    // 0x80057A3C: nop

    after_29:
    // 0x80057A40: jal         0x8004B5E8
    // 0x80057A44: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_30;
    // 0x80057A44: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_30:
    // 0x80057A48: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80057A4C: jal         0x80036A8C
    // 0x80057A50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80036A8C_11E8C(rdram, ctx);
        goto after_31;
    // 0x80057A50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_31:
    // 0x80057A54: j           L_800586A4
    // 0x80057A58: nop

        goto L_800586A4;
    // 0x80057A58: nop

L_80057A5C:
    // 0x80057A5C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057A60: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80057A64: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80057A68: jal         0x80061510
    // 0x80057A6C: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    func_80061510_3C910(rdram, ctx);
        goto after_32;
    // 0x80057A6C: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_32:
    // 0x80057A70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80057A74: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80057A78: jal         0x8004B6A0
    // 0x80057A7C: ori         $a1, $a1, 0x2
    ctx->r5 = ctx->r5 | 0X2;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_33;
    // 0x80057A7C: ori         $a1, $a1, 0x2
    ctx->r5 = ctx->r5 | 0X2;
    after_33:
    // 0x80057A80: j           L_800586A4
    // 0x80057A84: nop

        goto L_800586A4;
    // 0x80057A84: nop

L_80057A88:
    // 0x80057A88: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80057A8C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80057A90: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x80057A94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80057A98: beq         $v0, $zero, L_80057AB4
    if (ctx->r2 == 0) {
        // 0x80057A9C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80057AB4;
    }
    // 0x80057A9C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80057AA0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80057AA4: lbu         $v1, -0x72EF($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X72EF);
    // 0x80057AA8: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x80057AAC: j           L_80057B6C
    // 0x80057AB0: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
        goto L_80057B6C;
    // 0x80057AB0: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
L_80057AB4:
    // 0x80057AB4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80057AB8: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80057ABC: andi        $v0, $v0, 0x8008
    ctx->r2 = ctx->r2 & 0X8008;
    // 0x80057AC0: beq         $v0, $zero, L_80057AEC
    if (ctx->r2 == 0) {
        // 0x80057AC4: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_80057AEC;
    }
    // 0x80057AC4: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x80057AC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80057ACC: jal         0x8002A2F8
    // 0x80057AD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_34;
    // 0x80057AD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_34:
    // 0x80057AD4: jal         0x80061724
    // 0x80057AD8: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_35;
    // 0x80057AD8: nop

    after_35:
    // 0x80057ADC: jal         0x8004B5E8
    // 0x80057AE0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_36;
    // 0x80057AE0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_36:
    // 0x80057AE4: j           L_80057AF0
    // 0x80057AE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80057AF0;
    // 0x80057AE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80057AEC:
    // 0x80057AEC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80057AF0:
    // 0x80057AF0: beq         $v0, $zero, L_80057B00
    if (ctx->r2 == 0) {
        // 0x80057AF4: nop
    
            goto L_80057B00;
    }
    // 0x80057AF4: nop

L_80057AF8:
    // 0x80057AF8: j           L_800586E0
    // 0x80057AFC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
        goto L_800586E0;
    // 0x80057AFC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_80057B00:
    // 0x80057B00: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80057B04: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80057B08: andi        $v0, $v0, 0xC00
    ctx->r2 = ctx->r2 & 0XC00;
    // 0x80057B0C: beq         $v0, $zero, L_800586E0
    if (ctx->r2 == 0) {
        // 0x80057B10: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_800586E0;
    }
    // 0x80057B10: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80057B14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80057B18: jal         0x8002A2F8
    // 0x80057B1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_37;
    // 0x80057B1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_37:
    // 0x80057B20: jal         0x80061724
    // 0x80057B24: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_38;
    // 0x80057B24: nop

    after_38:
    // 0x80057B28: jal         0x8004B5E8
    // 0x80057B2C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_39;
    // 0x80057B2C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_39:
    // 0x80057B30: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80057B34: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80057B38: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x80057B3C: beq         $v0, $zero, L_8005770C
    if (ctx->r2 == 0) {
        // 0x80057B40: nop
    
            goto L_8005770C;
    }
    // 0x80057B40: nop

    // 0x80057B44: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80057B48: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80057B4C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80057B50: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80057B54: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80057B58: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80057B5C: beq         $v0, $zero, L_80057734
    if (ctx->r2 == 0) {
        // 0x80057B60: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80057734;
    }
    // 0x80057B60: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80057B64: j           L_80057734
    // 0x80057B68: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_80057734;
    // 0x80057B68: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80057B6C:
    // 0x80057B6C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80057B70: sltiu       $v0, $v1, 0x12
    ctx->r2 = ctx->r3 < 0X12 ? 1 : 0;
    // 0x80057B74: beq         $v0, $zero, L_800586E0
    if (ctx->r2 == 0) {
        // 0x80057B78: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_800586E0;
    }
    // 0x80057B78: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80057B7C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80057B80: addu        $at, $at, $v0
    gpr jr_addend_80057B88 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80057B84: lw          $v0, 0x24E0($at)
    ctx->r2 = ADD32(ctx->r1, 0X24E0);
    // 0x80057B88: jr          $v0
    // 0x80057B8C: nop

    switch (jr_addend_80057B88 >> 2) {
        case 0: goto L_80057B90; break;
        case 1: goto L_80057BA0; break;
        case 2: goto L_80057BA0; break;
        case 3: goto L_80057BA0; break;
        case 4: goto L_80057BA0; break;
        case 5: goto L_80057BB0; break;
        case 6: goto L_80057C20; break;
        case 7: goto L_80057C20; break;
        case 8: goto L_80057C20; break;
        case 9: goto L_80057C58; break;
        case 10: goto L_80057C58; break;
        case 11: goto L_80057C58; break;
        case 12: goto L_80057C64; break;
        case 13: goto L_80057C58; break;
        case 14: goto L_80057C74; break;
        case 15: goto L_80057C74; break;
        case 16: goto L_80057C74; break;
        case 17: goto L_80057C74; break;
        default: switch_error(__func__, 0x80057B88, 0x800D24E0);
    }
    // 0x80057B8C: nop

L_80057B90:
    // 0x80057B90: jal         0x80055150
    // 0x80057B94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80055150_30550(rdram, ctx);
        goto after_40;
    // 0x80057B94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_40:
    // 0x80057B98: j           L_80058768
    // 0x80057B9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80058768;
    // 0x80057B9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80057BA0:
    // 0x80057BA0: jal         0x80055368
    // 0x80057BA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80055368_30768(rdram, ctx);
        goto after_41;
    // 0x80057BA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_41:
    // 0x80057BA8: j           L_80058768
    // 0x80057BAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80058768;
    // 0x80057BAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80057BB0:
    // 0x80057BB0: lb          $v1, 0x2($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2);
    // 0x80057BB4: addiu       $v0, $zero, 0x45
    ctx->r2 = ADD32(0, 0X45);
    // 0x80057BB8: beq         $v1, $zero, L_80057BD4
    if (ctx->r3 == 0) {
        // 0x80057BBC: sb          $v0, 0x5($s0)
        MEM_B(0X5, ctx->r16) = ctx->r2;
            goto L_80057BD4;
    }
    // 0x80057BBC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80057BC0:
    // 0x80057BC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80057BC4:
    // 0x80057BC4: beq         $v1, $v0, L_80057D28
    if (ctx->r3 == ctx->r2) {
        // 0x80057BC8: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80057D28;
    }
    // 0x80057BC8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80057BCC: j           L_80058768
    // 0x80057BD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80058768;
    // 0x80057BD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80057BD4:
    // 0x80057BD4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80057BD8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80057BDC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80057BE0: lbu         $a0, -0x1764($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1764);
    // 0x80057BE4: jal         0x8006033C
    // 0x80057BE8: addiu       $a0, $a0, 0x520
    ctx->r4 = ADD32(ctx->r4, 0X520);
    func_8006033C_3B73C(rdram, ctx);
        goto after_42;
    // 0x80057BE8: addiu       $a0, $a0, 0x520
    ctx->r4 = ADD32(ctx->r4, 0X520);
    after_42:
    // 0x80057BEC: beq         $v0, $zero, L_80057D0C
    if (ctx->r2 == 0) {
        // 0x80057BF0: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_80057D0C;
    }
    // 0x80057BF0: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x80057BF4: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
L_80057BF8:
    // 0x80057BF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80057BFC: jal         0x8002A2F8
    // 0x80057C00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_43;
    // 0x80057C00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_43:
    // 0x80057C04: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057C08: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80057C0C: lbu         $a2, 0x5($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X5);
    // 0x80057C10: jal         0x80061510
    // 0x80057C14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061510_3C910(rdram, ctx);
        goto after_44;
    // 0x80057C14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_44:
    // 0x80057C18: j           L_80057D18
    // 0x80057C1C: nop

        goto L_80057D18;
    // 0x80057C1C: nop

L_80057C20:
    // 0x80057C20: lb          $v1, 0x2($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2);
    // 0x80057C24: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
L_80057C28:
    // 0x80057C28: bne         $v1, $zero, L_80057BC0
    if (ctx->r3 != 0) {
        // 0x80057C2C: sb          $v0, 0x5($s0)
        MEM_B(0X5, ctx->r16) = ctx->r2;
            goto L_80057BC0;
    }
    // 0x80057C2C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x80057C30: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80057C34: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80057C38: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80057C3C: lbu         $a0, -0x1764($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1764);
    // 0x80057C40: jal         0x8006033C
    // 0x80057C44: addiu       $a0, $a0, 0x520
    ctx->r4 = ADD32(ctx->r4, 0X520);
    func_8006033C_3B73C(rdram, ctx);
        goto after_45;
    // 0x80057C44: addiu       $a0, $a0, 0x520
    ctx->r4 = ADD32(ctx->r4, 0X520);
    after_45:
    // 0x80057C48: bne         $v0, $zero, L_80057BF8
    if (ctx->r2 != 0) {
        // 0x80057C4C: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80057BF8;
    }
    // 0x80057C4C: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80057C50: j           L_80057D0C
    // 0x80057C54: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
        goto L_80057D0C;
    // 0x80057C54: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
L_80057C58:
    // 0x80057C58: lb          $v1, 0x2($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2);
    // 0x80057C5C: j           L_80057C28
    // 0x80057C60: addiu       $v0, $zero, 0x47
    ctx->r2 = ADD32(0, 0X47);
        goto L_80057C28;
    // 0x80057C60: addiu       $v0, $zero, 0x47
    ctx->r2 = ADD32(0, 0X47);
L_80057C64:
    // 0x80057C64: jal         0x800557D0
    // 0x80057C68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800557D0_30BD0(rdram, ctx);
        goto after_46;
    // 0x80057C68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_46:
    // 0x80057C6C: j           L_80058768
    // 0x80057C70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80058768;
    // 0x80057C70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80057C74:
    // 0x80057C74: lb          $v1, 0x2($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2);
    // 0x80057C78: bne         $v1, $zero, L_80057BC4
    if (ctx->r3 != 0) {
        // 0x80057C7C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80057BC4;
    }
    // 0x80057C7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80057C80: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80057C84: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80057C88: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80057C8C: lbu         $a0, -0x1764($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1764);
    // 0x80057C90: jal         0x8006033C
    // 0x80057C94: addiu       $a0, $a0, 0x520
    ctx->r4 = ADD32(ctx->r4, 0X520);
    func_8006033C_3B73C(rdram, ctx);
        goto after_47;
    // 0x80057C94: addiu       $a0, $a0, 0x520
    ctx->r4 = ADD32(ctx->r4, 0X520);
    after_47:
    // 0x80057C98: bnel        $v0, $zero, L_80057CE0
    if (ctx->r2 != 0) {
        // 0x80057C9C: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80057CE0;
    }
    goto skip_2;
    // 0x80057C9C: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    skip_2:
    // 0x80057CA0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80057CA4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80057CA8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80057CAC: lbu         $a0, -0x1764($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1764);
    // 0x80057CB0: jal         0x8006033C
    // 0x80057CB4: addiu       $a0, $a0, 0x521
    ctx->r4 = ADD32(ctx->r4, 0X521);
    func_8006033C_3B73C(rdram, ctx);
        goto after_48;
    // 0x80057CB4: addiu       $a0, $a0, 0x521
    ctx->r4 = ADD32(ctx->r4, 0X521);
    after_48:
    // 0x80057CB8: bnel        $v0, $zero, L_80057CE0
    if (ctx->r2 != 0) {
        // 0x80057CBC: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80057CE0;
    }
    goto skip_3;
    // 0x80057CBC: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    skip_3:
    // 0x80057CC0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80057CC4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80057CC8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80057CCC: lbu         $a0, -0x1764($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1764);
    // 0x80057CD0: jal         0x8006033C
    // 0x80057CD4: addiu       $a0, $a0, 0x522
    ctx->r4 = ADD32(ctx->r4, 0X522);
    func_8006033C_3B73C(rdram, ctx);
        goto after_49;
    // 0x80057CD4: addiu       $a0, $a0, 0x522
    ctx->r4 = ADD32(ctx->r4, 0X522);
    after_49:
    // 0x80057CD8: beq         $v0, $zero, L_80057D08
    if (ctx->r2 == 0) {
        // 0x80057CDC: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80057D08;
    }
    // 0x80057CDC: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
L_80057CE0:
    // 0x80057CE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80057CE4: jal         0x8002A2F8
    // 0x80057CE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_50;
    // 0x80057CE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_50:
    // 0x80057CEC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057CF0: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80057CF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80057CF8: jal         0x80061510
    // 0x80057CFC: addiu       $a2, $zero, 0x47
    ctx->r6 = ADD32(0, 0X47);
    func_80061510_3C910(rdram, ctx);
        goto after_51;
    // 0x80057CFC: addiu       $a2, $zero, 0x47
    ctx->r6 = ADD32(0, 0X47);
    after_51:
    // 0x80057D00: j           L_80057D18
    // 0x80057D04: nop

        goto L_80057D18;
    // 0x80057D04: nop

L_80057D08:
    // 0x80057D08: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
L_80057D0C:
    // 0x80057D0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80057D10: jal         0x8002A2F8
    // 0x80057D14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_52;
    // 0x80057D14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_52:
L_80057D18:
    // 0x80057D18: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80057D1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80057D20: j           L_800586E0
    // 0x80057D24: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
        goto L_800586E0;
    // 0x80057D24: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_80057D28:
    // 0x80057D28: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80057D2C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80057D30: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80057D34: bne         $v0, $zero, L_80058768
    if (ctx->r2 != 0) {
        // 0x80057D38: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80058768;
    }
    // 0x80057D38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80057D3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80057D40: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x80057D44: j           L_800586E0
    // 0x80057D48: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
        goto L_800586E0;
    // 0x80057D48: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
L_80057D4C:
    // 0x80057D4C: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x80057D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80057D54: beq         $v1, $v0, L_80057DB4
    if (ctx->r3 == ctx->r2) {
        // 0x80057D58: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80057DB4;
    }
    // 0x80057D58: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80057D5C: beql        $v0, $zero, L_80057D74
    if (ctx->r2 == 0) {
        // 0x80057D60: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80057D74;
    }
    goto skip_4;
    // 0x80057D60: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_4:
    // 0x80057D64: beq         $v1, $zero, L_80057D90
    if (ctx->r3 == 0) {
        // 0x80057D68: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80057D90;
    }
    // 0x80057D68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80057D6C: j           L_80058768
    // 0x80057D70: nop

        goto L_80058768;
    // 0x80057D70: nop

L_80057D74:
    // 0x80057D74: beq         $v1, $v0, L_80057DFC
    if (ctx->r3 == ctx->r2) {
        // 0x80057D78: lui         $v0, 0x4800
        ctx->r2 = S32(0X4800 << 16);
            goto L_80057DFC;
    }
    // 0x80057D78: lui         $v0, 0x4800
    ctx->r2 = S32(0X4800 << 16);
    // 0x80057D7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80057D80:
    // 0x80057D80: beql        $v1, $v0, L_800586E0
    if (ctx->r3 == ctx->r2) {
        // 0x80057D84: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_800586E0;
    }
    goto skip_5;
    // 0x80057D84: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    skip_5:
    // 0x80057D88: j           L_80058768
    // 0x80057D8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80058768;
    // 0x80057D8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80057D90:
    // 0x80057D90: jal         0x80061724
    // 0x80057D94: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_53;
    // 0x80057D94: nop

    after_53:
    // 0x80057D98: jal         0x8004B5E8
    // 0x80057D9C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_54;
    // 0x80057D9C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_54:
    // 0x80057DA0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80057DA4: jal         0x80036A8C
    // 0x80057DA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80036A8C_11E8C(rdram, ctx);
        goto after_55;
    // 0x80057DA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_55:
    // 0x80057DAC: j           L_800586A4
    // 0x80057DB0: nop

        goto L_800586A4;
    // 0x80057DB0: nop

L_80057DB4:
    // 0x80057DB4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057DB8: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80057DBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80057DC0: jal         0x80061510
    // 0x80057DC4: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    func_80061510_3C910(rdram, ctx);
        goto after_56;
    // 0x80057DC4: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    after_56:
    // 0x80057DC8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80057DCC: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80057DD0: jal         0x8004B6A0
    // 0x80057DD4: ori         $a1, $a1, 0x7
    ctx->r5 = ctx->r5 | 0X7;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_57;
    // 0x80057DD4: ori         $a1, $a1, 0x7
    ctx->r5 = ctx->r5 | 0X7;
    after_57:
    // 0x80057DD8: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80057DDC: jal         0x80056608
    // 0x80057DE0: addiu       $a0, $a0, -0x4890
    ctx->r4 = ADD32(ctx->r4, -0X4890);
    func_80056608_31A08(rdram, ctx);
        goto after_58;
    // 0x80057DE0: addiu       $a0, $a0, -0x4890
    ctx->r4 = ADD32(ctx->r4, -0X4890);
    after_58:
    // 0x80057DE4: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80057DE8: addiu       $a0, $a0, -0x4890
    ctx->r4 = ADD32(ctx->r4, -0X4890);
    // 0x80057DEC: jal         0x80056114
    // 0x80057DF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80056114_31514(rdram, ctx);
        goto after_59;
    // 0x80057DF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_59:
    // 0x80057DF4: j           L_800586A4
    // 0x80057DF8: nop

        goto L_800586A4;
    // 0x80057DF8: nop

L_80057DFC:
    // 0x80057DFC: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x80057E00: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80057E04: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80057E08: lui         $a0, 0x4800
    ctx->r4 = S32(0X4800 << 16);
    // 0x80057E0C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80057E10: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80057E14: bne         $v1, $a0, L_80057E34
    if (ctx->r3 != ctx->r4) {
        // 0x80057E18: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80057E34;
    }
    // 0x80057E18: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80057E1C: jal         0x80061724
    // 0x80057E20: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_60;
    // 0x80057E20: nop

    after_60:
    // 0x80057E24: jal         0x8004B5E8
    // 0x80057E28: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_61;
    // 0x80057E28: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_61:
    // 0x80057E2C: j           L_800586A4
    // 0x80057E30: nop

        goto L_800586A4;
    // 0x80057E30: nop

L_80057E34:
    // 0x80057E34: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80057E38: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80057E3C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80057E40: bne         $v0, $zero, L_80057EC0
    if (ctx->r2 != 0) {
        // 0x80057E44: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_80057EC0;
    }
    // 0x80057E44: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80057E48: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80057E4C: lw          $v1, 0x77F0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X77F0);
    // 0x80057E50: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80057E54: bne         $v0, $zero, L_80057E60
    if (ctx->r2 != 0) {
        // 0x80057E58: lui         $v0, 0x4
        ctx->r2 = S32(0X4 << 16);
            goto L_80057E60;
    }
    // 0x80057E58: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80057E5C: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
L_80057E60:
    // 0x80057E60: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80057E64: beq         $v0, $zero, L_80057EC0
    if (ctx->r2 == 0) {
        // 0x80057E68: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80057EC0;
    }
    // 0x80057E68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80057E6C: lbu         $v1, 0x12($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X12);
    // 0x80057E70: lbu         $a0, 0x15($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X15);
    // 0x80057E74: lbu         $a1, 0x1A($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1A);
    // 0x80057E78: lbu         $a2, 0x1D($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1D);
    // 0x80057E7C: lbu         $a3, 0x22($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X22);
    // 0x80057E80: lbu         $t0, 0x25($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X25);
    // 0x80057E84: lbu         $t1, 0x2A($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2A);
    // 0x80057E88: lbu         $t2, 0x2D($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2D);
    // 0x80057E8C: lbu         $t3, 0x32($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X32);
    // 0x80057E90: lbu         $t4, 0x35($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X35);
    // 0x80057E94: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x80057E98: sb          $v1, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r3;
    // 0x80057E9C: sb          $a0, 0x13($s0)
    MEM_B(0X13, ctx->r16) = ctx->r4;
    // 0x80057EA0: sb          $a1, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r5;
    // 0x80057EA4: sb          $a2, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = ctx->r6;
    // 0x80057EA8: sb          $a3, 0x20($s0)
    MEM_B(0X20, ctx->r16) = ctx->r7;
    // 0x80057EAC: sb          $t0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r8;
    // 0x80057EB0: sb          $t1, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r9;
    // 0x80057EB4: sb          $t2, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = ctx->r10;
    // 0x80057EB8: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    // 0x80057EBC: sb          $t4, 0x33($s0)
    MEM_B(0X33, ctx->r16) = ctx->r12;
L_80057EC0:
    // 0x80057EC0: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80057EC4: jal         0x80056608
    // 0x80057EC8: addiu       $a0, $a0, -0x4890
    ctx->r4 = ADD32(ctx->r4, -0X4890);
    func_80056608_31A08(rdram, ctx);
        goto after_62;
    // 0x80057EC8: addiu       $a0, $a0, -0x4890
    ctx->r4 = ADD32(ctx->r4, -0X4890);
    after_62:
    // 0x80057ECC: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80057ED0: addiu       $a0, $a0, -0x4890
    ctx->r4 = ADD32(ctx->r4, -0X4890);
    // 0x80057ED4: jal         0x80056114
    // 0x80057ED8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80056114_31514(rdram, ctx);
        goto after_63;
    // 0x80057ED8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_63:
    // 0x80057EDC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80057EE0: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80057EE4: andi        $v0, $v0, 0xC00
    ctx->r2 = ctx->r2 & 0XC00;
    // 0x80057EE8: beq         $v0, $zero, L_800586E0
    if (ctx->r2 == 0) {
        // 0x80057EEC: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_800586E0;
    }
    // 0x80057EEC: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80057EF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80057EF4: jal         0x8002A2F8
    // 0x80057EF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_64;
    // 0x80057EF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_64:
    // 0x80057EFC: jal         0x80061724
    // 0x80057F00: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_65;
    // 0x80057F00: nop

    after_65:
    // 0x80057F04: jal         0x8004B5E8
    // 0x80057F08: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_66;
    // 0x80057F08: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_66:
    // 0x80057F0C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80057F10: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80057F14: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x80057F18: beq         $v0, $zero, L_8005770C
    if (ctx->r2 == 0) {
        // 0x80057F1C: nop
    
            goto L_8005770C;
    }
    // 0x80057F1C: nop

    // 0x80057F20: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80057F24: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80057F28: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80057F2C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80057F30: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80057F34: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80057F38: beq         $v0, $zero, L_80057734
    if (ctx->r2 == 0) {
        // 0x80057F3C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80057734;
    }
    // 0x80057F3C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80057F40: j           L_80057734
    // 0x80057F44: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_80057734;
    // 0x80057F44: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80057F48:
    // 0x80057F48: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x80057F4C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80057F50: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80057F54: lui         $s3, 0x801E
    ctx->r19 = S32(0X801E << 16);
    // 0x80057F58: lhu         $s3, -0x783A($s3)
    ctx->r19 = MEM_HU(ctx->r19, -0X783A);
    // 0x80057F5C: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80057F60: beq         $v0, $zero, L_800586E0
    if (ctx->r2 == 0) {
        // 0x80057F64: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_800586E0;
    }
    // 0x80057F64: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80057F68: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80057F6C: addu        $at, $at, $v0
    gpr jr_addend_80057F74 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80057F70: lw          $v0, 0x2528($at)
    ctx->r2 = ADD32(ctx->r1, 0X2528);
    // 0x80057F74: jr          $v0
    // 0x80057F78: nop

    switch (jr_addend_80057F74 >> 2) {
        case 0: goto L_80057F7C; break;
        case 1: goto L_80057FA4; break;
        case 2: goto L_8005806C; break;
        case 3: goto L_80058218; break;
        case 4: goto L_80058480; break;
        case 5: goto L_800584A0; break;
        case 6: goto L_80057AF8; break;
        default: switch_error(__func__, 0x80057F74, 0x800D2528);
    }
    // 0x80057F78: nop

L_80057F7C:
    // 0x80057F7C: jal         0x80061724
    // 0x80057F80: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_67;
    // 0x80057F80: nop

    after_67:
    // 0x80057F84: jal         0x8004B5E8
    // 0x80057F88: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_68;
    // 0x80057F88: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_68:
    // 0x80057F8C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80057F90: jal         0x80036A8C
    // 0x80057F94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80036A8C_11E8C(rdram, ctx);
        goto after_69;
    // 0x80057F94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_69:
    // 0x80057F98: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80057F9C: j           L_800586A8
    // 0x80057FA0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
        goto L_800586A8;
    // 0x80057FA0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
L_80057FA4:
    // 0x80057FA4: lb          $v0, 0x170($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X170);
    // 0x80057FA8: beq         $v0, $zero, L_80057FC0
    if (ctx->r2 == 0) {
        // 0x80057FAC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80057FC0;
    }
    // 0x80057FAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80057FB0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057FB4: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80057FB8: j           L_80057FCC
    // 0x80057FBC: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
        goto L_80057FCC;
    // 0x80057FBC: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
L_80057FC0:
    // 0x80057FC0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057FC4: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80057FC8: addiu       $a2, $zero, 0x5D
    ctx->r6 = ADD32(0, 0X5D);
L_80057FCC:
    // 0x80057FCC: jal         0x80061510
    // 0x80057FD0: nop

    func_80061510_3C910(rdram, ctx);
        goto after_70;
    // 0x80057FD0: nop

    after_70:
    // 0x80057FD4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80057FD8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80057FDC: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x80057FE0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80057FE4: bne         $v0, $zero, L_8005805C
    if (ctx->r2 != 0) {
        // 0x80057FE8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8005805C;
    }
    // 0x80057FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80057FEC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80057FF0: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80057FF4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80057FF8: jal         0x80061510
    // 0x80057FFC: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    func_80061510_3C910(rdram, ctx);
        goto after_71;
    // 0x80057FFC: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    after_71:
    // 0x80058000: lb          $v0, 0x172($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X172);
    // 0x80058004: bne         $v0, $zero, L_80058020
    if (ctx->r2 != 0) {
        // 0x80058008: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80058020;
    }
    // 0x80058008: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005800C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80058010: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80058014: jal         0x8004B6A0
    // 0x80058018: ori         $a1, $a1, 0x1C
    ctx->r5 = ctx->r5 | 0X1C;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_72;
    // 0x80058018: ori         $a1, $a1, 0x1C
    ctx->r5 = ctx->r5 | 0X1C;
    after_72:
    // 0x8005801C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80058020:
    // 0x80058020: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80058024: jal         0x8004B6A0
    // 0x80058028: ori         $a1, $a1, 0x9
    ctx->r5 = ctx->r5 | 0X9;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_73;
    // 0x80058028: ori         $a1, $a1, 0x9
    ctx->r5 = ctx->r5 | 0X9;
    after_73:
    // 0x8005802C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80058030: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80058034: jal         0x8004B6A0
    // 0x80058038: ori         $a1, $a1, 0x17
    ctx->r5 = ctx->r5 | 0X17;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_74;
    // 0x80058038: ori         $a1, $a1, 0x17
    ctx->r5 = ctx->r5 | 0X17;
    after_74:
    // 0x8005803C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80058040: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80058044: jal         0x8004B6A0
    // 0x80058048: ori         $a1, $a1, 0x8
    ctx->r5 = ctx->r5 | 0X8;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_75;
    // 0x80058048: ori         $a1, $a1, 0x8
    ctx->r5 = ctx->r5 | 0X8;
    after_75:
    // 0x8005804C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80058050: jal         0x800567B8
    // 0x80058054: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_800567B8_31BB8(rdram, ctx);
        goto after_76;
    // 0x80058054: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_76:
    // 0x80058058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8005805C:
    // 0x8005805C: jal         0x80056114
    // 0x80058060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80056114_31514(rdram, ctx);
        goto after_77;
    // 0x80058060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_77:
    // 0x80058064: j           L_800586A4
    // 0x80058068: nop

        goto L_800586A4;
    // 0x80058068: nop

L_8005806C:
    // 0x8005806C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80058070: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80058074: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x80058078: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8005807C: beq         $v0, $zero, L_800581AC
    if (ctx->r2 == 0) {
        // 0x80058080: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_800581AC;
    }
    // 0x80058080: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80058084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80058088: beq         $v1, $v0, L_800580C8
    if (ctx->r3 == ctx->r2) {
        // 0x8005808C: nop
    
            goto L_800580C8;
    }
    // 0x8005808C: nop

    // 0x80058090: beq         $v1, $zero, L_800580A8
    if (ctx->r3 == 0) {
        // 0x80058094: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800580A8;
    }
    // 0x80058094: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80058098: beq         $v1, $v0, L_80058180
    if (ctx->r3 == ctx->r2) {
        // 0x8005809C: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_80058180;
    }
    // 0x8005809C: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x800580A0: j           L_800584C8
    // 0x800580A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_800584C8;
    // 0x800580A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_800580A8:
    // 0x800580A8: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x800580AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800580B0: jal         0x8002A2F8
    // 0x800580B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_78;
    // 0x800580B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_78:
L_800580B8:
    // 0x800580B8: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x800580BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800580C0: j           L_800584C4
    // 0x800580C4: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
        goto L_800584C4;
    // 0x800580C4: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_800580C8:
    // 0x800580C8: lb          $v0, 0x172($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X172);
    // 0x800580CC: bne         $v0, $zero, L_800580F0
    if (ctx->r2 != 0) {
        // 0x800580D0: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_800580F0;
    }
    // 0x800580D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x800580D4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800580D8: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x800580DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800580E0: jal         0x80061510
    // 0x800580E4: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    func_80061510_3C910(rdram, ctx);
        goto after_79;
    // 0x800580E4: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    after_79:
    // 0x800580E8: j           L_80058170
    // 0x800580EC: nop

        goto L_80058170;
    // 0x800580EC: nop

L_800580F0:
    // 0x800580F0: lb          $v0, 0x44E($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X44E);
    // 0x800580F4: bgtz        $v0, L_80058118
    if (SIGNED(ctx->r2) > 0) {
        // 0x800580F8: nop
    
            goto L_80058118;
    }
    // 0x800580F8: nop

    // 0x800580FC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80058100: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80058104: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80058108: jal         0x80061510
    // 0x8005810C: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    func_80061510_3C910(rdram, ctx);
        goto after_80;
    // 0x8005810C: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_80:
    // 0x80058110: j           L_80058170
    // 0x80058114: nop

        goto L_80058170;
    // 0x80058114: nop

L_80058118:
    // 0x80058118: lb          $v0, 0x44F($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X44F);
    // 0x8005811C: bnel        $v0, $zero, L_80058158
    if (ctx->r2 != 0) {
        // 0x80058120: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80058158;
    }
    goto skip_6;
    // 0x80058120: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_6:
    // 0x80058124: addiu       $a0, $a0, -0x80
    ctx->r4 = ADD32(ctx->r4, -0X80);
    // 0x80058128: jal         0x80069820
    // 0x8005812C: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    func_80069820_44C20(rdram, ctx);
        goto after_81;
    // 0x8005812C: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    after_81:
    // 0x80058130: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80058134: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80058138: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005813C: jal         0x80061510
    // 0x80058140: addiu       $a2, $zero, 0x5E
    ctx->r6 = ADD32(0, 0X5E);
    func_80061510_3C910(rdram, ctx);
        goto after_82;
    // 0x80058140: addiu       $a2, $zero, 0x5E
    ctx->r6 = ADD32(0, 0X5E);
    after_82:
    // 0x80058144: lbu         $v1, 0x172($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X172);
    // 0x80058148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005814C: sb          $v0, 0x44F($s1)
    MEM_B(0X44F, ctx->r17) = ctx->r2;
    // 0x80058150: j           L_80058170
    // 0x80058154: sb          $v1, 0x170($s1)
    MEM_B(0X170, ctx->r17) = ctx->r3;
        goto L_80058170;
    // 0x80058154: sb          $v1, 0x170($s1)
    MEM_B(0X170, ctx->r17) = ctx->r3;
L_80058158:
    // 0x80058158: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005815C: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80058160: jal         0x80061510
    // 0x80058164: addiu       $a2, $zero, 0x5F
    ctx->r6 = ADD32(0, 0X5F);
    func_80061510_3C910(rdram, ctx);
        goto after_83;
    // 0x80058164: addiu       $a2, $zero, 0x5F
    ctx->r6 = ADD32(0, 0X5F);
    after_83:
    // 0x80058168: sb          $zero, 0x44F($s1)
    MEM_B(0X44F, ctx->r17) = 0;
    // 0x8005816C: sb          $zero, 0x170($s1)
    MEM_B(0X170, ctx->r17) = 0;
L_80058170:
    // 0x80058170: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80058174: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80058178: j           L_800584C4
    // 0x8005817C: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
        goto L_800584C4;
    // 0x8005817C: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_80058180:
    // 0x80058180: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80058184: jal         0x8002A2F8
    // 0x80058188: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_84;
    // 0x80058188: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_84:
    // 0x8005818C: jal         0x80061724
    // 0x80058190: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_85;
    // 0x80058190: nop

    after_85:
    // 0x80058194: jal         0x8004B5E8
    // 0x80058198: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_86;
    // 0x80058198: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_86:
    // 0x8005819C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x800581A0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800581A4: j           L_800584C4
    // 0x800581A8: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
        goto L_800584C4;
    // 0x800581A8: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_800581AC:
    // 0x800581AC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800581B0: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x800581B4: andi        $v0, $v0, 0xC00
    ctx->r2 = ctx->r2 & 0XC00;
    // 0x800581B8: beq         $v0, $zero, L_800584C4
    if (ctx->r2 == 0) {
        // 0x800581BC: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_800584C4;
    }
    // 0x800581BC: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x800581C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800581C4: jal         0x8002A2F8
    // 0x800581C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_87;
    // 0x800581C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_87:
    // 0x800581CC: jal         0x80061724
    // 0x800581D0: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_88;
    // 0x800581D0: nop

    after_88:
    // 0x800581D4: jal         0x8004B5E8
    // 0x800581D8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_89;
    // 0x800581D8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_89:
    // 0x800581DC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800581E0: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x800581E4: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x800581E8: beq         $v0, $zero, L_8005844C
    if (ctx->r2 == 0) {
        // 0x800581EC: nop
    
            goto L_8005844C;
    }
    // 0x800581EC: nop

    // 0x800581F0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800581F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800581F8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x800581FC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80058200: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80058204: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80058208: beq         $v0, $zero, L_80058474
    if (ctx->r2 == 0) {
        // 0x8005820C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80058474;
    }
    // 0x8005820C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80058210: j           L_80058474
    // 0x80058214: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_80058474;
    // 0x80058214: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80058218:
    // 0x80058218: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8005821C: lbu         $v1, -0x72EE($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X72EE);
    // 0x80058220: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80058224: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x80058228: beq         $v0, $zero, L_80058238
    if (ctx->r2 == 0) {
        // 0x8005822C: sb          $v0, 0x5($s0)
        MEM_B(0X5, ctx->r16) = ctx->r2;
            goto L_80058238;
    }
    // 0x8005822C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x80058230: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80058234: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80058238:
    // 0x80058238: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8005823C: lbu         $s2, 0x5($s0)
    ctx->r18 = MEM_BU(ctx->r16, 0X5);
    // 0x80058240: sltiu       $v0, $v0, 0xD
    ctx->r2 = ctx->r2 < 0XD ? 1 : 0;
    // 0x80058244: beql        $v0, $zero, L_800582A8
    if (ctx->r2 == 0) {
        // 0x80058248: sb          $zero, 0x5($s0)
        MEM_B(0X5, ctx->r16) = 0;
            goto L_800582A8;
    }
    goto skip_7;
    // 0x80058248: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    skip_7:
    // 0x8005824C: jal         0x8006033C
    // 0x80058250: addiu       $a0, $s2, 0x4C0
    ctx->r4 = ADD32(ctx->r18, 0X4C0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_90;
    // 0x80058250: addiu       $a0, $s2, 0x4C0
    ctx->r4 = ADD32(ctx->r18, 0X4C0);
    after_90:
    // 0x80058254: beq         $v0, $zero, L_800582A4
    if (ctx->r2 == 0) {
        // 0x80058258: lui         $v0, 0x2
        ctx->r2 = S32(0X2 << 16);
            goto L_800582A4;
    }
    // 0x80058258: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x8005825C: lbu         $a1, 0x4($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X4);
    // 0x80058260: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80058264: addiu       $a1, $a1, 0x9
    ctx->r5 = ADD32(ctx->r5, 0X9);
    // 0x80058268: jal         0x8004B6A0
    // 0x8005826C: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_91;
    // 0x8005826C: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    after_91:
    // 0x80058270: lb          $v0, 0x172($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X172);
    // 0x80058274: bne         $v0, $s2, L_80058290
    if (ctx->r2 != ctx->r18) {
        // 0x80058278: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80058290;
    }
    // 0x80058278: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005827C: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80058280: jal         0x8004B6A0
    // 0x80058284: ori         $a1, $a1, 0x1C
    ctx->r5 = ctx->r5 | 0X1C;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_92;
    // 0x80058284: ori         $a1, $a1, 0x1C
    ctx->r5 = ctx->r5 | 0X1C;
    after_92:
    // 0x80058288: j           L_8005829C
    // 0x8005828C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8005829C;
    // 0x8005828C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80058290:
    // 0x80058290: jal         0x8004B5E8
    // 0x80058294: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_93;
    // 0x80058294: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_93:
    // 0x80058298: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8005829C:
    // 0x8005829C: j           L_800582C8
    // 0x800582A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
        goto L_800582C8;
    // 0x800582A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
L_800582A4:
    // 0x800582A4: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
L_800582A8:
    // 0x800582A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800582AC: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800582B0: jal         0x8004B6A0
    // 0x800582B4: ori         $a1, $a1, 0x16
    ctx->r5 = ctx->r5 | 0X16;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_94;
    // 0x800582B4: ori         $a1, $a1, 0x16
    ctx->r5 = ctx->r5 | 0X16;
    after_94:
    // 0x800582B8: jal         0x8004B5E8
    // 0x800582BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_95;
    // 0x800582BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_95:
    // 0x800582C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800582C4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_800582C8:
    // 0x800582C8: jal         0x800567B8
    // 0x800582CC: nop

    func_800567B8_31BB8(rdram, ctx);
        goto after_96;
    // 0x800582CC: nop

    after_96:
    // 0x800582D0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800582D4: lw          $v0, 0x77F0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X77F0);
    // 0x800582D8: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x800582DC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800582E0: beq         $v0, $zero, L_8005833C
    if (ctx->r2 == 0) {
        // 0x800582E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8005833C;
    }
    // 0x800582E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800582E8: lbu         $v1, 0x12($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X12);
    // 0x800582EC: lbu         $a0, 0x15($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X15);
    // 0x800582F0: lbu         $a1, 0x1A($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1A);
    // 0x800582F4: lbu         $a2, 0x1D($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1D);
    // 0x800582F8: lbu         $a3, 0x22($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X22);
    // 0x800582FC: lbu         $t0, 0x25($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X25);
    // 0x80058300: lbu         $t1, 0x2A($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2A);
    // 0x80058304: lbu         $t2, 0x2D($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2D);
    // 0x80058308: lbu         $t3, 0x32($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X32);
    // 0x8005830C: lbu         $t4, 0x35($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X35);
    // 0x80058310: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x80058314: sb          $v1, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r3;
    // 0x80058318: sb          $a0, 0x13($s0)
    MEM_B(0X13, ctx->r16) = ctx->r4;
    // 0x8005831C: sb          $a1, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r5;
    // 0x80058320: sb          $a2, 0x1B($s0)
    MEM_B(0X1B, ctx->r16) = ctx->r6;
    // 0x80058324: sb          $a3, 0x20($s0)
    MEM_B(0X20, ctx->r16) = ctx->r7;
    // 0x80058328: sb          $t0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r8;
    // 0x8005832C: sb          $t1, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r9;
    // 0x80058330: sb          $t2, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = ctx->r10;
    // 0x80058334: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    // 0x80058338: sb          $t4, 0x33($s0)
    MEM_B(0X33, ctx->r16) = ctx->r12;
L_8005833C:
    // 0x8005833C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80058340: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80058344: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x80058348: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8005834C: beq         $v0, $zero, L_800583B8
    if (ctx->r2 == 0) {
        // 0x80058350: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_800583B8;
    }
    // 0x80058350: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80058354: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80058358: beq         $v1, $v0, L_800583C4
    if (ctx->r3 == ctx->r2) {
        // 0x8005835C: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_800583C4;
    }
    // 0x8005835C: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80058360: jal         0x8006033C
    // 0x80058364: addiu       $a0, $s2, 0x4C0
    ctx->r4 = ADD32(ctx->r18, 0X4C0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_97;
    // 0x80058364: addiu       $a0, $s2, 0x4C0
    ctx->r4 = ADD32(ctx->r18, 0X4C0);
    after_97:
    // 0x80058368: beq         $v0, $zero, L_800583A0
    if (ctx->r2 == 0) {
        // 0x8005836C: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_800583A0;
    }
    // 0x8005836C: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80058370: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80058374: jal         0x8002A2F8
    // 0x80058378: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_98;
    // 0x80058378: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_98:
    // 0x8005837C: lbu         $a2, 0x4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X4);
    // 0x80058380: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80058384: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80058388: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005838C: addiu       $a2, $a2, 0xE4
    ctx->r6 = ADD32(ctx->r6, 0XE4);
    // 0x80058390: jal         0x80061510
    // 0x80058394: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    func_80061510_3C910(rdram, ctx);
        goto after_99;
    // 0x80058394: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    after_99:
    // 0x80058398: j           L_800580B8
    // 0x8005839C: nop

        goto L_800580B8;
    // 0x8005839C: nop

L_800583A0:
    // 0x800583A0: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x800583A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800583A8: jal         0x8002A2F8
    // 0x800583AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_100;
    // 0x800583AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_100:
    // 0x800583B0: j           L_800584C8
    // 0x800583B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_800584C8;
    // 0x800583B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_800583B8:
    // 0x800583B8: andi        $v0, $s3, 0x8008
    ctx->r2 = ctx->r19 & 0X8008;
    // 0x800583BC: beq         $v0, $zero, L_800583E0
    if (ctx->r2 == 0) {
        // 0x800583C0: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_800583E0;
    }
    // 0x800583C0: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
L_800583C4:
    // 0x800583C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800583C8: jal         0x8002A2F8
    // 0x800583CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_101;
    // 0x800583CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_101:
    // 0x800583D0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x800583D4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800583D8: j           L_800584C4
    // 0x800583DC: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
        goto L_800584C4;
    // 0x800583DC: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_800583E0:
    // 0x800583E0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800583E4: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x800583E8: andi        $v0, $v0, 0xC00
    ctx->r2 = ctx->r2 & 0XC00;
    // 0x800583EC: beq         $v0, $zero, L_800584C4
    if (ctx->r2 == 0) {
        // 0x800583F0: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_800584C4;
    }
    // 0x800583F0: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x800583F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800583F8: jal         0x8002A2F8
    // 0x800583FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_102;
    // 0x800583FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_102:
    // 0x80058400: jal         0x80061724
    // 0x80058404: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_103;
    // 0x80058404: nop

    after_103:
    // 0x80058408: jal         0x8004B5E8
    // 0x8005840C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_104;
    // 0x8005840C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_104:
    // 0x80058410: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80058414: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80058418: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8005841C: beq         $v0, $zero, L_8005844C
    if (ctx->r2 == 0) {
        // 0x80058420: nop
    
            goto L_8005844C;
    }
    // 0x80058420: nop

    // 0x80058424: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80058428: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8005842C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80058430: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80058434: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80058438: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8005843C: beq         $v0, $zero, L_80058474
    if (ctx->r2 == 0) {
        // 0x80058440: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80058474;
    }
    // 0x80058440: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80058444: j           L_80058474
    // 0x80058448: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_80058474;
    // 0x80058448: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8005844C:
    // 0x8005844C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80058450: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80058454: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80058458: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8005845C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80058460: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x80058464: bnel        $v0, $zero, L_80058478
    if (ctx->r2 != 0) {
        // 0x80058468: sb          $zero, 0x1($s0)
        MEM_B(0X1, ctx->r16) = 0;
            goto L_80058478;
    }
    goto skip_8;
    // 0x80058468: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    skip_8:
    // 0x8005846C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80058470: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80058474:
    // 0x80058474: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
L_80058478:
    // 0x80058478: j           L_800584C4
    // 0x8005847C: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
        goto L_800584C4;
    // 0x8005847C: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
L_80058480:
    // 0x80058480: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80058484: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80058488: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8005848C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80058490: bne         $v0, $zero, L_800584C8
    if (ctx->r2 != 0) {
        // 0x80058494: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_800584C8;
    }
    // 0x80058494: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80058498: j           L_800584BC
    // 0x8005849C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_800584BC;
    // 0x8005849C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_800584A0:
    // 0x800584A0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800584A4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x800584A8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x800584AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800584B0: bne         $v0, $zero, L_800584C8
    if (ctx->r2 != 0) {
        // 0x800584B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_800584C8;
    }
    // 0x800584B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800584B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800584BC:
    // 0x800584BC: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x800584C0: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
L_800584C4:
    // 0x800584C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_800584C8:
    // 0x800584C8: jal         0x80056114
    // 0x800584CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80056114_31514(rdram, ctx);
        goto after_105;
    // 0x800584CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_105:
    // 0x800584D0: j           L_80058768
    // 0x800584D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80058768;
    // 0x800584D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800584D8:
    // 0x800584D8: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x800584DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800584E0: beq         $v1, $v0, L_80058534
    if (ctx->r3 == ctx->r2) {
        // 0x800584E4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80058534;
    }
    // 0x800584E4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800584E8: beql        $v0, $zero, L_80058500
    if (ctx->r2 == 0) {
        // 0x800584EC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80058500;
    }
    goto skip_9;
    // 0x800584EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_9:
    // 0x800584F0: beq         $v1, $zero, L_80058510
    if (ctx->r3 == 0) {
        // 0x800584F4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80058510;
    }
    // 0x800584F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800584F8: j           L_80058768
    // 0x800584FC: nop

        goto L_80058768;
    // 0x800584FC: nop

L_80058500:
    // 0x80058500: beql        $v1, $v0, L_80058544
    if (ctx->r3 == ctx->r2) {
        // 0x80058504: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_80058544;
    }
    goto skip_10;
    // 0x80058504: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    skip_10:
    // 0x80058508: j           L_80057D80
    // 0x8005850C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80057D80;
    // 0x8005850C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80058510:
    // 0x80058510: jal         0x80061724
    // 0x80058514: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_106;
    // 0x80058514: nop

    after_106:
    // 0x80058518: jal         0x8004B5E8
    // 0x8005851C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_107;
    // 0x8005851C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_107:
    // 0x80058520: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80058524: jal         0x80036A8C
    // 0x80058528: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80036A8C_11E8C(rdram, ctx);
        goto after_108;
    // 0x80058528: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_108:
    // 0x8005852C: j           L_800586A4
    // 0x80058530: nop

        goto L_800586A4;
    // 0x80058530: nop

L_80058534:
    // 0x80058534: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80058538: lw          $a1, 0x2884($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2884);
    // 0x8005853C: j           L_80058698
    // 0x80058540: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_80058698;
    // 0x80058540: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80058544:
    // 0x80058544: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80058548: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8005854C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80058550: bne         $v0, $zero, L_8005856C
    if (ctx->r2 != 0) {
        // 0x80058554: nop
    
            goto L_8005856C;
    }
    // 0x80058554: nop

    // 0x80058558: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005855C: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80058560: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80058564: beq         $v0, $zero, L_800585B0
    if (ctx->r2 == 0) {
        // 0x80058568: nop
    
            goto L_800585B0;
    }
    // 0x80058568: nop

L_8005856C:
    // 0x8005856C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80058570: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80058574: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80058578: beq         $v0, $zero, L_8005858C
    if (ctx->r2 == 0) {
        // 0x8005857C: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_8005858C;
    }
    // 0x8005857C: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x80058580: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80058584: jal         0x8002A2F8
    // 0x80058588: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_109;
    // 0x80058588: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_109:
L_8005858C:
    // 0x8005858C: jal         0x80061724
    // 0x80058590: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_110;
    // 0x80058590: nop

    after_110:
    // 0x80058594: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80058598: lb          $a1, -0x3BC4($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X3BC4);
    // 0x8005859C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800585A0: jal         0x800702F0
    // 0x800585A4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_800702F0_4B6F0(rdram, ctx);
        goto after_111;
    // 0x800585A4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_111:
    // 0x800585A8: j           L_800586A4
    // 0x800585AC: nop

        goto L_800586A4;
    // 0x800585AC: nop

L_800585B0:
    // 0x800585B0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800585B4: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x800585B8: andi        $v0, $v0, 0xC00
    ctx->r2 = ctx->r2 & 0XC00;
    // 0x800585BC: beq         $v0, $zero, L_800586E0
    if (ctx->r2 == 0) {
        // 0x800585C0: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_800586E0;
    }
    // 0x800585C0: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x800585C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800585C8: jal         0x8002A2F8
    // 0x800585CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_112;
    // 0x800585CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_112:
    // 0x800585D0: jal         0x80061724
    // 0x800585D4: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_113;
    // 0x800585D4: nop

    after_113:
    // 0x800585D8: jal         0x8004B5E8
    // 0x800585DC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_114;
    // 0x800585DC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_114:
    // 0x800585E0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800585E4: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x800585E8: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x800585EC: beq         $v0, $zero, L_8005770C
    if (ctx->r2 == 0) {
        // 0x800585F0: nop
    
            goto L_8005770C;
    }
    // 0x800585F0: nop

    // 0x800585F4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800585F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800585FC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80058600: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80058604: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80058608: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8005860C: beq         $v0, $zero, L_80057734
    if (ctx->r2 == 0) {
        // 0x80058610: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80057734;
    }
    // 0x80058610: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80058614: j           L_80057734
    // 0x80058618: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_80057734;
    // 0x80058618: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8005861C:
    // 0x8005861C: jal         0x8005699C
    // 0x80058620: nop

    func_8005699C_31D9C(rdram, ctx);
        goto after_115;
    // 0x80058620: nop

    after_115:
    // 0x80058624: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x80058628: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005862C: beq         $v1, $v0, L_8005866C
    if (ctx->r3 == ctx->r2) {
        // 0x80058630: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8005866C;
    }
    // 0x80058630: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80058634: beql        $v0, $zero, L_8005864C
    if (ctx->r2 == 0) {
        // 0x80058638: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005864C;
    }
    goto skip_11;
    // 0x80058638: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_11:
    // 0x8005863C: beq         $v1, $zero, L_8005865C
    if (ctx->r3 == 0) {
        // 0x80058640: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8005865C;
    }
    // 0x80058640: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80058644: j           L_80058768
    // 0x80058648: nop

        goto L_80058768;
    // 0x80058648: nop

L_8005864C:
    // 0x8005864C: beq         $v1, $v0, L_800586B4
    if (ctx->r3 == ctx->r2) {
        // 0x80058650: lui         $v0, 0x4000
        ctx->r2 = S32(0X4000 << 16);
            goto L_800586B4;
    }
    // 0x80058650: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x80058654: j           L_80058768
    // 0x80058658: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80058768;
    // 0x80058658: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8005865C:
    // 0x8005865C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80058660: lw          $a1, 0x2B98($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B98);
    // 0x80058664: j           L_80058698
    // 0x80058668: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_80058698;
    // 0x80058668: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8005866C:
    // 0x8005866C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80058670: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80058674: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x80058678: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8005867C: beq         $v0, $zero, L_800586E0
    if (ctx->r2 == 0) {
        // 0x80058680: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_800586E0;
    }
    // 0x80058680: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80058684: bnel        $v0, $zero, L_800586E0
    if (ctx->r2 != 0) {
        // 0x80058688: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_800586E0;
    }
    goto skip_12;
    // 0x80058688: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    skip_12:
    // 0x8005868C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80058690: lw          $a1, 0x2BA4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2BA4);
    // 0x80058694: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80058698:
    // 0x80058698: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_8005869C:
    // 0x8005869C: jal         0x80061510
    // 0x800586A0: nop

    func_80061510_3C910(rdram, ctx);
        goto after_116;
    // 0x800586A0: nop

    after_116:
L_800586A4:
    // 0x800586A4: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
L_800586A8:
    // 0x800586A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800586AC: j           L_800586E0
    // 0x800586B0: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
        goto L_800586E0;
    // 0x800586B0: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_800586B4:
    // 0x800586B4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800586B8: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x800586BC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800586C0: beq         $v0, $zero, L_800586E0
    if (ctx->r2 == 0) {
        // 0x800586C4: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_800586E0;
    }
    // 0x800586C4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x800586C8: bnel        $v0, $zero, L_800586E0
    if (ctx->r2 != 0) {
        // 0x800586CC: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_800586E0;
    }
    goto skip_13;
    // 0x800586CC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    skip_13:
    // 0x800586D0: jal         0x800572DC
    // 0x800586D4: nop

    func_800572DC_326DC(rdram, ctx);
        goto after_117;
    // 0x800586D4: nop

    after_117:
    // 0x800586D8: jal         0x8003DEBC
    // 0x800586DC: nop

    func_8003DEBC_192BC(rdram, ctx);
        goto after_118;
    // 0x800586DC: nop

    after_118:
L_800586E0:
    // 0x800586E0: j           L_80058768
    // 0x800586E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80058768;
    // 0x800586E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800586E8:
    // 0x800586E8: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x800586EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800586F0: lb          $v0, 0x4B20($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4B20);
    // 0x800586F4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x800586F8: bne         $v1, $v0, L_80058728
    if (ctx->r3 != ctx->r2) {
        // 0x800586FC: addiu       $s1, $s1, 0x49B0
        ctx->r17 = ADD32(ctx->r17, 0X49B0);
            goto L_80058728;
    }
    // 0x800586FC: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80058700: lhu         $v1, 0x8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8);
    // 0x80058704: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80058708: lhu         $v0, 0x4E00($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4E00);
    // 0x8005870C: bne         $v1, $v0, L_80058728
    if (ctx->r3 != ctx->r2) {
        // 0x80058710: nop
    
            goto L_80058728;
    }
    // 0x80058710: nop

    // 0x80058714: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80058718: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005871C: lbu         $v0, 0x4E02($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4E02);
    // 0x80058720: beq         $v1, $v0, L_80058754
    if (ctx->r3 == ctx->r2) {
        // 0x80058724: nop
    
            goto L_80058754;
    }
    // 0x80058724: nop

L_80058728:
    // 0x80058728: jal         0x800700D8
    // 0x8005872C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800700D8_4B4D8(rdram, ctx);
        goto after_119;
    // 0x8005872C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_119:
    // 0x80058730: jal         0x80070100
    // 0x80058734: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070100_4B500(rdram, ctx);
        goto after_120;
    // 0x80058734: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_120:
    // 0x80058738: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8005873C: lb          $v0, 0x170($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X170);
    // 0x80058740: beq         $v1, $v0, L_80058750
    if (ctx->r3 == ctx->r2) {
        // 0x80058744: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_80058750;
    }
    // 0x80058744: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80058748: jal         0x8004CB2C
    // 0x8005874C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_121;
    // 0x8005874C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_121:
L_80058750:
    // 0x80058750: sb          $zero, 0x110($s1)
    MEM_B(0X110, ctx->r17) = 0;
L_80058754:
    // 0x80058754: jal         0x80061724
    // 0x80058758: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_122;
    // 0x80058758: nop

    after_122:
    // 0x8005875C: jal         0x8004B5E8
    // 0x80058760: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_123;
    // 0x80058760: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_123:
    // 0x80058764: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80058768:
    // 0x80058768: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8005876C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80058770: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80058774: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80058778: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8005877C: jr          $ra
    // 0x80058780: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80058780: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80065698_40A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80065698: lhu         $v0, 0xC0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC0);
    // 0x8006569C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x800656A0: sh          $v1, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = ctx->r3;
    // 0x800656A4: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x800656A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800656AC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800656B0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x800656B4: sw          $v1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r3;
    // 0x800656B8: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x800656BC: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x800656C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800656C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800656C8: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
    // 0x800656CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800656D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800656D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800656D8: lw          $v0, 0x2B30($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2B30);
    // 0x800656DC: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x800656E0: jr          $ra
    // 0x800656E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x800656E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80028A4C_3E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028A4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80028A50: jr          $ra
    // 0x80028A54: sw          $zero, 0x6CA4($at)
    MEM_W(0X6CA4, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80028A54: sw          $zero, 0x6CA4($at)
    MEM_W(0X6CA4, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800784F0_538F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800784F0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x800784F4: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x800784F8: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x800784FC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80078500: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x80078504: bne         $v0, $zero, L_80078528
    if (ctx->r2 != 0) {
        // 0x80078508: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_80078528;
    }
    // 0x80078508: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007850C: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80078510: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80078514: sh          $v1, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r3;
    // 0x80078518: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8007851C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80078520: j           L_80078540
    // 0x80078524: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
        goto L_80078540;
    // 0x80078524: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_80078528:
    // 0x80078528: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007852C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80078530: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80078534: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80078538: lbu         $v0, -0x32E6($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X32E6);
    // 0x8007853C: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
L_80078540:
    // 0x80078540: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80078544: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80078548: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007854C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80078550: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80078554: lw          $v1, -0x32F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X32F0);
    // 0x80078558: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x8007855C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80078560: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80078564: lw          $v1, -0x32EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X32EC);
    // 0x80078568: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x8007856C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80078570: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80078574: lbu         $v1, -0x32E8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X32E8);
    // 0x80078578: sb          $v1, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r3;
    // 0x8007857C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80078580: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80078584: lbu         $v1, -0x32E7($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X32E7);
    // 0x80078588: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8007858C: sb          $v1, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r3;
    // 0x80078590: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80078594: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80078598: lbu         $v0, -0x32E5($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X32E5);
    // 0x8007859C: jr          $ra
    // 0x800785A0: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800785A0: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80073510_4E910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80073510: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80073514: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80073518: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8007351C: lb          $s0, -0x3BC8($s0)
    ctx->r16 = MEM_B(ctx->r16, -0X3BC8);
    // 0x80073520: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80073524: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x80073528: addiu       $s2, $s2, -0x3C18
    ctx->r18 = ADD32(ctx->r18, -0X3C18);
    // 0x8007352C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80073530: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80073534: jal         0x80072E10
    // 0x80073538: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80072E10_4E210(rdram, ctx);
        goto after_0;
    // 0x80073538: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8007353C: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x80073540: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80073544: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80073548: jal         0x8002A290
    // 0x8007354C: lhu         $a0, 0x3740($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3740);
    func_8002A290_5690(rdram, ctx);
        goto after_1;
    // 0x8007354C: lhu         $a0, 0x3740($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3740);
    after_1:
    // 0x80073550: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80073554: lh          $v0, -0x3BB0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3BB0);
    // 0x80073558: beq         $v0, $s0, L_80073644
    if (ctx->r2 == ctx->r16) {
        // 0x8007355C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80073644;
    }
    // 0x8007355C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80073560: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80073564: addiu       $a2, $zero, 0x340
    ctx->r6 = ADD32(0, 0X340);
    // 0x80073568: jal         0x8002C764
    // 0x8007356C: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    func_8002C764_7B64(rdram, ctx);
        goto after_2;
    // 0x8007356C: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    after_2:
    // 0x80073570: addiu       $a0, $zero, 0x340
    ctx->r4 = ADD32(0, 0X340);
    // 0x80073574: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80073578: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x8007357C: jal         0x8002C764
    // 0x80073580: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_8002C764_7B64(rdram, ctx);
        goto after_3;
    // 0x80073580: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_3:
    // 0x80073584: jal         0x80086F70
    // 0x80073588: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    func_80086F70_62370(rdram, ctx);
        goto after_4;
    // 0x80073588: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8007358C: jal         0x80036888
    // 0x80073590: nop

    func_80036888_11C88(rdram, ctx);
        goto after_5;
    // 0x80073590: nop

    after_5:
    // 0x80073594: jal         0x80028E40
    // 0x80073598: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80028E40_4240(rdram, ctx);
        goto after_6;
    // 0x80073598: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x8007359C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800735A0: addiu       $a0, $a0, 0x5080
    ctx->r4 = ADD32(ctx->r4, 0X5080);
    // 0x800735A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800735A8: sh          $s0, -0x3BB0($at)
    MEM_H(-0X3BB0, ctx->r1) = ctx->r16;
    // 0x800735AC: jal         0x8009A2B0
    // 0x800735B0: addiu       $a1, $zero, 0x5040
    ctx->r5 = ADD32(0, 0X5040);
    bzero_recomp(rdram, ctx);
        goto after_7;
    // 0x800735B0: addiu       $a1, $zero, 0x5040
    ctx->r5 = ADD32(0, 0X5040);
    after_7:
    // 0x800735B4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x800735B8: addiu       $a0, $a0, 0xCB0
    ctx->r4 = ADD32(ctx->r4, 0XCB0);
    // 0x800735BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800735C0: sw          $zero, 0x55A0($at)
    MEM_W(0X55A0, ctx->r1) = 0;
    // 0x800735C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800735C8: sw          $zero, 0x4000($at)
    MEM_W(0X4000, ctx->r1) = 0;
    // 0x800735CC: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800735D0: sw          $zero, -0x26F0($at)
    MEM_W(-0X26F0, ctx->r1) = 0;
    // 0x800735D4: jal         0x8009A2B0
    // 0x800735D8: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    bzero_recomp(rdram, ctx);
        goto after_8;
    // 0x800735D8: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_8:
    // 0x800735DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800735E0: jal         0x80036340
    // 0x800735E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80036340_11740(rdram, ctx);
        goto after_9;
    // 0x800735E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_9:
    // 0x800735E8: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800735EC: lbu         $a1, -0x35A7($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X35A7);
    // 0x800735F0: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x800735F4: beq         $v1, $zero, L_80073614
    if (ctx->r3 == 0) {
        // 0x800735F8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80073614;
    }
    // 0x800735F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800735FC: beq         $v1, $v0, L_80073614
    if (ctx->r3 == ctx->r2) {
        // 0x80073600: andi        $a1, $a1, 0xFF
        ctx->r5 = ctx->r5 & 0XFF;
            goto L_80073614;
    }
    // 0x80073600: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80073604: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80073608: sh          $a1, -0x3BAE($at)
    MEM_H(-0X3BAE, ctx->r1) = ctx->r5;
    // 0x8007360C: jal         0x80036340
    // 0x80073610: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80036340_11740(rdram, ctx);
        goto after_10;
    // 0x80073610: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
L_80073614:
    // 0x80073614: jal         0x80092EB0
    // 0x80073618: nop

    func_80092EB0_6E2B0(rdram, ctx);
        goto after_11;
    // 0x80073618: nop

    after_11:
    // 0x8007361C: jal         0x80087570
    // 0x80073620: nop

    Graph_ThreadStop(rdram, ctx);
        goto after_12;
    // 0x80073620: nop

    after_12:
    // 0x80073624: jal         0x8007BEA0
    // 0x80073628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8007BEA0_572A0(rdram, ctx);
        goto after_13;
    // 0x80073628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
    // 0x8007362C: jal         0x80087590
    // 0x80073630: nop

    func_80087590_62990(rdram, ctx);
        goto after_14;
    // 0x80073630: nop

    after_14:
    // 0x80073634: jal         0x80071A10
    // 0x80073638: nop

    func_80071A10_4CE10(rdram, ctx);
        goto after_15;
    // 0x80073638: nop

    after_15:
    // 0x8007363C: jal         0x80071B5C
    // 0x80073640: nop

    func_80071B5C_4CF5C(rdram, ctx);
        goto after_16;
    // 0x80073640: nop

    after_16:
L_80073644:
    // 0x80073644: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x80073648: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8007364C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80073650: lw          $v0, 0x388C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X388C);
    // 0x80073654: jalr        $v0
    // 0x80073658: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_17;
    // 0x80073658: nop

    after_17:
    // 0x8007365C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80073660: lbu         $a0, -0x3B96($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3B96);
    // 0x80073664: jal         0x80060234
    // 0x80073668: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    func_80060234_3B634(rdram, ctx);
        goto after_18;
    // 0x80073668: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    after_18:
    // 0x8007366C: lhu         $v0, 0x62($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X62);
    // 0x80073670: lbu         $v1, 0x50($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X50);
    // 0x80073674: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80073678: sh          $v0, 0x62($s2)
    MEM_H(0X62, ctx->r18) = ctx->r2;
    // 0x8007367C: addiu       $v0, $v1, -0x5
    ctx->r2 = ADD32(ctx->r3, -0X5);
    // 0x80073680: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80073684: bnel        $v0, $zero, L_800736AC
    if (ctx->r2 != 0) {
        // 0x80073688: addiu       $a0, $s2, 0x174
        ctx->r4 = ADD32(ctx->r18, 0X174);
            goto L_800736AC;
    }
    goto skip_0;
    // 0x80073688: addiu       $a0, $s2, 0x174
    ctx->r4 = ADD32(ctx->r18, 0X174);
    skip_0:
    // 0x8007368C: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x80073690: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80073694: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x80073698: beq         $v0, $v1, L_800736A8
    if (ctx->r2 == ctx->r3) {
        // 0x8007369C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800736A8;
    }
    // 0x8007369C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800736A0: sb          $v0, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r2;
    // 0x800736A4: sb          $v0, 0x64($s2)
    MEM_B(0X64, ctx->r18) = ctx->r2;
L_800736A8:
    // 0x800736A8: addiu       $a0, $s2, 0x174
    ctx->r4 = ADD32(ctx->r18, 0X174);
L_800736AC:
    // 0x800736AC: jal         0x8009A2B0
    // 0x800736B0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    bzero_recomp(rdram, ctx);
        goto after_19;
    // 0x800736B0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_19:
    // 0x800736B4: jal         0x80036BBC
    // 0x800736B8: nop

    func_80036BBC_11FBC(rdram, ctx);
        goto after_20;
    // 0x800736B8: nop

    after_20:
    // 0x800736BC: jal         0x80089EA0
    // 0x800736C0: nop

    func_80089EA0_652A0(rdram, ctx);
        goto after_21;
    // 0x800736C0: nop

    after_21:
    // 0x800736C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800736C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800736CC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800736D0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800736D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800736D8: jr          $ra
    // 0x800736DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800736DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800324B4_D8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800324B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800324B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800324BC: jal         0x80032510
    // 0x800324C0: nop

    func_80032510_D910(rdram, ctx);
        goto after_0;
    // 0x800324C0: nop

    after_0:
    // 0x800324C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800324C8: jr          $ra
    // 0x800324CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800324CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004B598_26998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004B598: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004B59C: jr          $ra
    // 0x8004B5A0: lh          $v0, -0x3984($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3984);
    TRACE_RETURN()
    return;
    // 0x8004B5A0: lh          $v0, -0x3984($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3984);
;}
RECOMP_FUNC void func_8008DA64_68E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008DA64: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008DA68: sb          $v0, 0xBC($a0)
    MEM_B(0XBC, ctx->r4) = ctx->r2;
    // 0x8008DA6C: jr          $ra
    // 0x8008DA70: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    TRACE_RETURN()
    return;
    // 0x8008DA70: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
;}
RECOMP_FUNC void func_80051F9C_2D39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051F9C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80051FA0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80051FA4: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80051FA8: lw          $s3, -0x11CC($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X11CC);
    // 0x80051FAC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80051FB0: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80051FB4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80051FB8: lw          $s6, 0x64($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X64);
    // 0x80051FBC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80051FC0: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80051FC4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80051FC8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80051FCC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80051FD0: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x80051FD4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80051FD8: addu        $s7, $a3, $zero
    ctx->r23 = ADD32(ctx->r7, 0);
    // 0x80051FDC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80051FE0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80051FE4: sltiu       $v0, $s3, 0x3F
    ctx->r2 = ctx->r19 < 0X3F ? 1 : 0;
    // 0x80051FE8: bne         $v0, $zero, L_80051FF8
    if (ctx->r2 != 0) {
        // 0x80051FEC: sw          $s1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r17;
            goto L_80051FF8;
    }
    // 0x80051FEC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80051FF0: j           L_80052178
    // 0x80051FF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80052178;
    // 0x80051FF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80051FF8:
    // 0x80051FF8: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x80051FFC: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80052000: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80052004: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x80052008: addiu       $s1, $s1, -0x2788
    ctx->r17 = ADD32(ctx->r17, -0X2788);
    // 0x8005200C: addu        $s2, $v0, $s1
    ctx->r18 = ADD32(ctx->r2, ctx->r17);
    // 0x80052010: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80052014: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80052018: jal         0x8009A3B4
    // 0x8005201C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8005201C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80052020: lui         $v1, 0x7F
    ctx->r3 = S32(0X7F << 16);
    // 0x80052024: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80052028: sll         $a3, $s3, 2
    ctx->r7 = S32(ctx->r19 << 2);
    // 0x8005202C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80052030: srl         $v0, $s0, 2
    ctx->r2 = S32(U32(ctx->r16) >> 2);
    // 0x80052034: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80052038: sll         $s0, $fp, 24
    ctx->r16 = S32(ctx->r30 << 24);
    // 0x8005203C: and         $v1, $s6, $v1
    ctx->r3 = ctx->r22 & ctx->r3;
    // 0x80052040: or          $s0, $s0, $v1
    ctx->r16 = ctx->r16 | ctx->r3;
    // 0x80052044: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x80052048: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8005204C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80052050: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80052054: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x80052058: sh          $v0, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r2;
    // 0x8005205C: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80052060: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x80052064: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80052068: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005206C: or          $s0, $s0, $t0
    ctx->r16 = ctx->r16 | ctx->r8;
    // 0x80052070: sw          $s0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r16;
    // 0x80052074: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x80052078: addu        $s2, $v0, $s1
    ctx->r18 = ADD32(ctx->r2, ctx->r17);
    // 0x8005207C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80052080: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x80052084: sw          $t0, -0x5958($at)
    MEM_W(-0X5958, ctx->r1) = ctx->r8;
    // 0x80052088: jal         0x8009A3B4
    // 0x8005208C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8005208C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80052090: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80052094: srl         $v0, $s7, 2
    ctx->r2 = S32(U32(ctx->r23) >> 2);
    // 0x80052098: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x8005209C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x800520A0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800520A4: lw          $v1, -0x41B0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41B0);
    // 0x800520A8: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x800520AC: sh          $v0, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r2;
    // 0x800520B0: sw          $s0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r16;
    // 0x800520B4: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x800520B8: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x800520BC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800520C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800520C4: sw          $t0, -0x5958($at)
    MEM_W(-0X5958, ctx->r1) = ctx->r8;
    // 0x800520C8: lw          $s0, 0x4($s6)
    ctx->r16 = MEM_W(ctx->r22, 0X4);
    // 0x800520CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800520D0: lw          $v0, -0x11CC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X11CC);
    // 0x800520D4: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x800520D8: and         $s1, $s0, $v1
    ctx->r17 = ctx->r16 & ctx->r3;
    // 0x800520DC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800520E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800520E4: sw          $v0, -0x11CC($at)
    MEM_W(-0X11CC, ctx->r1) = ctx->r2;
    // 0x800520E8: or          $v0, $s1, $t0
    ctx->r2 = ctx->r17 | ctx->r8;
    // 0x800520EC: beq         $s1, $zero, L_80052174
    if (ctx->r17 == 0) {
        // 0x800520F0: sw          $v0, 0x4($s6)
        MEM_W(0X4, ctx->r22) = ctx->r2;
            goto L_80052174;
    }
    // 0x800520F0: sw          $v0, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r2;
    // 0x800520F4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x800520F8: lui         $s3, 0x7FFF
    ctx->r19 = S32(0X7FFF << 16);
    // 0x800520FC: ori         $s3, $s3, 0xFFFF
    ctx->r19 = ctx->r19 | 0XFFFF;
    // 0x80052100: lui         $s2, 0x801E
    ctx->r18 = S32(0X801E << 16);
    // 0x80052104: addiu       $s2, $s2, -0x21A0
    ctx->r18 = ADD32(ctx->r18, -0X21A0);
L_80052108:
    // 0x80052108: sltu        $v0, $s3, $s1
    ctx->r2 = ctx->r19 < ctx->r17 ? 1 : 0;
    // 0x8005210C: beq         $v0, $zero, L_80052160
    if (ctx->r2 == 0) {
        // 0x80052110: addiu       $a1, $sp, 0x10
        ctx->r5 = ADD32(ctx->r29, 0X10);
            goto L_80052160;
    }
    // 0x80052110: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80052114: lh          $v0, 0x0($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X0);
    // 0x80052118: lh          $v1, 0x0($s5)
    ctx->r3 = MEM_H(ctx->r21, 0X0);
    // 0x8005211C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80052120: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80052124: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80052128: lh          $v0, 0x2($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X2);
    // 0x8005212C: lh          $v1, 0x2($s5)
    ctx->r3 = MEM_H(ctx->r21, 0X2);
    // 0x80052130: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80052134: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80052138: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8005213C: lh          $v0, 0x4($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X4);
    // 0x80052140: lh          $v1, 0x4($s5)
    ctx->r3 = MEM_H(ctx->r21, 0X4);
    // 0x80052144: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80052148: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8005214C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80052150: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80052154: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80052158: jal         0x8009A3B4
    // 0x8005215C: addiu       $a0, $a0, 0xC0
    ctx->r4 = ADD32(ctx->r4, 0XC0);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8005215C: addiu       $a0, $a0, 0xC0
    ctx->r4 = ADD32(ctx->r4, 0XC0);
    after_2:
L_80052160:
    // 0x80052160: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    // 0x80052164: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80052168: sltiu       $v0, $s0, 0x18
    ctx->r2 = ctx->r16 < 0X18 ? 1 : 0;
    // 0x8005216C: bne         $v0, $zero, L_80052108
    if (ctx->r2 != 0) {
        // 0x80052170: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80052108;
    }
    // 0x80052170: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80052174:
    // 0x80052174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80052178:
    // 0x80052178: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8005217C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80052180: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80052184: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80052188: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8005218C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80052190: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80052194: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80052198: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8005219C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800521A0: jr          $ra
    // 0x800521A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x800521A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80031600_CA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031600: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80031604: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80031608: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8003160C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80031610: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80031614: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80031618: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8003161C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80031620: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80031624: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x80031628: jal         0x80032510
    // 0x8003162C: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    func_80032510_D910(rdram, ctx);
        goto after_0;
    // 0x8003162C: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80031630: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x80031634: jal         0x800324D0
    // 0x80031638: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_1;
    // 0x80031638: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8003163C: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    // 0x80031640: jal         0x80032510
    // 0x80031644: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    func_80032510_D910(rdram, ctx);
        goto after_2;
    // 0x80031644: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    after_2:
    // 0x80031648: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    // 0x8003164C: jal         0x800324D0
    // 0x80031650: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_3;
    // 0x80031650: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80031654: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80031658: jal         0x80032510
    // 0x8003165C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_80032510_D910(rdram, ctx);
        goto after_4;
    // 0x8003165C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_4:
    // 0x80031660: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80031664: jal         0x800324D0
    // 0x80031668: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_5;
    // 0x80031668: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_5:
    // 0x8003166C: nop

    // 0x80031670: mult        $s2, $s4
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031674: mflo        $t2
    ctx->r10 = lo;
    // 0x80031678: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
    // 0x8003167C: nop

    // 0x80031680: mult        $s1, $t1
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031684: mflo        $t3
    ctx->r11 = lo;
    // 0x80031688: sra         $t2, $t2, 12
    ctx->r10 = S32(SIGNED(ctx->r10) >> 12);
    // 0x8003168C: nop

    // 0x80031690: mult        $t2, $s0
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031694: mflo        $t5
    ctx->r13 = lo;
    // 0x80031698: negu        $a0, $s1
    ctx->r4 = SUB32(0, ctx->r17);
    // 0x8003169C: nop

    // 0x800316A0: mult        $a0, $s0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800316A4: mflo        $a0
    ctx->r4 = lo;
    // 0x800316A8: nop

    // 0x800316AC: nop

    // 0x800316B0: mult        $t2, $t1
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800316B4: mflo        $t2
    ctx->r10 = lo;
    // 0x800316B8: nop

    // 0x800316BC: nop

    // 0x800316C0: mult        $s2, $s3
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800316C4: mflo        $a1
    ctx->r5 = lo;
    // 0x800316C8: nop

    // 0x800316CC: nop

    // 0x800316D0: mult        $s3, $s0
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800316D4: mflo        $a2
    ctx->r6 = lo;
    // 0x800316D8: nop

    // 0x800316DC: nop

    // 0x800316E0: mult        $s3, $t1
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800316E4: mflo        $a3
    ctx->r7 = lo;
    // 0x800316E8: nop

    // 0x800316EC: nop

    // 0x800316F0: mult        $s1, $s4
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800316F4: mflo        $t0
    ctx->r8 = lo;
    // 0x800316F8: negu        $v1, $s2
    ctx->r3 = SUB32(0, ctx->r18);
    // 0x800316FC: nop

    // 0x80031700: mult        $v1, $t1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031704: mflo        $v1
    ctx->r3 = lo;
    // 0x80031708: sra         $t0, $t0, 12
    ctx->r8 = S32(SIGNED(ctx->r8) >> 12);
    // 0x8003170C: nop

    // 0x80031710: mult        $t0, $s0
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031714: mflo        $t4
    ctx->r12 = lo;
    // 0x80031718: nop

    // 0x8003171C: nop

    // 0x80031720: mult        $s1, $s3
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031724: mflo        $s1
    ctx->r17 = lo;
    // 0x80031728: nop

    // 0x8003172C: nop

    // 0x80031730: mult        $s2, $s0
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031734: mflo        $s2
    ctx->r18 = lo;
    // 0x80031738: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x8003173C: negu        $s4, $s4
    ctx->r20 = SUB32(0, ctx->r20);
    // 0x80031740: sh          $s4, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r20;
    // 0x80031744: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x80031748: sra         $a2, $a2, 12
    ctx->r6 = S32(SIGNED(ctx->r6) >> 12);
    // 0x8003174C: sra         $a3, $a3, 12
    ctx->r7 = S32(SIGNED(ctx->r7) >> 12);
    // 0x80031750: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x80031754: sra         $t3, $t3, 12
    ctx->r11 = S32(SIGNED(ctx->r11) >> 12);
    // 0x80031758: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x8003175C: mult        $t0, $t1
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031760: mflo        $t0
    ctx->r8 = lo;
    // 0x80031764: sra         $a0, $a0, 12
    ctx->r4 = S32(SIGNED(ctx->r4) >> 12);
    // 0x80031768: sh          $a1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r5;
    // 0x8003176C: sh          $a2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r6;
    // 0x80031770: sh          $a3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r7;
    // 0x80031774: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    // 0x80031778: sh          $a0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r4;
    // 0x8003177C: sra         $s1, $s1, 12
    ctx->r17 = S32(SIGNED(ctx->r17) >> 12);
    // 0x80031780: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x80031784: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80031788: addu        $s2, $s2, $t0
    ctx->r18 = ADD32(ctx->r18, ctx->r8);
    // 0x8003178C: sra         $s2, $s2, 12
    ctx->r18 = S32(SIGNED(ctx->r18) >> 12);
    // 0x80031790: sh          $s1, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r17;
    // 0x80031794: sh          $v1, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r3;
    // 0x80031798: sh          $s2, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r18;
    // 0x8003179C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x800317A0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x800317A4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x800317A8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x800317AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800317B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800317B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800317B8: jr          $ra
    // 0x800317BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800317BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80036B38_11F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036B38: jr          $ra
    // 0x80036B3C: nop

    TRACE_RETURN()
    return;
    // 0x80036B3C: nop

;}
RECOMP_FUNC void func_8003F334_1A734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F334: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8003F338: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8003F33C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8003F340: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8003F344: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8003F348: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x8003F34C: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8003F350: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x8003F354: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8003F358: addiu       $s3, $zero, -0x7FFF
    ctx->r19 = ADD32(0, -0X7FFF);
    // 0x8003F35C: andi        $v0, $s5, 0x2
    ctx->r2 = ctx->r21 & 0X2;
    // 0x8003F360: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8003F364: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x8003F368: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x8003F36C: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x8003F370: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8003F374: beq         $v0, $zero, L_8003F380
    if (ctx->r2 == 0) {
        // 0x8003F378: sw          $s0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r16;
            goto L_8003F380;
    }
    // 0x8003F378: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8003F37C: addiu       $s3, $zero, 0x7FFF
    ctx->r19 = ADD32(0, 0X7FFF);
L_8003F380:
    // 0x8003F380: lui         $s0, 0x801E
    ctx->r16 = S32(0X801E << 16);
    // 0x8003F384: addiu       $s0, $s0, -0x7158
    ctx->r16 = ADD32(ctx->r16, -0X7158);
    // 0x8003F388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8003F38C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8003F390: jal         0x8009A3B4
    // 0x8003F394: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8003F394: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8003F398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8003F39C: jal         0x80040D60
    // 0x8003F3A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80040D60_1C160(rdram, ctx);
        goto after_1;
    // 0x8003F3A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x8003F3A4: addu        $fp, $v0, $zero
    ctx->r30 = ADD32(ctx->r2, 0);
    // 0x8003F3A8: jal         0x80040EEC
    // 0x8003F3AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040EEC_1C2EC(rdram, ctx);
        goto after_2;
    // 0x8003F3AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8003F3B0: jal         0x8004DA68
    // 0x8003F3B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_3;
    // 0x8003F3B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8003F3B8: addu        $v1, $fp, $zero
    ctx->r3 = ADD32(ctx->r30, 0);
    // 0x8003F3BC: addiu       $fp, $fp, -0x1
    ctx->r30 = ADD32(ctx->r30, -0X1);
    // 0x8003F3C0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8003F3C4: beq         $v1, $zero, L_8003F720
    if (ctx->r3 == 0) {
        // 0x8003F3C8: sll         $t3, $v0, 15
        ctx->r11 = S32(ctx->r2 << 15);
            goto L_8003F720;
    }
    // 0x8003F3C8: sll         $t3, $v0, 15
    ctx->r11 = S32(ctx->r2 << 15);
    // 0x8003F3CC: lui         $a3, 0x8022
    ctx->r7 = S32(0X8022 << 16);
    // 0x8003F3D0: addiu       $a3, $a3, -0x26B4
    ctx->r7 = ADD32(ctx->r7, -0X26B4);
    // 0x8003F3D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8003F3D8: slti        $a2, $s5, 0x2
    ctx->r6 = SIGNED(ctx->r21) < 0X2 ? 1 : 0;
    // 0x8003F3DC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8003F3E0: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
L_8003F3E4:
    // 0x8003F3E4: sll         $v0, $fp, 1
    ctx->r2 = S32(ctx->r30 << 1);
    // 0x8003F3E8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F3EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8003F3F0: lh          $v0, -0x3C88($at)
    ctx->r2 = MEM_H(ctx->r1, -0X3C88);
    // 0x8003F3F4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8003F3F8: lw          $v1, -0x35C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X35C0);
    // 0x8003F3FC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8003F400: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003F404: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x8003F408: blez        $a0, L_8003F718
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8003F40C: addu        $v0, $fp, $zero
        ctx->r2 = ADD32(ctx->r30, 0);
            goto L_8003F718;
    }
    // 0x8003F40C: addu        $v0, $fp, $zero
    ctx->r2 = ADD32(ctx->r30, 0);
    // 0x8003F410: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8003F414: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8003F418: lw          $v1, 0xB5C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB5C);
    // 0x8003F41C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003F420: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003F424: addu        $a0, $v1, $v0
    ctx->r4 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F428: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x8003F42C: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x8003F430: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8003F434: beq         $v0, $zero, L_8003F450
    if (ctx->r2 == 0) {
        // 0x8003F438: nop
    
            goto L_8003F450;
    }
    // 0x8003F438: nop

    // 0x8003F43C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003F440: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003F444: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8003F448: j           L_8003F460
    // 0x8003F44C: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
        goto L_8003F460;
    // 0x8003F44C: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
L_8003F450:
    // 0x8003F450: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003F454: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003F458: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x8003F45C: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
L_8003F460:
    // 0x8003F460: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8003F464: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8003F468: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x8003F46C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8003F470: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8003F474: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x8003F478: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x8003F47C: beq         $v0, $zero, L_8003F718
    if (ctx->r2 == 0) {
        // 0x8003F480: addu        $v0, $fp, $zero
        ctx->r2 = ADD32(ctx->r30, 0);
            goto L_8003F718;
    }
    // 0x8003F480: addu        $v0, $fp, $zero
    ctx->r2 = ADD32(ctx->r30, 0);
    // 0x8003F484: lui         $s7, 0x801E
    ctx->r23 = S32(0X801E << 16);
    // 0x8003F488: addiu       $s7, $s7, -0x7156
    ctx->r23 = ADD32(ctx->r23, -0X7156);
    // 0x8003F48C: addiu       $s1, $s4, 0x8
    ctx->r17 = ADD32(ctx->r20, 0X8);
L_8003F490:
    // 0x8003F490: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x8003F494: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x8003F498: lhu         $a0, 0x0($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X0);
    // 0x8003F49C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F4A0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003F4A4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8003F4A8: lhu         $v0, -0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X6);
    // 0x8003F4AC: lhu         $a0, -0x2($a3)
    ctx->r4 = MEM_HU(ctx->r7, -0X2);
    // 0x8003F4B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F4B4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8003F4B8: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8003F4BC: lhu         $v1, 0x24($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X24);
    // 0x8003F4C0: lhu         $v0, -0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X4);
    // 0x8003F4C4: lhu         $a0, 0x4($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X4);
    // 0x8003F4C8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F4CC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003F4D0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8003F4D4: lhu         $v0, -0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X2);
    // 0x8003F4D8: lhu         $a0, 0x2($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X2);
    // 0x8003F4DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F4E0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8003F4E4: sh          $v1, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r3;
    // 0x8003F4E8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003F4EC: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003F4F0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8003F4F4: beq         $s5, $t2, L_8003F55C
    if (ctx->r21 == ctx->r10) {
        // 0x8003F4F8: addu        $s2, $v1, $v0
        ctx->r18 = ADD32(ctx->r3, ctx->r2);
            goto L_8003F55C;
    }
    // 0x8003F4F8: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F4FC: beq         $a2, $zero, L_8003F514
    if (ctx->r6 == 0) {
        // 0x8003F500: nop
    
            goto L_8003F514;
    }
    // 0x8003F500: nop

    // 0x8003F504: beq         $s5, $zero, L_8003F52C
    if (ctx->r21 == 0) {
        // 0x8003F508: nop
    
            goto L_8003F52C;
    }
    // 0x8003F508: nop

    // 0x8003F50C: j           L_8003F584
    // 0x8003F510: nop

        goto L_8003F584;
    // 0x8003F510: nop

L_8003F514:
    // 0x8003F514: beq         $s5, $t1, L_8003F52C
    if (ctx->r21 == ctx->r9) {
        // 0x8003F518: nop
    
            goto L_8003F52C;
    }
    // 0x8003F518: nop

    // 0x8003F51C: beq         $s5, $t0, L_8003F55C
    if (ctx->r21 == ctx->r8) {
        // 0x8003F520: nop
    
            goto L_8003F55C;
    }
    // 0x8003F520: nop

    // 0x8003F524: j           L_8003F584
    // 0x8003F528: nop

        goto L_8003F584;
    // 0x8003F528: nop

L_8003F52C:
    // 0x8003F52C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003F530: lh          $v1, -0x7158($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7158);
    // 0x8003F534: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x8003F538: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003F53C: beql        $v0, $zero, L_8003F708
    if (ctx->r2 == 0) {
        // 0x8003F540: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_8003F708;
    }
    goto skip_0;
    // 0x8003F540: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    skip_0:
    // 0x8003F544: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x8003F548: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003F54C: bne         $v0, $zero, L_8003F584
    if (ctx->r2 != 0) {
        // 0x8003F550: nop
    
            goto L_8003F584;
    }
    // 0x8003F550: nop

    // 0x8003F554: j           L_8003F708
    // 0x8003F558: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
        goto L_8003F708;
    // 0x8003F558: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
L_8003F55C:
    // 0x8003F55C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003F560: lh          $v1, -0x7154($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7154);
    // 0x8003F564: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x8003F568: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003F56C: beql        $v0, $zero, L_8003F708
    if (ctx->r2 == 0) {
        // 0x8003F570: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_8003F708;
    }
    goto skip_1;
    // 0x8003F570: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    skip_1:
    // 0x8003F574: lh          $v0, 0x16($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X16);
    // 0x8003F578: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003F57C: beql        $v0, $zero, L_8003F708
    if (ctx->r2 == 0) {
        // 0x8003F580: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_8003F708;
    }
    goto skip_2;
    // 0x8003F580: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    skip_2:
L_8003F584:
    // 0x8003F584: lw          $s6, 0x4($s1)
    ctx->r22 = MEM_W(ctx->r17, 0X4);
    // 0x8003F588: addiu       $s0, $s2, 0x4
    ctx->r16 = ADD32(ctx->r18, 0X4);
L_8003F58C:
    // 0x8003F58C: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x8003F590: xori        $v0, $t3, 0x8000
    ctx->r2 = ctx->r11 ^ 0X8000;
    // 0x8003F594: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003F598: bnel        $v1, $zero, L_8003F6F8
    if (ctx->r3 != 0) {
        // 0x8003F59C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003F6F8;
    }
    goto skip_3;
    // 0x8003F59C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_3:
    // 0x8003F5A0: lhu         $v1, 0x22($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X22);
    // 0x8003F5A4: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8003F5A8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F5AC: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8003F5B0: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x8003F5B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F5B8: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    // 0x8003F5BC: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x8003F5C0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8003F5C4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8003F5C8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8003F5CC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8003F5D0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x8003F5D4: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x8003F5D8: jal         0x8003FC30
    // 0x8003F5DC: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    func_8003FC30_1B030(rdram, ctx);
        goto after_4;
    // 0x8003F5DC: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    after_4:
    // 0x8003F5E0: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x8003F5E4: lh          $v1, 0x0($s7)
    ctx->r3 = MEM_H(ctx->r23, 0X0);
    // 0x8003F5E8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8003F5EC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8003F5F0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8003F5F4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8003F5F8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8003F5FC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8003F600: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003F604: beql        $v0, $zero, L_8003F6F8
    if (ctx->r2 == 0) {
        // 0x8003F608: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003F6F8;
    }
    goto skip_4;
    // 0x8003F608: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_4:
    // 0x8003F60C: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x8003F610: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003F614: beql        $v0, $zero, L_8003F6F8
    if (ctx->r2 == 0) {
        // 0x8003F618: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003F6F8;
    }
    goto skip_5;
    // 0x8003F618: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_5:
    // 0x8003F61C: beq         $s5, $t2, L_8003F680
    if (ctx->r21 == ctx->r10) {
        // 0x8003F620: nop
    
            goto L_8003F680;
    }
    // 0x8003F620: nop

    // 0x8003F624: beq         $a2, $zero, L_8003F63C
    if (ctx->r6 == 0) {
        // 0x8003F628: nop
    
            goto L_8003F63C;
    }
    // 0x8003F628: nop

    // 0x8003F62C: beq         $s5, $zero, L_8003F654
    if (ctx->r21 == 0) {
        // 0x8003F630: nop
    
            goto L_8003F654;
    }
    // 0x8003F630: nop

    // 0x8003F634: j           L_8003F6F8
    // 0x8003F638: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_8003F6F8;
    // 0x8003F638: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8003F63C:
    // 0x8003F63C: beq         $s5, $t1, L_8003F6AC
    if (ctx->r21 == ctx->r9) {
        // 0x8003F640: nop
    
            goto L_8003F6AC;
    }
    // 0x8003F640: nop

    // 0x8003F644: beq         $s5, $t0, L_8003F6CC
    if (ctx->r21 == ctx->r8) {
        // 0x8003F648: nop
    
            goto L_8003F6CC;
    }
    // 0x8003F648: nop

    // 0x8003F64C: j           L_8003F6F8
    // 0x8003F650: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_8003F6F8;
    // 0x8003F650: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8003F654:
    // 0x8003F654: lh          $a0, 0x16($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X16);
    // 0x8003F658: slt         $v0, $s3, $a0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8003F65C: beql        $v0, $zero, L_8003F6F8
    if (ctx->r2 == 0) {
        // 0x8003F660: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003F6F8;
    }
    goto skip_6;
    // 0x8003F660: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_6:
    // 0x8003F664: lh          $v1, 0x2($s7)
    ctx->r3 = MEM_H(ctx->r23, 0X2);
    // 0x8003F668: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x8003F66C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003F670: beql        $v0, $zero, L_8003F6F8
    if (ctx->r2 == 0) {
        // 0x8003F674: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003F6F8;
    }
    goto skip_7;
    // 0x8003F674: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_7:
    // 0x8003F678: j           L_8003F6F4
    // 0x8003F67C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
        goto L_8003F6F4;
    // 0x8003F67C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
L_8003F680:
    // 0x8003F680: lh          $a0, 0x12($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X12);
    // 0x8003F684: slt         $v0, $s3, $a0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8003F688: beql        $v0, $zero, L_8003F6F8
    if (ctx->r2 == 0) {
        // 0x8003F68C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003F6F8;
    }
    goto skip_8;
    // 0x8003F68C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_8:
    // 0x8003F690: lh          $v1, -0x2($s7)
    ctx->r3 = MEM_H(ctx->r23, -0X2);
    // 0x8003F694: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x8003F698: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003F69C: beql        $v0, $zero, L_8003F6F8
    if (ctx->r2 == 0) {
        // 0x8003F6A0: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003F6F8;
    }
    goto skip_9;
    // 0x8003F6A0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_9:
    // 0x8003F6A4: j           L_8003F6F4
    // 0x8003F6A8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
        goto L_8003F6F4;
    // 0x8003F6A8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
L_8003F6AC:
    // 0x8003F6AC: lh          $a0, 0x14($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X14);
    // 0x8003F6B0: slt         $v0, $a0, $s3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8003F6B4: beql        $v0, $zero, L_8003F6F8
    if (ctx->r2 == 0) {
        // 0x8003F6B8: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003F6F8;
    }
    goto skip_10;
    // 0x8003F6B8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_10:
    // 0x8003F6BC: lh          $v1, 0x2($s7)
    ctx->r3 = MEM_H(ctx->r23, 0X2);
    // 0x8003F6C0: lh          $v0, 0x16($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X16);
    // 0x8003F6C4: j           L_8003F6E8
    // 0x8003F6C8: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
        goto L_8003F6E8;
    // 0x8003F6C8: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
L_8003F6CC:
    // 0x8003F6CC: lh          $a0, 0x10($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X10);
    // 0x8003F6D0: slt         $v0, $a0, $s3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8003F6D4: beql        $v0, $zero, L_8003F6F8
    if (ctx->r2 == 0) {
        // 0x8003F6D8: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003F6F8;
    }
    goto skip_11;
    // 0x8003F6D8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_11:
    // 0x8003F6DC: lh          $v1, -0x2($s7)
    ctx->r3 = MEM_H(ctx->r23, -0X2);
    // 0x8003F6E0: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x8003F6E4: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
L_8003F6E8:
    // 0x8003F6E8: beql        $v1, $zero, L_8003F6F8
    if (ctx->r3 == 0) {
        // 0x8003F6EC: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003F6F8;
    }
    goto skip_12;
    // 0x8003F6EC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_12:
    // 0x8003F6F0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
L_8003F6F4:
    // 0x8003F6F4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8003F6F8:
    // 0x8003F6F8: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x8003F6FC: bne         $s6, $zero, L_8003F58C
    if (ctx->r22 != 0) {
        // 0x8003F700: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_8003F58C;
    }
    // 0x8003F700: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x8003F704: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
L_8003F708:
    // 0x8003F708: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8003F70C: bne         $v0, $zero, L_8003F490
    if (ctx->r2 != 0) {
        // 0x8003F710: addiu       $s4, $s4, 0x10
        ctx->r20 = ADD32(ctx->r20, 0X10);
            goto L_8003F490;
    }
    // 0x8003F710: addiu       $s4, $s4, 0x10
    ctx->r20 = ADD32(ctx->r20, 0X10);
    // 0x8003F714: addu        $v0, $fp, $zero
    ctx->r2 = ADD32(ctx->r30, 0);
L_8003F718:
    // 0x8003F718: bne         $v0, $zero, L_8003F3E4
    if (ctx->r2 != 0) {
        // 0x8003F71C: addiu       $fp, $fp, -0x1
        ctx->r30 = ADD32(ctx->r30, -0X1);
            goto L_8003F3E4;
    }
    // 0x8003F71C: addiu       $fp, $fp, -0x1
    ctx->r30 = ADD32(ctx->r30, -0X1);
L_8003F720:
    // 0x8003F720: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x8003F724: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8003F728: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x8003F72C: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x8003F730: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8003F734: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x8003F738: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8003F73C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8003F740: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8003F744: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8003F748: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8003F74C: jr          $ra
    // 0x8003F750: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8003F750: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80044234_1F634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80044234: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x80044238: beq         $a1, $v0, L_800442A8
    if (ctx->r5 == ctx->r2) {
        // 0x8004423C: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_800442A8;
    }
    // 0x8004423C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80044240: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80044244: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80044248: lhu         $v1, -0x26B4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X26B4);
    // 0x8004424C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80044250: lhu         $v1, 0x2($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X2);
    // 0x80044254: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80044258: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8004425C: lhu         $a0, -0x26B6($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B6);
    // 0x80044260: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80044264: sra         $t5, $v0, 16
    ctx->r13 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80044268: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8004426C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80044270: sh          $v1, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r3;
    // 0x80044274: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80044278: lhu         $a0, -0x26B0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B0);
    // 0x8004427C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80044280: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80044284: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80044288: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8004428C: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x80044290: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80044294: lhu         $a0, -0x26B2($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B2);
    // 0x80044298: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004429C: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800442A0: j           L_8004430C
    // 0x800442A4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
        goto L_8004430C;
    // 0x800442A4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
L_800442A8:
    // 0x800442A8: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x800442AC: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x800442B0: lhu         $v1, -0x26B4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X26B4);
    // 0x800442B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800442B8: lhu         $v1, 0x2($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X2);
    // 0x800442BC: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x800442C0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800442C4: lhu         $a0, -0x26B6($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B6);
    // 0x800442C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800442CC: sra         $t5, $v0, 16
    ctx->r13 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800442D0: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x800442D4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x800442D8: sh          $v1, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r3;
    // 0x800442DC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800442E0: lhu         $a0, -0x26B0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B0);
    // 0x800442E4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x800442E8: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x800442EC: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x800442F0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800442F4: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x800442F8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800442FC: lhu         $a0, -0x26B2($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B2);
    // 0x80044300: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80044304: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80044308: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
L_8004430C:
    // 0x8004430C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80044310: sra         $t2, $v0, 16
    ctx->r10 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80044314: sh          $v1, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r3;
    // 0x80044318: lui         $t3, 0x801E
    ctx->r11 = S32(0X801E << 16);
    // 0x8004431C: lh          $t3, -0x7154($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X7154);
    // 0x80044320: subu        $t0, $t4, $t5
    ctx->r8 = SUB32(ctx->r12, ctx->r13);
    // 0x80044324: subu        $v0, $t3, $t1
    ctx->r2 = SUB32(ctx->r11, ctx->r9);
    // 0x80044328: mult        $v0, $t0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004432C: mflo        $v0
    ctx->r2 = lo;
    // 0x80044330: subu        $a1, $t2, $t1
    ctx->r5 = SUB32(ctx->r10, ctx->r9);
    // 0x80044334: nop

    // 0x80044338: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8004433C: bne         $a1, $zero, L_80044348
    if (ctx->r5 != 0) {
        // 0x80044340: nop
    
            goto L_80044348;
    }
    // 0x80044340: nop

    // 0x80044344: break       7
    do_break(2147763012);
L_80044348:
    // 0x80044348: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004434C: bne         $a1, $at, L_80044360
    if (ctx->r5 != ctx->r1) {
        // 0x80044350: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80044360;
    }
    // 0x80044350: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80044354: bne         $v0, $at, L_80044360
    if (ctx->r2 != ctx->r1) {
        // 0x80044358: nop
    
            goto L_80044360;
    }
    // 0x80044358: nop

    // 0x8004435C: break       6
    do_break(2147763036);
L_80044360:
    // 0x80044360: mflo        $v0
    ctx->r2 = lo;
    // 0x80044364: subu        $v0, $t4, $v0
    ctx->r2 = SUB32(ctx->r12, ctx->r2);
    // 0x80044368: addiu       $a3, $v0, -0x4
    ctx->r7 = ADD32(ctx->r2, -0X4);
    // 0x8004436C: slt         $v0, $a3, $t5
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80044370: bnel        $v0, $zero, L_80044378
    if (ctx->r2 != 0) {
        // 0x80044374: addu        $a3, $t5, $zero
        ctx->r7 = ADD32(ctx->r13, 0);
            goto L_80044378;
    }
    goto skip_0;
    // 0x80044374: addu        $a3, $t5, $zero
    ctx->r7 = ADD32(ctx->r13, 0);
    skip_0:
L_80044378:
    // 0x80044378: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8004437C: lh          $a0, -0x7158($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7158);
    // 0x80044380: subu        $v0, $a0, $t5
    ctx->r2 = SUB32(ctx->r4, ctx->r13);
    // 0x80044384: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80044388: mflo        $v0
    ctx->r2 = lo;
    // 0x8004438C: nop

    // 0x80044390: nop

    // 0x80044394: div         $zero, $v0, $t0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r8)));
    // 0x80044398: bne         $t0, $zero, L_800443A4
    if (ctx->r8 != 0) {
        // 0x8004439C: nop
    
            goto L_800443A4;
    }
    // 0x8004439C: nop

    // 0x800443A0: break       7
    do_break(2147763104);
L_800443A4:
    // 0x800443A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800443A8: bne         $t0, $at, L_800443BC
    if (ctx->r8 != ctx->r1) {
        // 0x800443AC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800443BC;
    }
    // 0x800443AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800443B0: bne         $v0, $at, L_800443BC
    if (ctx->r2 != ctx->r1) {
        // 0x800443B4: nop
    
            goto L_800443BC;
    }
    // 0x800443B4: nop

    // 0x800443B8: break       6
    do_break(2147763128);
L_800443BC:
    // 0x800443BC: mflo        $v0
    ctx->r2 = lo;
    // 0x800443C0: subu        $v0, $t2, $v0
    ctx->r2 = SUB32(ctx->r10, ctx->r2);
    // 0x800443C4: addiu       $a2, $v0, -0x4
    ctx->r6 = ADD32(ctx->r2, -0X4);
    // 0x800443C8: slt         $v0, $a2, $t1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800443CC: bnel        $v0, $zero, L_800443D4
    if (ctx->r2 != 0) {
        // 0x800443D0: addu        $a2, $t1, $zero
        ctx->r6 = ADD32(ctx->r9, 0);
            goto L_800443D4;
    }
    goto skip_1;
    // 0x800443D0: addu        $a2, $t1, $zero
    ctx->r6 = ADD32(ctx->r9, 0);
    skip_1:
L_800443D4:
    // 0x800443D4: slt         $v0, $a3, $a0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800443D8: beq         $v0, $zero, L_800444CC
    if (ctx->r2 == 0) {
        // 0x800443DC: slt         $v0, $a0, $t4
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r12) ? 1 : 0;
            goto L_800444CC;
    }
    // 0x800443DC: slt         $v0, $a0, $t4
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800443E0: beq         $v0, $zero, L_800444CC
    if (ctx->r2 == 0) {
        // 0x800443E4: slt         $v0, $a2, $t3
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r11) ? 1 : 0;
            goto L_800444CC;
    }
    // 0x800443E4: slt         $v0, $a2, $t3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800443E8: beq         $v0, $zero, L_800444CC
    if (ctx->r2 == 0) {
        // 0x800443EC: slt         $v0, $t3, $t2
        ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_800444CC;
    }
    // 0x800443EC: slt         $v0, $t3, $t2
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800443F0: beq         $v0, $zero, L_800444D0
    if (ctx->r2 == 0) {
        // 0x800443F4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800444D0;
    }
    // 0x800443F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800443F8: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x800443FC: lh          $t3, 0x47E0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X47E0);
    // 0x80044400: subu        $v1, $t3, $t1
    ctx->r3 = SUB32(ctx->r11, ctx->r9);
    // 0x80044404: mult        $v1, $t0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80044408: mflo        $v1
    ctx->r3 = lo;
    // 0x8004440C: nop

    // 0x80044410: nop

    // 0x80044414: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x80044418: bne         $a1, $zero, L_80044424
    if (ctx->r5 != 0) {
        // 0x8004441C: nop
    
            goto L_80044424;
    }
    // 0x8004441C: nop

    // 0x80044420: break       7
    do_break(2147763232);
L_80044424:
    // 0x80044424: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80044428: bne         $a1, $at, L_8004443C
    if (ctx->r5 != ctx->r1) {
        // 0x8004442C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004443C;
    }
    // 0x8004442C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80044430: bne         $v1, $at, L_8004443C
    if (ctx->r3 != ctx->r1) {
        // 0x80044434: nop
    
            goto L_8004443C;
    }
    // 0x80044434: nop

    // 0x80044438: break       6
    do_break(2147763256);
L_8004443C:
    // 0x8004443C: mflo        $v1
    ctx->r3 = lo;
    // 0x80044440: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80044444: lh          $a0, 0x47DC($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X47DC);
    // 0x80044448: subu        $v0, $a0, $t5
    ctx->r2 = SUB32(ctx->r4, ctx->r13);
    // 0x8004444C: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80044450: mflo        $v0
    ctx->r2 = lo;
    // 0x80044454: nop

    // 0x80044458: nop

    // 0x8004445C: div         $zero, $v0, $t0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r8)));
    // 0x80044460: bne         $t0, $zero, L_8004446C
    if (ctx->r8 != 0) {
        // 0x80044464: nop
    
            goto L_8004446C;
    }
    // 0x80044464: nop

    // 0x80044468: break       7
    do_break(2147763304);
L_8004446C:
    // 0x8004446C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80044470: bne         $t0, $at, L_80044484
    if (ctx->r8 != ctx->r1) {
        // 0x80044474: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80044484;
    }
    // 0x80044474: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80044478: bne         $v0, $at, L_80044484
    if (ctx->r2 != ctx->r1) {
        // 0x8004447C: nop
    
            goto L_80044484;
    }
    // 0x8004447C: nop

    // 0x80044480: break       6
    do_break(2147763328);
L_80044484:
    // 0x80044484: mflo        $v0
    ctx->r2 = lo;
    // 0x80044488: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004448C: sh          $a3, -0x3FAC($at)
    MEM_H(-0X3FAC, ctx->r1) = ctx->r7;
    // 0x80044490: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80044494: sh          $t4, -0x72D0($at)
    MEM_H(-0X72D0, ctx->r1) = ctx->r12;
    // 0x80044498: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004449C: sh          $a2, -0x3FA8($at)
    MEM_H(-0X3FA8, ctx->r1) = ctx->r6;
    // 0x800444A0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800444A4: sh          $t2, -0x72CC($at)
    MEM_H(-0X72CC, ctx->r1) = ctx->r10;
    // 0x800444A8: subu        $a3, $t4, $v1
    ctx->r7 = SUB32(ctx->r12, ctx->r3);
    // 0x800444AC: slt         $a0, $a3, $a0
    ctx->r4 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800444B0: bne         $a0, $zero, L_800444C4
    if (ctx->r4 != 0) {
        // 0x800444B4: subu        $a2, $t2, $v0
        ctx->r6 = SUB32(ctx->r10, ctx->r2);
            goto L_800444C4;
    }
    // 0x800444B4: subu        $a2, $t2, $v0
    ctx->r6 = SUB32(ctx->r10, ctx->r2);
    // 0x800444B8: slt         $v0, $a2, $t3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800444BC: beq         $v0, $zero, L_800444D0
    if (ctx->r2 == 0) {
        // 0x800444C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800444D0;
    }
    // 0x800444C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800444C4:
    // 0x800444C4: j           L_800444D0
    // 0x800444C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800444D0;
    // 0x800444C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800444CC:
    // 0x800444CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800444D0:
    // 0x800444D0: jr          $ra
    // 0x800444D4: nop

    TRACE_RETURN()
    return;
    // 0x800444D4: nop

;}
