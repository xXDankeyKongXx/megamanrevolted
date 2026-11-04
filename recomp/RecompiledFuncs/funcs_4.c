#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8003BB80_16F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BB80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003BB84: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003BB88: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8003BB8C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003BB90: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8003BB94: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003BB98: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x8003BB9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003BBA0: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x8003BBA4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8003BBA8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8003BBAC: jal         0x8009A2B0
    // 0x8003BBB0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8003BBB0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8003BBB4: beq         $s1, $zero, L_8003BC3C
    if (ctx->r17 == 0) {
        // 0x8003BBB8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8003BC3C;
    }
    // 0x8003BBB8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8003BBBC: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8003BBC0: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x8003BBC4: beq         $v0, $zero, L_8003BC38
    if (ctx->r2 == 0) {
        // 0x8003BBC8: sll         $a0, $s2, 6
        ctx->r4 = S32(ctx->r18 << 6);
            goto L_8003BC38;
    }
    // 0x8003BBC8: sll         $a0, $s2, 6
    ctx->r4 = S32(ctx->r18 << 6);
    // 0x8003BBCC: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x8003BBD0: lh          $v0, 0x8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8);
    // 0x8003BBD4: slti        $v1, $v1, 0x0
    ctx->r3 = SIGNED(ctx->r3) < 0X0 ? 1 : 0;
    // 0x8003BBD8: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x8003BBDC: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x8003BBE0: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x8003BBE4: lh          $v0, 0xA($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XA);
    // 0x8003BBE8: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x8003BBEC: sb          $v0, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r2;
    // 0x8003BBF0: lh          $v0, 0x18($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X18);
    // 0x8003BBF4: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x8003BBF8: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x8003BBFC: lh          $v0, 0x1A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1A);
    // 0x8003BC00: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x8003BC04: sb          $v0, 0x13($sp)
    MEM_B(0X13, ctx->r29) = ctx->r2;
    // 0x8003BC08: lh          $v0, 0x28($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X28);
    // 0x8003BC0C: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x8003BC10: sb          $v0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r2;
    // 0x8003BC14: lh          $v0, 0x2A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2A);
    // 0x8003BC18: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x8003BC1C: sb          $v0, 0x15($sp)
    MEM_B(0X15, ctx->r29) = ctx->r2;
    // 0x8003BC20: lh          $v0, 0x38($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X38);
    // 0x8003BC24: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x8003BC28: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    // 0x8003BC2C: lh          $v0, 0x3A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3A);
    // 0x8003BC30: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x8003BC34: sb          $v0, 0x17($sp)
    MEM_B(0X17, ctx->r29) = ctx->r2;
L_8003BC38:
    // 0x8003BC38: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8003BC3C:
    // 0x8003BC3C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8003BC40: jal         0x8009A3B4
    // 0x8003BC44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8003BC44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8003BC48: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x8003BC4C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8003BC50: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003BC54: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003BC58: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003BC5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003BC60: jr          $ra
    // 0x8003BC64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8003BC64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80034E3C_1023C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034E3C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80034E40: lw          $v0, 0x2828($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2828);
    // 0x80034E44: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80034E48: lw          $v1, 0x2824($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2824);
    // 0x80034E4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034E50: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80034E54: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80034E58: sb          $v0, -0x3A4F($at)
    MEM_B(-0X3A4F, ctx->r1) = ctx->r2;
    // 0x80034E5C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80034E60: jal         0x80034E74
    // 0x80034E64: sb          $v1, -0x3A50($at)
    MEM_B(-0X3A50, ctx->r1) = ctx->r3;
    func_80034E74_10274(rdram, ctx);
        goto after_0;
    // 0x80034E64: sb          $v1, -0x3A50($at)
    MEM_B(-0X3A50, ctx->r1) = ctx->r3;
    after_0:
    // 0x80034E68: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80034E6C: jr          $ra
    // 0x80034E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80034E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002FDA8_B1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002FDA8: beq         $a0, $zero, L_8002FDB8
    if (ctx->r4 == 0) {
        // 0x8002FDAC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8002FDB8;
    }
    // 0x8002FDAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8002FDB0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002FDB4: lw          $v0, -0x450($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X450);
L_8002FDB8:
    // 0x8002FDB8: jr          $ra
    // 0x8002FDBC: nop

    TRACE_RETURN()
    return;
    // 0x8002FDBC: nop

;}
RECOMP_FUNC void func_8008A2C8_656C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008A2C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008A2CC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8008A2D0: lbu         $v1, -0x14B0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X14B0);
    // 0x8008A2D4: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8008A2D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008A2DC: bne         $v1, $v0, L_8008A340
    if (ctx->r3 != ctx->r2) {
        // 0x8008A2E0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8008A340;
    }
    // 0x8008A2E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8008A2E4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8008A2E8: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8008A2EC: addiu       $a1, $a1, -0x22E0
    ctx->r5 = ADD32(ctx->r5, -0X22E0);
    // 0x8008A2F0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8008A2F4: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x8008A2F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A2FC: sw          $v0, -0x22DC($at)
    MEM_W(-0X22DC, ctx->r1) = ctx->r2;
    // 0x8008A300: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x8008A304: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8008A308: addiu       $a0, $a0, 0x50B4
    ctx->r4 = ADD32(ctx->r4, 0X50B4);
    // 0x8008A30C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A310: sw          $v0, -0x2300($at)
    MEM_W(-0X2300, ctx->r1) = ctx->r2;
    // 0x8008A314: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
    // 0x8008A318: addiu       $a1, $a1, -0x40
    ctx->r5 = ADD32(ctx->r5, -0X40);
    // 0x8008A31C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008A320: sw          $v0, -0x22F8($at)
    MEM_W(-0X22F8, ctx->r1) = ctx->r2;
    // 0x8008A324: jal         0x8009A710
    // 0x8008A328: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8008A328: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8008A32C: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8008A330: addiu       $a0, $a0, 0x5418
    ctx->r4 = ADD32(ctx->r4, 0X5418);
    // 0x8008A334: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008A338: jal         0x8009A5E0
    // 0x8008A33C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8008A33C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_8008A340:
    // 0x8008A340: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008A344: lw          $v0, -0x14AC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X14AC);
    // 0x8008A348: beq         $v0, $zero, L_8008A37C
    if (ctx->r2 == 0) {
        // 0x8008A34C: nop
    
            goto L_8008A37C;
    }
    // 0x8008A34C: nop

    // 0x8008A350: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8008A354: lbu         $a1, -0x14AF($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X14AF);
    // 0x8008A358: beq         $a1, $zero, L_8008A37C
    if (ctx->r5 == 0) {
        // 0x8008A35C: nop
    
            goto L_8008A37C;
    }
    // 0x8008A35C: nop

    // 0x8008A360: jalr        $v0
    // 0x8008A364: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8008A364: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8008A368: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008A36C: lbu         $v0, -0x14AF($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X14AF);
    // 0x8008A370: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8008A374: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008A378: sb          $v0, -0x14AF($at)
    MEM_B(-0X14AF, ctx->r1) = ctx->r2;
L_8008A37C:
    // 0x8008A37C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8008A380: jr          $ra
    // 0x8008A384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008A384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008A388: nop

    // 0x8008A38C: nop

;}
RECOMP_FUNC void alAdpcmPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80096250: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80096254: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x80096258: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8009625C: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x80096260: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80096264: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x80096268: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8009626C: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x80096270: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80096274: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80096278: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8009627C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80096280: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80096284: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80096288: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8009628C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80096290: beq         $s4, $zero, L_80096660
    if (ctx->r20 == 0) {
        // 0x80096294: addu        $a1, $t0, $zero
        ctx->r5 = ADD32(ctx->r8, 0);
            goto L_80096660;
    }
    // 0x80096294: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    // 0x80096298: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x8009629C: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x800962A0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x800962A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800962A8: lui         $v1, 0xB00
    ctx->r3 = S32(0XB00 << 16);
    // 0x800962AC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800962B0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x800962B4: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x800962B8: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x800962BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800962C0: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x800962C4: lui         $v1, 0x1FFF
    ctx->r3 = S32(0X1FFF << 16);
    // 0x800962C8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x800962CC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800962D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800962D4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x800962D8: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x800962DC: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x800962E0: addu        $v0, $s4, $a1
    ctx->r2 = ADD32(ctx->r20, ctx->r5);
    // 0x800962E4: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x800962E8: beq         $v0, $zero, L_800962F8
    if (ctx->r2 == 0) {
        // 0x800962EC: addu        $s7, $zero, $zero
        ctx->r23 = ADD32(0, 0);
            goto L_800962F8;
    }
    // 0x800962EC: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x800962F0: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x800962F4: sltu        $a0, $zero, $v0
    ctx->r4 = 0 < ctx->r2 ? 1 : 0;
L_800962F8:
    // 0x800962F8: beq         $a0, $zero, L_80096304
    if (ctx->r4 == 0) {
        // 0x800962FC: addu        $s1, $s4, $zero
        ctx->r17 = ADD32(ctx->r20, 0);
            goto L_80096304;
    }
    // 0x800962FC: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
    // 0x80096300: subu        $s1, $v1, $a1
    ctx->r17 = SUB32(ctx->r3, ctx->r5);
L_80096304:
    // 0x80096304: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80096308: beq         $v1, $zero, L_80096318
    if (ctx->r3 == 0) {
        // 0x8009630C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80096318;
    }
    // 0x8009630C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80096310: j           L_8009631C
    // 0x80096314: subu        $s6, $v0, $v1
    ctx->r22 = SUB32(ctx->r2, ctx->r3);
        goto L_8009631C;
    // 0x80096314: subu        $s6, $v0, $v1
    ctx->r22 = SUB32(ctx->r2, ctx->r3);
L_80096318:
    // 0x80096318: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
L_8009631C:
    // 0x8009631C: subu        $a2, $s1, $s6
    ctx->r6 = SUB32(ctx->r17, ctx->r22);
    // 0x80096320: nor         $v0, $zero, $a2
    ctx->r2 = ~(0 | ctx->r6);
    // 0x80096324: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80096328: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x8009632C: addiu       $v0, $a2, 0xF
    ctx->r2 = ADD32(ctx->r6, 0XF);
    // 0x80096330: sra         $s2, $v0, 4
    ctx->r18 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80096334: sll         $t1, $s2, 3
    ctx->r9 = S32(ctx->r18 << 3);
    // 0x80096338: beq         $a0, $zero, L_80096504
    if (ctx->r4 == 0) {
        // 0x8009633C: addu        $a3, $t1, $s2
        ctx->r7 = ADD32(ctx->r9, ctx->r18);
            goto L_80096504;
    }
    // 0x8009633C: addu        $a3, $t1, $s2
    ctx->r7 = ADD32(ctx->r9, ctx->r18);
    // 0x80096340: lh          $v0, 0x0($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X0);
    // 0x80096344: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80096348: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8009634C: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x80096350: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x80096354: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80096358: jal         0x80096BDC
    // 0x8009635C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    _decodeChunk(rdram, ctx);
        goto after_0;
    // 0x8009635C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x80096360: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80096364: beq         $v1, $zero, L_8009637C
    if (ctx->r3 == 0) {
        // 0x80096368: addu        $t0, $v0, $zero
        ctx->r8 = ADD32(ctx->r2, 0);
            goto L_8009637C;
    }
    // 0x80096368: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x8009636C: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x80096370: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80096374: j           L_80096384
    // 0x80096378: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_80096384;
    // 0x80096378: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8009637C:
    // 0x8009637C: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x80096380: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_80096384:
    // 0x80096384: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x80096388: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8009638C: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x80096390: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80096394: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80096398: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x8009639C: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x800963A0: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x800963A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800963A8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800963AC: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x800963B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800963B4: sw          $a1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r5;
    // 0x800963B8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800963BC: sw          $a0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r4;
    // 0x800963C0: lh          $s3, 0x0($s5)
    ctx->r19 = MEM_H(ctx->r21, 0X0);
    // 0x800963C4: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x800963C8: beq         $v0, $zero, L_800964CC
    if (ctx->r2 == 0) {
        // 0x800963CC: sll         $v0, $s7, 16
        ctx->r2 = S32(ctx->r23 << 16);
            goto L_800964CC;
    }
    // 0x800963CC: sll         $v0, $s7, 16
    ctx->r2 = S32(ctx->r23 << 16);
    // 0x800963D0: sra         $s6, $v0, 16
    ctx->r22 = S32(SIGNED(ctx->r2) >> 16);
L_800963D4:
    // 0x800963D4: addiu       $v1, $s2, 0x1
    ctx->r3 = ADD32(ctx->r18, 0X1);
    // 0x800963D8: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x800963DC: addu        $v1, $s3, $v1
    ctx->r3 = ADD32(ctx->r19, ctx->r3);
    // 0x800963E0: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x800963E4: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x800963E8: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x800963EC: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x800963F0: and         $s5, $v1, $v0
    ctx->r21 = ctx->r3 & ctx->r2;
    // 0x800963F4: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
    // 0x800963F8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x800963FC: sltu        $v1, $zero, $a0
    ctx->r3 = 0 < ctx->r4 ? 1 : 0;
    // 0x80096400: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80096404: beq         $v0, $zero, L_80096414
    if (ctx->r2 == 0) {
        // 0x80096408: subu        $s4, $s4, $s1
        ctx->r20 = SUB32(ctx->r20, ctx->r17);
            goto L_80096414;
    }
    // 0x80096408: subu        $s4, $s4, $s1
    ctx->r20 = SUB32(ctx->r20, ctx->r17);
    // 0x8009640C: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x80096410: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_80096414:
    // 0x80096414: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80096418: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8009641C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80096420: sltu        $v0, $s4, $v1
    ctx->r2 = ctx->r20 < ctx->r3 ? 1 : 0;
    // 0x80096424: bne         $v0, $zero, L_80096430
    if (ctx->r2 != 0) {
        // 0x80096428: addu        $s1, $s4, $zero
        ctx->r17 = ADD32(ctx->r20, 0);
            goto L_80096430;
    }
    // 0x80096428: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
    // 0x8009642C: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
L_80096430:
    // 0x80096430: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x80096434: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80096438: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x8009643C: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x80096440: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80096444: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80096448: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x8009644C: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x80096450: addu        $a2, $s1, $v1
    ctx->r6 = ADD32(ctx->r17, ctx->r3);
    // 0x80096454: nor         $v0, $zero, $a2
    ctx->r2 = ~(0 | ctx->r6);
    // 0x80096458: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8009645C: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x80096460: addiu       $v0, $a2, 0xF
    ctx->r2 = ADD32(ctx->r6, 0XF);
    // 0x80096464: sra         $s2, $v0, 4
    ctx->r18 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80096468: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x8009646C: sll         $a3, $s2, 3
    ctx->r7 = S32(ctx->r18 << 3);
    // 0x80096470: addu        $a3, $a3, $s2
    ctx->r7 = ADD32(ctx->r7, ctx->r18);
    // 0x80096474: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80096478: jal         0x80096BDC
    // 0x8009647C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    _decodeChunk(rdram, ctx);
        goto after_1;
    // 0x8009647C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80096480: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x80096484: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    // 0x80096488: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x8009648C: lui         $a2, 0xFF
    ctx->r6 = S32(0XFF << 16);
    // 0x80096490: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80096494: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80096498: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x8009649C: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x800964A0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x800964A4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x800964A8: lui         $v0, 0xA00
    ctx->r2 = S32(0XA00 << 16);
    // 0x800964AC: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x800964B0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x800964B4: addu        $v1, $s5, $v1
    ctx->r3 = ADD32(ctx->r21, ctx->r3);
    // 0x800964B8: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x800964BC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800964C0: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x800964C4: bne         $v0, $zero, L_800963D4
    if (ctx->r2 != 0) {
        // 0x800964C8: sw          $v1, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r3;
            goto L_800963D4;
    }
    // 0x800964C8: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
L_800964CC:
    // 0x800964CC: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x800964D0: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x800964D4: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x800964D8: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x800964DC: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    // 0x800964E0: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x800964E4: addu        $v1, $s4, $v1
    ctx->r3 = ADD32(ctx->r20, ctx->r3);
    // 0x800964E8: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x800964EC: sw          $v1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r3;
    // 0x800964F0: sll         $v1, $s2, 3
    ctx->r3 = S32(ctx->r18 << 3);
    // 0x800964F4: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x800964F8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x800964FC: j           L_80096664
    // 0x80096500: sw          $a0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r4;
        goto L_80096664;
    // 0x80096500: sw          $a0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r4;
L_80096504:
    // 0x80096504: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80096508: lui         $a1, 0x38E3
    ctx->r5 = S32(0X38E3 << 16);
    // 0x8009650C: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x80096510: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80096514: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x80096518: ori         $a1, $a1, 0x8E39
    ctx->r5 = ctx->r5 | 0X8E39;
    // 0x8009651C: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80096520: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80096524: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x80096528: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
    // 0x8009652C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80096530: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80096534: mult        $a0, $a1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80096538: sll         $s1, $s2, 4
    ctx->r17 = S32(ctx->r18 << 4);
    // 0x8009653C: sra         $v1, $a0, 31
    ctx->r3 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80096540: mfhi        $t2
    ctx->r10 = hi;
    // 0x80096544: sra         $v0, $t2, 1
    ctx->r2 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80096548: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8009654C: sll         $s3, $v0, 4
    ctx->r19 = S32(ctx->r2 << 4);
    // 0x80096550: addu        $v1, $s1, $s6
    ctx->r3 = ADD32(ctx->r17, ctx->r22);
    // 0x80096554: slt         $v0, $v1, $s3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80096558: bnel        $v0, $zero, L_80096560
    if (ctx->r2 != 0) {
        // 0x8009655C: addu        $s3, $v1, $zero
        ctx->r19 = ADD32(ctx->r3, 0);
            goto L_80096560;
    }
    goto skip_0;
    // 0x8009655C: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    skip_0:
L_80096560:
    // 0x80096560: andi        $v0, $s3, 0xF
    ctx->r2 = ctx->r19 & 0XF;
    // 0x80096564: subu        $v0, $s3, $v0
    ctx->r2 = SUB32(ctx->r19, ctx->r2);
    // 0x80096568: slt         $v0, $v0, $s4
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8009656C: beq         $v0, $zero, L_800965F8
    if (ctx->r2 == 0) {
        // 0x80096570: subu        $a3, $a3, $a0
        ctx->r7 = SUB32(ctx->r7, ctx->r4);
            goto L_800965F8;
    }
    // 0x80096570: subu        $a3, $a3, $a0
    ctx->r7 = SUB32(ctx->r7, ctx->r4);
    // 0x80096574: lh          $v0, 0x0($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X0);
    // 0x80096578: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x8009657C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80096580: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80096584: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x80096588: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8009658C: subu        $a2, $s1, $s3
    ctx->r6 = SUB32(ctx->r17, ctx->r19);
    // 0x80096590: jal         0x80096BDC
    // 0x80096594: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    _decodeChunk(rdram, ctx);
        goto after_2;
    // 0x80096594: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x80096598: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x8009659C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x800965A0: beq         $v1, $zero, L_800965B8
    if (ctx->r3 == 0) {
        // 0x800965A4: addu        $t0, $v0, $zero
        ctx->r8 = ADD32(ctx->r2, 0);
            goto L_800965B8;
    }
    // 0x800965A4: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x800965A8: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x800965AC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x800965B0: j           L_800965C0
    // 0x800965B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_800965C0;
    // 0x800965B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_800965B8:
    // 0x800965B8: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x800965BC: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_800965C0:
    // 0x800965C0: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x800965C4: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x800965C8: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x800965CC: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x800965D0: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
    // 0x800965D4: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x800965D8: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x800965DC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x800965E0: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x800965E4: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x800965E8: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x800965EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800965F0: j           L_8009660C
    // 0x800965F4: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
        goto L_8009660C;
    // 0x800965F4: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
L_800965F8:
    // 0x800965F8: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x800965FC: addu        $v1, $t1, $s2
    ctx->r3 = ADD32(ctx->r9, ctx->r18);
    // 0x80096600: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x80096604: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80096608: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
L_8009660C:
    // 0x8009660C: beq         $s3, $zero, L_80096664
    if (ctx->r19 == 0) {
        // 0x80096610: addu        $v0, $t0, $zero
        ctx->r2 = ADD32(ctx->r8, 0);
            goto L_80096664;
    }
    // 0x80096610: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x80096614: beq         $fp, $zero, L_8009662C
    if (ctx->r30 == 0) {
        // 0x80096618: sw          $zero, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = 0;
            goto L_8009662C;
    }
    // 0x80096618: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x8009661C: addu        $v0, $s6, $s1
    ctx->r2 = ADD32(ctx->r22, ctx->r17);
    // 0x80096620: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x80096624: j           L_80096630
    // 0x80096628: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
        goto L_80096630;
    // 0x80096628: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
L_8009662C:
    // 0x8009662C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80096630:
    // 0x80096630: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    // 0x80096634: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80096638: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x8009663C: lh          $v0, 0x0($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X0);
    // 0x80096640: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x80096644: sll         $v1, $s3, 1
    ctx->r3 = S32(ctx->r19 << 1);
    // 0x80096648: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x8009664C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80096650: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x80096654: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80096658: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8009665C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_80096660:
    // 0x80096660: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
L_80096664:
    // 0x80096664: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80096668: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8009666C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80096670: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80096674: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80096678: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8009667C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80096680: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80096684: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80096688: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8009668C: jr          $ra
    // 0x80096690: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80096690: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800570AC_324AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800570AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800570B0: addiu       $a0, $zero, 0x526
    ctx->r4 = ADD32(0, 0X526);
    // 0x800570B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800570B8: jal         0x8006033C
    // 0x800570BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x800570BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800570C0: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x800570C4: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x800570C8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x800570CC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800570D0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x800570D4: ori         $a2, $v0, 0x2
    ctx->r6 = ctx->r2 | 0X2;
    // 0x800570D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800570DC: sb          $zero, 0x4EAC($at)
    MEM_B(0X4EAC, ctx->r1) = 0;
    // 0x800570E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800570E4: sb          $zero, 0x4EAD($at)
    MEM_B(0X4EAD, ctx->r1) = 0;
    // 0x800570E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800570EC: sb          $zero, 0x4EAE($at)
    MEM_B(0X4EAE, ctx->r1) = 0;
    // 0x800570F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800570F4: sb          $zero, 0x4EAF($at)
    MEM_B(0X4EAF, ctx->r1) = 0;
    // 0x800570F8: beq         $a2, $zero, L_80057184
    if (ctx->r6 == 0) {
        // 0x800570FC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80057184;
    }
    // 0x800570FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80057100: addu        $v0, $s0, $a1
    ctx->r2 = ADD32(ctx->r16, ctx->r5);
L_80057104:
    // 0x80057104: lbu         $a0, 0x450($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X450);
    // 0x80057108: beq         $a0, $zero, L_80057178
    if (ctx->r4 == 0) {
        // 0x8005710C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_80057178;
    }
    // 0x8005710C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80057110: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80057114: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80057118: lbu         $v0, 0x4FC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4FC);
    // 0x8005711C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80057120: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80057124: lbu         $v1, -0x1CB8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1CB8);
    // 0x80057128: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005712C: sb          $v0, 0x4FC($s0)
    MEM_B(0X4FC, ctx->r16) = ctx->r2;
    // 0x80057130: lbu         $v0, 0x4FD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4FD);
    // 0x80057134: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80057138: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8005713C: lbu         $v1, -0x1CB7($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1CB7);
    // 0x80057140: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80057144: sb          $v0, 0x4FD($s0)
    MEM_B(0X4FD, ctx->r16) = ctx->r2;
    // 0x80057148: lbu         $v0, 0x4FE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4FE);
    // 0x8005714C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80057150: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80057154: lbu         $v1, -0x1CB6($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1CB6);
    // 0x80057158: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005715C: sb          $v0, 0x4FE($s0)
    MEM_B(0X4FE, ctx->r16) = ctx->r2;
    // 0x80057160: lbu         $v0, 0x4FF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4FF);
    // 0x80057164: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80057168: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8005716C: lbu         $v1, -0x1CB5($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1CB5);
    // 0x80057170: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80057174: sb          $v0, 0x4FF($s0)
    MEM_B(0X4FF, ctx->r16) = ctx->r2;
L_80057178:
    // 0x80057178: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8005717C: bne         $v0, $zero, L_80057104
    if (ctx->r2 != 0) {
        // 0x80057180: addu        $v0, $s0, $a1
        ctx->r2 = ADD32(ctx->r16, ctx->r5);
            goto L_80057104;
    }
    // 0x80057180: addu        $v0, $s0, $a1
    ctx->r2 = ADD32(ctx->r16, ctx->r5);
L_80057184:
    // 0x80057184: lb          $v0, 0x4FC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4FC);
    // 0x80057188: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8005718C: bne         $v0, $zero, L_80057198
    if (ctx->r2 != 0) {
        // 0x80057190: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80057198;
    }
    // 0x80057190: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80057194: sb          $v0, 0x4FC($s0)
    MEM_B(0X4FC, ctx->r16) = ctx->r2;
L_80057198:
    // 0x80057198: lb          $v0, 0x4FD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4FD);
    // 0x8005719C: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x800571A0: bne         $v0, $zero, L_800571AC
    if (ctx->r2 != 0) {
        // 0x800571A4: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_800571AC;
    }
    // 0x800571A4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x800571A8: sb          $v0, 0x4FD($s0)
    MEM_B(0X4FD, ctx->r16) = ctx->r2;
L_800571AC:
    // 0x800571AC: lb          $v0, 0x4FE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4FE);
    // 0x800571B0: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x800571B4: bne         $v0, $zero, L_800571C0
    if (ctx->r2 != 0) {
        // 0x800571B8: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_800571C0;
    }
    // 0x800571B8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x800571BC: sb          $v0, 0x4FE($s0)
    MEM_B(0X4FE, ctx->r16) = ctx->r2;
L_800571C0:
    // 0x800571C0: lb          $v0, 0x4FF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X4FF);
    // 0x800571C4: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x800571C8: bne         $v0, $zero, L_800571D4
    if (ctx->r2 != 0) {
        // 0x800571CC: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_800571D4;
    }
    // 0x800571CC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x800571D0: sb          $v0, 0x4FF($s0)
    MEM_B(0X4FF, ctx->r16) = ctx->r2;
L_800571D4:
    // 0x800571D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800571D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800571DC: jr          $ra
    // 0x800571E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800571E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80094040_6F440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80094040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094044: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80094048: jal         0x80094410
    // 0x8009404C: nop

    func_80094410_6F810(rdram, ctx);
        goto after_0;
    // 0x8009404C: nop

    after_0:
    // 0x80094050: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80094054: addiu       $a0, $a0, 0x5430
    ctx->r4 = ADD32(ctx->r4, 0X5430);
    // 0x80094058: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x8009405C: addiu       $a1, $a1, 0x16C0
    ctx->r5 = ADD32(ctx->r5, 0X16C0);
    // 0x80094060: jal         0x8009A470
    // 0x80094064: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x80094064: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80094068: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8009406C: addiu       $a0, $a0, -0x2658
    ctx->r4 = ADD32(ctx->r4, -0X2658);
    // 0x80094070: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x80094074: addiu       $a1, $a1, 0x16C4
    ctx->r5 = ADD32(ctx->r5, 0X16C4);
    // 0x80094078: jal         0x8009A470
    // 0x8009407C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x8009407C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80094080: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80094084: jal         0x80093F20
    // 0x80094088: addiu       $a0, $a0, -0xDF8
    ctx->r4 = ADD32(ctx->r4, -0XDF8);
    func_80093F20_6F320(rdram, ctx);
        goto after_3;
    // 0x80094088: addiu       $a0, $a0, -0xDF8
    ctx->r4 = ADD32(ctx->r4, -0XDF8);
    after_3:
    // 0x8009408C: jal         0x80094440
    // 0x80094090: nop

    func_80094440_6F840(rdram, ctx);
        goto after_4;
    // 0x80094090: nop

    after_4:
    // 0x80094094: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80094098: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8009409C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800940A0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x800940A4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800940A8: sw          $zero, -0x2110($at)
    MEM_W(-0X2110, ctx->r1) = 0;
L_800940AC:
    // 0x800940AC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800940B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800940B4: lbu         $v0, -0x2355($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2355);
    // 0x800940B8: bnel        $v0, $zero, L_800940F0
    if (ctx->r2 != 0) {
        // 0x800940BC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800940F0;
    }
    goto skip_0;
    // 0x800940BC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x800940C0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800940C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800940C8: lhu         $v0, -0x2358($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2358);
    // 0x800940CC: andi        $v0, $v0, 0x1F07
    ctx->r2 = ctx->r2 & 0X1F07;
    // 0x800940D0: bne         $v0, $a2, L_800940F0
    if (ctx->r2 != ctx->r6) {
        // 0x800940D4: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800940F0;
    }
    // 0x800940D4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800940D8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800940DC: lw          $v0, -0x2110($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2110);
    // 0x800940E0: or          $a1, $a1, $a0
    ctx->r5 = ctx->r5 | ctx->r4;
    // 0x800940E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800940E8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800940EC: sw          $v0, -0x2110($at)
    MEM_W(-0X2110, ctx->r1) = ctx->r2;
L_800940F0:
    // 0x800940F0: slti        $v0, $v1, 0x10
    ctx->r2 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x800940F4: bne         $v0, $zero, L_800940AC
    if (ctx->r2 != 0) {
        // 0x800940F8: sll         $a0, $a0, 1
        ctx->r4 = S32(ctx->r4 << 1);
            goto L_800940AC;
    }
    // 0x800940F8: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x800940FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80094100: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x80094104: jr          $ra
    // 0x80094108: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80094108: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80054FB8_303B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80054FB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80054FBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80054FC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80054FC4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80054FC8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80054FCC: jal         0x80087BC0
    // 0x80054FD0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_80087BC0_62FC0(rdram, ctx);
        goto after_0;
    // 0x80054FD0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80054FD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80054FD8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80054FDC: addiu       $a1, $a1, 0x46B8
    ctx->r5 = ADD32(ctx->r5, 0X46B8);
    // 0x80054FE0: jal         0x8003BD6C
    // 0x80054FE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8003BD6C_1716C(rdram, ctx);
        goto after_1;
    // 0x80054FE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80054FE8: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80054FEC: addiu       $s0, $s0, -0x2338
    ctx->r16 = ADD32(ctx->r16, -0X2338);
    // 0x80054FF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80054FF4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80054FF8: jal         0x8009A3B4
    // 0x80054FFC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80054FFC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x80055000: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80055004: addiu       $a0, $a0, -0x4980
    ctx->r4 = ADD32(ctx->r4, -0X4980);
    // 0x80055008: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005500C: jal         0x8009A3B4
    // 0x80055010: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80055010: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_3:
    // 0x80055014: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80055018: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8005501C: lb          $v1, -0x72EC($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X72EC);
    // 0x80055020: lhu         $a3, 0x4($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X4);
    // 0x80055024: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80055028: sb          $v0, -0x265E($at)
    MEM_B(-0X265E, ctx->r1) = ctx->r2;
    // 0x8005502C: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    // 0x80055030: lbu         $a1, 0x1($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X1);
    // 0x80055034: lbu         $a2, 0x2($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X2);
    // 0x80055038: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8005503C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80055040: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x80055044: jal         0x8005471C
    // 0x80055048: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8005471C_2FB1C(rdram, ctx);
        goto after_4;
    // 0x80055048: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x8005504C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80055050: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80055054: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80055058: jr          $ra
    // 0x8005505C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8005505C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void alAuxBusParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80096E3C: lw          $a3, 0x1C($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X1C);
    // 0x80096E40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80096E44: bne         $a1, $v0, L_80096E64
    if (ctx->r5 != ctx->r2) {
        // 0x80096E48: nop
    
            goto L_80096E64;
    }
    // 0x80096E48: nop

    // 0x80096E4C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80096E50: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80096E54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80096E58: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80096E5C: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x80096E60: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
L_80096E64:
    // 0x80096E64: jr          $ra
    // 0x80096E68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x80096E68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_80028A00_3E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028A00: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80028A04: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80028A08: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80028A0C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80028A10: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80028A14: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80028A18: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80028A1C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80028A20: addiu       $v1, $v1, 0x47F0
    ctx->r3 = ADD32(ctx->r3, 0X47F0);
    // 0x80028A24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80028A28: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x80028A2C: sra         $a1, $a1, 22
    ctx->r5 = S32(SIGNED(ctx->r5) >> 22);
    // 0x80028A30: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80028A34: jr          $ra
    // 0x80028A38: sw          $a2, 0x144($a1)
    MEM_W(0X144, ctx->r5) = ctx->r6;
    TRACE_RETURN()
    return;
    // 0x80028A38: sw          $a2, 0x144($a1)
    MEM_W(0X144, ctx->r5) = ctx->r6;
