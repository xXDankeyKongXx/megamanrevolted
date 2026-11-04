#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8003E934_19D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E938: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8003E93C: lh          $v0, 0x16($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X16);
    // 0x8003E940: lh          $a2, 0x2E($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X2E);
    // 0x8003E944: lw          $a1, 0x78($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X78);
    // 0x8003E948: lbu         $a3, 0x1($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X1);
    // 0x8003E94C: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8003E950: jal         0x8003E964
    // 0x8003E954: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    func_8003E964_19D64(rdram, ctx);
        goto after_0;
    // 0x8003E954: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    after_0:
    // 0x8003E958: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8003E95C: jr          $ra
    // 0x8003E960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003E960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80056E84_32284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80056E84: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80056E88: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80056E8C: addiu       $t1, $t1, 0x49B0
    ctx->r9 = ADD32(ctx->r9, 0X49B0);
    // 0x80056E90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80056E94: addiu       $t2, $zero, 0x1F
    ctx->r10 = ADD32(0, 0X1F);
    // 0x80056E98: subu        $v0, $t2, $a3
    ctx->r2 = SUB32(ctx->r10, ctx->r7);
L_80056E9C:
    // 0x80056E9C: blez        $v0, L_80056F20
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80056EA0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80056F20;
    }
    // 0x80056EA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80056EA4: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80056EA8: subu        $t0, $v0, $a3
    ctx->r8 = SUB32(ctx->r2, ctx->r7);
    // 0x80056EAC: addu        $a1, $t1, $a0
    ctx->r5 = ADD32(ctx->r9, ctx->r4);
L_80056EB0:
    // 0x80056EB0: lbu         $v0, 0x455($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X455);
    // 0x80056EB4: beql        $v0, $zero, L_80056F14
    if (ctx->r2 == 0) {
        // 0x80056EB8: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80056F14;
    }
    goto skip_0;
    // 0x80056EB8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x80056EBC: lbu         $a2, 0x454($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X454);
    // 0x80056EC0: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x80056EC4: beq         $v1, $zero, L_80056EFC
    if (ctx->r3 == 0) {
        // 0x80056EC8: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_80056EFC;
    }
    // 0x80056EC8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80056ECC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80056ED0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80056ED4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80056ED8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056EDC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80056EE0: lb          $v1, -0x1CB7($at)
    ctx->r3 = MEM_B(ctx->r1, -0X1CB7);
    // 0x80056EE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056EE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80056EEC: lb          $v0, -0x1CB7($at)
    ctx->r2 = MEM_B(ctx->r1, -0X1CB7);
    // 0x80056EF0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80056EF4: beql        $v1, $zero, L_80056F14
    if (ctx->r3 == 0) {
        // 0x80056EF8: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80056F14;
    }
    goto skip_1;
    // 0x80056EF8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
L_80056EFC:
    // 0x80056EFC: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x80056F00: addu        $v1, $t1, $v1
    ctx->r3 = ADD32(ctx->r9, ctx->r3);
    // 0x80056F04: lbu         $v0, 0x454($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X454);
    // 0x80056F08: sb          $v0, 0x454($a1)
    MEM_B(0X454, ctx->r5) = ctx->r2;
    // 0x80056F0C: sb          $a2, 0x454($v1)
    MEM_B(0X454, ctx->r3) = ctx->r6;
    // 0x80056F10: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_80056F14:
    // 0x80056F14: slt         $v0, $a0, $t0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80056F18: bne         $v0, $zero, L_80056EB0
    if (ctx->r2 != 0) {
        // 0x80056F1C: addu        $a1, $t1, $a0
        ctx->r5 = ADD32(ctx->r9, ctx->r4);
            goto L_80056EB0;
    }
    // 0x80056F1C: addu        $a1, $t1, $a0
    ctx->r5 = ADD32(ctx->r9, ctx->r4);
L_80056F20:
    // 0x80056F20: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80056F24: slti        $v0, $a3, 0x1F
    ctx->r2 = SIGNED(ctx->r7) < 0X1F ? 1 : 0;
    // 0x80056F28: bne         $v0, $zero, L_80056E9C
    if (ctx->r2 != 0) {
        // 0x80056F2C: subu        $v0, $t2, $a3
        ctx->r2 = SUB32(ctx->r10, ctx->r7);
            goto L_80056E9C;
    }
    // 0x80056F2C: subu        $v0, $t2, $a3
    ctx->r2 = SUB32(ctx->r10, ctx->r7);
    // 0x80056F30: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80056F34: jr          $ra
    // 0x80056F38: nop

    TRACE_RETURN()
    return;
    // 0x80056F38: nop

;}
RECOMP_FUNC void func_8005E5D8_399D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005E5D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005E5DC: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x8005E5E0: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x8005E5E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005E5E8: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8005E5EC: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8005E5F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005E5F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005E5F8: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    // 0x8005E5FC: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8005E600: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8005E604: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8005E608: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8005E60C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8005E610: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8005E614: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8005E618: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8005E61C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8005E620: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x8005E624: sb          $t0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r8;
    // 0x8005E628: addiu       $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
    // 0x8005E62C: sb          $t0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r8;
    // 0x8005E630: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x8005E634: jal         0x80030284
    // 0x8005E638: sh          $t0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r8;
    func_80030284_B684(rdram, ctx);
        goto after_0;
    // 0x8005E638: sh          $t0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r8;
    after_0:
    // 0x8005E63C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8005E640: bne         $fp, $zero, L_8005E64C
    if (ctx->r30 != 0) {
        // 0x8005E644: sh          $v0, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r2;
            goto L_8005E64C;
    }
    // 0x8005E644: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8005E648: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
L_8005E64C:
    // 0x8005E64C: jal         0x8003026C
    // 0x8005E650: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    func_8003026C_B66C(rdram, ctx);
        goto after_1;
    // 0x8005E650: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    after_1:
    // 0x8005E654: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x8005E658: addiu       $s6, $zero, 0x20
    ctx->r22 = ADD32(0, 0X20);
    // 0x8005E65C: addiu       $s5, $zero, 0x70
    ctx->r21 = ADD32(0, 0X70);
    // 0x8005E660: addiu       $s7, $zero, 0x30
    ctx->r23 = ADD32(0, 0X30);
    // 0x8005E664: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x8005E668: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005E66C: addiu       $s4, $zero, 0x68
    ctx->r20 = ADD32(0, 0X68);
    // 0x8005E670: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005E674: addiu       $v0, $zero, 0x94
    ctx->r2 = ADD32(0, 0X94);
    // 0x8005E678: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8005E67C: sb          $s6, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r22;
    // 0x8005E680: sb          $s5, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r21;
    // 0x8005E684: sb          $s6, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r22;
    // 0x8005E688: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8005E68C: sb          $s7, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r23;
    // 0x8005E690: sb          $s5, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r21;
    // 0x8005E694: sb          $s7, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r23;
    // 0x8005E698: sb          $s1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r17;
    // 0x8005E69C: sb          $s1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r17;
    // 0x8005E6A0: sb          $s1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r17;
    // 0x8005E6A4: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8005E6A8: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x8005E6AC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005E6B0: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005E6B4: addiu       $s3, $zero, 0xD8
    ctx->r19 = ADD32(0, 0XD8);
    // 0x8005E6B8: addiu       $s2, $zero, 0xA4
    ctx->r18 = ADD32(0, 0XA4);
    // 0x8005E6BC: sh          $s4, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r20;
    // 0x8005E6C0: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8005E6C4: sh          $s3, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r19;
    // 0x8005E6C8: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x8005E6CC: sh          $s4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r20;
    // 0x8005E6D0: sh          $s2, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r18;
    // 0x8005E6D4: sh          $s3, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r19;
    // 0x8005E6D8: sh          $s2, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r18;
    // 0x8005E6DC: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005E6E0: jal         0x800302C8
    // 0x8005E6E4: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_800302C8_B6C8(rdram, ctx);
        goto after_2;
    // 0x8005E6E4: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_2:
    // 0x8005E6E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005E6EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005E6F0: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    // 0x8005E6F4: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8005E6F8: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x8005E6FC: sb          $t0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r8;
    // 0x8005E700: addiu       $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
    // 0x8005E704: sb          $t0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r8;
    // 0x8005E708: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x8005E70C: jal         0x80030284
    // 0x8005E710: sh          $t0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r8;
    func_80030284_B684(rdram, ctx);
        goto after_3;
    // 0x8005E710: sh          $t0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r8;
    after_3:
    // 0x8005E714: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8005E718: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005E71C: bne         $fp, $v0, L_8005E728
    if (ctx->r30 != ctx->r2) {
        // 0x8005E720: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_8005E728;
    }
    // 0x8005E720: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8005E724: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
L_8005E728:
    // 0x8005E728: jal         0x8003026C
    // 0x8005E72C: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    func_8003026C_B66C(rdram, ctx);
        goto after_4;
    // 0x8005E72C: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    after_4:
    // 0x8005E730: lbu         $a0, 0x7($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X7);
    // 0x8005E734: addiu       $v1, $zero, 0xE0
    ctx->r3 = ADD32(0, 0XE0);
    // 0x8005E738: sb          $s5, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r21;
    // 0x8005E73C: sb          $s6, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r22;
    // 0x8005E740: sb          $v1, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r3;
    // 0x8005E744: sb          $s6, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r22;
    // 0x8005E748: sb          $s5, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r21;
    // 0x8005E74C: sb          $s7, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r23;
    // 0x8005E750: sb          $v1, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r3;
    // 0x8005E754: sb          $s7, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r23;
    // 0x8005E758: sb          $s1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r17;
    // 0x8005E75C: sb          $s1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r17;
    // 0x8005E760: sb          $s1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r17;
    // 0x8005E764: andi        $a0, $a0, 0xFD
    ctx->r4 = ctx->r4 & 0XFD;
    // 0x8005E768: sb          $a0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r4;
    // 0x8005E76C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005E770: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005E774: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005E778: sh          $s2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r18;
    // 0x8005E77C: sh          $s2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r18;
    // 0x8005E780: addiu       $s2, $zero, 0xB4
    ctx->r18 = ADD32(0, 0XB4);
    // 0x8005E784: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005E788: sh          $s4, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r20;
    // 0x8005E78C: sh          $s3, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r19;
    // 0x8005E790: sh          $s4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r20;
    // 0x8005E794: sh          $s2, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r18;
    // 0x8005E798: sh          $s3, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r19;
    // 0x8005E79C: sh          $s2, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r18;
    // 0x8005E7A0: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005E7A4: jal         0x800302C8
    // 0x8005E7A8: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_800302C8_B6C8(rdram, ctx);
        goto after_5;
    // 0x8005E7A8: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_5:
    // 0x8005E7AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005E7B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005E7B4: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    // 0x8005E7B8: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8005E7BC: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x8005E7C0: sb          $t0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r8;
    // 0x8005E7C4: addiu       $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
    // 0x8005E7C8: sb          $t0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r8;
    // 0x8005E7CC: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x8005E7D0: jal         0x80030284
    // 0x8005E7D4: sh          $t0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r8;
    func_80030284_B684(rdram, ctx);
        goto after_6;
    // 0x8005E7D4: sh          $t0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r8;
    after_6:
    // 0x8005E7D8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8005E7DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005E7E0: bne         $fp, $v0, L_8005E7EC
    if (ctx->r30 != ctx->r2) {
        // 0x8005E7E4: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_8005E7EC;
    }
    // 0x8005E7E4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8005E7E8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
L_8005E7EC:
    // 0x8005E7EC: jal         0x8003026C
    // 0x8005E7F0: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    func_8003026C_B66C(rdram, ctx);
        goto after_7;
    // 0x8005E7F0: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    after_7:
    // 0x8005E7F4: lbu         $a0, 0x7($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X7);
    // 0x8005E7F8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8005E7FC: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8005E800: sb          $a1, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r5;
    // 0x8005E804: sb          $a1, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r5;
    // 0x8005E808: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005E80C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8005E810: sb          $s7, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r23;
    // 0x8005E814: sb          $s7, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r23;
    // 0x8005E818: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8005E81C: sb          $v1, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r3;
    // 0x8005E820: sb          $v1, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r3;
    // 0x8005E824: sb          $s1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r17;
    // 0x8005E828: sb          $s1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r17;
    // 0x8005E82C: sb          $s1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r17;
    // 0x8005E830: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005E834: andi        $a0, $a0, 0xFD
    ctx->r4 = ctx->r4 & 0XFD;
    // 0x8005E838: sb          $a0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r4;
    // 0x8005E83C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005E840: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005E844: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8005E848: addiu       $v1, $zero, 0xC8
    ctx->r3 = ADD32(0, 0XC8);
    // 0x8005E84C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8005E850: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8005E854: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
    // 0x8005E858: sh          $s2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r18;
    // 0x8005E85C: sh          $v1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r3;
    // 0x8005E860: sh          $s2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r18;
    // 0x8005E864: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x8005E868: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8005E86C: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x8005E870: jal         0x800302C8
    // 0x8005E874: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_800302C8_B6C8(rdram, ctx);
        goto after_8;
    // 0x8005E874: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_8:
    // 0x8005E878: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005E87C: lhu         $v0, -0x3C00($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3C00);
    // 0x8005E880: beq         $v0, $zero, L_8005EA64
    if (ctx->r2 == 0) {
        // 0x8005E884: addiu       $s0, $s0, 0x28
        ctx->r16 = ADD32(ctx->r16, 0X28);
            goto L_8005EA64;
    }
    // 0x8005E884: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005E888: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005E88C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005E890: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    // 0x8005E894: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8005E898: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x8005E89C: sb          $t0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r8;
    // 0x8005E8A0: addiu       $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
    // 0x8005E8A4: sb          $t0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r8;
    // 0x8005E8A8: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x8005E8AC: jal         0x80030284
    // 0x8005E8B0: sh          $t0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r8;
    func_80030284_B684(rdram, ctx);
        goto after_9;
    // 0x8005E8B0: sh          $t0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r8;
    after_9:
    // 0x8005E8B4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8005E8B8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005E8BC: lb          $v0, -0x3BBD($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BBD);
    // 0x8005E8C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005E8C4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8005E8C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005E8CC: beq         $fp, $v0, L_8005E8E0
    if (ctx->r30 == ctx->r2) {
        // 0x8005E8D0: addiu       $a0, $v1, 0x1
        ctx->r4 = ADD32(ctx->r3, 0X1);
            goto L_8005E8E0;
    }
    // 0x8005E8D0: addiu       $a0, $v1, 0x1
    ctx->r4 = ADD32(ctx->r3, 0X1);
    // 0x8005E8D4: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x8005E8D8: j           L_8005E8E4
    // 0x8005E8DC: sll         $a0, $v0, 4
    ctx->r4 = S32(ctx->r2 << 4);
        goto L_8005E8E4;
    // 0x8005E8DC: sll         $a0, $v0, 4
    ctx->r4 = S32(ctx->r2 << 4);
L_8005E8E0:
    // 0x8005E8E0: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
L_8005E8E4:
    // 0x8005E8E4: jal         0x8003026C
    // 0x8005E8E8: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    func_8003026C_B66C(rdram, ctx);
        goto after_10;
    // 0x8005E8E8: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    after_10:
    // 0x8005E8EC: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x8005E8F0: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005E8F4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8005E8F8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8005E8FC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8005E900: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x8005E904: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8005E908: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x8005E90C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005E910: lb          $v1, -0x3BBD($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BBD);
    // 0x8005E914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005E918: beq         $v1, $v0, L_8005E99C
    if (ctx->r3 == ctx->r2) {
        // 0x8005E91C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8005E99C;
    }
    // 0x8005E91C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8005E920: beql        $v0, $zero, L_8005E938
    if (ctx->r2 == 0) {
        // 0x8005E924: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005E938;
    }
    goto skip_0;
    // 0x8005E924: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8005E928: beql        $v1, $zero, L_8005E948
    if (ctx->r3 == 0) {
        // 0x8005E92C: addiu       $a0, $zero, 0x84
        ctx->r4 = ADD32(0, 0X84);
            goto L_8005E948;
    }
    goto skip_1;
    // 0x8005E92C: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    skip_1:
    // 0x8005E930: j           L_8005EA4C
    // 0x8005E934: nop

        goto L_8005EA4C;
    // 0x8005E934: nop

L_8005E938:
    // 0x8005E938: beql        $v1, $v0, L_8005E9F4
    if (ctx->r3 == ctx->r2) {
        // 0x8005E93C: addiu       $a0, $zero, 0x84
        ctx->r4 = ADD32(0, 0X84);
            goto L_8005E9F4;
    }
    goto skip_2;
    // 0x8005E93C: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    skip_2:
    // 0x8005E940: j           L_8005EA4C
    // 0x8005E944: nop

        goto L_8005EA4C;
    // 0x8005E944: nop

L_8005E948:
    // 0x8005E948: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
    // 0x8005E94C: addiu       $v1, $zero, 0xBC
    ctx->r3 = ADD32(0, 0XBC);
    // 0x8005E950: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8005E954: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x8005E958: addiu       $v0, $zero, 0xD4
    ctx->r2 = ADD32(0, 0XD4);
    // 0x8005E95C: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8005E960: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x8005E964: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x8005E968: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x8005E96C: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x8005E970: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8005E974: sh          $v1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r3;
    // 0x8005E978: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8005E97C: addiu       $v1, $zero, 0x88
    ctx->r3 = ADD32(0, 0X88);
    // 0x8005E980: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8005E984: sb          $v0, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r2;
    // 0x8005E988: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8005E98C: sb          $a0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r4;
    // 0x8005E990: sb          $v1, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r3;
    // 0x8005E994: j           L_8005EA40
    // 0x8005E998: sb          $a0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r4;
        goto L_8005EA40;
    // 0x8005E998: sb          $a0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r4;
L_8005E99C:
    // 0x8005E99C: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    // 0x8005E9A0: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
    // 0x8005E9A4: addiu       $v1, $zero, 0xC8
    ctx->r3 = ADD32(0, 0XC8);
    // 0x8005E9A8: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8005E9AC: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x8005E9B0: addiu       $v0, $zero, 0xD4
    ctx->r2 = ADD32(0, 0XD4);
    // 0x8005E9B4: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8005E9B8: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x8005E9BC: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    // 0x8005E9C0: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x8005E9C4: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x8005E9C8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8005E9CC: sh          $v1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r3;
    // 0x8005E9D0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8005E9D4: addiu       $v1, $zero, 0xD8
    ctx->r3 = ADD32(0, 0XD8);
    // 0x8005E9D8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8005E9DC: sb          $v0, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r2;
    // 0x8005E9E0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8005E9E4: sb          $a0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r4;
    // 0x8005E9E8: sb          $v1, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r3;
    // 0x8005E9EC: j           L_8005EA40
    // 0x8005E9F0: sb          $a0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r4;
        goto L_8005EA40;
    // 0x8005E9F0: sb          $a0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r4;
L_8005E9F4:
    // 0x8005E9F4: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
    // 0x8005E9F8: addiu       $v1, $zero, 0xBC
    ctx->r3 = ADD32(0, 0XBC);
    // 0x8005E9FC: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8005EA00: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x8005EA04: addiu       $v0, $zero, 0xD4
    ctx->r2 = ADD32(0, 0XD4);
    // 0x8005EA08: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x8005EA0C: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x8005EA10: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8005EA14: sh          $v1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r3;
    // 0x8005EA18: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8005EA1C: addiu       $v1, $zero, 0x38
    ctx->r3 = ADD32(0, 0X38);
    // 0x8005EA20: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8005EA24: sb          $v0, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r2;
    // 0x8005EA28: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8005EA2C: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8005EA30: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x8005EA34: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8005EA38: sb          $v1, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r3;
    // 0x8005EA3C: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
L_8005EA40:
    // 0x8005EA40: sb          $v0, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r2;
    // 0x8005EA44: sb          $v1, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r3;
    // 0x8005EA48: sb          $v0, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r2;
L_8005EA4C:
    // 0x8005EA4C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005EA50: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005EA54: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005EA58: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005EA5C: jal         0x800302C8
    // 0x8005EA60: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_800302C8_B6C8(rdram, ctx);
        goto after_11;
    // 0x8005EA60: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_11:
L_8005EA64:
    // 0x8005EA64: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8005EA68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005EA6C: sh          $v0, -0x77B0($at)
    MEM_H(-0X77B0, ctx->r1) = ctx->r2;
    // 0x8005EA70: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8005EA74: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x8005EA78: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x8005EA7C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8005EA80: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8005EA84: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8005EA88: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8005EA8C: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x8005EA90: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8005EA94: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x8005EA98: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005EA9C: lhu         $v0, -0x3C00($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3C00);
    // 0x8005EAA0: beq         $v0, $zero, L_8005EAC0
    if (ctx->r2 == 0) {
        // 0x8005EAA4: addiu       $v0, $zero, 0x90
        ctx->r2 = ADD32(0, 0X90);
            goto L_8005EAC0;
    }
    // 0x8005EAA4: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
    // 0x8005EAA8: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x8005EAAC: addiu       $v1, $zero, 0xE0
    ctx->r3 = ADD32(0, 0XE0);
    // 0x8005EAB0: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8005EAB4: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005EAB8: j           L_8005EAD4
    // 0x8005EABC: addiu       $v0, $zero, 0xD8
    ctx->r2 = ADD32(0, 0XD8);
        goto L_8005EAD4;
    // 0x8005EABC: addiu       $v0, $zero, 0xD8
    ctx->r2 = ADD32(0, 0XD8);
L_8005EAC0:
    // 0x8005EAC0: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x8005EAC4: addiu       $v1, $zero, 0xE0
    ctx->r3 = ADD32(0, 0XE0);
    // 0x8005EAC8: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8005EACC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005EAD0: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
L_8005EAD4:
    // 0x8005EAD4: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8005EAD8: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x8005EADC: sh          $a0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r4;
    // 0x8005EAE0: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x8005EAE4: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x8005EAE8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8005EAEC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005EAF0: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005EAF4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005EAF8: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005EAFC: jal         0x800302C8
    // 0x8005EB00: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_800302C8_B6C8(rdram, ctx);
        goto after_12;
    // 0x8005EB00: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_12:
    // 0x8005EB04: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005EB08: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    // 0x8005EB0C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8005EB10: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x8005EB14: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8005EB18: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8005EB1C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8005EB20: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8005EB24: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8005EB28: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8005EB2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8005EB30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005EB34: jr          $ra
    // 0x8005EB38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8005EB38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8005EB3C: nop

;}
RECOMP_FUNC void func_800736E0_4EAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800736E0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800736E4: lb          $v0, 0x4DFE($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4DFE);
    // 0x800736E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800736EC: bltz        $v0, L_8007374C
    if (SIGNED(ctx->r2) < 0) {
        // 0x800736F0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8007374C;
    }
    // 0x800736F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800736F4: beq         $v0, $zero, L_8007373C
    if (ctx->r2 == 0) {
        // 0x800736F8: nop
    
            goto L_8007373C;
    }
    // 0x800736F8: nop

    // 0x800736FC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80073700: lb          $v0, 0x4DFF($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4DFF);
    // 0x80073704: beq         $v0, $zero, L_80073720
    if (ctx->r2 == 0) {
        // 0x80073708: nop
    
            goto L_80073720;
    }
    // 0x80073708: nop

    // 0x8007370C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80073710: lbu         $v0, 0x4B22($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4B22);
    // 0x80073714: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80073718: j           L_80073728
    // 0x8007371C: sb          $v0, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = ctx->r2;
        goto L_80073728;
    // 0x8007371C: sb          $v0, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = ctx->r2;
L_80073720:
    // 0x80073720: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80073724: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