;}
RECOMP_FUNC void func_80055C64_31064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80055C64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80055C68: addu        $t9, $a0, $zero
    ctx->r25 = ADD32(ctx->r4, 0);
    // 0x80055C6C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80055C70: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x80055C74: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x80055C78: addiu       $v1, $a1, 0x7
    ctx->r3 = ADD32(ctx->r5, 0X7);
    // 0x80055C7C: lui         $t8, 0xFF
    ctx->r24 = S32(0XFF << 16);
    // 0x80055C80: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x80055C84: addu        $a0, $t9, $a2
    ctx->r4 = ADD32(ctx->r25, ctx->r6);
    // 0x80055C88: addiu       $t4, $a0, 0x4
    ctx->r12 = ADD32(ctx->r4, 0X4);
    // 0x80055C8C: addiu       $t5, $a1, 0x8
    ctx->r13 = ADD32(ctx->r5, 0X8);
    // 0x80055C90: addiu       $t3, $zero, 0x2C
    ctx->r11 = ADD32(0, 0X2C);
    // 0x80055C94: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x80055C98: addu        $t7, $a1, $zero
    ctx->r15 = ADD32(ctx->r5, 0);
    // 0x80055C9C: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x80055CA0: addiu       $t1, $zero, 0x3E83
    ctx->r9 = ADD32(0, 0X3E83);
    // 0x80055CA4: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x80055CA8: sltu        $a3, $zero, $a3
    ctx->r7 = 0 < ctx->r7 ? 1 : 0;
    // 0x80055CAC: xori        $a2, $a2, 0x58
    ctx->r6 = ctx->r6 ^ 0X58;
    // 0x80055CB0: sltiu       $a2, $a2, 0x1
    ctx->r6 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x80055CB4: and         $a3, $a3, $a2
    ctx->r7 = ctx->r7 & ctx->r6;
    // 0x80055CB8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80055CBC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80055CC0: addiu       $t0, $s0, 0x28
    ctx->r8 = ADD32(ctx->r16, 0X28);
    // 0x80055CC4: sll         $v0, $t0, 8
    ctx->r2 = S32(ctx->r8 << 8);
    // 0x80055CC8: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x80055CCC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80055CD0: addu        $v0, $t9, $zero
    ctx->r2 = ADD32(ctx->r25, 0);
    // 0x80055CD4: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80055CD8: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80055CDC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80055CE0: sh          $v1, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r3;
    // 0x80055CE4: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x80055CE8: addiu       $v1, $zero, 0x42
    ctx->r3 = ADD32(0, 0X42);
    // 0x80055CEC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80055CF0: sb          $v0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r2;
    // 0x80055CF4: addiu       $v0, $zero, 0x97
    ctx->r2 = ADD32(0, 0X97);
    // 0x80055CF8: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x80055CFC: sb          $t3, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r11;
    // 0x80055D00: sb          $t6, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r14;
    // 0x80055D04: sb          $t6, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r14;
    // 0x80055D08: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
    // 0x80055D0C: sh          $a0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r4;
    // 0x80055D10: sh          $a0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r4;
    // 0x80055D14: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x80055D18: sh          $t7, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r15;
    // 0x80055D1C: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    // 0x80055D20: sh          $t1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r9;
    // 0x80055D24: sb          $a1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r5;
    // 0x80055D28: sb          $v1, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r3;
    // 0x80055D2C: sb          $a1, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r5;
    // 0x80055D30: sb          $v0, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r2;
    // 0x80055D34: sb          $v1, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r3;
    // 0x80055D38: sb          $v0, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r2;
    // 0x80055D3C: addu        $s0, $t0, $zero
    ctx->r16 = ADD32(ctx->r8, 0);
    // 0x80055D40: addiu       $t0, $s0, 0x28
    ctx->r8 = ADD32(ctx->r16, 0X28);
    // 0x80055D44: sll         $v0, $t0, 8
    ctx->r2 = S32(ctx->r8 << 8);
    // 0x80055D48: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x80055D4C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80055D50: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    // 0x80055D54: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x80055D58: sb          $t3, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r11;
    // 0x80055D5C: sb          $t6, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r14;
    // 0x80055D60: sb          $t6, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r14;
    // 0x80055D64: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
    // 0x80055D68: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x80055D6C: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x80055D70: sh          $t4, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r12;
    // 0x80055D74: sh          $t4, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r12;
    // 0x80055D78: sh          $t7, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r15;
    // 0x80055D7C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80055D80: sb          $v0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r2;
    // 0x80055D84: addiu       $v0, $zero, 0x98
    ctx->r2 = ADD32(0, 0X98);
    // 0x80055D88: sh          $t7, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r15;
    // 0x80055D8C: sh          $t5, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r13;
    // 0x80055D90: sh          $t5, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r13;
    // 0x80055D94: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    // 0x80055D98: sh          $t1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r9;
    // 0x80055D9C: sb          $a1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r5;
    // 0x80055DA0: sb          $v1, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r3;
    // 0x80055DA4: sb          $a1, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r5;
    // 0x80055DA8: sb          $v0, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r2;
    // 0x80055DAC: sb          $v1, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r3;
    // 0x80055DB0: sb          $v0, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r2;
    // 0x80055DB4: beq         $a3, $zero, L_80055E1C
    if (ctx->r7 == 0) {
        // 0x80055DB8: addu        $s0, $t0, $zero
        ctx->r16 = ADD32(ctx->r8, 0);
            goto L_80055E1C;
    }
    // 0x80055DB8: addu        $s0, $t0, $zero
    ctx->r16 = ADD32(ctx->r8, 0);
    // 0x80055DBC: addiu       $v1, $s0, 0x28
    ctx->r3 = ADD32(ctx->r16, 0X28);
    // 0x80055DC0: and         $v0, $v1, $t8
    ctx->r2 = ctx->r3 & ctx->r24;
    // 0x80055DC4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80055DC8: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80055DCC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80055DD0: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80055DD4: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x80055DD8: addiu       $v0, $t9, 0x18
    ctx->r2 = ADD32(ctx->r25, 0X18);
    // 0x80055DDC: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80055DE0: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80055DE4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80055DE8: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
    // 0x80055DEC: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80055DF0: addiu       $v0, $zero, 0x3E82
    ctx->r2 = ADD32(0, 0X3E82);
    // 0x80055DF4: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80055DF8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80055DFC: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    // 0x80055E00: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80055E04: sb          $t6, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r14;
    // 0x80055E08: sb          $t6, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r14;
    // 0x80055E0C: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
    // 0x80055E10: sh          $t7, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r15;
    // 0x80055E14: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x80055E18: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_80055E1C:
    // 0x80055E1C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80055E20: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80055E24: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80055E28: addiu       $a2, $s0, -0x28
    ctx->r6 = ADD32(ctx->r16, -0X28);
    // 0x80055E2C: jal         0x8002FD5C
    // 0x80055E30: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8002FD5C_B15C(rdram, ctx);
        goto after_0;
    // 0x80055E30: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_0:
    // 0x80055E34: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80055E38: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    // 0x80055E3C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80055E40: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80055E44: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80055E48: jr          $ra
    // 0x80055E4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80055E4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80027550_2950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80027550: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80027554: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x80027558: ori         $a1, $a1, 0x1000
    ctx->r5 = ctx->r5 | 0X1000;
    // 0x8002755C: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x80027560: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x80027564: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80027568: sw          $a0, 0x4FC0($at)
    MEM_W(0X4FC0, ctx->r1) = ctx->r4;
    // 0x8002756C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80027570: addiu       $a0, $a0, -0x77D8
    ctx->r4 = ADD32(ctx->r4, -0X77D8);
    // 0x80027574: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80027578: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002757C: sh          $v0, 0x6C9A($at)
    MEM_H(0X6C9A, ctx->r1) = ctx->r2;
    // 0x80027580: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80027584: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80027588: sh          $v0, 0x6C9C($at)
    MEM_H(0X6C9C, ctx->r1) = ctx->r2;
    // 0x8002758C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80027590: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80027594: sw          $v0, 0x6CA4($at)
    MEM_W(0X6CA4, ctx->r1) = ctx->r2;
    // 0x80027598: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8002759C: addiu       $v0, $v0, 0x2FC0
    ctx->r2 = ADD32(ctx->r2, 0X2FC0);
    // 0x800275A0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800275A4: addiu       $v1, $v1, 0x3FC0
    ctx->r3 = ADD32(ctx->r3, 0X3FC0);
    // 0x800275A8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800275AC: sw          $v0, 0x6FA0($at)
    MEM_W(0X6FA0, ctx->r1) = ctx->r2;
    // 0x800275B0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800275B4: sw          $v0, 0x6FA8($at)
    MEM_W(0X6FA8, ctx->r1) = ctx->r2;
    // 0x800275B8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800275BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800275C0: sw          $v0, 0x6FAC($at)
    MEM_W(0X6FAC, ctx->r1) = ctx->r2;
    // 0x800275C4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800275C8: addiu       $v0, $v0, 0x6FC0
    ctx->r2 = ADD32(ctx->r2, 0X6FC0);
    // 0x800275CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800275D0: sw          $v1, 0x6FA4($at)
    MEM_W(0X6FA4, ctx->r1) = ctx->r3;
    // 0x800275D4: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x800275D8: addiu       $v1, $v1, 0x4FC0
    ctx->r3 = ADD32(ctx->r3, 0X4FC0);
    // 0x800275DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800275E0: sw          $v0, 0x6FB0($at)
    MEM_W(0X6FB0, ctx->r1) = ctx->r2;
    // 0x800275E4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800275E8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800275EC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x800275F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800275F4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800275F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800275FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80027600: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80027604: sw          $zero, -0x595C($at)
    MEM_W(-0X595C, ctx->r1) = 0;
    // 0x80027608: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8002760C: sb          $zero, 0x559C($at)
    MEM_B(0X559C, ctx->r1) = 0;
    // 0x80027610: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80027614: sw          $zero, 0x6CA0($at)
    MEM_W(0X6CA0, ctx->r1) = 0;
    // 0x80027618: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002761C: sw          $zero, 0x6CA8($at)
    MEM_W(0X6CA8, ctx->r1) = 0;
    // 0x80027620: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80027624: sw          $v1, 0x6FB4($at)
    MEM_W(0X6FB4, ctx->r1) = ctx->r3;
    // 0x80027628: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002762C: sw          $v0, 0x6FB8($at)
    MEM_W(0X6FB8, ctx->r1) = ctx->r2;
    // 0x80027630: jal         0x8009CC40
    // 0x80027634: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_8009CC40_78040(rdram, ctx);
        goto after_0;
    // 0x80027634: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_0:
    // 0x80027638: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8002763C: addiu       $s2, $s2, 0x47F0
    ctx->r18 = ADD32(ctx->r18, 0X47F0);
    // 0x80027640: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_80027644:
    // 0x80027644: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80027648: jal         0x8009A2B0
    // 0x8002764C: addiu       $a1, $zero, 0x188
    ctx->r5 = ADD32(0, 0X188);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x8002764C: addiu       $a1, $zero, 0x188
    ctx->r5 = ADD32(0, 0X188);
    after_1:
    // 0x80027650: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80027654: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x80027658: sb          $s0, 0x489B($at)
    MEM_B(0X489B, ctx->r1) = ctx->r16;
    // 0x8002765C: addiu       $s2, $s2, 0x188
    ctx->r18 = ADD32(ctx->r18, 0X188);
    // 0x80027660: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80027664: blez        $s0, L_80027644
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80027668: addiu       $s1, $s1, 0x188
        ctx->r17 = ADD32(ctx->r17, 0X188);
            goto L_80027644;
    }
    // 0x80027668: addiu       $s1, $s1, 0x188
    ctx->r17 = ADD32(ctx->r17, 0X188);
    // 0x8002766C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x80027670: ori         $a0, $a0, 0x5000
    ctx->r4 = ctx->r4 | 0X5000;
    // 0x80027674: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x80027678: jal         0x8009A2B0
    // 0x8002767C: ori         $a1, $a1, 0xB000
    ctx->r5 = ctx->r5 | 0XB000;
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x8002767C: ori         $a1, $a1, 0xB000
    ctx->r5 = ctx->r5 | 0XB000;
    after_2:
    // 0x80027680: jal         0x80025D14
    // 0x80027684: nop

    func_80025D14_1114(rdram, ctx);
        goto after_3;
    // 0x80027684: nop

    after_3:
    // 0x80027688: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8002768C: jal         0x80092E10
    // 0x80027690: lw          $a0, 0x4FC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4FC0);
    func_80092E10_6E210(rdram, ctx);
        goto after_4;
    // 0x80027690: lw          $a0, 0x4FC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4FC0);
    after_4:
    // 0x80027694: jal         0x80093090
    // 0x80027698: nop

    func_80093090_6E490(rdram, ctx);
        goto after_5;
    // 0x80027698: nop

    after_5:
    // 0x8002769C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800276A0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800276A4: addiu       $a1, $a1, 0x47F0
    ctx->r5 = ADD32(ctx->r5, 0X47F0);
L_800276A8:
    // 0x800276A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800276AC: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_800276B0:
    // 0x800276B0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800276B4: sw          $zero, 0x40($v1)
    MEM_W(0X40, ctx->r3) = 0;
    // 0x800276B8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800276BC: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x800276C0: bne         $v0, $zero, L_800276B0
    if (ctx->r2 != 0) {
        // 0x800276C4: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800276B0;
    }
    // 0x800276C4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800276C8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800276CC: blez        $a2, L_800276A8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800276D0: addiu       $a1, $a1, 0x188
        ctx->r5 = ADD32(ctx->r5, 0X188);
            goto L_800276A8;
    }
    // 0x800276D0: addiu       $a1, $a1, 0x188
    ctx->r5 = ADD32(ctx->r5, 0X188);
    // 0x800276D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800276D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800276DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800276E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800276E4: jr          $ra
    // 0x800276E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800276E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800665F8_419F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800665F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800665FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80066600: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80066604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066608: lhu         $v0, 0xBE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XBE);
    // 0x8006660C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80066610: sh          $v1, 0xBE($s0)
    MEM_H(0XBE, ctx->r16) = ctx->r3;
    // 0x80066614: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80066618: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006661C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80066620: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80066624: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x80066628: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x8006662C: lbu         $a0, 0x2($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X2);
    // 0x80066630: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80066634: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80066638: jal         0x8006033C
    // 0x8006663C: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8006663C: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    after_0:
    // 0x80066640: beq         $v0, $zero, L_80066674
    if (ctx->r2 == 0) {
        // 0x80066644: nop
    
            goto L_80066674;
    }
    // 0x80066644: nop

    // 0x80066648: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x8006664C: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80066650: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80066654: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80066658: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006665C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80066660: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80066664: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80066668: lw          $v0, 0x17C4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X17C4);
    // 0x8006666C: j           L_80066680
    // 0x80066670: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_80066680;
    // 0x80066670: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_80066674:
    // 0x80066674: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80066678: lw          $v0, 0x2B78($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2B78);
    // 0x8006667C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_80066680:
    // 0x80066680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066684: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80066688: jr          $ra
    // 0x8006668C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006668C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80070B74_4BF74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80070B74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80070B78: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80070B7C: lb          $v0, 0x170($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X170);
    // 0x80070B80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80070B84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80070B88: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80070B8C: lw          $v0, 0x3050($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3050);
    // 0x80070B90: jalr        $v0
    // 0x80070B94: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80070B94: nop

    after_0:
    // 0x80070B98: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80070B9C: jr          $ra
    // 0x80070BA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80070BA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void osAfterPreNMI(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009F5B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009F5B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8009F5B8: jal         0x800A16D0
    // 0x8009F5BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    __osSpSetPc_recomp(rdram, ctx);
        goto after_0;
    // 0x8009F5BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x8009F5C0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8009F5C4: jr          $ra
    // 0x8009F5C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8009F5C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800A3380_7E780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A3380: beq         $a2, $zero, L_800A3418
    if (ctx->r6 == 0) {
        // 0x800A3384: nop
    
            goto L_800A3418;
    }
    // 0x800A3384: nop

    // 0x800A3388: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x800A338C: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x800A3390: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x800A3394: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x800A3398: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x800A339C: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x800A33A0: beq         $v0, $zero, L_800A33B4
    if (ctx->r2 == 0) {
        // 0x800A33A4: addu        $a3, $a0, $zero
        ctx->r7 = ADD32(ctx->r4, 0);
            goto L_800A33B4;
    }
    // 0x800A33A4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x800A33A8: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x800A33AC: addiu       $a3, $a0, 0x1
    ctx->r7 = ADD32(ctx->r4, 0X1);
    // 0x800A33B0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_800A33B4:
    // 0x800A33B4: sltiu       $v0, $a2, 0x2
    ctx->r2 = ctx->r6 < 0X2 ? 1 : 0;
    // 0x800A33B8: bne         $v0, $zero, L_800A33DC
    if (ctx->r2 != 0) {
        // 0x800A33BC: srl         $v1, $a2, 2
        ctx->r3 = S32(U32(ctx->r6) >> 2);
            goto L_800A33DC;
    }
    // 0x800A33BC: srl         $v1, $a2, 2
    ctx->r3 = S32(U32(ctx->r6) >> 2);
    // 0x800A33C0: andi        $v0, $a3, 0x2
    ctx->r2 = ctx->r7 & 0X2;
    // 0x800A33C4: beq         $v0, $zero, L_800A33E0
    if (ctx->r2 == 0) {
        // 0x800A33C8: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_800A33E0;
    }
    // 0x800A33C8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800A33CC: sh          $a1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r5;
    // 0x800A33D0: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x800A33D4: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x800A33D8: srl         $v1, $a2, 2
    ctx->r3 = S32(U32(ctx->r6) >> 2);
L_800A33DC:
    // 0x800A33DC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_800A33E0:
    // 0x800A33E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800A33E4: beql        $v1, $v0, L_800A3400
    if (ctx->r3 == ctx->r2) {
        // 0x800A33E8: andi        $v0, $a2, 0x2
        ctx->r2 = ctx->r6 & 0X2;
            goto L_800A3400;
    }
    goto skip_0;
    // 0x800A33E8: andi        $v0, $a2, 0x2
    ctx->r2 = ctx->r6 & 0X2;
    skip_0:
L_800A33EC:
    // 0x800A33EC: sw          $a1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r5;
    // 0x800A33F0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800A33F4: bne         $v1, $v0, L_800A33EC
    if (ctx->r3 != ctx->r2) {
        // 0x800A33F8: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_800A33EC;
    }
    // 0x800A33F8: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800A33FC: andi        $v0, $a2, 0x2
    ctx->r2 = ctx->r6 & 0X2;
L_800A3400:
    // 0x800A3400: beq         $v0, $zero, L_800A3410
    if (ctx->r2 == 0) {
        // 0x800A3404: andi        $v0, $a2, 0x1
        ctx->r2 = ctx->r6 & 0X1;
            goto L_800A3410;
    }
    // 0x800A3404: andi        $v0, $a2, 0x1
    ctx->r2 = ctx->r6 & 0X1;
    // 0x800A3408: sh          $a1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r5;
    // 0x800A340C: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
L_800A3410:
    // 0x800A3410: bnel        $v0, $zero, L_800A3418
    if (ctx->r2 != 0) {
        // 0x800A3414: sb          $a1, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r5;
            goto L_800A3418;
    }
    goto skip_1;
    // 0x800A3414: sb          $a1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r5;
    skip_1:
L_800A3418:
    // 0x800A3418: jr          $ra
    // 0x800A341C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x800A341C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_80040D60_1C160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80040D60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80040D64: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x80040D68: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80040D6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80040D70: sh          $v0, 0x8($sp)
    MEM_H(0X8, ctx->r29) = ctx->r2;
    // 0x80040D74: sh          $v0, 0x0($sp)
    MEM_H(0X0, ctx->r29) = ctx->r2;
    // 0x80040D78: sh          $v0, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r2;
    // 0x80040D7C: sh          $v0, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r2;
    // 0x80040D80: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80040D84: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x80040D88: slti        $v0, $v0, 0x101
    ctx->r2 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x80040D8C: bne         $v0, $zero, L_80040D9C
    if (ctx->r2 != 0) {
        // 0x80040D90: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80040D9C;
    }
    // 0x80040D90: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80040D94: j           L_80040DA0
    // 0x80040D98: ori         $v0, $zero, 0x8200
    ctx->r2 = 0 | 0X8200;
        goto L_80040DA0;
    // 0x80040D98: ori         $v0, $zero, 0x8200
    ctx->r2 = 0 | 0X8200;
L_80040D9C:
    // 0x80040D9C: addiu       $v0, $zero, 0x7E00
    ctx->r2 = ADD32(0, 0X7E00);
L_80040DA0:
    // 0x80040DA0: sh          $v0, 0xC($sp)
    MEM_H(0XC, ctx->r29) = ctx->r2;
    // 0x80040DA4: sh          $v0, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r2;
    // 0x80040DA8: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80040DAC: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x80040DB0: slti        $v0, $v0, 0x101
    ctx->r2 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x80040DB4: bne         $v0, $zero, L_80040DC0
    if (ctx->r2 != 0) {
        // 0x80040DB8: addiu       $v0, $zero, 0x7E00
        ctx->r2 = ADD32(0, 0X7E00);
            goto L_80040DC0;
    }
    // 0x80040DB8: addiu       $v0, $zero, 0x7E00
    ctx->r2 = ADD32(0, 0X7E00);
    // 0x80040DBC: ori         $v0, $zero, 0x8200
    ctx->r2 = 0 | 0X8200;