L_80073728:
    // 0x80073728: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007372C: lbu         $v0, 0x4B23($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4B23);
    // 0x80073730: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80073734: j           L_8007374C
    // 0x80073738: sb          $v0, 0x4B21($at)
    MEM_B(0X4B21, ctx->r1) = ctx->r2;
        goto L_8007374C;
    // 0x80073738: sb          $v0, 0x4B21($at)
    MEM_B(0X4B21, ctx->r1) = ctx->r2;
L_8007373C:
    // 0x8007373C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80073740: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
    // 0x80073744: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80073748: sb          $zero, 0x4B21($at)
    MEM_B(0X4B21, ctx->r1) = 0;
L_8007374C:
    // 0x8007374C: beq         $a0, $zero, L_8007376C
    if (ctx->r4 == 0) {
        // 0x80073750: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8007376C;
    }
    // 0x80073750: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80073754: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80073758: lb          $v0, 0x4B20($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4B20);
    // 0x8007375C: beq         $v0, $zero, L_8007376C
    if (ctx->r2 == 0) {
        // 0x80073760: nop
    
            goto L_8007376C;
    }
    // 0x80073760: nop

    // 0x80073764: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80073768: lb          $a0, 0x4B22($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4B22);
L_8007376C:
    // 0x8007376C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80073770: lh          $v0, -0x3BA4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3BA4);
    // 0x80073774: beq         $v0, $a0, L_80073784
    if (ctx->r2 == ctx->r4) {
        // 0x80073778: nop
    
            goto L_80073784;
    }
    // 0x80073778: nop

    // 0x8007377C: jal         0x80073BA8
    // 0x80073780: nop

    func_80073BA8_4EFA8(rdram, ctx);
        goto after_0;
    // 0x80073780: nop

    after_0:
L_80073784:
    // 0x80073784: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80073788: lb          $v0, 0x4B21($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4B21);
    // 0x8007378C: bne         $v0, $zero, L_800737CC
    if (ctx->r2 != 0) {
        // 0x80073790: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800737CC;
    }
    // 0x80073790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80073794: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80073798: lb          $v0, -0x4720($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X4720);
    // 0x8007379C: beq         $v0, $zero, L_8007381C
    if (ctx->r2 == 0) {
        // 0x800737A0: nop
    
            goto L_8007381C;
    }
    // 0x800737A0: nop

    // 0x800737A4: jal         0x80092EB0
    // 0x800737A8: nop

    func_80092EB0_6E2B0(rdram, ctx);
        goto after_1;
    // 0x800737A8: nop

    after_1:
    // 0x800737AC: jal         0x80087570
    // 0x800737B0: nop

    Graph_ThreadStop(rdram, ctx);
        goto after_2;
    // 0x800737B0: nop

    after_2:
    // 0x800737B4: jal         0x80083E30
    // 0x800737B8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80083E30_5F230(rdram, ctx);
        goto after_3;
    // 0x800737B8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_3:
    // 0x800737BC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800737C0: sb          $zero, -0x4720($at)
    MEM_B(-0X4720, ctx->r1) = 0;
    // 0x800737C4: j           L_80073804
    // 0x800737C8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_80073804;
    // 0x800737C8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_800737CC:
    // 0x800737CC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x800737D0: lb          $v1, -0x4720($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X4720);
    // 0x800737D4: beq         $v1, $v0, L_8007381C
    if (ctx->r3 == ctx->r2) {
        // 0x800737D8: nop
    
            goto L_8007381C;
    }
    // 0x800737D8: nop

    // 0x800737DC: jal         0x80092EB0
    // 0x800737E0: nop

    func_80092EB0_6E2B0(rdram, ctx);
        goto after_4;
    // 0x800737E0: nop

    after_4:
    // 0x800737E4: jal         0x80087570
    // 0x800737E8: nop

    Graph_ThreadStop(rdram, ctx);
        goto after_5;
    // 0x800737E8: nop

    after_5:
    // 0x800737EC: jal         0x80083E30
    // 0x800737F0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80083E30_5F230(rdram, ctx);
        goto after_6;
    // 0x800737F0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_6:
    // 0x800737F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800737F8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800737FC: sb          $v0, -0x4720($at)
    MEM_B(-0X4720, ctx->r1) = ctx->r2;
    // 0x80073800: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_80073804:
    // 0x80073804: jal         0x80036D34
    // 0x80073808: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80036D34_12134(rdram, ctx);
        goto after_7;
    // 0x80073808: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x8007380C: jal         0x80036BCC
    // 0x80073810: nop

    func_80036BCC_11FCC(rdram, ctx);
        goto after_8;
    // 0x80073810: nop

    after_8:
    // 0x80073814: jal         0x80087590
    // 0x80073818: nop

    func_80087590_62990(rdram, ctx);
        goto after_9;
    // 0x80073818: nop

    after_9:
L_8007381C:
    // 0x8007381C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80073820: jr          $ra
    // 0x80073824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80073824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80087BC0_62FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80087BC0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80087BC4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80087BC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80087BCC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80087BD0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80087BD4: addiu       $a1, $a1, 0x2CF8
    ctx->r5 = ADD32(ctx->r5, 0X2CF8);
    // 0x80087BD8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80087BDC: jal         0x8009A3B4
    // 0x80087BE0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80087BE0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80087BE4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80087BE8: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80087BEC: addiu       $a1, $zero, 0x1A00
    ctx->r5 = ADD32(0, 0X1A00);
    // 0x80087BF0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80087BF4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087BF8: sw          $v0, 0xA50($at)
    MEM_W(0XA50, ctx->r1) = ctx->r2;
    // 0x80087BFC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80087C00: addiu       $v0, $v0, -0x29B0
    ctx->r2 = ADD32(ctx->r2, -0X29B0);
    // 0x80087C04: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x80087C08: sll         $a0, $v1, 1
    ctx->r4 = S32(ctx->r3 << 1);
    // 0x80087C0C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80087C10: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80087C14: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80087C18: sll         $a0, $a0, 9
    ctx->r4 = S32(ctx->r4 << 9);
    // 0x80087C1C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80087C20: sw          $v1, -0x15D8($at)
    MEM_W(-0X15D8, ctx->r1) = ctx->r3;
    // 0x80087C24: jal         0x8009A2B0
    // 0x80087C28: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x80087C28: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_1:
    // 0x80087C2C: addu        $t4, $zero, $zero
    ctx->r12 = ADD32(0, 0);
    // 0x80087C30: addiu       $t3, $zero, -0x20
    ctx->r11 = ADD32(0, -0X20);
    // 0x80087C34: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x80087C38: addiu       $t2, $zero, 0x3E0
    ctx->r10 = ADD32(0, 0X3E0);
    // 0x80087C3C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
L_80087C40:
    // 0x80087C40: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80087C44: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80087C48: addiu       $v0, $s0, 0x4
    ctx->r2 = ADD32(ctx->r16, 0X4);
    // 0x80087C4C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80087C50: addiu       $v0, $s0, 0x5
    ctx->r2 = ADD32(ctx->r16, 0X5);
    // 0x80087C54: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80087C58: addiu       $v0, $s0, 0x6
    ctx->r2 = ADD32(ctx->r16, 0X6);
    // 0x80087C5C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80087C60: addiu       $v0, $s0, 0x7
    ctx->r2 = ADD32(ctx->r16, 0X7);
    // 0x80087C64: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80087C68: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80087C6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087C70: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087C74: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087C78: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80087C7C: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80087C80: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087C84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087C88: sb          $t1, -0x29A4($at)
    MEM_B(-0X29A4, ctx->r1) = ctx->r9;
    // 0x80087C8C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80087C90: lw          $a0, -0x15D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X15D8);
    // 0x80087C94: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x80087C98: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087C9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087CA0: sh          $v1, -0x29B0($at)
    MEM_H(-0X29B0, ctx->r1) = ctx->r3;
    // 0x80087CA4: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x80087CA8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087CAC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087CB0: sh          $v1, -0x29AC($at)
    MEM_H(-0X29AC, ctx->r1) = ctx->r3;
    // 0x80087CB4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087CB8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087CBC: sh          $t3, -0x29A8($at)
    MEM_H(-0X29A8, ctx->r1) = ctx->r11;
    // 0x80087CC0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087CC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087CC8: sh          $t3, -0x29A6($at)
    MEM_H(-0X29A6, ctx->r1) = ctx->r11;
    // 0x80087CCC: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80087CD0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80087CD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087CD8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80087CDC: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80087CE0: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80087CE4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087CE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087CEC: sb          $t1, -0x29A3($at)
    MEM_B(-0X29A3, ctx->r1) = ctx->r9;
    // 0x80087CF0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80087CF4: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80087CF8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80087CFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087D00: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087D04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087D08: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80087D0C: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80087D10: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087D14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087D18: sb          $t1, -0x29A2($at)
    MEM_B(-0X29A2, ctx->r1) = ctx->r9;
    // 0x80087D1C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80087D20: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80087D24: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80087D28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087D2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087D30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087D34: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80087D38: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80087D3C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80087D40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80087D44: lhu         $v1, -0x29B0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X29B0);
    // 0x80087D48: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x80087D4C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80087D50: lhu         $a3, -0x29AC($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X29AC);
    // 0x80087D54: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80087D58: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80087D5C: lhu         $a0, -0x29A8($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X29A8);
    // 0x80087D60: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80087D64: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80087D68: lhu         $a1, -0x29A6($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X29A6);
    // 0x80087D6C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087D70: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087D74: sb          $t1, -0x2994($at)
    MEM_B(-0X2994, ctx->r1) = ctx->r9;
    // 0x80087D78: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x80087D7C: lw          $a2, -0x15D8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X15D8);
    // 0x80087D80: addiu       $v1, $v1, 0x100
    ctx->r3 = ADD32(ctx->r3, 0X100);
    // 0x80087D84: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    // 0x80087D88: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
    // 0x80087D8C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087D90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087D94: sh          $v1, -0x29A0($at)
    MEM_H(-0X29A0, ctx->r1) = ctx->r3;
    // 0x80087D98: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087D9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087DA0: sh          $a3, -0x299C($at)
    MEM_H(-0X299C, ctx->r1) = ctx->r7;
    // 0x80087DA4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087DA8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087DAC: sh          $a0, -0x2998($at)
    MEM_H(-0X2998, ctx->r1) = ctx->r4;
    // 0x80087DB0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087DB4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087DB8: sh          $a1, -0x2996($at)
    MEM_H(-0X2996, ctx->r1) = ctx->r5;
    // 0x80087DBC: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x80087DC0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80087DC4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087DC8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80087DCC: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80087DD0: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80087DD4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087DD8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087DDC: sb          $t1, -0x2993($at)
    MEM_B(-0X2993, ctx->r1) = ctx->r9;
    // 0x80087DE0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80087DE4: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80087DE8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80087DEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087DF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087DF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087DF8: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80087DFC: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80087E00: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087E04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087E08: sb          $t1, -0x2992($at)
    MEM_B(-0X2992, ctx->r1) = ctx->r9;
    // 0x80087E0C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80087E10: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80087E14: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80087E18: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087E1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087E20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087E24: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80087E28: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80087E2C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80087E30: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80087E34: lhu         $v1, -0x29B0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X29B0);
    // 0x80087E38: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80087E3C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80087E40: lhu         $a0, -0x29AC($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X29AC);
    // 0x80087E44: addiu       $v1, $v1, 0x200
    ctx->r3 = ADD32(ctx->r3, 0X200);
    // 0x80087E48: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087E4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087E50: sh          $v1, -0x2990($at)
    MEM_H(-0X2990, ctx->r1) = ctx->r3;
    // 0x80087E54: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087E58: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087E5C: sh          $a0, -0x298C($at)
    MEM_H(-0X298C, ctx->r1) = ctx->r4;
    // 0x80087E60: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087E64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087E68: sh          $t2, -0x2988($at)
    MEM_H(-0X2988, ctx->r1) = ctx->r10;
    // 0x80087E6C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087E70: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087E74: sb          $t1, -0x2984($at)
    MEM_B(-0X2984, ctx->r1) = ctx->r9;
    // 0x80087E78: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80087E7C: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80087E80: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087E84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087E88: sh          $t3, -0x2986($at)
    MEM_H(-0X2986, ctx->r1) = ctx->r11;
    // 0x80087E8C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80087E90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087E94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087E98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087E9C: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80087EA0: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80087EA4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087EA8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087EAC: sb          $t1, -0x2983($at)
    MEM_B(-0X2983, ctx->r1) = ctx->r9;
    // 0x80087EB0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80087EB4: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80087EB8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80087EBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087EC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087EC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087EC8: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80087ECC: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80087ED0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087ED4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087ED8: sb          $t1, -0x2982($at)
    MEM_B(-0X2982, ctx->r1) = ctx->r9;
    // 0x80087EDC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80087EE0: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80087EE4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80087EE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087EEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087EF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087EF4: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80087EF8: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80087EFC: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80087F00: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80087F04: lhu         $a2, -0x29B0($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X29B0);
    // 0x80087F08: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80087F0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80087F10: lhu         $v1, -0x29AC($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X29AC);
    // 0x80087F14: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x80087F18: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80087F1C: lhu         $a3, -0x29A8($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X29A8);
    // 0x80087F20: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80087F24: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80087F28: lhu         $a0, -0x29A6($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X29A6);
    // 0x80087F2C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087F30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087F34: sb          $t1, -0x2974($at)
    MEM_B(-0X2974, ctx->r1) = ctx->r9;
    // 0x80087F38: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80087F3C: lw          $a1, -0x15D8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X15D8);
    // 0x80087F40: addiu       $v1, $v1, -0x100
    ctx->r3 = ADD32(ctx->r3, -0X100);
    // 0x80087F44: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    // 0x80087F48: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087F4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087F50: sh          $a2, -0x2980($at)
    MEM_H(-0X2980, ctx->r1) = ctx->r6;
    // 0x80087F54: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087F58: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087F5C: sh          $v1, -0x297C($at)
    MEM_H(-0X297C, ctx->r1) = ctx->r3;
    // 0x80087F60: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087F64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087F68: sh          $a3, -0x2978($at)
    MEM_H(-0X2978, ctx->r1) = ctx->r7;
    // 0x80087F6C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087F70: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087F74: sh          $a0, -0x2976($at)
    MEM_H(-0X2976, ctx->r1) = ctx->r4;
    // 0x80087F78: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80087F7C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80087F80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087F84: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80087F88: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80087F8C: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80087F90: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087F94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087F98: sb          $t1, -0x2973($at)
    MEM_B(-0X2973, ctx->r1) = ctx->r9;
    // 0x80087F9C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80087FA0: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80087FA4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80087FA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087FAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087FB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087FB4: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80087FB8: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80087FBC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80087FC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80087FC4: sb          $t1, -0x2972($at)
    MEM_B(-0X2972, ctx->r1) = ctx->r9;
    // 0x80087FC8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80087FCC: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80087FD0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80087FD4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087FD8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087FDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087FE0: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80087FE4: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80087FE8: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80087FEC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80087FF0: lhu         $v1, -0x29B0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X29B0);
    // 0x80087FF4: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80087FF8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80087FFC: lhu         $a0, -0x29AC($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X29AC);
    // 0x80088000: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80088004: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80088008: lhu         $a1, -0x29A8($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X29A8);
    // 0x8008800C: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80088010: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80088014: lhu         $a2, -0x29A6($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X29A6);
    // 0x80088018: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008801C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088020: sb          $t1, -0x2964($at)
    MEM_B(-0X2964, ctx->r1) = ctx->r9;
    // 0x80088024: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x80088028: lw          $a3, -0x15D8($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X15D8);
    // 0x8008802C: addiu       $v1, $v1, 0x100
    ctx->r3 = ADD32(ctx->r3, 0X100);
    // 0x80088030: addiu       $a0, $a0, -0x100
    ctx->r4 = ADD32(ctx->r4, -0X100);
    // 0x80088034: addiu       $a1, $a1, 0x400
    ctx->r5 = ADD32(ctx->r5, 0X400);
    // 0x80088038: addiu       $a2, $a2, 0x400
    ctx->r6 = ADD32(ctx->r6, 0X400);
    // 0x8008803C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088040: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088044: sh          $v1, -0x2970($at)
    MEM_H(-0X2970, ctx->r1) = ctx->r3;
    // 0x80088048: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008804C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088050: sh          $a0, -0x296C($at)
    MEM_H(-0X296C, ctx->r1) = ctx->r4;
    // 0x80088054: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088058: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008805C: sh          $a1, -0x2968($at)
    MEM_H(-0X2968, ctx->r1) = ctx->r5;
    // 0x80088060: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088064: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088068: sh          $a2, -0x2966($at)
    MEM_H(-0X2966, ctx->r1) = ctx->r6;
    // 0x8008806C: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x80088070: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80088074: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80088078: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8008807C: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80088080: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80088084: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088088: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008808C: sb          $t1, -0x2963($at)
    MEM_B(-0X2963, ctx->r1) = ctx->r9;
    // 0x80088090: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80088094: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80088098: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8008809C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800880A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800880A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800880A8: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x800880AC: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x800880B0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800880B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800880B8: sb          $t1, -0x2962($at)
    MEM_B(-0X2962, ctx->r1) = ctx->r9;
    // 0x800880BC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800880C0: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x800880C4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800880C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800880CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800880D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800880D4: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x800880D8: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x800880DC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x800880E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800880E4: lhu         $v1, -0x29B0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X29B0);
    // 0x800880E8: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x800880EC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800880F0: lhu         $a0, -0x29AC($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X29AC);
    // 0x800880F4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800880F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800880FC: sb          $t1, -0x2954($at)
    MEM_B(-0X2954, ctx->r1) = ctx->r9;
    // 0x80088100: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80088104: lw          $a1, -0x15D8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X15D8);
    // 0x80088108: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008810C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088110: sh          $t2, -0x2958($at)
    MEM_H(-0X2958, ctx->r1) = ctx->r10;
    // 0x80088114: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088118: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008811C: sh          $t2, -0x2956($at)
    MEM_H(-0X2956, ctx->r1) = ctx->r10;
    // 0x80088120: addiu       $v1, $v1, 0x200
    ctx->r3 = ADD32(ctx->r3, 0X200);
    // 0x80088124: addiu       $a0, $a0, -0x100
    ctx->r4 = ADD32(ctx->r4, -0X100);
    // 0x80088128: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008812C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088130: sh          $v1, -0x2960($at)
    MEM_H(-0X2960, ctx->r1) = ctx->r3;
    // 0x80088134: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088138: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008813C: sh          $a0, -0x295C($at)
    MEM_H(-0X295C, ctx->r1) = ctx->r4;
    // 0x80088140: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80088144: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80088148: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008814C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80088150: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80088154: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80088158: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008815C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088160: sb          $t1, -0x2953($at)
    MEM_B(-0X2953, ctx->r1) = ctx->r9;
    // 0x80088164: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80088168: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x8008816C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80088170: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088174: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80088178: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008817C: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80088180: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80088184: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088188: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008818C: sb          $t1, -0x2952($at)
    MEM_B(-0X2952, ctx->r1) = ctx->r9;
    // 0x80088190: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80088194: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80088198: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8008819C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800881A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800881A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800881A8: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x800881AC: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x800881B0: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x800881B4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x800881B8: lhu         $a1, -0x29B0($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X29B0);
    // 0x800881BC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x800881C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800881C4: lhu         $v1, -0x29AC($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X29AC);
    // 0x800881C8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800881CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800881D0: sb          $t1, -0x2944($at)
    MEM_B(-0X2944, ctx->r1) = ctx->r9;
    // 0x800881D4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800881D8: lw          $a0, -0x15D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X15D8);
    // 0x800881DC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800881E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800881E4: sh          $t3, -0x2948($at)
    MEM_H(-0X2948, ctx->r1) = ctx->r11;
    // 0x800881E8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800881EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800881F0: sh          $t2, -0x2946($at)
    MEM_H(-0X2946, ctx->r1) = ctx->r10;
    // 0x800881F4: addiu       $v1, $v1, -0x200
    ctx->r3 = ADD32(ctx->r3, -0X200);
    // 0x800881F8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800881FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088200: sh          $a1, -0x2950($at)
    MEM_H(-0X2950, ctx->r1) = ctx->r5;
    // 0x80088204: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088208: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008820C: sh          $v1, -0x294C($at)
    MEM_H(-0X294C, ctx->r1) = ctx->r3;
    // 0x80088210: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80088214: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80088218: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008821C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80088220: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80088224: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80088228: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008822C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088230: sb          $t1, -0x2943($at)
    MEM_B(-0X2943, ctx->r1) = ctx->r9;
    // 0x80088234: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80088238: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x8008823C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80088240: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088244: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80088248: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008824C: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80088250: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80088254: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088258: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008825C: sb          $t1, -0x2942($at)
    MEM_B(-0X2942, ctx->r1) = ctx->r9;
    // 0x80088260: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80088264: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80088268: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8008826C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088270: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80088274: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088278: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8008827C: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80088280: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80088284: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80088288: lhu         $v1, -0x29B0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X29B0);
    // 0x8008828C: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80088290: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80088294: lhu         $a0, -0x29AC($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X29AC);
    // 0x80088298: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008829C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800882A0: sb          $t1, -0x2934($at)
    MEM_B(-0X2934, ctx->r1) = ctx->r9;
    // 0x800882A4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800882A8: lw          $a1, -0x15D8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X15D8);
    // 0x800882AC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800882B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800882B4: sh          $t2, -0x2938($at)
    MEM_H(-0X2938, ctx->r1) = ctx->r10;
    // 0x800882B8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800882BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800882C0: sh          $t2, -0x2936($at)
    MEM_H(-0X2936, ctx->r1) = ctx->r10;
    // 0x800882C4: addiu       $v1, $v1, 0x100
    ctx->r3 = ADD32(ctx->r3, 0X100);
    // 0x800882C8: addiu       $a0, $a0, -0x200
    ctx->r4 = ADD32(ctx->r4, -0X200);
    // 0x800882CC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800882D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800882D4: sh          $v1, -0x2940($at)
    MEM_H(-0X2940, ctx->r1) = ctx->r3;
    // 0x800882D8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800882DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800882E0: sh          $a0, -0x293C($at)
    MEM_H(-0X293C, ctx->r1) = ctx->r4;
    // 0x800882E4: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x800882E8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800882EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800882F0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800882F4: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x800882F8: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x800882FC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088300: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088304: sb          $t1, -0x2933($at)
    MEM_B(-0X2933, ctx->r1) = ctx->r9;
    // 0x80088308: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8008830C: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80088310: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80088314: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088318: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008831C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088320: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80088324: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80088328: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008832C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088330: sb          $t1, -0x2932($at)
    MEM_B(-0X2932, ctx->r1) = ctx->r9;
    // 0x80088334: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80088338: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x8008833C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80088340: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088344: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80088348: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008834C: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80088350: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80088354: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80088358: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8008835C: lhu         $v1, -0x29B0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X29B0);
    // 0x80088360: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80088364: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80088368: lhu         $a0, -0x29AC($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X29AC);
    // 0x8008836C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088370: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088374: sb          $t1, -0x2924($at)
    MEM_B(-0X2924, ctx->r1) = ctx->r9;
    // 0x80088378: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8008837C: lw          $a1, -0x15D8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X15D8);
    // 0x80088380: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088384: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088388: sh          $t2, -0x2928($at)
    MEM_H(-0X2928, ctx->r1) = ctx->r10;
    // 0x8008838C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088390: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088394: sh          $t2, -0x2926($at)
    MEM_H(-0X2926, ctx->r1) = ctx->r10;
    // 0x80088398: addiu       $v1, $v1, 0x200
    ctx->r3 = ADD32(ctx->r3, 0X200);
    // 0x8008839C: addiu       $a0, $a0, -0x200
    ctx->r4 = ADD32(ctx->r4, -0X200);
    // 0x800883A0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800883A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800883A8: sh          $v1, -0x2930($at)
    MEM_H(-0X2930, ctx->r1) = ctx->r3;
    // 0x800883AC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800883B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800883B4: sh          $a0, -0x292C($at)
    MEM_H(-0X292C, ctx->r1) = ctx->r4;
    // 0x800883B8: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x800883BC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800883C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800883C4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800883C8: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x800883CC: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x800883D0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800883D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800883D8: sb          $t1, -0x2923($at)
    MEM_B(-0X2923, ctx->r1) = ctx->r9;
    // 0x800883DC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800883E0: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x800883E4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800883E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800883EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800883F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800883F4: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x800883F8: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x800883FC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088400: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088404: sb          $t1, -0x2922($at)
    MEM_B(-0X2922, ctx->r1) = ctx->r9;
    // 0x80088408: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8008840C: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80088410: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80088414: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088418: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008841C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088420: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x80088424: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80088428: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x8008842C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088430: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088434: sh          $v1, -0x2920($at)
    MEM_H(-0X2920, ctx->r1) = ctx->r3;
    // 0x80088438: lhu         $a0, 0x22($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X22);
    // 0x8008843C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088440: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088444: sb          $t1, -0x2914($at)
    MEM_B(-0X2914, ctx->r1) = ctx->r9;
    // 0x80088448: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8008844C: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80088450: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088454: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088458: sh          $t3, -0x2918($at)
    MEM_H(-0X2918, ctx->r1) = ctx->r11;
    // 0x8008845C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088460: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088464: sh          $t3, -0x2916($at)
    MEM_H(-0X2916, ctx->r1) = ctx->r11;
    // 0x80088468: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008846C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088470: sh          $a0, -0x291C($at)
    MEM_H(-0X291C, ctx->r1) = ctx->r4;
    // 0x80088474: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80088478: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008847C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80088480: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088484: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80088488: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x8008848C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088490: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088494: sb          $t1, -0x2913($at)
    MEM_B(-0X2913, ctx->r1) = ctx->r9;
    // 0x80088498: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8008849C: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x800884A0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800884A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800884A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800884AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800884B0: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x800884B4: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x800884B8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800884BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800884C0: sb          $t1, -0x2912($at)
    MEM_B(-0X2912, ctx->r1) = ctx->r9;
    // 0x800884C4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800884C8: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x800884CC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800884D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800884D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800884D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800884DC: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x800884E0: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x800884E4: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x800884E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800884EC: lhu         $v1, -0x2920($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2920);
    // 0x800884F0: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x800884F4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x800884F8: lhu         $a1, -0x291C($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X291C);
    // 0x800884FC: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80088500: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80088504: lhu         $a0, -0x2918($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X2918);
    // 0x80088508: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8008850C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80088510: lhu         $a2, -0x2916($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X2916);
    // 0x80088514: addiu       $v1, $v1, 0x200
    ctx->r3 = ADD32(ctx->r3, 0X200);
    // 0x80088518: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    // 0x8008851C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088520: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088524: sh          $v1, -0x2910($at)
    MEM_H(-0X2910, ctx->r1) = ctx->r3;
    // 0x80088528: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008852C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088530: sh          $a1, -0x290C($at)
    MEM_H(-0X290C, ctx->r1) = ctx->r5;
    // 0x80088534: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088538: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008853C: sh          $a0, -0x2908($at)
    MEM_H(-0X2908, ctx->r1) = ctx->r4;
    // 0x80088540: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088544: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088548: sh          $a2, -0x2906($at)
    MEM_H(-0X2906, ctx->r1) = ctx->r6;
    // 0x8008854C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088550: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088554: sb          $t1, -0x2904($at)
    MEM_B(-0X2904, ctx->r1) = ctx->r9;
    // 0x80088558: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8008855C: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80088560: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80088564: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088568: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008856C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088570: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80088574: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80088578: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008857C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088580: sb          $t1, -0x2903($at)
    MEM_B(-0X2903, ctx->r1) = ctx->r9;
    // 0x80088584: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80088588: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x8008858C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80088590: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088594: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80088598: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008859C: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x800885A0: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x800885A4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800885A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800885AC: sb          $t1, -0x2902($at)
    MEM_B(-0X2902, ctx->r1) = ctx->r9;
    // 0x800885B0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800885B4: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x800885B8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800885BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800885C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800885C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800885C8: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x800885CC: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x800885D0: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x800885D4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x800885D8: lhu         $a2, -0x2920($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X2920);
    // 0x800885DC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x800885E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800885E4: lhu         $v1, -0x291C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X291C);
    // 0x800885E8: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x800885EC: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x800885F0: lhu         $a3, -0x2918($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X2918);
    // 0x800885F4: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x800885F8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800885FC: lhu         $a0, -0x2916($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X2916);
    // 0x80088600: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088604: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088608: sb          $t1, -0x28F4($at)
    MEM_B(-0X28F4, ctx->r1) = ctx->r9;
    // 0x8008860C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80088610: lw          $a1, -0x15D8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X15D8);
    // 0x80088614: addiu       $v1, $v1, -0x200
    ctx->r3 = ADD32(ctx->r3, -0X200);
    // 0x80088618: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    // 0x8008861C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088620: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088624: sh          $a2, -0x2900($at)
    MEM_H(-0X2900, ctx->r1) = ctx->r6;
    // 0x80088628: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008862C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088630: sh          $v1, -0x28FC($at)
    MEM_H(-0X28FC, ctx->r1) = ctx->r3;
    // 0x80088634: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088638: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008863C: sh          $a3, -0x28F8($at)
    MEM_H(-0X28F8, ctx->r1) = ctx->r7;
    // 0x80088640: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088644: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088648: sh          $a0, -0x28F6($at)
    MEM_H(-0X28F6, ctx->r1) = ctx->r4;
    // 0x8008864C: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80088650: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80088654: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80088658: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8008865C: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80088660: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80088664: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088668: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008866C: sb          $t1, -0x28F3($at)
    MEM_B(-0X28F3, ctx->r1) = ctx->r9;
    // 0x80088670: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80088674: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x80088678: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8008867C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088680: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80088684: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088688: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8008868C: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80088690: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088694: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088698: sb          $t1, -0x28F2($at)
    MEM_B(-0X28F2, ctx->r1) = ctx->r9;
    // 0x8008869C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800886A0: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x800886A4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800886A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800886AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800886B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800886B4: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x800886B8: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x800886BC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x800886C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800886C4: lhu         $v1, -0x2920($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2920);
    // 0x800886C8: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x800886CC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800886D0: lhu         $a0, -0x291C($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X291C);
    // 0x800886D4: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x800886D8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x800886DC: lhu         $a1, -0x2918($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X2918);
    // 0x800886E0: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x800886E4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x800886E8: lhu         $a2, -0x2916($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X2916);
    // 0x800886EC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800886F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800886F4: sb          $t1, -0x28E4($at)
    MEM_B(-0X28E4, ctx->r1) = ctx->r9;
    // 0x800886F8: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x800886FC: lw          $a3, -0x15D8($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X15D8);
    // 0x80088700: addiu       $v1, $v1, 0x200
    ctx->r3 = ADD32(ctx->r3, 0X200);
    // 0x80088704: addiu       $a0, $a0, -0x200
    ctx->r4 = ADD32(ctx->r4, -0X200);
    // 0x80088708: addiu       $a1, $a1, 0x400
    ctx->r5 = ADD32(ctx->r5, 0X400);
    // 0x8008870C: addiu       $a2, $a2, 0x400
    ctx->r6 = ADD32(ctx->r6, 0X400);
    // 0x80088710: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088714: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088718: sh          $v1, -0x28F0($at)
    MEM_H(-0X28F0, ctx->r1) = ctx->r3;
    // 0x8008871C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088720: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088724: sh          $a0, -0x28EC($at)
    MEM_H(-0X28EC, ctx->r1) = ctx->r4;
    // 0x80088728: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008872C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088730: sh          $a1, -0x28E8($at)
    MEM_H(-0X28E8, ctx->r1) = ctx->r5;
    // 0x80088734: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088738: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008873C: sh          $a2, -0x28E6($at)
    MEM_H(-0X28E6, ctx->r1) = ctx->r6;
    // 0x80088740: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x80088744: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80088748: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008874C: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80088750: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80088754: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80088758: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008875C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088760: sb          $t1, -0x28E3($at)
    MEM_B(-0X28E3, ctx->r1) = ctx->r9;
    // 0x80088764: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80088768: lw          $v1, -0x15D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15D8);
    // 0x8008876C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80088770: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80088774: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80088778: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008877C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80088780: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088784: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80088788: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x8008878C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088790: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80088794: sb          $t1, -0x28E2($at)
    MEM_B(-0X28E2, ctx->r1) = ctx->r9;
    // 0x80088798: slti        $v0, $t4, 0x20
    ctx->r2 = SIGNED(ctx->r12) < 0X20 ? 1 : 0;
    // 0x8008879C: bne         $v0, $zero, L_80087C40
    if (ctx->r2 != 0) {
        // 0x800887A0: addiu       $t0, $t0, 0xD0
        ctx->r8 = ADD32(ctx->r8, 0XD0);
            goto L_80087C40;
    }
    // 0x800887A0: addiu       $t0, $t0, 0xD0
    ctx->r8 = ADD32(ctx->r8, 0XD0);
    // 0x800887A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800887A8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800887AC: jr          $ra
    // 0x800887B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x800887B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8005939C_3479C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005939C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800593A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800593A4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x800593A8: addiu       $s0, $s0, -0x3E3F
    ctx->r16 = ADD32(ctx->r16, -0X3E3F);
    // 0x800593AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800593B0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x800593B4: beq         $v1, $zero, L_800593CC
    if (ctx->r3 == 0) {
        // 0x800593B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800593CC;
    }
    // 0x800593B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800593BC: beq         $v1, $v0, L_800594E4
    if (ctx->r3 == ctx->r2) {
        // 0x800593C0: nop
    
            goto L_800594E4;
    }
    // 0x800593C0: nop

    // 0x800593C4: j           L_80059518
    // 0x800593C8: nop

        goto L_80059518;
    // 0x800593C8: nop