L_80040DC0:
    // 0x80040DC0: sh          $v0, 0xE($sp)
    MEM_H(0XE, ctx->r29) = ctx->r2;
    // 0x80040DC4: sh          $v0, 0xA($sp)
    MEM_H(0XA, ctx->r29) = ctx->r2;
    // 0x80040DC8: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x80040DCC: addu        $t5, $zero, $zero
    ctx->r13 = ADD32(0, 0);
    // 0x80040DD0: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80040DD4: lbu         $s0, 0x6B40($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X6B40);
    // 0x80040DD8: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x80040DDC: lhu         $t7, 0x49AE($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X49AE);
    // 0x80040DE0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80040DE4: lbu         $a1, -0x39A6($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X39A6);
    // 0x80040DE8: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x80040DEC: lhu         $t9, -0x7386($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X7386);
    // 0x80040DF0: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80040DF4: lw          $t6, -0x35C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X35C0);
    // 0x80040DF8: addu        $t2, $sp, $zero
    ctx->r10 = ADD32(ctx->r29, 0);
    // 0x80040DFC: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x80040E00: addiu       $t8, $t8, -0x3C88
    ctx->r24 = ADD32(ctx->r24, -0X3C88);
    // 0x80040E04: addu        $t4, $t8, $zero
    ctx->r12 = ADD32(ctx->r24, 0);
L_80040E08:
    // 0x80040E08: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80040E0C: lhu         $v1, 0x0($t2)
    ctx->r3 = MEM_HU(ctx->r10, 0X0);
    // 0x80040E10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80040E14: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x80040E18: subu        $a2, $v0, $s0
    ctx->r6 = SUB32(ctx->r2, ctx->r16);
    // 0x80040E1C: sltu        $v0, $a2, $t7
    ctx->r2 = ctx->r6 < ctx->r15 ? 1 : 0;
    // 0x80040E20: beq         $v0, $zero, L_80040EDC
    if (ctx->r2 == 0) {
        // 0x80040E24: addu        $v0, $t1, $zero
        ctx->r2 = ADD32(ctx->r9, 0);
            goto L_80040EDC;
    }
    // 0x80040E24: addu        $v0, $t1, $zero
    ctx->r2 = ADD32(ctx->r9, 0);
    // 0x80040E28: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80040E2C: lhu         $v1, 0x2($t2)
    ctx->r3 = MEM_HU(ctx->r10, 0X2);
    // 0x80040E30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80040E34: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x80040E38: subu        $v1, $v0, $a1
    ctx->r3 = SUB32(ctx->r2, ctx->r5);
    // 0x80040E3C: sltu        $v0, $v1, $t9
    ctx->r2 = ctx->r3 < ctx->r25 ? 1 : 0;
    // 0x80040E40: beq         $v0, $zero, L_80040EDC
    if (ctx->r2 == 0) {
        // 0x80040E44: addu        $v0, $t1, $zero
        ctx->r2 = ADD32(ctx->r9, 0);
            goto L_80040EDC;
    }
    // 0x80040E44: addu        $v0, $t1, $zero
    ctx->r2 = ADD32(ctx->r9, 0);
    // 0x80040E48: nop

    // 0x80040E4C: mult        $v1, $t7
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040E50: mflo        $v0
    ctx->r2 = lo;
    // 0x80040E54: addu        $t3, $a2, $v0
    ctx->r11 = ADD32(ctx->r6, ctx->r2);
    // 0x80040E58: sll         $v0, $t3, 1
    ctx->r2 = S32(ctx->r11 << 1);
    // 0x80040E5C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80040E60: lh          $t0, 0x0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X0);
    // 0x80040E64: bnel        $t0, $zero, L_80040E78
    if (ctx->r8 != 0) {
        // 0x80040E68: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80040E78;
    }
    goto skip_0;
    // 0x80040E68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    skip_0:
    // 0x80040E6C: beql        $s1, $zero, L_80040ECC
    if (ctx->r17 == 0) {
        // 0x80040E70: addiu       $t5, $t5, 0x1
        ctx->r13 = ADD32(ctx->r13, 0X1);
            goto L_80040ECC;
    }
    goto skip_1;
    // 0x80040E70: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    skip_1:
    // 0x80040E74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80040E78:
    // 0x80040E78: blez        $t1, L_80040EB8
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80040E7C: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_80040EB8;
    }
    // 0x80040E7C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80040E80: addu        $v1, $t8, $zero
    ctx->r3 = ADD32(ctx->r24, 0);
L_80040E84:
    // 0x80040E84: blezl       $t0, L_80040EAC
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80040E88: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80040EAC;
    }
    goto skip_2;
    // 0x80040E88: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_2:
    // 0x80040E8C: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x80040E90: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80040E94: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80040E98: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x80040E9C: bnel        $t0, $v0, L_80040EAC
    if (ctx->r8 != ctx->r2) {
        // 0x80040EA0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80040EAC;
    }
    goto skip_3;
    // 0x80040EA0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_3:
    // 0x80040EA4: j           L_80040EB8
    // 0x80040EA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_80040EB8;
    // 0x80040EA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80040EAC:
    // 0x80040EAC: slt         $v0, $a2, $t1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80040EB0: bne         $v0, $zero, L_80040E84
    if (ctx->r2 != 0) {
        // 0x80040EB4: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80040E84;
    }
    // 0x80040EB4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_80040EB8:
    // 0x80040EB8: bne         $a3, $zero, L_80040ECC
    if (ctx->r7 != 0) {
        // 0x80040EBC: addiu       $t5, $t5, 0x1
        ctx->r13 = ADD32(ctx->r13, 0X1);
            goto L_80040ECC;
    }
    // 0x80040EBC: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x80040EC0: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
    // 0x80040EC4: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x80040EC8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_80040ECC:
    // 0x80040ECC: slti        $v0, $t5, 0x4
    ctx->r2 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x80040ED0: bne         $v0, $zero, L_80040E08
    if (ctx->r2 != 0) {
        // 0x80040ED4: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_80040E08;
    }
    // 0x80040ED4: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x80040ED8: addu        $v0, $t1, $zero
    ctx->r2 = ADD32(ctx->r9, 0);
L_80040EDC:
    // 0x80040EDC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80040EE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80040EE4: jr          $ra
    // 0x80040EE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80040EE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80040A6C_1BE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80040A6C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80040A70: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80040A74: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80040A78: lui         $s0, 0x801E
    ctx->r16 = S32(0X801E << 16);
    // 0x80040A7C: addiu       $s0, $s0, -0x7158
    ctx->r16 = ADD32(ctx->r16, -0X7158);
    // 0x80040A80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80040A84: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80040A88: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x80040A8C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80040A90: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80040A94: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80040A98: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80040A9C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80040AA0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80040AA4: jal         0x8009A3B4
    // 0x80040AA8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80040AA8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80040AAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80040AB0: jal         0x80040D60
    // 0x80040AB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80040D60_1C160(rdram, ctx);
        goto after_1;
    // 0x80040AB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x80040AB8: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x80040ABC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80040AC0: addiu       $a0, $a0, -0x26B6
    ctx->r4 = ADD32(ctx->r4, -0X26B6);
    // 0x80040AC4: jal         0x8009A2B0
    // 0x80040AC8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x80040AC8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_2:
    // 0x80040ACC: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80040AD0: beq         $v0, $zero, L_80040D30
    if (ctx->r2 == 0) {
        // 0x80040AD4: addiu       $s5, $s5, -0x1
        ctx->r21 = ADD32(ctx->r21, -0X1);
            goto L_80040D30;
    }
    // 0x80040AD4: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x80040AD8: ori         $s6, $zero, 0x8000
    ctx->r22 = 0 | 0X8000;
    // 0x80040ADC: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x80040AE0: addiu       $s7, $s7, -0x35F0
    ctx->r23 = ADD32(ctx->r23, -0X35F0);
L_80040AE4:
    // 0x80040AE4: sll         $v0, $s5, 1
    ctx->r2 = S32(ctx->r21 << 1);
    // 0x80040AE8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80040AEC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80040AF0: lh          $a0, -0x3C88($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3C88);
    // 0x80040AF4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80040AF8: lw          $v1, -0x35C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X35C0);
    // 0x80040AFC: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80040B00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80040B04: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x80040B08: bgtz        $v0, L_80040BC4
    if (SIGNED(ctx->r2) > 0) {
        // 0x80040B0C: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_80040BC4;
    }
    // 0x80040B0C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80040B10: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80040B14: lh          $v0, -0x7158($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7158);
    // 0x80040B18: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80040B1C: lbu         $v1, 0x6B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B40);
    // 0x80040B20: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80040B24: lhu         $a2, 0x49AE($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X49AE);
    // 0x80040B28: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x80040B2C: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x80040B30: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
    // 0x80040B34: sltu        $v0, $a1, $a2
    ctx->r2 = ctx->r5 < ctx->r6 ? 1 : 0;
    // 0x80040B38: beq         $v0, $zero, L_80040B70
    if (ctx->r2 == 0) {
        // 0x80040B3C: addu        $t0, $a0, $zero
        ctx->r8 = ADD32(ctx->r4, 0);
            goto L_80040B70;
    }
    // 0x80040B3C: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80040B40: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80040B44: lh          $v0, -0x7154($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7154);
    // 0x80040B48: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80040B4C: lbu         $a0, -0x39A6($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X39A6);
    // 0x80040B50: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80040B54: lhu         $v1, -0x7386($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7386);
    // 0x80040B58: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x80040B5C: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x80040B60: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80040B64: sltu        $v1, $v0, $v1
    ctx->r3 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80040B68: bne         $v1, $zero, L_80040B78
    if (ctx->r3 != 0) {
        // 0x80040B6C: nop
    
            goto L_80040B78;
    }
    // 0x80040B6C: nop

L_80040B70:
    // 0x80040B70: j           L_80040B8C
    // 0x80040B74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80040B8C;
    // 0x80040B74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80040B78:
    // 0x80040B78: nop

    // 0x80040B7C: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040B80: mflo        $v0
    ctx->r2 = lo;
    // 0x80040B84: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80040B88: nop

L_80040B8C:
    // 0x80040B8C: bne         $t0, $v0, L_80040D28
    if (ctx->r8 != ctx->r2) {
        // 0x80040B90: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80040D28;
    }
    // 0x80040B90: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80040B94: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80040B98: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80040B9C: andi        $v1, $a3, 0x1F00
    ctx->r3 = ctx->r7 & 0X1F00;
    // 0x80040BA0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80040BA4: lh          $a0, -0x26AC($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26AC);
    // 0x80040BA8: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80040BAC: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x80040BB0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80040BB4: bne         $v0, $v1, L_80040D28
    if (ctx->r2 != ctx->r3) {
        // 0x80040BB8: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80040D28;
    }
    // 0x80040BB8: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80040BBC: j           L_80040D34
    // 0x80040BC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80040D34;
    // 0x80040BC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80040BC4:
    // 0x80040BC4: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x80040BC8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80040BCC: lw          $v1, 0xB5C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB5C);
    // 0x80040BD0: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80040BD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80040BD8: addu        $a0, $v1, $v0
    ctx->r4 = ADD32(ctx->r3, ctx->r2);
    // 0x80040BDC: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x80040BE0: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x80040BE4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80040BE8: beq         $v0, $zero, L_80040C04
    if (ctx->r2 == 0) {
        // 0x80040BEC: nop
    
            goto L_80040C04;
    }
    // 0x80040BEC: nop

    // 0x80040BF0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80040BF4: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x80040BF8: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x80040BFC: j           L_80040C14
    // 0x80040C00: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
        goto L_80040C14;
    // 0x80040C00: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
L_80040C04:
    // 0x80040C04: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80040C08: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x80040C0C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x80040C10: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
L_80040C14:
    // 0x80040C14: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80040C18: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80040C1C: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x80040C20: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80040C24: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80040C28: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x80040C2C: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x80040C30: beq         $v0, $zero, L_80040D28
    if (ctx->r2 == 0) {
        // 0x80040C34: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80040D28;
    }
    // 0x80040C34: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80040C38: addiu       $s1, $s4, 0x8
    ctx->r17 = ADD32(ctx->r20, 0X8);
L_80040C3C:
    // 0x80040C3C: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x80040C40: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x80040C44: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80040C48: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80040C4C: lhu         $v0, -0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X6);
    // 0x80040C50: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80040C54: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80040C58: lhu         $v1, 0x24($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X24);
    // 0x80040C5C: lhu         $v0, -0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X4);
    // 0x80040C60: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80040C64: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80040C68: lhu         $v0, -0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X2);
    // 0x80040C6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80040C70: sh          $v1, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r3;
    // 0x80040C74: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80040C78: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x80040C7C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80040C80: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x80040C84: lhu         $a1, 0x4($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X4);
    // 0x80040C88: andi        $v0, $a1, 0xF0
    ctx->r2 = ctx->r5 & 0XF0;
    // 0x80040C8C: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x80040C90: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x80040C94: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80040C98: jalr        $v0
    // 0x80040C9C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80040C9C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x80040CA0: beql        $v0, $zero, L_80040D18
    if (ctx->r2 == 0) {
        // 0x80040CA4: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_80040D18;
    }
    goto skip_0;
    // 0x80040CA4: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    skip_0:
    // 0x80040CA8: lw          $s3, 0x4($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X4);
    // 0x80040CAC: addiu       $s0, $s2, 0x6
    ctx->r16 = ADD32(ctx->r18, 0X6);
L_80040CB0:
    // 0x80040CB0: lhu         $v1, 0x22($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X22);
    // 0x80040CB4: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80040CB8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80040CBC: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80040CC0: lhu         $v0, -0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X4);
    // 0x80040CC4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80040CC8: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    // 0x80040CCC: lhu         $a1, -0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, -0X2);
    // 0x80040CD0: jal         0x8003FC30
    // 0x80040CD4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8003FC30_1B030(rdram, ctx);
        goto after_4;
    // 0x80040CD4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x80040CD8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80040CDC: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x80040CE0: beq         $v0, $zero, L_80040D08
    if (ctx->r2 == 0) {
        // 0x80040CE4: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80040D08;
    }
    // 0x80040CE4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80040CE8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80040CEC: lb          $v0, 0x4A24($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4A24);
    // 0x80040CF0: bne         $v0, $zero, L_80040D08
    if (ctx->r2 != 0) {
        // 0x80040CF4: nop
    
            goto L_80040D08;
    }
    // 0x80040CF4: nop

    // 0x80040CF8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80040CFC: lb          $v0, 0xB60($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XB60);
    // 0x80040D00: bne         $v0, $zero, L_80040D34
    if (ctx->r2 != 0) {
        // 0x80040D04: nop
    
            goto L_80040D34;
    }
    // 0x80040D04: nop

L_80040D08:
    // 0x80040D08: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x80040D0C: bne         $s3, $zero, L_80040CB0
    if (ctx->r19 != 0) {
        // 0x80040D10: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80040CB0;
    }
    // 0x80040D10: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80040D14: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
L_80040D18:
    // 0x80040D18: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80040D1C: bne         $v0, $zero, L_80040C3C
    if (ctx->r2 != 0) {
        // 0x80040D20: addiu       $s4, $s4, 0x10
        ctx->r20 = ADD32(ctx->r20, 0X10);
            goto L_80040C3C;
    }
    // 0x80040D20: addiu       $s4, $s4, 0x10
    ctx->r20 = ADD32(ctx->r20, 0X10);
    // 0x80040D24: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
L_80040D28:
    // 0x80040D28: bne         $v0, $zero, L_80040AE4
    if (ctx->r2 != 0) {
        // 0x80040D2C: addiu       $s5, $s5, -0x1
        ctx->r21 = ADD32(ctx->r21, -0X1);
            goto L_80040AE4;
    }
    // 0x80040D2C: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