L_800593CC:
    // 0x800593CC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x800593D0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800593D4: sw          $v0, -0x3E24($at)
    MEM_W(-0X3E24, ctx->r1) = ctx->r2;
    // 0x800593D8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x800593DC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800593E0: sw          $v0, -0x3E1C($at)
    MEM_W(-0X3E1C, ctx->r1) = ctx->r2;
    // 0x800593E4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x800593E8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800593EC: sw          $v0, -0x3E34($at)
    MEM_W(-0X3E34, ctx->r1) = ctx->r2;
    // 0x800593F0: addiu       $v0, $zero, -0x96
    ctx->r2 = ADD32(0, -0X96);
    // 0x800593F4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800593F8: sw          $zero, -0x3E20($at)
    MEM_W(-0X3E20, ctx->r1) = 0;
    // 0x800593FC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059400: sw          $v0, -0x3E30($at)
    MEM_W(-0X3E30, ctx->r1) = ctx->r2;
    // 0x80059404: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059408: jal         0x8004EEAC
    // 0x8005940C: sw          $zero, -0x3E2C($at)
    MEM_W(-0X3E2C, ctx->r1) = 0;
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8005940C: sw          $zero, -0x3E2C($at)
    MEM_W(-0X3E2C, ctx->r1) = 0;
    after_0:
    // 0x80059410: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80059414: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80059418: sw          $v1, -0x4850($at)
    MEM_W(-0X4850, ctx->r1) = ctx->r3;
    // 0x8005941C: beq         $v1, $zero, L_80059458
    if (ctx->r3 == 0) {
        // 0x80059420: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80059458;
    }
    // 0x80059420: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80059424: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x80059428: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8005942C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80059430: lw          $v1, -0x4850($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4850);
    // 0x80059434: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80059438: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8005943C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80059440: lw          $v0, -0x4850($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4850);
    // 0x80059444: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80059448: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8005944C: lw          $v1, -0x4850($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4850);
    // 0x80059450: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80059454: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80059458:
    // 0x80059458: jal         0x8004EEAC
    // 0x8005945C: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_1;
    // 0x8005945C: nop

    after_1:
    // 0x80059460: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80059464: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80059468: sw          $v1, -0x484C($at)
    MEM_W(-0X484C, ctx->r1) = ctx->r3;
    // 0x8005946C: beq         $v1, $zero, L_800594A8
    if (ctx->r3 == 0) {
        // 0x80059470: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_800594A8;
    }
    // 0x80059470: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80059474: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x80059478: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8005947C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80059480: lw          $v1, -0x484C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X484C);
    // 0x80059484: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80059488: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8005948C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80059490: lw          $v0, -0x484C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X484C);
    // 0x80059494: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80059498: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8005949C: lw          $v1, -0x484C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X484C);
    // 0x800594A0: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x800594A4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_800594A8:
    // 0x800594A8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800594AC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800594B0: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x800594B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800594B8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x800594BC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800594C0: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x800594C4: jal         0x8005C890
    // 0x800594C8: lb          $a0, -0x1450($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1450);
    func_8005C890_37C90(rdram, ctx);
        goto after_2;
    // 0x800594C8: lb          $a0, -0x1450($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1450);
    after_2:
    // 0x800594CC: jal         0x8002A488
    // 0x800594D0: nop

    func_8002A488_5888(rdram, ctx);
        goto after_3;
    // 0x800594D0: nop

    after_3:
    // 0x800594D4: jal         0x800549B4
    // 0x800594D8: nop

    func_800549B4_2FDB4(rdram, ctx);
        goto after_4;
    // 0x800594D8: nop

    after_4:
    // 0x800594DC: j           L_80059518
    // 0x800594E0: nop

        goto L_80059518;
    // 0x800594E0: nop

L_800594E4:
    // 0x800594E4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800594E8: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x800594EC: bne         $v0, $zero, L_80059518
    if (ctx->r2 != 0) {
        // 0x800594F0: addiu       $a0, $zero, 0x2B
        ctx->r4 = ADD32(0, 0X2B);
            goto L_80059518;
    }
    // 0x800594F0: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    // 0x800594F4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800594F8: lbu         $v0, -0x3E40($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E40);
    // 0x800594FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80059500: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80059504: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80059508: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005950C: sb          $v0, -0x3E40($at)
    MEM_B(-0X3E40, ctx->r1) = ctx->r2;
    // 0x80059510: jal         0x8002A2F8
    // 0x80059514: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_5;
    // 0x80059514: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
L_80059518:
    // 0x80059518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005951C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80059520: jr          $ra
    // 0x80059524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80059524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void alRaw16Pull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80096694: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80096698: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8009669C: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x800966A0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x800966A4: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x800966A8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x800966AC: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x800966B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800966B4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x800966B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800966BC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x800966C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800966C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800966C8: beq         $s6, $zero, L_80096A04
    if (ctx->r22 == 0) {
        // 0x800966CC: addu        $s1, $s3, $zero
        ctx->r17 = ADD32(ctx->r19, 0);
            goto L_80096A04;
    }
    // 0x800966CC: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    // 0x800966D0: lw          $a0, 0x38($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X38);
    // 0x800966D4: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x800966D8: addu        $v0, $s6, $a0
    ctx->r2 = ADD32(ctx->r22, ctx->r4);
    // 0x800966DC: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x800966E0: beq         $v0, $zero, L_800968E4
    if (ctx->r2 == 0) {
        // 0x800966E4: nop
    
            goto L_800968E4;
    }
    // 0x800966E4: nop

    // 0x800966E8: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x800966EC: beq         $v0, $zero, L_800968E4
    if (ctx->r2 == 0) {
        // 0x800966F0: subu        $s4, $v1, $a0
        ctx->r20 = SUB32(ctx->r3, ctx->r4);
            goto L_800968E4;
    }
    // 0x800966F0: subu        $s4, $v1, $a0
    ctx->r20 = SUB32(ctx->r3, ctx->r4);
    // 0x800966F4: blez        $s4, L_80096760
    if (SIGNED(ctx->r20) <= 0) {
        // 0x800966F8: sll         $s0, $s4, 1
        ctx->r16 = S32(ctx->r20 << 1);
            goto L_80096760;
    }
    // 0x800966F8: sll         $s0, $s4, 1
    ctx->r16 = S32(ctx->r20 << 1);
    // 0x800966FC: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x80096700: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    // 0x80096704: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x80096708: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8009670C: jalr        $v0
    // 0x80096710: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80096710: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    after_0:
    // 0x80096714: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80096718: andi        $a2, $a3, 0x7
    ctx->r6 = ctx->r7 & 0X7;
    // 0x8009671C: addu        $s0, $s0, $a2
    ctx->r16 = ADD32(ctx->r16, ctx->r6);
    // 0x80096720: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80096724: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x80096728: lhu         $v1, 0x0($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X0);
    // 0x8009672C: andi        $v0, $s0, 0x7
    ctx->r2 = ctx->r16 & 0X7;
    // 0x80096730: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80096734: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x80096738: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8009673C: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x80096740: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80096744: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80096748: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8009674C: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x80096750: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80096754: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80096758: j           L_80096764
    // 0x8009675C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
        goto L_80096764;
    // 0x8009675C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_80096760:
    // 0x80096760: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80096764:
    // 0x80096764: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x80096768: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8009676C: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x80096770: lw          $v1, 0x28($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X28);
    // 0x80096774: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80096778: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x8009677C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80096780: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80096784: sw          $a0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r4;
    // 0x80096788: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8009678C: sw          $v1, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r3;
    // 0x80096790: lh          $s5, 0x0($s5)
    ctx->r21 = MEM_H(ctx->r21, 0X0);
    // 0x80096794: slt         $v0, $s4, $s6
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80096798: beq         $v0, $zero, L_800968C0
    if (ctx->r2 == 0) {
        // 0x8009679C: addiu       $s1, $s3, -0x4
        ctx->r17 = ADD32(ctx->r19, -0X4);
            goto L_800968C0;
    }
    // 0x8009679C: addiu       $s1, $s3, -0x4
    ctx->r17 = ADD32(ctx->r19, -0X4);
    // 0x800967A0: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
L_800967A4:
    // 0x800967A4: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x800967A8: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x800967AC: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
    // 0x800967B0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x800967B4: sltu        $v1, $zero, $a0
    ctx->r3 = 0 < ctx->r4 ? 1 : 0;
    // 0x800967B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800967BC: beq         $v0, $zero, L_800967CC
    if (ctx->r2 == 0) {
        // 0x800967C0: subu        $s6, $s6, $s4
        ctx->r22 = SUB32(ctx->r22, ctx->r20);
            goto L_800967CC;
    }
    // 0x800967C0: subu        $s6, $s6, $s4
    ctx->r22 = SUB32(ctx->r22, ctx->r20);
    // 0x800967C4: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x800967C8: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
L_800967CC:
    // 0x800967CC: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x800967D0: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x800967D4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x800967D8: sltu        $v0, $s6, $v1
    ctx->r2 = ctx->r22 < ctx->r3 ? 1 : 0;
    // 0x800967DC: bne         $v0, $zero, L_800967E8
    if (ctx->r2 != 0) {
        // 0x800967E0: addu        $s4, $s6, $zero
        ctx->r20 = ADD32(ctx->r22, 0);
            goto L_800967E8;
    }
    // 0x800967E0: addu        $s4, $s6, $zero
    ctx->r20 = ADD32(ctx->r22, 0);
    // 0x800967E4: addu        $s4, $v1, $zero
    ctx->r20 = ADD32(ctx->r3, 0);
L_800967E8:
    // 0x800967E8: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x800967EC: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    // 0x800967F0: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x800967F4: sll         $s0, $s4, 1
    ctx->r16 = S32(ctx->r20 << 1);
    // 0x800967F8: jalr        $v0
    // 0x800967FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x800967FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80096800: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80096804: andi        $a2, $a3, 0x7
    ctx->r6 = ctx->r7 & 0X7;
    // 0x80096808: andi        $v1, $s5, 0x7
    ctx->r3 = ctx->r21 & 0X7;
    // 0x8009680C: beq         $v1, $zero, L_80096820
    if (ctx->r3 == 0) {
        // 0x80096810: addu        $s0, $s0, $a2
        ctx->r16 = ADD32(ctx->r16, ctx->r6);
            goto L_80096820;
    }
    // 0x80096810: addu        $s0, $s0, $a2
    ctx->r16 = ADD32(ctx->r16, ctx->r6);
    // 0x80096814: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80096818: j           L_80096824
    // 0x8009681C: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
        goto L_80096824;
    // 0x8009681C: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
L_80096820:
    // 0x80096820: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80096824:
    // 0x80096824: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80096828: addu        $v0, $s5, $a0
    ctx->r2 = ADD32(ctx->r21, ctx->r4);
    // 0x8009682C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80096830: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80096834: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80096838: sw          $v0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r2;
    // 0x8009683C: andi        $v0, $s0, 0x7
    ctx->r2 = ctx->r16 & 0X7;
    // 0x80096840: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80096844: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x80096848: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8009684C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80096850: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80096854: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80096858: sw          $v0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r2;
    // 0x8009685C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80096860: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80096864: sltu        $v0, $zero, $a2
    ctx->r2 = 0 < ctx->r6 ? 1 : 0;
    // 0x80096868: sltu        $v1, $zero, $a0
    ctx->r3 = 0 < ctx->r4 ? 1 : 0;
    // 0x8009686C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80096870: beq         $v0, $zero, L_800968B4
    if (ctx->r2 == 0) {
        // 0x80096874: addiu       $s3, $s3, 0x10
        ctx->r19 = ADD32(ctx->r19, 0X10);
            goto L_800968B4;
    }
    // 0x80096874: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x80096878: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8009687C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x80096880: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80096884: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80096888: addu        $v0, $s5, $a2
    ctx->r2 = ADD32(ctx->r21, ctx->r6);
    // 0x8009688C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80096890: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80096894: lui         $v1, 0xA00
    ctx->r3 = S32(0XA00 << 16);
    // 0x80096898: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8009689C: sll         $v1, $s5, 16
    ctx->r3 = S32(ctx->r21 << 16);
    // 0x800968A0: sw          $v0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r2;
    // 0x800968A4: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x800968A8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x800968AC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800968B0: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
L_800968B4:
    // 0x800968B4: slt         $v0, $s4, $s6
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x800968B8: bne         $v0, $zero, L_800967A4
    if (ctx->r2 != 0) {
        // 0x800968BC: sll         $v0, $s4, 1
        ctx->r2 = S32(ctx->r20 << 1);
            goto L_800967A4;
    }
    // 0x800968BC: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
L_800968C0:
    // 0x800968C0: lw          $v1, 0x38($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X38);
    // 0x800968C4: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x800968C8: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x800968CC: addu        $v1, $v1, $s6
    ctx->r3 = ADD32(ctx->r3, ctx->r22);
    // 0x800968D0: sw          $v1, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r3;
    // 0x800968D4: sll         $v1, $s6, 1
    ctx->r3 = S32(ctx->r22 << 1);
    // 0x800968D8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x800968DC: j           L_80096A08
    // 0x800968E0: sw          $a0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r4;
        goto L_80096A08;
    // 0x800968E0: sw          $a0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r4;
L_800968E4:
    // 0x800968E4: lw          $v1, 0x28($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X28);
    // 0x800968E8: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x800968EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800968F0: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x800968F4: sll         $s0, $s6, 1
    ctx->r16 = S32(ctx->r22 << 1);
    // 0x800968F8: addu        $a1, $a0, $s0
    ctx->r5 = ADD32(ctx->r4, ctx->r16);
    // 0x800968FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80096900: subu        $s1, $a1, $v0
    ctx->r17 = SUB32(ctx->r5, ctx->r2);
    // 0x80096904: nor         $v0, $zero, $s1
    ctx->r2 = ~(0 | ctx->r17);
    // 0x80096908: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8009690C: and         $s1, $s1, $v0
    ctx->r17 = ctx->r17 & ctx->r2;
    // 0x80096910: slt         $v0, $s0, $s1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80096914: bnel        $v0, $zero, L_8009691C
    if (ctx->r2 != 0) {
        // 0x80096918: addu        $s1, $s0, $zero
        ctx->r17 = ADD32(ctx->r16, 0);
            goto L_8009691C;
    }
    goto skip_0;
    // 0x80096918: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    skip_0:
L_8009691C:
    // 0x8009691C: slt         $v0, $s1, $s0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80096920: beql        $v0, $zero, L_800969C0
    if (ctx->r2 == 0) {
        // 0x80096924: sw          $a1, 0x44($s2)
        MEM_W(0X44, ctx->r18) = ctx->r5;
            goto L_800969C0;
    }
    goto skip_1;
    // 0x80096924: sw          $a1, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r5;
    skip_1:
    // 0x80096928: blez        $s6, L_80096994
    if (SIGNED(ctx->r22) <= 0) {
        // 0x8009692C: subu        $s0, $s0, $s1
        ctx->r16 = SUB32(ctx->r16, ctx->r17);
            goto L_80096994;
    }
    // 0x8009692C: subu        $s0, $s0, $s1
    ctx->r16 = SUB32(ctx->r16, ctx->r17);
    // 0x80096930: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    // 0x80096934: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x80096938: jalr        $v0
    // 0x8009693C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8009693C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80096940: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80096944: andi        $a2, $a3, 0x7
    ctx->r6 = ctx->r7 & 0X7;
    // 0x80096948: addu        $s0, $s0, $a2
    ctx->r16 = ADD32(ctx->r16, ctx->r6);
    // 0x8009694C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80096950: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x80096954: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80096958: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x8009695C: lhu         $v1, 0x0($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X0);
    // 0x80096960: andi        $v0, $s0, 0x7
    ctx->r2 = ctx->r16 & 0X7;
    // 0x80096964: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80096968: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x8009696C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80096970: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80096974: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80096978: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8009697C: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80096980: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x80096984: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80096988: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8009698C: j           L_80096998
    // 0x80096990: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
        goto L_80096998;
    // 0x80096990: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
L_80096994:
    // 0x80096994: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80096998:
    // 0x80096998: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x8009699C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x800969A0: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x800969A4: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
    // 0x800969A8: lw          $v1, 0x44($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X44);
    // 0x800969AC: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x800969B0: sw          $v0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r2;
    // 0x800969B4: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x800969B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800969BC: sw          $v1, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r3;
L_800969C0:
    // 0x800969C0: beq         $s1, $zero, L_80096A04
    if (ctx->r17 == 0) {
        // 0x800969C4: sll         $v0, $s6, 1
        ctx->r2 = S32(ctx->r22 << 1);
            goto L_80096A04;
    }
    // 0x800969C4: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x800969C8: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x800969CC: nor         $v1, $zero, $v0
    ctx->r3 = ~(0 | ctx->r2);
    // 0x800969D0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x800969D4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x800969D8: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x800969DC: lh          $a0, 0x0($s5)
    ctx->r4 = MEM_H(ctx->r21, 0X0);
    // 0x800969E0: lui         $a1, 0xFF
    ctx->r5 = S32(0XFF << 16);
    // 0x800969E4: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x800969E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800969EC: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x800969F0: sw          $s1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r17;
    // 0x800969F4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800969F8: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x800969FC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80096A00: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_80096A04:
    // 0x80096A04: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
L_80096A08:
    // 0x80096A08: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80096A0C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80096A10: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80096A14: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80096A18: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80096A1C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80096A20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80096A24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80096A28: jr          $ra
    // 0x80096A2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80096A2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8005D524_38924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005D524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005D528: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005D52C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8005D530: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005D534: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x8005D538: beq         $v1, $zero, L_8005D550
    if (ctx->r3 == 0) {
        // 0x8005D53C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005D550;
    }
    // 0x8005D53C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005D540: beq         $v1, $v0, L_8005D5B0
    if (ctx->r3 == ctx->r2) {
        // 0x8005D544: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8005D5B0;
    }
    // 0x8005D544: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8005D548: j           L_8005D5D8
    // 0x8005D54C: nop

        goto L_8005D5D8;
    // 0x8005D54C: nop

L_8005D550:
    // 0x8005D550: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005D554: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005D558: bne         $v0, $zero, L_8005D5D8
    if (ctx->r2 != 0) {
        // 0x8005D55C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005D5D8;
    }
    // 0x8005D55C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005D560: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005D564: sh          $v0, -0x38AC($at)
    MEM_H(-0X38AC, ctx->r1) = ctx->r2;
    // 0x8005D568: jal         0x8004C500
    // 0x8005D56C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004C500_27900(rdram, ctx);
        goto after_0;
    // 0x8005D56C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8005D570: jal         0x80054578
    // 0x8005D574: nop

    func_80054578_2F978(rdram, ctx);
        goto after_1;
    // 0x8005D574: nop

    after_1:
    // 0x8005D578: jal         0x8003B7F4
    // 0x8005D57C: nop

    func_8003B7F4_16BF4(rdram, ctx);
        goto after_2;
    // 0x8005D57C: nop

    after_2:
    // 0x8005D580: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005D584: addiu       $a0, $a0, -0x137C
    ctx->r4 = ADD32(ctx->r4, -0X137C);
    // 0x8005D588: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005D58C: jal         0x80054FB8
    // 0x8005D590: addiu       $a1, $a1, -0x1388
    ctx->r5 = ADD32(ctx->r5, -0X1388);
    func_80054FB8_303B8(rdram, ctx);
        goto after_3;
    // 0x8005D590: addiu       $a1, $a1, -0x1388
    ctx->r5 = ADD32(ctx->r5, -0X1388);
    after_3:
    // 0x8005D594: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005D598: addiu       $v0, $v0, -0x13AC
    ctx->r2 = ADD32(ctx->r2, -0X13AC);
    // 0x8005D59C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005D5A0: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x8005D5A4: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8005D5A8: j           L_8005D5D4
    // 0x8005D5AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8005D5D4;
    // 0x8005D5AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8005D5B0:
    // 0x8005D5B0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005D5B4: sh          $zero, -0x38AC($at)
    MEM_H(-0X38AC, ctx->r1) = 0;
    // 0x8005D5B8: jal         0x8005F2CC
    // 0x8005D5BC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_8005F2CC_3A6CC(rdram, ctx);
        goto after_4;
    // 0x8005D5BC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_4:
    // 0x8005D5C0: jal         0x80036E48
    // 0x8005D5C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_5;
    // 0x8005D5C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x8005D5C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005D5CC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8005D5D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005D5D4:
    // 0x8005D5D4: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8005D5D8:
    // 0x8005D5D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005D5DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005D5E0: jr          $ra
    // 0x8005D5E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005D5E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800798B8_54CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800798B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800798BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800798C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800798C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800798C8: lhu         $v0, 0x3E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3E);
    // 0x800798CC: lhu         $v1, 0x3E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3E);
    // 0x800798D0: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    // 0x800798D4: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x800798D8: sh          $zero, 0x26($s0)
    MEM_H(0X26, ctx->r16) = 0;
    // 0x800798DC: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    // 0x800798E0: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    // 0x800798E4: sh          $zero, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = 0;
    // 0x800798E8: sh          $zero, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = 0;
    // 0x800798EC: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x800798F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800798F4: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x800798F8: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x800798FC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80079900: jal         0x800319B4
    // 0x80079904: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800319B4_CDB4(rdram, ctx);
        goto after_0;
    // 0x80079904: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_0:
    // 0x80079908: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x8007990C: lhu         $a1, 0x34($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X34);
    // 0x80079910: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x80079914: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80079918: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8007991C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80079920: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x80079924: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x80079928: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x8007992C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80079930: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80079934: lhu         $v0, -0x2EDC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2EDC);
    // 0x80079938: lhu         $v1, 0x3E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3E);
    // 0x8007993C: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x80079940: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80079944: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80079948: bltz        $a0, L_8007995C
    if (SIGNED(ctx->r4) < 0) {
        // 0x8007994C: sh          $v1, 0x3E($s0)
        MEM_H(0X3E, ctx->r16) = ctx->r3;
            goto L_8007995C;
    }
    // 0x8007994C: sh          $v1, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r3;
    // 0x80079950: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80079954: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80079958: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8007995C:
    // 0x8007995C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80079960: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80079964: jr          $ra
    // 0x80079968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80079968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800939C0_6EDC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800939C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800939C4: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x800939C8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800939CC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800939D0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x800939D4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800939D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800939DC: lbu         $v0, -0x3C39($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X3C39);
    // 0x800939E0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x800939E4: bne         $v0, $zero, L_80093A10
    if (ctx->r2 != 0) {
        // 0x800939E8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80093A10;
    }
    // 0x800939E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800939EC: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    // 0x800939F0: addiu       $v0, $sp, 0x10
    ctx->r2 = ADD32(ctx->r29, 0X10);
    // 0x800939F4: sb          $a0, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r4;
    // 0x800939F8: addiu       $a0, $zero, 0x302
    ctx->r4 = ADD32(0, 0X302);
    // 0x800939FC: sh          $a1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r5;
    // 0x80093A00: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80093A04: sh          $a2, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r6;
    // 0x80093A08: jal         0x80093C88
    // 0x80093A0C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_80093C88_6F088(rdram, ctx);
        goto after_0;
    // 0x80093A0C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_0:
L_80093A10:
    // 0x80093A10: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80093A14: jr          $ra
    // 0x80093A18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80093A18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80093A1C: nop

;}
RECOMP_FUNC void func_8003501C_1041C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003501C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80035020: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80035024: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80035028: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8003502C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80035030: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80035034: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80035038: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8003503C: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x80035040: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80035044: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80035048: addiu       $s0, $s0, 0x4348
    ctx->r16 = ADD32(ctx->r16, 0X4348);
    // 0x8003504C: addiu       $a0, $s0, 0x68
    ctx->r4 = ADD32(ctx->r16, 0X68);
    // 0x80035050: addiu       $a1, $s0, 0x48
    ctx->r5 = ADD32(ctx->r16, 0X48);
    // 0x80035054: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80035058: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003505C: sw          $v0, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r2;
    // 0x80035060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80035064: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035068: sb          $v0, 0x4349($at)
    MEM_B(0X4349, ctx->r1) = ctx->r2;
    // 0x8003506C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80035070: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80035074: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035078: sb          $zero, 0x4DFD($at)
    MEM_B(0X4DFD, ctx->r1) = 0;
    // 0x8003507C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035080: sb          $v0, 0x4352($at)
    MEM_B(0X4352, ctx->r1) = ctx->r2;
    // 0x80035084: jal         0x8009A3B4
    // 0x80035088: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80035088: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x8003508C: addiu       $a0, $s0, 0x88
    ctx->r4 = ADD32(ctx->r16, 0X88);
    // 0x80035090: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80035094: lw          $v1, 0x4354($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4354);
    // 0x80035098: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003509C: lw          $v0, 0x4358($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4358);
    // 0x800350A0: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x800350A4: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x800350A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800350AC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x800350B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800350B4: sw          $v1, 0x436C($at)
    MEM_W(0X436C, ctx->r1) = ctx->r3;
    // 0x800350B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800350BC: sw          $v0, 0x4370($at)
    MEM_W(0X4370, ctx->r1) = ctx->r2;
    // 0x800350C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800350C4: sw          $a3, 0x4374($at)
    MEM_W(0X4374, ctx->r1) = ctx->r7;
    // 0x800350C8: jal         0x8009A3B4
    // 0x800350CC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x800350CC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x800350D0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800350D4: lw          $a0, 0x4370($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4370);
    // 0x800350D8: andi        $s3, $s3, 0xFFF
    ctx->r19 = ctx->r19 & 0XFFF;
    // 0x800350DC: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x800350E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800350E4: sw          $s2, 0x4384($at)
    MEM_W(0X4384, ctx->r1) = ctx->r18;
    // 0x800350E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800350EC: sw          $s3, 0x4388($at)
    MEM_W(0X4388, ctx->r1) = ctx->r19;
    // 0x800350F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800350F4: sw          $s4, 0x438C($at)
    MEM_W(0X438C, ctx->r1) = ctx->r20;
    // 0x800350F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800350FC: sb          $v0, 0x4351($at)
    MEM_B(0X4351, ctx->r1) = ctx->r2;
    // 0x80035100: slt         $v0, $s3, $a0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80035104: beq         $v0, $zero, L_8003512C
    if (ctx->r2 == 0) {
        // 0x80035108: subu        $v1, $a0, $s3
        ctx->r3 = SUB32(ctx->r4, ctx->r19);
            goto L_8003512C;
    }
    // 0x80035108: subu        $v1, $a0, $s3
    ctx->r3 = SUB32(ctx->r4, ctx->r19);
    // 0x8003510C: addiu       $v0, $a0, -0x1000
    ctx->r2 = ADD32(ctx->r4, -0X1000);
    // 0x80035110: subu        $v0, $s3, $v0
    ctx->r2 = SUB32(ctx->r19, ctx->r2);
    // 0x80035114: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80035118: beq         $v0, $zero, L_8003514C
    if (ctx->r2 == 0) {
        // 0x8003511C: addiu       $v0, $s3, 0x1000
        ctx->r2 = ADD32(ctx->r19, 0X1000);
            goto L_8003514C;
    }
    // 0x8003511C: addiu       $v0, $s3, 0x1000
    ctx->r2 = ADD32(ctx->r19, 0X1000);
    // 0x80035120: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035124: j           L_8003514C
    // 0x80035128: sw          $v0, 0x4388($at)
    MEM_W(0X4388, ctx->r1) = ctx->r2;
        goto L_8003514C;
    // 0x80035128: sw          $v0, 0x4388($at)
    MEM_W(0X4388, ctx->r1) = ctx->r2;
L_8003512C:
    // 0x8003512C: subu        $v1, $s3, $a0
    ctx->r3 = SUB32(ctx->r19, ctx->r4);
    // 0x80035130: addiu       $v0, $s3, -0x1000
    ctx->r2 = ADD32(ctx->r19, -0X1000);
    // 0x80035134: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80035138: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003513C: beq         $v0, $zero, L_8003514C
    if (ctx->r2 == 0) {
        // 0x80035140: addiu       $v0, $a0, 0x1000
        ctx->r2 = ADD32(ctx->r4, 0X1000);
            goto L_8003514C;
    }
    // 0x80035140: addiu       $v0, $a0, 0x1000
    ctx->r2 = ADD32(ctx->r4, 0X1000);
    // 0x80035144: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035148: sw          $v0, 0x4370($at)
    MEM_W(0X4370, ctx->r1) = ctx->r2;
L_8003514C:
    // 0x8003514C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80035150: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80035154: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80035158: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8003515C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80035160: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80035164: jr          $ra
    // 0x80035168: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80035168: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80065F40_41340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80065F40: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80065F44: lhu         $v0, 0xC0($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0XC0);
    // 0x80065F48: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80065F4C: lbu         $a1, -0x11D0($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X11D0);
    // 0x80065F50: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80065F54: sh          $v1, 0xC0($a3)
    MEM_H(0XC0, ctx->r7) = ctx->r3;
    // 0x80065F58: lw          $v1, 0x6C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X6C);
    // 0x80065F5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80065F60: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80065F64: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x80065F68: sw          $v1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r3;
    // 0x80065F6C: lw          $v0, 0x6C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X6C);
    // 0x80065F70: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
    // 0x80065F74: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80065F78: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x80065F7C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80065F80: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80065F84: addiu       $v1, $v1, -0x196C
    ctx->r3 = ADD32(ctx->r3, -0X196C);
    // 0x80065F88: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x80065F8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80065F90: beq         $a1, $zero, L_80065FB0
    if (ctx->r5 == 0) {
        // 0x80065F94: addu        $a0, $a0, $v0
        ctx->r4 = ADD32(ctx->r4, ctx->r2);
            goto L_80065FB0;
    }
    // 0x80065F94: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80065F98: sll         $v1, $a1, 3
    ctx->r3 = S32(ctx->r5 << 3);
    // 0x80065F9C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80065FA0: addiu       $v0, $v0, 0x4EAC
    ctx->r2 = ADD32(ctx->r2, 0X4EAC);
    // 0x80065FA4: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x80065FA8: j           L_80065FBC
    // 0x80065FAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
        goto L_80065FBC;
    // 0x80065FAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_80065FB0:
    // 0x80065FB0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80065FB4: addiu       $v0, $v0, 0x4EA4
    ctx->r2 = ADD32(ctx->r2, 0X4EA4);
    // 0x80065FB8: addu        $v1, $a2, $v0
    ctx->r3 = ADD32(ctx->r6, ctx->r2);
L_80065FBC:
    // 0x80065FBC: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80065FC0: bne         $v0, $zero, L_80065FE8
    if (ctx->r2 != 0) {
        // 0x80065FC4: nop
    
            goto L_80065FE8;
    }
    // 0x80065FC4: nop

    // 0x80065FC8: lw          $v0, 0x6C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X6C);
    // 0x80065FCC: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x80065FD0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80065FD4: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80065FD8: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x80065FDC: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x80065FE0: j           L_80066034
    // 0x80065FE4: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
        goto L_80066034;
    // 0x80065FE4: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
L_80065FE8:
    // 0x80065FE8: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x80065FEC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80065FF0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80065FF4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80065FF8: bne         $v0, $zero, L_8006601C
    if (ctx->r2 != 0) {
        // 0x80065FFC: lui         $a0, 0xFFFD
        ctx->r4 = S32(0XFFFD << 16);
            goto L_8006601C;
    }
    // 0x80065FFC: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x80066000: lw          $v0, 0x6C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X6C);
    // 0x80066004: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80066008: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8006600C: lbu         $a1, 0x3($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3);
    // 0x80066010: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x80066014: j           L_80066034
    // 0x80066018: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
        goto L_80066034;
    // 0x80066018: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
L_8006601C:
    // 0x8006601C: lw          $v0, 0x6C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X6C);
    // 0x80066020: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80066024: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80066028: lbu         $a1, 0x4($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X4);
    // 0x8006602C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x80066030: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_80066034:
    // 0x80066034: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066038: sw          $v1, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r3;
    // 0x8006603C: lw          $a0, 0x44($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X44);
    // 0x80066040: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80066044: sh          $a1, 0xC2($a3)
    MEM_H(0XC2, ctx->r7) = ctx->r5;
    // 0x80066048: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8006604C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80066050: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80066054: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80066058: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8006605C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80066060: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80066064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80066068: jr          $ra
    // 0x8006606C: sw          $a0, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8006606C: sw          $a0, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->r4;
;}
RECOMP_FUNC void func_80077D90_53190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80077D90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80077D94: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80077D98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80077D9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80077DA0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80077DA4: bne         $v1, $zero, L_80077DF4
    if (ctx->r3 != 0) {
        // 0x80077DA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80077DF4;
    }
    // 0x80077DA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80077DAC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80077DB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80077DB4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80077DB8: jal         0x8004D5D4
    // 0x80077DBC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80077DBC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80077DC0: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80077DC4: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x80077DC8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80077DCC: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80077DD0: lw          $v1, 0x70($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X70);
    // 0x80077DD4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80077DD8: lw          $v1, 0x10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X10);
    // 0x80077DDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80077DE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80077DE4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80077DE8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80077DEC: j           L_80077E58
    // 0x80077DF0: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
        goto L_80077E58;
    // 0x80077DF0: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
L_80077DF4:
    // 0x80077DF4: bne         $v1, $v0, L_80077E50
    if (ctx->r3 != ctx->r2) {
        // 0x80077DF8: nop
    
            goto L_80077E50;
    }
    // 0x80077DF8: nop

    // 0x80077DFC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80077E00: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80077E04: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80077E08: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80077E0C: bne         $v0, $zero, L_80077E20
    if (ctx->r2 != 0) {
        // 0x80077E10: addiu       $a0, $s0, 0x18
        ctx->r4 = ADD32(ctx->r16, 0X18);
            goto L_80077E20;
    }
    // 0x80077E10: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x80077E14: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80077E18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80077E1C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80077E20:
    // 0x80077E20: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80077E24: addiu       $v0, $zero, 0x1115
    ctx->r2 = ADD32(0, 0X1115);
    // 0x80077E28: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80077E2C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80077E30: jal         0x80031DA8
    // 0x80077E34: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_1;
    // 0x80077E34: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x80077E38: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x80077E3C: lui         $v1, 0xFFF7
    ctx->r3 = S32(0XFFF7 << 16);
    // 0x80077E40: ori         $v1, $v1, 0xF7F8
    ctx->r3 = ctx->r3 | 0XF7F8;
    // 0x80077E44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80077E48: j           L_80077E58
    // 0x80077E4C: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
        goto L_80077E58;
    // 0x80077E4C: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
L_80077E50:
    // 0x80077E50: jal         0x8004F5C4
    // 0x80077E54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x80077E54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80077E58:
    // 0x80077E58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80077E5C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80077E60: jr          $ra
    // 0x80077E64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80077E64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80077E68: nop

    // 0x80077E6C: nop

;}
RECOMP_FUNC void func_800791A0_545A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800791A0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800791A4: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x800791A8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800791AC: lw          $v0, -0x4510($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4510);
    // 0x800791B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800791B4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800791B8: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x800791BC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800791C0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800791C4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800791C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800791CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800791D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800791D4: beq         $v0, $v1, L_800791E4
    if (ctx->r2 == ctx->r3) {
        // 0x800791D8: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800791E4;
    }
    // 0x800791D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800791DC: jal         0x80079FA8
    // 0x800791E0: nop

    func_80079FA8_553A8(rdram, ctx);
        goto after_0;
    // 0x800791E0: nop

    after_0:
L_800791E4:
    // 0x800791E4: lbu         $v0, 0x8($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X8);
    // 0x800791E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800791EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800791F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800791F4: lw          $v0, -0x2E00($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2E00);
    // 0x800791F8: jalr        $v0
    // 0x800791FC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x800791FC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_1:
    // 0x80079200: lbu         $v0, 0x3($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X3);
    // 0x80079204: beq         $v0, $zero, L_80079304
    if (ctx->r2 == 0) {
        // 0x80079208: nop
    
            goto L_80079304;
    }
    // 0x80079208: nop

    // 0x8007920C: lbu         $v0, 0x0($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X0);
    // 0x80079210: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80079214: beq         $v0, $zero, L_80079304
    if (ctx->r2 == 0) {
        // 0x80079218: nop
    
            goto L_80079304;
    }
    // 0x80079218: nop

    // 0x8007921C: lbu         $v0, 0x8($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X8);
    // 0x80079220: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80079224: beq         $v0, $zero, L_80079304
    if (ctx->r2 == 0) {
        // 0x80079228: addiu       $s6, $sp, 0x10
        ctx->r22 = ADD32(ctx->r29, 0X10);
            goto L_80079304;
    }
    // 0x80079228: addiu       $s6, $sp, 0x10
    ctx->r22 = ADD32(ctx->r29, 0X10);
    // 0x8007922C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80079230: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80079234: addiu       $a1, $a1, 0x2C28
    ctx->r5 = ADD32(ctx->r5, 0X2C28);
    // 0x80079238: jal         0x8009A3B4
    // 0x8007923C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8007923C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x80079240: lbu         $v0, 0x9($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X9);
    // 0x80079244: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80079248: sb          $v0, 0x9($s5)
    MEM_B(0X9, ctx->r21) = ctx->r2;
    // 0x8007924C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80079250: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x80079254: beql        $v0, $zero, L_8007925C
    if (ctx->r2 == 0) {
        // 0x80079258: sb          $zero, 0x9($s5)
        MEM_B(0X9, ctx->r21) = 0;
            goto L_8007925C;
    }
    goto skip_0;
    // 0x80079258: sb          $zero, 0x9($s5)
    MEM_B(0X9, ctx->r21) = 0;
    skip_0:
L_8007925C:
    // 0x8007925C: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x80079260: lhu         $s1, -0x2F70($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X2F70);
    // 0x80079264: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x80079268: lhu         $s2, -0x2F6E($s2)
    ctx->r18 = MEM_HU(ctx->r18, -0X2F6E);
    // 0x8007926C: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x80079270: lhu         $s3, -0x2F6C($s3)
    ctx->r19 = MEM_HU(ctx->r19, -0X2F6C);
    // 0x80079274: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x80079278: jal         0x8003B878
    // 0x8007927C: lhu         $s4, -0x2F6A($s4)
    ctx->r20 = MEM_HU(ctx->r20, -0X2F6A);
    func_8003B878_16C78(rdram, ctx);
        goto after_3;
    // 0x8007927C: lhu         $s4, -0x2F6A($s4)
    ctx->r20 = MEM_HU(ctx->r20, -0X2F6A);
    after_3:
    // 0x80079280: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80079284: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80079288: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8007928C: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x80079290: lw          $v0, 0x38($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X38);
    // 0x80079294: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x80079298: lw          $v1, 0x3C($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X3C);
    // 0x8007929C: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x800792A0: or          $s1, $s1, $v0
    ctx->r17 = ctx->r17 | ctx->r2;
    // 0x800792A4: lui         $v0, 0xE
    ctx->r2 = S32(0XE << 16);
    // 0x800792A8: or          $s2, $s2, $v0
    ctx->r18 = ctx->r18 | ctx->r2;
    // 0x800792AC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x800792B0: sw          $s1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r17;
    // 0x800792B4: sw          $s2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r18;
    // 0x800792B8: sw          $s3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r19;
    // 0x800792BC: sw          $s4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r20;
    // 0x800792C0: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x800792C4: jal         0x800A3450
    // 0x800792C8: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x800792C8: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    after_4:
    // 0x800792CC: lbu         $v1, 0x9($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X9);
    // 0x800792D0: lbu         $a1, 0xA($s5)
    ctx->r5 = MEM_BU(ctx->r21, 0XA);
    // 0x800792D4: addu        $v1, $s6, $v1
    ctx->r3 = ADD32(ctx->r22, ctx->r3);
    // 0x800792D8: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x800792DC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800792E0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x800792E4: lbu         $v1, -0x2F50($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2F50);
    // 0x800792E8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x800792EC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x800792F0: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800792F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800792F8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x800792FC: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80079300: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_80079304:
    // 0x80079304: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80079308: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8007930C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80079310: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80079314: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80079318: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007931C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80079320: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80079324: jr          $ra
    // 0x80079328: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80079328: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80044ECC_202CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80044ECC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80044ED0: lh          $v0, -0x35BA($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35BA);
    // 0x80044ED4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80044ED8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80044EDC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80044EE0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80044EE4: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x80044EE8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80044EEC: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80044EF0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80044EF4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80044EF8: bltz        $v0, L_80044F0C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80044EFC: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80044F0C;
    }
    // 0x80044EFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80044F00: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80044F04: j           L_80044F14
    // 0x80044F08: lhu         $v0, -0x3FAC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAC);
        goto L_80044F14;
    // 0x80044F08: lhu         $v0, -0x3FAC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAC);
L_80044F0C:
    // 0x80044F0C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80044F10: lhu         $v0, -0x72D0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72D0);
L_80044F14:
    // 0x80044F14: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80044F18: lhu         $v1, -0x7158($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7158);
    // 0x80044F1C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80044F20: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80044F24: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80044F28: lh          $v0, -0x35B6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B6);
    // 0x80044F2C: bltz        $v0, L_80044F40
    if (SIGNED(ctx->r2) < 0) {
        // 0x80044F30: nop
    
            goto L_80044F40;
    }
    // 0x80044F30: nop

    // 0x80044F34: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80044F38: j           L_80044F48
    // 0x80044F3C: lhu         $v0, -0x3FA8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FA8);
        goto L_80044F48;
    // 0x80044F3C: lhu         $v0, -0x3FA8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FA8);
L_80044F40:
    // 0x80044F40: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80044F44: lhu         $v0, -0x72CC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72CC);
L_80044F48:
    // 0x80044F48: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80044F4C: lhu         $v1, -0x7154($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7154);
    // 0x80044F50: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80044F54: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80044F58: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80044F5C: lh          $v0, -0x35B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B8);
    // 0x80044F60: bgez        $v0, L_80044F70
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80044F64: andi        $v0, $s3, 0x2
        ctx->r2 = ctx->r19 & 0X2;
            goto L_80044F70;
    }
    // 0x80044F64: andi        $v0, $s3, 0x2
    ctx->r2 = ctx->r19 & 0X2;
    // 0x80044F68: beq         $v0, $zero, L_80044F7C
    if (ctx->r2 == 0) {
        // 0x80044F6C: nop
    
            goto L_80044F7C;
    }
    // 0x80044F6C: nop

L_80044F70:
    // 0x80044F70: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80044F74: j           L_80044F84
    // 0x80044F78: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
        goto L_80044F84;
    // 0x80044F78: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
L_80044F7C:
    // 0x80044F7C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80044F80: lhu         $v0, -0x72CE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72CE);
L_80044F84:
    // 0x80044F84: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80044F88: lhu         $v1, -0x7156($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7156);
    // 0x80044F8C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80044F90: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80044F94: andi        $v0, $s3, 0x10
    ctx->r2 = ctx->r19 & 0X10;
    // 0x80044F98: beq         $v0, $zero, L_80044FB0
    if (ctx->r2 == 0) {
        // 0x80044F9C: nop
    
            goto L_80044FB0;
    }
    // 0x80044F9C: nop

    // 0x80044FA0: jal         0x800462AC
    // 0x80044FA4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_800462AC_216AC(rdram, ctx);
        goto after_0;
    // 0x80044FA4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x80044FA8: j           L_80044FBC
    // 0x80044FAC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
        goto L_80044FBC;
    // 0x80044FAC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_80044FB0:
    // 0x80044FB0: jal         0x800460D8
    // 0x80044FB4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_800460D8_214D8(rdram, ctx);
        goto after_1;
    // 0x80044FB4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x80044FB8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_80044FBC:
    // 0x80044FBC: andi        $v0, $s3, 0x20
    ctx->r2 = ctx->r19 & 0X20;
    // 0x80044FC0: beq         $v0, $zero, L_80044FD8
    if (ctx->r2 == 0) {
        // 0x80044FC4: nop
    
            goto L_80044FD8;
    }
    // 0x80044FC4: nop

    // 0x80044FC8: jal         0x80046308
    // 0x80044FCC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80046308_21708(rdram, ctx);
        goto after_2;
    // 0x80044FCC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x80044FD0: j           L_80044FE4
    // 0x80044FD4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
        goto L_80044FE4;
    // 0x80044FD4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_80044FD8:
    // 0x80044FD8: jal         0x80046174
    // 0x80044FDC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80046174_21574(rdram, ctx);
        goto after_3;
    // 0x80044FDC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x80044FE0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_80044FE4:
    // 0x80044FE4: andi        $v0, $s3, 0x40
    ctx->r2 = ctx->r19 & 0X40;
    // 0x80044FE8: beq         $v0, $zero, L_80045000
    if (ctx->r2 == 0) {
        // 0x80044FEC: nop
    
            goto L_80045000;
    }
    // 0x80044FEC: nop

    // 0x80044FF0: jal         0x800463C0
    // 0x80044FF4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_800463C0_217C0(rdram, ctx);
        goto after_4;
    // 0x80044FF4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x80044FF8: j           L_8004500C
    // 0x80044FFC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
        goto L_8004500C;
    // 0x80044FFC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_80045000:
    // 0x80045000: jal         0x80046210
    // 0x80045004: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80046210_21610(rdram, ctx);
        goto after_5;
    // 0x80045004: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_5:
    // 0x80045008: and         $a0, $v0, $s3
    ctx->r4 = ctx->r2 & ctx->r19;
L_8004500C:
    // 0x8004500C: sltiu       $v0, $s2, 0x1
    ctx->r2 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x80045010: sltiu       $v1, $s0, 0x1
    ctx->r3 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80045014: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80045018: beq         $v0, $zero, L_8004503C
    if (ctx->r2 == 0) {
        // 0x8004501C: nop
    
            goto L_8004503C;
    }
    // 0x8004501C: nop

    // 0x80045020: bne         $a0, $zero, L_80045114
    if (ctx->r4 != 0) {
        // 0x80045024: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80045114;
    }
    // 0x80045024: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80045028: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8004502C: jal         0x80045D48
    // 0x80045030: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_80045D48_21148(rdram, ctx);
        goto after_6;
    // 0x80045030: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_6:
    // 0x80045034: j           L_800452B8
    // 0x80045038: nop

        goto L_800452B8;
    // 0x80045038: nop

L_8004503C:
    // 0x8004503C: bne         $s2, $zero, L_800450A8
    if (ctx->r18 != 0) {
        // 0x80045040: nop
    
            goto L_800450A8;
    }
    // 0x80045040: nop

    // 0x80045044: beq         $a0, $zero, L_80045088
    if (ctx->r4 == 0) {
        // 0x80045048: nop
    
            goto L_80045088;
    }
    // 0x80045048: nop

    // 0x8004504C: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x80045050: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80045054: bgez        $v0, L_80045060
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80045058: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80045060;
    }
    // 0x80045058: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8004505C: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_80045060:
    // 0x80045060: bltz        $v1, L_80045078
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045064: slt         $v0, $v1, $a0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80045078;
    }
    // 0x80045064: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80045068: beq         $v0, $zero, L_80045114
    if (ctx->r2 == 0) {
        // 0x8004506C: nop
    
            goto L_80045114;
    }
    // 0x8004506C: nop

    // 0x80045070: j           L_80045088
    // 0x80045074: nop

        goto L_80045088;
    // 0x80045074: nop

L_80045078:
    // 0x80045078: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x8004507C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80045080: beq         $v0, $zero, L_80045114
    if (ctx->r2 == 0) {
        // 0x80045084: nop
    
            goto L_80045114;
    }
    // 0x80045084: nop

L_80045088:
    // 0x80045088: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8004508C: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x80045090: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045094: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80045098: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x8004509C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x800450A0: j           L_800452A8
    // 0x800450A4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_800452A8;
    // 0x800450A4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_800450A8:
    // 0x800450A8: bne         $s0, $zero, L_80045144
    if (ctx->r16 != 0) {
        // 0x800450AC: nop
    
            goto L_80045144;
    }
    // 0x800450AC: nop

    // 0x800450B0: beq         $a0, $zero, L_800450F4
    if (ctx->r4 == 0) {
        // 0x800450B4: nop
    
            goto L_800450F4;
    }
    // 0x800450B4: nop

    // 0x800450B8: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x800450BC: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x800450C0: bgez        $v0, L_800450CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800450C4: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_800450CC;
    }
    // 0x800450C4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x800450C8: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_800450CC:
    // 0x800450CC: bltz        $v1, L_800450E4
    if (SIGNED(ctx->r3) < 0) {
        // 0x800450D0: slt         $v0, $v1, $a0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_800450E4;
    }
    // 0x800450D0: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800450D4: beq         $v0, $zero, L_80045114
    if (ctx->r2 == 0) {
        // 0x800450D8: nop
    
            goto L_80045114;
    }
    // 0x800450D8: nop

    // 0x800450DC: j           L_800450F4
    // 0x800450E0: nop

        goto L_800450F4;
    // 0x800450E0: nop

L_800450E4:
    // 0x800450E4: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x800450E8: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800450EC: beq         $v0, $zero, L_80045114
    if (ctx->r2 == 0) {
        // 0x800450F0: nop
    
            goto L_80045114;
    }
    // 0x800450F0: nop

L_800450F4:
    // 0x800450F4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x800450F8: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x800450FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045100: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80045104: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80045108: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8004510C: j           L_80045270
    // 0x80045110: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_80045270;
    // 0x80045110: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_80045114:
    // 0x80045114: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80045118: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8004511C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045120: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80045124: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x80045128: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8004512C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80045130: sh          $v0, -0x26B8($at)
    MEM_H(-0X26B8, ctx->r1) = ctx->r2;
    // 0x80045134: jal         0x8004643C
    // 0x80045138: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8004643C_2183C(rdram, ctx);
        goto after_7;
    // 0x80045138: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_7:
    // 0x8004513C: j           L_800452B8
    // 0x80045140: nop

        goto L_800452B8;
    // 0x80045140: nop

L_80045144:
    // 0x80045144: beq         $a0, $zero, L_80045210
    if (ctx->r4 == 0) {
        // 0x80045148: nop
    
            goto L_80045210;
    }
    // 0x80045148: nop

    // 0x8004514C: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x80045150: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80045154: lh          $a0, 0x14($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X14);
    // 0x80045158: bgez        $v0, L_80045164
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004515C: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_80045164;
    }
    // 0x8004515C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80045160: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
L_80045164:
    // 0x80045164: bltzl       $v1, L_8004516C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045168: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_8004516C;
    }
    goto skip_0;
    // 0x80045168: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_0:
L_8004516C:
    // 0x8004516C: bltz        $a0, L_80045184
    if (SIGNED(ctx->r4) < 0) {
        // 0x80045170: slt         $v0, $v1, $a0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80045184;
    }
    // 0x80045170: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80045174: beq         $v0, $zero, L_800451A8
    if (ctx->r2 == 0) {
        // 0x80045178: nop
    
            goto L_800451A8;
    }
    // 0x80045178: nop

    // 0x8004517C: j           L_80045194
    // 0x80045180: nop

        goto L_80045194;
    // 0x80045180: nop

L_80045184:
    // 0x80045184: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x80045188: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004518C: beq         $v0, $zero, L_800451A8
    if (ctx->r2 == 0) {
        // 0x80045190: nop
    
            goto L_800451A8;
    }
    // 0x80045190: nop

L_80045194:
    // 0x80045194: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x80045198: bltzl       $v0, L_800451B4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004519C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_800451B4;
    }
    goto skip_1;
    // 0x8004519C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x800451A0: j           L_800451B8
    // 0x800451A4: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
        goto L_800451B8;
    // 0x800451A4: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
L_800451A8:
    // 0x800451A8: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x800451AC: bltzl       $v0, L_800451C8
    if (SIGNED(ctx->r2) < 0) {
        // 0x800451B0: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_800451C8;
    }
    goto skip_2;
    // 0x800451B0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_800451B4:
    // 0x800451B4: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
L_800451B8:
    // 0x800451B8: beq         $v0, $zero, L_80045210
    if (ctx->r2 == 0) {
        // 0x800451BC: nop
    
            goto L_80045210;
    }
    // 0x800451BC: nop

    // 0x800451C0: j           L_800451D4
    // 0x800451C4: nop

        goto L_800451D4;
    // 0x800451C4: nop

L_800451C8:
    // 0x800451C8: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800451CC: beq         $v0, $zero, L_80045210
    if (ctx->r2 == 0) {
        // 0x800451D0: nop
    
            goto L_80045210;
    }
    // 0x800451D0: nop

L_800451D4:
    // 0x800451D4: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x800451D8: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x800451DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800451E0: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x800451E4: andi        $v0, $s3, 0x2
    ctx->r2 = ctx->r19 & 0X2;
    // 0x800451E8: bne         $v0, $zero, L_80045200
    if (ctx->r2 != 0) {
        // 0x800451EC: nop
    
            goto L_80045200;
    }
    // 0x800451EC: nop

    // 0x800451F0: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x800451F4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800451F8: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800451FC: sh          $v0, -0x26B8($at)
    MEM_H(-0X26B8, ctx->r1) = ctx->r2;
L_80045200:
    // 0x80045200: jal         0x8004643C
    // 0x80045204: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8004643C_2183C(rdram, ctx);
        goto after_8;
    // 0x80045204: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_8:
    // 0x80045208: j           L_800452B8
    // 0x8004520C: nop

        goto L_800452B8;
    // 0x8004520C: nop

L_80045210:
    // 0x80045210: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x80045214: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80045218: bgez        $v0, L_80045224
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004521C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80045224;
    }
    // 0x8004521C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80045220: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_80045224:
    // 0x80045224: bltz        $v1, L_8004523C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045228: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8004523C;
    }
    // 0x80045228: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004522C: beq         $v0, $zero, L_80045284
    if (ctx->r2 == 0) {
        // 0x80045230: nop
    
            goto L_80045284;
    }
    // 0x80045230: nop

    // 0x80045234: j           L_8004524C
    // 0x80045238: nop

        goto L_8004524C;
    // 0x80045238: nop

L_8004523C:
    // 0x8004523C: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x80045240: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80045244: beq         $v0, $zero, L_80045284
    if (ctx->r2 == 0) {
        // 0x80045248: nop
    
            goto L_80045284;
    }
    // 0x80045248: nop

L_8004524C:
    // 0x8004524C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80045250: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80045254: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045258: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8004525C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80045260: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80045264: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80045268: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004526C: sh          $v0, -0x72DC($at)
    MEM_H(-0X72DC, ctx->r1) = ctx->r2;
L_80045270:
    // 0x80045270: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80045274: jal         0x800463CC
    // 0x80045278: sh          $v0, -0x2680($at)
    MEM_H(-0X2680, ctx->r1) = ctx->r2;
    func_800463CC_217CC(rdram, ctx);
        goto after_9;
    // 0x80045278: sh          $v0, -0x2680($at)
    MEM_H(-0X2680, ctx->r1) = ctx->r2;
    after_9:
    // 0x8004527C: j           L_800452B8
    // 0x80045280: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800452B8;
    // 0x80045280: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80045284:
    // 0x80045284: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80045288: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8004528C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045290: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80045294: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x80045298: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8004529C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800452A0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800452A4: sh          $v0, -0x6F98($at)
    MEM_H(-0X6F98, ctx->r1) = ctx->r2;
L_800452A8:
    // 0x800452A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800452AC: jal         0x80046404
    // 0x800452B0: sh          $v0, 0x784C($at)
    MEM_H(0X784C, ctx->r1) = ctx->r2;
    func_80046404_21804(rdram, ctx);
        goto after_10;
    // 0x800452B0: sh          $v0, 0x784C($at)
    MEM_H(0X784C, ctx->r1) = ctx->r2;
    after_10:
    // 0x800452B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800452B8:
    // 0x800452B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800452BC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800452C0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800452C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800452C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800452CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800452D0: jr          $ra
    // 0x800452D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800452D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80069F58_45358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80069F58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80069F5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80069F60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80069F64: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80069F68: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80069F6C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80069F70: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80069F74: beq         $v0, $zero, L_8006A4C8
    if (ctx->r2 == 0) {
        // 0x80069F78: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8006A4C8;
    }
    // 0x80069F78: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80069F7C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80069F80: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80069F84: addu        $at, $at, $v0
    gpr jr_addend_80069F8C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80069F88: lw          $v0, 0x27F0($at)
    ctx->r2 = ADD32(ctx->r1, 0X27F0);
    // 0x80069F8C: jr          $v0
    // 0x80069F90: nop

    switch (jr_addend_80069F8C >> 2) {
        case 0: goto L_80069F94; break;
        case 1: goto L_8006A170; break;
        case 2: goto L_8006A190; break;
        case 3: goto L_8006A250; break;
        case 4: goto L_8006A274; break;
        case 5: goto L_8006A344; break;
        case 6: goto L_8006A488; break;
        default: switch_error(__func__, 0x80069F8C, 0x800D27F0);
    }
    // 0x80069F90: nop

L_80069F94:
    // 0x80069F94: lb          $v1, 0x112($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X112);
    // 0x80069F98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80069F9C: beq         $v1, $a0, L_8006A014
    if (ctx->r3 == ctx->r4) {
        // 0x80069FA0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8006A014;
    }
    // 0x80069FA0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80069FA4: beq         $v0, $zero, L_80069FBC
    if (ctx->r2 == 0) {
        // 0x80069FA8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80069FBC;
    }
    // 0x80069FA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80069FAC: beq         $v1, $zero, L_80069FD4
    if (ctx->r3 == 0) {
        // 0x80069FB0: nop
    
            goto L_80069FD4;
    }
    // 0x80069FB0: nop

    // 0x80069FB4: j           L_8006A0D0
    // 0x80069FB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8006A0D0;
    // 0x80069FB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80069FBC:
    // 0x80069FBC: beq         $v1, $a1, L_8006A054
    if (ctx->r3 == ctx->r5) {
        // 0x80069FC0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8006A054;
    }
    // 0x80069FC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80069FC4: beq         $v1, $v0, L_8006A090
    if (ctx->r3 == ctx->r2) {
        // 0x80069FC8: addiu       $v0, $zero, -0x400
        ctx->r2 = ADD32(0, -0X400);
            goto L_8006A090;
    }
    // 0x80069FC8: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x80069FCC: j           L_8006A0D0
    // 0x80069FD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8006A0D0;
    // 0x80069FD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80069FD4:
    // 0x80069FD4: lb          $v1, 0x113($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X113);
    // 0x80069FD8: beq         $v1, $a0, L_8006A088
    if (ctx->r3 == ctx->r4) {
        // 0x80069FDC: sh          $zero, 0x116($s0)
        MEM_H(0X116, ctx->r16) = 0;
            goto L_8006A088;
    }
    // 0x80069FDC: sh          $zero, 0x116($s0)
    MEM_H(0X116, ctx->r16) = 0;
    // 0x80069FE0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80069FE4: beql        $v0, $zero, L_80069FFC
    if (ctx->r2 == 0) {
        // 0x80069FE8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80069FFC;
    }
    goto skip_0;
    // 0x80069FE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80069FEC: beql        $v1, $zero, L_8006A0CC
    if (ctx->r3 == 0) {
        // 0x80069FF0: addiu       $s1, $zero, 0x4
        ctx->r17 = ADD32(0, 0X4);
            goto L_8006A0CC;
    }
    goto skip_1;
    // 0x80069FF0: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    skip_1:
    // 0x80069FF4: j           L_8006A0D0
    // 0x80069FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8006A0D0;
    // 0x80069FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80069FFC:
    // 0x80069FFC: beq         $v1, $v0, L_8006A04C
    if (ctx->r3 == ctx->r2) {
        // 0x8006A000: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8006A04C;
    }
    // 0x8006A000: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8006A004: beql        $v1, $v0, L_8006A0C4
    if (ctx->r3 == ctx->r2) {
        // 0x8006A008: addiu       $s1, $zero, 0x7
        ctx->r17 = ADD32(0, 0X7);
            goto L_8006A0C4;
    }
    goto skip_2;
    // 0x8006A008: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
    skip_2:
    // 0x8006A00C: j           L_8006A0D0
    // 0x8006A010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8006A0D0;
    // 0x8006A010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8006A014:
    // 0x8006A014: lb          $v1, 0x113($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X113);
    // 0x8006A018: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8006A01C: sh          $v0, 0x116($s0)
    MEM_H(0X116, ctx->r16) = ctx->r2;
    // 0x8006A020: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006A024: beq         $v1, $v0, L_8006A088
    if (ctx->r3 == ctx->r2) {
        // 0x8006A028: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_8006A088;
    }
    // 0x8006A028: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8006A02C: beql        $v0, $zero, L_8006A044
    if (ctx->r2 == 0) {
        // 0x8006A030: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8006A044;
    }
    goto skip_3;
    // 0x8006A030: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_3:
    // 0x8006A034: beql        $v1, $zero, L_8006A0C4
    if (ctx->r3 == 0) {
        // 0x8006A038: addiu       $s1, $zero, 0x7
        ctx->r17 = ADD32(0, 0X7);
            goto L_8006A0C4;
    }
    goto skip_4;
    // 0x8006A038: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
    skip_4:
    // 0x8006A03C: j           L_8006A0C4
    // 0x8006A040: nop

        goto L_8006A0C4;
    // 0x8006A040: nop