L_80040D30:
    // 0x80040D30: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80040D34:
    // 0x80040D34: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x80040D38: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80040D3C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80040D40: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80040D44: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80040D48: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80040D4C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80040D50: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80040D54: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80040D58: jr          $ra
    // 0x80040D5C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80040D5C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80032EA8_E2A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032EA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80032EAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80032EB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80032EB4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80032EB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80032EBC: jal         0x80032F24
    // 0x80032EC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80032F24_E324(rdram, ctx);
        goto after_0;
    // 0x80032EC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80032EC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80032EC8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80032ECC: jal         0x80032F24
    // 0x80032ED0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80032F24_E324(rdram, ctx);
        goto after_1;
    // 0x80032ED0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80032ED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80032ED8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80032EDC: jal         0x80032F24
    // 0x80032EE0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80032F24_E324(rdram, ctx);
        goto after_2;
    // 0x80032EE0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80032EE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80032EE8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80032EEC: jal         0x80032F24
    // 0x80032EF0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80032F24_E324(rdram, ctx);
        goto after_3;
    // 0x80032EF0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x80032EF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80032EF8: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x80032EFC: jal         0x80032F24
    // 0x80032F00: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80032F24_E324(rdram, ctx);
        goto after_4;
    // 0x80032F00: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x80032F04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80032F08: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x80032F0C: jal         0x80032F24
    // 0x80032F10: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80032F24_E324(rdram, ctx);
        goto after_5;
    // 0x80032F10: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_5:
    // 0x80032F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80032F18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80032F1C: jr          $ra
    // 0x80032F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80032F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void memcpy_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009A3B4: beq         $a2, $zero, L_8009A3D4
    if (ctx->r6 == 0) {
        // 0x8009A3B8: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8009A3D4;
    }
    // 0x8009A3B8: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_8009A3BC:
    // 0x8009A3BC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8009A3C0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8009A3C4: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8009A3C8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8009A3CC: bne         $a2, $zero, L_8009A3BC
    if (ctx->r6 != 0) {
        // 0x8009A3D0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8009A3BC;
    }
    // 0x8009A3D0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8009A3D4:
    // 0x8009A3D4: jr          $ra
    // 0x8009A3D8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x8009A3D8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_80036B1C_11F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036B1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036B20: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80036B24: jal         0x8002B2C8
    // 0x80036B28: nop

    func_8002B2C8_66C8(rdram, ctx);
        goto after_0;
    // 0x80036B28: nop

    after_0:
    // 0x80036B2C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80036B30: jr          $ra
    // 0x80036B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80036B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003729C_1269C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003729C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800372A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800372A4: sh          $zero, -0xC66($at)
    MEM_H(-0XC66, ctx->r1) = 0;
    // 0x800372A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800372AC: jr          $ra
    // 0x800372B0: sb          $v0, -0xC6E($at)
    MEM_B(-0XC6E, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800372B0: sb          $v0, -0xC6E($at)
    MEM_B(-0XC6E, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80090F80_6C380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80090F80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80090F84: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80090F88: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80090F8C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80090F90: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x80090F94: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x80090F98: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80090F9C: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x80090FA0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80090FA4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80090FA8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80090FAC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80090FB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80090FB4: lw          $v1, 0x1C($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X1C);
    // 0x80090FB8: lw          $v0, 0x14($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X14);
    // 0x80090FBC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80090FC0: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x80090FC4: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80090FC8: beq         $v0, $zero, L_80090FD4
    if (ctx->r2 == 0) {
        // 0x80090FCC: addu        $s2, $s4, $zero
        ctx->r18 = ADD32(ctx->r20, 0);
            goto L_80090FD4;
    }
    // 0x80090FCC: addu        $s2, $s4, $zero
    ctx->r18 = ADD32(ctx->r20, 0);
    // 0x80090FD0: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_80090FD4:
    // 0x80090FD4: sll         $a3, $a3, 1
    ctx->r7 = S32(ctx->r7 << 1);
    // 0x80090FD8: addu        $s0, $a0, $a3
    ctx->r16 = ADD32(ctx->r4, ctx->r7);
    // 0x80090FDC: sltu        $v0, $a1, $s0
    ctx->r2 = ctx->r5 < ctx->r16 ? 1 : 0;
    // 0x80090FE0: beq         $v0, $zero, L_80091050
    if (ctx->r2 == 0) {
        // 0x80090FE4: subu        $s1, $a1, $a0
        ctx->r17 = SUB32(ctx->r5, ctx->r4);
            goto L_80091050;
    }
    // 0x80090FE4: subu        $s1, $a1, $a0
    ctx->r17 = SUB32(ctx->r5, ctx->r4);
    // 0x80090FE8: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80090FEC: sra         $s1, $s1, 1
    ctx->r17 = S32(SIGNED(ctx->r17) >> 1);
    // 0x80090FF0: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    // 0x80090FF4: andi        $v1, $s1, 0xFFF
    ctx->r3 = ctx->r17 & 0XFFF;
    // 0x80090FF8: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80090FFC: andi        $v0, $s6, 0xFFF
    ctx->r2 = ctx->r22 & 0XFFF;
    // 0x80091000: lui         $s3, 0x400
    ctx->r19 = S32(0X400 << 16);
    // 0x80091004: or          $v0, $v0, $s3
    ctx->r2 = ctx->r2 | ctx->r19;
    // 0x80091008: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8009100C: subu        $s0, $s0, $a1
    ctx->r16 = SUB32(ctx->r16, ctx->r5);
    // 0x80091010: sra         $s0, $s0, 1
    ctx->r16 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80091014: jal         0x80099BB0
    // 0x80091018: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x80091018: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    after_0:
    // 0x8009101C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x80091020: addu        $s2, $s4, $zero
    ctx->r18 = ADD32(ctx->r20, 0);
    // 0x80091024: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80091028: andi        $s0, $s0, 0xFFF
    ctx->r16 = ctx->r16 & 0XFFF;
    // 0x8009102C: sll         $s0, $s0, 12
    ctx->r16 = S32(ctx->r16 << 12);
    // 0x80091030: addu        $s1, $s6, $s1
    ctx->r17 = ADD32(ctx->r22, ctx->r17);
    // 0x80091034: andi        $s1, $s1, 0xFFF
    ctx->r17 = ctx->r17 & 0XFFF;
    // 0x80091038: or          $s1, $s1, $s3
    ctx->r17 = ctx->r17 | ctx->r19;
    // 0x8009103C: or          $s0, $s0, $s1
    ctx->r16 = ctx->r16 | ctx->r17;
    // 0x80091040: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
    // 0x80091044: lw          $a0, 0x14($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X14);
    // 0x80091048: j           L_80091070
    // 0x8009104C: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
        goto L_80091070;
    // 0x8009104C: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
L_80091050:
    // 0x80091050: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80091054: andi        $v0, $a3, 0xFFF
    ctx->r2 = ctx->r7 & 0XFFF;
    // 0x80091058: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8009105C: andi        $v1, $s6, 0xFFF
    ctx->r3 = ctx->r22 & 0XFFF;
    // 0x80091060: lui         $a1, 0x400
    ctx->r5 = S32(0X400 << 16);
    // 0x80091064: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x80091068: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8009106C: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
L_80091070:
    // 0x80091070: jal         0x80099BB0
    // 0x80091074: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x80091074: nop

    after_1:
    // 0x80091078: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x8009107C: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x80091080: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80091084: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80091088: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8009108C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80091090: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80091094: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80091098: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8009109C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800910A0: jr          $ra
    // 0x800910A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800910A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void _loadBuffer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800986F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800986F4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x800986F8: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x800986FC: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80098700: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x80098704: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x80098708: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8009870C: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x80098710: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x80098714: addu        $fp, $a3, $zero
    ctx->r30 = ADD32(ctx->r7, 0);
    // 0x80098718: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8009871C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80098720: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80098724: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80098728: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8009872C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80098730: lw          $v1, 0x1C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X1C);
    // 0x80098734: lw          $v0, 0x14($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X14);
    // 0x80098738: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8009873C: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x80098740: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80098744: beq         $v0, $zero, L_80098750
    if (ctx->r2 == 0) {
        // 0x80098748: addu        $a2, $s5, $zero
        ctx->r6 = ADD32(ctx->r21, 0);
            goto L_80098750;
    }
    // 0x80098748: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x8009874C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_80098750:
    // 0x80098750: sll         $a3, $fp, 1
    ctx->r7 = S32(ctx->r30 << 1);
    // 0x80098754: addu        $s1, $a0, $a3
    ctx->r17 = ADD32(ctx->r4, ctx->r7);
    // 0x80098758: sltu        $v0, $a1, $s1
    ctx->r2 = ctx->r5 < ctx->r17 ? 1 : 0;
    // 0x8009875C: beq         $v0, $zero, L_800987E0
    if (ctx->r2 == 0) {
        // 0x80098760: andi        $v0, $s6, 0xFFFF
        ctx->r2 = ctx->r22 & 0XFFFF;
            goto L_800987E0;
    }
    // 0x80098760: andi        $v0, $s6, 0xFFFF
    ctx->r2 = ctx->r22 & 0XFFFF;
    // 0x80098764: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80098768: addu        $s4, $s5, $zero
    ctx->r20 = ADD32(ctx->r21, 0);
    // 0x8009876C: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80098770: lui         $s3, 0x800
    ctx->r19 = S32(0X800 << 16);
    // 0x80098774: or          $v0, $v0, $s3
    ctx->r2 = ctx->r2 | ctx->r19;
    // 0x80098778: subu        $s0, $a1, $a0
    ctx->r16 = SUB32(ctx->r5, ctx->r4);
    // 0x8009877C: sra         $s0, $s0, 1
    ctx->r16 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80098780: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80098784: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80098788: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x8009878C: lui         $s2, 0x400
    ctx->r18 = S32(0X400 << 16);
    // 0x80098790: subu        $s1, $s1, $a1
    ctx->r17 = SUB32(ctx->r17, ctx->r5);
    // 0x80098794: sra         $s1, $s1, 1
    ctx->r17 = S32(SIGNED(ctx->r17) >> 1);
    // 0x80098798: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x8009879C: jal         0x80099BB0
    // 0x800987A0: sw          $s2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r18;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x800987A0: sw          $s2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r18;
    after_0:
    // 0x800987A4: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x800987A8: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x800987AC: addu        $s0, $s6, $s0
    ctx->r16 = ADD32(ctx->r22, ctx->r16);
    // 0x800987B0: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x800987B4: or          $s0, $s0, $s3
    ctx->r16 = ctx->r16 | ctx->r19;
    // 0x800987B8: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    // 0x800987BC: andi        $s1, $s1, 0xFFFF
    ctx->r17 = ctx->r17 & 0XFFFF;
    // 0x800987C0: sw          $v0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r2;
    // 0x800987C4: sw          $s0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r16;
    // 0x800987C8: addu        $s0, $s5, $zero
    ctx->r16 = ADD32(ctx->r21, 0);
    // 0x800987CC: sw          $s1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r17;
    // 0x800987D0: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x800987D4: lw          $a0, 0x14($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X14);
    // 0x800987D8: j           L_80098808
    // 0x800987DC: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
        goto L_80098808;
    // 0x800987DC: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
L_800987E0:
    // 0x800987E0: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x800987E4: addu        $s0, $s5, $zero
    ctx->r16 = ADD32(ctx->r21, 0);
    // 0x800987E8: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x800987EC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x800987F0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800987F4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x800987F8: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
    // 0x800987FC: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x80098800: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80098804: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_80098808:
    // 0x80098808: jal         0x80099BB0
    // 0x8009880C: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8009880C: nop

    after_1:
    // 0x80098810: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80098814: addiu       $v0, $s5, 0x8
    ctx->r2 = ADD32(ctx->r21, 0X8);
    // 0x80098818: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8009881C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80098820: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x80098824: sll         $v1, $fp, 1
    ctx->r3 = S32(ctx->r30 << 1);
    // 0x80098828: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8009882C: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x80098830: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80098834: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x80098838: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8009883C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80098840: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80098844: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80098848: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8009884C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80098850: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80098854: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80098858: jr          $ra
    // 0x8009885C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8009885C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800651BC_405BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800651BC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800651C0: lbu         $v0, -0x3B9B($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B9B);
    // 0x800651C4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800651C8: lbu         $v1, -0x3B9C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B9C);
    // 0x800651CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800651D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800651D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800651D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800651DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800651E0: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x800651E4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800651E8: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x800651EC: jal         0x80070E80
    // 0x800651F0: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    func_80070E80_4C280(rdram, ctx);
        goto after_0;
    // 0x800651F0: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    after_0:
    // 0x800651F4: bne         $v0, $zero, L_8006520C
    if (ctx->r2 != 0) {
        // 0x800651F8: nop
    
            goto L_8006520C;
    }
    // 0x800651F8: nop

    // 0x800651FC: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80065200: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x80065204: j           L_8006524C
    // 0x80065208: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
        goto L_8006524C;
    // 0x80065208: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
L_8006520C:
    // 0x8006520C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80065210: lh          $v0, -0x3BB8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3BB8);
    // 0x80065214: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x80065218: bne         $v0, $zero, L_80065240
    if (ctx->r2 != 0) {
        // 0x8006521C: nop
    
            goto L_80065240;
    }
    // 0x8006521C: nop

    // 0x80065220: jal         0x80070E80
    // 0x80065224: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_80070E80_4C280(rdram, ctx);
        goto after_1;
    // 0x80065224: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_1:
    // 0x80065228: bne         $v0, $zero, L_80065240
    if (ctx->r2 != 0) {
        // 0x8006522C: nop
    
            goto L_80065240;
    }
    // 0x8006522C: nop

    // 0x80065230: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80065234: lbu         $v1, 0x3($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3);
    // 0x80065238: j           L_8006524C
    // 0x8006523C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
        goto L_8006524C;
    // 0x8006523C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
L_80065240:
    // 0x80065240: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80065244: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80065248: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
L_8006524C:
    // 0x8006524C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80065250: bne         $a0, $v0, L_80065268
    if (ctx->r4 != ctx->r2) {
        // 0x80065254: nop
    
            goto L_80065268;
    }
    // 0x80065254: nop

    // 0x80065258: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x8006525C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80065260: j           L_800652C4
    // 0x80065264: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
        goto L_800652C4;
    // 0x80065264: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
L_80065268:
    // 0x80065268: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x8006526C: beq         $a1, $zero, L_800652A0
    if (ctx->r5 == 0) {
        // 0x80065270: sh          $v1, 0xC2($s0)
        MEM_H(0XC2, ctx->r16) = ctx->r3;
            goto L_800652A0;
    }
    // 0x80065270: sh          $v1, 0xC2($s0)
    MEM_H(0XC2, ctx->r16) = ctx->r3;
    // 0x80065274: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80065278: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8006527C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80065280: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80065284: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80065288: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8006528C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80065290: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x80065294: sw          $v1, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r3;
    // 0x80065298: j           L_800652B8
    // 0x8006529C: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
        goto L_800652B8;
    // 0x8006529C: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
L_800652A0:
    // 0x800652A0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x800652A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800652A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800652AC: lw          $v0, 0x27EC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X27EC);
    // 0x800652B0: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    // 0x800652B4: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
L_800652B8:
    // 0x800652B8: sb          $zero, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = 0;
    // 0x800652BC: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
    // 0x800652C0: sb          $zero, 0x72($s0)
    MEM_B(0X72, ctx->r16) = 0;
L_800652C4:
    // 0x800652C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800652C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800652CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800652D0: jr          $ra
    // 0x800652D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800652D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800530E8_2E4E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800530E8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x800530EC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800530F0: lw          $v1, -0x41B0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41B0);
    // 0x800530F4: srlv        $v0, $v0, $a0
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r4 & 31));
    // 0x800530F8: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x800530FC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80053100: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80053104: jr          $ra
    // 0x80053108: sw          $v1, -0x41B0($at)
    MEM_W(-0X41B0, ctx->r1) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80053108: sw          $v1, -0x41B0($at)
    MEM_W(-0X41B0, ctx->r1) = ctx->r3;
;}
RECOMP_FUNC void func_80049948_24D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049948: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004994C: lw          $v0, 0x6B30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6B30);
    // 0x80049950: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80049954: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80049958: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8004995C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80049960: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80049964: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80049968: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8004996C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80049970: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80049974: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80049978: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004997C: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x80049980: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80049984: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80049988: sw          $v0, 0x6B30($at)
    MEM_W(0X6B30, ctx->r1) = ctx->r2;
    // 0x8004998C: lbu         $v0, 0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XC);
    // 0x80049990: lh          $v1, 0x6E($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X6E);
    // 0x80049994: srl         $a1, $v0, 4
    ctx->r5 = S32(U32(ctx->r2) >> 4);
    // 0x80049998: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004999C: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x800499A0: blez        $v1, L_800499B4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800499A4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_800499B4;
    }
    // 0x800499A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800499A8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x800499AC: j           L_800499B8
    // 0x800499B0: srlv        $s4, $v0, $a1
    ctx->r20 = S32(U32(ctx->r2) >> (ctx->r5 & 31));
        goto L_800499B8;
    // 0x800499B0: srlv        $s4, $v0, $a1
    ctx->r20 = S32(U32(ctx->r2) >> (ctx->r5 & 31));
L_800499B4:
    // 0x800499B4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_800499B8:
    // 0x800499B8: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x800499BC: lh          $v0, 0xB0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XB0);
    // 0x800499C0: lbu         $v1, 0xC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XC);
    // 0x800499C4: lbu         $a0, 0xE($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XE);
    // 0x800499C8: srav        $s7, $v0, $a1
    ctx->r23 = S32(SIGNED(ctx->r2) >> (ctx->r5 & 31));
    // 0x800499CC: beq         $a0, $zero, L_800499E0
    if (ctx->r4 == 0) {
        // 0x800499D0: andi        $a1, $v1, 0xF
        ctx->r5 = ctx->r3 & 0XF;
            goto L_800499E0;
    }
    // 0x800499D0: andi        $a1, $v1, 0xF
    ctx->r5 = ctx->r3 & 0XF;
    // 0x800499D4: lh          $s0, 0x14($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X14);
    // 0x800499D8: j           L_800499E8
    // 0x800499DC: lh          $a2, 0x16($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X16);
        goto L_800499E8;
    // 0x800499DC: lh          $a2, 0x16($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X16);
L_800499E0:
    // 0x800499E0: addiu       $s0, $zero, 0x120
    ctx->r16 = ADD32(0, 0X120);
    // 0x800499E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_800499E8:
    // 0x800499E8: lbu         $v0, 0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XD);
    // 0x800499EC: beq         $v0, $zero, L_80049A08
    if (ctx->r2 == 0) {
        // 0x800499F0: sll         $v0, $a1, 1
        ctx->r2 = S32(ctx->r5 << 1);
            goto L_80049A08;
    }
    // 0x800499F0: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x800499F4: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x800499F8: lh          $v1, 0x1A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X1A);
    // 0x800499FC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80049A00: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80049A04: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
L_80049A08:
    // 0x80049A08: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80049A0C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80049A10: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80049A14: sll         $s1, $v0, 2
    ctx->r17 = S32(ctx->r2 << 2);
    // 0x80049A18: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x80049A1C: addiu       $s5, $s5, -0x3064
    ctx->r21 = ADD32(ctx->r21, -0X3064);
    // 0x80049A20: addu        $a0, $s1, $s5
    ctx->r4 = ADD32(ctx->r17, ctx->r21);
    // 0x80049A24: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x80049A28: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80049A2C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80049A30: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80049A34: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x80049A38: jal         0x80049CCC
    // 0x80049A3C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80049CCC_250CC(rdram, ctx);
        goto after_0;
    // 0x80049A3C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80049A40: addiu       $a0, $s5, 0x14
    ctx->r4 = ADD32(ctx->r21, 0X14);
    // 0x80049A44: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x80049A48: subu        $v0, $s0, $s7
    ctx->r2 = SUB32(ctx->r16, ctx->r23);
    // 0x80049A4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80049A50: sra         $s6, $v0, 16
    ctx->r22 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80049A54: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x80049A58: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x80049A5C: jal         0x80049CCC
    // 0x80049A60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80049CCC_250CC(rdram, ctx);
        goto after_1;
    // 0x80049A60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80049A64: blez        $s4, L_80049AE0
    if (SIGNED(ctx->r20) <= 0) {
        // 0x80049A68: addiu       $a0, $s5, 0x3C
        ctx->r4 = ADD32(ctx->r21, 0X3C);
            goto L_80049AE0;
    }
    // 0x80049A68: addiu       $a0, $s5, 0x3C
    ctx->r4 = ADD32(ctx->r21, 0X3C);
    // 0x80049A6C: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x80049A70: subu        $s0, $s0, $s4
    ctx->r16 = SUB32(ctx->r16, ctx->r20);
    // 0x80049A74: addiu       $a1, $s0, 0x1
    ctx->r5 = ADD32(ctx->r16, 0X1);
    // 0x80049A78: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80049A7C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80049A80: addu        $a3, $a3, $s1
    ctx->r7 = ADD32(ctx->r7, ctx->r17);
    // 0x80049A84: lhu         $a3, -0x301E($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X301E);
    // 0x80049A88: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80049A8C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x80049A90: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x80049A94: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    // 0x80049A98: or          $a3, $a3, $s4
    ctx->r7 = ctx->r7 | ctx->r20;
    // 0x80049A9C: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x80049AA0: jal         0x80049DC4
    // 0x80049AA4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80049DC4_251C4(rdram, ctx);
        goto after_2;
    // 0x80049AA4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x80049AA8: addiu       $a0, $s5, 0x50
    ctx->r4 = ADD32(ctx->r21, 0X50);
    // 0x80049AAC: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x80049AB0: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80049AB4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80049AB8: addu        $a3, $a3, $s1
    ctx->r7 = ADD32(ctx->r7, ctx->r17);
    // 0x80049ABC: lhu         $a3, -0x300A($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X300A);
    // 0x80049AC0: sra         $a1, $s0, 16
    ctx->r5 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80049AC4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x80049AC8: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x80049ACC: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    // 0x80049AD0: ori         $a3, $a3, 0x1
    ctx->r7 = ctx->r7 | 0X1;
    // 0x80049AD4: andi        $a3, $a3, 0xFF01
    ctx->r7 = ctx->r7 & 0XFF01;
    // 0x80049AD8: jal         0x80049DC4
    // 0x80049ADC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80049DC4_251C4(rdram, ctx);
        goto after_3;
    // 0x80049ADC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
L_80049AE0:
    // 0x80049AE0: addiu       $a0, $s5, 0x28
    ctx->r4 = ADD32(ctx->r21, 0X28);
    // 0x80049AE4: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x80049AE8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80049AEC: addu        $a3, $a3, $s1
    ctx->r7 = ADD32(ctx->r7, ctx->r17);
    // 0x80049AF0: lhu         $a3, -0x3032($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X3032);
    // 0x80049AF4: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x80049AF8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x80049AFC: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    // 0x80049B00: or          $a3, $a3, $s7
    ctx->r7 = ctx->r7 | ctx->r23;
    // 0x80049B04: jal         0x80049CCC
    // 0x80049B08: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    func_80049CCC_250CC(rdram, ctx);
        goto after_4;
    // 0x80049B08: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    after_4:
    // 0x80049B0C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80049B10: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80049B14: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80049B18: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80049B1C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80049B20: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80049B24: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80049B28: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80049B2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80049B30: jr          $ra
    // 0x80049B34: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80049B34: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void PadMgr_ThreadEntry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026BD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80026BD4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80026BD8: addiu       $a0, $a0, 0x39F8
    ctx->r4 = ADD32(ctx->r4, 0X39F8);
    // 0x80026BDC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80026BE0: addiu       $a1, $a1, 0x3A10
    ctx->r5 = ADD32(ctx->r5, 0X3A10);
    // 0x80026BE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80026BE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80026BEC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026BF0: sw          $zero, 0x3A34($at)
    MEM_W(0X3A34, ctx->r1) = 0;
    // 0x80026BF4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026BF8: sw          $zero, 0x3F68($at)
    MEM_W(0X3F68, ctx->r1) = 0;
    // 0x80026BFC: jal         0x8009A470
    // 0x80026C00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80026C00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80026C04: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80026C08: addiu       $a0, $a0, 0x3A18
    ctx->r4 = ADD32(ctx->r4, 0X3A18);
    // 0x80026C0C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80026C10: addiu       $a1, $a1, 0x3A30
    ctx->r5 = ADD32(ctx->r5, 0X3A30);
    // 0x80026C14: jal         0x8009A470
    // 0x80026C18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x80026C18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80026C1C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80026C20: addiu       $a0, $a0, 0x38E0
    ctx->r4 = ADD32(ctx->r4, 0X38E0);
    // 0x80026C24: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80026C28: addiu       $a1, $a1, 0x38F8
    ctx->r5 = ADD32(ctx->r5, 0X38F8);
    // 0x80026C2C: jal         0x8009A470
    // 0x80026C30: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x80026C30: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_2:
    // 0x80026C34: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80026C38: addiu       $s0, $s0, 0x35B0
    ctx->r16 = ADD32(ctx->r16, 0X35B0);
    // 0x80026C3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80026C40: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80026C44: lui         $a2, 0x8002
    ctx->r6 = S32(0X8002 << 16);
    // 0x80026C48: addiu       $a2, $a2, 0x70F8
    ctx->r6 = ADD32(ctx->r6, 0X70F8);
    // 0x80026C4C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80026C50: addiu       $v0, $v0, 0x38E0
    ctx->r2 = ADD32(ctx->r2, 0X38E0);
    // 0x80026C54: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80026C58: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80026C5C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80026C60: jal         0x8009B750
    // 0x80026C64: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    osCreateThread_recomp(rdram, ctx);
        goto after_3;
    // 0x80026C64: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_3:
    // 0x80026C68: jal         0x8009B9F0
    // 0x80026C6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_4;
    // 0x80026C6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80026C70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80026C74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80026C78: jr          $ra
    // 0x80026C7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80026C7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800260EC_14EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800260EC: jr          $ra
    // 0x800260F0: sw          $a1, -0x28($a0)
    MEM_W(-0X28, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x800260F0: sw          $a1, -0x28($a0)
    MEM_W(-0X28, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void __scYield(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009B364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009B368: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8009B36C: lw          $a0, 0x274($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X274);
    // 0x8009B370: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8009B374: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8009B378: bne         $v1, $v0, L_8009B390
    if (ctx->r3 != ctx->r2) {
        // 0x8009B37C: nop
    
            goto L_8009B390;
    }
    // 0x8009B37C: nop

    // 0x8009B380: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8009B384: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8009B388: jal         0x8009AB30
    // 0x8009B38C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    osSpTaskYield_recomp(rdram, ctx);
        goto after_0;
    // 0x8009B38C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    after_0:
L_8009B390:
    // 0x8009B390: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8009B394: jr          $ra
    // 0x8009B398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8009B398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80091D1C_6D11C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091D1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091D20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80091D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091D28: jal         0x80098C4C
    // 0x80091D2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x80091D2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80091D30: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80091D34: lw          $a1, -0xEEC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XEEC);
    // 0x80091D38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80091D3C: jal         0x80098C2C
    // 0x80091D40: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    alLink(rdram, ctx);
        goto after_1;
    // 0x80091D40: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
    // 0x80091D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091D48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80091D4C: jr          $ra
    // 0x80091D50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80091D50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80025D14_1114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80025D14: addiu       $sp, $sp, -0x818
    ctx->r29 = ADD32(ctx->r29, -0X818);
    // 0x80025D18: sw          $ra, 0x810($sp)
    MEM_W(0X810, ctx->r29) = ctx->r31;
    // 0x80025D1C: jal         0x800928A0
    // 0x80025D20: nop

    func_800928A0_6DCA0(rdram, ctx);
        goto after_0;
    // 0x80025D20: nop

    after_0:
    // 0x80025D24: jal         0x80092EB0
    // 0x80025D28: nop

    func_80092EB0_6E2B0(rdram, ctx);
        goto after_1;
    // 0x80025D28: nop

    after_1:
    // 0x80025D2C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80025D30: addiu       $a0, $a0, 0x6CB8
    ctx->r4 = ADD32(ctx->r4, 0X6CB8);
    // 0x80025D34: jal         0x80092F50
    // 0x80025D38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80092F50_6E350(rdram, ctx);
        goto after_2;
    // 0x80025D38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80025D3C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x80025D40: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x80025D44: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80025D48: addiu       $a0, $a0, 0x2E90
    ctx->r4 = ADD32(ctx->r4, 0X2E90);
    // 0x80025D4C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80025D50: jal         0x80092E50
    // 0x80025D54: sw          $v0, -0x237C($at)
    MEM_W(-0X237C, ctx->r1) = ctx->r2;
    func_80092E50_6E250(rdram, ctx);
        goto after_3;
    // 0x80025D54: sw          $v0, -0x237C($at)
    MEM_W(-0X237C, ctx->r1) = ctx->r2;
    after_3:
    // 0x80025D58: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80025D5C: addiu       $a0, $a0, -0x1420
    ctx->r4 = ADD32(ctx->r4, -0X1420);
    // 0x80025D60: jal         0x800930A0
    // 0x80025D64: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    osSetTime_recomp(rdram, ctx);
        goto after_4;
    // 0x80025D64: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    after_4:
    // 0x80025D68: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80025D6C: addiu       $v0, $v0, 0x6CB0
    ctx->r2 = ADD32(ctx->r2, 0X6CB0);
    // 0x80025D70: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80025D74: jal         0x80092AE4
    // 0x80025D78: sw          $v0, -0x71E0($at)
    MEM_W(-0X71E0, ctx->r1) = ctx->r2;
    func_80092AE4_6DEE4(rdram, ctx);
        goto after_5;
    // 0x80025D78: sw          $v0, -0x71E0($at)
    MEM_W(-0X71E0, ctx->r1) = ctx->r2;
    after_5:
    // 0x80025D7C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80025D80: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x80025D84: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x80025D88: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80025D8C: lui         $v0, 0xA
    ctx->r2 = S32(0XA << 16);
    // 0x80025D90: addiu       $v0, $v0, 0x6CC0
    ctx->r2 = ADD32(ctx->r2, 0X6CC0);
    // 0x80025D94: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80025D98: lui         $v0, 0xE900
    ctx->r2 = S32(0XE900 << 16);
    // 0x80025D9C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80025DA0: lui         $v0, 0xDF00
    ctx->r2 = S32(0XDF00 << 16);
    // 0x80025DA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80025DA8: lui         $a3, 0x4
    ctx->r7 = S32(0X4 << 16);
    // 0x80025DAC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80025DB0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80025DB4: jal         0x80092C6C
    // 0x80025DB8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_80092C6C_6E06C(rdram, ctx);
        goto after_6;
    // 0x80025DB8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_6:
    // 0x80025DBC: jal         0x80092EB0
    // 0x80025DC0: nop

    func_80092EB0_6E2B0(rdram, ctx);
        goto after_7;
    // 0x80025DC0: nop

    after_7:
    // 0x80025DC4: lw          $ra, 0x810($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X810);
    // 0x80025DC8: jr          $ra
    // 0x80025DCC: addiu       $sp, $sp, 0x818
    ctx->r29 = ADD32(ctx->r29, 0X818);
    TRACE_RETURN()
    return;
    // 0x80025DCC: addiu       $sp, $sp, 0x818
    ctx->r29 = ADD32(ctx->r29, 0X818);
;}
RECOMP_FUNC void func_8008DB44_68F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008DB44: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008DB48: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008DB4C: ldc1        $f2, 0x2DE0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2DE0);
    // 0x8008DB50: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8008DB54: nop

    // 0x8008DB58: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008DB5C: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008DB60: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x8008DB64: lwc1        $f2, 0x70($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X70);
    // 0x8008DB68: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x8008DB6C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8008DB70: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8008DB74: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x8008DB78: jr          $ra
    // 0x8008DB7C: swc1        $f2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f2.u32l;
    TRACE_RETURN()
    return;
    // 0x8008DB7C: swc1        $f2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f2.u32l;
;}
RECOMP_FUNC void func_80072E00_4E200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80072E00: jr          $ra
    // 0x80072E04: nop

    TRACE_RETURN()
    return;
    // 0x80072E04: nop

;}
RECOMP_FUNC void func_80048694_23A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048694: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80048698: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x8004869C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x800486A0: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x800486A4: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x800486A8: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x800486AC: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x800486B0: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x800486B4: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x800486B8: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x800486BC: beq         $v0, $zero, L_800487F4
    if (ctx->r2 == 0) {
        // 0x800486C0: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_800487F4;
    }
    // 0x800486C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800486C4: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x800486C8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800486CC: addiu       $s4, $s1, 0x1C
    ctx->r20 = ADD32(ctx->r17, 0X1C);
    // 0x800486D0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x800486D4: jal         0x8009A3B4
    // 0x800486D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x800486D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x800486DC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x800486E0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x800486E4: jal         0x8009A3B4
    // 0x800486E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x800486E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x800486EC: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x800486F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800486F4: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x800486F8: jal         0x8009A3B4
    // 0x800486FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x800486FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80048700: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x80048704: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x80048708: ori         $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 | 0XFFF;
    // 0x8004870C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80048710: beq         $v0, $zero, L_80048788
    if (ctx->r2 == 0) {
        // 0x80048714: addiu       $a0, $sp, 0x68
        ctx->r4 = ADD32(ctx->r29, 0X68);
            goto L_80048788;
    }
    // 0x80048714: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80048718: lhu         $v0, 0x5C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X5C);
    // 0x8004871C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80048720: sh          $v0, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r2;
    // 0x80048724: lhu         $v0, 0x5E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X5E);
    // 0x80048728: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8004872C: sh          $v0, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r2;
    // 0x80048730: lhu         $v0, 0x60($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X60);
    // 0x80048734: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80048738: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8004873C: jal         0x80031428
    // 0x80048740: sh          $v0, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r2;
    func_80031428_C828(rdram, ctx);
        goto after_3;
    // 0x80048740: sh          $v0, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r2;
    after_3:
    // 0x80048744: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80048748: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8004874C: jal         0x8004DD50
    // 0x80048750: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_8004DD50_29150(rdram, ctx);
        goto after_4;
    // 0x80048750: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_4:
    // 0x80048754: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x80048758: sh          $v0, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r2;
    // 0x8004875C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80048760: sh          $v0, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r2;
    // 0x80048764: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x80048768: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8004876C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80048770: jal         0x80031600
    // 0x80048774: sh          $v0, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x80048774: sh          $v0, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r2;
    after_5:
    // 0x80048778: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8004877C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80048780: jal         0x8004DD50
    // 0x80048784: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_8004DD50_29150(rdram, ctx);
        goto after_6;
    // 0x80048784: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_6:
L_80048788:
    // 0x80048788: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8004878C: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80048790: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80048794: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80048798: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8004879C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x800487A0: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x800487A4: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x800487A8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x800487AC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x800487B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800487B4: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x800487B8: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x800487BC: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x800487C0: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x800487C4: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x800487C8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x800487CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800487D0: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x800487D4: jal         0x8004DD04
    // 0x800487D8: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_7;
    // 0x800487D8: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_7:
    // 0x800487DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x800487E0: lhu         $a0, 0x5E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X5E);
    // 0x800487E4: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x800487E8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x800487EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800487F0: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_800487F4:
    // 0x800487F4: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x800487F8: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x800487FC: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x80048800: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80048804: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x80048808: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x8004880C: jr          $ra
    // 0x80048810: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x80048810: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8006FAD0_4AED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FAD0: jr          $ra
    // 0x8006FAD4: nop

    TRACE_RETURN()
    return;
    // 0x8006FAD4: nop

;}
RECOMP_FUNC void func_8004DD04_29104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004DD04: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8004DD08: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004DD0C: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8004DD10: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8004DD14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004DD18: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
    // 0x8004DD1C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8004DD20: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004DD24: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8004DD28: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8004DD2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004DD30: sh          $v1, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r3;
    // 0x8004DD34: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8004DD38: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004DD3C: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8004DD40: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8004DD44: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004DD48: jr          $ra
    // 0x8004DD4C: sh          $v1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8004DD4C: sh          $v1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r3;