L_8006A044:
    // 0x8006A044: bne         $v1, $v0, L_8006A0C4
    if (ctx->r3 != ctx->r2) {
        // 0x8006A048: nop
    
            goto L_8006A0C4;
    }
    // 0x8006A048: nop

L_8006A04C:
    // 0x8006A04C: j           L_8006A0C4
    // 0x8006A050: addiu       $s1, $zero, 0x9
    ctx->r17 = ADD32(0, 0X9);
        goto L_8006A0C4;
    // 0x8006A050: addiu       $s1, $zero, 0x9
    ctx->r17 = ADD32(0, 0X9);
L_8006A054:
    // 0x8006A054: lb          $v1, 0x113($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X113);
    // 0x8006A058: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8006A05C: beq         $v1, $a0, L_8006A0C0
    if (ctx->r3 == ctx->r4) {
        // 0x8006A060: sh          $v0, 0x116($s0)
        MEM_H(0X116, ctx->r16) = ctx->r2;
            goto L_8006A0C0;
    }
    // 0x8006A060: sh          $v0, 0x116($s0)
    MEM_H(0X116, ctx->r16) = ctx->r2;
    // 0x8006A064: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8006A068: beql        $v0, $zero, L_8006A080
    if (ctx->r2 == 0) {
        // 0x8006A06C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8006A080;
    }
    goto skip_5;
    // 0x8006A06C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_5:
    // 0x8006A070: beql        $v1, $zero, L_8006A0C4
    if (ctx->r3 == 0) {
        // 0x8006A074: addiu       $s1, $zero, 0x9
        ctx->r17 = ADD32(0, 0X9);
            goto L_8006A0C4;
    }
    goto skip_6;
    // 0x8006A074: addiu       $s1, $zero, 0x9
    ctx->r17 = ADD32(0, 0X9);
    skip_6:
    // 0x8006A078: j           L_8006A0C4
    // 0x8006A07C: nop

        goto L_8006A0C4;
    // 0x8006A07C: nop

L_8006A080:
    // 0x8006A080: bne         $v1, $v0, L_8006A0C4
    if (ctx->r3 != ctx->r2) {
        // 0x8006A084: nop
    
            goto L_8006A0C4;
    }
    // 0x8006A084: nop

L_8006A088:
    // 0x8006A088: j           L_8006A0C4
    // 0x8006A08C: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
        goto L_8006A0C4;
    // 0x8006A08C: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
L_8006A090:
    // 0x8006A090: lb          $v1, 0x113($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X113);
    // 0x8006A094: beq         $v1, $a0, L_8006A04C
    if (ctx->r3 == ctx->r4) {
        // 0x8006A098: sh          $v0, 0x116($s0)
        MEM_H(0X116, ctx->r16) = ctx->r2;
            goto L_8006A04C;
    }
    // 0x8006A098: sh          $v0, 0x116($s0)
    MEM_H(0X116, ctx->r16) = ctx->r2;
    // 0x8006A09C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8006A0A0: beq         $v0, $zero, L_8006A0B8
    if (ctx->r2 == 0) {
        // 0x8006A0A4: nop
    
            goto L_8006A0B8;
    }
    // 0x8006A0A4: nop

    // 0x8006A0A8: beql        $v1, $zero, L_8006A0C4
    if (ctx->r3 == 0) {
        // 0x8006A0AC: addiu       $s1, $zero, 0x5
        ctx->r17 = ADD32(0, 0X5);
            goto L_8006A0C4;
    }
    goto skip_7;
    // 0x8006A0AC: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
    skip_7:
    // 0x8006A0B0: j           L_8006A0C4
    // 0x8006A0B4: nop

        goto L_8006A0C4;
    // 0x8006A0B4: nop

L_8006A0B8:
    // 0x8006A0B8: bne         $v1, $a1, L_8006A0C4
    if (ctx->r3 != ctx->r5) {
        // 0x8006A0BC: nop
    
            goto L_8006A0C4;
    }
    // 0x8006A0BC: nop

L_8006A0C0:
    // 0x8006A0C0: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
L_8006A0C4:
    // 0x8006A0C4: jal         0x800700D8
    // 0x8006A0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800700D8_4B4D8(rdram, ctx);
        goto after_0;
    // 0x8006A0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
L_8006A0CC:
    // 0x8006A0CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8006A0D0:
    // 0x8006A0D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8006A0D4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006A0D8: lbu         $t0, 0x174($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X174);
    // 0x8006A0DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006A0E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8006A0E4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8006A0E8: sb          $zero, 0x113($s0)
    MEM_B(0X113, ctx->r16) = 0;
    // 0x8006A0EC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8006A0F0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8006A0F4: ori         $t0, $t0, 0x4
    ctx->r8 = ctx->r8 | 0X4;
    // 0x8006A0F8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8006A0FC: jal         0x8006FB90
    // 0x8006A100: sb          $t0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r8;
    func_8006FB90_4AF90(rdram, ctx);
        goto after_1;
    // 0x8006A100: sb          $t0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r8;
    after_1:
    // 0x8006A104: lb          $v0, 0x112($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X112);
    // 0x8006A108: lhu         $a1, 0x11C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006A10C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8006A110: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8006A114: lhu         $a0, 0x148($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X148);
    // 0x8006A118: lhu         $a2, 0x14A($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X14A);
    // 0x8006A11C: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8006A120: and         $v1, $v0, $a0
    ctx->r3 = ctx->r2 & ctx->r4;
    // 0x8006A124: beql        $v1, $zero, L_8006A46C
    if (ctx->r3 == 0) {
        // 0x8006A128: sh          $zero, 0x48($s0)
        MEM_H(0X48, ctx->r16) = 0;
            goto L_8006A46C;
    }
    goto skip_8;
    // 0x8006A128: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    skip_8:
    // 0x8006A12C: beq         $v1, $a0, L_8006A468
    if (ctx->r3 == ctx->r4) {
        // 0x8006A130: and         $v0, $v0, $a2
        ctx->r2 = ctx->r2 & ctx->r6;
            goto L_8006A468;
    }
    // 0x8006A130: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8006A134: beq         $v0, $zero, L_8006A154
    if (ctx->r2 == 0) {
        // 0x8006A138: addiu       $v1, $zero, -0x140
        ctx->r3 = ADD32(0, -0X140);
            goto L_8006A154;
    }
    // 0x8006A138: addiu       $v1, $zero, -0x140
    ctx->r3 = ADD32(0, -0X140);
    // 0x8006A13C: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006A140: lhu         $a0, 0x12A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006A144: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x8006A148: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006A14C: j           L_8006A430
    // 0x8006A150: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
        goto L_8006A430;
    // 0x8006A150: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
L_8006A154:
    // 0x8006A154: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006A158: lhu         $a0, 0x12A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006A15C: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
    // 0x8006A160: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x8006A164: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006A168: j           L_8006A458
    // 0x8006A16C: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
        goto L_8006A458;
    // 0x8006A16C: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
L_8006A170:
    // 0x8006A170: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8006A174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006A178: bne         $v1, $v0, L_8006A4C8
    if (ctx->r3 != ctx->r2) {
        // 0x8006A17C: nop
    
            goto L_8006A4C8;
    }
    // 0x8006A17C: nop

    // 0x8006A180: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006A184: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006A188: j           L_8006A4C8
    // 0x8006A18C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006A4C8;
    // 0x8006A18C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006A190:
    // 0x8006A190: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006A194: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006A198: bne         $v1, $v0, L_8006A1E4
    if (ctx->r3 != ctx->r2) {
        // 0x8006A19C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006A1E4;
    }
    // 0x8006A19C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A1A0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006A1A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006A1A8: sb          $v0, 0x44D($s0)
    MEM_B(0X44D, ctx->r16) = ctx->r2;
    // 0x8006A1AC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8006A1B0: jal         0x80070100
    // 0x8006A1B4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    func_80070100_4B500(rdram, ctx);
        goto after_2;
    // 0x8006A1B4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    after_2:
    // 0x8006A1B8: lb          $v1, 0x112($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X112);
    // 0x8006A1BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006A1C0: beq         $v1, $v0, L_8006A1D4
    if (ctx->r3 == ctx->r2) {
        // 0x8006A1C4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006A1D4;
    }
    // 0x8006A1C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A1C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8006A1CC: j           L_8006A1DC
    // 0x8006A1D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_8006A1DC;
    // 0x8006A1D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8006A1D4:
    // 0x8006A1D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8006A1D8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_8006A1DC:
    // 0x8006A1DC: jal         0x8006FB90
    // 0x8006A1E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_3;
    // 0x8006A1E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
L_8006A1E4:
    // 0x8006A1E4: lb          $v0, 0x112($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X112);
    // 0x8006A1E8: lhu         $a1, 0x11C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006A1EC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8006A1F0: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8006A1F4: lhu         $a0, 0x148($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X148);
    // 0x8006A1F8: lhu         $a2, 0x14A($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X14A);
    // 0x8006A1FC: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8006A200: and         $v1, $v0, $a0
    ctx->r3 = ctx->r2 & ctx->r4;
    // 0x8006A204: beql        $v1, $zero, L_8006A46C
    if (ctx->r3 == 0) {
        // 0x8006A208: sh          $zero, 0x48($s0)
        MEM_H(0X48, ctx->r16) = 0;
            goto L_8006A46C;
    }
    goto skip_9;
    // 0x8006A208: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    skip_9:
    // 0x8006A20C: beq         $v1, $a0, L_8006A468
    if (ctx->r3 == ctx->r4) {
        // 0x8006A210: and         $v0, $v0, $a2
        ctx->r2 = ctx->r2 & ctx->r6;
            goto L_8006A468;
    }
    // 0x8006A210: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8006A214: beq         $v0, $zero, L_8006A234
    if (ctx->r2 == 0) {
        // 0x8006A218: addiu       $v1, $zero, -0x140
        ctx->r3 = ADD32(0, -0X140);
            goto L_8006A234;
    }
    // 0x8006A218: addiu       $v1, $zero, -0x140
    ctx->r3 = ADD32(0, -0X140);
    // 0x8006A21C: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006A220: lhu         $a0, 0x12A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006A224: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x8006A228: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006A22C: j           L_8006A430
    // 0x8006A230: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
        goto L_8006A430;
    // 0x8006A230: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
L_8006A234:
    // 0x8006A234: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006A238: lhu         $a0, 0x12A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006A23C: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
    // 0x8006A240: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x8006A244: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006A248: j           L_8006A458
    // 0x8006A24C: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
        goto L_8006A458;
    // 0x8006A24C: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
L_8006A250:
    // 0x8006A250: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8006A254: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8006A258: bne         $v1, $v0, L_8006A278
    if (ctx->r3 != ctx->r2) {
        // 0x8006A25C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006A278;
    }
    // 0x8006A25C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A260: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006A264: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006A268: sb          $v1, 0x44D($s0)
    MEM_B(0X44D, ctx->r16) = ctx->r3;
    // 0x8006A26C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006A270: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006A274:
    // 0x8006A274: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8006A278:
    // 0x8006A278: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8006A27C: jal         0x8006FDAC
    // 0x8006A280: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_8006FDAC_4B1AC(rdram, ctx);
        goto after_4;
    // 0x8006A280: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_4:
    // 0x8006A284: lb          $v0, 0x112($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X112);
    // 0x8006A288: lhu         $a1, 0x11C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006A28C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8006A290: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8006A294: lhu         $a0, 0x148($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X148);
    // 0x8006A298: lhu         $a2, 0x14A($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X14A);
    // 0x8006A29C: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8006A2A0: and         $v1, $v0, $a0
    ctx->r3 = ctx->r2 & ctx->r4;
    // 0x8006A2A4: beql        $v1, $zero, L_8006A30C
    if (ctx->r3 == 0) {
        // 0x8006A2A8: sh          $zero, 0x48($s0)
        MEM_H(0X48, ctx->r16) = 0;
            goto L_8006A30C;
    }
    goto skip_10;
    // 0x8006A2A8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    skip_10:
    // 0x8006A2AC: beq         $v1, $a0, L_8006A308
    if (ctx->r3 == ctx->r4) {
        // 0x8006A2B0: and         $v0, $v0, $a2
        ctx->r2 = ctx->r2 & ctx->r6;
            goto L_8006A308;
    }
    // 0x8006A2B0: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8006A2B4: beq         $v0, $zero, L_8006A2E0
    if (ctx->r2 == 0) {
        // 0x8006A2B8: addiu       $v1, $zero, -0x140
        ctx->r3 = ADD32(0, -0X140);
            goto L_8006A2E0;
    }
    // 0x8006A2B8: addiu       $v1, $zero, -0x140
    ctx->r3 = ADD32(0, -0X140);
    // 0x8006A2BC: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006A2C0: lhu         $a0, 0x12A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006A2C4: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006A2C8: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x8006A2CC: bne         $v0, $zero, L_8006A30C
    if (ctx->r2 != 0) {
        // 0x8006A2D0: sh          $v1, 0x48($s0)
        MEM_H(0X48, ctx->r16) = ctx->r3;
            goto L_8006A30C;
    }
    // 0x8006A2D0: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x8006A2D4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8006A2D8: j           L_8006A30C
    // 0x8006A2DC: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
        goto L_8006A30C;
    // 0x8006A2DC: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
L_8006A2E0:
    // 0x8006A2E0: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006A2E4: lhu         $a0, 0x12A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006A2E8: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
    // 0x8006A2EC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006A2F0: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x8006A2F4: bne         $v0, $zero, L_8006A30C
    if (ctx->r2 != 0) {
        // 0x8006A2F8: sh          $v1, 0x48($s0)
        MEM_H(0X48, ctx->r16) = ctx->r3;
            goto L_8006A30C;
    }
    // 0x8006A2F8: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x8006A2FC: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x8006A300: j           L_8006A30C
    // 0x8006A304: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
        goto L_8006A30C;
    // 0x8006A304: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
L_8006A308:
    // 0x8006A308: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
L_8006A30C:
    // 0x8006A30C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8006A310: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8006A314: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A318: jal         0x8006FC34
    // 0x8006A31C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_5;
    // 0x8006A31C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8006A320: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x8006A324: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8006A328: beq         $v0, $zero, L_8006A4C8
    if (ctx->r2 == 0) {
        // 0x8006A32C: addiu       $a0, $zero, 0x91
        ctx->r4 = ADD32(0, 0X91);
            goto L_8006A4C8;
    }
    // 0x8006A32C: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    // 0x8006A330: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006A334: jal         0x8002A2F8
    // 0x8006A338: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_6;
    // 0x8006A338: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8006A33C: j           L_8006A4C8
    // 0x8006A340: nop

        goto L_8006A4C8;
    // 0x8006A340: nop

L_8006A344:
    // 0x8006A344: lb          $v1, 0x112($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X112);
    // 0x8006A348: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006A34C: beq         $v1, $v0, L_8006A38C
    if (ctx->r3 == ctx->r2) {
        // 0x8006A350: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8006A38C;
    }
    // 0x8006A350: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8006A354: beql        $v0, $zero, L_8006A36C
    if (ctx->r2 == 0) {
        // 0x8006A358: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006A36C;
    }
    goto skip_11;
    // 0x8006A358: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_11:
    // 0x8006A35C: beql        $v1, $zero, L_8006A384
    if (ctx->r3 == 0) {
        // 0x8006A360: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8006A384;
    }
    goto skip_12;
    // 0x8006A360: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_12:
    // 0x8006A364: j           L_8006A3D0
    // 0x8006A368: nop

        goto L_8006A3D0;
    // 0x8006A368: nop

L_8006A36C:
    // 0x8006A36C: beq         $v1, $v0, L_8006A3A0
    if (ctx->r3 == ctx->r2) {
        // 0x8006A370: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8006A3A0;
    }
    // 0x8006A370: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8006A374: beq         $v1, $v0, L_8006A3B4
    if (ctx->r3 == ctx->r2) {
        // 0x8006A378: nop
    
            goto L_8006A3B4;
    }
    // 0x8006A378: nop

    // 0x8006A37C: j           L_8006A3D0
    // 0x8006A380: nop

        goto L_8006A3D0;
    // 0x8006A380: nop

L_8006A384:
    // 0x8006A384: j           L_8006A3D0
    // 0x8006A388: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006A3D0;
    // 0x8006A388: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006A38C:
    // 0x8006A38C: jal         0x800700D8
    // 0x8006A390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800700D8_4B4D8(rdram, ctx);
        goto after_7;
    // 0x8006A390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8006A394: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A398: j           L_8006A3C4
    // 0x8006A39C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_8006A3C4;
    // 0x8006A39C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_8006A3A0:
    // 0x8006A3A0: jal         0x800700D8
    // 0x8006A3A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800700D8_4B4D8(rdram, ctx);
        goto after_8;
    // 0x8006A3A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8006A3A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A3AC: j           L_8006A3C4
    // 0x8006A3B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
        goto L_8006A3C4;
    // 0x8006A3B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
L_8006A3B4:
    // 0x8006A3B4: jal         0x800700D8
    // 0x8006A3B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800700D8_4B4D8(rdram, ctx);
        goto after_9;
    // 0x8006A3B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8006A3BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A3C0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_8006A3C4:
    // 0x8006A3C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006A3C8: jal         0x8006FB90
    // 0x8006A3CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_10;
    // 0x8006A3CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_8006A3D0:
    // 0x8006A3D0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006A3D4: lb          $a0, 0x112($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X112);
    // 0x8006A3D8: lhu         $a2, 0x11C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006A3DC: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x8006A3E0: sh          $v1, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r3;
    // 0x8006A3E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006A3E8: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x8006A3EC: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8006A3F0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8006A3F4: lhu         $a1, 0x148($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X148);
    // 0x8006A3F8: lhu         $a0, 0x14A($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X14A);
    // 0x8006A3FC: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8006A400: and         $v1, $v0, $a1
    ctx->r3 = ctx->r2 & ctx->r5;
    // 0x8006A404: beql        $v1, $zero, L_8006A46C
    if (ctx->r3 == 0) {
        // 0x8006A408: sh          $zero, 0x48($s0)
        MEM_H(0X48, ctx->r16) = 0;
            goto L_8006A46C;
    }
    goto skip_13;
    // 0x8006A408: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    skip_13:
    // 0x8006A40C: beq         $v1, $a1, L_8006A468
    if (ctx->r3 == ctx->r5) {
        // 0x8006A410: and         $v0, $v0, $a0
        ctx->r2 = ctx->r2 & ctx->r4;
            goto L_8006A468;
    }
    // 0x8006A410: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006A414: beq         $v0, $zero, L_8006A440
    if (ctx->r2 == 0) {
        // 0x8006A418: addiu       $v1, $zero, -0x140
        ctx->r3 = ADD32(0, -0X140);
            goto L_8006A440;
    }
    // 0x8006A418: addiu       $v1, $zero, -0x140
    ctx->r3 = ADD32(0, -0X140);
    // 0x8006A41C: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006A420: lhu         $a0, 0x12A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006A424: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x8006A428: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006A42C: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
L_8006A430:
    // 0x8006A430: bne         $v0, $zero, L_8006A46C
    if (ctx->r2 != 0) {
        // 0x8006A434: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8006A46C;
    }
    // 0x8006A434: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8006A438: j           L_8006A46C
    // 0x8006A43C: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
        goto L_8006A46C;
    // 0x8006A43C: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
L_8006A440:
    // 0x8006A440: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006A444: lhu         $a0, 0x12A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006A448: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
    // 0x8006A44C: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x8006A450: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006A454: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
L_8006A458:
    // 0x8006A458: bne         $v0, $zero, L_8006A46C
    if (ctx->r2 != 0) {
        // 0x8006A45C: addiu       $v0, $zero, -0x40
        ctx->r2 = ADD32(0, -0X40);
            goto L_8006A46C;
    }
    // 0x8006A45C: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x8006A460: j           L_8006A46C
    // 0x8006A464: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
        goto L_8006A46C;
    // 0x8006A464: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
L_8006A468:
    // 0x8006A468: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
L_8006A46C:
    // 0x8006A46C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8006A470: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8006A474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A478: jal         0x8006FC34
    // 0x8006A47C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_11;
    // 0x8006A47C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x8006A480: j           L_8006A4C8
    // 0x8006A484: nop

        goto L_8006A4C8;
    // 0x8006A484: nop

L_8006A488:
    // 0x8006A488: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8006A48C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006A490: bne         $v1, $v0, L_8006A4C8
    if (ctx->r3 != ctx->r2) {
        // 0x8006A494: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006A4C8;
    }
    // 0x8006A494: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A498: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8006A49C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006A4A0: sh          $zero, 0x116($s0)
    MEM_H(0X116, ctx->r16) = 0;
    // 0x8006A4A4: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
    // 0x8006A4A8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8006A4AC: jal         0x80070100
    // 0x8006A4B0: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    func_80070100_4B500(rdram, ctx);
        goto after_12;
    // 0x8006A4B0: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    after_12:
    // 0x8006A4B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006A4B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006A4BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006A4C0: jal         0x8006FB90
    // 0x8006A4C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_13;
    // 0x8006A4C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_13:
L_8006A4C8:
    // 0x8006A4C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8006A4CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006A4D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006A4D4: jr          $ra
    // 0x8006A4D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8006A4D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800739B0_4EDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800739B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800739B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800739B8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x800739BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800739C0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x800739C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800739C8: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x800739CC: beq         $a1, $zero, L_800739DC
    if (ctx->r5 == 0) {
        // 0x800739D0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_800739DC;
    }
    // 0x800739D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800739D4: jal         0x8004D80C
    // 0x800739D8: nop

    func_8004D80C_28C0C(rdram, ctx);
        goto after_0;
    // 0x800739D8: nop

    after_0:
L_800739DC:
    // 0x800739DC: beq         $s1, $zero, L_800739EC
    if (ctx->r17 == 0) {
        // 0x800739E0: nop
    
            goto L_800739EC;
    }
    // 0x800739E0: nop

    // 0x800739E4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800739E8: sh          $s0, -0x3BAE($at)
    MEM_H(-0X3BAE, ctx->r1) = ctx->r16;
L_800739EC:
    // 0x800739EC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x800739F0: lb          $a0, -0x3BC8($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3BC8);
    // 0x800739F4: sll         $a1, $s2, 16
    ctx->r5 = S32(ctx->r18 << 16);
    // 0x800739F8: jal         0x80036340
    // 0x800739FC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_80036340_11740(rdram, ctx);
        goto after_1;
    // 0x800739FC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_1:
    // 0x80073A00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80073A04: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80073A08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80073A0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80073A10: jr          $ra
    // 0x80073A14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80073A14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002BA1C_6E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002BA1C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8002BA20: lbu         $a0, -0x7388($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X7388);
    // 0x8002BA24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002BA28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002BA2C: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8002BA30: addiu       $s1, $s1, -0x3F88
    ctx->r17 = ADD32(ctx->r17, -0X3F88);
    // 0x8002BA34: addiu       $a1, $s1, 0x12
    ctx->r5 = ADD32(ctx->r17, 0X12);
    // 0x8002BA38: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8002BA3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002BA40: andi        $a0, $a0, 0x30
    ctx->r4 = ctx->r4 & 0X30;
    // 0x8002BA44: jal         0x8002A3F0
    // 0x8002BA48: srl         $a0, $a0, 4
    ctx->r4 = S32(U32(ctx->r4) >> 4);
    func_8002A3F0_57F0(rdram, ctx);
        goto after_0;
    // 0x8002BA48: srl         $a0, $a0, 4
    ctx->r4 = S32(U32(ctx->r4) >> 4);
    after_0:
    // 0x8002BA4C: bne         $v0, $zero, L_8002BA68
    if (ctx->r2 != 0) {
        // 0x8002BA50: nop
    
            goto L_8002BA68;
    }
    // 0x8002BA50: nop

    // 0x8002BA54: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8002BA58: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8002BA5C: andi        $v0, $v0, 0xCF
    ctx->r2 = ctx->r2 & 0XCF;
    // 0x8002BA60: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002BA64: sb          $v0, -0x7388($at)
    MEM_B(-0X7388, ctx->r1) = ctx->r2;