;}
RECOMP_FUNC void func_8008D840_68C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D840: sb          $zero, 0xCE($a0)
    MEM_B(0XCE, ctx->r4) = 0;
    // 0x8008D844: jr          $ra
    // 0x8008D848: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D848: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void alSynAllocFX(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800993A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800993A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800993A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800993AC: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x800993B0: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x800993B4: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x800993B8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800993BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800993C0: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x800993C4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x800993C8: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x800993CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800993D0: lw          $a0, 0x34($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X34);
    // 0x800993D4: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x800993D8: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x800993DC: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x800993E0: jal         0x80095AC4
    // 0x800993E4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    alFxNew(rdram, ctx);
        goto after_0;
    // 0x800993E4: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_0:
    // 0x800993E8: lw          $a2, 0x34($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X34);
    // 0x800993EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800993F0: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x800993F4: jal         0x800982D4
    // 0x800993F8: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    alFxParam(rdram, ctx);
        goto after_1;
    // 0x800993F8: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    after_1:
    // 0x800993FC: lw          $a2, 0x34($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X34);
    // 0x80099400: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x80099404: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80099408: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x8009940C: jal         0x80097C80
    // 0x80099410: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    alMainBusParam(rdram, ctx);
        goto after_2;
    // 0x80099410: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    after_2:
    // 0x80099414: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x80099418: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8009941C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80099420: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80099424: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80099428: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8009942C: jr          $ra
    // 0x80099430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80099430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8006E594_49994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006E594: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006E598: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8006E59C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8006E5A0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8006E5A4: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8006E5A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006E5AC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8006E5B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8006E5B4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006E5B8: jal         0x8009A3B4
    // 0x8006E5BC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8006E5BC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    after_0:
    // 0x8006E5C0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8006E5C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8006E5C8: jal         0x8009A3B4
    // 0x8006E5CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8006E5CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8006E5D0: lb          $v0, 0x74($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X74);
    // 0x8006E5D4: beq         $v0, $zero, L_8006E820
    if (ctx->r2 == 0) {
        // 0x8006E5D8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006E820;
    }
    // 0x8006E5D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006E5DC: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x8006E5E0: blez        $v0, L_8006E820
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8006E5E4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006E820;
    }
    // 0x8006E5E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006E5E8: lh          $s0, 0x16($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X16);
    // 0x8006E5EC: jal         0x8003E934
    // 0x8006E5F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8006E5F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8006E5F4: lw          $v1, 0x78($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X78);
    // 0x8006E5F8: lh          $v1, 0xA($v1)
    ctx->r3 = MEM_H(ctx->r3, 0XA);
    // 0x8006E5FC: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x8006E600: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8006E604: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8006E608: bne         $v0, $zero, L_8006E820
    if (ctx->r2 != 0) {
        // 0x8006E60C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006E820;
    }
    // 0x8006E60C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006E610: jal         0x8003F2DC
    // 0x8006E614: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003F2DC_1A6DC(rdram, ctx);
        goto after_3;
    // 0x8006E614: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8006E618: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8006E61C: lh          $a0, 0x116($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X116);
    // 0x8006E620: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8006E624: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8006E628: addiu       $v1, $v1, 0x200
    ctx->r3 = ADD32(ctx->r3, 0X200);
    // 0x8006E62C: sra         $a2, $v1, 10
    ctx->r6 = S32(SIGNED(ctx->r3) >> 10);
    // 0x8006E630: andi        $v0, $a2, 0x1
    ctx->r2 = ctx->r6 & 0X1;
    // 0x8006E634: beq         $v0, $zero, L_8006E6BC
    if (ctx->r2 == 0) {
        // 0x8006E638: andi        $s2, $a2, 0x3
        ctx->r18 = ctx->r6 & 0X3;
            goto L_8006E6BC;
    }
    // 0x8006E638: andi        $s2, $a2, 0x3
    ctx->r18 = ctx->r6 & 0X3;
    // 0x8006E63C: lw          $v1, 0x78($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X78);
    // 0x8006E640: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x8006E644: lhu         $v1, 0x4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4);
    // 0x8006E648: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006E64C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8006E650: lw          $v1, 0x78($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X78);
    // 0x8006E654: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8006E658: lh          $a0, -0x7158($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7158);
    // 0x8006E65C: lhu         $v0, 0x1C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1C);
    // 0x8006E660: lhu         $v1, 0x6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6);
    // 0x8006E664: subu        $a1, $a1, $a0
    ctx->r5 = SUB32(ctx->r5, ctx->r4);
    // 0x8006E668: sh          $a1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r5;
    // 0x8006E66C: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    // 0x8006E670: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006E674: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x8006E678: andi        $v0, $a2, 0x2
    ctx->r2 = ctx->r6 & 0X2;
    // 0x8006E67C: beq         $v0, $zero, L_8006E698
    if (ctx->r2 == 0) {
        // 0x8006E680: nop
    
            goto L_8006E698;
    }
    // 0x8006E680: nop

    // 0x8006E684: lw          $v0, 0x78($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X78);
    // 0x8006E688: lhu         $v1, 0x18($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X18);
    // 0x8006E68C: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8006E690: j           L_8006E6A8
    // 0x8006E694: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_8006E6A8;
    // 0x8006E694: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8006E698:
    // 0x8006E698: lw          $v0, 0x78($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X78);
    // 0x8006E69C: lhu         $v1, 0x18($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X18);
    // 0x8006E6A0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8006E6A4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_8006E6A8:
    // 0x8006E6A8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8006E6AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006E6B0: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    // 0x8006E6B4: j           L_8006E738
    // 0x8006E6B8: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
        goto L_8006E738;
    // 0x8006E6B8: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
L_8006E6BC:
    // 0x8006E6BC: lw          $v1, 0x78($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X78);
    // 0x8006E6C0: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8006E6C4: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x8006E6C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006E6CC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8006E6D0: lw          $v1, 0x78($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X78);
    // 0x8006E6D4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8006E6D8: lh          $a0, -0x7154($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7154);
    // 0x8006E6DC: lhu         $v0, 0x18($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X18);
    // 0x8006E6E0: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
    // 0x8006E6E4: subu        $a1, $a1, $a0
    ctx->r5 = SUB32(ctx->r5, ctx->r4);
    // 0x8006E6E8: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x8006E6EC: sh          $a1, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r5;
    // 0x8006E6F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006E6F4: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8006E6F8: andi        $v0, $a2, 0x2
    ctx->r2 = ctx->r6 & 0X2;
    // 0x8006E6FC: beq         $v0, $zero, L_8006E718
    if (ctx->r2 == 0) {
        // 0x8006E700: nop
    
            goto L_8006E718;
    }
    // 0x8006E700: nop

    // 0x8006E704: lw          $v0, 0x78($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X78);
    // 0x8006E708: lhu         $v1, 0x1C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1C);
    // 0x8006E70C: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x8006E710: j           L_8006E728
    // 0x8006E714: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_8006E728;
    // 0x8006E714: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8006E718:
    // 0x8006E718: lw          $v0, 0x78($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X78);
    // 0x8006E71C: lhu         $v1, 0x1C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1C);
    // 0x8006E720: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x8006E724: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_8006E728:
    // 0x8006E728: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8006E72C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006E730: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    // 0x8006E734: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
L_8006E738:
    // 0x8006E738: bgez        $a1, L_8006E744
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8006E73C: addu        $v0, $a1, $zero
        ctx->r2 = ADD32(ctx->r5, 0);
            goto L_8006E744;
    }
    // 0x8006E73C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x8006E740: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_8006E744:
    // 0x8006E744: slti        $v0, $v0, 0x41
    ctx->r2 = SIGNED(ctx->r2) < 0X41 ? 1 : 0;
    // 0x8006E748: beq         $v0, $zero, L_8006E81C
    if (ctx->r2 == 0) {
        // 0x8006E74C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8006E81C;
    }
    // 0x8006E74C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8006E750: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x8006E754: lhu         $v1, 0x1A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1A);
    // 0x8006E758: addiu       $v0, $v0, -0x98
    ctx->r2 = ADD32(ctx->r2, -0X98);
    // 0x8006E75C: addiu       $v1, $v1, -0x98
    ctx->r3 = ADD32(ctx->r3, -0X98);
    // 0x8006E760: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8006E764: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    // 0x8006E768: lbu         $a3, 0x1($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X1);
    // 0x8006E76C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006E770: jal         0x8003E964
    // 0x8006E774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8003E964_19D64(rdram, ctx);
        goto after_4;
    // 0x8006E774: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8006E778: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8006E77C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006E780: lbu         $a3, 0x1($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X1);
    // 0x8006E784: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006E788: jal         0x8003E964
    // 0x8006E78C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E964_19D64(rdram, ctx);
        goto after_5;
    // 0x8006E78C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_5:
    // 0x8006E790: bne         $s0, $v0, L_8006E820
    if (ctx->r16 != ctx->r2) {
        // 0x8006E794: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006E820;
    }
    // 0x8006E794: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006E798: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8006E79C: addiu       $v0, $v1, -0x68
    ctx->r2 = ADD32(ctx->r3, -0X68);
    // 0x8006E7A0: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8006E7A4: beq         $v0, $zero, L_8006E81C
    if (ctx->r2 == 0) {
        // 0x8006E7A8: addiu       $v0, $v1, -0x98
        ctx->r2 = ADD32(ctx->r3, -0X98);
            goto L_8006E81C;
    }
    // 0x8006E7A8: addiu       $v0, $v1, -0x98
    ctx->r2 = ADD32(ctx->r3, -0X98);
    // 0x8006E7AC: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8006E7B0: beq         $v0, $zero, L_8006E820
    if (ctx->r2 == 0) {
        // 0x8006E7B4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006E820;
    }
    // 0x8006E7B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006E7B8: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8006E7BC: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x8006E7C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006E7C4: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8006E7C8: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8006E7CC: lhu         $a1, 0x24($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X24);
    // 0x8006E7D0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8006E7D4: addiu       $a0, $a0, 0x2F4C
    ctx->r4 = ADD32(ctx->r4, 0X2F4C);
    // 0x8006E7D8: addiu       $v0, $s0, 0x98
    ctx->r2 = ADD32(ctx->r16, 0X98);
    // 0x8006E7DC: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8006E7E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006E7E4: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8006E7E8: sll         $v0, $s2, 10
    ctx->r2 = S32(ctx->r18 << 10);
    // 0x8006E7EC: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    // 0x8006E7F0: sh          $zero, 0x116($s1)
    MEM_H(0X116, ctx->r17) = 0;
    // 0x8006E7F4: sb          $zero, 0x112($s1)
    MEM_B(0X112, ctx->r17) = 0;
    // 0x8006E7F8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8006E7FC: jal         0x80034A54
    // 0x8006E800: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    func_80034A54_FE54(rdram, ctx);
        goto after_6;
    // 0x8006E800: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    after_6:
    // 0x8006E804: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006E808: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
    // 0x8006E80C: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x8006E810: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
    // 0x8006E814: j           L_8006E820
    // 0x8006E818: sh          $v1, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r3;
        goto L_8006E820;
    // 0x8006E818: sh          $v1, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r3;
L_8006E81C:
    // 0x8006E81C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006E820:
    // 0x8006E820: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006E824: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8006E828: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8006E82C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8006E830: jr          $ra
    // 0x8006E834: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8006E834: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8007BF70_57370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007BF70: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8007BF74: bnel        $v0, $zero, L_8007BF7C
    if (ctx->r2 != 0) {
        // 0x8007BF78: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_8007BF7C;
    }
    goto skip_0;
    // 0x8007BF78: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    skip_0:
L_8007BF7C:
    // 0x8007BF7C: slt         $v0, $a2, $a0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8007BF80: bnel        $v0, $zero, L_8007BF88
    if (ctx->r2 != 0) {
        // 0x8007BF84: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_8007BF88;
    }
    goto skip_1;
    // 0x8007BF84: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    skip_1:
L_8007BF88:
    // 0x8007BF88: slt         $v0, $a3, $a0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8007BF8C: bnel        $v0, $zero, L_8007BF94
    if (ctx->r2 != 0) {
        // 0x8007BF90: addu        $a0, $a3, $zero
        ctx->r4 = ADD32(ctx->r7, 0);
            goto L_8007BF94;
    }
    goto skip_2;
    // 0x8007BF90: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    skip_2:
L_8007BF94:
    // 0x8007BF94: jr          $ra
    // 0x8007BF98: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x8007BF98: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_8006FC34_4B034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FC34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006FC38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006FC3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006FC40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006FC44: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8006FC48: lhu         $v1, 0x116($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X116);
    // 0x8006FC4C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8006FC50: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8006FC54: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8006FC58: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8006FC5C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8006FC60: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8006FC64: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8006FC68: jal         0x8004DA90
    // 0x8006FC6C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8006FC6C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x8006FC70: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8006FC74: lhu         $v1, 0x116($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X116);
    // 0x8006FC78: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006FC7C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8006FC80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006FC84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006FC88: jr          $ra
    // 0x8006FC8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006FC8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004A81C_25C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A81C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A820: lb          $v0, -0x3BBF($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BBF);
    // 0x8004A824: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004A828: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8004A82C: bne         $v0, $zero, L_8004A934
    if (ctx->r2 != 0) {
        // 0x8004A830: sw          $s0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r16;
            goto L_8004A934;
    }
    // 0x8004A830: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8004A834: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004A838: lw          $v0, -0x2F38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F38);
    // 0x8004A83C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8004A840: beq         $v0, $zero, L_8004A934
    if (ctx->r2 == 0) {
        // 0x8004A844: nop
    
            goto L_8004A934;
    }
    // 0x8004A844: nop

    // 0x8004A848: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004A84C: lw          $v0, -0x2F20($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F20);
    // 0x8004A850: bne         $v0, $zero, L_8004A86C
    if (ctx->r2 != 0) {
        // 0x8004A854: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8004A86C;
    }
    // 0x8004A854: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8004A858: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004A85C: sw          $v0, -0x2F28($at)
    MEM_W(-0X2F28, ctx->r1) = ctx->r2;
    // 0x8004A860: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8004A864: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004A868: sw          $v0, -0x2F24($at)
    MEM_W(-0X2F24, ctx->r1) = ctx->r2;
L_8004A86C:
    // 0x8004A86C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8004A870: lw          $v1, 0x4978($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4978);
    // 0x8004A874: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8004A878: lw          $a1, -0x2F28($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2F28);
    // 0x8004A87C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8004A880: lw          $a2, -0x2F24($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X2F24);
    // 0x8004A884: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8004A888: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004A88C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004A890: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8004A894: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8004A898: lh          $a3, -0x3548($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X3548);
    // 0x8004A89C: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8004A8A0: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x8004A8A4: lh          $t0, -0x3546($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X3546);
    // 0x8004A8A8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8004A8AC: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x8004A8B0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8004A8B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004A8B8: sw          $v0, -0x2ED4($at)
    MEM_W(-0X2ED4, ctx->r1) = ctx->r2;
    // 0x8004A8BC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8004A8C0: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8004A8C4: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8004A8C8: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
    // 0x8004A8CC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x8004A8D0: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x8004A8D4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004A8D8: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x8004A8DC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8004A8E0: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8004A8E4: sh          $a1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r5;
    // 0x8004A8E8: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    // 0x8004A8EC: sh          $a2, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r6;
    // 0x8004A8F0: addiu       $a2, $a2, -0x3C
    ctx->r6 = ADD32(ctx->r6, -0X3C);
    // 0x8004A8F4: sh          $a1, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r5;
    // 0x8004A8F8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8004A8FC: sh          $a2, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r6;
    // 0x8004A900: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8004A904: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    // 0x8004A908: sra         $v1, $v1, 9
    ctx->r3 = S32(SIGNED(ctx->r3) >> 9);
    // 0x8004A90C: addiu       $v1, $v1, -0x5
    ctx->r3 = ADD32(ctx->r3, -0X5);
    // 0x8004A910: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x8004A914: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8004A918: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8004A91C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8004A920: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    // 0x8004A924: jal         0x8004B008
    // 0x8004A928: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    func_8004B008_26408(rdram, ctx);
        goto after_0;
    // 0x8004A928: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    after_0:
    // 0x8004A92C: jal         0x8004B408
    // 0x8004A930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004B408_26808(rdram, ctx);
        goto after_1;
    // 0x8004A930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8004A934:
    // 0x8004A934: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8004A938: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8004A93C: jr          $ra
    // 0x8004A940: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8004A940: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80028EAC_42AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028EAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80028EB0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80028EB4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80028EB8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80028EBC: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x80028EC0: addiu       $s4, $s4, 0x5030
    ctx->r20 = ADD32(ctx->r20, 0X5030);
    // 0x80028EC4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80028EC8: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x80028ECC: addiu       $s3, $s3, 0x4FD0
    ctx->r19 = ADD32(ctx->r19, 0X4FD0);
    // 0x80028ED0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80028ED4: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x80028ED8: addiu       $s2, $s2, 0x5040
    ctx->r18 = ADD32(ctx->r18, 0X5040);
    // 0x80028EDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80028EE0: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80028EE4: addiu       $s0, $s0, -0x46D0
    ctx->r16 = ADD32(ctx->r16, -0X46D0);
    // 0x80028EE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
L_80028EEC:
    // 0x80028EEC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80028EF0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80028EF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80028EF8: sh          $s1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r17;
    // 0x80028EFC: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x80028F00: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80028F04: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x80028F08: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    // 0x80028F0C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80028F10: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80028F14: jal         0x8009A470
    // 0x80028F18: sw          $s2, 0x1C4($s0)
    MEM_W(0X1C4, ctx->r16) = ctx->r18;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80028F18: sw          $s2, 0x1C4($s0)
    MEM_W(0X1C4, ctx->r16) = ctx->r18;
    after_0:
    // 0x80028F1C: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80028F20: addiu       $s3, $s3, 0x18
    ctx->r19 = ADD32(ctx->r19, 0X18);
    // 0x80028F24: addiu       $s2, $s2, 0x1000
    ctx->r18 = ADD32(ctx->r18, 0X1000);
    // 0x80028F28: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80028F2C: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80028F30: bne         $v0, $zero, L_80028EEC
    if (ctx->r2 != 0) {
        // 0x80028F34: addiu       $s0, $s0, 0x1C8
        ctx->r16 = ADD32(ctx->r16, 0X1C8);
            goto L_80028EEC;
    }
    // 0x80028F34: addiu       $s0, $s0, 0x1C8
    ctx->r16 = ADD32(ctx->r16, 0X1C8);
    // 0x80028F38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80028F3C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80028F40: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80028F44: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80028F48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80028F4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80028F50: jr          $ra
    // 0x80028F54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80028F54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80049EE8_252E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049EE8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80049EEC: addiu       $v1, $v1, -0x3993
    ctx->r3 = ADD32(ctx->r3, -0X3993);
    // 0x80049EF0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80049EF4: bne         $v0, $zero, L_80049F0C
    if (ctx->r2 != 0) {
        // 0x80049EF8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80049F0C;
    }
    // 0x80049EF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80049EFC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80049F00: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x80049F04: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80049F08: sb          $v0, -0x3997($at)
    MEM_B(-0X3997, ctx->r1) = ctx->r2;
L_80049F0C:
    // 0x80049F0C: jr          $ra
    // 0x80049F10: nop

    TRACE_RETURN()
    return;
    // 0x80049F10: nop