L_8002BA68:
    // 0x8002BA68: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8002BA6C: lbu         $a0, -0x7388($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X7388);
    // 0x8002BA70: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8002BA74: lw          $v0, -0x7814($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7814);
    // 0x8002BA78: addiu       $a1, $s1, 0xE
    ctx->r5 = ADD32(ctx->r17, 0XE);
    // 0x8002BA7C: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x8002BA80: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002BA84: sw          $v0, -0x7814($at)
    MEM_W(-0X7814, ctx->r1) = ctx->r2;
    // 0x8002BA88: jal         0x8002A3F0
    // 0x8002BA8C: srl         $a0, $a0, 6
    ctx->r4 = S32(U32(ctx->r4) >> 6);
    func_8002A3F0_57F0(rdram, ctx);
        goto after_1;
    // 0x8002BA8C: srl         $a0, $a0, 6
    ctx->r4 = S32(U32(ctx->r4) >> 6);
    after_1:
    // 0x8002BA90: bne         $v0, $zero, L_8002BAC8
    if (ctx->r2 != 0) {
        // 0x8002BA94: nop
    
            goto L_8002BAC8;
    }
    // 0x8002BA94: nop

    // 0x8002BA98: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8002BA9C: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8002BAA0: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8002BAA4: beq         $v0, $zero, L_8002BAB4
    if (ctx->r2 == 0) {
        // 0x8002BAA8: nop
    
            goto L_8002BAB4;
    }
    // 0x8002BAA8: nop

    // 0x8002BAAC: jal         0x8002BF38
    // 0x8002BAB0: nop

    func_8002BF38_7338(rdram, ctx);
        goto after_2;
    // 0x8002BAB0: nop

    after_2:
L_8002BAB4:
    // 0x8002BAB4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8002BAB8: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8002BABC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8002BAC0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002BAC4: sb          $v0, -0x7388($at)
    MEM_B(-0X7388, ctx->r1) = ctx->r2;
L_8002BAC8:
    // 0x8002BAC8: jal         0x8002BB34
    // 0x8002BACC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002BB34_6F34(rdram, ctx);
        goto after_3;
    // 0x8002BACC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8002BAD0: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8002BAD4: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8002BAD8: bne         $v0, $zero, L_8002BAE8
    if (ctx->r2 != 0) {
        // 0x8002BADC: nop
    
            goto L_8002BAE8;
    }
    // 0x8002BADC: nop

    // 0x8002BAE0: jal         0x8002BC54
    // 0x8002BAE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002BC54_7054(rdram, ctx);
        goto after_4;
    // 0x8002BAE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
L_8002BAE8:
    // 0x8002BAE8: jal         0x8002BBBC
    // 0x8002BAEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002BBBC_6FBC(rdram, ctx);
        goto after_5;
    // 0x8002BAEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8002BAF0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8002BAF4: lw          $v0, -0x7814($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7814);
    // 0x8002BAF8: lw          $s0, 0x1C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X1C);
    // 0x8002BAFC: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x8002BB00: addiu       $v1, $zero, -0x401
    ctx->r3 = ADD32(0, -0X401);
    // 0x8002BB04: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8002BB08: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002BB0C: beq         $s0, $a0, L_8002BB20
    if (ctx->r16 == ctx->r4) {
        // 0x8002BB10: sw          $v0, -0x7814($at)
        MEM_W(-0X7814, ctx->r1) = ctx->r2;
            goto L_8002BB20;
    }
    // 0x8002BB10: sw          $v0, -0x7814($at)
    MEM_W(-0X7814, ctx->r1) = ctx->r2;
    // 0x8002BB14: jal         0x8008B1D0
    // 0x8002BB18: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_8008B1D0_665D0(rdram, ctx);
        goto after_6;
    // 0x8002BB18: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_6:
    // 0x8002BB1C: sw          $s0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r16;
L_8002BB20:
    // 0x8002BB20: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8002BB24: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8002BB28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002BB2C: jr          $ra
    // 0x8002BB30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8002BB30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002A584_5984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A584: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8002A588: lb          $v1, -0x3BC5($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC5);
    // 0x8002A58C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002A590: bne         $v1, $v0, L_8002A59C
    if (ctx->r3 != ctx->r2) {
        // 0x8002A594: addiu       $v0, $zero, 0x108
        ctx->r2 = ADD32(0, 0X108);
            goto L_8002A59C;
    }
    // 0x8002A594: addiu       $v0, $zero, 0x108
    ctx->r2 = ADD32(0, 0X108);
    // 0x8002A598: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_8002A59C:
    // 0x8002A59C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002A5A0: jr          $ra
    // 0x8002A5A4: sh          $v0, 0x6FBC($at)
    MEM_H(0X6FBC, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8002A5A4: sh          $v0, 0x6FBC($at)
    MEM_H(0X6FBC, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80086110_61510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80086110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80086114: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80086118: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008611C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80086120: jal         0x800281C8
    // 0x80086124: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x80086124: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x80086128: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8008612C: beq         $a3, $zero, L_800861C4
    if (ctx->r7 == 0) {
        // 0x80086130: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800861C4;
    }
    // 0x80086130: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80086134: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80086138: sh          $v0, 0x6($a3)
    MEM_H(0X6, ctx->r7) = ctx->r2;
    // 0x8008613C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80086140: sh          $v0, 0x8($a3)
    MEM_H(0X8, ctx->r7) = ctx->r2;
    // 0x80086144: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80086148: sb          $v0, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r2;
    // 0x8008614C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80086150: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x80086154: sb          $v0, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r2;
    // 0x80086158: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8008615C: sb          $v0, 0xE($a3)
    MEM_B(0XE, ctx->r7) = ctx->r2;
    // 0x80086160: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80086164: sb          $v0, 0x12($a3)
    MEM_B(0X12, ctx->r7) = ctx->r2;
    // 0x80086168: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8008616C: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    // 0x80086170: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80086174: sh          $v0, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r2;
    // 0x80086178: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8008617C: sb          $v0, 0xF($a3)
    MEM_B(0XF, ctx->r7) = ctx->r2;
    // 0x80086180: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80086184: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x80086188: sb          $v0, 0x10($a3)
    MEM_B(0X10, ctx->r7) = ctx->r2;
    // 0x8008618C: lhu         $v0, 0xC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC);
    // 0x80086190: sb          $v0, 0x11($a3)
    MEM_B(0X11, ctx->r7) = ctx->r2;
    // 0x80086194: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80086198: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
    // 0x8008619C: lhu         $v0, 0x10($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X10);
    // 0x800861A0: sh          $v0, 0xA($a3)
    MEM_H(0XA, ctx->r7) = ctx->r2;
    // 0x800861A4: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x800861A8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x800861AC: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x800861B0: addiu       $a2, $a2, 0x5C68
    ctx->r6 = ADD32(ctx->r6, 0X5C68);
    // 0x800861B4: srl         $v0, $v0, 5
    ctx->r2 = S32(U32(ctx->r2) >> 5);
    // 0x800861B8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x800861BC: jal         0x800283A8
    // 0x800861C0: sb          $v0, 0x13($a3)
    MEM_B(0X13, ctx->r7) = ctx->r2;
    func_800283A8_37A8(rdram, ctx);
        goto after_1;
    // 0x800861C0: sb          $v0, 0x13($a3)
    MEM_B(0X13, ctx->r7) = ctx->r2;
    after_1:
L_800861C4:
    // 0x800861C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800861C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800861CC: jr          $ra
    // 0x800861D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800861D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800861D4: nop

    // 0x800861D8: nop

    // 0x800861DC: nop

;}
RECOMP_FUNC void func_8004DC2C_2902C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004DC2C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8004DC30: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x8004DC34: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8004DC38: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8004DC3C: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8004DC40: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8004DC44: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8004DC48: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x8004DC4C: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8004DC50: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8004DC54: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8004DC58: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x8004DC5C: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8004DC60: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8004DC64: bgez        $v0, L_8004DC78
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004DC68: addu        $s2, $v1, $zero
        ctx->r18 = ADD32(ctx->r3, 0);
            goto L_8004DC78;
    }
    // 0x8004DC68: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x8004DC6C: negu        $s3, $a2
    ctx->r19 = SUB32(0, ctx->r6);
    // 0x8004DC70: negu        $s2, $v1
    ctx->r18 = SUB32(0, ctx->r3);
    // 0x8004DC74: addiu       $s1, $s1, 0x800
    ctx->r17 = ADD32(ctx->r17, 0X800);
L_8004DC78:
    // 0x8004DC78: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x8004DC7C: jal         0x8002C654
    // 0x8004DC80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8004DC80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8004DC84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004DC88: jal         0x800319B4
    // 0x8004DC8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8004DC8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8004DC90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004DC94: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8004DC98: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x8004DC9C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8004DCA0: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8004DCA4: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8004DCA8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8004DCAC: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x8004DCB0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8004DCB4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8004DCB8: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8004DCBC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8004DCC0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8004DCC4: jal         0x80030AA0
    // 0x8004DCC8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80030AA0_BEA0(rdram, ctx);
        goto after_2;
    // 0x8004DCC8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x8004DCCC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8004DCD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8004DCD4: jal         0x8009A3B4
    // 0x8004DCD8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8004DCD8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8004DCDC: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x8004DCE0: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x8004DCE4: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x8004DCE8: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8004DCEC: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x8004DCF0: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8004DCF4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8004DCF8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8004DCFC: jr          $ra
    // 0x8004DD00: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x8004DD00: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80031EBC_D2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031EBC: jr          $ra
    // 0x80031EC0: nop

    TRACE_RETURN()
    return;
    // 0x80031EC0: nop

;}
RECOMP_FUNC void sins(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80099F30: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x80099F34: srl         $a0, $a0, 4
    ctx->r4 = S32(U32(ctx->r4) >> 4);
    // 0x80099F38: andi        $v0, $a0, 0x400
    ctx->r2 = ctx->r4 & 0X400;
    // 0x80099F3C: beq         $v0, $zero, L_80099F50
    if (ctx->r2 == 0) {
        // 0x80099F40: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_80099F50;
    }
    // 0x80099F40: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80099F44: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
    // 0x80099F48: j           L_80099F54
    // 0x80099F4C: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
        goto L_80099F54;
    // 0x80099F4C: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
L_80099F50:
    // 0x80099F50: andi        $v0, $a0, 0x3FF
    ctx->r2 = ctx->r4 & 0X3FF;
L_80099F54:
    // 0x80099F54: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80099F58: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80099F5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80099F60: lhu         $v1, -0xAB0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0XAB0);
    // 0x80099F64: andi        $v0, $a1, 0x800
    ctx->r2 = ctx->r5 & 0X800;
    // 0x80099F68: bne         $v0, $zero, L_80099F78
    if (ctx->r2 != 0) {
        // 0x80099F6C: negu        $v0, $v1
        ctx->r2 = SUB32(0, ctx->r3);
            goto L_80099F78;
    }
    // 0x80099F6C: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x80099F70: j           L_80099F7C
    // 0x80099F74: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
        goto L_80099F7C;
    // 0x80099F74: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_80099F78:
    // 0x80099F78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
L_80099F7C:
    // 0x80099F7C: jr          $ra
    // 0x80099F80: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    TRACE_RETURN()
    return;
    // 0x80099F80: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
;}
RECOMP_FUNC void func_8002E31C_971C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002E31C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8002E320: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8002E324: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x8002E328: lbu         $v1, 0xC($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XC);
    // 0x8002E32C: bne         $v0, $v1, L_8002E33C
    if (ctx->r2 != ctx->r3) {
        // 0x8002E330: sltu        $v0, $v0, $v1
        ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
            goto L_8002E33C;
    }
    // 0x8002E330: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8002E334: j           L_8002E344
    // 0x8002E338: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8002E344;
    // 0x8002E338: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8002E33C:
    // 0x8002E33C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8002E340: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_8002E344:
    // 0x8002E344: jr          $ra
    // 0x8002E348: nop

    TRACE_RETURN()
    return;
    // 0x8002E348: nop

;}
RECOMP_FUNC void func_800302F4_B6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800302F4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800302F8: lbu         $v0, 0x3($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X3);
    // 0x800302FC: srl         $v1, $v1, 8
    ctx->r3 = S32(U32(ctx->r3) >> 8);
    // 0x80030300: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80030304: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80030308: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x8003030C: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80030310: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x80030314: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x80030318: jr          $ra
    // 0x8003031C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8003031C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80075634_50A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80075634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075638: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8007563C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80075640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075644: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x80075648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007564C: bne         $v1, $zero, L_80075678
    if (ctx->r3 != 0) {
        // 0x80075650: sh          $v0, 0x0($s0)
        MEM_H(0X0, ctx->r16) = ctx->r2;
            goto L_80075678;
    }
    // 0x80075650: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80075654: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80075658: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8007565C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80075660: jal         0x8007694C
    // 0x80075664: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    func_8007694C_51D4C(rdram, ctx);
        goto after_0;
    // 0x80075664: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    after_0:
    // 0x80075668: jal         0x800756D8
    // 0x8007566C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800756D8_50AD8(rdram, ctx);
        goto after_1;
    // 0x8007566C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80075670: j           L_80075694
    // 0x80075674: nop

        goto L_80075694;
    // 0x80075674: nop

L_80075678:
    // 0x80075678: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007567C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80075680: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80075684: jal         0x8007694C
    // 0x80075688: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    func_8007694C_51D4C(rdram, ctx);
        goto after_2;
    // 0x80075688: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    after_2:
    // 0x8007568C: jal         0x800756A4
    // 0x80075690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800756A4_50AA4(rdram, ctx);
        goto after_3;
    // 0x80075690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80075694:
    // 0x80075694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075698: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8007569C: jr          $ra
    // 0x800756A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800756A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035428_10828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035428: jr          $ra
    // 0x8003542C: nop

    TRACE_RETURN()
    return;
    // 0x8003542C: nop

;}
RECOMP_FUNC void func_80062338_3D738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062338: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006233C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80062340: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80062344: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80062348: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8006234C: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
    // 0x80062350: and         $v0, $v1, $a1
    ctx->r2 = ctx->r3 & ctx->r5;
    // 0x80062354: bne         $v0, $zero, L_80062398
    if (ctx->r2 != 0) {
        // 0x80062358: or          $v0, $v1, $a1
        ctx->r2 = ctx->r3 | ctx->r5;
            goto L_80062398;
    }
    // 0x80062358: or          $v0, $v1, $a1
    ctx->r2 = ctx->r3 | ctx->r5;
    // 0x8006235C: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80062360: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80062364: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80062368: lbu         $a1, 0x1($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X1);
    // 0x8006236C: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80062370: lbu         $a0, 0x4($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4);
    // 0x80062374: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80062378: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8006237C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80062380: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80062384: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80062388: jal         0x80036B1C
    // 0x8006238C: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    func_80036B1C_11F1C(rdram, ctx);
        goto after_0;
    // 0x8006238C: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    after_0:
    // 0x80062390: j           L_800623EC
    // 0x80062394: nop

        goto L_800623EC;
    // 0x80062394: nop

L_80062398:
    // 0x80062398: jal         0x80036B7C
    // 0x8006239C: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_1;
    // 0x8006239C: nop

    after_1:
    // 0x800623A0: beq         $v0, $zero, L_800623EC
    if (ctx->r2 == 0) {
        // 0x800623A4: lui         $a1, 0xFEFF
        ctx->r5 = S32(0XFEFF << 16);
            goto L_800623EC;
    }
    // 0x800623A4: lui         $a1, 0xFEFF
    ctx->r5 = S32(0XFEFF << 16);
    // 0x800623A8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800623AC: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x800623B0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x800623B4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x800623B8: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x800623BC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800623C0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800623C4: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x800623C8: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x800623CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800623D0: sw          $v1, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r3;
    // 0x800623D4: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x800623D8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x800623DC: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x800623E0: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x800623E4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800623E8: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
L_800623EC:
    // 0x800623EC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800623F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800623F4: lui         $a0, 0x1000
    ctx->r4 = S32(0X1000 << 16);
    // 0x800623F8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x800623FC: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x80062400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80062404: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80062408: jr          $ra
    // 0x8006240C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006240C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80036B48_11F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036B48: jr          $ra
    // 0x80036B4C: nop

    TRACE_RETURN()
    return;
    // 0x80036B4C: nop

;}
RECOMP_FUNC void func_8002A634_5A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A634: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8002A638: lb          $v1, -0x3BC5($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC5);
    // 0x8002A63C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002A640: bne         $v1, $v0, L_8002A64C
    if (ctx->r3 != ctx->r2) {
        // 0x8002A644: addiu       $a0, $zero, 0x108
        ctx->r4 = ADD32(0, 0X108);
            goto L_8002A64C;
    }
    // 0x8002A644: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    // 0x8002A648: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
L_8002A64C:
    // 0x8002A64C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8002A650: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8002A654: addiu       $v0, $v0, 0x6FF8
    ctx->r2 = ADD32(ctx->r2, 0X6FF8);
L_8002A658:
    // 0x8002A658: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x8002A65C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8002A660: bgez        $v1, L_8002A658
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8002A664: addiu       $v0, $v0, -0x2
        ctx->r2 = ADD32(ctx->r2, -0X2);
            goto L_8002A658;
    }
    // 0x8002A664: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8002A668: jr          $ra
    // 0x8002A66C: nop

    TRACE_RETURN()
    return;
    // 0x8002A66C: nop

;}
RECOMP_FUNC void func_8008D680_68A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D680: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D684: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x8008D688: beq         $v0, $zero, L_8008D698
    if (ctx->r2 == 0) {
        // 0x8008D68C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8008D698;
    }
    // 0x8008D68C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D690: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8008D694: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_8008D698:
    // 0x8008D698: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008D69C: ldc1        $f2, 0x2DD8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2DD8);
    // 0x8008D6A0: mtc1        $v1, $f0
    ctx->f0.u32l = ctx->r3;
    // 0x8008D6A4: nop

    // 0x8008D6A8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008D6AC: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008D6B0: div.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x8008D6B4: lwc1        $f4, 0x90($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X90);
    // 0x8008D6B8: lwc1        $f2, 0x30($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8008D6BC: sub.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x8008D6C0: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x8008D6C4: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x8008D6C8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x8008D6CC: swc1        $f0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f0.u32l;
    // 0x8008D6D0: jr          $ra
    // 0x8008D6D4: swc1        $f2, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f2.u32l;
    TRACE_RETURN()
    return;
    // 0x8008D6D4: swc1        $f2, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f2.u32l;
;}
RECOMP_FUNC void func_8008D2E8_686E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D2E8: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D2EC: bne         $a2, $zero, L_8008D2F8
    if (ctx->r6 != 0) {
        // 0x8008D2F0: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8008D2F8;
    }
    // 0x8008D2F0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D2F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8008D2F8:
    // 0x8008D2F8: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8008D2FC: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x8008D300: bne         $a2, $zero, L_8008D30C
    if (ctx->r6 != 0) {
        // 0x8008D304: nop
    
            goto L_8008D30C;
    }
    // 0x8008D304: nop

    // 0x8008D308: break       7
    do_break(2148061960);
L_8008D30C:
    // 0x8008D30C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008D310: bne         $a2, $at, L_8008D324
    if (ctx->r6 != ctx->r1) {
        // 0x8008D314: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8008D324;
    }
    // 0x8008D314: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008D318: bne         $v0, $at, L_8008D324
    if (ctx->r2 != ctx->r1) {
        // 0x8008D31C: nop
    
            goto L_8008D324;
    }
    // 0x8008D31C: nop

    // 0x8008D320: break       6
    do_break(2148061984);
L_8008D324:
    // 0x8008D324: mflo        $v0
    ctx->r2 = lo;
    // 0x8008D328: sb          $a2, 0xBF($a0)
    MEM_B(0XBF, ctx->r4) = ctx->r6;
    // 0x8008D32C: sw          $v0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r2;
    // 0x8008D330: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D334: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D338: sb          $v0, 0xC0($a0)
    MEM_B(0XC0, ctx->r4) = ctx->r2;
    // 0x8008D33C: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D340: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008D344: ldc1        $f4, 0x2DB0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X2DB0);
    // 0x8008D348: mtc1        $a2, $f2
    ctx->f2.u32l = ctx->r6;
    // 0x8008D34C: nop

    // 0x8008D350: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008D354: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x8008D358: div.d       $f2, $f4, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f4.d, ctx->f2.d);
    // 0x8008D35C: lbu         $v0, 0xC0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC0);
    // 0x8008D360: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D364: sb          $a2, 0xC6($a0)
    MEM_B(0XC6, ctx->r4) = ctx->r6;
    // 0x8008D368: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D36C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8008D370: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8008D374: nop

    // 0x8008D378: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008D37C: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008D380: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x8008D384: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D388: sb          $v1, 0xC1($a0)
    MEM_B(0XC1, ctx->r4) = ctx->r3;
    // 0x8008D38C: cvt.s.d     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
    // 0x8008D390: swc1        $f2, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f2.u32l;
    // 0x8008D394: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D398: mtc1        $a2, $f2
    ctx->f2.u32l = ctx->r6;
    // 0x8008D39C: nop

    // 0x8008D3A0: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008D3A4: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x8008D3A8: div.d       $f2, $f4, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f4.d, ctx->f2.d);
    // 0x8008D3AC: lbu         $v0, 0xC1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC1);
    // 0x8008D3B0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D3B4: sb          $a2, 0xC7($a0)
    MEM_B(0XC7, ctx->r4) = ctx->r6;
    // 0x8008D3B8: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D3BC: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8008D3C0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8008D3C4: nop

    // 0x8008D3C8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008D3CC: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008D3D0: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x8008D3D4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D3D8: sb          $v1, 0xC2($a0)
    MEM_B(0XC2, ctx->r4) = ctx->r3;
    // 0x8008D3DC: cvt.s.d     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
    // 0x8008D3E0: swc1        $f2, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f2.u32l;
    // 0x8008D3E4: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D3E8: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x8008D3EC: nop

    // 0x8008D3F0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008D3F4: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008D3F8: div.d       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8008D3FC: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8008D400: sb          $a2, 0xC8($a0)
    MEM_B(0XC8, ctx->r4) = ctx->r6;
    // 0x8008D404: cvt.s.d     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f4.fl = CVT_S_D(ctx->f4.d);
    // 0x8008D408: jr          $ra
    // 0x8008D40C: swc1        $f4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8008D40C: swc1        $f4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8004DBA0_28FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004DBA0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004DBA4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8004DBA8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8004DBAC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8004DBB0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8004DBB4: lh          $v1, 0x4A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X4A);
    // 0x8004DBB8: lh          $v0, 0x4E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X4E);
    // 0x8004DBBC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8004DBC0: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8004DBC4: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x8004DBC8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8004DBCC: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8004DBD0: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x8004DBD4: jal         0x8004DC2C
    // 0x8004DBD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x8004DBD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8004DBDC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004DBE0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8004DBE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004DBE8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8004DBEC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8004DBF0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8004DBF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004DBF8: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8004DBFC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8004DC00: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8004DC04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004DC08: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8004DC0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004DC10: jal         0x8004DD04
    // 0x8004DC14: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8004DC14: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    after_1:
    // 0x8004DC18: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8004DC1C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8004DC20: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8004DC24: jr          $ra
    // 0x8004DC28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8004DC28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006F8D8_4ACD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F8D8: jr          $ra
    // 0x8006F8DC: nop

    TRACE_RETURN()
    return;
    // 0x8006F8DC: nop