;}
RECOMP_FUNC void func_8006294C_3DD4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006294C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80062950: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80062954: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80062958: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006295C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80062960: lui         $a2, 0x100
    ctx->r6 = S32(0X100 << 16);
    // 0x80062964: and         $v0, $a1, $a2
    ctx->r2 = ctx->r5 & ctx->r6;
    // 0x80062968: bne         $v0, $zero, L_80062A40
    if (ctx->r2 != 0) {
        // 0x8006296C: lui         $a0, 0xFFBF
        ctx->r4 = S32(0XFFBF << 16);
            goto L_80062A40;
    }
    // 0x8006296C: lui         $a0, 0xFFBF
    ctx->r4 = S32(0XFFBF << 16);
    // 0x80062970: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80062974: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x80062978: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x8006297C: or          $v0, $a1, $a2
    ctx->r2 = ctx->r5 | ctx->r6;
    // 0x80062980: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80062984: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80062988: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8006298C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80062990: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x80062994: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x80062998: beq         $v0, $zero, L_800629C0
    if (ctx->r2 == 0) {
        // 0x8006299C: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_800629C0;
    }
    // 0x8006299C: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x800629A0: beq         $v0, $zero, L_800629B4
    if (ctx->r2 == 0) {
        // 0x800629A4: nop
    
            goto L_800629B4;
    }
    // 0x800629A4: nop

    // 0x800629A8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800629AC: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x800629B0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_800629B4:
    // 0x800629B4: lbu         $v0, 0x79($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X79);
    // 0x800629B8: j           L_80062A3C
    // 0x800629BC: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_80062A3C;
    // 0x800629BC: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_800629C0:
    // 0x800629C0: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x800629C4: beq         $v0, $zero, L_800629EC
    if (ctx->r2 == 0) {
        // 0x800629C8: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_800629EC;
    }
    // 0x800629C8: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x800629CC: beq         $v0, $zero, L_800629E0
    if (ctx->r2 == 0) {
        // 0x800629D0: nop
    
            goto L_800629E0;
    }
    // 0x800629D0: nop

    // 0x800629D4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800629D8: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x800629DC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_800629E0:
    // 0x800629E0: lbu         $v0, 0x7A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7A);
    // 0x800629E4: j           L_80062A3C
    // 0x800629E8: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_80062A3C;
    // 0x800629E8: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_800629EC:
    // 0x800629EC: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x800629F0: beq         $v0, $zero, L_80062A18
    if (ctx->r2 == 0) {
        // 0x800629F4: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_80062A18;
    }
    // 0x800629F4: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x800629F8: beq         $v0, $zero, L_80062A0C
    if (ctx->r2 == 0) {
        // 0x800629FC: nop
    
            goto L_80062A0C;
    }
    // 0x800629FC: nop

    // 0x80062A00: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80062A04: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80062A08: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_80062A0C:
    // 0x80062A0C: lbu         $v0, 0x7B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7B);
    // 0x80062A10: j           L_80062A3C
    // 0x80062A14: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_80062A3C;
    // 0x80062A14: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_80062A18:
    // 0x80062A18: beq         $v0, $zero, L_80062A2C
    if (ctx->r2 == 0) {
        // 0x80062A1C: nop
    
            goto L_80062A2C;
    }
    // 0x80062A1C: nop

    // 0x80062A20: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80062A24: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80062A28: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_80062A2C:
    // 0x80062A2C: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80062A30: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80062A34: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80062A38: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_80062A3C:
    // 0x80062A3C: lui         $a0, 0xFFBF
    ctx->r4 = S32(0XFFBF << 16);
L_80062A40:
    // 0x80062A40: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80062A44: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x80062A48: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x80062A4C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80062A50: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80062A54: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80062A58: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80062A5C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80062A60: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80062A64: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x80062A68: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80062A6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80062A70: sw          $v0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r2;
    // 0x80062A74: bgtz        $a0, L_80062DA4
    if (SIGNED(ctx->r4) > 0) {
        // 0x80062A78: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_80062DA4;
    }
    // 0x80062A78: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80062A7C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80062A80: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x80062A84: beq         $v0, $zero, L_80062AB0
    if (ctx->r2 == 0) {
        // 0x80062A88: nop
    
            goto L_80062AB0;
    }
    // 0x80062A88: nop

    // 0x80062A8C: lb          $v0, 0x72($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X72);
    // 0x80062A90: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80062A94: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80062A98: beq         $v1, $v0, L_80062AB0
    if (ctx->r3 == ctx->r2) {
        // 0x80062A9C: nop
    
            goto L_80062AB0;
    }
    // 0x80062A9C: nop

    // 0x80062AA0: lhu         $v0, 0xBA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XBA);
    // 0x80062AA4: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80062AA8: beq         $v0, $zero, L_80062DB0
    if (ctx->r2 == 0) {
        // 0x80062AAC: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_80062DB0;
    }
    // 0x80062AAC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80062AB0:
    // 0x80062AB0: lhu         $v1, 0xBA($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBA);
    // 0x80062AB4: andi        $v0, $v1, 0x6000
    ctx->r2 = ctx->r3 & 0X6000;
    // 0x80062AB8: bne         $v0, $zero, L_80062AFC
    if (ctx->r2 != 0) {
        // 0x80062ABC: andi        $v0, $v1, 0x8000
        ctx->r2 = ctx->r3 & 0X8000;
            goto L_80062AFC;
    }
    // 0x80062ABC: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x80062AC0: beq         $v0, $zero, L_80062ADC
    if (ctx->r2 == 0) {
        // 0x80062AC4: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_80062ADC;
    }
    // 0x80062AC4: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x80062AC8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80062ACC: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80062AD0: bne         $v0, $zero, L_80062AFC
    if (ctx->r2 != 0) {
        // 0x80062AD4: andi        $v0, $v1, 0x8000
        ctx->r2 = ctx->r3 & 0X8000;
            goto L_80062AFC;
    }
    // 0x80062AD4: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x80062AD8: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
L_80062ADC:
    // 0x80062ADC: beq         $v0, $zero, L_80062DAC
    if (ctx->r2 == 0) {
        // 0x80062AE0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80062DAC;
    }
    // 0x80062AE0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80062AE4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80062AE8: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80062AEC: bne         $v1, $v0, L_80062DB0
    if (ctx->r3 != ctx->r2) {
        // 0x80062AF0: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_80062DB0;
    }
    // 0x80062AF0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80062AF4: lhu         $v1, 0xBA($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBA);
    // 0x80062AF8: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
L_80062AFC:
    // 0x80062AFC: beq         $v0, $zero, L_80062B18
    if (ctx->r2 == 0) {
        // 0x80062B00: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_80062B18;
    }
    // 0x80062B00: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x80062B04: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80062B08: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80062B0C: bne         $v0, $zero, L_80062B34
    if (ctx->r2 != 0) {
        // 0x80062B10: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_80062B34;
    }
    // 0x80062B10: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x80062B14: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
L_80062B18:
    // 0x80062B18: beq         $v0, $zero, L_80062B4C
    if (ctx->r2 == 0) {
        // 0x80062B1C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80062B4C;
    }
    // 0x80062B1C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80062B20: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80062B24: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80062B28: bne         $v1, $v0, L_80062B50
    if (ctx->r3 != ctx->r2) {
        // 0x80062B2C: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80062B50;
    }
    // 0x80062B2C: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80062B30: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
L_80062B34:
    // 0x80062B34: lbu         $v0, 0x72($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X72);
    // 0x80062B38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80062B3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80062B40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80062B44: j           L_80062B58
    // 0x80062B48: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_80062B58;
    // 0x80062B48: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_80062B4C:
    // 0x80062B4C: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
L_80062B50:
    // 0x80062B50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80062B54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80062B58:
    // 0x80062B58: jal         0x8002A2F8
    // 0x80062B5C: nop

    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80062B5C: nop

    after_0:
    // 0x80062B60: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80062B64: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80062B68: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80062B6C: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x80062B70: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80062B74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80062B78: sw          $v0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r2;
    // 0x80062B7C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80062B80: addiu       $v0, $zero, 0xEA
    ctx->r2 = ADD32(0, 0XEA);
    // 0x80062B84: bne         $v1, $v0, L_80062C24
    if (ctx->r3 != ctx->r2) {
        // 0x80062B88: nop
    
            goto L_80062C24;
    }
    // 0x80062B88: nop

    // 0x80062B8C: lb          $a0, 0x71($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X71);
    // 0x80062B90: xori        $v0, $a0, 0x5
    ctx->r2 = ctx->r4 ^ 0X5;
    // 0x80062B94: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80062B98: sltu        $v1, $zero, $a0
    ctx->r3 = 0 < ctx->r4 ? 1 : 0;
    // 0x80062B9C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80062BA0: beq         $v0, $zero, L_80062C24
    if (ctx->r2 == 0) {
        // 0x80062BA4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80062C24;
    }
    // 0x80062BA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80062BA8: beq         $a0, $v0, L_80062BF4
    if (ctx->r4 == ctx->r2) {
        // 0x80062BAC: slti        $v0, $a0, 0x3
        ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
            goto L_80062BF4;
    }
    // 0x80062BAC: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x80062BB0: beq         $v0, $zero, L_80062BC8
    if (ctx->r2 == 0) {
        // 0x80062BB4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80062BC8;
    }
    // 0x80062BB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80062BB8: beq         $a0, $v0, L_80062BE4
    if (ctx->r4 == ctx->r2) {
        // 0x80062BBC: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_80062BE4;
    }
    // 0x80062BBC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80062BC0: j           L_80062DB0
    // 0x80062BC4: nop

        goto L_80062DB0;
    // 0x80062BC4: nop

L_80062BC8:
    // 0x80062BC8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80062BCC: beq         $a0, $v0, L_80062C04
    if (ctx->r4 == ctx->r2) {
        // 0x80062BD0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80062C04;
    }
    // 0x80062BD0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80062BD4: beq         $a0, $v0, L_80062C14
    if (ctx->r4 == ctx->r2) {
        // 0x80062BD8: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_80062C14;
    }
    // 0x80062BD8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80062BDC: j           L_80062DB0
    // 0x80062BE0: nop

        goto L_80062DB0;
    // 0x80062BE0: nop

L_80062BE4:
    // 0x80062BE4: jal         0x80056DCC
    // 0x80062BE8: nop

    func_80056DCC_321CC(rdram, ctx);
        goto after_1;
    // 0x80062BE8: nop

    after_1:
    // 0x80062BEC: j           L_80062DB0
    // 0x80062BF0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_80062DB0;
    // 0x80062BF0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80062BF4:
    // 0x80062BF4: jal         0x80056E84
    // 0x80062BF8: nop

    func_80056E84_32284(rdram, ctx);
        goto after_2;
    // 0x80062BF8: nop

    after_2:
    // 0x80062BFC: j           L_80062DB0
    // 0x80062C00: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_80062DB0;
    // 0x80062C00: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80062C04:
    // 0x80062C04: jal         0x80056F3C
    // 0x80062C08: nop

    func_80056F3C_3233C(rdram, ctx);
        goto after_3;
    // 0x80062C08: nop

    after_3:
    // 0x80062C0C: j           L_80062DB0
    // 0x80062C10: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_80062DB0;
    // 0x80062C10: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80062C14:
    // 0x80062C14: jal         0x80056FF4
    // 0x80062C18: nop

    func_80056FF4_323F4(rdram, ctx);
        goto after_4;
    // 0x80062C18: nop

    after_4:
    // 0x80062C1C: j           L_80062DB0
    // 0x80062C20: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_80062DB0;
    // 0x80062C20: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80062C24:
    // 0x80062C24: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80062C28: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80062C2C: addiu       $v0, $zero, 0xE8
    ctx->r2 = ADD32(0, 0XE8);
    // 0x80062C30: bne         $v1, $v0, L_80062C58
    if (ctx->r3 != ctx->r2) {
        // 0x80062C34: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_80062C58;
    }
    // 0x80062C34: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x80062C38: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80062C3C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80062C40: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80062C44: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80062C48: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80062C4C: lbu         $a0, -0x6F90($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X6F90);
    // 0x80062C50: j           L_80062C64
    // 0x80062C54: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
        goto L_80062C64;
    // 0x80062C54: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
L_80062C58:
    // 0x80062C58: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80062C5C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80062C60: lbu         $a0, 0x71($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X71);
L_80062C64:
    // 0x80062C64: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80062C68: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80062C6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80062C70: sw          $v0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r2;
    // 0x80062C74: lui         $a2, 0xEEFF
    ctx->r6 = S32(0XEEFF << 16);
    // 0x80062C78: lw          $v1, 0x74($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X74);
    // 0x80062C7C: ori         $a2, $a2, 0x97FF
    ctx->r6 = ctx->r6 | 0X97FF;
    // 0x80062C80: addiu       $v0, $zero, 0xED
    ctx->r2 = ADD32(0, 0XED);
    // 0x80062C84: lui         $a0, 0x40
    ctx->r4 = S32(0X40 << 16);
    // 0x80062C88: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80062C8C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80062C90: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80062C94: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80062C98: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80062C9C: lw          $a1, 0x6C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6C);
    // 0x80062CA0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80062CA4: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x80062CA8: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80062CAC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80062CB0: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x80062CB4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80062CB8: lbu         $a1, 0x2($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X2);
    // 0x80062CBC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80062CC0: beq         $v0, $zero, L_80062CDC
    if (ctx->r2 == 0) {
        // 0x80062CC4: nop
    
            goto L_80062CDC;
    }
    // 0x80062CC4: nop

    // 0x80062CC8: sb          $a0, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r4;
    // 0x80062CCC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80062CD0: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80062CD4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80062CD8: sb          $v0, -0x278E($at)
    MEM_B(-0X278E, ctx->r1) = ctx->r2;
L_80062CDC:
    // 0x80062CDC: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80062CE0: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80062CE4: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80062CE8: beq         $v0, $zero, L_80062CF8
    if (ctx->r2 == 0) {
        // 0x80062CEC: nop
    
            goto L_80062CF8;
    }
    // 0x80062CEC: nop

    // 0x80062CF0: lbu         $v0, 0x71($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X71);
    // 0x80062CF4: sb          $v0, 0x7A($s0)
    MEM_B(0X7A, ctx->r16) = ctx->r2;
L_80062CF8:
    // 0x80062CF8: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80062CFC: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80062D00: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80062D04: beq         $v0, $zero, L_80062D14
    if (ctx->r2 == 0) {
        // 0x80062D08: andi        $v1, $a1, 0xFF
        ctx->r3 = ctx->r5 & 0XFF;
            goto L_80062D14;
    }
    // 0x80062D08: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x80062D0C: lbu         $v0, 0x71($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X71);
    // 0x80062D10: sb          $v0, 0x7B($s0)
    MEM_B(0X7B, ctx->r16) = ctx->r2;
L_80062D14:
    // 0x80062D14: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80062D18: bne         $v1, $v0, L_80062D38
    if (ctx->r3 != ctx->r2) {
        // 0x80062D1C: nop
    
            goto L_80062D38;
    }
    // 0x80062D1C: nop

    // 0x80062D20: lb          $v0, 0x72($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X72);
    // 0x80062D24: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80062D28: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80062D2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80062D30: j           L_80062D94
    // 0x80062D34: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
        goto L_80062D94;
    // 0x80062D34: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
L_80062D38:
    // 0x80062D38: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80062D3C: beq         $a0, $zero, L_80062D70
    if (ctx->r4 == 0) {
        // 0x80062D40: sh          $a1, 0xC2($s0)
        MEM_H(0XC2, ctx->r16) = ctx->r5;
            goto L_80062D70;
    }
    // 0x80062D40: sh          $a1, 0xC2($s0)
    MEM_H(0XC2, ctx->r16) = ctx->r5;
    // 0x80062D44: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80062D48: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80062D4C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80062D50: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80062D54: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80062D58: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80062D5C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80062D60: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x80062D64: sw          $v1, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r3;
    // 0x80062D68: j           L_80062D88
    // 0x80062D6C: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
        goto L_80062D88;
    // 0x80062D6C: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
L_80062D70:
    // 0x80062D70: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80062D74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80062D78: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80062D7C: lw          $v0, 0x27EC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X27EC);
    // 0x80062D80: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    // 0x80062D84: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
L_80062D88:
    // 0x80062D88: sb          $zero, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = 0;
    // 0x80062D8C: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
    // 0x80062D90: sb          $zero, 0x72($s0)
    MEM_B(0X72, ctx->r16) = 0;
L_80062D94:
    // 0x80062D94: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80062D98: sb          $v0, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r2;
    // 0x80062D9C: j           L_80062DB8
    // 0x80062DA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80062DB8;
    // 0x80062DA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80062DA4:
    // 0x80062DA4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80062DA8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80062DAC:
    // 0x80062DAC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80062DB0:
    // 0x80062DB0: sb          $v0, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r2;
    // 0x80062DB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80062DB8:
    // 0x80062DB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80062DBC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80062DC0: jr          $ra
    // 0x80062DC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80062DC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003B838_16C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B838: jr          $ra
    // 0x8003B83C: nop

    TRACE_RETURN()
    return;
    // 0x8003B83C: nop

;}
RECOMP_FUNC void func_8008D890_68C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D890: jr          $ra
    // 0x8008D894: addiu       $v0, $a1, 0x2
    ctx->r2 = ADD32(ctx->r5, 0X2);
    TRACE_RETURN()
    return;
    // 0x8008D894: addiu       $v0, $a1, 0x2
    ctx->r2 = ADD32(ctx->r5, 0X2);
;}
RECOMP_FUNC void func_80058AF8_33EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80058AF8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80058AFC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80058B00: lh          $v1, 0x8($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X8);
    // 0x80058B04: lh          $a1, 0x0($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X0);
    // 0x80058B08: lh          $a0, 0x14($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X14);
    // 0x80058B0C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80058B10: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x80058B14: sltu        $a0, $a0, $v1
    ctx->r4 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80058B18: beq         $a0, $zero, L_80058B44
    if (ctx->r4 == 0) {
        // 0x80058B1C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80058B44;
    }
    // 0x80058B1C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80058B20: lh          $v1, 0xC($a2)
    ctx->r3 = MEM_H(ctx->r6, 0XC);
    // 0x80058B24: lh          $a0, 0x4($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X4);
    // 0x80058B28: lh          $v0, 0x18($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X18);
    // 0x80058B2C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80058B30: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80058B34: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80058B38: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80058B3C: addiu       $v1, $zero, -0x80
    ctx->r3 = ADD32(0, -0X80);
    // 0x80058B40: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_80058B44:
    // 0x80058B44: jr          $ra
    // 0x80058B48: nop

    TRACE_RETURN()
    return;
    // 0x80058B48: nop

;}
RECOMP_FUNC void func_80028978_3D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028978: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8002897C: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80028980: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80028984: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80028988: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8002898C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80028990: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80028994: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80028998: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8002899C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800289A0: jr          $ra
    // 0x800289A4: sb          $v1, 0x4899($at)
    MEM_B(0X4899, ctx->r1) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x800289A4: sb          $v1, 0x4899($at)
    MEM_B(0X4899, ctx->r1) = ctx->r3;
;}