;}
RECOMP_FUNC void func_80030204_B604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030204: jr          $ra
    // 0x80030208: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x80030208: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_8003F754_1AB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F758: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8003F75C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8003F760: lw          $a2, 0x78($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X78);
    // 0x8003F764: lbu         $a3, 0x1($a1)
    ctx->r7 = MEM_BU(ctx->r5, 0X1);
    // 0x8003F768: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    // 0x8003F76C: jal         0x8003F780
    // 0x8003F770: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    func_8003F780_1AB80(rdram, ctx);
        goto after_0;
    // 0x8003F770: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    after_0:
    // 0x8003F774: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8003F778: jr          $ra
    // 0x8003F77C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003F77C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002A6A0_5AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A6A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A6A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002A6A8: jal         0x8006033C
    // 0x8002A6AC: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8002A6AC: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    after_0:
    // 0x8002A6B0: bne         $v0, $zero, L_8002A6BC
    if (ctx->r2 != 0) {
        // 0x8002A6B4: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_8002A6BC;
    }
    // 0x8002A6B4: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8002A6B8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_8002A6BC:
    // 0x8002A6BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002A6C0: sh          $v0, 0x703A($at)
    MEM_H(0X703A, ctx->r1) = ctx->r2;
    // 0x8002A6C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002A6C8: sh          $v0, 0x703C($at)
    MEM_H(0X703C, ctx->r1) = ctx->r2;
    // 0x8002A6CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002A6D0: jr          $ra
    // 0x8002A6D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A6D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80049EBC_252BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049EBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80049EC0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80049EC4: jr          $ra
    // 0x80049EC8: sb          $v0, -0x3994($at)
    MEM_B(-0X3994, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80049EC8: sb          $v0, -0x3994($at)
    MEM_B(-0X3994, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void alEnvmixerNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80095F5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80095F60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80095F64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80095F68: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80095F6C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80095F70: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80095F74: addiu       $a1, $a1, 0x6E70
    ctx->r5 = ADD32(ctx->r5, 0X6E70);
    // 0x80095F78: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80095F7C: addiu       $a2, $a2, 0x7370
    ctx->r6 = ADD32(ctx->r6, 0X7370);
    // 0x80095F80: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80095F84: jal         0x80097B20
    // 0x80095F88: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x80095F88: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x80095F8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80095F90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80095F94: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80095F98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80095F9C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80095FA0: jal         0x80098CC0
    // 0x80095FA4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x80095FA4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x80095FA8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80095FAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80095FB0: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x80095FB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80095FB8: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80095FBC: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x80095FC0: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x80095FC4: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x80095FC8: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80095FCC: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80095FD0: sh          $zero, 0x20($s0)
    MEM_H(0X20, ctx->r16) = 0;
    // 0x80095FD4: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    // 0x80095FD8: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x80095FDC: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    // 0x80095FE0: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x80095FE4: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    // 0x80095FE8: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x80095FEC: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x80095FF0: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80095FF4: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x80095FF8: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    // 0x80095FFC: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80096000: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80096004: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80096008: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009600C: jr          $ra
    // 0x80096010: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80096010: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80028A58_3E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028A58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028A5C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80028A60: jal         0x80092EB0
    // 0x80028A64: nop

    func_80092EB0_6E2B0(rdram, ctx);
        goto after_0;
    // 0x80028A64: nop

    after_0:
    // 0x80028A68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80028A6C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80028A70: jal         0x8009C830
    // 0x80028A74: nop

    osViSetYScale_recomp(rdram, ctx);
        goto after_1;
    // 0x80028A74: nop

    after_1:
    // 0x80028A78: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x80028A7C: lw          $v1, 0x300($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X300);
    // 0x80028A80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80028A84: beq         $v1, $v0, L_80028A94
    if (ctx->r3 == ctx->r2) {
        // 0x80028A88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80028A94;
    }
    // 0x80028A88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80028A8C: beq         $v1, $v0, L_80028AA0
    if (ctx->r3 == ctx->r2) {
        // 0x80028A90: nop
    
            goto L_80028AA0;
    }
    // 0x80028A90: nop

L_80028A94:
    // 0x80028A94: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80028A98: j           L_80028AA8
    // 0x80028A9C: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
        goto L_80028AA8;
    // 0x80028A9C: addiu       $a0, $a0, 0xF0
    ctx->r4 = ADD32(ctx->r4, 0XF0);
L_80028AA0:
    // 0x80028AA0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80028AA4: addiu       $a0, $a0, 0x9B0
    ctx->r4 = ADD32(ctx->r4, 0X9B0);
L_80028AA8:
    // 0x80028AA8: jal         0x8009C670
    // 0x80028AAC: nop

    osViSetMode_recomp(rdram, ctx);
        goto after_2;
    // 0x80028AAC: nop

    after_2:
    // 0x80028AB0: jal         0x80093060
    // 0x80028AB4: nop

    func_80093060_6E460(rdram, ctx);
        goto after_3;
    // 0x80028AB4: nop

    after_3:
    // 0x80028AB8: lui         $a0, 0x802D
    ctx->r4 = S32(0X802D << 16);
    // 0x80028ABC: ori         $a0, $a0, 0x4000
    ctx->r4 = ctx->r4 | 0X4000;
    // 0x80028AC0: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x80028AC4: jal         0x8009A2B0
    // 0x80028AC8: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    bzero_recomp(rdram, ctx);
        goto after_4;
    // 0x80028AC8: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    after_4:
    // 0x80028ACC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80028AD0: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x80028AD4: jal         0x80092F50
    // 0x80028AD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80092F50_6E350(rdram, ctx);
        goto after_5;
    // 0x80028AD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80028ADC: jal         0x8009C6C0
    // 0x80028AE0: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_6;
    // 0x80028AE0: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    after_6:
    // 0x80028AE4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80028AE8: jal         0x80092E10
    // 0x80028AEC: lw          $a0, 0x4FC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4FC0);
    func_80092E10_6E210(rdram, ctx);
        goto after_7;
    // 0x80028AEC: lw          $a0, 0x4FC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4FC0);
    after_7:
    // 0x80028AF0: jal         0x80093090
    // 0x80028AF4: nop

    func_80093090_6E490(rdram, ctx);
        goto after_8;
    // 0x80028AF4: nop

    after_8:
    // 0x80028AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80028AFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80028B00: sw          $v0, 0x6CA0($at)
    MEM_W(0X6CA0, ctx->r1) = ctx->r2;
    // 0x80028B04: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
    // 0x80028B08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80028B0C: sh          $v0, 0x6C9A($at)
    MEM_H(0X6C9A, ctx->r1) = ctx->r2;
    // 0x80028B10: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x80028B14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80028B18: sh          $v0, 0x6C9C($at)
    MEM_H(0X6C9C, ctx->r1) = ctx->r2;
    // 0x80028B1C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80028B20: jr          $ra
    // 0x80028B24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80028B24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8009417C_6F57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009417C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094180: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80094184: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x80094188: addiu       $s0, $s0, 0x58F8
    ctx->r16 = ADD32(ctx->r16, 0X58F8);
    // 0x8009418C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094190: jal         0x80099620
    // 0x80094194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osContStartQuery_recomp(rdram, ctx);
        goto after_0;
    // 0x80094194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80094198: bne         $v0, $zero, L_800941BC
    if (ctx->r2 != 0) {
        // 0x8009419C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_800941BC;
    }
    // 0x8009419C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800941A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800941A4: jal         0x8009A5E0
    // 0x800941A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800941A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x800941AC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800941B0: jal         0x800996A0
    // 0x800941B4: addiu       $a0, $a0, -0x2358
    ctx->r4 = ADD32(ctx->r4, -0X2358);
    osContGetQuery_recomp(rdram, ctx);
        goto after_2;
    // 0x800941B4: addiu       $a0, $a0, -0x2358
    ctx->r4 = ADD32(ctx->r4, -0X2358);
    after_2:
    // 0x800941B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800941BC:
    // 0x800941BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800941C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800941C4: jr          $ra
    // 0x800941C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800941C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800463CC_217CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800463CC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800463D0: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x800463D4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x800463D8: beq         $v0, $zero, L_800463E8
    if (ctx->r2 == 0) {
        // 0x800463DC: nop
    
            goto L_800463E8;
    }
    // 0x800463DC: nop

    // 0x800463E0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800463E4: sh          $zero, 0x5730($at)
    MEM_H(0X5730, ctx->r1) = 0;
L_800463E8:
    // 0x800463E8: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x800463EC: bgtz        $v0, L_800463F8
    if (SIGNED(ctx->r2) > 0) {
        // 0x800463F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800463F8;
    }
    // 0x800463F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800463F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800463F8:
    // 0x800463F8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800463FC: jr          $ra
    // 0x80046400: sb          $v0, -0x7818($at)
    MEM_B(-0X7818, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80046400: sb          $v0, -0x7818($at)
    MEM_B(-0X7818, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80093C88_6F088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093C88: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80093C8C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80093C90: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x80093C94: sh          $a0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r4;
    // 0x80093C98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80093C9C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80093CA0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80093CA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80093CA8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80093CAC: jal         0x8009A470
    // 0x80093CB0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80093CB0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80093CB4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80093CB8: addiu       $a0, $a0, -0xC90
    ctx->r4 = ADD32(ctx->r4, -0XC90);
    // 0x80093CBC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80093CC0: jal         0x8009A710
    // 0x80093CC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80093CC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80093CC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80093CCC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80093CD0: jal         0x8009A5E0
    // 0x80093CD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80093CD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80093CD8: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80093CDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80093CE0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80093CE4: jr          $ra
    // 0x80093CE8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80093CE8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800511C8_2C5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800511C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800511CC: addiu       $v0, $v0, 0x5990
    ctx->r2 = ADD32(ctx->r2, 0X5990);
    // 0x800511D0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800511D4: jr          $ra
    // 0x800511D8: sw          $v0, 0x988($at)
    MEM_W(0X988, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800511D8: sw          $v0, 0x988($at)
    MEM_W(0X988, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80034E74_10274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034E74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034E78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80034E7C: addiu       $s0, $zero, 0x200
    ctx->r16 = ADD32(0, 0X200);
    // 0x80034E80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80034E84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034E88: sb          $v0, 0x4349($at)
    MEM_B(0X4349, ctx->r1) = ctx->r2;
    // 0x80034E8C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80034E90: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80034E94: addiu       $a1, $a1, 0x4348
    ctx->r5 = ADD32(ctx->r5, 0X4348);
    // 0x80034E98: addiu       $a0, $a1, 0x68
    ctx->r4 = ADD32(ctx->r5, 0X68);
    // 0x80034E9C: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x80034EA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034EA4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034EA8: sw          $s0, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r16;
    // 0x80034EAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034EB0: sb          $zero, 0x4DFD($at)
    MEM_B(0X4DFD, ctx->r1) = 0;
    // 0x80034EB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034EB8: sb          $v0, 0x4352($at)
    MEM_B(0X4352, ctx->r1) = ctx->r2;
    // 0x80034EBC: jal         0x8009A3B4
    // 0x80034EC0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80034EC0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80034EC4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80034EC8: lw          $a1, 0x4354($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4354);
    // 0x80034ECC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80034ED0: lw          $a2, 0x4358($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4358);
    // 0x80034ED4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80034ED8: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80034EDC: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80034EE0: lh          $t0, 0x49C4($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X49C4);
    // 0x80034EE4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80034EE8: lh          $v1, 0x49C6($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C6);
    // 0x80034EEC: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80034EF0: lh          $t1, 0x49C8($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X49C8);
    // 0x80034EF4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80034EF8: lh          $a0, 0x4A06($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4A06);
    // 0x80034EFC: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80034F00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034F04: sw          $v0, 0x43A4($at)
    MEM_W(0X43A4, ctx->r1) = ctx->r2;
    // 0x80034F08: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80034F0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034F10: sw          $v0, 0x438C($at)
    MEM_W(0X438C, ctx->r1) = ctx->r2;
    // 0x80034F14: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x80034F18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034F1C: sw          $s0, 0x4384($at)
    MEM_W(0X4384, ctx->r1) = ctx->r16;
    // 0x80034F20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034F24: sb          $v0, 0x4351($at)
    MEM_B(0X4351, ctx->r1) = ctx->r2;
    // 0x80034F28: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80034F2C: addiu       $v1, $v1, -0x96
    ctx->r3 = ADD32(ctx->r3, -0X96);
    // 0x80034F30: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x80034F34: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x80034F38: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80034F3C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034F40: sw          $a1, 0x436C($at)
    MEM_W(0X436C, ctx->r1) = ctx->r5;
    // 0x80034F44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034F48: sw          $a2, 0x4370($at)
    MEM_W(0X4370, ctx->r1) = ctx->r6;
    // 0x80034F4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034F50: sw          $a3, 0x4374($at)
    MEM_W(0X4374, ctx->r1) = ctx->r7;
    // 0x80034F54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034F58: sw          $t0, 0x43D0($at)
    MEM_W(0X43D0, ctx->r1) = ctx->r8;
    // 0x80034F5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034F60: sw          $v1, 0x43D4($at)
    MEM_W(0X43D4, ctx->r1) = ctx->r3;
    // 0x80034F64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034F68: sw          $t1, 0x43D8($at)
    MEM_W(0X43D8, ctx->r1) = ctx->r9;
    // 0x80034F6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034F70: sw          $a0, 0x4388($at)
    MEM_W(0X4388, ctx->r1) = ctx->r4;
    // 0x80034F74: beq         $v0, $zero, L_80034F9C
    if (ctx->r2 == 0) {
        // 0x80034F78: subu        $v1, $a2, $a0
        ctx->r3 = SUB32(ctx->r6, ctx->r4);
            goto L_80034F9C;
    }
    // 0x80034F78: subu        $v1, $a2, $a0
    ctx->r3 = SUB32(ctx->r6, ctx->r4);
    // 0x80034F7C: addiu       $v0, $a2, -0x1000
    ctx->r2 = ADD32(ctx->r6, -0X1000);
    // 0x80034F80: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80034F84: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80034F88: beq         $v0, $zero, L_80034FBC
    if (ctx->r2 == 0) {
        // 0x80034F8C: addiu       $v0, $a0, 0x1000
        ctx->r2 = ADD32(ctx->r4, 0X1000);
            goto L_80034FBC;
    }
    // 0x80034F8C: addiu       $v0, $a0, 0x1000
    ctx->r2 = ADD32(ctx->r4, 0X1000);
    // 0x80034F90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034F94: j           L_80034FBC
    // 0x80034F98: sw          $v0, 0x4388($at)
    MEM_W(0X4388, ctx->r1) = ctx->r2;
        goto L_80034FBC;
    // 0x80034F98: sw          $v0, 0x4388($at)
    MEM_W(0X4388, ctx->r1) = ctx->r2;
L_80034F9C:
    // 0x80034F9C: subu        $v1, $a0, $a2
    ctx->r3 = SUB32(ctx->r4, ctx->r6);
    // 0x80034FA0: addiu       $v0, $a0, -0x1000
    ctx->r2 = ADD32(ctx->r4, -0X1000);
    // 0x80034FA4: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x80034FA8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80034FAC: beq         $v0, $zero, L_80034FBC
    if (ctx->r2 == 0) {
        // 0x80034FB0: addiu       $v0, $a2, 0x1000
        ctx->r2 = ADD32(ctx->r6, 0X1000);
            goto L_80034FBC;
    }
    // 0x80034FB0: addiu       $v0, $a2, 0x1000
    ctx->r2 = ADD32(ctx->r6, 0X1000);
    // 0x80034FB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034FB8: sw          $v0, 0x4370($at)
    MEM_W(0X4370, ctx->r1) = ctx->r2;
L_80034FBC:
    // 0x80034FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034FC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80034FC4: jr          $ra
    // 0x80034FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80034FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80093A20_6EE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093A20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80093A24: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80093A28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80093A2C: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    // 0x80093A30: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80093A34: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80093A38: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80093A3C: jal         0x80093C88
    // 0x80093A40: sb          $s0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r16;
    func_80093C88_6F088(rdram, ctx);
        goto after_0;
    // 0x80093A40: sb          $s0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80093A44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80093A48: jal         0x80094460
    // 0x80093A4C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80093A4C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80093A50: bne         $s1, $zero, L_80093A78
    if (ctx->r17 != 0) {
        // 0x80093A54: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80093A78;
    }
    // 0x80093A54: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80093A58: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x80093A5C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80093A60: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80093A64: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80093A68: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80093A6C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80093A70: j           L_80093A90
    // 0x80093A74: sb          $v1, -0x3C37($at)
    MEM_B(-0X3C37, ctx->r1) = ctx->r3;
        goto L_80093A90;
    // 0x80093A74: sb          $v1, -0x3C37($at)
    MEM_B(-0X3C37, ctx->r1) = ctx->r3;
L_80093A78:
    // 0x80093A78: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x80093A7C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80093A80: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80093A84: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80093A88: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80093A8C: sb          $zero, -0x3C37($at)
    MEM_B(-0X3C37, ctx->r1) = 0;
L_80093A90:
    // 0x80093A90: jal         0x80094460
    // 0x80093A94: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_2;
    // 0x80093A94: nop

    after_2:
    // 0x80093A98: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80093A9C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80093AA0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80093AA4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80093AA8: jr          $ra
    // 0x80093AAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80093AAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80085BC4_60FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80085BC4: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x80085BC8: lw          $a2, 0x14($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X14);
    // 0x80085BCC: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80085BD0: lw          $a3, 0x24($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X24);
    // 0x80085BD4: srl         $v0, $a1, 16
    ctx->r2 = S32(U32(ctx->r5) >> 16);
    // 0x80085BD8: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80085BDC: srl         $v0, $a1, 24
    ctx->r2 = S32(U32(ctx->r5) >> 24);
    // 0x80085BE0: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    // 0x80085BE4: lhu         $t0, 0xE($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XE);
    // 0x80085BE8: srl         $v0, $a2, 16
    ctx->r2 = S32(U32(ctx->r6) >> 16);
    // 0x80085BEC: sb          $v0, 0x16($a0)
    MEM_B(0X16, ctx->r4) = ctx->r2;
    // 0x80085BF0: srl         $v0, $a2, 24
    ctx->r2 = S32(U32(ctx->r6) >> 24);
    // 0x80085BF4: sb          $v0, 0x17($a0)
    MEM_B(0X17, ctx->r4) = ctx->r2;
    // 0x80085BF8: lhu         $t1, 0x16($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X16);
    // 0x80085BFC: sb          $a1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r5;
    // 0x80085C00: srl         $a1, $a1, 8
    ctx->r5 = S32(U32(ctx->r5) >> 8);
    // 0x80085C04: sb          $a2, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r6;
    // 0x80085C08: srl         $a2, $a2, 8
    ctx->r6 = S32(U32(ctx->r6) >> 8);
    // 0x80085C0C: srl         $v0, $v1, 8
    ctx->r2 = S32(U32(ctx->r3) >> 8);
    // 0x80085C10: sb          $v0, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = ctx->r2;
    // 0x80085C14: srl         $v0, $v1, 16
    ctx->r2 = S32(U32(ctx->r3) >> 16);
    // 0x80085C18: sb          $v1, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r3;
    // 0x80085C1C: srl         $v1, $v1, 24
    ctx->r3 = S32(U32(ctx->r3) >> 24);
    // 0x80085C20: sb          $v0, 0x1E($a0)
    MEM_B(0X1E, ctx->r4) = ctx->r2;
    // 0x80085C24: srl         $v0, $a3, 8
    ctx->r2 = S32(U32(ctx->r7) >> 8);
    // 0x80085C28: sb          $v0, 0x25($a0)
    MEM_B(0X25, ctx->r4) = ctx->r2;
    // 0x80085C2C: srl         $v0, $a3, 16
    ctx->r2 = S32(U32(ctx->r7) >> 16);
    // 0x80085C30: sb          $a3, 0x24($a0)
    MEM_B(0X24, ctx->r4) = ctx->r7;
    // 0x80085C34: srl         $a3, $a3, 24
    ctx->r7 = S32(U32(ctx->r7) >> 24);
    // 0x80085C38: sb          $a1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r5;
    // 0x80085C3C: sb          $a2, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r6;
    // 0x80085C40: sb          $v1, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r3;
    // 0x80085C44: sb          $v0, 0x26($a0)
    MEM_B(0X26, ctx->r4) = ctx->r2;
    // 0x80085C48: sb          $a3, 0x27($a0)
    MEM_B(0X27, ctx->r4) = ctx->r7;
    // 0x80085C4C: srl         $v0, $t0, 8
    ctx->r2 = S32(U32(ctx->r8) >> 8);
    // 0x80085C50: srl         $v1, $t1, 8
    ctx->r3 = S32(U32(ctx->r9) >> 8);
    // 0x80085C54: sb          $t0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r8;
    // 0x80085C58: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    // 0x80085C5C: sb          $t1, 0x16($a0)
    MEM_B(0X16, ctx->r4) = ctx->r9;
    // 0x80085C60: jr          $ra
    // 0x80085C64: sb          $v1, 0x17($a0)
    MEM_B(0X17, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80085C64: sb          $v1, 0x17($a0)
    MEM_B(0X17, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8008B184_66584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B184: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008B188: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x8008B18C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8008B190: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8008B194: jal         0x8008B4F4
    // 0x8008B198: sb          $zero, 0x10($sp)
    MEM_B(0X10, ctx->r29) = 0;
    func_8008B4F4_668F4(rdram, ctx);
        goto after_0;
    // 0x8008B198: sb          $zero, 0x10($sp)
    MEM_B(0X10, ctx->r29) = 0;
    after_0:
    // 0x8008B19C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8008B1A0: jr          $ra
    // 0x8008B1A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008B1A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80032498_D898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003249C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800324A0: jal         0x800324D0
    // 0x800324A4: nop

    func_800324D0_D8D0(rdram, ctx);
        goto after_0;
    // 0x800324A4: nop

    after_0:
    // 0x800324A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800324AC: jr          $ra
    // 0x800324B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800324B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80063F98_3F398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80063F98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80063F9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80063FA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80063FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80063FA8: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x80063FAC: beql        $a1, $zero, L_80063FE8
    if (ctx->r5 == 0) {
        // 0x80063FB0: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_80063FE8;
    }
    goto skip_0;
    // 0x80063FB0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    skip_0:
    // 0x80063FB4: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x80063FB8: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80063FBC: lbu         $v1, 0x5410($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5410);
    // 0x80063FC0: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80063FC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80063FC8: lbu         $a2, 0x2($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X2);
    // 0x80063FCC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80063FD0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80063FD4: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
    // 0x80063FD8: lbu         $a0, 0x1($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1);
    // 0x80063FDC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80063FE0: j           L_80064024
    // 0x80063FE4: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
        goto L_80064024;
    // 0x80063FE4: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
L_80063FE8:
    // 0x80063FE8: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x80063FEC: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x80063FF0: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80063FF4: lbu         $a0, 0x5410($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X5410);
    // 0x80063FF8: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x80063FFC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80064000: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80064004: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80064008: lb          $v0, -0x6F90($at)
    ctx->r2 = MEM_B(ctx->r1, -0X6F90);
    // 0x8006400C: lbu         $a0, 0x1($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X1);
    // 0x80064010: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80064014: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80064018: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006401C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80064020: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
L_80064024:
    // 0x80064024: jal         0x80061510
    // 0x80064028: nop

    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x80064028: nop

    after_0:
    // 0x8006402C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80064030: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80064034: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80064038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006403C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80064040: jr          $ra
    // 0x80064044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80064044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
